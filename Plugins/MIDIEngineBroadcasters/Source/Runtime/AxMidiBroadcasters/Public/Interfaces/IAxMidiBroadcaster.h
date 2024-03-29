// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MidiClasses/AxMidiAsset.h"
#include "UObject/Interface.h"
#include "IAxMidiBroadcaster.generated.h"

class UAxMidiPlayhead;

UINTERFACE(NotBlueprintable, BlueprintType)
class AXMIDIBROADCASTERS_API UAxMidiBroadcaster : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief Interface For Classes that wish to be MidiBroadcasters...
 *        MidiBroadcaster need a clock to drive the Playheads they'll hold...
 */
class AXMIDIBROADCASTERS_API IAxMidiBroadcaster
{
	GENERATED_BODY()

public:

	/**
	 * @brief The Presumably Unique Name of this broadcaster to help Identify it in listeners.
	 * @return A Unique FString to ID this broadcaster
	 */
	UFUNCTION(BlueprintCallable,Category="MidiEngine")
	virtual FString GetBroadcasterName() = 0;

	/**
	 * @brief The MidiAsset Currently Getting Broadcast or played by this MidiBroadcaster.
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine")
	virtual UAxMidiAsset* GetMidiAsset() = 0;

	/**
	 * @brief Gets the playhead position of the specified playhead.
	 *        Playheads have unique names within a broadcaster. You can get it's playback position.
	 *		  NB: Implies the offset is accounted for.
	 * @param PlayheadName 
	 * @return Playhead position (includes offset).
	 */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine")
	virtual float GetPlaybackPosition(FString PlayheadName)=0;

	/**
	 * @brief Finds and returns a playhead by name from the broadcaster.
	 * @param PlayheadName the unique ID/name of the playhead to get.
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine")
	virtual UAxMidiPlayhead* GetPlayhead(FString PlayheadName)=0;

	virtual float GetPlayRate() =0;

};
