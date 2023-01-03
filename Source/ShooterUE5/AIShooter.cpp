// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShooter.h"
#include "Kismet/GameplayStatics.h"

void AAIShooter::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
}

void AAIShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (LineOfSightTo(PlayerPawn))
	{
		SetFocus(PlayerPawn, EAIFocusPriority::Gameplay);
		MoveToActor(PlayerPawn, AcceptanceRadius);
	}
	else
	{
		ClearFocus(EAIFocusPriority::Gameplay);
		StopMovement();
	}
}
