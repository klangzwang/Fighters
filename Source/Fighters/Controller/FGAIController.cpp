#include "FGAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetTextLibrary.h"
#include "Kismet/KismetInputLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "FGGameMode.h"

AFGAIController::AFGAIController()
{
	currentState = EEnemyState::initializing;
}

void AFGAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AFGAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		switch (currentState)
		{
			case EEnemyState::initializing:

				if (auto FGGameMode = Cast<AFGGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
				{
					if (FGGameMode->Characters[0] != nullptr)
					{
						PlayerRef = FGGameMode->Characters[0];
						currentState = EEnemyState::idle;
					}
				}
				break;

			case EEnemyState::idle:

				Idle();
				break;

			case EEnemyState::sawPlayer:

				SawPlayer();
				break;

			case EEnemyState::chasing:

				Chasing();
				break;

			case EEnemyState::attacking:

				Attacking();
				break;

			case EEnemyState::fleeing:

				Fleeing();
				break;

			default:
				break;
		}
}

void AFGAIController::Idle()
{
}

void AFGAIController::SawPlayer()
{
}

void AFGAIController::Chasing()
{
}

void AFGAIController::Attacking()
{
}

void AFGAIController::Fleeing()
{
}
