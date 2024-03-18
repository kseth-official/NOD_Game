// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Playheads/AxMidiPlayhead.h"
#include "AxMidiBroadcasterPlayhead.generated.h"

/**
 * This is a Specific MidiPlayhead meant for use mainly by the MidiBroadcasterComponent
 */
UCLASS(DisplayName = "Midi Broadcaster Playhead")
class AXMIDIBROADCASTERS_API UAxMidiBroadcasterPlayhead : public UAxMidiPlayhead
{
	GENERATED_BODY()

	//Empty for a good reason, helps us filter classes in the editor.
	//if we just use UAxMidiPlayhead then all its child classes will be listed in the picker.
	//we don't want that. This is a good way to limit what's shown while still sharing same functionality.
};
