// Copyright Algosyntax 2022. All Rights Reserved.


#include "Subsystems/AxMidiEngineCoreSubsystem.h"
#include "MidiFile.h"
#include "Strings/FAxStringOps.h"
#include "MidiClasses/AxMidiAsset.h"
#include "MidiClasses/AxMidiTrack.h"

void UAxMidiEngineCoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{

	Super::Initialize(Collection);

	MidiEngineCoreSettings = GetMutableDefault<UAxMidiEngineCoreSettings>();

	InitPitchNamesMap();

}

void UAxMidiEngineCoreSubsystem::InitPitchNamesMap()
{
	PitchNamesToNumberMap.Empty();

	for (int i = 0; i < 128; i++)
	{
		FString NoteName = GetPitchNameFromNumber(i);

		PitchNamesToNumberMap.Add(NoteName, i);
	}

}

bool UAxMidiEngineCoreSubsystem::GetPitchNumberFromName(FString InPitchName, int& OutPitchNumber)
{
	//Is this a valid PitchName between 0 and 127?
	auto NumPtr = PitchNamesToNumberMap.Find(InPitchName);

	if (NumPtr)
	{
		OutPitchNumber = *NumPtr;
		return true;
	}
		
	//else 
	OutPitchNumber=NAN;
	return false;
}

FString UAxMidiEngineCoreSubsystem::GetPitchNameFromNumber(int PitchNumber)
{
	/* Modulo 12 will wrap PitchNumber(like 60) around 0 to 11, which is 12 keys(an octave)
		 * We'll use this to determine Note Letter.
		 */
	int NoteLetterModulo = PitchNumber % 12;

	//lets's convert the modulo result to an actual Note letter.
	FString NoteLetter;

	switch (NoteLetterModulo)
	{
		case  0: NoteLetter = "C";  break;
		case  1: NoteLetter = "C#"; break;
		case  2: NoteLetter = "D";  break;
		case  3: NoteLetter = "D#"; break;
		case  4: NoteLetter = "E";  break;
		case  5: NoteLetter = "F";  break;
		case  6: NoteLetter = "F#"; break;
		case  7: NoteLetter = "G";  break;
		case  8: NoteLetter = "G#"; break;
		case  9: NoteLetter = "A";  break;
		case 10: NoteLetter = "A#"; break;
		case 11: NoteLetter = "B";  break;
	}


	if(!MidiEngineCoreSettings)
		MidiEngineCoreSettings =  GetMutableDefault<UAxMidiEngineCoreSettings>();

	//Modify the display name to match the DAW
	int MiddleCModifier= MidiEngineCoreSettings->GetMiddleCModifier();

	/*
		 * Octave number is the "5" in C5.
		 * By dividing by 12(octave) we ensure all 12 keys C to B are covered
		 * before we change octave, eg, move from 4, to 5 as an octave.
		 *
		 * By default this sets our middle C(60) as C5. if you want it to be C4 the line below should be:
		 * OctaveNumber = (Properties.PitchNumber / 12) + (-1) ;
		 */
	int OctaveNumber = (PitchNumber / 12) + MiddleCModifier;

	//Finally create and return the Pitch name like C5.
	return NoteLetter + FString::FromInt(OctaveNumber);
}

UAxMidiNote* UAxMidiEngineCoreSubsystem::NewLivePerformanceNote(UAxMidiTrack* InOuter, int InPitch, int InVelocity)
{
	//Send NoteON Event;
	UAxMidiNote* MidiNote = NewObject<UAxMidiNote>(InOuter, StaticClass());
	MidiNote->Properties.StartTime = -1;
	MidiNote->Properties.StopTime = -1;
	MidiNote->Properties.Duration = -1;
	MidiNote->Properties.Velocity = InVelocity;
	MidiNote->Properties.PitchNumber = InPitch;


	MidiNote->Properties.PitchName = GetPitchNameFromNumber(InPitch);


	return MidiNote;
}

