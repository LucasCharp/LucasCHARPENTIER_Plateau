// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/Character.h"
#include "PlayerCollect.h"
#include "GamemodeChase.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API AGamemodeChase : public AGameModeBase
{
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<APlayerCollect*> PlayerCollectList; 

public:
    UFUNCTION(BlueprintCallable)
    int SetScoreByPlayerId(int playerId);

};
