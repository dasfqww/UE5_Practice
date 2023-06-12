// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Characters/CharacterTypes.h"
#include "Characters/BaseCharacter.h"
#include "ue5_portfolioCharacter.generated.h"

class UParticleSystem;
class UBoxComponent;
class AItem;
class UAnimMontage;
class UPlayerOverlay;
class UInputAction;

UCLASS(config=Game)
class Aue5_portfolioCharacter : public ABaseCharacter
{
	GENERATED_BODY()
public:
	Aue5_portfolioCharacter();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Jump() override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser) override;

	virtual void GetHit_Implementation(const FVector& impactPoint, AActor* Hitter) override;

protected:
	virtual void BeginPlay() override;

	void InitializePlayerOverlay();
	void SetHUDHealth();
	bool IsUnoccupied();

	virtual void Tick(float DeltaSeconds) override;

	/*UFUNCTION()
	void IA_Move(const FInputActionValue& Value);
	
	UFUNCTION()
	void IA_Turn(const FInputActionValue& Value);
	
	UFUNCTION()
	void IA_Look(const FInputActionValue& Value);*/

	/** Callbacks for input */
	void MoveForward(float Value);
	void MoveRight(float Value);
	void InteractKeyPressed();
	virtual void Attack() override;

	//virtual void PlayAttackMontage() override;

	void HitReaction();

	void DefaultAttack();

	UFUNCTION(BlueprintCallable)
		void AttackInputChecking();

	/*Combat*/
	void EquipWeapon(AWeapon* Weapon);
	virtual void AttackEnd() override;
	virtual bool CanAttack() override;
	bool CanDisarm();
	bool CanArm();
	void DisArm();
	void Arm();
	void PlayEquipMontage(const FName& SectionName);
	virtual void Die() override;

	UFUNCTION(BlueprintCallable)
		void AttachWeaponToBack();

	UFUNCTION(BlueprintCallable)
		void AttachWeaponToHand();

	UFUNCTION(BlueprintCallable)
		void FinishEquipping();

	UFUNCTION(BlueprintCallable)
		void HitReactEnd();

	/** Handler for when a touch input begins. */
	//void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	///** Handler for when a touch input stops. */
	//void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	// APawn interface

	// End of APawn interface

private:
	/*UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category=Input)
	TObjectPtr<UInputAction> TurnAction;
	
	UPROPERTY(EditAnywhere, Category=Input)
	TObjectPtr<UInputAction> LookAction;*/

	/*UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputAction> JumpAction;*/

	/** Character components*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem *Effect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxCollision;

	UPROPERTY(VisibleInstanceOnly)
	AItem* overlappingItem;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* EquipMontage;

	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY()
	UPlayerOverlay* PlayerOverlay;

	bool bCanNextAttack=false;

	int comboCount=0;
	


public:
	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }
	FORCEINLINE EActionState GetActionState() const { return ActionState; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE void SetOverlappingItem(AItem* item) { overlappingItem = item; }
};

