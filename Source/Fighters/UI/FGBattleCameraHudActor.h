#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "FGBattleCameraHudActor.generated.h"

class USceneComponent;
class AFGCameraDirector;

UCLASS(Abstract)
class FIGHTERS_API AFGBattleCameraHudActor : public AActor
{
    GENERATED_BODY()
	
public:

    AFGBattleCameraHudActor();

public:

    UPROPERTY(BlueprintReadOnly, Export, NonTransactional, VisibleDefaultsOnly, Category = "Fighters|BattleCamera")
    USceneComponent* Root;

    UPROPERTY(BlueprintReadOnly, Export, NonTransactional, VisibleDefaultsOnly, Category = "Fighters|BattleCamera")
    USceneComponent* FlipRoot;

protected:

    UPROPERTY(BlueprintReadOnly, Category = "Fighters|BattleCamera")
    float Distance;

    UPROPERTY(BlueprintReadOnly, Category = "Fighters|BattleCamera")
    float FOV;

    UPROPERTY(BlueprintReadOnly, Category = "Fighters|BattleCamera")
    float Width;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Fighters|BattleCamera")
    FVector2D HudDrawSize;

    UPROPERTY(BlueprintReadWrite, Category = "Fighters|BattleCamera")
    AFGCameraDirector* CameraDirector;

private:

    UPROPERTY()
    uint8 UpdateParentCameraCount;

    UPROPERTY()
    int32 frame;

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void UpdateParentCameraSeveralTimes();

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void UpdateParentCamera();

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void TryCalcDistanceFromOwnerCamera();

public:

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void SetHudHidden(bool SetHidden);

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void SetCameraDirector(AFGCameraDirector* ref);

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void SetBattleHudDrawSize(FVector2D Size);

private:

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void OnCameraSwitch(bool bCineCamera);

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void BattleCameraHudTick();

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void BattleCameraHudEndPlay();

    UFUNCTION(BlueprintCallable, Category = "Fighters|BattleCamera")
    void BattleCameraHudBeginPlay();
};
