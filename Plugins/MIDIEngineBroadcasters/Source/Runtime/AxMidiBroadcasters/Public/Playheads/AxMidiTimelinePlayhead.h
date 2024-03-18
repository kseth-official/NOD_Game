// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AxMidiPlayhead.h"
#include "Components/TimelineComponent.h"
#include "AxMidiTimelinePlayhead.generated.h"


class UAxMidiTimelinePlayhead;

//Events fired related to Midi Section Timing and others.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAxOnMidiSectionEvent, UAxMidiTimelinePlayhead*,MidiPlayhead);

/**
 * This type of playhead auto ticks and contains a timeline as an internal clock source to drive midi asset broadcasting.
 */
UCLASS(DisplayName="Midi Timeline Playhead")
class AXMIDIBROADCASTERS_API UAxMidiTimelinePlayhead : public UAxMidiPlayhead
{
	GENERATED_BODY()

protected:
	/*
	 * The timeline that will be driving the broadcasting...
	 * Private for a reason, if you'd like to interact with it, use the provided functions...
	 */
	UPROPERTY()
	UTimelineComponent* Timeline;

public:

	/**
	 * @brief Fired when Section is finished playing.
	 *        
	 */
	UPROPERTY(BlueprintAssignable)
	FAxOnMidiSectionEvent OnSectionFinishedDelegate;

	/**
	 * @brief time in seconds the section starts within the MidiAsset.
	 */
	UPROPERTY()
	float SectionStart = 0.f;


	/**
	 * @brief The time in seconds the section ends within the MidiAsset.
	 */
	UPROPERTY()
	float SectionEnd = 0.f;



public:

	/**
	 * @brief Creates and initializes A New Timeline to be used by the playhead.
	 *        If one already exists when this is called, it will get replaced with the new one.
	 *        This is because there is no way to remove previous events added to a timeline, so the solution is to discard it and create a new one.
	 */
	void CreateNewTimeline();

	virtual bool Init(TScriptInterface<IAxMidiBroadcaster> InMidiBroadcaster, FString InPlayHeadName, double InTimeOffset) override;

	virtual void SetPlaybackPosition(double Time, bool bTurnNotesOff = true) override;

	virtual double GetPlaybackPosition(bool bWithOffset = false) override;

	/**
	 * @brief Let The Playhead use its internal timers to update itself.
	 *
	 */
	virtual void AutoTick() override;

	//FTimeline Related 
	virtual void Play() override;

	virtual void Pause() override;

	virtual void Resume() override;

	virtual void Stop() override;

	virtual bool IsPlaying() override;


	virtual void SetPlayRate(float NewRate) override;


	/**
	 * @brief Adds an event(delegate) to the timeline.
	 * @param Time the time to trigger the event.
	 * @param InTimelineEvent The event that contains the function to call
	 */
	void AddTimelineEvent(float Time, FOnTimelineEvent& InTimelineEvent);

public:

	/**
	 * @brief Will change playing section and set playback position to Section Start.
	 * @param InSectionStart 
	 * @param InSectionEnd 
	 * @param Prebuffer Buffer subtracted from Section for first time playback. In Most cases it's the same as timeoffset.
	 * @param PlayRate The playrate of the new section.
	 */
	void SetSection(float InSectionStart, float InSectionEnd,float Prebuffer,float PlayRate);

	/**
	 * @brief Sets the starting position of the section.
	 *        The Prebuffer is not cached and only used on the first loop/playback.
	 *        This means that if the player is looping, it won't be used when the second loop plays.
	 *		  Eg we can PreBuffer initially at the very beginning, but when we start second loop we start at InSectionStart.
	 * @param InSectionStart
	 * @param PreBuffer Buffer subtracted from SectionStart for first time playback.
	 */
	void SetSectionStart(float InSectionStart, float PreBuffer = 0.f);

	void SetSectionEnd(float InSectionEnd, bool bAddEvent=false);

	/**
	 * @brief You can call this after calling SetSectionEnd
	 *        to ensure OnSectionFinishedDelegate is fired when the section ends.
	 *		  You can then subscribe to the OnSectionFinishedDelegate and you'll be notified each time.
	 */
	void AddSectionEndEvent();



protected:
	/**
	 * @brief This is a class internal function bound to the timeline that will broadcast another delegate.
	 *        Pay attention not to confuse the two.
	 *        We are listening for events from the timeline, and then we broadcaster another delegate when it happens.
	 *		   Reason being we need to broadcast WHICH MidiTimelinePlayHead is finished.
	 */
	UFUNCTION()
	virtual void OnTimelineSectionFinished();
};
