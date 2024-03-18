// Copyright Algosyntax 2023. All Rights Reserved.


#include "Math/AxMath.h"



int UAxMath::RoundToNearestMultiple(int NumToRound, int Multiple)
{

	/*
	* Since we are using Integers here, int will automatically truncate
	* so this code will work for Int, but not floats/doubles.
	* Example.for multiple 12. if calculation of smaller multiple falls to 24.6767
	* smaller multiple will be 24.
	*/
	
	// Smaller multiple 
    int a = (NumToRound / Multiple) * Multiple;

    // Larger multiple 
    int b = a + Multiple;

    // Return of closest of two 
    return (NumToRound - a > b - NumToRound) ? b : a;


}




FTransform UAxMath::LerpTransform(const FTransform& A, const FTransform& B, float Alpha, bool bSlerp)
{
	FVector LerpTranslation = FMath::Lerp(A.GetTranslation(), B.GetTranslation(), Alpha);

	FQuat LerpRotation;

	//NB:SLerp is slower.
	if (bSlerp)
		LerpRotation = FQuat::Slerp(A.GetRotation(), B.GetRotation(), Alpha);
	else
		LerpRotation = FQuat::FastLerp(A.GetRotation(), B.GetRotation(), Alpha);


	FVector LerpScale = FMath::Lerp(A.GetScale3D(), B.GetScale3D(), Alpha);

	return FTransform(LerpRotation,LerpTranslation,LerpScale);
}
