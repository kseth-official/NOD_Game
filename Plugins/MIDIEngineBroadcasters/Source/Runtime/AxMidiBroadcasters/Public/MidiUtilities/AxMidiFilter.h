// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AxMidiFilter.generated.h"

class UAxMidiNote;
class UAxMidiPlayhead;
class IAxMidiBroadcaster;

/** 
 * @brief Since there can be multiple broadcasters,playheads and notes,
 *        You may sometimes only be interested in MidiEvents from certain Broadcasters,playheads, etc..
 *		  If you leave a filter entry empty, that means it should be ignored as filter criteria
 */
USTRUCT(BlueprintType,DisplayName="MidiFilter")
struct AXMIDIBROADCASTERS_API FAxMidiFilter
{
	GENERATED_BODY()

	/**
	 * @brief You may wish to listen to only a specific Broadcaster. Eg "MySequencerBroadcaster"
	 *        If you leave this empty, it won't be taken into consideration when filtering midievents.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEventFilter")
	FString BroadcasterName;

	/**
	 * @brief You may wish to listen to only a certain playhead. Eg "1SecPlayhead"
	 *        If you leave this empty, it won't be taken into consideration when filtering midievents.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEventFilter")
	FString PlayHeadName;

	/**
	 * @brief You may wish to listen to certain tracks... eg "Kick"
	 *        If you leave this empty, it won't be taken into consideration when filtering midievents.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEventFilter")
	TArray<FString> MidiTracks;

	/**
	 * @brief You may wish to listen to only a certain ranger of midi Notes.
	 *  eg, not 60 to 72
	 *	 If you leave this empty, it won't be taken into consideration when filtering MidiEvents.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEventFilter")
	FInt32Range PitchRange;

	/**
	 * @brief You may wish to listen to only instances of a certain note, eg like "C5"
	 *        If you leave this empty, it won't be taken into consideration when filtering MidiEvents.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEventFilter")
	FString PitchName;

	/**
	 * @brief Checks if A MidiEvent Matches this filter. This is the filtering function
	 * @param InMidiNote 
	 * @param InPlayhead 
	 * @return false if it doesn't match ,true otherwise.
	 */
	bool MatchesFilter(UAxMidiNote* InMidiNote, UAxMidiPlayhead* InPlayhead, TScriptInterface<IAxMidiBroadcaster> InBroadcaster);

	/**
	 * @brief Checks The playhead & Broadcaster against this filter.
	 *        This is a slimed down version of MatchesFilter since it doesn't require MIDI Notes.
	 *		  Some events like BPM and CC Events are not UAxMidiNote related.
	 *		  But we still want to filter them depending on whose broadcasting them.
	 * @param InPlayhead
	 * @return false if it doesn't match ,true otherwise.
	 */
	bool MatchesBroadcasterFilter( UAxMidiPlayhead* InPlayhead, TScriptInterface<IAxMidiBroadcaster> InBroadcaster);


};
