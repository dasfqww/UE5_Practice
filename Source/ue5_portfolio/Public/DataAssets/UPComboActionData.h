// This is ue5_portfolio Source Code

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UPComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class UE5_PORTFOLIO_API UUPComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UUPComboActionData();

	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix;
	
	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount;

	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;

	UPROPERTY(EditAnywhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;
};
