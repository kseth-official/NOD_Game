// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AxMidiEngineCoreSettings.generated.h"


UENUM()
enum class EAxMidiMiddleC : uint8
{
	C6,

	/*FL Studio*/
	C5,

	/*Roland Keyboards*/
	C4,

	/* Ableton Live, Logic Pro, Pro Tools, Cubase etc */
	C3,

	C2
};

/**
 * Preferences for MidiEngine
 */
UCLASS(Config = "MidiEngine", DefaultConfig)
class AXMIDICORE_API UAxMidiEngineCoreSettings : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * @brief Set the PitchName that should be used for Middle C (Midi Note 60).
	 *        FL Studio uses C5.
	 *		  Ableton Live uses C3.
	 *
	 */
	UPROPERTY(Config, EditAnywhere, Category = "MidiEngine")
	EAxMidiMiddleC MiddleC = EAxMidiMiddleC::C5;

public:

	/**
	 * @brief By Default our Middle C is C5. Modifier will be 0;
	 *        if value varies from this return value will be +1 to -3;
	 * @return 
	 */
	int GetMiddleCModifier();
};
