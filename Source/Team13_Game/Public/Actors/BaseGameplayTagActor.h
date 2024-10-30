// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "GameFramework/Actor.h"
#include "BaseGameplayTagActor.generated.h"

/**
 * A C++ Actor that implements the IGameplayTagAssetInterface that is only available in C++.
 * To be used as a way to allow Blueprint Actors to implement the IGameplayTagAssetInterface by re-parenting to this actor.
 */
UCLASS(Blueprintable)
class TEAM13_GAME_API ABaseGameplayTagActor : public AActor, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ABaseGameplayTagActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tags")
	FGameplayTagContainer OwnedGameplayTags;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = OwnedGameplayTags; };
};
