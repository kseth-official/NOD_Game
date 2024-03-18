// Copyright Algosyntax 2023. All Rights Reserved


#include "HTTP/FAxHttpOps.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Misc/Base64.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"
#include "Interfaces/IHttpResponse.h"


FString FAxHttpOps::MakeJSONStringFrom(FString Key, FString Value)
{
	// Create the JSON data as a TSharedPtr<FJsonObject>
	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	JsonObject->SetStringField(Key, Value);

	// Convert the JSON data to a string
	FString PayloadJSONString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&PayloadJSONString);
	FJsonSerializer::Serialize(JsonObject, Writer);

	return PayloadJSONString;
}

FString FAxHttpOps::MakeJSONStringFrom(TSharedRef<FJsonObject> InJSONObject)
{

	// Convert the JSON data to a string
	FString JSONString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JSONString);
	FJsonSerializer::Serialize(InJSONObject, Writer);

	return JSONString;

}

FString FAxHttpOps::MakeJSONStringFrom(FString Key, TArray<int> RawValues)
{
	// Create the JSON data as a TSharedPtr<FJsonObject>
	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	// Array to hold the JSON values
	TArray<TSharedPtr<FJsonValue>> JsonValuesArray;

	// Add the values to the JSON array
	for (int32 RawValue : RawValues)
	{
		// Wrap the int value in an FJsonValue
		TSharedPtr<FJsonValue> JsonValue = MakeShareable(new FJsonValueNumber(RawValue));

		// Add the value to the array
		JsonValuesArray.Add(JsonValue);
	}

	// Add the array to the JSON object
	JsonObject->SetArrayField(Key, JsonValuesArray);

	// Convert the JSON data to a string
	FString PayloadJSONString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&PayloadJSONString);
	FJsonSerializer::Serialize(JsonObject, Writer);

	return PayloadJSONString;
}

TSharedPtr<IHttpRequest> FAxHttpOps::MakeBasicAuthPOSTRequestObject(FString InURL, FString InUsername, FString InPassword,
                                                                    FString InPayload)
{
	TSharedPtr<IHttpRequest> Request;
	
	if (!InURL.IsEmpty() && !InPassword.IsEmpty() && !InUsername.IsEmpty())
	{
		FHttpModule* Http = &FHttpModule::Get();

		Request = Http->CreateRequest();

		Request->SetURL(InURL);

		Request->SetVerb("POST");

		Request->SetHeader("Authorization", "Basic " + FBase64::Encode(InUsername + ":" + InPassword));

		Request->SetHeader("Content-Type", "application/json");

		if (!InPayload.IsEmpty())
			Request->SetContentAsString(InPayload);
	}

	return Request;
}

TSharedPtr<FJsonObject> FAxHttpOps::MakeJsonObjectFromHTTPResponse(TSharedPtr<IHttpResponse, ESPMode::ThreadSafe> HttpResponse)
{

	FString ResponseAsString = HttpResponse->GetContentAsString();

	// Parse the JSON data
	TSharedPtr<FJsonObject> JsonObject;

	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseAsString);

	//this will return true or false so always check the Json object for validity
	FJsonSerializer::Deserialize(Reader, JsonObject);

	return JsonObject;
}
