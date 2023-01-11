// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Enemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "ue5_portfolio/DebugMacros.h"
#include "Components/AttributeComponent.h"
#include "HUD/HealthBarComponent.h"
#include "Perception/PawnSensingComponent.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
	

	
	healthBarWidget = CreateDefaultSubobject<UHealthBarComponent>(TEXT("HealthBar"));
	healthBarWidget->SetupAttachment(GetRootComponent());

	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SightRadius = 4000.f;
	PawnSensing->SetPeripheralVisionAngle(45.f);
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isDead()) return;

	if (EnemyState > EEnemyState::EES_Patrolling)
	{
		CheckCombatTarget();
	}
	else
	{
		CheckPatrolTarget();
	}
}

float AEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	HandleDamage(DamageAmount);
	CombatTarget = EventInstigator->GetPawn();
	ChaseTarget();
	return DamageAmount;
}

//void AEnemy::Destroyed()
//{
//	Super::Destroyed();
//}

void AEnemy::GetHit_Implementation(const FVector& impactPoint, AActor* Hitter)
{
	if(!isDead())
		ShowHealthBar();

	if (isAlive()&&Hitter)
	{
		DirectionalHitReact(Hitter->GetActorLocation());
	}
	else
	{
		Die();
	}

	PlayHitSound(impactPoint);

	SpawnHitParticles(impactPoint);

	clearPatrolTimer();
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (PawnSensing)
	{
		PawnSensing->OnSeePawn.AddDynamic(this, &AEnemy::PawnSeen);
	}
	InitializeEnemy();

	Tags.Add(FName("Enemy"));
}

void AEnemy::Die()
{
	isdead = true;
	EnemyState = EEnemyState::EES_Dead;
	PlayDeathMontage();
	clearAttackTimer();
	HideHealthBar();
	DisableCapsule();
	SetLifeSpan(DeathLifeSpan);
	GetCharacterMovement()->bOrientRotationToMovement = false;
}

void AEnemy::Attack()
{
	EnemyState = EEnemyState::EES_Engaged;
	Super::Attack();
	PlayAttackMontage();
}

bool AEnemy::CanAttack()
{
	bool bCanAttack = isInsideAttackRadius() && !isAttacking() && !isDead() && !isEngaged();
	return bCanAttack;
}

void AEnemy::HandleDamage(float DamageAmount)
{
	Super::HandleDamage(DamageAmount);

	if (Attributes && healthBarWidget)
	{
		healthBarWidget->SetHealthPercent(Attributes->GetHealthPercent());
	}
}

int32 AEnemy::PlayDeathMontage()
{
	const int32 selection = Super::PlayDeathMontage();
	TEnumAsByte<EDeathPose> Pose(selection);

	if (Pose < EDeathPose::EDP_MAX)
	{
		DeathPose = Pose;
	}

	return selection;
}

void AEnemy::AttackEnd()
{
	EnemyState = EEnemyState::EES_NoState;
	CheckCombatTarget();
}

void AEnemy::InitializeEnemy()
{
	EnemyController = Cast<AAIController>(GetController());
	HideHealthBar();
	MoveToTarget(PatrollTarget);
}

void AEnemy::CheckCombatTarget()
{
	if (CombatTarget)
	{
		if (isOutSideCombatRadius())
		{
			clearAttackTimer();
			LoseInterest();
			if (!isEngaged())
			{
				StartPatrolling();
			}
		}

		else if (isOutSideAttackRadius() && !isChasing())
		{
			clearAttackTimer();
			if (!isEngaged())
			{
				ChaseTarget();
			}
		}

		else if (CanAttack())
		{
			clearAttackTimer();
			StartAttackTimer();
		}
	}
}

void AEnemy::CheckPatrolTarget()
{
	if (InTargetRange(PatrollTarget, PatrolRadius))
	{
		PatrollTarget = ChoosePatrolTarget();
		const float waitTime = FMath::RandRange(PatrolWaitMin, PatrolWaitMax);
		GetWorldTimerManager().SetTimer(PatrolTimer, this,
			&AEnemy::PatrolTimerFinished, waitTime);
	}
}

