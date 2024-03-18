// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MidiClasses/AxMidiNote.h"
#include "MidiClasses/AxMidiChord.h"
#include "Interfaces/IAxMidiBroadcaster.h"
#include "AxMidiPlayhead.generated.h"


class UAxMidiBroadcastersSubsystem;




/**
 * @brief A MidiPlayhead responsible for processing a MidiAsset and Broadcasting MidiEvents.
 *        MidiPlayheads can only exist in the context of MidiBroadcasters.
 *		  They do not 'tick' on their own. They need an owning Broadcaster that will tick them.
 *		  Some playheads have internal clocks (Timeline,Quartz) that they will sample from when ticked.
 *		  This Base MidiPlayhead does not have an internal clock so the system that uses needs to provide it with a time.
 */
UCLASS(BlueprintType,EditInlineNew,DisplayName="Midi Playhead")
class AXMIDIBROADCASTERS_API UAxMidiPlayhead : public UObject
{

	 GENERATED_BODY()

private:
	/**
	* @brief The latest time used when we last ticked.
	*        updated on tick (TriggerNoteOns). For reference only.
	*        Does not include the offset.
	*		 Should match the parent/ broadcaster's time
	*/
	UPROPERTY(Transient)
	double CurrentTime = 0.0;

protected:

	//Unique Name of the Playhead to help Midi Listeners identify it on midi events.
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MidiEngine")
	FString PlayHeadName;


	/**
	 * @brief You can offset the playhead here to have play ahead by a certain amount of seconds.
	 *        Eg: Setting this to 2.0 seconds will make midi events trigger 2 seconds early.
	 *		  
	 */
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "MidiEngine")
	double TimeOffset = 0.0;


	//Current PlayPosition Array Index
	UPROPERTY(Transient)
	int32 Index = 0;

	/**
	 * @brief Array of MIDI Notes this Playhead has broadcast Note On.
	 *        Used to keep track of which notes need to broadcast Note Off.
	 */
	UPROPERTY(Transient)
	TArray<UAxMidiNote*> CurrentlyPlayingNotes;


	//The MidiBroadcastersSubsystem contains the delegates we need to bind to.
	UPROPERTY(Transient)
	UAxMidiBroadcastersSubsystem* MidiBroadcastersSubsystem = nullptr;

public:
	
	 /**
	 * @brief The Broadcaster Owning this PlayHead. Saved as interface pointer.
	 */
	UPROPERTY(BlueprintReadOnly,Category="MidiEngine")
	TScriptInterface<IAxMidiBroadcaster> MidiBroadcaster=nullptr;


public:

	UPROPERTY()
	bool bBroadcastInitialBuffer = false;


public:

	 /**
	 * @brief Playheads can only be initialized with an IMidiBroadcaster or this function will return false.
	 * @param InMidiBroadcaster A UObjects that implements the IMidiBroadcaster Interface.
	 * @param InPlayHeadName The name of the Playhead
	 * @param InTimeOffset The Offset of the playhead in Seconds..
	 * @return 
	 */
	virtual bool Init(TScriptInterface<IAxMidiBroadcaster> InMidiBroadcaster, FString InPlayHeadName, double InTimeOffset);
	

 protected:

	void InitBroadcasterSubsystem();

 public:

	 bool IsChordBroadcastingAuthorized(FAxMidiChord InChord);

	 /**
	 * @brief Broadcasts MidiNote OFF events at the submitted time.
	 *        NB: this should be part of your Tick function.
	 *        Call this Before TriggerNoteOns to ensure short notes are ON for at least 1 frame.
	 * @param InTime
	 */
	virtual void BroadcastNoteOffEvents(double InTime);

	

	/**
	 * @brief Broadcasts MidiNote On events at the submitted time.
	 *       NB: this should be part of your Tick function.
	 */
	virtual void BroadcastNoteOnEvents(double InTime);


	/**
	 * @brief Broadcasts The BPM Events
	 *       NB: this should be part of your Tick function.
	 */
	virtual void BroadcastBPMEvent(float InCurrentTime);

	 /**
	 * @brief  Allows a MidiPlayhead to use it's internal Clock sources to tick/update itself.
	 *         Some playheads may not have Internal clock sources and user will have to manually call "ManualTick".
	 *		   Example of Internal Clock source is a timeline in the TimelinePlayhead.
	 *		   NB: Call this in your owning broadcaster every tick.
	 *         Override this function in child classes if creating a Playhead with internal clock sources.
	 */
	virtual void AutoTick();;


	 /**
	 * @brief For Playhead classes that don't have an internal clock, the manual tick function is available.
	 *        It requires your/BPs to provide it with a time to update itself.
	 *		  This gives a chance for BP users and other systems to control the playback position of the midiasset.
	 *		  You can use any external clock sources and provide a time in seconds.
	 * @param InCurrentTime 
	 */
	virtual void ManualTick(float InCurrentTime);

protected:
	 /**
	 * @brief When a Chord With NoteOn Events is detected, this function can choose to broadcast or not.
	 *        You can override this function in child class, and capture or prevent the note from being broadcast to midi listeners.
	 *		  Gives child classses a chance to determine what happens before note is added to currentlyplaying notes.
	 * @param NoteOnChord The UAxMidiNote to broadcast as a noteOn event.
	 */
	//virtual void HandleNoteOn(UAxMidiNote* InMidiNote);

	virtual void HandleChordNoteOn(FAxMidiChord NoteOnChord);

	/**
	* @brief When a NoteOff Event is detected, this function can choose to broadcast or not.
	*        You can override this function in child class, and capture or prevent the note from being broadcast to midi listeners.
	* @param InMidiNote The UAxMidiNote to broadcast as a noteOFF event.
	*/
	virtual void HandleNoteOff(UAxMidiNote* InMidiNote);


public:

	FString GetPlayHeadName();

	void SetPlayHeadName(FString InName);

	/**
	 * @brief Get's the array index this PlayHead is currently pointing to. 
	 * @return 
	 */
	int32 GetIndex();

	/**
	 * @brief Set the amount of time this playhead is ahead by in seconds.
	 * @param InTimeOffset time in seconds.
	 */
	void SetTimeOffset(double InTimeOffset);


	double GetTimeOffset();

	/**
	 * @brief Will immediately Broadcasting NoteOff Event for all currently playing notes... and remove them from the array
	 *        Regardless of the playhead position.
	 */
	void StopAllNotes();


	 /**
	 * @brief Get's the Playheads current time.
	 * @param bWithOffset if true will apply offset to the time before returning it.
	 * @return 
	 */
	virtual double GetPlaybackPosition(bool bWithOffset = false);

	/*
	 * @brief Will Set the playback position of this playhead.
	 *        You should call this function each time you jump or seek from the broadcaster
	 *        This function will update the playhead's time.
	 *		  You can optionally turn all notes off before syncing, or do it manually later...
	 * @param Time The time to sync to.
	 * @param bTurnNotesOff Broadcast MidiNote Off for all currently playing notes before we sync
	 */
	virtual void SetPlaybackPosition(double Time,bool bTurnNotesOff=true);

	virtual void Play();

	virtual void Pause();

	virtual void Resume();

	virtual void Stop();

	virtual bool IsPlaying();


	virtual void SetPlayRate(float NewRate);


	virtual void PostLoad() override;

};
