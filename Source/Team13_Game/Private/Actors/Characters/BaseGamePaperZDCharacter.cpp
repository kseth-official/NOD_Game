// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Characters/BaseGamePaperZDCharacter.h"

#include "Helper/DirectionHelper.h"
#include "Kismet/KismetMathLibrary.h"

bool ABaseGamePaperZDCharacter::IsFacingDirection(const EDirection& Direction)
{
	return FacingDirection == Direction;
}

void ABaseGamePaperZDCharacter::SetDirectionUsingAcceleration(const FVector& Acceleration)
{
	if (abs(Acceleration.Length()) > 0.f)
	{
		if (FMath::IsNearlyZero(Acceleration.X))
		{
			if (FMath::IsNearlyZero(Acceleration.Y))
			{
				// Don't change direction
				return;
			} else if (Acceleration.Y > 0.f)
			{
				// y positive only - facing South
				FacingDirection = EDirection::South;
			} else
			{
				// y negative only - facing North
				FacingDirection = EDirection::North;
			}
		} else if (Acceleration.X > 0.f)
		{
			if (FMath::IsNearlyZero(Acceleration.Y))
			{
				// x positive only - facing East
				FacingDirection = EDirection::East;
			} else if (Acceleration.Y > 0.f) 
			{
				// if x positive, y positive - South East
				FacingDirection = EDirection::SouthEast;
			} else 
			{
				// if x positive, y negative - North East
				FacingDirection = EDirection::NorthEast;
			}
		} else
		{
			if (FMath::IsNearlyZero(Acceleration.Y))
			{
				// x negative only - facing West
				FacingDirection = EDirection::West;
			} else if (Acceleration.Y > 0.f)
			{
				// if x negative, y positive - South West
				FacingDirection = EDirection::SouthWest;
			} else
			{
				// if x negative, y negative - North West
				FacingDirection = EDirection::NorthWest;
			}
		}
	}
}

void ABaseGamePaperZDCharacter::SetDirectionFacing(const AActor* ToFace)
{
	const auto& SelfLocation = K2_GetActorLocation();
	const auto& TargetLocation = ToFace->K2_GetActorLocation();
	const FVector2D NormalizedLookAtDirection = UKismetMathLibrary::Conv_VectorToVector2D(
		UKismetMathLibrary::Vector_Normal2D(SelfLocation - TargetLocation, 0.0001)
	);

	const double Angle = atan2(NormalizedLookAtDirection.Y, NormalizedLookAtDirection.X);
	uint8 Index = (static_cast<uint8>((Angle + PI) / (PI / 4)) & (UDirectionHelper::NumberOfDirections - 1));

	FacingDirection = UDirectionHelper::Directions[Index];
}
