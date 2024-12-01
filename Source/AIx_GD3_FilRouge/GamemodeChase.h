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

public:
    AGamemodeChase();

protected:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<APlayerCollect*> PlayerCollectList; 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Time = 20.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTimerHandle TimerHandle;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool timeHasEnd = false;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool realChaseHasStarted = false;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int winnerId = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int winnerScore = 0;

public:
    UFUNCTION(BlueprintCallable)
    int SetScoreByPlayerId(int playerId, int scoreToAdd);
    UFUNCTION(BlueprintCallable)
    void UpdateTimer();
    UFUNCTION(BlueprintCallable)
    void FindWinnerForChase();
};
