// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Deprecated/MidiEventsTime.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"



/**
 * @brief Simple Clock with start and stop functionality.
 */
class FClock
{
private:
	//Is the clock running.
	bool bIsRunning=false;

	bool bIsPaused=false;

	bool bIsStopped=true;


	/**
	 * @brief Mark's our 0 point for our clock. Get it from the platform time.
	 */
	double LastPlatformTime=0;

	/**
	 * @brief The clock's current time
	 */
	double ClockTime=0;


public:

	/**
	 * @brief Start's the clock.
	 */
	void Start();

	/**
	 * @brief Will pause the clock or stopwatch.
	 */
	void Pause();

	/**
	 * @brief Resumes the stopwatch.
	 */
	void Resume();

	/**
	 * @brief Update's the clock's time.
	 *		  This is the clock's tick function.
	 *		  Must be called on the thread's tick function.
	 * @return True if the clock's current time was update.
	 */
	bool Update();

	/**
	 * @brief Stops the clock and resets it to 0
	 */
	void Stop();

	/**
	 * @brief Get's the clock's time since it was started.
	 * @return 
	 */
	double GetCurrentTime();

	/**
	 * @brief Check's if the clock is currently running or not.
	 * @return bool , true if currently running, false otherwise.
	 */
	bool IsRunning();
};


/**
 * @Todo deprecated, don't use this
 * A Thread built for MidiBroadcasters.
 * Runs and Manages a high resolution clock to use to check for MidiTime triggers.
 * It will use it's timer to check if Note Events should be happening.
 */
class FMidiBroadcasterThread : public FRunnable
{

private:
	// Thread handle. Control the thread using this, with operators like Kill and Suspend
	FRunnableThread* Thread;

	/**
	 * @brief For the run function's while loop.
	 *		  So that we can exit the loop and let the thread shut down if we determine it does not need to run.
	 *
	 */
	bool bExitRunLoop = false;


	/**
	 * @brief A bool to determine if the the thread's Run function has exited normally on it's own.
	 *        If not, we would like to call Kill on the  thread , in the destructor.
	 */
	bool bHasThreadExitedNormally = false;

	bool bThreadSuspended = false;

	/**
	 * @brief Set when the main thread wishes to update the queue.
	 */
	bool bUpdateEvaluation=false;

	/**
	 * @brief Is everything setup and ready for evaluation?
	 */
	bool bReadyForEvaluation=false;


	/**
	 * @brief The clock that will handle all the time calculations.
	 */
	FClock Clock;

	/**
	 * @brief This is the Main Thread MidiBroadcaster's  time at which it wishes to start evaluating notes from.
	 *		  For example, the player may wish to start evaluating notes from 15 seconds of the song onwards.
	 *		   
	 */
	double EvaluatingFrom;

	/**
	 * @brief The Max time the Main Thread wishes to evaluate to.
	 */
	double EvaluatingToTime;


	/**
	 * @brief NB:Deadlock potential, use with care. MainThread interacts with this variable
	 *		  The time where NoteOn Events were found. Ready for triggering in game thread.
	 *		  When UpdateNoteEventsTimeQueue determines there are Notes to broadcast, it will add a time to this processing Queue.
	 *		  The Queue is read by a MidiAssetPlayer to get the times for notes that need to be triggered ASAP.
	 *		 
	 */
	TArray<FMidiEventsTime> MidiEventsTimeQueue;

	/**
	 * @brief The Time's to process and add to Queue in the Thread.
	 *		  A Copy Of the StartTimes Map's keys that Must be submitted by the Player using this thread.
	 *		  Taken from NoteOnMap's keys from MidiAssetPlayer. The keys in that map are MidiEventTimes
	 */
	TSet<FMidiEventsTime> NoteStartTimesSet;

	/**
	 * @brief Set's the Time's we need to check against the clock.
	 *		  While the clock is running it will constantly check if any of these times match.
	 *		  If yes, then these times will be added to a Queue for the GameThread to handle when ready.
	 *		  See UpdateNoteEventsTimeQueue for implementation.
	 * @param InStartTimesSet the set we need to process and check against the clock.
	 */
	void SetStartTimesSet(TSet<FMidiEventsTime>& InStartTimesSet);


public:
	FMidiBroadcasterThread();

