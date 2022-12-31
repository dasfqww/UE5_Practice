// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "ue5_portfolio/CharacterTypes.h"
#include "Enemy.generated.h"

class UAttributeComponent;
class UWidgetComponent;
class UHealthBarComponent;

UCLASS()
class UE5_PORTFOLIO_API AEnemy : public ACharacter,public IHitInterface
{
	GENERATED_BODY()

public:
	AEnemy();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//interface function
	virtual void GetHit_Implementation(const FVector& impactPoint) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, 
		class AController* EventInstigator, AActor* DamageCauser);
private:
	UPROPERTY(VisibleAnywhere)
	UAttributeComponent* Attributes;

	UPROPERTY(VisibleAnywhere)
	UHealthBarComponent* healthBarWidget;

	UPROPERTY(EditDefaultsOnly, Category=Montages)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* DeathMontage;

	UPROPERTY(EditAnywhere, Category=Sounds)
	USoundBase* HitSound;

	UPROPERTY(EditAnywhere, Category=VisualEffects)
	UParticleSystem* hitParticles;

	UPROPERTY()
	AActor* CombatTarget;

	UPROPERTY()
	double CombatRadius = 500.f;

protected:
	virtual void BeginPlay() override;

	void Die();

	void PlayHitReactMontage(const FName& SectionName);

	void DirectionalHitReact(const FVector& ImpactPoint);

	UPROPERTY(BlueprintReadOnly)
	EDeathPose DeathPose = EDeathPose::EDP_Alive;

public:	
	

};
