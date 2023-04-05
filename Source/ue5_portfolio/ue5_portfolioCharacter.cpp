// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue5_portfolioCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/AttributeComponent.h"
#include "Items/Item.h"
#include "Items/Weapons/Weapon.h"
#include "Animation/AnimMontage.h"
#include "HUD/PlayerHUD.h"
#include "HUD/PlayerOverlay.h"

//////////////////////////////////////////////////////////////////////////
// Aue5_portfolioCharacter

Aue5_portfolioCharacter::Aue5_portfolioCharacter()
{

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);


	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToAllChannels(ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_WorldDynamic, ECR_Overlap);
	GetMesh()->SetGenerateOverlapEvents(true);

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void Aue5_portfolioCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &Aue5_portfolioCharacter::Jump);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, 
		&Aue5_portfolioCharacter::InteractKeyPressed);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, 
		&Aue5_portfolioCharacter::Attack);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &Aue5_portfolioCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &Aue5_portfolioCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	//PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &Aue5_portfolioCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	//PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &Aue5_portfolioCharacter::LookUpAtRate);

	// handle touch devices
	/*PlayerInputComponent->BindTouch(IE_Pressed, this, &Aue5_portfolioCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &Aue5_portfolioCharacter::TouchStopped);*/
}

void Aue5_portfolioCharacter::Jump()
{
	if (IsUnoccupied())
	{
		Super::Jump();
	}
}

bool Aue5_portfolioCharacter::IsUnoccupied()
{
	return ActionState == EActionState::EAS_Unoccupied;
}

float Aue5_portfolioCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	HandleDamage(DamageAmount);
	SetHUDHealth();
	return DamageAmount;
}

void Aue5_portfolioCharacter::GetHit_Implementation(const FVector& impactPoint, AActor* Hitter)
{
	//UE_LOG(LogTemp, Warning, TEXT("Get hit..."));

	//HitReaction();

	Super::GetHit_Implementation(impactPoint, Hitter);

	SetWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
	if (Attributes&&Attributes->GetHealthRatio()>0.f)
	{
		ActionState = EActionState::EAS_HitReaction;
	}
}

void Aue5_portfolioCharacter::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add(FName("EngageableTarget"));

	InitializePlayerOverlay();
}

void Aue5_portfolioCharacter::InitializePlayerOverlay()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		APlayerHUD* PlayerHUD = Cast<APlayerHUD>(PlayerController->GetHUD());
		if (PlayerHUD)
		{
			PlayerOverlay = PlayerHUD->GetPlayerOverlay();
			if (PlayerOverlay && Attributes)
			{
				PlayerOverlay->SetHealthBarRatio(Attributes->GetHealthRatio());
				PlayerOverlay->SetManaBarRatio(1.f);
			}
		}
	}
}

void Aue5_portfolioCharacter::SetHUDHealth()
{
	if (PlayerOverlay && Attributes)
	{
		PlayerOverlay->SetHealthBarRatio(Attributes->GetHealthRatio());
	}
}

//void Aue5_portfolioCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
//{
//	Jump();
//}
//
//void Aue5_portfolioCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
//{
//	StopJumping();
//}



void Aue5_portfolioCharacter::InteractKeyPressed()
{
	AWeapon* overlappingWeapon = Cast<AWeapon>(overlappingItem);
	if (overlappingWeapon)
	{
		EquipWeapon(overlappingWeapon);
	}

	else
	{
		if (CanDisarm())
		{
			DisArm();
		}

		else if (CanArm())
		{
			Arm();
		}
	}
}

void Aue5_portfolioCharacter::Attack()
{
	if(CanAttack())
	{
		DefaultAttack();
		ActionState = EActionState::EAS_Attacking;
	}

	if (ActionState==EActionState::EAS_Attacking)
	{
		bCanNextAttack = true;
	}
}

void Aue5_portfolioCharacter::HitReaction()
{
	PlayRandomMontageSection(HitReactMontage, hitMontageSections);
}

