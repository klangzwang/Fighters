#pragma once
#include "CoreMinimal.h"
#include "FGBaseWidget.h"
#include "FGMainMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FIGHTERS_API UFGMainMenu : public UFGBaseWidget
{
	GENERATED_BODY()

public:

	UFGMainMenu();

	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
	TArray<UWidget*> OptionArray;

	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widgets")
	void NavigateUp();
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widgets")
	void NavigateDown();
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widgets")
	void NavigateLeft();
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widgets")
	void NavigateRight();
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widgets")
	void Apply();
	UFUNCTION(BlueprintImplementableEvent, Category = "Fighters|Widgets")
	void Cancel();
};
