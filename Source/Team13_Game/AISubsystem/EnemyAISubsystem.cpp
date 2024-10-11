// Fill out your copyright notice in the Description page of Project Settings.


#include "AISubsystem/EnemyAISubsystem.h"

void UYourCustomSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    // Initialize AISubsystem
    AISubsystemInstance = GetWorld()->GetSubsystem<UAISubsystem>();
}

void UYourCustomSubsystem::Deinitialize()
{
    // Deinitialize AISubsystem
    AISubsystemInstance = nullptr;
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