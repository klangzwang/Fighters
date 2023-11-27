#include "FGGameStateSelect.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"

AFGGameStateSelect::AFGGameStateSelect()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFGGameStateSelect::BeginPlay()
{
	Super::BeginPlay();
}

void AFGGameStateSelect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
