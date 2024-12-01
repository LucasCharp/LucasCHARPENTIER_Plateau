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
	if (timeHasEnd == false && realChaseHasStarted == true)
	{
		Time -= 1.0f;
		if (Time == 0)
		{
			FindWinnerForChase();
			timeHasEnd = true;
			for (APlayerCollect* Player : PlayerCollectList)
			{
				if (Player) 
				{
					Player->Destroy();
				}
			}
		}
	}
}

void AGamemodeChase::FindWinnerForChase()
{
	for (APlayerCollect* Player : PlayerCollectList)
	{
		if (Player->chaseScore > winnerScore) 
		{
			if (Player)
			{
				winnerScore = Player->chaseScore;
				winnerId = Player->playerID + 1;
			}
		}
	}
}



