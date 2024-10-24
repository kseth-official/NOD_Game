// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RhythmNote.h"
#include "Components/ActorComponent.h"
#include "DEPRECATED_UNotePoolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Deprecated )
class TEAM13_GAME_API UDEPRECATED_UNotePoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDEPRECATED_UNotePoolComponent();

	virtual ~UDEPRECATED_UNotePoolComponent() override;

	UFUNCTION(BlueprintCallable, Category = "Debug")
	void DebugWithMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "Configuration")
	int32 GetPoolSize() const;

	UFUNCTION(BlueprintCallable, Category = "Configuration")
	void SetPoolSize(const int32& Size);

	UFUNCTION(BlueprintCallable, Category = "Notes")
	ARhythmNote* AcquireNote(const FTransform& SpawnTransform);

	UFUNCTION(BlueprintCallable, Category = "Notes")
	void ReleaseNote(ARhythmNote* Note);

	UFUNCTION(BlueprintCallable, Category = "Rhythm Note Pool")
	void InitializePool(const int32& InitialSize);

	UFUNCTION(BlueprintCallable, Category = "Rhythm Note Pool")
	void DeInitializePool();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration", meta =
		(ToolTip = "The size of the pool of notes."))
	int32 PoolSize;

private:

	UPROPERTY()
	TSet<TObjectPtr<ARhythmNote>> AvailableNotesInPool;

	UPROPERTY()
	TSet<TObjectPtr<ARhythmNote>> UnavailableNotesInPool;

	const int32 DEFAULT_POOL_SIZE = 20;

	const FString NOTE_POOL_COMP_TAG = "NOTE_POOL_COMP : ";
	const FColor NOTE_POOL_DEBUG_DEFAULT_COLOR = FColor::Red;
	const float NOTE_POOL_DEBUG_MESSAGE_LENGTH = 5.f;
};
