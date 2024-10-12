/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2024 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#if UE_5_0_OR_LATER 
#include "UObject/WeakObjectPtrTemplates.h"

/**
 * SetKeyFuncs for TWeakObjectPtrs which allow the key to become stale without invalidating the set.
 */
template <typename ElementType, bool bInAllowDuplicateKeys = false>
using TWwiseWeakObjectPtrSetKeyFuncs = TWeakObjectPtrSetKeyFuncs<ElementType, bInAllowDuplicateKeys>;
#else
#include "Containers/Set.h"

/**
 * SetKeyFuncs for TWeakObjectPtrs which allow the key to become stale without invalidating the set.
 */
template <typename ElementType, bool bInAllowDuplicateKeys = false>
struct TWwiseWeakObjectPtrSetKeyFuncs : DefaultKeyFuncs<ElementType, bInAllowDuplicateKeys>
{
	typedef typename DefaultKeyFuncs<ElementType, bInAllowDuplicateKeys>::KeyInitType KeyInitType;

	static FORCEINLINE bool Matches(KeyInitType A, KeyInitType B)
	{
		return A.HasSameIndexAndSerialNumber(B);
	}

	static FORCEINLINE uint32 GetKeyHash(KeyInitType Key)
	{
		return GetTypeHash(Key);
	}
};
#endif