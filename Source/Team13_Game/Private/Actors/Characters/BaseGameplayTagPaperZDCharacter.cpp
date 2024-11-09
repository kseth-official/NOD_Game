// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/BaseGameplayTagPaperZDCharacter.h"

// Sets default values
ABaseGameplayTagPaperZDCharacter::ABaseGameplayTagPaperZDCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGameplayTagPaperZDCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameplayTagPaperZDCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}