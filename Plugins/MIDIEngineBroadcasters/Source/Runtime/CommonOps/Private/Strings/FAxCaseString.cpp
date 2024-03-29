// Copyright Algosyntax 2022. All Rights Reserved.


#include "Strings/FAxCaseString.h"

FAxCaseString::FAxCaseString(FString inString): WrappedString(inString)
{
	
}

FString& FAxCaseString::GetWrappedString()
{
	return WrappedString;
}

uint32 FAxCaseString::GetTypeHash() const
{
	return FCrc::StrCrc32(*(WrappedString));
}

bool FAxCaseString::operator==(const FAxCaseString& other) const
{
	return WrappedString.Equals(other.WrappedString);
}

uint32 GetTypeHash(const FAxCaseString& S)
{
	return S.GetTypeHash();
}
