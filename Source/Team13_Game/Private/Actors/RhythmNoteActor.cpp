// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/RhythmNoteActor.h"

// Sets default values
ARhythmNoteActor::ARhythmNoteActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARhythmNoteActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARhythmNoteActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

