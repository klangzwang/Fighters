#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGBattleCamera.h"
#include "Camera/CameraActor.h"
#include "FGCameraDirector.generated.h"

UENUM(BlueprintType)
enum class ECameraMode : uint8
{
    VE_NoMode			UMETA(DisplayName = "NoMode"),
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
    ACameraActor* CameraMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    ACameraActor* CameraCinema;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraActor* GetMainCamera();

public:

    void UpdateCameraEdgeMoving();
    void UpdateCameraMoving();

    bool canMoving(float cameraMove);

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TSubclassOf<AActor> CameraEdgeClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    AActor* CameraEdgeLeft;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    AActor* CameraEdgeRight;

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

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Camera|Mode")
    ECameraMode cameraMode;
};
