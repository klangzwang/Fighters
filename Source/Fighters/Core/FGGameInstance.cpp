#include "FGGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include <DACharLights.h>

UFGGameInstance::UFGGameInstance()
{
	CharacterIdLeft = ECharacterID::NONE;
	CharacterIdRight = ECharacterID::NONE;
	StageId = EStageID::NON;
	MatchState = EMatchState::VE_NoMatch;
	BattleTime = EBattleTime::VE_Time60;
	WinCount = EWinCount::VE_Count2;
	WinCountLeft = 0;
	WinCountRight = 0;
}

UDataTable* UFGGameInstance::GetCameraParam() const
{
	return Cast<UDataTable>(CameraParam);
}

void UFGGameInstance::SetCharacterIds(ECharacterID characterIdLeft, ECharacterID characterIdRight)
{
	if (characterIdLeft != CharacterIdLeft)
		CharacterIdLeft = characterIdLeft;
	if (characterIdRight != CharacterIdRight)
		CharacterIdRight = characterIdRight;
}

void UFGGameInstance::SetStageId(EStageID stageId)
{
	if (stageId != StageId)
		StageId = stageId;
}

void UFGGameInstance::SetMatchState(EMatchState matchState)
{
	if (matchState != MatchState)
		MatchState = matchState;
}

void UFGGameInstance::SetWinCount(EWinCount winCount)
{
	if (winCount != WinCount)
		WinCount = winCount;
}

void UFGGameInstance::SetBattleTime(EBattleTime battleTime)
{
	if (battleTime != BattleTime)
		BattleTime = battleTime;
}

void UFGGameInstance::SetWinCounts(int32 winCountLeft, int32 winCountRight)
{
	if (winCountLeft != WinCountLeft)
		WinCountLeft = winCountLeft;
	if (winCountRight != WinCountRight)
		WinCountRight = winCountRight;
}
