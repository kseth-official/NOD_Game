// Fill out your copyright notice in the Description page of Project Settings.


#include "Team13_Game/Helper/DirectionHelper.h"
#include "DirectionHelper.h"

bool UDirectionHelper::IsFacingToSide(float vx, float vy)
{
	return vx != 0 && vy == 0;
}

bool UDirectionHelper::IsFacingFront(float vx, float vy)
{
	return vx == 0 && vy > 0;
}

bool UDirectionHelper::IsFacingBack(float vx, float vy)
{
	return vx == 0 && vy < 0;
}

bool UDirectionHelper::IsFacingToBackAndSide(float vx, float vy)
{
	return (vx > 0 && vy < 0) || (vx < 0 && vy < 0);
}

bool UDirectionHelper::IsFacingToFrontAndSide(float vx, float vy)
{
	return (vx > 0 && vy > 0) || (vx < 0 && vy > 0);
}
