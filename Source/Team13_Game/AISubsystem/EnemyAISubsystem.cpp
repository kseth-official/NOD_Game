// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAISubsystem.h"

void UEnemyAISubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogTemp, Warning, TEXT("EnemyAISubsystem initialized"));
}

void UEnemyAISubsystem::Deinitialize()
{
    UE_LOG(LogTemp, Warning, TEXT("Deinitializing EnemyAISubsystem"));
    Super::Deinitialize();
}

void UEnemyAISubsystem::debug_enemy_ai()
{
    if (GEngine)
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("EnemyAISubsystem called"));
}

void UEnemyAISubsystem::spawn_enemy()
{
    // Insert spawn code here
}