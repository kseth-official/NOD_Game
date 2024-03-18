// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EditorReimportHandler.h"
#include "Factories/Factory.h"
#include "AxMidiAssetFactory.generated.h"




UCLASS()
class UAxMidiAssetFactoryNew : public UFactory
{
	GENERATED_BODY()

	UAxMidiAssetFactoryNew();

	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

/**
 * 
 */
UCLASS()
class UAxMidiAssetFactory : public UFactory , public FReimportHandler
{
	GENERATED_BODY()

	UAxMidiAssetFactory();

	// UFactory interface
	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
	// End of UFactory interface

	//FReimportHandler interface functions

	/**
	 * @brief Check to see if the handler is capable of reimporting the object. Should return true. 
	 * @param Obj The UAxMidiAsset UAsset. The original Object/UAsset to reimport.  
	 * @param OutFilenames ?
	 * @return True , to enable support for reimport
	 */
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames)  override;

	/**
	 * @brief When user clicks Import, a user dialog appears to select ANY file.
	 *		  You can save this file path (NewReimportPaths) into Obj, our UAxMidiAsset.
	 *		  In this case we use the new path to update SourceMidiFilePath variable.
	 *		  Called before Reimport. In Reimport we will read this new path and use it to create new UAxMidiAsset
	 * @param Obj The Old UAxMidiAsset , needs casting.
	 * @param NewReimportPaths The new file names/paths of the selected .mid file
	 */
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths) override;

	

	/**
	 * @brief This function will call importobject which will then call FactoryCreateFile() , From Ufactory.
	 *		  Before calling importobject we free UTrack names to avoid renaming error.
	 *		  Obj is the old UAxMidiAsset which we'll get and delete tracks from, preparing for new import
	 * @param Obj the old UAxMidiAsset*, needs casting.
	 * @return Success types for editor notifications. Eg: EReimportResult::Succeeded;
	 */
	virtual EReimportResult::Type Reimport(UObject* Obj) override;

	//End FReimportHandler interface functions




};
