// Fill out your copyright notice in the Description page of Project Settings.


#include "RhythmNote.h"

// Sets default values
ARhythmNote::ARhythmNote()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARhythmNote::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARhythmNote::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

