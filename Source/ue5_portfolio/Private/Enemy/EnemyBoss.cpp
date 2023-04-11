// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyBoss.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "HUD/HealthBarComponent.h"
#include "Components/AttributeComponent.h"


AEnemyBoss::AEnemyBoss()
{
	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, 
		ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera,
		ECollisionResponse::ECR_Block);
	GetMesh()->SetGenerateOverlapEvents(true);

	HealthBarWidget = CreateDefaultSubobject<UHealthBarComponent>(TEXT("HealthBar"));
	HealthBarWidget->SetupAttachment(GetRootComponent());
}

void AEnemyBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CombatTarget)
	{
		const double DistanceToTarget = (CombatTarget->GetActorLocation() - GetActorLocation()).Size();
		if (DistanceToTarget > CombatRadius)
		{
			CombatTarget = nullptr;
			if (HealthBarWidget)
			{
				HealthBarWidget->SetVisibility(false);
			}
		}
	}
}

void AEnemyBoss::BeginPlay()
{
	Super::BeginPlay();

	HideHealthBar();
}

float AEnemyBoss::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	HandleDamage(DamageAmount);
	CombatTarget = EventInstigator->GetPawn();

	return DamageAmount;
}

void AEnemyBoss::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	Super::GetHit_Implementation(ImpactPoint, Hitter);

	if (HealthBarWidget)
	{
		HealthBarWidget->SetVisibility(true);
	}
	

	
}

void AEnemyBoss::HandleDamage(float DamageAmount)
{
	Super::HandleDamage(DamageAmount);

	if (Attributes&&HealthBarWidget)
	{
		HealthBarWidget->SetHealthPercent(Attributes->GetHealthRatio());
	}
}

void AEnemyBoss::Die()
{
	isdead = true;
	Super::Die();

	//EnemyState = EEnemyState::EES_Dead;
	DisableMeshCollision();
	DisableCapsule();
}

void AEnemyBoss::HideHealthBar()
{
	if (HealthBarWidget)
	{
		HealthBarWidget->SetVisibility(false);
	}
}

bool AEnemyBoss::IsDead()
{
	return EnemyState == EEnemyState::EES_Dead;
}