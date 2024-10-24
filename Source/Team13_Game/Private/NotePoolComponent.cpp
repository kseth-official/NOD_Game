// Fill out your copyright notice in the Description page of Project Settings.


#include "NotePoolComponent.h"
#include "BlueprintFunctionLibraries/DebugUtilityLibrary.h"

// Sets default values for this component's properties
UNotePoolComponent::UNotePoolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PoolSize = DEFAULT_POOL_SIZE;
	PoolHead = nullptr;
}

UNotePoolComponent::~UNotePoolComponent()
{
	while (PoolHead)
	{
		FPoolNode* NodeToDelete = PoolHead;
		PoolHead = PoolHead->Next;
		delete NodeToDelete;
	}
}

// Called when the game starts
void UNotePoolComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UNotePoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UNotePoolComponent::DebugWithMessage(const FString& Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(NOTE_POOL_COMP_TAG, -1, NOTE_POOL_DEBUG_MESSAGE_LENGTH, NOTE_POOL_DEBUG_DEFAULT_COLOR, Message);
}

int32 UNotePoolComponent::GetPoolSize() const
{
	return PoolSize;
}

void UNotePoolComponent::SetPoolSize(const int32& Size)
{
	if (Size >= 0)
		PoolSize = Size;
	else
		DebugWithMessage("Note Pool Size Cannot Be Less Than 0");
}

void UNotePoolComponent::InitializePool(const int32& InitialSize)
{
	DebugWithMessage("Initializing Object Pool");

	const TObjectPtr<UWorld> World = GetWorld();

	if (!World)
	{
		DebugWithMessage("World was nullptr");
		return;
	}

	// Initializes all the actors at the initial location of the owner.
	const AActor* Owner = GetOwner();

	if (!Owner)
	{
		DebugWithMessage("Owner was nullptr");
		return;
	}

	for (int32 i = 0; i < PoolSize; i++)
	{
		TObjectPtr<ARhythmNote> NewNote = World->SpawnActor<ARhythmNote>(ARhythmNote::StaticClass(), Owner->GetActorTransform());

		if (NewNote)
		{
			NewNote->SetActorHiddenInGame(true);
			NewNote->SetActorEnableCollision(false);
			NewNote->SetActorTickEnabled(false);
			AddToPool(NewNote);
			AllNotes.Add(NewNote);
		}
	}
}

ARhythmNote* UNotePoolComponent::AcquireNote(const FTransform& SpawnTransform)
{
	DebugWithMessage("Acquiring New Note At" + SpawnTransform.GetLocation().ToCompactString());

	if (PoolHead)
	{
		const TObjectPtr<ARhythmNote> Note = RemoveFromPool();

		// TODO: Configure actor to have a specific velocity once at spawn transform wherever this is called (likely in RhythmSubsystem).
		if (Note)
		{
			Note->SetActorTransform(SpawnTransform);
			Note->SetActorEnableCollision(false);
			Note->SetActorTickEnabled(true);
			Note->SetActorHiddenInGame(false);
		}

		return Note;
	}

	// return CreateNewNote(SpawnTransform);
	DebugWithMessage("Object Pool Has No Free Notes!");
	return nullptr;
}

void UNotePoolComponent::ReleaseNote(ARhythmNote* Note)
{
	DebugWithMessage("Releasing Note");

	if (!Note)
	{
		DebugWithMessage("Cannot Release Invalid Note");
		return;
	}

	const AActor* Owner = GetOwner();

	if (!Owner)
	{
		DebugWithMessage("Owner was nullptr");
		return;
	}

	Note->SetActorHiddenInGame(true);
	Note->SetActorEnableCollision(false);
	Note->SetActorTickEnabled(false);
	Note->SetActorLocation(Owner->GetActorLocation());

	AddToPool(Note);
}

void UNotePoolComponent::AddToPool(TObjectPtr<ARhythmNote> Note)
{
	FPoolNode* NewNode = new FPoolNode{ Note, PoolHead };
	PoolHead = NewNode;
}

ARhythmNote* UNotePoolComponent::RemoveFromPool()
{
	TObjectPtr<ARhythmNote> HeadNote = nullptr;

	if (PoolHead)
	{
		HeadNote = PoolHead->Note;
		PoolHead = PoolHead->Next;
	}
	
	return HeadNote;
}