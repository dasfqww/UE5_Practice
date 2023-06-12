// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

class UEnemyAIPerceptionComponent;

UCLASS()
class UE5_PORTFOLIO_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
public:
	AEnemyAIController();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UEnemyAIPerceptionComponent* EnemyAIPerceptionComponent;

	virtual void OnPossess(APawn* InPawn) override;
};
