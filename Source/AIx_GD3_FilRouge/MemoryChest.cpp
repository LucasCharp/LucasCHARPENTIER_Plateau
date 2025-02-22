// Fill out your copyright notice in the Description page of Project Settings.


#include "MemoryChest.h"

// Sets default values
AMemoryChest::AMemoryChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMemoryChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMemoryChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMemoryChest::OpenClose()
{
	
	bIsOpenable = !bIsOpenable;
	FRotator ChestRot;
	float RotationX = RCubeComp->GetRelativeRotation().Euler().Y;
	if (RCubeComp->GetRelativeRotation().Euler().Y < 1)
	{
		ChestRot = FRotator(90.0f, 0.0f, 0.0f);
		UE_LOG(LogTemp, Warning, TEXT("Ouvre"));
		UE_LOG(LogTemp, Warning, TEXT("Rotation X is: %f"), RotationX);
	}
	else
	{
		ChestRot = FRotator(0.0f, 0.0f, 0.0f);
		UE_LOG(LogTemp, Warning, TEXT("Ferme"));
		UE_LOG(LogTemp, Warning, TEXT("Rotation X is: %f"), RotationX);
	}
	RCubeComp->SetRelativeRotation(ChestRot);
}

