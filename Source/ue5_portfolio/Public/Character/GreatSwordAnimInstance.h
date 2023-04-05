// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Characters/CharacterTypes.h"
#include "GreatSwordAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE5_PORTFOLIO_API UGreatSwordAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	class Aue5_portfolioCharacter* player;

	UPROPERTY(BlueprintReadOnly, Category=Movement)
	class UCharacterMovementComponent* playerMovement;

	UPROPERTY(BlueprintReadOnly, Category=Movement)
	float GroundSpeed;
	
	UPROPERTY(BlueprintReadOnly, Category=Movement)
	bool isFalling;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	EActionState ActionState;
	
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	TEnumAsByte<EDeathPose> DeathPose;
};
