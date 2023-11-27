#include "FGLocalPlayer.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(FGLocalPlayer)

class UObject;

UFGLocalPlayer::UFGLocalPlayer()
{
}

void UFGLocalPlayer::PostInitProperties()
{
	Super::PostInitProperties();
}

void UFGLocalPlayer::SwitchController(class APlayerController* PC)
{
	Super::SwitchController(PC);
	OnPlayerControllerChanged(PlayerController);
}

bool UFGLocalPlayer::SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld)
{
	const bool bResult = Super::SpawnPlayActor(URL, OutError, InWorld);
	OnPlayerControllerChanged(PlayerController);
	return bResult;
}

void UFGLocalPlayer::OnPlayerControllerChanged(APlayerController* NewController)
{
	LastBoundPC = NewController;
}

