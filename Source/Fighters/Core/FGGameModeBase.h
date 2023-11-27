#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FGGameModeBase.generated.h"

UCLASS(NonTransient)
class FIGHTERS_API AFGGameModeBase : public AGameModeBase {
	
    GENERATED_BODY()
	
public:

    AFGGameModeBase();

	UFUNCTION(BlueprintCallable)
	void ScreenFadeIn();

	UFUNCTION(BlueprintCallable)
	void ScreenFadeOut();
};

