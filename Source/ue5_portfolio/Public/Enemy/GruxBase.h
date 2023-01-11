// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/Enemy.h"
#include "GruxBase.generated.h"

class UBoxComponent;
class USceneComponent;

/**
 * 
 */
UCLASS()
class UE5_PORTFOLIO_API AGruxBase : public AEnemy
{
	GENERATED_BODY()
public:
	AGruxBase();

protected:
	virtual void BeginPlay() override;

	virtual void Attack() override;

	virtual bool CanAttack() override;

	virtual void Die() override;

	virtual int32 PlayDeathMontage() override;
	//virtual int32 PlayAttackMontage() override;

	void ExcuteGetHit(FHitResult& BoxHit);
private:
	UPROPERTY(VisibleAnywhere, Category="Weapon Collision")
	UBoxComponent* leftWeaponCollision;

	UPROPERTY(VisibleAnywhere, Category="Weapon Collision")
	UBoxComponent* rightWeaponCollision;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* LeftBoxTraceStart;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* LeftBoxTraceEnd;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RightBoxTraceStart;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RightBoxTraceEnd;

	void LeftBoxTrace(FHitResult& BoxHit);
	void RightBoxTrace(FHitResult& BoxHit);

	UFUNCTION(BlueprintCallable)
	void SetLeftWeaponCollisionEnabled(ECollisionEnabled::Type collisionEnabled);

	UFUNCTION(BlueprintCallable)
	void SetRightWeaponCollisionEnabled(ECollisionEnabled::Type collisionEnabled);

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	FVector BoxTraceExtent = FVector(5.f);

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	bool bShowBoxDebug = false;

	UPROPERTY(EditAnywhere, Category = "WeaponProperties")
	float Damage = 25.f;

public:
	TArray<AActor*> ignoreActors;

	UFUNCTION()
	void OnLeftWeaponOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	bool ActorIsSameType(AActor* OtherActor);

	UFUNCTION()
	void OnRightWeaponOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
