// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Treasure.h"
#include "ue5_portfolio/ue5_portfolioCharacter.h"
#include "Kismet/GameplayStatics.h"

void ATreasure::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
	bool bFromSweep, const FHitResult& SweepResult)
{
	Aue5_portfolioCharacter* player = Cast<Aue5_portfolioCharacter>(OtherActor);
	if (player)
	{
		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation
				(this, PickupSound, GetActorLocation());
		}

		Destroy();
	}
}
