#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RhythmDataAsset.generated.h"

UCLASS(BlueprintType)
class TEAM13_GAME_API URhythmDataAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notes/Constants", meta = 
        (ToolTip = "The z height relative to the player to spawn the notes at."))
    float NoteZOffset;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notes/Constants", meta = 
        (ToolTip = "The radius of the circle centred at the player at which to spawn notes."))
    float NoteSpawnRadius;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notes/Constants", meta = 
        (ToolTip = "The amount of time before the music starts playing after midi notes begin broadcasting.", Units = "s"))
    float NoteTimeOffset;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notes/Constants",meta = 
        (ToolTip = "Adds some offset to when the judgement box should turn off and on in case any adjustments are required. If 0, adds nothing to note time offset", Units = "s"))
    float CustomOffsetProportionForFirstNote;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notes/Constants", meta = 
        (ToolTip = "Time from when the notes begin falling to when they are destroyed.", Units = "s"))
    float NotePinDestroyDelay;

    UFUNCTION(BlueprintCallable, Category = "Notes/Calculated", BlueprintPure)
    float GetNoteMoveVelocity() const
    {
	    return NoteZOffset / NoteTimeOffset;
    };
};