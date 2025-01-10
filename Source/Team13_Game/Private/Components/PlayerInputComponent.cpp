// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/PlayerInputComponent.h"

UPlayerInputComponent::UPlayerInputComponent() {
    PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerInputComponent::BeginPlay() {
    Super::BeginPlay();
    SetupInputActions();
}

void UPlayerInputComponent::SetupInputActions()
{
    // Get the owning pawn
    APawn* OwningPawn = GetOwner<APawn>();
    if (!OwningPawn) {
        DebugWithMessage("UPlayerInputComponent is not attached to a valid Pawn. Component is only functional on pawns. DISABLING");
        SetActive(false);
        return;
    }

    // Get the Player Controller
    APlayerController* PlayerController = Cast<APlayerController>(OwningPawn->GetController());
    if (!PlayerController) {
        DebugWithMessage("Owning Pawn does not have a valid Player Controller. Component must be attached to a Player Pawn. DISABLING");
        SetActive(false);
        return;
    }

    // Get the Enhanced Input Component from the Player Controller
    UEnhancedInputComponent* EnhancedInputComp = Cast<UEnhancedInputComponent>(PlayerController->InputComponent);
    if (!EnhancedInputComp) {
        DebugWithMessage("Failed to cast Player Controller's Input Component to UEnhancedInputComponent. Player Pawn must use Enhanced Input Actions. DISABLING");
        SetActive(false);
        return;
    }

    // Call BindInputActions to bind actions
    BindInputActions(EnhancedInputComp);
}

void UPlayerInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPlayerInputComponent::SetKeyPressFlag(EKeyPress KeyPress) {
    KeyPressFlags |= static_cast<int32>(KeyPress);
}

void UPlayerInputComponent::ClearKeyPressFlag(EKeyPress KeyPress) {
    KeyPressFlags &= ~static_cast<int32>(KeyPress);
}

bool UPlayerInputComponent::IsKeyPressed(EKeyPress KeyPress) const {
    return (KeyPressFlags & static_cast<int32>(KeyPress)) != 0;
}

// Directional checks
bool UPlayerInputComponent::IsUpPressed() const {
    return IsKeyPressed(EKeyPress::Up);
}

bool UPlayerInputComponent::IsRightPressed() const {
    return IsKeyPressed(EKeyPress::Right);
}

bool UPlayerInputComponent::IsDownPressed() const {
    return IsKeyPressed(EKeyPress::Down);
}

bool UPlayerInputComponent::IsLeftPressed() const {
    return IsKeyPressed(EKeyPress::Left);
}

// Diagonal checks
bool UPlayerInputComponent::IsUpRightPressed() const {
    return IsUpPressed() && IsRightPressed();
}

bool UPlayerInputComponent::IsUpLeftPressed() const {
    return IsUpPressed() && IsLeftPressed();
}

bool UPlayerInputComponent::IsDownRightPressed() const {
    return IsDownPressed() && IsRightPressed();
}

bool UPlayerInputComponent::IsDownLeftPressed() const {
    return IsDownPressed() && IsLeftPressed();
}

// Input action handling
void UPlayerInputComponent::HandleUpPressed() {
    SetKeyPressFlag(EKeyPress::Up);
}

void UPlayerInputComponent::HandleUpReleased() {
    ClearKeyPressFlag(EKeyPress::Up);
}

void UPlayerInputComponent::HandleRightPressed() {
    SetKeyPressFlag(EKeyPress::Right);
}

void UPlayerInputComponent::HandleRightReleased() {
    ClearKeyPressFlag(EKeyPress::Right);
}

void UPlayerInputComponent::HandleDownPressed() {
    SetKeyPressFlag(EKeyPress::Down);
}

void UPlayerInputComponent::HandleDownReleased() {
    ClearKeyPressFlag(EKeyPress::Down);
}

void UPlayerInputComponent::HandleLeftPressed() {
    SetKeyPressFlag(EKeyPress::Left);
}

void UPlayerInputComponent::HandleLeftReleased() {
    ClearKeyPressFlag(EKeyPress::Left);
}

bool UPlayerInputComponent::BindInputActions(UEnhancedInputComponent* InputComponent)
{
    if (!InputComponent) {
        DebugWithMessage("Provided InputComponent was null");
        return false;
    }

    if (!MoveUpAction) {
        DebugWithMessage("MoveUpAction was null. Please assign an input action in the component's details tab.");
        return false;
    }

    if (!MoveRightAction) {
        DebugWithMessage("MoveRightAction was null. Please assign an input action in the component's details tab.");
        return false;
    }

    if (!MoveDownAction) {
        DebugWithMessage("MoveDownAction was null. Please assign an input action in the component's details tab.");
        return false;
    }

    if (!MoveLeftAction) {
        DebugWithMessage("MoveLeftAction was null. Please assign an input action in the component's details tab.");
        return false;
    }

    // Bind the input actions to specific functions
    InputComponent->BindAction(MoveUpAction, ETriggerEvent::Triggered, this, &UPlayerInputComponent::HandleUpPressed);
    InputComponent->BindAction(MoveUpAction, ETriggerEvent::Completed, this, &UPlayerInputComponent::HandleUpReleased);

    InputComponent->BindAction(MoveRightAction, ETriggerEvent::Triggered, this, &UPlayerInputComponent::HandleRightPressed);
    InputComponent->BindAction(MoveRightAction, ETriggerEvent::Completed, this, &UPlayerInputComponent::HandleRightReleased);

    InputComponent->BindAction(MoveDownAction, ETriggerEvent::Triggered, this, &UPlayerInputComponent::HandleDownPressed);
    InputComponent->BindAction(MoveDownAction, ETriggerEvent::Completed, this, &UPlayerInputComponent::HandleDownReleased);

    InputComponent->BindAction(MoveLeftAction, ETriggerEvent::Triggered, this, &UPlayerInputComponent::HandleLeftPressed);
    InputComponent->BindAction(MoveLeftAction, ETriggerEvent::Completed, this, &UPlayerInputComponent::HandleLeftReleased);

    return true;
}

EDirection UPlayerInputComponent::GetFacingDirectionFromInput()
{
    EDirection NewDirection;

    if (IsUpRightPressed()) {
        NewDirection = EDirection::NorthEast;
    } else if (IsUpLeftPressed()) {
        NewDirection = EDirection::NorthWest;
    } else if (IsDownRightPressed()) {
        NewDirection = EDirection::SouthEast;
    } else if (IsDownLeftPressed()) {
        NewDirection = EDirection::SouthWest;
    } else if (IsUpPressed()) {
        NewDirection = EDirection::North;
    } else if (IsRightPressed()) {
        NewDirection = EDirection::East;
    } else if (IsDownPressed()) {
        NewDirection = EDirection::South;
    } else if (IsLeftPressed()) {
        NewDirection = EDirection::West;
    } else {
        NewDirection = FacingDirectionCache;
    }

    FacingDirectionCache = NewDirection;
    
    return NewDirection;
}

void UPlayerInputComponent::DebugWithMessage(const FString &Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(
		PLAYER_INPUT_COMP_TAG, 
		-1, 
		PLAYER_INPUT_COMP_DEFAULT_MESSAGE_LENGTH, 
		PLAYER_INPUT_COMP_DEBUG_DEFAULT_COLOR, 
		Message
	);
}