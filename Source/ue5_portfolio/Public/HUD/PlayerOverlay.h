// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerOverlay.generated.h"

/**
 * 
 */
UCLASS()
class UE5_PORTFOLIO_API UPlayerOverlay : public UUserWidget
{
	GENERATED_BODY()
public:

	void SetHealthBarRatio(float ratio);
	void SetManaBarRatio(float ratio);

private:
	UPROPERTY(meta=(BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* ManaBar;
};
