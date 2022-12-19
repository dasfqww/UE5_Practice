// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue5_portfolioGameMode.h"
#include "ue5_portfolioCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue5_portfolioGameMode::Aue5_portfolioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
