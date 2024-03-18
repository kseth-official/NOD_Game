// Copyright Algosyntax 2022. All Rights Reserved.


#include "Deprecated/MidiEventsTime.h"

FMidiEventsTime::FMidiEventsTime(float Seconds)
{
	IntSeconds=Seconds*ConversionFactor;
}

FMidiEventsTime::FMidiEventsTime(double inSeconds)
{
	IntSeconds = inSeconds * ConversionFactor;
}

double FMidiEventsTime::ToSeconds()
{
	//we need to cast before dividing or truncation happens.
	double IntSecondsAsFloat= static_cast<double>(IntSeconds);

	//Convert to the actual seconds we are looking for
	double Seconds=IntSecondsAsFloat/ConversionFactor;

	return Seconds;
}

