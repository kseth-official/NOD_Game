// Copyright Algosyntax 2023. All Rights Reserved.

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AxMidiCoreEditor.h"
#include "AssetToolsModule.h"
#include "ISettingsModule.h"

#include "Modules/ModuleManager.h"
#include "Settings/AxMidiEngineCoreSettings.h"
#include "Styling/SlateStyleRegistry.h"

#define LOCTEXT_NAMESPACE "MidiEngine"

void FAxMidiCoreEditor::RegisterMidiAssetStyles()
{
	// Create a new style set
	MidiAssetStyle = MakeShareable(new FAxMidiAssetStyles());

	//TODO: Ensure the style is always valid, and handle case when its not.
	if(MidiAssetStyle.IsValid())
		FSlateStyleRegistry::RegisterSlateStyle(*MidiAssetStyle);
}

void FAxMidiCoreEditor::DeRegisterMidiAssetStyles()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*MidiAssetStyle);
}

void FAxMidiCoreEditor::RegisterMidiAssetActions()
{
	//Register
	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	MidiAssetActions = MakeShareable(new FAxMidiAssetActions());

	AssetToolsModule.RegisterAssetTypeActions(MidiAssetActions.ToSharedRef());

}



void FAxMidiCoreEditor::StartupModule()
{
	//Styles:thumbnails are other styling
	RegisterMidiAssetStyles();

	//Right click menu, like reimport button
	RegisterMidiAssetActions();

	RegisterMidiEngineSettings();




}

void FAxMidiCoreEditor::ShutdownModule()
{
	IModuleInterface::ShutdownModule();

	DeRegisterMidiAssetStyles();

	DeRegisterMidiEngineSettings();

}

void FAxMidiCoreEditor::RegisterMidiEngineSettings()
{
	// ...
	// Register settings
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

	if (SettingsModule != nullptr)
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "MidiEngine",
			LOCTEXT("MidiEngineCoreSettingsName", "MidiEngine"),
			LOCTEXT("MidiEngineCoreSettingsDescription",
				"Preferences For MidiEngine"),
			GetMutableDefault<UAxMidiEngineCoreSettings>()
		);
	}
}

void FAxMidiCoreEditor::DeRegisterMidiEngineSettings()
{
	// ...
		// Unregister settings
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule != nullptr)
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "MidiEngine");
	}
}



#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAxMidiCoreEditor, AxMidiCoreEditor);
