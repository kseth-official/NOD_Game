// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintFunctionLibraries/DebugUtilityLibrary.h"
#include "Components/ActorComponent.h"
#include "EnhancedInputComponent.h"
#include "Enums/Direction.h"
#include "Enums/KeyPress.h"
#include "PlayerInputComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TEAM13_GAME_API UPlayerInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
    UPlayerInputComponent();

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = EKeyPress))
    int32 KeyPressFlags = 0;

    void SetKeyPressFlag(EKeyPress KeyPress);
    void ClearKeyPressFlag(EKeyPress KeyPress);
    bool IsKeyPressed(EKeyPress KeyPress) const;

    // Directional checks
    bool IsUpPressed() const;
    bool IsRightPressed() const;
    bool IsDownPressed() const;
    bool IsLeftPressed() const;

    // Diagonal checks
    bool IsUpRightPressed() const;
    bool IsUpLeftPressed() const;
    bool IsDownRightPressed() const;
    bool IsDownLeftPressed() const;

	// Input action handling
    void HandleUpPressed();
    void HandleUpReleased();
    void HandleRightPressed();
    void HandleRightReleased();
	void HandleDownPressed();
    void HandleDownReleased();
	void HandleLeftPressed();
    void HandleLeftReleased();

	// UPROPERTY variables to hold input actions
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputAction* MoveUpAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputAction* MoveRightAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputAction* MoveDownAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Enhanced Input")
    class UInputAction* MoveLeftAction;

    // Function to bind input actions
    bool BindInputActions(UEnhancedInputComponent* InputComponent);

    // Facing Direction
	UFUNCTION(BlueprintCallable, Category = "Direction")
	EDirection GetFacingDirectionFromInput();

	// Debugging
	UFUNCTION(BlueprintCallable, Category = "Debug")
	void DebugWithMessage(const FString& Message);

	const FString PLAYER_INPUT_COMP_TAG = "PLAYER_INPUT_COMP : ";
	const FColor PLAYER_INPUT_COMP_DEBUG_DEFAULT_COLOR = FColor::Blue;
	const float PLAYER_INPUT_COMP_DEFAULT_MESSAGE_LENGTH = 5.f;

private:
    EDirection FacingDirectionCache = EDirection::East;

    void SetupInputActions();
};
