// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StaticMeshOps.generated.h"

class UStaticMeshComponent;
class UStaticMesh;


UENUM(BlueprintType)
enum class EAxAxis : uint8
{
	X,
	Y,
	Z
};

/**
 * 
 */
UCLASS()
class COMMONOPS_API UStaticMeshOps : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * @brief Gets a StaticMeshComponent's current dimensions in world space.
	 *		  Takes into account scaling and rotation.
	 * @param StaticMeshComponent
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = "Utilities|StaticMesh")
	static FVector GetStaticMeshDimensions(const UStaticMeshComponent* StaticMeshComponent);

	UFUNCTION(BlueprintCallable, Category = "Utilities|StaticMesh")
	static UStaticMeshSocket* AddSocketToStaticMesh( UStaticMesh* InStaticMesh);

	UFUNCTION(BlueprintCallable, Category = "Utilities|StaticMesh")
	static bool CopyTemplateSocketAlongAxis(UStaticMesh* InStaticMesh, EAxAxis InAxis,FName InTemplateSocketName,FString InNewSocketsTag,
											int32 NumSocketsToCreate,float InSocketsOffset );

	UFUNCTION(BlueprintCallable, Category = "Utilities|StaticMesh")
	static bool CopyTemplateSocketAlongAxisOnAssets(TArray<UObject*> InStaticMeshAssets, EAxAxis InAxis, FName InTemplateSocketName, FString InNewSocketsTag,
	int32 NumSocketsToCreate, float InSocketsOffset);

	/**
	 * @brief Takes an array of meshes and deletes certain sockets by tag.
	 * @param InStaticMeshAssets 
	 * @param InSocketTag 
	 * @return Num Sockets removes
	 */
	UFUNCTION(BlueprintCallable, Category = "Utilities|StaticMesh")
	static int32 DeleteSocketsByTag(TArray<UObject*> InStaticMeshAssets, FString InSocketTag);

	/**
	 * @brief Takes an array of meshes and deletes certain sockets by what the  name starts with.
	 * @param InStaticMeshAssets
	 * @param InNamePrefix
	 * @param SuffixFilter those that end with this suffix will be skipped
	 * @return Num Sockets removes
	 */
	UFUNCTION(BlueprintCallable, Category = "Utilities|StaticMesh")
	static int32 DeleteSocketsByNamePrefix(TArray<UObject*> InStaticMeshAssets, FString InNamePrefix,FString SuffixFilter);
	
};
