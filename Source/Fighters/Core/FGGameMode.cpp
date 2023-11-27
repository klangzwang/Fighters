#include "FGGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "FGGameInstance.h"

AFGGameMode::AFGGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	MatchState = EMatchState::VE_MatchInit;

	BattleTimer = 0.f;
	WinCounter = 0.f;
	WinCountLeft = 0;
	WinCountRight = 0;
}

void AFGGameMode::BeginPlay()
{
	Super::BeginPlay();

	GameInstance = Cast<UFGGameInstance>(GetGameInstance());

	FTimerHandle SpawnHandle;
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, "BeginSpawn");
	GetWorldTimerManager().SetTimer(SpawnHandle, TimerDelegate, 0.2, false);
}

void AFGGameMode::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GameInstance->hasSpawned())
	{
		if ((BattleTimer - deltaTime) >= 0.f)
			BattleTimer = BattleTimer - deltaTime;
		else
			BattleTimer = 0.f;

		CalcMatchState();
	}
}

void AFGGameMode::CalcMatchState()
{
	switch (MatchState)
	{
		case EMatchState::VE_NoMatch:

			UE_LOG(LogTemp, Warning, TEXT("MatchState is NOMATCH"));

			break;

		case EMatchState::VE_MatchInit:

			UE_LOG(LogTemp, Warning, TEXT("MatchState is MATCHINIT"));

			for (AFGCharacterBase* chars : Characters)
			{
				chars->GetMesh()->SetVisibility(true);
				chars->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
			}
			MatchState = EMatchState::VE_NoMatch;

			break;

		case EMatchState::VE_MatchActive:

			if (BattleTimer == -1.f)
			{
				if (WinCountLeft == WinCounter || WinCountRight == WinCounter)
				{
					MatchState = EMatchState::VE_MatchOver;
					return;
				}
				else
				{
					float mHealthLP = 1.f;
					float mHealthRP = 1.f;

					if (mHealthLP > mHealthRP)
						++WinCountLeft;
					else if (mHealthLP < mHealthRP)
						++WinCountRight;

					MatchState = EMatchState::VE_MatchRoundEnd;
				}
			}

			break;

		case EMatchState::VE_MatchEnter:
			break;

		case EMatchState::VE_MatchIntro:
			break;

		case EMatchState::VE_MatchOver:
			break;

		case EMatchState::VE_MatchReady:
			break;

		case EMatchState::VE_MatchRoundEnd:

			BattleTimer = 0.f;
			MatchState = EMatchState::VE_MatchReady;

			break;
	}
}

void AFGGameMode::BeginSpawn()
{
	if (HasSpawnCondition())
	{
		AddFighterCharacters();
		FindAllActors(GetWorld(), Characters);
		UE_LOG(LogTemp, Warning, TEXT("Characters value is: %d"), Characters.Num());
		if (Characters.Num() != 2)
			return;

		AddFighterControllers();
		FindAllActors(GetWorld(), Controllers);
		UE_LOG(LogTemp, Warning, TEXT("Controllers value is: %d"), Controllers.Num());

		EndSpawn();
	}
}

void AFGGameMode::EndSpawn()
{
	Controllers[0]->UnPossess();
	Controllers[0]->Possess(Cast<APawn>(Characters[0]));
	Controllers[1]->UnPossess();
	Controllers[1]->Possess(Cast<APawn>(Characters[1]));

	UE_LOG(LogTemp, Warning, TEXT("hasSpawned: %s"), GameInstance->hasSpawned() ? TEXT("true") : TEXT("false"));

	BattleTimer = 99.f;
	WinCounter = 2.f;
}

void AFGGameMode::AddFighterCharacters()
{
	FindAllActors(GetWorld(), PlayerStart);
	UE_LOG(LogTemp, Warning, TEXT("PlayerStart value is: %d"), PlayerStart.Num());
	if (PlayerStart.Num() == 0)
		return;

	const FVector LocationLeft(PlayerStart[0]->GetActorLocation().X - 120.f, PlayerStart[0]->GetActorLocation().Y, PlayerStart[0]->GetActorLocation().Z);

	if (GameInstance->PlayerIdLeft == EPlayerID::PLAYER)
		GetWorld()->SpawnActor<AFGCharacterBase>(CharacterLeft, LocationLeft, PlayerStart[0]->GetActorRotation());
	else if (GameInstance->PlayerIdLeft == EPlayerID::CPU)
		UAIBlueprintHelperLibrary::SpawnAIFromClass(this->GetWorld(), CharacterLeft, aiBehavior, LocationLeft, PlayerStart[0]->GetActorRotation());

	const FVector LocationRight(PlayerStart[0]->GetActorLocation().X + 120.f, PlayerStart[0]->GetActorLocation().Y, PlayerStart[0]->GetActorLocation().Z);

	if (GameInstance->PlayerIdRight == EPlayerID::PLAYER)
		GetWorld()->SpawnActor<AFGCharacterBase>(CharacterRight, LocationRight, PlayerStart[0]->GetActorRotation());
	else if (GameInstance->PlayerIdRight == EPlayerID::CPU)
		UAIBlueprintHelperLibrary::SpawnAIFromClass(this->GetWorld(), CharacterRight, aiBehavior, LocationRight, PlayerStart[0]->GetActorRotation());
}

void AFGGameMode::AddFighterControllers()
{
	if (GameInstance->PlayerIdLeft == EPlayerID::CPU)
		GetWorld()->SpawnActor<AFGAIController>(ControllerAiLeft);

	if (GameInstance->PlayerIdRight == EPlayerID::PLAYER)
		Cast<APlayerController>(UGameplayStatics::CreatePlayer(this->GetWorld(), 1));
	else if (GameInstance->PlayerIdRight == EPlayerID::CPU)
		GetWorld()->SpawnActor<AFGAIController>(ControllerAiRight);
}

bool AFGGameMode::HasSpawnCondition()
{
	return
		CharacterLeft != NULL &&
		CharacterRight != NULL &&
		ControllerAiLeft != NULL &&
		ControllerAiRight != NULL;
}

void AFGGameMode::UpdateWorldLights()
{
}

void AFGGameMode::UpdateFog()
{
}

void AFGGameMode::UpdateCharacterLights()
{
}

void AFGGameMode::RestartBattleScene()
{
}

void AFGGameMode::RestartBattleRound()
{
}

void AFGGameMode::ResetWorldLights()
{
}

void AFGGameMode::ResetCharacterLights()
{
}

ACharacter* AFGGameMode::GetPlayerCharacter(EPlayerID PlayerID)
{
	return nullptr;
}

FVector AFGGameMode::GetPlayerActorLocation(EPlayerID PlayerID)
{
	return FVector();
}

int32 AFGGameMode::GetPlayerActorHealth(EPlayerID PlayerID)
{
	return int32();
}

void AFGGameMode::ClearWorldLights()
{
}

void AFGGameMode::ClearCharacterLights()
{
}
