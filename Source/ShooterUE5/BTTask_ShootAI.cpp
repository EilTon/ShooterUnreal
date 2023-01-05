// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ShootAI.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "ShooterCharacter.h"

UBTTask_ShootAI::UBTTask_ShootAI()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_ShootAI::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	if (OwnerComp.GetAIOwner() == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	AShooterCharacter* ShooterCharacter = Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (ShooterCharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}
	ShooterCharacter->PullTrigger();
	return EBTNodeResult::Succeeded;
}
