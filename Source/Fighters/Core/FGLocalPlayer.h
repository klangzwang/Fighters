#pragma once
#include "Engine/LocalPlayer.h"
#include "FGLocalPlayer.generated.h"

class APlayerController;
class UInputMappingContext;
class UObject;
class UWorld;

UCLASS()
class FIGHTERS_API UFGLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()

public:

	UFGLocalPlayer();

	virtual void PostInitProperties() override;
	virtual void SwitchController(class APlayerController* PC) override;
	virtual bool SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld) override;

protected:
	
	void OnPlayerControllerChanged(APlayerController* NewController);

private:

	UPROPERTY(Transient)
	mutable TObjectPtr<const UInputMappingContext> InputMappingContext;

	UPROPERTY()
	TWeakObjectPtr<APlayerController> LastBoundPC;
};
