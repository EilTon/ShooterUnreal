// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ShootAI.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERUE5_API UBTTask_ShootAI : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_ShootAI();
	
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
