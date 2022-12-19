// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GreatSwordAnimInstance.h"
#include "ue5_portfolio/ue5_portfolioCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UGreatSwordAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	player=Cast<Aue5_portfolioCharacter>(TryGetPawnOwner());
	if (player)
	{
		playerMovement=player->GetCharacterMovement();
	}
}

void UGreatSwordAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (playerMovement)
	{		
		GroundSpeed=UKismetMathLibrary::VSizeXY(playerMovement->Velocity);
		isFalling=playerMovement->IsFalling();
		CharacterState = player->GetCharacterState();
	}
}
