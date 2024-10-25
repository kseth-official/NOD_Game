// Fill out your copyright notice in the Description page of Project Settings.


#include "DEPRECATED_UNotePoolComponent.h"
#include "BlueprintFunctionLibraries/DebugUtilityLibrary.h"

// Sets default values for this component's properties
UDEPRECATED_UNotePoolComponent::UDEPRECATED_UNotePoolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PoolSize = DEFAULT_POOL_SIZE;
}

UDEPRECATED_UNotePoolComponent::~UDEPRECATED_UNotePoolComponent()
{
	DeInitializePool();
}

// Called when the game starts
void UDEPRECATED_UNotePoolComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UDEPRECATED_UNotePoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDEPRECATED_UNotePoolComponent::DebugWithMessage(const FString& Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(NOTE_POOL_COMP_TAG, -1, NOTE_POOL_DEBUG_MESSAGE_LENGTH, NOTE_POOL_DEBUG_DEFAULT_COLOR, Message);
}

int32 UDEPRECATED_UNotePoolComponent::GetPoolSize() const
{
	return PoolSize;
}

void UDEPRECATED_UNotePoolComponent::SetPoolSize(const int32& Size)
{
	if (Size >= 0)
		PoolSize = Size;
	else
		DebugWithMessage("Note Pool Size Cannot Be Less Than 0");
}

void UDEPRECATED_UNotePoolComponent::InitializePool(const int32& InitialSize)
{
	DebugWithMessage("Initializing Object Pool");

	const TObjectPtr<UWorld> World = GetWorld();

	if (!World)
	{
		DebugWithMessage("World was nullptr");
		return;
	}

	const AActor* Owner = GetOwner();

	if (!Owner)
	{
		DebugWithMessage("Owner was nullptr");
		return;
	}

	DeInitializePool();

	// Reserve space for the pool size
	AvailableNotesInPool.Reserve(PoolSize);

	for (int32 i = 0; i < PoolSize; i++)
	{
		// Initializes all the actors at the initial location of the parent.
		TObjectPtr<ARhythmNoteActor> NewNote = World->SpawnActor<ARhythmNoteActor>(ARhythmNoteActor::StaticClass(), Owner->GetActorTransform());

		if (NewNote)
		{
			NewNote->SetActorHiddenInGame(true);
			NewNote->SetActorTickEnabled(false);
			NewNote->SetActorEnableCollision(false);
			AvailableNotesInPool.Add(NewNote);
		} else
		{
			DebugWithMessage("Error Spawning Actor At Parent: " + Owner->GetName());
		}
	}
}

void UDEPRECATED_UNotePoolComponent::DeInitializePool()
{
	DebugWithMessage("DeInitializing Object Pool");

	for (const auto& Element : AvailableNotesInPool)
	{
		Element->Destroy();
	}

	for (const auto& Element : UnavailableNotesInPool)
	{
		Element->Destroy();
	}

	AvailableNotesInPool.Empty();
	UnavailableNotesInPool.Empty();
}

ARhythmNoteActor* UDEPRECATED_UNotePoolComponent::AcquireNote(const FTransform& SpawnTransform)
{
	DebugWithMessage("Acquiring New Note At" + SpawnTransform.GetLocation().ToCompactString());

	if (!AvailableNotesInPool.IsEmpty())
	{
		auto It = AvailableNotesInPool.CreateIterator();
		const TObjectPtr<ARhythmNoteActor> RandomNote = *It;

		// TODO: Configure actor to have a specific velocity once at spawn transform wherever this is called (likely in RhythmSubsystem).
		if (RandomNote)
		{
			RandomNote->SetActorEnableCollision(false);
			RandomNote->SetActorTickEnabled(true);
			RandomNote->SetActorHiddenInGame(false);
			RandomNote->SetActorLocation(SpawnTransform.GetLocation(), false, nullptr, ETeleportType::TeleportPhysics);

			It.RemoveCurrent();
			UnavailableNotesInPool.Add(RandomNote);
		}

		return RandomNote;
	}

	DebugWithMessage("Object Pool Has No Free Notes!");
	return nullptr;
}

void UDEPRECATED_UNotePoolComponent::ReleaseNote(ARhythmNoteActor* Note)
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

	if (!Note)
	{
		DebugWithMessage("Note provided is a nullptr");
		return;
	}

	if (!UnavailableNotesInPool.Contains(Note))
	{
		DebugWithMessage("Note not in use and therefore cannot be released!");
		return;
	}

	Note->SetActorHiddenInGame(true);
	Note->SetActorEnableCollision(false);
	Note->SetActorTickEnabled(false);
	Note->SetActorLocation(Owner->GetActorLocation());

	UnavailableNotesInPool.Remove(Note);
	AvailableNotesInPool.Add(Note);
}