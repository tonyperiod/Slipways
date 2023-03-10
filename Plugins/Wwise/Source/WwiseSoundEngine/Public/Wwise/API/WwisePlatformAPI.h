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
Copyright (c) 2022 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "AkInclude.h"

#include "Wwise/WwiseSoundEngineModule.h"

#ifdef PLATFORM_HEADER_NAME
#define WWISE_SOUNDENGINE_API_COMPILED_PLATFORM(Platform,Version,Suffix) PREPROCESSOR_TO_STRING(PREPROCESSOR_JOIN(Wwise/API,Version)PREPROCESSOR_JOIN(/Platforms/Platform,Suffix))
#define WWISE_SOUNDENGINE_PLATFORM_SPECIFIC_VERSIONED_API_HEADER(Version) WWISE_SOUNDENGINE_API_COMPILED_PLATFORM(PLATFORM_HEADER_NAME,PREPROCESSOR_JOIN(_,Version),PREPROCESSOR_JOIN(API_,Version.h))
#define WWISE_SOUNDENGINE_PLATFORM_SPECIFIC_API_HEADER WWISE_SOUNDENGINE_API_COMPILED_PLATFORM(PLATFORM_HEADER_NAME,,API.h)

#include WWISE_SOUNDENGINE_PLATFORM_SPECIFIC_API_HEADER

// The following lines are for hinting Distributed Build Systems, as PLATFORM_HEADER_NAME is always set.
#else
#include "Wwise/API/Platforms/WindowsAPI.h"
#include "Wwise/API_2022_1/Platforms/WindowsAPI_2022_1.h"
#include "Wwise/API_2023_1/Platforms/WindowsAPI_2023_1.h"
#include "Wwise/API_2024_1/Platforms/WindowsAPI_2024_1.h"
#include "Wwise/API_2025_1/Platforms/WindowsAPI_2025_1.h"
#endif