bool UAxMidiEngineCoreSubsystem::SmfReadMidiFile(smf::MidiFile& smfMidiFileObj, const FString& midiFileName)
{
	std::string midi_file_std_string = FAxStringOps::StdFromFString(midiFileName);

	const bool bIsReadSuccess = smfMidiFileObj.read(midi_file_std_string);

	if (bIsReadSuccess)
	{
		/*Link note - ONs to note - OFFs separately
			for each track.  Returns the total number of note message pairs
		 that were linked.*/
		smfMidiFileObj.linkNotePairs();

		/*
		 *Call this function to create a time map of note hits.
		 *The library will create a time map in seconds taking into consideration
		 *tempo changes when this function is called.
		 *For example, note C5 was hit at 0.5seconds... etc.
		 */
		smfMidiFileObj.doTimeAnalysis();
	}
	return bIsReadSuccess;
}

UAxMidiAsset* UAxMidiEngineCoreSubsystem::CreateMidiAssetFromFile(FString FilePath)
{
	//We are using this function as the Blueprint exposed Factory because you can't use EObjectFlags as an argument to a UFunction for some reason.

	return NewMidiAssetFromMidiFile(FilePath);
}

UAxMidiAsset* UAxMidiEngineCoreSubsystem::NewMidiAssetFromMidiFile(FString MidiFilePath, UObject* InParent, UClass* InClass,
                                                               FName InName, EObjectFlags InFlags)
{
	if (InParent == nullptr)
		InParent = this;

	if (InClass == nullptr)
		InClass = UAxMidiAsset::StaticClass();

	if (InName.GetStringLength() < 1)
		InName = NAME_None;


	UAxMidiAsset* MidiAsset = NewObject<UAxMidiAsset>(InParent, InClass, InName, InFlags);



	MidiAsset->SourceMidiFilePath = MidiFilePath;

	smf::MidiFile MidiFile;

	bool bMidiFileOk = SmfReadMidiFile(MidiFile, MidiFilePath);

	if (!bMidiFileOk)
		return nullptr;


	//Set the name of the MidiFile
	MidiAsset->Name = MidiFile.getFilename();

	//////////////////////////////////////////////////////////////////////////////////////////////////

	int UntitledTracksCounter = 0; //used in loop to label untitled Tracks
	int SameTrackNameCounter=0;

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int track = 0; track < MidiFile.getNumTracks(); track++)
	{
		UAxMidiTrack* MidiTrack = NewObject<UAxMidiTrack>(MidiAsset, UAxMidiTrack::StaticClass());

		//Init should be called before all other UAxMidiTrack* functions.
		MidiTrack->Init("");
		
		//MidiFile[track].
		for (int event = 0; event < MidiFile[track].getEventCount(); event++)
		{
			smf::MidiEvent* SmfMidiEvent = &(MidiFile[track][event]);

			//trackName is a FString so we need to call .c_str() on the std:string below
			if (SmfMidiEvent->isTrackName())
				MidiTrack->SetTrackName( (SmfMidiEvent->getMetaContent()).c_str() );

			else if (SmfMidiEvent->isTempo())
			{
				
				
				if(MidiAsset->BPMCurve)
				{
					double BPMValue = SmfMidiEvent->getTempoBPM();

					FKeyHandle KeyHandle = MidiAsset->BPMCurve->FloatCurve.AddKey(
						SmfMidiEvent->seconds, BPMValue, false);

					//CC Curves are usually. Constant In FL Studio So we set it constant. You can change after import though.
					MidiAsset->BPMCurve->FloatCurve.SetKeyInterpMode(KeyHandle, RCIM_Constant);
				}

			}
			else if (SmfMidiEvent->isNoteOn())
			{
				//Create UAxMidiNote from smfMidiEvent

				UAxMidiNote* MidiNote = CreateMidiNote(SmfMidiEvent);

				//Only insert the valid midi notes
				if(MidiNote)
					MidiTrack->InsertMidiNote(MidiNote);
			}
			else if (SmfMidiEvent->isTimeSignature())
			{
				auto signature = SmfMidiEvent->getMetaContent();

				int numerator = signature[0];

				//the denominator is saved as a power of 2 in the MIDI file.
				//eg 4/4 is saved as 4/2, because 2^2=4.
				//eg  6/8 is saved a 6/3 because 2^3=8.
				int denominator = pow(2.0, signature[1]);

				MidiAsset->TimeSignatureNumerator = numerator;
				MidiAsset->TimeSignatureDenominator = denominator;
			}
			else if (SmfMidiEvent->isPitchbend())
			{
				int lsb = SmfMidiEvent->getP1();
				int msb = SmfMidiEvent->getP2();
				int value = (msb << 7) | lsb;

				//value range is = 0 to 16,383
				//0 Meaning Minimum Pitch bend and 16 383.
				//ergo Middle Point, 8,192, is no Pitch Bend.
				//lets remap it between -1 and 1

				FDoubleRange InputRange(0.f, 16383.f);
				FDoubleRange OutputRange(-1.f, 1.f);

				double PitchBend = FMath::GetMappedRangeValueClamped(InputRange, OutputRange,
				                                                     static_cast<double>(value));

				if (MidiTrack->PitchBendCurve)
				{
					FKeyHandle KeyHandle = MidiTrack->PitchBendCurve->FloatCurve.AddKey(
						SmfMidiEvent->seconds, PitchBend, false);

					//PitchBend is Constant In FL Studio So we set it constant. You can change after import though.
					MidiTrack->PitchBendCurve->FloatCurve.SetKeyInterpMode(KeyHandle, RCIM_Constant);
				}
			}
		}

		//If we couldn't find the track name label it as Untitled
		if (MidiTrack->GetTrackName().IsEmpty())
		{
			MidiTrack->SetTrackName("Untitled Track_" + FString::FromInt(UntitledTracksCounter));
			UntitledTracksCounter++;
		}


		//First lets check if the name is free, (Some MidiTracks have same name(from other sites).
		if (FindObject<UAxMidiTrack>(MidiAsset, *MidiTrack->GetTrackName()))
		{
			//Tracks that trigger this section have the same name as an existing one.
			//we mitigate this by attaching a counter 
			MidiTrack->SetTrackName(MidiTrack->GetTrackName() +"_" + FString::FromInt(SameTrackNameCounter));

			SameTrackNameCounter++;
			
		}

		//Renames the track Ptr, eg to 808 Kick etc... so that it has a nice name in the editor
		//We already set the proper Outer as MidiAsset but Rename function requires it.
		MidiTrack->Rename(*MidiTrack->GetTrackName(), MidiAsset);

		//Insert the newly created track in to the MidiAsset
		MidiAsset->InsertTrack(MidiTrack);

	}


	MidiAsset->SortMidiNotesQueue();

	//Computes and Sets the MidiAsset's Total Duration
	MidiAsset->ComputeDuration();

	return MidiAsset;
}

