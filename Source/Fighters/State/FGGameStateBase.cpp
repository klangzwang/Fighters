#include "FGGameStateBase.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "FGGameInstance.h"

AFGGameStateBase::AFGGameStateBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFGGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	GameInstance = Cast<UFGGameInstance>(GetGameInstance());
}

void AFGGameStateBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
