// Fill out your copyright notice in the Description page of Project Settings.


#include "GamemodeChase.h"

int AGamemodeChase::SetScoreByPlayerId(int playerId)
{
	APlayerCollect* PlayerThatCollect;
	PlayerThatCollect = PlayerCollectList[playerId];
	PlayerThatCollect->chaseScore += 1;
	return PlayerThatCollect->chaseScore;
}
