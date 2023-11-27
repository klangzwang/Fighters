#pragma once
#include "CoreMinimal.h"
#include "FGBaseWidget.h"
#include "Components/Image.h"
#include "FGFadeWidget.generated.h"

class UImage;
class UPanelWidget;

UENUM(BlueprintType)
enum class EFadeDelay : uint8
{
    VE_NoDelay		UMETA(DisplayName = "NoDelay"),
    VE_ShortDelay	UMETA(DisplayName = "ShortDelay"),
    VE_HighDelay	UMETA(DisplayName = "HighDelay")
};

UCLASS(Blueprintable, EditInlineNew)
class FIGHTERS_API UFGFadeWidget : public UFGBaseWidget
{
    GENERATED_BODY()
	
public:

    UFGFadeWidget();

    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;

public:

    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void InitFade(float Duration, bool FadeOutBlack);
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void KillFade();
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    bool IsFade();
    UFUNCTION(BlueprintCallable, Category = "Fighters|Widget")
    void DoFade(EFadeDelay fadeDelay);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Widget")
    EFadeDelay FadeDelay;

    FLinearColor SrcColor;
    FLinearColor DestColor;

    float LerpTime;
    float LerpDuration;

protected:

    UPROPERTY(BlueprintReadWrite, Category = "Fighters|Widget", meta = (BindWidget))
    UImage* FadeImage;
};
