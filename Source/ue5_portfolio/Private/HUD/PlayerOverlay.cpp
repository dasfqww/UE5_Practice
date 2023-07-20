// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PlayerOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/AttributeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ue5_portfolio/ue5_portfolioCharacter.h"


void UPlayerOverlay::SetHealthBarRatio(float ratio)
{
	HealthBar->SetPercent(ratio);
}

void UPlayerOverlay::SetManaBarRatio(float ratio)
{
	ManaBar->SetPercent(ratio);
}

void UPlayerOverlay::SetHealthText()
{
	HealthStatText->SetText(FText::FromString(GetHealthStatText()));
}

FString UPlayerOverlay::GetHealthStatText()
{
	auto player = Cast<Aue5_portfolioCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	return FString::Printf(TEXT("%.0f/%0.f"), 
		player->GetAttributeComponent()->GetHealth(), 
		player->GetAttributeComponent()->GetMaxHealth());
}

