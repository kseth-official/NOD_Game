// Fill out your copyright notice in the Description page of Project Settings.


#include "Helper/DirectionHelper.h"

TMap<FVector2D, EDirection> UDirectionHelper::TwoDVecToDirection = {
	{{ 0.0, -1.0}, EDirection::North},
	{{ 1.0/sqrt(2), -1.0/sqrt(2)}, EDirection::NorthEast},
	{{ 1.0,  0.0}, EDirection::East},
	{{ 1.0/sqrt(2),  1.0/sqrt(2)}, EDirection::SouthEast},
	{{ 0.0,  1.0}, EDirection::South},
	{{-1.0/sqrt(2),  1.0/sqrt(2)}, EDirection::SouthWest},
	{{-1.0,  0.0}, EDirection::West},
	{{-1.0/sqrt(2), -1.0/sqrt(2)}, EDirection::NorthWest},
};

TArray<EDirection> UDirectionHelper::Directions = {
	EDirection::East,
	EDirection::SouthEast,
	EDirection::South,
	EDirection::SouthWest,
	EDirection::West,
	EDirection::NorthWest,
	EDirection::North,
	EDirection::NorthEast,
};

uint8 UDirectionHelper::FacingDirectionToIndex(const ABaseGamePaperZDCharacter* Character)
{
	if (Character)
	{
		switch (Character->FacingDirection)
		{
			case EDirection::East:
			case EDirection::West:
				return 0;
			case EDirection::South:
				return 1;
			case EDirection::North:
				return 2;
			case EDirection::SouthEast:
			case EDirection::SouthWest:
				return 3;
			case EDirection::NorthWest:
			case EDirection::NorthEast:
				return 4;
			default:
				return -1;
		}
	}
	return -1;
}

TMap<FVector2D, EDirection> UDirectionHelper::GetTwoDVecToDirection()
{
	return TwoDVecToDirection;
}
