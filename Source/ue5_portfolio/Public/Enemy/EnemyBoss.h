// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "EnemyBoss.generated.h"

/**
 * 
 */
UCLASS()
class UE5_PORTFOLIO_API AEnemyBoss : public ABaseCharacter
{
	GENERATED_BODY()
public:
	AEnemyBoss();

	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser) override;

	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

private:

};
