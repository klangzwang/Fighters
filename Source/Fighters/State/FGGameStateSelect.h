#pragma once
#include "CoreMinimal.h"
#include "FGGameStateBase.h"
#include "FGGameStateSelect.generated.h"

UCLASS()
class FIGHTERS_API AFGGameStateSelect : public AFGGameStateBase
{
	GENERATED_BODY()

public:

	AFGGameStateSelect();

protected:

	virtual void BeginPlay() override;
	
public:

	virtual void Tick(float DeltaTime) override;
};
