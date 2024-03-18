// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "FAxCaseString.generated.h"

/**
 * Custom FString Struct With CaseSensitive Comparision EG For TMaps
 * The Struct Just wraps the normal FString as a member.
 * You can request the underlying string with GetFString();
 * 
 */
USTRUCT(BlueprintType)
struct COMMONOPS_API FAxCaseString
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = CommonOps)
	FString WrappedString;

	FAxCaseString()=default;

	FAxCaseString(FString inString);

	/**
	 * Returns The WrappedString By Reference.
	 * Any Modification to the returned String will modify the wrapped string
	 */
	FString& GetWrappedString();

	uint32 GetTypeHash() const;

	bool operator==(const FAxCaseString& other) const;

	/**
	 * Constructor using an array of TCHAR
	 *
	 * @param In array of TCHAR
	 */
	template <
		typename CharType,
		typename = typename TEnableIf<TIsCharType<CharType>::Value>::Type // This TEnableIf is to ensure we don't instantiate this constructor for non-char types, like id* in Obj-C
	>
	FORCEINLINE FAxCaseString(const CharType* Src)
	{
		WrappedString=FString(Src);
	}

};

uint32 GetTypeHash(const FAxCaseString& S);
