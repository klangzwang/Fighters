#pragma once
#include "CoreMinimal.h"
#include "FGOpenController.generated.h"

UCLASS(Blueprintable)
class FIGHTERS_API AFGOpenController : public APlayerController
{
    GENERATED_BODY()

public:

	AFGOpenController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
