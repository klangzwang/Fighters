#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "DACameraParam.h"
#include "FGBattleCamera.generated.h"

UCLASS()
class FIGHTERS_API AFGBattleCamera : public ACameraActor
{
	GENERATED_BODY()

public:

	AFGBattleCamera();

private:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	UDACameraParam* mCameraParam;

public:

	float GetCameraMinHeight();
	float GetCameraMaxHeight();
	float GetCameraMinDistance();
	float GetCameraMaxDistance();
};
