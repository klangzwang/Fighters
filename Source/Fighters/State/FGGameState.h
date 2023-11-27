#pragma once
#include "CoreMinimal.h"
#include "FGGameStateBase.h"
#include "FGGameState.generated.h"

UCLASS()
class FIGHTERS_API AFGGameState : public AFGGameStateBase
{
	GENERATED_BODY()

public:

	AFGGameState();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};
