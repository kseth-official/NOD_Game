// Copyright Algosyntax 2022. All Rights Reserved.


#include "MidiBroadcastersThread.h"


bool FClock::Update()
{
	if(bIsRunning)
	{
		double CurrentPlatformTime= FPlatformTime::Seconds();

		//Time passed since we last checked platform time.
		double TimePassed=CurrentPlatformTime-LastPlatformTime;

		//The Clock's time is incremented by the Timepassed.
		ClockTime= ClockTime+TimePassed;

		//Make sure we update the LastPlatform time using the CurrentPlatformTime.
		LastPlatformTime=CurrentPlatformTime;


		return  true;
	}

	return false;

}

void FClock::Start()
{
	if(bIsStopped)
	{
		//What time was the Platform time when we started?
		LastPlatformTime = FPlatformTime::Seconds();

		ClockTime = 0;

		bIsRunning = true;
		bIsPaused = false;
		bIsStopped = false;

	}
}

void FClock::Pause()
{
	if(bIsRunning)
	{
		bIsRunning = false;
		bIsStopped = false;
		bIsPaused = true;
	}

}

void FClock::Resume()
{
	if(bIsPaused)
	{
		//What time was the Platform time when we Resumed?
		LastPlatformTime = FPlatformTime::Seconds();

		bIsPaused = false;
		bIsRunning = true;
		bIsStopped = false;
	}
	
}

void FClock::Stop()
{
	ClockTime=0;

	bIsRunning=false;
	bIsPaused=false;
	bIsStopped=true;
}

double FClock::GetCurrentTime()
{
	return ClockTime;
}

bool FClock::IsRunning()
{
	return bIsRunning;
}

void FMidiBroadcasterThread::SetStartTimesSet(TSet<FMidiEventsTime>& InStartTimesSet)
{
	NoteStartTimesSet=InStartTimesSet;
}

FMidiBroadcasterThread::FMidiBroadcasterThread()
{
	//Create the actual thread.
	
	Thread = FRunnableThread::Create(this, TEXT("FMidiBroadcasterThread"), 0, EThreadPriority::TPri_BelowNormal);
	
}



bool FMidiBroadcasterThread::Init()
{
	//If init is called that means the thread was created successfully.

	return true;
}

uint32 FMidiBroadcasterThread::Run()
{
	//Start of our main function. Run is like a main() function

	bExitRunLoop = false;

	bHasThreadExitedNormally = false;

	//Start our loop here. 
	while (!bExitRunLoop)
	{
		
		//If evaluate signal received from MainThread, then start evaluation
		if(bUpdateEvaluation) 
		{
			//Make sure you call update.
			bool bClockUpdated = Clock.Update();

			//If the clock's been updated, try update the queue.
			if (bClockUpdated)
			{

				//Add our stopwatch time , to the main thread player's start time.
				double EvaluationTime = EvaluatingFrom + Clock.GetCurrentTime();

				if(EvaluationTime>EvaluatingToTime)
				{
					

					Clock.Stop();

					//Wait for main thread to call update again.
					bUpdateEvaluation=false;
					
				}
				else
				{
					//Keep checking for notes every tick until found.
					UpdateNoteEventsTimeQueue(EvaluationTime);
				}

			}

			//FPlatformProcess::Sleep(0.008);

		}

		//We need our thread to sleep every loop so that it doesn't use a lot of CPU.
		//Set this to a lower value as Midi is time critical.
		FPlatformProcess::Sleep(0.0008);
		
	}

	return 0;
}

bool FMidiBroadcasterThread::UpdateNoteEventsTimeQueue(double inCurrentSeconds)
{

	//Convert seconds to FMidiEventsTime
	FMidiEventsTime MidiTimeFromSeconds = FMidiEventsTime(inCurrentSeconds);

	//Check if FMidiEventsTime is in TSet
	//We saved all NoteOnTimes in a TMap as keys.
	//We are checking if the current time matches any of those times. If yes we know there are notes there.
	FMidiEventsTime* TimeToTriggerPtr = NoteStartTimesSet.Find(MidiTimeFromSeconds);

	if (TimeToTriggerPtr)
	{
		MidiEventsTimeQueue.Emplace(*TimeToTriggerPtr);
		return  true;
	}

	return false;

}

void FMidiBroadcasterThread::SuspendThread()
{
	Thread->Suspend();

	bThreadSuspended=true;
}

void FMidiBroadcasterThread::ResumeThread()
{
	Thread->Suspend(false);

	bThreadSuspended=false;
}

bool FMidiBroadcasterThread::IsThreadSuspended()
{
	return bThreadSuspended;
}

void FMidiBroadcasterThread::EmptyQueue()
{
	//Reset the Queue. If thread was stopped while queue has elements,
	//on the next run these last elements will be processed.
	MidiEventsTimeQueue.Empty();
}

bool FMidiBroadcasterThread::IsEvaluating()
{
	return bUpdateEvaluation;
}

TArray<FMidiEventsTime> FMidiBroadcasterThread::GetTimeQueue()
{

	TArray<FMidiEventsTime> QueueCopy = MidiEventsTimeQueue;

	//Flush the Queue
	MidiEventsTimeQueue.Empty();


	//return the copy for the game thread to use.
	return QueueCopy;
}

void FMidiBroadcasterThread::Stop()
{
	//If the thread was not exited normally, that means this is a forceful kill.
	if(!bHasThreadExitedNormally)
	{
		//Resume the thread if it was suspended.Otherwise it will never exit from run function as its paused.
		Thread->Suspend(false);


		bExitRunLoop = true;
	}
}

void FMidiBroadcasterThread::Exit()
{
	bHasThreadExitedNormally=true;
}


bool FMidiBroadcasterThread::StartNotesEvaluation(TSet<FMidiEventsTime>& InStartTimesSet)
{

	if (InStartTimesSet.IsEmpty())
	{
		return false;
	}

	SetStartTimesSet(InStartTimesSet);

	//Make sure queue is empty.
	EmptyQueue();

	//Resume the thread if it may be suspended.
	ResumeThread();

	bReadyForEvaluation = true;

	return true;
}

void FMidiBroadcasterThread::UpdateNotesEvaluation(double InEvaluatingFromTime, double InEvaluatingToTime)
{
	//if (bReadyForEvaluation)
	{
		bUpdateEvaluation = true;

		EvaluatingFrom = InEvaluatingFromTime;

		EvaluatingToTime = InEvaluatingToTime;

		//This is where we start the clock, Called from GameThread.
		Clock.Start();
	}
}

void FMidiBroadcasterThread::PauseNotesEvaluation()
{

	bReadyForEvaluation=false;


}

bool FMidiBroadcasterThread::ResumeNotesEvaluation()
{

	if(!NoteStartTimesSet.IsEmpty())
	{

		EmptyQueue();

		bReadyForEvaluation = true;

		return true;

	}

	
	return false;
}

void FMidiBroadcasterThread::StopNotesEvaluation()
{
	bReadyForEvaluation = false;

	EmptyQueue();



	

}


FMidiBroadcasterThread::~FMidiBroadcasterThread()
{
	if (Thread)
	{
		//If the thread hasn't exited normally when  this is deleted, call the kill function
		if(!bHasThreadExitedNormally)
		{
			//This will call stop
			Thread->Kill();
		}

		delete Thread;

		Thread =NULL;
	}
}
