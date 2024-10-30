// Fill out your copyright notice in the Description page of Project Settings.


#include "Helper/DirectionHelper.h"

bool UDirectionHelper::IsFacingToSide(float ax, float ay)
{
	return ax != 0 && ay == 0;
}

bool UDirectionHelper::IsFacingFront(float ax, float ay)
{
	return ax == 0 && ay > 0;
}

bool UDirectionHelper::IsFacingBack(float ax, float ay)
{
	return ax == 0 && ay < 0;
}

bool UDirectionHelper::IsFacingToBackAndSide(float ax, float ay)
{
	return (ax > 0 && ay < 0) || (ax < 0 && ay < 0);
}

bool UDirectionHelper::IsFacingToFrontAndSide(float ax, float ay)
{
	return (ax > 0 && ay > 0) || (ax < 0 && ay > 0);
}
