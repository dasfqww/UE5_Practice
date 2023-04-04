// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/PlayerOverlay.h"
#include "Components/ProgressBar.h"

void UPlayerOverlay::SetHealthBarRatio(float ratio)
{
	HealthBar->SetPercent(ratio);
}

void UPlayerOverlay::SetManaBarRatio(float ratio)
{
	ManaBar->SetPercent(ratio);
}

