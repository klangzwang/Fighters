#include "FGCameraDirector.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "FGGameMode.h"

class AActor;

AFGCameraDirector::AFGCameraDirector()
{
    PrimaryActorTick.bCanEverTick = true;

    cameraMode = ECameraMode::VE_Battle;

    this->CameraMain = NULL;
    this->CameraCinema = NULL;
    this->CameraLookTarget = NULL;
    this->CameraMaxFocalDistance = 300;
    this->CameraDualLongShotRelativeDistance = 350;
    this->CameraLongShotDistance = 400;
    this->CameraMidUpDistance = 135;
    this->CameraCloseUpDistance = 65;
    this->EdgeLeftMax = 0.0f;
    this->EdgeRightMax = 0.0f;
    this->DualLongShotLens = 20.00f;
    this->LongShotLens = 20.00f;
    this->MidShotLens = 20.00f;
    this->MidUpShotLens = 10.00f;
    this->CloseUpShotLens = 5.00f;
    this->cameraIsReady = false;
}

void AFGCameraDirector::BeginPlay()
{
    Super::BeginPlay();

    CameraEdgeLeft = GetWorld()->SpawnActor<AActor>(CameraEdgeClass, FVector(), FRotator());
    CameraEdgeRight = GetWorld()->SpawnActor<AActor>(CameraEdgeClass, FVector(), FRotator());
}

void AFGCameraDirector::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    switch (cameraMode)
    {
        case ECameraMode::VE_Battle:

            if (GetMainCamera() == NULL ||
                    CameraEdgeLeft == NULL ||
                    CameraEdgeRight == NULL)
                    return;

            //UpdateCameraEdgeMoving();
            //UpdateCameraMoving();

            cameraIsReady = true;
            break;

        case ECameraMode::VE_Stage:
            break;

        case ECameraMode::VE_Character:
            break;

        case ECameraMode::VE_Action:
            break;

        default:
            break;
    }
}

ACameraActor* AFGCameraDirector::GetMainCamera()
{
    return CameraMain;
}

void AFGCameraDirector::UpdateCameraEdgeMoving()
{
    auto FGGameMode = Cast<AFGGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (FGGameMode->CharacterLeft == NULL || FGGameMode->CharacterRight == NULL)
        return;

    if (FGGameMode->CharacterLeft->plFacingRight)
    {
        float rx = FGGameMode->CharacterRight->GetActorLocation().X - 650.0f;
        float lx = FGGameMode->CharacterLeft->GetActorLocation().X + 650.0f;

        EdgeLeftMax = rx - 100.0f;
        EdgeRightMax = lx + 100.0f;

        CameraEdgeRight->SetActorLocation(FVector(rx, FGGameMode->CharacterRight->GetActorLocation().Y, FGGameMode->CharacterRight->GetActorLocation().Z));
        CameraEdgeLeft->SetActorLocation(FVector(lx, FGGameMode->CharacterRight->GetActorLocation().Y, FGGameMode->CharacterRight->GetActorLocation().Z));
    }
    else
    {
        float rx = FGGameMode->CharacterRight->GetActorLocation().X + 650.0f;
        float lx = FGGameMode->CharacterLeft->GetActorLocation().X - 650.0f;

        EdgeRightMax = rx + 100.0f;
        EdgeLeftMax = lx - 100.0f;

        CameraEdgeRight->SetActorLocation(FVector(rx, FGGameMode->CharacterRight->GetActorLocation().Y, FGGameMode->CharacterRight->GetActorLocation().Z));
        CameraEdgeLeft->SetActorLocation(FVector(lx, FGGameMode->CharacterRight->GetActorLocation().Y, FGGameMode->CharacterRight->GetActorLocation().Z));
    }
}

void AFGCameraDirector::UpdateCameraMoving()
{
    auto FGGameMode = Cast<AFGGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (FGGameMode->CharacterLeft == NULL || FGGameMode->CharacterRight == NULL)
        return;

    float lx = FGGameMode->CharacterLeft->GetActorLocation().X;
    float lz = FGGameMode->CharacterLeft->GetActorLocation().Z;
    float rx = FGGameMode->CharacterRight->GetActorLocation().X;
    float rz = FGGameMode->CharacterRight->GetActorLocation().Z;

    float cameraMoveX = (lx + rx) / 2.0f;
    float cameraMoveZ = (lz + rz) / 3.2f;

    float cameraY = UKismetMathLibrary::Clamp(GetActorLocation().Y, Cast<AFGBattleCamera>(GetMainCamera())->GetCameraMinDistance(), Cast<AFGBattleCamera>(GetMainCamera())->GetCameraMaxDistance());
    float cameraZ = UKismetMathLibrary::Clamp(cameraMoveZ, Cast<AFGBattleCamera>(GetMainCamera())->GetCameraMinHeight(), Cast<AFGBattleCamera>(GetMainCamera())->GetCameraMaxHeight());

    if (canMoving(cameraMoveX))
    {
        CameraMain->SetActorLocation(FVector(cameraMoveX, cameraY, cameraZ), true);
    }
    else
    {
        CameraMain->SetActorLocation(FVector(0, cameraY, cameraZ), true);

        // insert some Code here
    }
}

bool AFGCameraDirector::canMoving(float cameraMove)
{
    if (cameraMove > EdgeLeftMax)
    {
        if (cameraMove < EdgeRightMax)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
