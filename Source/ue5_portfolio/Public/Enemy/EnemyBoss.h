// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "Characters/CharacterTypes.h"
#include "EnemyBoss.generated.h"

class UWidgetComponent;
class UHealthBarComponent;
class UBehaviorTree;

UCLASS()
class UE5_PORTFOLIO_API AEnemyBoss : public ABaseCharacter
{
	GENERATED_BODY()
public:
	AEnemyBoss();

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser) override;

	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

	virtual void HandleDamage(float DamageAmount) override;

	virtual void Die() override;

protected:
	
	void HideHealthBar();
	bool IsDead();

	UPROPERTY(BlueprintReadOnly)
	EEnemyState EnemyState = EEnemyState::EES_Patrolling;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset;

private:

	UPROPERTY(VisibleAnywhere)
	UHealthBarComponent* HealthBarWidget;

	UPROPERTY()
	AActor* CombatTarget;

	UPROPERTY(EditAnywhere)
	double CombatRadius = 500.f;

public:
	FORCEINLINE UBehaviorTree* GetBehaviorTreeAsset() const { return BehaviorTreeAsset; }
};
