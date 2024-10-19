#include "MathUtilityLibrary.h"

FVector2D UMathUtilityLibrary::FindRandomPositionOnCircle(const FVector2D& Center, const float& Radius)
{
	float Degree = UKismetMathLibrary::RandomFloatInRange(0.f, 360.f);

	return Center + FVector2D(Radius * cos(Degree), Radius * sin(Degree));
}
