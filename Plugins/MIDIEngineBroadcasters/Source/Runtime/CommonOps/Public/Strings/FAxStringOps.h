// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include <string>
#include "CoreMinimal.h"

/**
 * 
 */
class COMMONOPS_API FAxStringOps 
{
public:

	/**
	 * @brief Converts  FString --> std::string
	 * @param inFString the FString to convert
	 * @return std::string 
	 */
	static std::string StdFromFString( FString inFString);

	/**
	 * @brief Converts  std::string --> FString.
	 * @param inString the std::string
	 * @return the FString version
	 */
	static FString FStringFromStd(std::string inString);

	///ENCRYPTION

	// Caesar Cipher Encryption Function, basic encryption. shifts letters and numbers around.
	static FString EncryptCaesarCipher(FString PlainText, int32 Shift);

	// Caesar Cipher Decryption Function
	static FString DecryptCaesarCipher(FString EncryptedText, int32 Shift);

	//Basic but superior to Caesar. Uses the encryption key to determine the shift for EACH letter.
	//meaning each letter/num is shifted differently....
	static FString EncryptWithKeyVigenere(FString TextToEncrypt, FString EncryptionKey);

	static FString DecryptWithKeyVigenere(FString EncryptedText, FString EncryptionKey);

	//END ENCRYPTION

	static bool SaveStringsAsBinaryFile(TArray<FString> StringsToSave, FString Directory, FString FileName);

	static bool ReadStringsFromBinaryFile(TArray<FString>& OutStrings,FString Directory, FString FileName);

	/**
	 * @brief If you have CamelCase text, this will add spaces to it and get Camel Case.
	 * @param CamelCase
	 * @return
	 */
	static FString AddSpacesToCamelCase(FString CamelCase);

};


