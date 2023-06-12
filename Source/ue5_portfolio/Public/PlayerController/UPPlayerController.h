// This is ue5_portfolio Source Code

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Characters/CharacterTypes.h"
#include "InputActionValue.h"
#include "UPPlayerController.generated.h"

/**
 * 
 */

class UInputAction;

UCLASS()
class UE5_PORTFOLIO_API AUPPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AUPPlayerController();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupInputComponent() override;

	UFUNCTION()
	void IA_Move(const FInputActionValue& Value);

	UFUNCTION()
	void IA_Turn(const FInputActionValue& Value);

	UFUNCTION()
	void IA_Look(const FInputActionValue& Value);

	UFUNCTION()
	void Jump();
	
	/*UFUNCTION()
	void StopJumping();*/
protected:

private:
	UPROPERTY()
	TObjectPtr<class Aue5_portfolioCharacter> PlayerCharacter;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputAction> TurnAction;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(VisibleAnywhere, Category = State)
	EActionState ActionState;

	/*UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;*/

public:
	//FORCEINLINE EActionState GetActionState() const { return ActionState; }
};
