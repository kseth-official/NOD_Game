// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Actions/AxMidiAssetActions.h"
#include "Modules/ModuleManager.h"
#include "Styles/AxMidiAssetStyles.h"

class FAxMidiCoreEditor : public IModuleInterface
{
    /* @brief This is the class/object responsible for creating styles associated
	 *		  with MidiAssets. This includes Asset Icons or thumbnails that appear in the editor.
	 */
	TSharedPtr<FAxMidiAssetStyles> MidiAssetStyle;

	/**
	 * @brief This is the class/object responsible for creating actions associated with MidiAssets.
	 *		   An example of an action is an entry in the right click menu of the asset that will do something
	 *		   To the asset.
	 */
	TSharedPtr<FAxMidiAssetActions> MidiAssetActions;

private:
	
	/**
	 * @brief Create MidiAssetStyle and Registers it.
	 */
	void RegisterMidiAssetStyles();

	/**
	 * @brief Deregister the MidiAssetStyles on shutdown.
	 */
	void DeRegisterMidiAssetStyles();

	/**
	 * @brief Registers Midi Asset Actions
	 */
	void RegisterMidiAssetActions();

public:

	void StartupModule() override;

	void ShutdownModule() override;

	void RegisterMidiEngineSettings();

	void DeRegisterMidiEngineSettings();


};