	/**
	 * @brief Start's the process of evaluating MidiNote Time's.
	 *		  The Player using this thread MUST submit a copy of it's StartTimeMap's Keys as a set.
	 *		  You must call UpdateNotesEvaluation() each time you want the queue to update from the main thread.
	 * @param InStartTimesSet A List of start times of MidiNotes , which is a copy of the StartTimeMap's Keys...
	 * @return true if Evaluation has been started.
	 */
	bool StartNotesEvaluation( TSet<FMidiEventsTime>& InStartTimesSet);

	/**
	 * @brief When update/tick is called on main thread, call this with the Interval time,
	 *		  The Interval Time means how long the evaluation should take place.
	 *		  if 3 seconds, then for the next 3 seconds, the TimeEventQueue will get filled, and then stop, waiting for the next Update call.
	 *		  Evaluation will be made for CurrentPlayerTime+IntervalTime.
	 * @param InEvaluatingFromTime The Main Thread Player's Current Time to start evaluating from.
	 * @param InEvaluatingToTime The Max time the Main Thread wishes to evaluate to.
	 */
	void UpdateNotesEvaluation(double InEvaluatingFromTime,double InEvaluatingToTime);

	/**
	 * @brief Pauses Notes evaluation without changing the Processing set.
	 */
	void PauseNotesEvaluation();

	/**
	 * @brief Resumes evaluation using the existing Processing Sets.
	 *		  Will Resume the FRunnableThread if it was suspended.
	 * @return true, if evaluation resumed, false otherwise.
	 */
	bool ResumeNotesEvaluation();

	/**
	 * @brief Completely stops Note's evaluation and Reset's default variables and clocks.
	 */
	void StopNotesEvaluation();

private:
	/**
	 * @brief Checks if there are any NoteOn Events that should be broadcast at the current time.
	 * @param inCurrentSeconds The current playback time, where we should check if there are any notes playing.
	 */
	bool UpdateNoteEventsTimeQueue(double inCurrentSeconds);

	/**
	 * @brief Suspends the thread.
	 */
	void SuspendThread();

	/**
	 * @brief Resumes thread from suspection.
	 */
	void ResumeThread();

public:


	/**
	 * @brief Checks if thread is currently suspended.
	 * @return true if suspended, false if running
	 */
	bool IsThreadSuspended();

	/**
	 * @brief Empties the processing Queue...
	 */
	void EmptyQueue();

	/**
	 * @brief Checks if the Thread is currently evaluating any times/notes.
	 * @return True if yes, false if otherwise.
	 */
	bool IsEvaluating();

	/**
	 * @brief Will get the current queue to process in the game thread and then it will flush it.
	 *        This will return a copy. Which means we don't need to lock or unlock our data as long as
	 *		  we keep it as private variables.
	 * @return The MidiEventsTimeQueue for the GameThread to process.
	 */
	TArray<FMidiEventsTime> GetTimeQueue();
	

	// Begin FRunnable interface.

	/**
	 * @brief This function is called automatically before run().
	 *		  You can do your checks in here, and return a bool to determine if the thread should Run() (call the function) or not.
	 *
	 * @return True, to run the thread, false not to run the thread.
	 */
	virtual bool Init() override;

	/**
	 * @brief The run function is just like the main() function in a C++ program.
	 *		   You can run a loop in here and exchange data with the main thread.
	 *		   Please pay attention to locking/unlocking the data with a bool while you're working on it.
	 *		   Example, we could lock a map we are scanning.
	 * @return 0 if  thread exited as you expected
	 */
	virtual uint32 Run() override;

	/**
	 * @brief emergency thread exiting function. Will instruct the thread loop to exit by
	 *		  changing the bStopThread variable.
	 */
	virtual void Stop() override;

	/**
	 * @brief Called after the Run.
	 *		  We set a bool here to inform interested parties that Run exited normally as expected.
	 *		  @see bHasThreadExitedNormally
	 */
	virtual void Exit() override;


	// End FRunnable interface

	virtual ~FMidiBroadcasterThread() override;
};
