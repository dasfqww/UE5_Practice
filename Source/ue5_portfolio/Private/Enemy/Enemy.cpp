// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Enemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "ue5_portfolio/DebugMacros.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AttributeComponent.h"
#include "HUD/HealthBarComponent.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	Attributes = CreateDefaultSubobject<UAttributeComponent>(TEXT("Attributes"));
	healthBarWidget = CreateDefaultSubobject<UHealthBarComponent>(TEXT("HealthBar"));
	healthBarWidget->SetupAttachment(GetRootComponent());
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (healthBarWidget)
	{
		healthBarWidget->SetVisibility(false);
	}
}

void AEnemy::Die()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && DeathMontage)
	{
		AnimInstance->Montage_Play(DeathMontage);
		const int32 selection = FMath::RandRange(0, 1);
		FName sectionName = FName();
		switch (selection)
		{
		case 0:
			sectionName = FName("Death1");
			DeathPose = EDeathPose::EDP_Death1;
			break;
		case 1:
			sectionName = FName("Death2");
			DeathPose = EDeathPose::EDP_Death2;
			break;
		}
		AnimInstance->Montage_JumpToSection(sectionName, DeathMontage);
	}

	if (healthBarWidget)
	{
		healthBarWidget->SetVisibility(false);
	}

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SetLifeSpan(3.f);
}

void AEnemy::PlayHitReactMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if(AnimInstance&&HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		AnimInstance->Montage_JumpToSection(SectionName, HitReactMontage);
	}
}

void AEnemy::DirectionalHitReact(const FVector& impactPoint)
{
	const FVector forward = GetActorForwardVector();
	//lower impact point to the enemy's actor location Z
	const FVector ImpactLowered(impactPoint.X, impactPoint.Y, GetActorLocation().Z);
	const FVector toHit = (ImpactLowered - GetActorLocation()).GetSafeNormal();

	//forward*toHit = |forward||toHit|*cos(theta)
	//|forward|=1, |toHit|=1, so Forward*toHit=cos(theta)
	const double cosTheta = FVector::DotProduct(forward, toHit);
	//Take the inverse cosine of cos(theta) to get theta
	double theta = FMath::Acos(cosTheta);
	//convert from radians to degrees
	theta = FMath::RadiansToDegrees(theta);

	//if CrossProduct points down, theta should be negative
	const FVector crossProduct = FVector::CrossProduct(forward, toHit);
	if (crossProduct.Z < 0)
	{
		theta *= -1.f;
	}

	FName Section("Hit_Back");

	if (theta >= -45.f && theta < 45.f)
	{
		Section = FName("Hit_Front");
	}

	else if (theta >= -135.f && theta < -45.f)
	{
		Section = FName("Hit_Left");
	}

	else if (theta >= 45.f && theta < 135.f)
	{
		Section = FName("Hit_Right");
	}

	PlayHitReactMontage(Section);

	/*UKismetSystemLibrary::DrawDebugArrow(this, GetActorLocation(),
		GetActorLocation() + crossProduct * 100.f, 5.f, FColor::Blue, 5.f);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f,
			FColor::Green, FString::Printf(TEXT("theta: %f"), theta));
	}

	UKismetSystemLibrary::DrawDebugArrow(this, GetActorLocation(),
		GetActorLocation() + forward * 60.f, 5.f, FColor::Red, 5.f);
	UKismetSystemLibrary::DrawDebugArrow(this, GetActorLocation(),
		GetActorLocation() + toHit * 60.f, 5.f, FColor::Green, 5.f);*/
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CombatTarget)
	{
		const double distanceToTarget = (CombatTarget->GetActorLocation()
			- GetActorLocation()).Size();
		if (distanceToTarget>CombatRadius)
		{
			CombatTarget = nullptr;
			if(healthBarWidget)
			{
				healthBarWidget->SetVisibility(false);
			}
		}
	}
}

void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::GetHit_Implementation(const FVector& impactPoint)
{
	//DRAW_SPHERE_COLOR(impactPoint, FColor::Orange);

	if (healthBarWidget)
	{
		healthBarWidget->SetVisibility(true);
	}

	if (Attributes&&Attributes->isAlive())
	{
		DirectionalHitReact(impactPoint);
	}
	else
	{
		Die();
	}

	if(HitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, HitSound, impactPoint);
	}

	if (hitParticles&&GetWorld())
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitParticles, impactPoint);
	}
}

float AEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	if (Attributes&&healthBarWidget)
	{
		Attributes->ReceiveDamage(DamageAmount);
		healthBarWidget->SetHealthPercent(Attributes->GetHealthPercent());
	}
	CombatTarget = EventInstigator->GetPawn();

	return DamageAmount;
}

