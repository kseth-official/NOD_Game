// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameplayTagPaperZDCharacter.h"
#include "Enums/Direction.h"
#include "BaseGamePaperZDCharacter.generated.h"

/**
 * A Base Class For Each Game PaperZD Character.
 */
UCLASS()
class TEAM13_GAME_API ABaseGamePaperZDCharacter : public ABaseGameplayTagPaperZDCharacter
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta =
		(ToolTip = "The direction the character is facing "))
	EDirection FacingDirection = EDirection::East;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Movement", meta =
		(ToolTip = "Check if the character is facing a specific direction."))
	bool IsFacingDirection(const EDirection& Direction);

	UFUNCTION(BlueprintCallable, Category = "Movement", meta =
		(ToolTip = "Set the character's direction based on provided acceleration."))
	void SetDirectionUsingAcceleration(const FVector& Acceleration);

	UFUNCTION(BlueprintCallable, Category = "Movement", meta =
		(ToolTip = "Set the Target's direction in the direction of the ToFace actor."))
	void SetDirectionFacing(const AActor* ToFace);
};