// Copyright Algosyntax 2022. All Rights Reserved.


#include "Settings/AxMidiEngineCoreSettings.h"

int UAxMidiEngineCoreSettings::GetMiddleCModifier()
{
	switch (MiddleC)
	{
		case EAxMidiMiddleC::C6:
			return 1;

		case EAxMidiMiddleC::C5:
			return 0;

		case EAxMidiMiddleC::C4:
			return -1;

		case EAxMidiMiddleC::C3:
			return -2;

		case EAxMidiMiddleC::C2:
			return -3;

		default: 
			return 0;
	}
}
