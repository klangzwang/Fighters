#include "FGGameState.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "FGGameInstance.h"

AFGGameState::AFGGameState()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFGGameState::BeginPlay()
{
	Super::BeginPlay();
}

void AFGGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
