// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "Characters/CharacterTypes.h"
#include "Enemy.generated.h"


class UWidgetComponent;
class UHealthBarComponent;
class UPawnSensingComponent;


UCLASS()
class UE5_PORTFOLIO_API AEnemy : public ABaseCharacter
{
	GENERATED_BODY()

public:
	AEnemy();
	/** <AActor> */
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser);
	//virtual void Destroyed() override;
	/** </AActor> */

	/*<IHitInterface>*/
	virtual void GetHit_Implementation(const FVector& impactPoint, AActor* Hitter) override;
	/*</IHitInterface>*/

protected:
	/** <AActor> */
	virtual void BeginPlay() override;
	/** </AActor> */

	/*<ABaseCharacter>*/
	virtual void Die() override;
	virtual void Attack() override;
	virtual bool CanAttack() override;
	virtual void HandleDamage(float DamageAmount) override;
	virtual void AttackEnd() override;
	/*</ABaseCharacter>*/

	

	UPROPERTY(BlueprintReadOnly)
		EEnemyState EnemyState = EEnemyState::EES_Patrolling;
private:

	/*AI Behavior*/
	void InitializeEnemy();
	void CheckCombatTarget();
	void CheckPatrolTarget();
	void HideHealthBar();
	void ShowHealthBar();
	void LoseInterest();
	void StartPatrolling();
	void ChaseTarget();
	bool isOutSideCombatRadius();
	bool isOutSideAttackRadius();
	bool isInsideAttackRadius();
	bool isAttacking();
	bool isChasing();
	bool isDead();
	bool isEngaged();
	void clearPatrolTimer();
	void StartAttackTimer();
	void clearAttackTimer();
	void PatrolTimerFinished();
	bool InTargetRange(AActor* target, double radius);
	void MoveToTarget(AActor* target);
	AActor* ChoosePatrolTarget();

	UFUNCTION()
	void PawnSeen(APawn* seenPawn);//callback for OnPawnSeen in UPawnSensingComponent


	/*Navigation*/
	UPROPERTY()
	class AAIController* EnemyController;

	UPROPERTY(VisibleAnywhere)
	UHealthBarComponent* healthBarWidget;

	UPROPERTY(VisibleAnywhere)
	UPawnSensingComponent* PawnSensing;

	UPROPERTY()
	AActor* CombatTarget;

	UPROPERTY(EditAnywhere)
	double CombatRadius = 500.f;

	UPROPERTY(EditAnywhere)
	double AttackRadius = 150.f;

	UPROPERTY(EditAnywhere)
	double PatrolRadius = 200.f;

	UPROPERTY(EditInstanceOnly, Category = "AI Navigation")
	AActor* PatrollTarget;

	UPROPERTY(EditInstanceOnly, Category = "AI Navigation")
	TArray<AActor*> PatrollTargets;
	
	FTimerHandle PatrolTimer;

	UPROPERTY(EditAnywhere, Category = "AI Navigation")
	float PatrolWaitMin = 3.f;

	UPROPERTY(EditAnywhere, Category = "AI Navigation")
	float PatrolWaitMax = 5.f;

	FTimerHandle AttackTimer;

	UPROPERTY(EditAnywhere, Category = Combat)
	float AttackMin = 0.5f;

	UPROPERTY(EditAnywhere, Category = Combat)
	float AttackMax = 1.2f;

	UPROPERTY(EditAnywhere, Category = Combat)
	float PatrollingSpeed = 125.f;

	UPROPERTY(EditAnywhere, Category = Combat)
	float ChasingSpeed = 300.f;

	UPROPERTY(EditAnywhere, Category = Combat)
		float DeathLifeSpan = 3.f;

};
