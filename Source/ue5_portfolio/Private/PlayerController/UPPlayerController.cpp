// This is ue5_portfolio Source Code


#include "PlayerController/UPPlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "ue5_portfolio/ue5_portfolioCharacter.h"


AUPPlayerController::AUPPlayerController()
{
	// Input
	ConstructorHelpers::FObjectFinder<UInputMappingContext> MappingContext(TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Input/IMC_Default.IMC_Default'"));
	if (MappingContext.Succeeded())
		InputMappingContext = MappingContext.Object;

	ConstructorHelpers::FObjectFinder<UInputAction> MoveAsset(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Move.IA_Move'"));
	if (MoveAsset.Succeeded())
		MoveAction = MoveAsset.Object;

	ConstructorHelpers::FObjectFinder<UInputAction> TurnAsset(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Turn.IA_Turn'"));
	if (TurnAsset.Succeeded())
		TurnAction = TurnAsset.Object;

	ConstructorHelpers::FObjectFinder<UInputAction> LookAsset(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Look.IA_Look'"));
	if (LookAsset.Succeeded())
		LookAction = LookAsset.Object;

	ConstructorHelpers::FObjectFinder<UInputAction> JumpAsset(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Jump.IA_Jump'"));
	if (LookAsset.Succeeded())
		JumpAction = JumpAsset.Object;
}

void AUPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	
	// EnhancedInput
	auto* SubSystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (SubSystem)
	{
		SubSystem->AddMappingContext(InputMappingContext, 0);
	}
	
	Aue5_portfolioCharacter* playerCharacter = 
		Cast<Aue5_portfolioCharacter>(PlayerCharacter);
	if (playerCharacter)
	{
		ActionState = playerCharacter->GetActionState();
	}
}

void AUPPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AUPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (auto* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{		
		EnhancedInputComponent->BindAction
		(MoveAction, ETriggerEvent::Triggered, this, &AUPPlayerController::IA_Move);
		EnhancedInputComponent->BindAction
		(TurnAction, ETriggerEvent::Triggered, this, &AUPPlayerController::IA_Turn);
		EnhancedInputComponent->BindAction
		(LookAction, ETriggerEvent::Triggered, this, &AUPPlayerController::IA_Look);
		EnhancedInputComponent->BindAction
			(JumpAction, ETriggerEvent::Triggered, this, &AUPPlayerController::Jump);
		/*EnhancedInputComponent->BindAction
			(JumpAction, ETriggerEvent::Completed, this, &AUPPlayerController::StopJumping);*/
	}
}

void AUPPlayerController::IA_Move(const FInputActionValue& Value)
{
	if (ActionState != EActionState::EAS_Unoccupied) return;

	FVector2D MovementVector = Value.Get<FVector2D>();

	if (MovementVector.X != 0)
	{
		FRotator Rotator = GetControlRotation();
		FVector Direction = UKismetMathLibrary::GetForwardVector(FRotator(0, Rotator.Yaw, 0));
		GetPawn()->AddMovementInput(Direction, MovementVector.X);
	}

	if (MovementVector.Y != 0)
	{
		FRotator Rotator = GetControlRotation();
		FVector Direction = UKismetMathLibrary::GetRightVector(FRotator(0, Rotator.Yaw, 0));
		GetPawn()->AddMovementInput(Direction, MovementVector.Y);
	}
}

void AUPPlayerController::IA_Turn(const FInputActionValue& Value)
{
	float Val = Value.Get<float>();
	GetPawn()->AddControllerYawInput(Val);
}

void AUPPlayerController::IA_Look(const FInputActionValue& Value)
{
	float Val = Value.Get<float>();
	GetPawn()->AddControllerPitchInput(Val);
}

void AUPPlayerController::Jump()
{
	GetCharacter()->Jump();
}

//void AUPPlayerController::StopJumping()
//{
//	GetCharacter()->StopJumping();
//}
