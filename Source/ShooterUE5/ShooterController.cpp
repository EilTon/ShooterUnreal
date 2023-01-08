// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterController.h"
#include "TimerManager.h"

void AShooterController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);
	UE_LOG(LogTemp, Warning, TEXT("We Have Finished"));
	GetWorldTimerManager().SetTimer(RestartTimer,this,&APlayerController::RestartLevel, RestartDelay);
}
