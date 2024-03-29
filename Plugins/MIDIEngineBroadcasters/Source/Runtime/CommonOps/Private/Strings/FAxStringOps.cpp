// Copyright Algosyntax 2022. All Rights Reserved.


#include "Strings/FAxStringOps.h"

#include "Misc/FileHelper.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/BufferArchive.h"


std::string FAxStringOps::StdFromFString(FString inFString)
{
	//this wouldn't work for special chars like ä
	//return std::string(TCHAR_TO_UTF8(*inFString));

		
	//But the following will.

if (inFString.IsEmpty())
	return std::string();

#if PLATFORM_WINDOWS
	// On Windows, we can directly use wstring
	std::wstring wide(*inFString);
	std::string str(wide.begin(), wide.end());
	return str;
#else
	// On non-Windows platforms, use UTF-8 conversion
	return std::string(TCHAR_TO_UTF8(*inFString));
#endif

		
}

FString FAxStringOps::FStringFromStd(std::string inString)
{
	return inString.c_str();
}

FString FAxStringOps::EncryptCaesarCipher(FString PlainText, int32 Shift)
{
	FString EncryptedText;
	for (TCHAR Character : PlainText)
	{
		if (FChar::IsDigit(Character))
		{
			Character = '0' + (Character - '0' + Shift) % 10;
		}
		else if (FChar::IsAlpha(Character))
		{
			TCHAR Start = FChar::IsUpper(Character) ? 'A' : 'a';
			Character = Start + (Character - Start + Shift) % 26;
		}
		EncryptedText += Character;
	}
	return EncryptedText;
}

FString FAxStringOps::DecryptCaesarCipher(FString EncryptedText, int32 Shift)
{
	FString DecryptedText;
	for (TCHAR Character : EncryptedText)
	{
		if (FChar::IsDigit(Character))
		{
			Character = '0' + (Character - '0' + 10 - Shift) % 10;
		}
		else if (FChar::IsAlpha(Character))
		{
			TCHAR Start = FChar::IsUpper(Character) ? 'A' : 'a';
			Character = Start + (Character - Start + 26 - Shift) % 26;
		}
		DecryptedText += Character;
	}
	return DecryptedText;
}

FString FAxStringOps::EncryptWithKeyVigenere(FString TextToEncrypt, FString EncryptionKey)
{
	FString EncryptedText;
	int32 KeyIndex = 0;

	for (TCHAR Character : TextToEncrypt)
	{
		if (KeyIndex >= EncryptionKey.Len())
		{
			KeyIndex = 0; // Wrap around the key if we've reached the end
		}

		// The printable ASCII characters go from 32 (space) to 126 (~)
		// So we'll use these as our boundaries for shifting
		if (Character >= 32 && Character <= 126)
		{
			TCHAR Shift = EncryptionKey[KeyIndex] % 95; // 95 is the range of printable ASCII characters (126 - 32 + 1)
			Character = 32 + (Character - 32 + Shift) % 95;
		}

		EncryptedText += Character;
		KeyIndex++;
	}

	return EncryptedText;
}

FString FAxStringOps::DecryptWithKeyVigenere(FString EncryptedText, FString EncryptionKey)
{
	FString DecryptedText;
	int32 KeyIndex = 0;

	for (TCHAR Character : EncryptedText)
	{
		if (KeyIndex >= EncryptionKey.Len())
		{
			KeyIndex = 0; // Wrap around the key if we've reached the end
		}

		// The printable ASCII characters go from 32 (space) to 126 (~)
		// So we'll use these as our boundaries for shifting
		if (Character >= 32 && Character <= 126)
		{
			TCHAR Shift = EncryptionKey[KeyIndex] % 95; // 95 is the range of printable ASCII characters (126 - 32 + 1)
			Character = 32 + (Character - 32 + 95 - Shift) % 95;
		}

		DecryptedText += Character;
		KeyIndex++;
	}

	return DecryptedText;
}

bool FAxStringOps::SaveStringsAsBinaryFile(TArray<FString> StringsToSave, FString Directory, FString FileName)
{
	// Combine Directory and FileName into a full file path
	FString SavePath = FPaths::Combine(Directory, FileName);

	FBufferArchive ToBinary;

	for (FString& StringToSave : StringsToSave)
	{
		ToBinary << StringToSave;
	}

	//Todo: Ensure file is overriden if it already existed.
	bool bSuccess = FFileHelper::SaveArrayToFile(ToBinary, *SavePath);


	ToBinary.FlushCache();
	ToBinary.Empty();


	return bSuccess;
}

bool FAxStringOps::ReadStringsFromBinaryFile(TArray<FString>& OutStrings, FString Directory, FString FileName)
{
	// Combine Directory and FileName into a full file path
	FString ReadPath = FPaths::Combine(Directory, FileName);


	TArray<uint8> FromBinary;

	if (!FFileHelper::LoadFileToArray(FromBinary, *ReadPath))
	{
		return false; // Return early if we failed to load the file
	}

	FMemoryReader FromBinaryReader = FMemoryReader(FromBinary, true); // true means it will free memory after done
	FromBinaryReader.Seek(0);

	while (FromBinaryReader.AtEnd() == false)
	{
		FString LoadedString;
		FromBinaryReader << LoadedString;
		OutStrings.Add(LoadedString);
	}

	FromBinaryReader.Close();

	return true;
}

FString FAxStringOps::AddSpacesToCamelCase(FString CamelCase)
{
	FString Result;

	for (int32 i = 0; i < CamelCase.Len(); ++i)
	{
		if (i > 0 && FChar::IsUpper(CamelCase[i]) && FChar::IsLower(CamelCase[i - 1]))
		{
			Result.AppendChar(' ');
		}

		Result.AppendChar(CamelCase[i]);
	}

	return Result;
}


