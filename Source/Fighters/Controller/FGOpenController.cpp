#include "FGOpenController.h"
#include "Kismet/GameplayStatics.h"
#include "FGGameMode.h"

AFGOpenController::AFGOpenController()
{
}

void AFGOpenController::BeginPlay()
{
	Super::BeginPlay();

	FGGameMode = Cast<AFGGameMode>(GetWorld()->GetAuthGameMode());
	FGGameInstance = Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

void AFGOpenController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
