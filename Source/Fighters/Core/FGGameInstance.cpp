#include "FGGameInstance.h"
#include "Kismet/GameplayStatics.h"

UFGGameInstance::UFGGameInstance()
{
	mCharacterLeftID = ECharacterID::DUM;
	mCharacterRightID = ECharacterID::DUM;
	winGameCountP1 = 0;
	winGameCountP2 = 0;
}

void UFGGameInstance::OpenPauseMenu()
{

}

void UFGGameInstance::InitFadeOut(float FadeFrame, bool White)
{

}

void UFGGameInstance::InitFadeIn(float FadeFrame, bool White)
{

}

void UFGGameInstance::SetControllerID(EPlayerID _playerID, EPlayerID _controllerID)
{
	APlayerController* idPlayerController = UGameplayStatics::GetPlayerControllerFromID(GetWorld(), (uint8)_playerID);
	APlayerController* idController = UGameplayStatics::GetPlayerControllerFromID(GetWorld(), (uint8)_controllerID);

	UGameplayStatics::SetPlayerControllerID(idPlayerController, UGameplayStatics::GetPlayerControllerID(idController));
}

EPlayerID UFGGameInstance::GetControllerID(EPlayerID _playerID)
{
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		int32 PlayerControllerID = UGameplayStatics::GetPlayerControllerID(PlayerController);
		if (PlayerControllerID != INDEX_NONE && PlayerControllerID == (uint8)_playerID)
		{
			return _playerID;
		}
	}
	return EPlayerID::None;
}

EPlayerID UFGGameInstance::SearchPlayerIDByControllerID(EPlayerID _controllerID)
{
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		int32 PlayerControllerID = UGameplayStatics::GetPlayerControllerID(PlayerController);
		if (PlayerControllerID != INDEX_NONE && PlayerControllerID == (uint8)_controllerID)
		{
			return _controllerID;
		}
	}

	return EPlayerID::None;
}