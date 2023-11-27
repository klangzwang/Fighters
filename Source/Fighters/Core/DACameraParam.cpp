#include "DACameraParam.h"

UDACameraParam::UDACameraParam()
{
    this->CameraMinHeight = 120.f;
    this->CameraMaxHeight = 130.f;
    this->CameraMinDistance = 430.f;
    this->CameraMaxDistance = 430.f;
    this->CameraScreenEndRange = 210.50f;
    this->CameraHeightDistance = 200.00f;
    this->CameraVerticalMoveAdjust = 70.00f;
    this->LookYPosAdjust = 1.00f;
    this->LookZDist = 50.00f;
    this->ProjPerseAngle = 32.27f;
    this->ProjNear = 0.00f;
    this->ProjFar = 0.00f;
    this->ProjBlendScale = 0.50f;
}

float UDACameraParam::GetCameraMinHeight()
{
    return CameraMinHeight;
}

float UDACameraParam::GetCameraMaxHeight()
{
    return CameraMaxHeight;
}

float UDACameraParam::GetCameraMinDistance()
{
    return CameraMinDistance;
}

float UDACameraParam::GetCameraMaxDistance()
{
    return CameraMaxDistance;
}

