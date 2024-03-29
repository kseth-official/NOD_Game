// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MidiEventsTime.generated.h"

/**
 * A Custom Time Format for MidiEvents.
 * Using floats with maps is inaccurate cause of floating point error, so we define our own data type for better accuracy.
 * An example of a MidiEvent is a NoteON_Event ,Or NoteOff.
 * And a FMidiEventsTime is the time that event happens.
 *
 */
USTRUCT()
struct AXMIDIBROADCASTERS_API FMidiEventsTime
{
	GENERATED_BODY()

private:

	/*
	 * The float to integer conversion factor.
	 * Determines how much milliseconds or microseconds to preserve during conversion.
	 * Eg. with a conversionFactor of 100; ---> 1.23070*100 = 123  ---> the '070' is lost and truncated.
	 * Meaning we lost the microseconds
	 * MUST ALWAYS BE A POWER OF 10. EG(10,100,1000 etc)
	 */
	int ConversionFactor = 100;

	/**
	 * @brief Time converted from floats(seconds) to int(seconds).
	 *		  We multiply floats by ConversionFactor to get Integer Seconds.
	 *		  A higher conversionFactor will preserve more seconds.
	 */
	int IntSeconds=0;

public:
	FMidiEventsTime()
	{}

	FMidiEventsTime(float Seconds);

	FMidiEventsTime(double inSeconds);


	/**
	 * @brief Converts this FMidiEventsTime to Seconds.
	 * @return seconds, as double.
	 */
	double ToSeconds();

	//Override the comparison operator
	bool operator==(const FMidiEventsTime& Other) const
	{
		return IntSeconds==Other.IntSeconds;
	}

	FMidiEventsTime operator+(const FMidiEventsTime& Other) const
	{
		FMidiEventsTime MidiTime=FMidiEventsTime(0.0);

		MidiTime.IntSeconds=this->IntSeconds+Other.IntSeconds;

		return MidiTime;
	}

	bool operator <(const FMidiEventsTime& Other) const
	{
		return IntSeconds<Other.IntSeconds;
	}

	bool operator >(const FMidiEventsTime& Other) const
	{
		return IntSeconds > Other.IntSeconds;
	}

	bool operator!=(const FMidiEventsTime& Other) const
	{
		return IntSeconds!=Other.IntSeconds;
	}


};

FORCEINLINE uint32 GetTypeHash(const FMidiEventsTime& MidiEventsTime)
{
	uint32 Hash = FCrc::MemCrc32(&MidiEventsTime, sizeof(FMidiEventsTime));
	return Hash;
}