void Aue5_portfolioCharacter::DefaultAttack()
{
	UE_LOG(LogTemp, Warning, TEXT("Count:%d"), comboCount);

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && attackMontage)
	{
		//AnimInstance->Montage_Play(attackMontage);
		const char* sectionList[] = { "Attack", "Attack2", "Attack3" };

		if (!(AnimInstance->Montage_IsPlaying(attackMontage)))
		{
			AnimInstance->Montage_Play(attackMontage);
		}

		else if (AnimInstance->Montage_IsPlaying(attackMontage))
		{
			AnimInstance->Montage_Play(attackMontage);
			AnimInstance->Montage_JumpToSection(FName(sectionList[comboCount]), attackMontage);
		}
	}
}

void Aue5_portfolioCharacter::AttackInputChecking()
{
	if (comboCount>=2)
	{
		comboCount = 0;
	}

	if (bCanNextAttack)
	{
		comboCount++;
		bCanNextAttack = false;
		DefaultAttack();
	}
}

void Aue5_portfolioCharacter::EquipWeapon(AWeapon* Weapon)
{
	Weapon->Equip(GetMesh(), FName("RightHandSocket"),
		this, this);
	Weapon->SetOwner(this);
	Weapon->SetInstigator(this);
	CharacterState = ECharacterState::ECS_EquippedTwoHandedWeapon;
	overlappingItem = nullptr;
	EquippedWeapon = Weapon;
}

void Aue5_portfolioCharacter::AttackEnd()
{
	ActionState = EActionState::EAS_Unoccupied;
	comboCount = 0;
}

bool Aue5_portfolioCharacter::CanAttack()
{
	return ActionState == EActionState::EAS_Unoccupied &&
		CharacterState != ECharacterState::ECS_Unequipped;
}

bool Aue5_portfolioCharacter::CanDisarm()
{
	return ActionState == EActionState::EAS_Unoccupied &&
		CharacterState != ECharacterState::ECS_Unequipped;
}

bool Aue5_portfolioCharacter::CanArm()
{
	return ActionState == EActionState::EAS_Unoccupied&&
		CharacterState == ECharacterState::ECS_Unequipped&&EquippedWeapon;
}

void Aue5_portfolioCharacter::DisArm()
{
	PlayEquipMontage(FName("Unequip"));
	CharacterState = ECharacterState::ECS_Unequipped;
	ActionState = EActionState::EAS_EquippingWeapon;
}

void Aue5_portfolioCharacter::Arm()
{
	PlayEquipMontage(FName("Equip"));
	CharacterState = ECharacterState::ECS_EquippedTwoHandedWeapon;
	ActionState = EActionState::EAS_EquippingWeapon;
}

void Aue5_portfolioCharacter::PlayEquipMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if(AnimInstance&&EquipMontage)
	{
		AnimInstance->Montage_Play(EquipMontage);
		AnimInstance->Montage_JumpToSection(SectionName, EquipMontage);
	}
}

void Aue5_portfolioCharacter::Die()
{
	Super::Die();

	ActionState = EActionState::EAS_Dead;
	DisableMeshCollision();
}

void Aue5_portfolioCharacter::AttachWeaponToBack()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->AttachMeshToSocket(GetMesh(), FName("SpineSocket"));
	}
}

void Aue5_portfolioCharacter::AttachWeaponToHand()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->AttachMeshToSocket(GetMesh(), FName("RightHandSocket"));
	}
}

void Aue5_portfolioCharacter::FinishEquipping()
{
	ActionState = EActionState::EAS_Unoccupied;
}

void Aue5_portfolioCharacter::HitReactEnd()
{
	ActionState = EActionState::EAS_Unoccupied;
}

void Aue5_portfolioCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void Aue5_portfolioCharacter::MoveForward(float Value)
{
	if (ActionState != EActionState::EAS_Unoccupied) return;

	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void Aue5_portfolioCharacter::MoveRight(float Value)
{
	if (ActionState != EActionState::EAS_Unoccupied) return;

	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
