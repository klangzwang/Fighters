#include "FGGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "FGMainViewportWidgetSpawner.h"

UFGGameInstance::UFGGameInstance()
{
	DebugMenuWindow = CreateDefaultSubobject<UFGDebugComponent>("DebugMenuWindow");

	CharacterIdLeft = ECharacterID::NONE;
	CharacterIdRight = ECharacterID::NONE;
	StageId = EStageID::NON;
	MatchState = EMatchState::VE_NoMatch;
	BattleTime = EBattleTime::VE_Time60;
	WinCount = EWinCount::VE_Count2;
	PlayerIdLeft = EPlayerID::NONE;
	PlayerIdRight = EPlayerID::NONE;

	WinCountLeft = 0;
	WinCountRight = 0;

	m_MainViewportWidget = nullptr;
	InputManager = nullptr;
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

void UFGGameInstance::SetPlayerIds(EPlayerID playerIdLeft, EPlayerID playerIdRight)
{
	if (playerIdLeft != PlayerIdLeft)
		PlayerIdLeft = playerIdLeft;
	if (playerIdRight != PlayerIdRight)
		PlayerIdRight = playerIdRight;
}

bool UFGGameInstance::hasSpawned()
{
	TArray<AFGCharacterBase*> Characters;
	FindAllActors(GetWorld(), Characters);
	TArray<AController*> Controllers;
	FindAllActors(GetWorld(), Controllers);
	return Characters.Num() == 2 && Controllers.Num() == 2;
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

UFGMainViewportWidget* UFGGameInstance::GetMainViewportWidget()
{
	return m_MainViewportWidget;
}

void UFGGameInstance::SetMainViewportWidget(UFGMainViewportWidget* MainViewportWidget)
{
	m_MainViewportWidget = CreateWidget<UFGMainViewportWidget>(MainViewportWidget, UFGMainViewportWidget::StaticClass());
}
