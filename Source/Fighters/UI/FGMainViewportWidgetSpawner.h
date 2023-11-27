#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "FGMainViewportWidget.h"
#include "ESceneName.h"
#include "FGMainViewportWidgetSpawner.generated.h"

UCLASS(Abstract, Blueprintable)
class FIGHTERS_API AFGMainViewportWidgetSpawner : public AActor
{
    GENERATED_BODY()
	
public:

    AFGMainViewportWidgetSpawner();
	
    virtual void Tick(float deltaTime) override;

protected:

    virtual void BeginPlay() override;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UFGMainViewportWidget> MainViewportWidgetClass;

    UPROPERTY(Export)
    UFGMainViewportWidget* MainViewportWidget;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESceneName TravelScene;

public:
    UFUNCTION(BlueprintCallable)
    void CreatedMainWidget();
};

