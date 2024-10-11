// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "EnemyAISubsystem.generated.h"

/**
 * 
 */
UCLASS()
class TEAM13_GAME_API UEnemyAISubsystem : public USubsystem
{
	GENERATED_BODY()
	

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "EnemyAI")
    void debug_enemy_ai();

    UFUNCTION(BlueprintCallable, Category = "EnemyAI")
    void spawn_enemy();

private:
    UPROPERTY()
    UAISubsystem* AISubsystemInstance;

};
