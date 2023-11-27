#pragma once
#include "CoreMinimal.h"
#include "FGInputBaseUserWidget.h"
#include "FGMainViewportWidget.generated.h"

class UFGOperationalWidget;
class UCanvasPanel;
class UFGFadeWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FIGHTERS_API UFGMainViewportWidget : public UFGInputBaseUserWidget
{
    GENERATED_BODY()

public:

    UFGMainViewportWidget();

private:

    UPROPERTY(Export)
    UFGOperationalWidget* currentSection;

protected:

    UPROPERTY(BlueprintReadWrite, Category = "Fighters|Widget", meta = (BindWidget))
    UFGOperationalWidget* InputTrashPtr;

    UPROPERTY(BlueprintReadWrite, Category = "Fighters|Widget", meta = (BindWidget))
    UCanvasPanel* ScreenPanel;

    UPROPERTY(BlueprintReadWrite, Category = "Fighters|Widget", meta = (BindWidget))
    UFGFadeWidget* WBP_Fade;
};
