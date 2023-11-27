#include "FGBattleCameraHudActor.h"
#include "Components/SceneComponent.h"

class AFGCameraDirector;

AFGBattleCameraHudActor::AFGBattleCameraHudActor()
{
    //this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    //this->FlipRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FlipRoot"));
    this->Distance = 0.00f;
    this->FOV = 0.00f;
    this->Width = 384.00f;
    this->CameraDirector = NULL;
    this->UpdateParentCameraCount = 0;
    this->frame = 0;
}

void AFGBattleCameraHudActor::UpdateParentCameraSeveralTimes() {
}

void AFGBattleCameraHudActor::UpdateParentCamera() {
}

void AFGBattleCameraHudActor::TryCalcDistanceFromOwnerCamera() {
}

void AFGBattleCameraHudActor::SetHudHidden(bool SetHidden) {
}

void AFGBattleCameraHudActor::SetCameraDirector(AFGCameraDirector* ref) {
}

void AFGBattleCameraHudActor::SetBattleHudDrawSize(FVector2D Size) {
}

void AFGBattleCameraHudActor::OnCameraSwitch(bool bCineCamera) {
}

void AFGBattleCameraHudActor::BattleCameraHudTick() {
}

void AFGBattleCameraHudActor::BattleCameraHudEndPlay() {
}

void AFGBattleCameraHudActor::BattleCameraHudBeginPlay() {
}
