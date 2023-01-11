// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/GruxBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Interfaces/HitInterface.h"

AGruxBase::AGruxBase()
{
	leftWeaponCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Left Weapon Box"));
	leftWeaponCollision->SetupAttachment(GetMesh(), FName("LeftWeaponBone"));

	rightWeaponCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Weapon Box"));
	rightWeaponCollision->SetupAttachment(GetMesh(), FName("RightWeaponBone"));

	leftWeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	leftWeaponCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	leftWeaponCollision->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	rightWeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	rightWeaponCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	rightWeaponCollision->SetCollisionResponseToChannel
		(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	LeftBoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Left LeftBoxTrace Start"));
	LeftBoxTraceStart->SetupAttachment(GetMesh(), FName("LeftWeaponBone"));

	LeftBoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Left LeftBoxTrace End"));
	LeftBoxTraceEnd->SetupAttachment(GetMesh(), FName("LeftWeaponBone"));

	RightBoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Right LeftBoxTrace Start"));
	RightBoxTraceStart->SetupAttachment(GetMesh(), FName("RightWeaponBone"));

	RightBoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Right LeftBoxTrace End"));
	RightBoxTraceEnd->SetupAttachment(GetMesh(), FName("RightWeaponBone"));
}

void AGruxBase::BeginPlay()
{
	Super::BeginPlay();

	

	leftWeaponCollision->OnComponentBeginOverlap.AddDynamic
		(this, &AGruxBase::AGruxBase::OnLeftWeaponOverlap);

	rightWeaponCollision->OnComponentBeginOverlap.AddDynamic
		(this, &AGruxBase::AGruxBase::OnRightWeaponOverlap);
}

void AGruxBase::Attack()
{
	Super::Attack();

	PlayAttackMontage();
}

bool AGruxBase::CanAttack()
{
	return Super::CanAttack();
}

void AGruxBase::Die()
{
	Super::Die();

	SetLeftWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
	SetRightWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
}

int32 AGruxBase::PlayDeathMontage()
{
	return Super::PlayDeathMontage();
}

void AGruxBase::ExcuteGetHit(FHitResult& BoxHit)
{
	IHitInterface* HitInterface = Cast<IHitInterface>(BoxHit.GetActor());
	if (HitInterface)
	{
		UE_LOG(LogTemp, Warning, TEXT("interface called.."));
		HitInterface->Execute_GetHit(BoxHit.GetActor(), BoxHit.ImpactPoint, this);
	}
}


//int32 AGruxBase::PlayAttackMontage()
//{
//	/*Super::PlayAttackMontage();
//
//	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
//	
//	if (AnimInstance&&attackMontage)
//	{
//		AnimInstance->Montage_Play(attackMontage);
//		const int32 selection = FMath::RandRange(0, 1);
//		FName sectionName = FName();
//		switch (selection)
//		{
//		case 0:
//			sectionName = FName("Attack1");
//			break;
//		case 1:
//			sectionName = FName("Attack2");
//			break;
//		}
//		AnimInstance->Montage_JumpToSection(sectionName, attackMontage);
//	}*/
//	return 0;
//}

void AGruxBase::LeftBoxTrace(FHitResult& BoxHit)
{
	const FVector LeftStart = LeftBoxTraceStart->GetComponentLocation();
	const FVector LeftEnd = LeftBoxTraceEnd->GetComponentLocation();

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);

	for (AActor* Actor : ignoreActors)
	{
		ActorsToIgnore.AddUnique(Actor);
	}

	UKismetSystemLibrary::BoxTraceSingle(
		this, LeftStart, LeftEnd, BoxTraceExtent,
		LeftBoxTraceStart->GetComponentRotation(),
		ETraceTypeQuery::TraceTypeQuery1,
		false, ActorsToIgnore,
		bShowBoxDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		BoxHit, true);
	ignoreActors.AddUnique(BoxHit.GetActor());
}

void AGruxBase::RightBoxTrace(FHitResult& BoxHit)
{
	const FVector RightStart = RightBoxTraceStart->GetComponentLocation();
	const FVector RightEnd = RightBoxTraceEnd->GetComponentLocation();

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);

	for (AActor* Actor : ignoreActors)
	{
		ActorsToIgnore.AddUnique(Actor);
	}

	UKismetSystemLibrary::BoxTraceSingle(
		this, RightStart, RightEnd, BoxTraceExtent,
		LeftBoxTraceStart->GetComponentRotation(),
		ETraceTypeQuery::TraceTypeQuery1,
		false, ActorsToIgnore,
		bShowBoxDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		BoxHit, true);
	ignoreActors.AddUnique(BoxHit.GetActor());
}

void AGruxBase::SetLeftWeaponCollisionEnabled(ECollisionEnabled::Type collisionEnabled)
{
	if (leftWeaponCollision)
	{
		UE_LOG(LogTemp, Warning, TEXT("LWeapon Enabled/Disabled.."));
		leftWeaponCollision->SetCollisionEnabled(collisionEnabled);
		ignoreActors.Empty();
	}
}

void AGruxBase::SetRightWeaponCollisionEnabled(ECollisionEnabled::Type collisionEnabled)
{
	if (rightWeaponCollision)
	{
		UE_LOG(LogTemp, Warning, TEXT("LWeapon Enabled/Disabled.."));
		rightWeaponCollision->SetCollisionEnabled(collisionEnabled);
		ignoreActors.Empty();
	}
}

void AGruxBase::OnLeftWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, 
                                    const FHitResult& SweepResult)
{
	if(ActorIsSameType(OtherActor))
	{
		return;
	}

	FHitResult BoxHit;

	LeftBoxTrace(BoxHit);

	if (BoxHit.GetActor())
	{
		if (ActorIsSameType(BoxHit.GetActor()))return;

		UGameplayStatics::ApplyDamage(BoxHit.GetActor(), Damage,
			GetInstigator()->GetController(),
			this, UDamageType::StaticClass());
		UE_LOG(LogTemp, Warning, TEXT("Weapon Detected.."));
		ExcuteGetHit(BoxHit);

		//CreateFields(BoxHit.ImpactPoint);
	}
}

bool AGruxBase::ActorIsSameType(AActor* OtherActor)
{
	return GetOwner()->ActorHasTag(TEXT("Enemy")) && OtherActor->ActorHasTag(TEXT("Enemy"));
}

void AGruxBase::OnRightWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, 
                                     const FHitResult& SweepResult)
{
	if (ActorIsSameType(OtherActor))return;

	FHitResult BoxHit;

	RightBoxTrace(BoxHit);

	if (BoxHit.GetActor())
	{
		if (ActorIsSameType(BoxHit.GetActor()))return;

		UGameplayStatics::ApplyDamage(BoxHit.GetActor(), Damage,
			GetInstigator()->GetController(),
			this, UDamageType::StaticClass());
		UE_LOG(LogTemp, Warning, TEXT("Weapon Detected.."));
		ExcuteGetHit(BoxHit);

		//CreateFields(BoxHit.ImpactPoint);
	}
}
