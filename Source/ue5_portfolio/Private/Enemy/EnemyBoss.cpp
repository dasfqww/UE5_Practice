// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyBoss.h"

AEnemyBoss::AEnemyBoss()
{
}

void AEnemyBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AEnemyBoss::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	HandleDamage(DamageAmount);

	return DamageAmount;
}

void AEnemyBoss::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	Super::GetHit_Implementation(ImpactPoint, Hitter);


}
