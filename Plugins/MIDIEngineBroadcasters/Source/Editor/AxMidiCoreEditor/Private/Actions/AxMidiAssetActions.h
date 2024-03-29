// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "MidiClasses/AxMidiAsset.h"

/**
 * 
 */
class FAxMidiAssetActions : public FAssetTypeActions_Base
{

private:

	

public:


	/**
	 * @brief  Returns true to answer: yes, this MidiAsset has actions.
	 * @param InObjects The selected UAxMidiAssets in the editor
	 * @return 
	 */
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override;

	/**
	 * @brief This is our right-click menu populating function.
	 *		  We will insert the Reimport button into the menu here.
	 *		  MenuBuilder is passed in and we call addMenuEntry to add an entry.
	 * @param InObjects The UAxMidiAsset or Assets, If multiple selected.
	 * @param MenuBuilder The MenuBuilder to call AddMenuEntry on.
	 */
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;

	/**
	 * @brief Called on "Reimport" Menu Entry Click
	 *		  This will initiate the reimport process by calling
	 *		  Editor Reimporting functions.
	 */
	void ReimportMidiAssetMenuEntryCallback(TArray<TWeakObjectPtr<UAxMidiAsset>> MidiAssetsWeakPtrs);

	/**
	 * @brief Adds A Menu Entry To Shift The Selected Midi Assets' MidiNotes, An Octave Up.
	 * @param InObjects 
	 * @param MenuBuilder 
	 */
	void AddShiftOctaveUpMenuEntry(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder);

	/**
	 * @brief Will Shift MidiNotes of the MIDIAsset an octave up
	 * @param MidiAssetsWeakPtrs 
	 */
	void ShiftOctaveUpMenuEntryCallback(TArray<TWeakObjectPtr<UAxMidiAsset>> MidiAssetsWeakPtrs);



	/**
	 * @brief Adds A Menu Entry To Shift The Selected Midi Assets' MidiNotes, An Octave Up.
	 * @param InObjects
	 * @param MenuBuilder
	 */
	void AddShiftOctaveDownMenuEntry(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder);

	/**
	 * @brief Will Shift MidiNotes of the MIDIAsset an octave up
	 * @param MidiAssetsWeakPtrs
	 */
	void ShiftOctaveDownMenuEntryCallback(TArray<TWeakObjectPtr<UAxMidiAsset>> MidiAssetsWeakPtrs);




	virtual FText GetName() const override;

	UClass* GetSupportedClass() const override;

	FColor GetTypeColor() const override;

	uint32 GetCategories() override;
	
};
