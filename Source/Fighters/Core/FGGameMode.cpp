#include "FGGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

AFGGameMode::AFGGameMode()
{
}

void AFGGameMode::BeginPlay()
{
	Super::BeginPlay();

	//FindAllActors(GetWorld(), PlayerStarts);
	//for (APlayerStart* pStart : PlayerStarts)
	//{
	//	PlayerStartLocs.Add(pStart->GetActorLocation());
	//	PlayerStartRots.Add(pStart->GetActorRotation());
	//}

	//CharacterLeft = GetWorld()->SpawnActor<AFGCharacterBase>(CharacterClassLeft, PlayerStartLocs[0], PlayerStartRots[0]);

	//UGameplayStatics::CreatePlayer(GetWorld(), 1, true);
	//CharacterRight = GetWorld()->SpawnActor<AFGCharacterBase>(CharacterClassRight, PlayerStartLocs[1], PlayerStartRots[1]);

	//FindAllActors(GetWorld(), Characters);
	//FindAllActors(GetWorld(), Controllers);

	//UGameplayStatics::GetPlayerController(GetWorld(), 0)->Possess(Characters[0]);
	//UGameplayStatics::GetPlayerController(GetWorld(), 1)->Possess(Characters[1]);
}

void AFGGameMode::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}
