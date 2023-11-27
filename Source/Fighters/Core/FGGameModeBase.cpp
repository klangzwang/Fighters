#include "FGGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "FGGameInstance.h"
#include "Camera/PlayerCameraManager.h"

AFGGameModeBase::AFGGameModeBase()
{
	DefaultPawnClass = NULL;
}

void AFGGameModeBase::ScreenFadeIn()
{
	APlayerCameraManager* PlayerCamera = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	PlayerCamera->StartCameraFade(1, 0, 1.f, FLinearColor::Black, false, true);
}
void AFGGameModeBase::ScreenFadeOut()
{
	APlayerCameraManager* PlayerCamera = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	PlayerCamera->StartCameraFade(0, 1, 1.f, FLinearColor::Black, false, true);
}
