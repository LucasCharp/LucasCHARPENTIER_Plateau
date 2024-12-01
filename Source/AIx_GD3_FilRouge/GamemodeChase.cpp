// Fill out your copyright notice in the Description page of Project Settings.


#include "GamemodeChase.h"
#include "TimerManager.h"

AGamemodeChase::AGamemodeChase()
{
	
}

void AGamemodeChase::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AGamemodeChase::UpdateTimer, 1.0f, true);
}

int AGamemodeChase::SetScoreByPlayerId(int playerId, int scoreToAdd)
{
	APlayerCollect* PlayerThatCollect;
	PlayerThatCollect = PlayerCollectList[playerId];
	PlayerThatCollect->chaseScore += scoreToAdd;
	return PlayerThatCollect->chaseScore;
}

void AGamemodeChase::UpdateTimer()
{
	Time -= 1.0f;
	if (Time == 0) 
	{
		timeHasEnd = true;
	}
}



