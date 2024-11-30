// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCollect.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"

// Sets default values
APlayerCollect::APlayerCollect()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCollect::BeginPlay()
{
	Super::BeginPlay();

    // Configurer un timer pour appeler MoveToRandomLocation toutes les X secondes
    GetWorld()->GetTimerManager().SetTimer(MovementTimerHandle, this, &APlayerCollect::MoveToRandomLocation, 0.5f, true);
	
}

void APlayerCollect::MoveToRandomLocation()
{
    // Obtenir le contr�leur d'IA
    AAIController* AIController = Cast<AAIController>(GetController());
    if (!AIController)
    {
        UE_LOG(LogTemp, Warning, TEXT("AIController not found!"));
        return;
    }

    // Obtenir le syst�me de navigation
    UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!NavSystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("Navigation System not found!"));
        return;
    }

    // D�finir un point de destination al�atoire
    FNavLocation RandomLocation;
    FVector Origin = GetActorLocation(); 
    float SearchRadius = 1000.0f;        

    if (NavSystem->GetRandomPointInNavigableRadius(Origin, SearchRadius, RandomLocation))
    {
        // D�placer l'IA vers la position al�atoire
        AIController->MoveToLocation(RandomLocation.Location);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to find random point in NavMesh!"));
    }
}

// Called every frame
void APlayerCollect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCollect::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

