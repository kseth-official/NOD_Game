// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IAxMidiBroadcaster.h"
#include "MidiClasses/AxMidiAsset.h"
#include "Playheads/AxMidiBroadcasterPlayhead.h"
#include "Components/SceneComponent.h"
#include "Components/TimelineComponent.h"
#include "AxMidiBroadcasterComponent.generated.h"

class UAudioComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAxMidiBroadcasterDelegates, UAxMidiBroadcasterComponent*,MidiBroadcaster);

/**
 * @brief A Midi Broadcaster purpose is to "Broadcast" Midi Events in sequential playback.
 *		  Midi Listeners will in turn listen to this broadcasters.
 *		  NB: Broadcasters do not have the interface to produce sound, they just broadcast MIDI Events so that you can react to them.
 *		  To produce sound from MIDI Files take a look at MIDI Player Components.	 
 */
UCLASS(ClassGroup=("MidiEngine"), meta = (BlueprintSpawnableComponent),DisplayName="MidiBroadcaster")
class AXMIDIBROADCASTERS_API UAxMidiBroadcasterComponent : public USceneComponent, public IAxMidiBroadcaster
{
	GENERATED_BODY()

protected:
	/**
	 * @brief The MidiAsset to broadcast MidiEvents from.
	 */
	UPROPERTY(BlueprintReadOnly, Category="MidiEngine")
	UAxMidiAsset* MidiAsset;


	FTimerHandle LeadInTimerHandle;

	/*
	 *Will assist when users choose to silently broadcast events.
	 */
	UPROPERTY()
	UTimelineComponent* SilentTimeline;

	UPROPERTY(BlueprintReadOnly,Category="MidiEngine")
	bool bBroadcastingSilently=false;

	/**
	 * @brief The audio thread sometimes sends outdated info to the GT.
	 * This flag notifies the GT to ignore the next upcoming update from the AT.
	 * There's different scenarios where this is needed but the most common one
	 * is when setting the playback position, the AT will send outdated info before it gets updated.
	 * We use this flag to ignore the AT update
	 */
	bool bIgnoreAudioTimeUpdate = false;

	bool bBroadcasting = false;

	bool bAudioFinishTriggeredByStop = false;

	//debugging
	//int PlayComplete=0;

public:
	/**
	 * @brief You can give this Broadcaster a Unique Identity String.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEngine")
	FString BroadcasterName = "MidiBroadcasterComponent";

	

	/*
	 * Set the default Playback rate. At 1.0 Midi will broadcast as original.
	 * <1.0 it will play slower and >1.0 faster.
	 * NB: won't change audio playback rate
	 *
	 */
	UPROPERTY(BlueprintReadOnly, Category = "MidiEngine")
	float PlayRate = 1.0;


	/*
	 *  Contains all the playheads responsible for broadcasting.
	 *  You can add extra playheads with time offsets here.
	 *  Eg if you want a playhead that runs 1.05 seconds ahead of the audio, add one here.
	 *  Give it a unique name.
	 *  Give it an offset >0.
	 *
	 *	NB: If this array is empty when StartBroadcast is called, a default playhead with name
	 *	"DefaultPlayhead" and offset 0.0, will be created and added and used by the broadcaster.
	 *	If you want to prevent this, ensure there is atleast 1 playhead in this array.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEngine", Instanced)
	TArray<UAxMidiBroadcasterPlayhead*> PlayHeads;



public: //Audio vars

	/**
	 * @brief The background Audio that will play with the MidiBroadcaster....
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiEngine")
	UAudioComponent* AudioComponent;

	/**
	 * @brief Fired when MidiBroadcasting is complete
	 * at the end of the midi file's normal playback or when Stop is called.
	 */
	UPROPERTY(BlueprintAssignable,Category="MidiEngine")
	FAxMidiBroadcasterDelegates OnBroadcastFinished;

public:
	
	// Sets default values for this component's properties
	UAxMidiBroadcasterComponent();

protected:

	void CreateDefaultPlayhead();

	// BEGIN IAxMidiBroadcaster Interface

	UFUNCTION()
	virtual FString GetBroadcasterName() override;

	UFUNCTION()
	virtual UAxMidiAsset* GetMidiAsset() override;

	/**
	 * @brief Get's the playback position of a Playhead. If Playhead name is empty,
	 *        the MidiPlayerPlayhead position will be returned.
	 *		  If we couldnt find the playhead matching the name the position -100. will be returned
	 * @param PlayheadName
	 * @return
	 */
	UFUNCTION()
	virtual float GetPlaybackPosition(FString PlayheadName = "") override;

	/**
	 * @brief Gets A playhead by name.
	 * @param PlayheadName
	 * @return The playhead pointer. Could return null
	 */
	UFUNCTION()
	virtual UAxMidiPlayhead* GetPlayhead(FString PlayheadName = "") override;

	//END IAxMidiBroadcaster Interface

	/**
	 * @brief Initializes the playhead(s)
	 */
	virtual bool InitPlayheads();


	virtual UAxMidiBroadcasterPlayhead* AddPlayHead(FString Name, float Offset);


protected:
	/**
	 * @brief   
	 */
	virtual void BeginPlay() override;

public:
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;


	//BEGIN UTimeline Utilities

protected:
	/**
	 * @brief Internal Function to start broadcasting. Should be called by the BlueprintCallable functions...
	 *        Helps hide confusing BlueprintCallable functions in child classes. We can override this ,
	 *		  and then call it in the non-virtual but BlueprintCallable functions.
	 * @param InMidiAsset The MidiAsset To Start Broadcasting
	 * @return 
	 */
	virtual bool StartBroadcastInternal(UAxMidiAsset* InMidiAsset, float InPlayRate);

	void HandleLeadInTimeComplete();

public:
	
	/**
	 * @brief Will start broadcasting MidiNote Events from the MidiFile and play the background audio if desired.
	 * @param InMidiAsset The MidiAsset to start broadcasting.
	 * @param InSound The background music/audio to play with the midi. Use nullptr/NON if you wish to broadcast silently..
	 * @param InPlayRate The PlayRate of the MIDI Asset. Will not affect audio rate though.
	 * @param InLeadInTime How much time before the audio actually starts playing. In Seconds. Positive number.
	 * Eg 3seconds means we start playback at time -3 Seconds. Helps trigger the 0.0 time for playheads that have an offset.
	 * @return true if started, false if not. 
	 */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	bool StartBroadcast(UAxMidiAsset* InMidiAsset, USoundBase* InSound = nullptr, float InLeadInTime = 0.f, float InPlayRate = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual void Pause();

	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual void Resume();

	/**
	 * @brief Stops the broadcaster. Resets to 0.0s playback time.
	 */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual void Stop();

	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual bool IsBroadcasting();

	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual void SetPlaybackPosition(float NewPosition);

	/** Get the current play rate for the broadcaster */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual float GetPlayRate() override;

	/** Sets the current play rate for the midi broadcaster
	 *  Will only affect MIDI not the audio
	 * */
	UFUNCTION(BlueprintCallable, Category = "MidiEngine | Broadcaster")
	virtual void SetPlayRate(float InPlayRate) ;

	//~ End UTimeline Utilities

	virtual void UpdateAndBroadcast(float InCurrentTime);

protected:

	UFUNCTION()
	virtual void HandleOnAudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent);

	UFUNCTION()
	void HandleOnAudioFinished();

	virtual void HandleOnSilentTimelineUpdate();

	UFUNCTION()
	void FireOnBroadcastCompleteDelegate();
};
