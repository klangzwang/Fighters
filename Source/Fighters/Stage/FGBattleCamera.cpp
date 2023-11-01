#include "FGBattleCamera.h"
#include "FGGameMode.h"

AFGBattleCamera::AFGBattleCamera()
{
}

float AFGBattleCamera::GetCameraMinHeight()
{
    return mCameraParam->GetCameraMinHeight();
}

float AFGBattleCamera::GetCameraMaxHeight()
{
    return mCameraParam->GetCameraMaxHeight();
}

float AFGBattleCamera::GetCameraMinDistance()
{
    return mCameraParam->GetCameraMinDistance();
}

float AFGBattleCamera::GetCameraMaxDistance()
{
    return mCameraParam->GetCameraMaxDistance();
}
