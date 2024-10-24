// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RhythmNote.h"
#include "Components/ActorComponent.h"
#include "NotePoolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEAM13_GAME_API UNotePoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNotePoolComponent();

	virtual ~UNotePoolComponent() override;

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

	// Free list implementation of an Object Pool
	struct FPoolNode
	{
		TObjectPtr<ARhythmNote> Note;
		FPoolNode* Next;
	};

	FPoolNode* PoolHead;

	UPROPERTY()
	TArray<ARhythmNote*> AllNotes;

	// Insert at head of linked list
	void AddToPool(TObjectPtr<ARhythmNote> Note);

	// Remove head of linked list and advance head ptr
	ARhythmNote* RemoveFromPool();

	const int32 DEFAULT_POOL_SIZE = 20;

	const FString NOTE_POOL_COMP_TAG = "NOTE_POOL_COMP : ";
	const FColor NOTE_POOL_DEBUG_DEFAULT_COLOR = FColor::Red;
	const float NOTE_POOL_DEBUG_MESSAGE_LENGTH = 5.f;
};
