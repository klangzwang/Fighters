#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FGBattleCameraHudActor.h"
#include "FGBattleHUDActor.generated.h"

class UWidgetComponent;
class UUserWidget;

UCLASS(Abstract)
class FIGHTERS_API AFGBattleHUDActor : public AFGBattleCameraHudActor
{
    GENERATED_BODY()
	
public:

    AFGBattleHUDActor();

public:

    UPROPERTY(BlueprintReadOnly, Export, NonTransactional, VisibleDefaultsOnly)
    UWidgetComponent* BackHUD;

protected:

    UPROPERTY(BlueprintReadOnly, Export)
    UUserWidget* FrontHUDWidget;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UUserWidget> FrontHUDWidgetClass;

private:

    UFUNCTION(BlueprintCallable)
    void CreateFrontHUDToViewport();
};
