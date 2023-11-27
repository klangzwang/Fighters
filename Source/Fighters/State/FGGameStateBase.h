#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FGGameStateBase.generated.h"

UCLASS()
class FIGHTERS_API AFGGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:

	AFGGameStateBase();
	
	UPROPERTY()
	class UFGGameInstance* GameInstance;

protected:

	virtual void BeginPlay() override;
	
public:

	virtual void Tick(float DeltaTime) override;
};
