// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"

class IHttpResponse;
class IHttpRequest;
class FJsonObject;

/**
 * 
 */
class COMMONOPS_API FAxHttpOps
{
public:

	/**
	 * @brief Generates a JSON string from a single key-value pair.
	 *
	 * @param Key The JSON object's key.
	 * @param Value The string to set as the value.
	 * @return JSON string.
	 */
	static FString MakeJSONStringFrom(FString Key, FString Value);


	/**
	 * @brief Generates a JSON string from a JSON Object
	 *
	 * @param InJSONObject json object containing map of key value pairs.
	 * @return JSON string.
	 */
	static FString MakeJSONStringFrom(TSharedRef<FJsonObject> InJSONObject);

	/**
	 * @brief Generates a JSON string with a key and an array of integers as the value of the key..
	 *
	 * @param Key The JSON object's key.
	 * @param RawValues Array of integers to be the values.
	 * @return JSON string.
	 */
	static FString MakeJSONStringFrom(FString Key, TArray<int> RawValues);

	/**
	 * @brief Makes a basic authentication HTTP Request object.
	 *		  Payload is optional but if added will be set as string.
	 *		  You still have to bind a function to the response delegate and call  process request.
	 *		  This is just boilerplate for creating the code object.
	 * @param InURL 
	 * @param InUsername 
	 * @param InPassword 
	 * @param InPayload 
	 * @return 
	 */
	static TSharedPtr<IHttpRequest> MakeBasicAuthPOSTRequestObject(FString InURL, FString InUsername, FString InPassword, FString InPayload = "");

	static TSharedPtr<FJsonObject> MakeJsonObjectFromHTTPResponse(TSharedPtr<IHttpResponse, ESPMode::ThreadSafe> HttpResponse);
};
