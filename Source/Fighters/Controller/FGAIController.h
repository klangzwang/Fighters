#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "FGCharacterBase.h"
#include "FGAIController.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	initializing,
	idle,
	sawPlayer,
	chasing,
	attacking,
	fleeing
};

UCLASS()
class FIGHTERS_API AFGAIController : public AAIController
{
	GENERATED_BODY()

public:

	AFGAIController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Idle();
	virtual void SawPlayer();
	virtual void Chasing();
	virtual void Attacking();
	virtual void Fleeing();

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|AiController")
    EEnemyState currentState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|AiController")
	AFGCharacterBase* PlayerRef;
 };
