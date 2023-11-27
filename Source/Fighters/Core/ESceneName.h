#pragma once
#include "CoreMinimal.h"
#include "ESceneName.generated.h"

UENUM(BlueprintType)
enum class ESceneName : uint8 {
	
    SN_Title,
    SN_MainMenu,
    SN_LeaderBoard,
    SN_Entry,
    SN_ControllerSelect,
    SN_Stage,
    SN_Versus,
    SN_VersusClean,
    SN_BattleScene,
    SN_BattleSceneInitialized,
    SN_CleanTravelScene,
    Max,
    SN_None,
    SN_DebugScene
};

