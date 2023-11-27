#pragma once
#include "CoreMinimal.h"
#include "Fighters.h"
#include "GameFramework/Actor.h"
#include "DACameraParam.h"
#include "Camera/CameraActor.h"
#include "FGCharacterBase.h"
#include "GameFramework/PlayerStart.h"
#include "FGCameraDirector.generated.h"

UENUM(BlueprintType)
enum class ECameraMode : uint8
{
    VE_NoMode			UMETA(DisplayName = "NoMode"),
    VE_Demo 			UMETA(DisplayName = "Demo"),
    VE_Idle 			UMETA(DisplayName = "Idle"),
    VE_Battle	        UMETA(DisplayName = "Battle"),
    VE_Stage            UMETA(DisplayName = "Stage"),
    VE_Character		UMETA(DisplayName = "Character"),
    VE_Action			UMETA(DisplayName = "Action")
};

UCLASS(Blueprintable)
class FIGHTERS_API AFGCameraDirector : public AActor
{
    GENERATED_BODY()

protected:

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:

    AFGCameraDirector();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    AActor* CameraCinema;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMainCamera();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCinemaCamera();

public:

    UFUNCTION(BlueprintCallable)
    void SetupCameraMode();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    TArray<FVector> LocationArray;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    float CurrentExtraDistance;

    void UpdateBattleCameraMoving();
    bool canMoving(float cameraMove);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool DebugCameraEdge;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool DebugCameraInfos;

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TSubclassOf<AActor> CameraEdgeClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    AActor* EdgeOuterLeft;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    AActor* EdgeOuterRight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    AActor* EdgeInnerLeft;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    AActor* EdgeInnerRight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool hasEdgesSpawned;

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraLookTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraMaxFocalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraDualLongShotRelativeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraLongShotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraMidUpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraCloseUpDistance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float EdgeLeftMax;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float EdgeRightMax;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DualLongShotLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongShotLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MidShotLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MidUpShotLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseUpShotLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool cameraIsReady;

private:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    UDACameraParam* mCameraParam;

public:

    float GetCameraMinHeight();
    float GetCameraMaxHeight();
    float GetCameraMinDistance();
    float GetCameraMaxDistance();

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool canCameraMove;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera|Mode")
    ECameraMode cameraMode;

public:

    UFUNCTION()
    void CalcStageDemo();

    UFUNCTION()
    void CalcCharacterDemo();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    bool playStageDemo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    bool playCharacterDemo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    bool isStageDemoDone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    bool isCharacterDemoDone;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    bool isStageDemoPlaying;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera")
    bool isCharacterDemoPlaying;

public:

    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Camera)")
    void PerformStageDemo();

    UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Camera)")
    void PerformCharacterDemo();

public:

    UFUNCTION(BlueprintCallable, Category = "Fighters|Camera)")
    void SetOriginalLocation();
};
