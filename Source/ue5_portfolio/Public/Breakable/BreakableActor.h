// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/HitInterface.h"
#include "BreakableActor.generated.h"

UCLASS()
class UE5_PORTFOLIO_API ABreakableActor : public AActor, public IHitInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableActor();

	virtual void GetHit_Implementation(const FVector& impactPoint) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UGeometryCollectionComponent* GeometryCollection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* box;
private:
	

	UPROPERTY(EditAnywhere, Category = "Breakable Properties")
	TArray<TSubclassOf<class ATreasure>> TreasureClasses;
};
