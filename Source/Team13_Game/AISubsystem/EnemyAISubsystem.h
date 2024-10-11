// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "EnemyAISubsystem.generated.h"

/**
 * Enemy AI Subsystem for enemy AI-related functions.
 */
UCLASS(BlueprintType)
class TEAM13_GAME_API UEnemyAISubsystem : public USubsystem
{
	GENERATED_BODY()
	
public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "AISubsystem")
    void debug_enemy_ai();

    UFUNCTION(BlueprintCallable, Category = "AISubsystem")
    void spawn_enemy();

};
