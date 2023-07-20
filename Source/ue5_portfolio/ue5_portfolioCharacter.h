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
class UUPComboActionData;

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

	virtual void Attack() override;

	void InteractKeyPressed();
protected:
	virtual void BeginPlay() override;

	void InitializePlayerOverlay();
	void SetHUDHealth();
	bool IsUnoccupied();
	
	virtual void Tick(float DeltaSeconds) override;

	//virtual void PlayAttackMontage() override;

	void HitReaction();

	void DefaultAttack();
	void ProcessComboCommand();

	void ComboActionBegin();
	void ComboActionEnd(UAnimMontage* TargetMontage, bool IsProperlyEnded);
	void SetComboCheckTimer();
	void ComboCheck();

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

	int32 CurrentCombo = 0;
	FTimerHandle ComboTimerHandle;
	bool HasNextComboCommand = false;

private:
	
	

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Combat, meta = (AllowPrivateAccess = "true"))
	UUPComboActionData* ComboActionData;

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

	

public:
	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }
	FORCEINLINE EActionState GetActionState() const { return ActionState; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE void SetOverlappingItem(AItem* item) { overlappingItem = item; }
};

