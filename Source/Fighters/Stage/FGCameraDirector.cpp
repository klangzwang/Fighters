#include "FGCameraDirector.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "FGGameMode.h"

AFGCameraDirector::AFGCameraDirector()
{
    PrimaryActorTick.bCanEverTick = true;

    cameraMode = ECameraMode::VE_NoMode;
    LocationArray.Init(FVector(), 2);

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
    this->DebugCameraEdge = false;
    this->DebugCameraInfos = false;
    this->cameraIsReady = false;
    this->CurrentExtraDistance = 0.f;
}

void AFGCameraDirector::BeginPlay()
{
    Super::BeginPlay();
}

void AFGCameraDirector::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    switch (cameraMode)
    {
        case ECameraMode::VE_NoMode:
            break;

        case ECameraMode::VE_Demo:

            if (isStageDemoPlaying || isCharacterDemoPlaying)
                return;

            if (playStageDemo && !isStageDemoDone)
            {
                CalcStageDemo();
            }
            else
            {
                if (playCharacterDemo && !isCharacterDemoDone)
                {
                    CalcCharacterDemo();
                }
            }

            if (isStageDemoDone && isCharacterDemoDone)
            {
                SetupCameraMode();
            }

            break;

        case ECameraMode::VE_Idle:

            if (GetMainCamera() == NULL)
                return;

            CameraMain->SetActorLocation(FVector(0, GetCameraMaxDistance(), GetCameraMinHeight()), false);

            cameraIsReady = true;
            break;

        case ECameraMode::VE_Battle:

            if (GetMainCamera() == NULL)
                return;

            if (EdgeOuterLeft == NULL ||
                EdgeOuterRight == NULL ||
                EdgeInnerLeft == NULL ||
                EdgeInnerRight == NULL)
            {
                EdgeOuterLeft = GetWorld()->SpawnActor<AActor>(CameraEdgeClass, FVector(), FRotator());
                EdgeOuterRight = GetWorld()->SpawnActor<AActor>(CameraEdgeClass, FVector(), FRotator());
                EdgeInnerLeft = GetWorld()->SpawnActor<AActor>(CameraEdgeClass, FVector(), FRotator());
                EdgeInnerRight = GetWorld()->SpawnActor<AActor>(CameraEdgeClass, FVector(), FRotator());

                EdgeOuterLeft->GetRootComponent()->SetVisibility(DebugCameraEdge);
                EdgeOuterRight->GetRootComponent()->SetVisibility(DebugCameraEdge);
                EdgeInnerLeft->GetRootComponent()->SetVisibility(DebugCameraEdge);
                EdgeInnerRight->GetRootComponent()->SetVisibility(DebugCameraEdge);
                EdgeOuterLeft->GetRootComponent()->SetHiddenInGame(!DebugCameraEdge);
                EdgeOuterRight->GetRootComponent()->SetHiddenInGame(!DebugCameraEdge);
                EdgeInnerLeft->GetRootComponent()->SetHiddenInGame(!DebugCameraEdge);
                EdgeInnerRight->GetRootComponent()->SetHiddenInGame(!DebugCameraEdge);

                hasEdgesSpawned = true;

                return;
            }

            UpdateBattleCameraMoving();

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

float AFGCameraDirector::GetCameraMinHeight()
{
    return mCameraParam->GetCameraMinHeight();
}

float AFGCameraDirector::GetCameraMaxHeight()
{
    return mCameraParam->GetCameraMaxHeight();
}

float AFGCameraDirector::GetCameraMinDistance()
{
    return mCameraParam->GetCameraMinDistance();
}

float AFGCameraDirector::GetCameraMaxDistance()
{
    return mCameraParam->GetCameraMaxDistance();
}

void AFGCameraDirector::SetupCameraMode()
{
    if (playStageDemo || playCharacterDemo)
    {
        cameraMode = ECameraMode::VE_Demo;
    }
    else
    {
        FString LevelName = GetWorld()->GetMapName();
        LevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
        if (LevelName == "ST_Clean")
        {
            cameraMode = ECameraMode::VE_Idle;
        }
        else
        {
            cameraMode = ECameraMode::VE_Battle;
        }
    }
}

AActor* AFGCameraDirector::GetMainCamera()
{
    return CameraMain;
}

AActor* AFGCameraDirector::GetCinemaCamera()
{
    return CameraCinema;
}

void AFGCameraDirector::UpdateBattleCameraMoving()
{
    if (auto FGGameMode = Cast<AFGGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
    {
        if (FGGameMode->Characters.Num() == 0)
            return;

        //if (FGGameMode->Characters[0]->plFacingRight)
        //{
        //    float rx = FGGameMode->Characters[1]->GetActorLocation().X - 650.0f;
        //    float lx = FGGameMode->Characters[0]->GetActorLocation().X + 650.0f;

        //    EdgeLeftMax = rx - 100.0f;
        //    EdgeRightMax = lx + 100.0f;

        //    CameraEdgeRight->SetActorLocation(FVector(rx, FGGameMode->Characters[1]->GetActorLocation().Y, FGGameMode->Characters[1]->GetActorLocation().Z));
        //    CameraEdgeLeft->SetActorLocation(FVector(lx, FGGameMode->Characters[0]->GetActorLocation().Y, FGGameMode->Characters[0]->GetActorLocation().Z));
        //}
        //else
        //{
        //    float rx = FGGameMode->Characters[1]->GetActorLocation().X + 650.0f;
        //    float lx = FGGameMode->Characters[0]->GetActorLocation().X - 650.0f;

        //    EdgeRightMax = rx + 100.0f;
        //    EdgeLeftMax = lx - 100.0f;

        //    CameraEdgeRight->SetActorLocation(FVector(rx, FGGameMode->Characters[1]->GetActorLocation().Y, FGGameMode->Characters[1]->GetActorLocation().Z));
        //    CameraEdgeLeft->SetActorLocation(FVector(lx, FGGameMode->Characters[0]->GetActorLocation().Y, FGGameMode->Characters[0]->GetActorLocation().Z));
        //}

        //float lx = FGGameMode->Characters[0]->GetActorLocation().X;
        //float lz = FGGameMode->Characters[0]->GetActorLocation().Z;
        //float rx = FGGameMode->Characters[1]->GetActorLocation().X;
        //float rz = FGGameMode->Characters[1]->GetActorLocation().Z;

        //float cameraMoveX = (lx + rx) / 2.0f;
        //float cameraMoveZ = (lz + rz) / 3.2f;

        //float cameraY = UKismetMathLibrary::Clamp(GetActorLocation().Y, GetCameraMinDistance(), GetCameraMaxDistance());
        //float cameraZ = UKismetMathLibrary::Clamp(cameraMoveZ, GetCameraMinHeight(), GetCameraMaxHeight());

        //if (canMoving(cameraMoveX))
        //{
        //    CameraMain->SetActorLocation(FVector(cameraMoveX, cameraY, cameraZ), true);
        //}
        //else
        //{
        //    CameraMain->SetActorLocation(FVector(0, cameraY, cameraZ), true);
        //}
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

void AFGCameraDirector::CalcStageDemo()
{
    isStageDemoPlaying = true;

    CameraMain->SetActorLocation(FVector(0, 0, 0), false);

    PerformStageDemo();

    if (CameraMain->GetActorLocation() == FVector(0, GetCameraMaxDistance(), GetCameraMinHeight()))
    {
        isStageDemoPlaying = false;
        isStageDemoDone = true;
    }
}

void AFGCameraDirector::CalcCharacterDemo()
{
    isCharacterDemoPlaying = true;

    CameraMain->SetActorLocation(FVector(0, 0, 0), false);

    PerformCharacterDemo();

    if (CameraMain->GetActorLocation() == FVector(0, GetCameraMaxDistance(), GetCameraMinHeight()))
    {
        isCharacterDemoPlaying = false;
        isCharacterDemoDone = true;
    }
}

void AFGCameraDirector::SetOriginalLocation()
{
    CameraMain->SetActorLocation(FVector(0, GetCameraMaxDistance(), GetCameraMinHeight()), false);
}

// void ANightSkyGameState::UpdateCamera()
// {
	// if (CameraActor != nullptr)
	// {
		// const FVector P1Location = FVector(static_cast<float>(Players[0]->PosX) / COORD_SCALE, static_cast<float>(Players[0]->PosZ) / COORD_SCALE, static_cast<float>(Players[0]->PosY) / COORD_SCALE);
		// const FVector P2Location = FVector(static_cast<float>(Players[3]->PosX) / COORD_SCALE, static_cast<float>(Players[3]->PosZ) / COORD_SCALE, static_cast<float>(Players[3]->PosY) / COORD_SCALE);
		// const FVector Average = (P1Location + P2Location) / 2;
		// const float NewX = FMath::Clamp(-Average.X,-BattleState.ScreenBounds / 1000, BattleState.ScreenBounds / 1000);
		// float Distance = sqrt(abs((P1Location - P2Location).X));
		// Distance = FMath::Clamp(Distance,16, BattleState.ScreenBounds / 37800);
		// const float NewY = FMath::GetMappedRangeValueClamped(TRange<float>(4, BattleState.ScreenBounds / 37800), TRange<float>(0, BattleState.ScreenBounds / 1000), Distance);
		// float NewZ;
		// if (P1Location.Z > P2Location.Z)
			// NewZ = FMath::Lerp(P1Location.Z, P2Location.Z, 0.25) + 125;
		// else
			// NewZ = FMath::Lerp(P1Location.Z, P2Location.Z, 0.75) + 125;
		// BattleState.CameraPosition = BattleSceneTransform.GetRotation().RotateVector(FVector(-NewX, NewY, NewZ)) + BattleSceneTransform.GetLocation();
		// BattleState.CameraPosition = FMath::Lerp(CameraActor->GetActorLocation(), BattleState.CameraPosition, 0.25);
		// CameraActor->SetActorLocation(BattleState.CameraPosition);
		// if (BattleState.CurrentSequenceTime == -1)
		// {
			// const FVector SequenceCameraLocation = BattleSceneTransform.GetRotation().RotateVector(FVector(0, 1080, 175)) + BattleSceneTransform.GetLocation();
			// SequenceCameraActor->SetActorLocation(SequenceCameraLocation);
			// if (const auto PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0); IsValid(PlayerController))
			// {
				// PlayerController->SetViewTargetWithBlend(CameraActor);	
			// }
		// }
		// else
		// {
			// if (BattleState.CurrentSequenceTime >= SequenceActor->SequencePlayer->GetEndTime().Time)
			// {
				// SequenceActor->SequencePlayer->Stop();
				// BattleState.CurrentSequenceTime = -1;
				// BattleState.IsPlayingSequence = false;
				// return;
			// }
			// const FMovieSceneSequencePlaybackParams Params = FMovieSceneSequencePlaybackParams(
				// FFrameTime(BattleState.CurrentSequenceTime),
				// EUpdatePositionMethod::Scrub);
			// SequenceActor->SequencePlayer->SetPlaybackPosition(Params);
			// if (SequenceTarget->Direction == DIR_Left)
			// {
				// auto NewCamLocation = SequenceCameraActor->GetActorLocation();
				// NewCamLocation.X = -(NewCamLocation.X - SequenceTarget->GetActorLocation().X) + SequenceTarget->GetActorLocation().X;
				// SequenceCameraActor->SetActorLocation(NewCamLocation);
				// auto NewCamRotation = SequenceCameraActor->GetActorRotation();
				// NewCamRotation.Yaw = -NewCamRotation.Yaw - 180;
				// SequenceCameraActor->SetActorRotation(NewCamRotation);

				// auto NewEnemyLocation = SequenceEnemy->GetActorLocation();
				// NewEnemyLocation.X = -(NewEnemyLocation.X - static_cast<float>(SequenceEnemy->PosX) / COORD_SCALE) + static_cast<float>(SequenceEnemy->PosX) / COORD_SCALE;
				// SequenceEnemy->SetActorLocation(NewEnemyLocation);
			// }
		// }
	// }
	// bIsPlayingSequence = BattleState.IsPlayingSequence;
// }
