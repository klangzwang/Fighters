// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "EMatchState.generated.h"

UENUM(BlueprintType)
enum class EMatchState : uint8
{
	VE_NoMatch			UMETA(DisplayName = "NoMatch"),
	VE_MatchInit		UMETA(DisplayName = "MatchInit"),
	VE_MatchEnter		UMETA(DisplayName = "MatchEnter"),
	VE_MatchIntro		UMETA(DisplayName = "MatchIntro"),
	VE_MatchReady		UMETA(DisplayName = "MatchReady"),
	VE_MatchActive		UMETA(DisplayName = "MatchActive"),
	VE_MatchRoundEnd	UMETA(DisplayName = "MatchRoundEnd"),
	VE_MatchOver		UMETA(DisplayName = "MatchOver")
};