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
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Animation/AnimMontage.h"
#include "HUD/PlayerHUD.h"
#include "HUD/PlayerOverlay.h"
#include "Kismet/KismetMathLibrary.h"
#include "DataAssets/UPComboActionData.h"

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
}

//////////////////////////////////////////////////////////////////////////
// Input

void Aue5_portfolioCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	
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
				PlayerOverlay->SetHealthText();
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

void Aue5_portfolioCharacter::InteractKeyPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("interact.."));

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
		HasNextComboCommand = true;
		DefaultAttack();
		//ProcessComboCommand();
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
	UE_LOG(LogTemp, Warning, TEXT("Count:%d"), CurrentCombo);

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && attackMontage)
	{
		//AnimInstance->Montage_Play(attackMontage);
		const char* sectionList[] = { "Attack1", "Attack2", "Attack3" };

		if (!(AnimInstance->Montage_IsPlaying(attackMontage)))
		{
			AnimInstance->Montage_Play(attackMontage);
		}

		else if (AnimInstance->Montage_IsPlaying(attackMontage))
		{
			AnimInstance->Montage_Play(attackMontage);
			AnimInstance->Montage_JumpToSection(FName(sectionList[CurrentCombo]), attackMontage);
		}
	}
}

void Aue5_portfolioCharacter::ProcessComboCommand()
{
	if (CurrentCombo==0)
	{
		ComboActionBegin();
		return;
	}

	if (!ComboTimerHandle.IsValid())
	{
		HasNextComboCommand = false;
	}
	else
	{
		HasNextComboCommand = true;
	}
}

void Aue5_portfolioCharacter::ComboActionBegin()
{
	CurrentCombo = 1;

	ActionState = EActionState::EAS_Attacking;

	const float AttackSpeedRate = 1.f;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->Montage_Play(attackMontage, AttackSpeedRate);

	FOnMontageEnded EndDelegate;
	EndDelegate.BindUObject(this, &Aue5_portfolioCharacter::ComboActionEnd);
	AnimInstance->Montage_SetEndDelegate(EndDelegate, attackMontage);

	ComboTimerHandle.Invalidate();
	SetComboCheckTimer();
}

void Aue5_portfolioCharacter::ComboActionEnd(UAnimMontage* TargetMontage, bool IsProperlyEnded)
{
	ensure(CurrentCombo != 0);
	CurrentCombo = 0;
}

void Aue5_portfolioCharacter::SetComboCheckTimer()
{
	int32 ComboIndex = CurrentCombo - 1;
	ensure(ComboActionData->EffectiveFrameCount.IsValidIndex(ComboIndex));

	const float AttackSpeedRate = 1.f;
	float ComboEffectiveTime =
		(ComboActionData->EffectiveFrameCount[ComboIndex] / ComboActionData->FrameRate) 
			/ AttackSpeedRate;
	if (ComboEffectiveTime>0.f)
	{
		GetWorld()->GetTimerManager().SetTimer
			(ComboTimerHandle, this, &Aue5_portfolioCharacter::ComboCheck, 
				ComboEffectiveTime, false);
	}
}

void Aue5_portfolioCharacter::ComboCheck()
{
	ComboTimerHandle.Invalidate();
	if (HasNextComboCommand)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		CurrentCombo = FMath::Clamp(CurrentCombo + 1, 1, ComboActionData->MaxComboCount);
		FName NextSection = *FString::Printf(TEXT("%s%d"),
				*ComboActionData->MontageSectionNamePrefix, CurrentCombo);
		AnimInstance->Montage_JumpToSection(NextSection, attackMontage);
		SetComboCheckTimer();
		HasNextComboCommand = false;
	}
}

void Aue5_portfolioCharacter::AttackInputChecking()
{
	if (CurrentCombo>=2)
	{
		CurrentCombo = 0;
	}

	if (bCanNextAttack)
	{
		CurrentCombo++;
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
	CurrentCombo = 0;
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