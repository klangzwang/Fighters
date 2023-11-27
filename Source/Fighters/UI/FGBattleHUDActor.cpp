#include "FGBattleHUDActor.h"
#include "Components/WidgetComponent.h"

AFGBattleHUDActor::AFGBattleHUDActor()
{
    this->BackHUD = CreateDefaultSubobject<UWidgetComponent>(TEXT("BackHUD"));

    this->FrontHUDWidget = NULL;
    this->FrontHUDWidgetClass = NULL;
}

void AFGBattleHUDActor::CreateFrontHUDToViewport()
{
    if (FrontHUDWidgetClass)
    {
        FrontHUDWidget = CreateWidget<UUserWidget>(GetWorld(), FrontHUDWidgetClass);
        FrontHUDWidget->AddToViewport();
    }
}
