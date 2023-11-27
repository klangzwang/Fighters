#pragma once
#include "CoreMinimal.h"
#include "FGMainViewportWidget.h"
#include "FGOperationalWidget.h"
#include "InputSystem/EUiOperation.h"
#include "FGMainViewportWidgetScene.generated.h"

class UFGOperationalWidget;

UCLASS(Abstract, EditInlineNew)
class FIGHTERS_API UFGMainViewportWidgetScene : public UFGMainViewportWidget {
	
    GENERATED_BODY()

public:
	
	UFGMainViewportWidgetScene();
	
protected:

    UPROPERTY(BlueprintReadWrite, Export, Category = "Fighters|Widget")
    TSoftObjectPtr<UFGOperationalWidget> Section_Entry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Fighters|Widget")
    TSoftClassPtr<UFGOperationalWidget> Class_Entry;
    
    UPROPERTY(BlueprintReadWrite, Export, Category = "Fighters|Widget")
    TSoftObjectPtr<UFGOperationalWidget> Section_MemberSelect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Fighters|Widget")
    TSoftClassPtr<UFGOperationalWidget> Class_MemberSelect;
    
    UPROPERTY(BlueprintReadWrite, Export, Category = "Fighters|Widget")
    TSoftObjectPtr<UFGOperationalWidget> Section_StageSelect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Fighters|Widget")
    TSoftClassPtr<UFGOperationalWidget> Class_StageSelect;
    
    UPROPERTY(BlueprintReadWrite, Export, Category = "Fighters|Widget")
    TSoftObjectPtr<UFGOperationalWidget> Section_VersusScene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Fighters|Widget")
    TSoftClassPtr<UFGOperationalWidget> Class_VersusScene;
    
    UPROPERTY(BlueprintReadWrite, Export, Category = "Fighters|Widget")
    TSoftObjectPtr<UFGOperationalWidget> Section_TitleScene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Fighters|Widget")
    TSoftClassPtr<UFGOperationalWidget> Class_TitleScene;
    
    UPROPERTY(BlueprintReadWrite, Export, Category = "Fighters|Widget")
    TSoftObjectPtr<UFGOperationalWidget> Section_MainMenuScene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Fighters|Widget")
    TSoftClassPtr<UFGOperationalWidget> Class_MainMenuScene;
    
public:

    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void VersusScene_PostScene();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_Versus();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_Title();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_Stage();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_MainMenu();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_Entry();
   
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_ControllerSelect();
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void TravelToScene_BattleTravel();
    
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void StartSceneTravelEffectIn();
    
public:

    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widget")
    void GoToRoomMatchMainMenu();
    
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void FinishSceneTravelEffectOut();
    
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void FinishSceneTravelEffectIn();
   
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void BattleTravel_PostScene();
};