void AEnemy::PatrolTimerFinished()
{
	MoveToTarget(PatrollTarget);

	GetWorldTimerManager().ClearTimer(AttackTimer);
}

void AEnemy::HideHealthBar()
{
	if (healthBarWidget)
	{
		healthBarWidget->SetVisibility(false);
	}
}

void AEnemy::ShowHealthBar()
{
	if (healthBarWidget)
	{
		healthBarWidget->SetVisibility(true);
	}
}

void AEnemy::LoseInterest()
{
	CombatTarget = nullptr;
	HideHealthBar();
}

void AEnemy::StartPatrolling()
{
	EnemyState = EEnemyState::EES_Patrolling;
	GetCharacterMovement()->MaxWalkSpeed = 125.f;
	MoveToTarget(PatrollTarget);
}

void AEnemy::ChaseTarget()
{
	EnemyState = EEnemyState::EES_Chasing;
	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	MoveToTarget(CombatTarget);
}

bool AEnemy::isOutSideCombatRadius()
{
	return !InTargetRange(CombatTarget, CombatRadius);
}

bool AEnemy::isOutSideAttackRadius()
{
	return !InTargetRange(CombatTarget, AttackRadius);
}

bool AEnemy::isInsideAttackRadius()
{
	return InTargetRange(CombatTarget, AttackRadius);
}

bool AEnemy::isAttacking()
{
	return EnemyState == EEnemyState::EES_Attacking;
}

bool AEnemy::isChasing()
{
	return EnemyState == EEnemyState::EES_Chasing;
}

bool AEnemy::isDead()
{
	return EnemyState == EEnemyState::EES_Dead;
}

bool AEnemy::isEngaged()
{
	return EnemyState == EEnemyState::EES_Engaged;
}

void AEnemy::clearPatrolTimer()
{
	GetWorldTimerManager().ClearTimer(PatrolTimer);
}

void AEnemy::StartAttackTimer()
{
	EnemyState = EEnemyState::EES_Attacking;
	const float AttackTiime = FMath::RandRange(AttackMin, AttackMax);
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemy::Attack, AttackTiime);
}

void AEnemy::clearAttackTimer()
{
	GetWorldTimerManager().ClearTimer(AttackTimer);
}

bool AEnemy::InTargetRange(AActor* target, double radius)
{
	if (target == nullptr)return false;
	const double distanceToTarget = (target->GetActorLocation()
		- GetActorLocation()).Size();
	/*DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_SPHERE_SingleFrame(target->GetActorLocation());*/
	return distanceToTarget <= radius;
}

void AEnemy::MoveToTarget(AActor* target)
{
	if (EnemyController == nullptr || target == nullptr)return;

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalActor(target);
	MoveRequest.SetAcceptanceRadius(75.f);
	EnemyController->MoveTo(MoveRequest);
}

AActor* AEnemy::ChoosePatrolTarget()
{
	TArray<AActor*> vaildTargets;
	for (auto target : PatrollTargets)
	{
		if (target != PatrollTarget)
		{
			vaildTargets.AddUnique(target);
		}
	}

	const int32 patrolTargetNums = vaildTargets.Num();
	if (patrolTargetNums > 0)
	{
		const int32 targetSelection = FMath::RandRange(0, patrolTargetNums - 1);
		return vaildTargets[targetSelection];
	}

	return nullptr;
}

void AEnemy::PawnSeen(APawn* seenPawn)
{
	const bool bShouldChaseTarget =
		EnemyState != EEnemyState::EES_Dead &&
		EnemyState != EEnemyState::EES_Dead &&
		EnemyState < EEnemyState::EES_Attacking&&
		seenPawn->ActorHasTag(FName("Player"));

	if (bShouldChaseTarget)
	{
		CombatTarget = seenPawn;
		clearPatrolTimer();
		ChaseTarget();
	}
}