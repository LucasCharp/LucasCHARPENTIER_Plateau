// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MemoryChest.generated.h"

UCLASS()
class AIX_GD3_FILROUGE_API AMemoryChest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMemoryChest();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsOpenable = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* RCubeComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void OpenClose();
};