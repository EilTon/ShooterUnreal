// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIShooter.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERUE5_API AAIShooter : public AAIController
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	APawn* PlayerPawn;

private:
	/*UPROPERTY(EditAnywhere)
		float AcceptanceRadius = 100;*/
	UPROPERTY(EditAnywhere)
		class UBehaviorTree* AIBehavior;
	
};
