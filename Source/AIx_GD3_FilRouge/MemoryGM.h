// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MemoryGM.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API AMemoryGM : public AGameModeBase
{
	GENERATED_BODY()

	protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Memory")
	int32 MemoryScore;

	
};
