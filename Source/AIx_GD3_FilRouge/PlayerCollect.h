// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCollect.generated.h"

UCLASS()
class AIX_GD3_FILROUGE_API APlayerCollect : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCollect();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chaseScore = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int playerID = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Timer pour le déplacement aléatoire
	FTimerHandle MovementTimerHandle;

	// Déplacement aléatoire dans le NavMesh
	void MoveToRandomLocation();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
