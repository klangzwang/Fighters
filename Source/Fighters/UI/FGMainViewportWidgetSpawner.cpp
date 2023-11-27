#include "FGMainViewportWidgetSpawner.h"
#include "FGMainViewportWidget.h"

AFGMainViewportWidgetSpawner::AFGMainViewportWidgetSpawner()
{
}

void AFGMainViewportWidgetSpawner::BeginPlay()
{
    Super::BeginPlay();
}

void AFGMainViewportWidgetSpawner::Tick(float deltaTime)
{
    Super::Tick(deltaTime);
}

void AFGMainViewportWidgetSpawner::CreatedMainWidget()
{
    if (MainViewportWidget != NULL)
    {
        MainViewportWidget = CreateDefaultSubobject<UFGMainViewportWidget>("MainViewportWidget");
        MainViewportWidget->AddToViewport();
    }
}
