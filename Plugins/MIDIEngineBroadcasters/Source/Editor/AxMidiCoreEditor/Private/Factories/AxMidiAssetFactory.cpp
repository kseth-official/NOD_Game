// Copyright Algosyntax 2023. All Rights Reserved.


#include "AxMidiAssetFactory.h"


#include "Misc/FileHelper.h"
#include "EditorFramework/AssetImportData.h"
#include "MidiClasses/AxMidiAsset.h"
#include "MidiClasses/AxMidiTrack.h"
#include "Misc/FeedbackContext.h"
#include "Subsystems/AxMidiEngineCoreSubsystem.h"
#include "Engine/Engine.h"
#include "Licensing/AxClientAssetsProxy.h"




UAxMidiAssetFactory::UAxMidiAssetFactory()
{
	Formats.Add(FString(TEXT("mid;")) + NSLOCTEXT("UAxMidiAssetFactory", "FormatMid", "Midi File").ToString());
	SupportedClass = UAxMidiAsset::StaticClass();
	bCreateNew = false;
	bEditorImport = true;

	ImportPriority=5;
}


UObject* UAxMidiAssetFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                              const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn,
                                              bool& bOutOperationCanceled)
{

#ifdef AX_CLIENT_REMOTE_AUTH

	FAxAssetAuthStateInfo AssetAuthState = FAxClientAssetsProxy::GetAssetAuthState(AX_CLIENT_REMOTE_AUTH);

	switch (AssetAuthState.AuthState)
	{
		case EAxAssetAuthState::LOCKED:
		{
			//Override title.
			AssetAuthState.AuthReasonMessage = "MIDI File Importing Locked, Please Login Through The Algosyntax Client";

			FAxClientAssetsProxy::ShowAssetAuthStateMessage(AssetAuthState);

			//cancel the import
			bOutOperationCanceled = true;

			//return immediately.
			return nullptr;
		}
		case EAxAssetAuthState::UNLOCKED:
		{
			//let it import.
			break;
		}
		case EAxAssetAuthState::TRIAL:
		{
			//todo: Set import limit if you like. (like half the file).
			//For now we'll just show message and  not limit anything.

			//We're on trial mode.
			//AssetAuthState.AuthReasonTitle = "TRIAL Mode. Limited MIDI Import Features";
			//AssetAuthState.AuthReasonMessage = "Please Login Through The Algosyntax Client";

			//FAxClientAssetsProxy::ShowAssetAuthStateMessage(AssetAuthState);

			
			
			break;
		}
		
	}

	
#endif

	auto MidiEngineCoreSubsystem=GEngine->GetEngineSubsystem<UAxMidiEngineCoreSubsystem>();


	UAxMidiAsset* MidiAsset = nullptr;

	if (!Filename.IsEmpty() && !bOutOperationCanceled)
	{

		MidiAsset=MidiEngineCoreSubsystem->NewMidiAssetFromMidiFile(Filename,InParent,InClass,InName,Flags);
	}

	if(!MidiAsset)
	{
		bOutOperationCanceled=true;
		return nullptr;
	}

	bOutOperationCanceled = false;


	return MidiAsset;
}

bool UAxMidiAssetFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	UAxMidiAsset* MidiAsset = Cast<UAxMidiAsset>(Obj);

	if (MidiAsset)
	{
		FString FileExtension = FPaths::GetExtension(MidiAsset->SourceMidiFilePath, true);


		//We can only deal with .mid files.

		if (FileExtension == ".mid")
			return true;
	}
	
	//if we return false, the next factory that handles UAxMidiAssets will take over.
	return false;
}

void UAxMidiAssetFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	UAxMidiAsset* MidiAsset = Cast<UAxMidiAsset>(Obj);

	if (MidiAsset)
	{
		FString SanitizedPath = UAssetImportData::SanitizeImportFilename(NewReimportPaths[0], MidiAsset->GetOutermost());


		MidiAsset->ReimportPath = SanitizedPath;
	}
}

EReimportResult::Type UAxMidiAssetFactory::Reimport(UObject* Obj)
{
	bool bOutCanceled = false;


	UAxMidiAsset* OldMidiAsset = Cast<UAxMidiAsset>(Obj);

	if (OldMidiAsset == nullptr)
		return EReimportResult::Failed;

	FString FileExtension = FPaths::GetExtension(OldMidiAsset->ReimportPath, true);


	//We can only deal with .mid files.

	if (FileExtension != ".mid")
		return EReimportResult::Failed;

	OldMidiAsset->SourceMidiFilePath = OldMidiAsset->ReimportPath;

	OldMidiAsset->ReimportPath.Empty();


	//Free up the existing names.
	for (auto Track : OldMidiAsset->GetMidiTracksAsArray())
	{
		//We need to free up old track names.
		//MakeUniqueObjectName() will get called automatically.
		Track->Rename();
	}

	//Delete all MidiTracks in the old asset to trigger GC
	OldMidiAsset->Flush();

	UObject* ImportedObject = ImportObject(OldMidiAsset->GetClass(), OldMidiAsset->GetOuter(), OldMidiAsset->GetFName(),
	                                       OldMidiAsset->GetFlags(), OldMidiAsset->SourceMidiFilePath, nullptr,
	                                       bOutCanceled);


	if (ImportedObject)
		return EReimportResult::Succeeded;

	return EReimportResult::Failed;
}

UAxMidiAssetFactoryNew::UAxMidiAssetFactoryNew()
{
	SupportedClass = UAxMidiAsset::StaticClass();
	bCreateNew = false;
}

UObject* UAxMidiAssetFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAxMidiAsset>(InParent, InClass, InName, Flags);
}
