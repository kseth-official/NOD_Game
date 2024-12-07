// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KeyPress.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EKeyPress : uint8 {
    None      = 0            UMETA(Hidden),                              // No keys pressed
    Up        = 1 << 0       UMETA(DisplayName = "Up Key - W"),          // 0001
    Right     = 1 << 1       UMETA(DisplayName = "Right Key - D"),       // 0010
    Down      = 1 << 2       UMETA(DisplayName = "Down Key - S"),        // 0100
    Left      = 1 << 3       UMETA(DisplayName = "Left Key A"),          // 1000
    UpRight   = Up | Right   UMETA(DisplayName = "Up Right Key - WD"),   // 0011
    UpLeft    = Up | Left    UMETA(DisplayName = "Up Left Key - WA"),    // 1001
    DownRight = Down | Right UMETA(DisplayName = "Down Right Key - SD"), // 0110
    DownLeft  = Down | Left  UMETA(DisplayName = "Down Left Key - SA")   // 1100
};

ENUM_CLASS_FLAGS(EKeyPress);