// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/EnemyAIController.h"
#include "Enemy/EnemyBoss.h"
#include "Components/EnemyAIPerceptionComponent.h"

AEnemyAIController::AEnemyAIController()
{
	EnemyAIPerceptionComponent = 
		CreateDefaultSubobject<UEnemyAIPerceptionComponent>(TEXT("EnemyPerceptionComponent"));
	SetPerceptionComponent(*EnemyAIPerceptionComponent);
}

void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	const auto EnemyBoss = Cast<AEnemyBoss>(InPawn);
	if (EnemyBoss)
	{
		RunBehaviorTree(EnemyBoss->GetBehaviorTreeAsset());
	}
}
