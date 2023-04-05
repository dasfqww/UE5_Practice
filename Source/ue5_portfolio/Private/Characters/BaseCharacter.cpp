// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BaseCharacter.h"
#include "Items/Item.h"
#include "Items/Weapons/Weapon.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/AttributeComponent.h"
#include "Kismet/GameplayStatics.h"

ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Attributes = CreateDefaultSubobject<UAttributeComponent>(TEXT("Attributes"));
	GetCapsuleComponent()->SetCollisionResponseToChannel
	(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseCharacter::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	if (!isAlive())
	{
		Die();
	}

	PlayHitSound(ImpactPoint);
	SpawnHitParticles(ImpactPoint);
}

void ABaseCharacter::Attack()
{
}

void ABaseCharacter::Die()
{
	PlayDeathMontage();
}

void ABaseCharacter::PlayHitReactMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		AnimInstance->Montage_JumpToSection(SectionName, HitReactMontage);
	}
}

void ABaseCharacter::DirectionalHitReact(const FVector& ImpactPoint)
{
	const FVector forward = GetActorForwardVector();
	//lower impact point to the enemy's actor location Z
	const FVector ImpactLowered(ImpactPoint.X, ImpactPoint.Y, GetActorLocation().Z);
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
}

void ABaseCharacter::PlayHitSound(const FVector& ImpactPoint)
{
	if (HitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, HitSound, ImpactPoint);
	}
}

void ABaseCharacter::SpawnHitParticles(const FVector& ImpactPoint)
{
	if (hitParticles && GetWorld())
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitParticles, ImpactPoint);
	}
}

void ABaseCharacter::HandleDamage(float DamageAmount)
{
	if (Attributes)
	{
		Attributes->ReceiveDamage(DamageAmount);
	}
}

void ABaseCharacter::PlayMontageSection(UAnimMontage* Montage, const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	if (AnimInstance&&Montage)
	{
		AnimInstance->Montage_Play(Montage);
		AnimInstance->Montage_JumpToSection(SectionName, Montage);
	}
}

int32 ABaseCharacter::PlayRandomMontageSection(UAnimMontage* Montage, const TArray<FName>& SectionNames)
{
	if (SectionNames.Num() <= 0) return -1;
	const int32 maxSectionIndex = SectionNames.Num() - 1;
	const int32 selection = FMath::RandRange(0, maxSectionIndex);
	PlayMontageSection(Montage, SectionNames[selection]);

	return selection;
}

int32 ABaseCharacter::PlayDeathMontage()
{
	const int32 selection = PlayRandomMontageSection(DeathMontage, deathMontageSections);
	TEnumAsByte<EDeathPose> Pose(selection);

	if (Pose < EDeathPose::EDP_MAX)
	{
		DeathPose = Pose;
	}

	return selection;
}

int32 ABaseCharacter::PlayAttackMontage()
{
	return PlayRandomMontageSection(attackMontage, attackMontageSections);
}

bool ABaseCharacter::CanAttack()
{
	return false;
}

void ABaseCharacter::DisableCapsule()
{
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

bool ABaseCharacter::isAlive()
{
	return Attributes && Attributes->isAlive();
}

void ABaseCharacter::DisableMeshCollision()
{
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseCharacter::AttackEnd()
{
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type collisionEnabled)
{
	if (EquippedWeapon && EquippedWeapon->GetWeaponBox())
	{
		EquippedWeapon->GetWeaponBox()->SetCollisionEnabled(collisionEnabled);
		EquippedWeapon->ignoreActors.Empty();
	}
}