UAxMidiNote* UAxMidiEngineCoreSubsystem::CreateMidiNote(smf::MidiEvent* smfMidiEvent)
{

	/*
	 * getLinkedEvent gets the noteOff event
	 * Sometimes the lib fails to get the note off event during analysis
	 * and this is null. in that case we discard
	 */
	smf::MidiEvent* NoteOffEvent = smfMidiEvent->getLinkedEvent();//

	if (!NoteOffEvent)
		return nullptr;

	
	//Ownership (OuterObject) will get set when this note event is added to a Track
	UAxMidiNote* MidiNote = NewObject<UAxMidiNote>();

	int Pitch = smfMidiEvent->getKeyNumber();
	MidiNote->Properties.PitchNumber = (Pitch);
	MidiNote->Properties.PitchName = GetPitchNameFromNumber(Pitch);

	MidiNote->Properties.StartTime = smfMidiEvent->seconds;
	MidiNote->Properties.Duration = smfMidiEvent->getDurationInSeconds();

	MidiNote->Properties.StopTime = smfMidiEvent->getLinkedEvent()->seconds; //getLinkedEvent gets the noteOff event

	//TODO remove on final build. checking for reading/file errors
	bool bStartStopDifferent = MidiNote->Properties.StartTime != MidiNote->Properties.StopTime;
	ensureMsgf(bStartStopDifferent, TEXT("Midi Note has the same start and stop times."));

	MidiNote->Properties.Velocity = smfMidiEvent->getVelocity();


	return MidiNote;
}
