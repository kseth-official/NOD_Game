// Copyright Algosyntax 2022. All Rights Reserved.


#include "AxMidiAssetActions.h"

#include "EditorReimportHandler.h"
#include "MidiClasses/AxMidiAsset.h"


void FAxMidiAssetActions::ReimportMidiAssetMenuEntryCallback(TArray<TWeakObjectPtr<UAxMidiAsset>> MidiAssetsWeakPtrs)
{
	for (auto MidiAssetWeakPtr : MidiAssetsWeakPtrs)
	{
		UAxMidiAsset* MidiAsset= MidiAssetWeakPtr.Get();

		if(MidiAsset)
		{
			FReimportManager::Instance()->Reimport(MidiAsset,true);
		}
	}
}



bool FAxMidiAssetActions::HasActions(const TArray<UObject*>& InObjects) const
{
	return true;
}

void FAxMidiAssetActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	FText ButtonLabel=FText::FromString("Reimport/Replace");
	FText ButtonToolTip=FText::FromString("Replaces this MidiAsset with a .mid on disk");

	//
	/*
	 *Casting Our passed InObjects to UAxMidiAsset*... This function will cast all selected Objects.
	 *We could change this to the raw usual pointers we are used to. Just remember to change your
	 *callback function argument to match this datatype. it will get passed on to that.
	 */
	auto MidiAssets = GetTypedWeakObjectPtrs<UAxMidiAsset>(InObjects);

	//
	/*
	 * We are actually creating a delegate. The delegate will get passed on to FUIAction as a constructor argument.
	 * Currently, we are assuming FUIAction will call the Broadcast,or Execute() functions when appropriate(...On Click).
	 * When we create this delegate, we immediately bind a function to it, with CreateSP, the function is the function to call on click.
	 * Our Reimport CallBackFunction. It will pass the selected MidiAssets, as weak pointers, on to our callback function.
	 * 
	 *
	 */
	auto TDelegateExecuteAction=FExecuteAction::CreateSP(this,&FAxMidiAssetActions::ReimportMidiAssetMenuEntryCallback, MidiAssets);


	auto UIAction=FUIAction(TDelegateExecuteAction);


	MenuBuilder.AddMenuEntry(ButtonLabel,ButtonToolTip,FSlateIcon(), UIAction);

	AddShiftOctaveUpMenuEntry(InObjects,MenuBuilder);

	AddShiftOctaveDownMenuEntry(InObjects,MenuBuilder);
}



FText FAxMidiAssetActions::GetName() const
{
	return NSLOCTEXT("MidiAssetActions","MidiAsset","Midi Asset");
}

UClass* FAxMidiAssetActions::GetSupportedClass() const
{
	return UAxMidiAsset::StaticClass();
}

FColor FAxMidiAssetActions::GetTypeColor() const
{
	return FColor::Blue;
}

uint32 FAxMidiAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}


void FAxMidiAssetActions::AddShiftOctaveUpMenuEntry(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	/*
	 *Casting Our passed InObjects to UAxMidiAsset*... This function will cast all selected Objects.
	 *We could change this to the raw usual pointers we are used to. Just remember to change your
	 *callback function argument to match this datatype. it will get passed on to that.
	 */
	auto MidiAssets = GetTypedWeakObjectPtrs<UAxMidiAsset>(InObjects);


	/*
	 * We are actually creating a delegate. The delegate will get passed on to FUIAction as a constructor argument.
	 * Currently, we are assuming FUIAction will call the Broadcast,or Execute() functions when appropriate(...On Click).
	 * When we create this delegate, we immediately bind a function to it, with CreateSP, the function is the function to call on click.
	 * Our Reimport CallBackFunction. It will pass the selected MidiAssets, as weak pointers, on to our callback function.
	 *
	 *
	 */
	auto TDelegateExecuteAction = FExecuteAction::CreateSP(this, &FAxMidiAssetActions::ShiftOctaveUpMenuEntryCallback, MidiAssets);

	auto UIAction = FUIAction(TDelegateExecuteAction);


	FText ButtonLabel = FText::FromString("Shift Octave Up +");
	FText ButtonToolTip = FText::FromString("Will Shift All MidiNotes an Octave Up");



	MenuBuilder.AddMenuEntry(ButtonLabel, ButtonToolTip, FSlateIcon(), UIAction);

}


void FAxMidiAssetActions::ShiftOctaveUpMenuEntryCallback(TArray<TWeakObjectPtr<UAxMidiAsset>> MidiAssetsWeakPtrs)
{

	for (auto MidiAssetWeakPtr : MidiAssetsWeakPtrs)
	{
		UAxMidiAsset* MidiAsset = MidiAssetWeakPtr.Get();


		MidiAsset->ShiftNotes(12);


		//Mark the package dirty so that it can be saved.
		bool bMarkedForSave = MidiAsset->MarkPackageDirty();
	}


}

void FAxMidiAssetActions::AddShiftOctaveDownMenuEntry(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	/*
	 *Casting Our passed InObjects to UAxMidiAsset*... This function will cast all selected Objects.
	 *We could change this to the raw usual pointers we are used to. Just remember to change your
	 *callback function argument to match this datatype. it will get passed on to that.
	 */
	auto MidiAssets = GetTypedWeakObjectPtrs<UAxMidiAsset>(InObjects);


	/*
	 * We are actually creating a delegate. The delegate will get passed on to FUIAction as a constructor argument.
	 * Currently, we are assuming FUIAction will call the Broadcast,or Execute() functions when appropriate(...On Click).
	 * When we create this delegate, we immediately bind a function to it, with CreateSP, the function is the function to call on click.
	 * Our Reimport CallBackFunction. It will pass the selected MidiAssets, as weak pointers, on to our callback function.
	 *
	 *
	 */
	auto TDelegateExecuteAction = FExecuteAction::CreateSP(this, &FAxMidiAssetActions::ShiftOctaveDownMenuEntryCallback, MidiAssets);

	auto UIAction = FUIAction(TDelegateExecuteAction);


	FText ButtonLabel = FText::FromString("Shift Octave Down -");
	FText ButtonToolTip = FText::FromString("Will Shift All MidiNotes an Octave Down");



	MenuBuilder.AddMenuEntry(ButtonLabel, ButtonToolTip, FSlateIcon(), UIAction);


}

void FAxMidiAssetActions::ShiftOctaveDownMenuEntryCallback(TArray<TWeakObjectPtr<UAxMidiAsset>> MidiAssetsWeakPtrs)
{
	for (auto MidiAssetWeakPtr : MidiAssetsWeakPtrs)
	{
		UAxMidiAsset* MidiAsset = MidiAssetWeakPtr.Get();


		MidiAsset->ShiftNotes(-12);


		//Mark the package dirty so that it can be saved.
		bool bMarkedForSave = MidiAsset->MarkPackageDirty();
	}
}