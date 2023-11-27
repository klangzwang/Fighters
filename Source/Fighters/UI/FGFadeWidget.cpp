#include "FGFadeWidget.h"

UFGFadeWidget::UFGFadeWidget()
{
    //FadeImage = NewObject<UImage>(UImage::StaticClass());
    //UPanelWidget* overlayPanel = (UPanelWidget*)GetWidgetFromName(TEXT("FiOverlay"));

    SrcColor = FColor(0,0,0,0);
    DestColor = FColor(0,0,0,0);
    LerpTime = 9999.f;
    LerpDuration = 0.f;
}

void UFGFadeWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (FadeImage)
    {
        FadeImage->SetBrushTintColor(FColor(0, 0, 0, 0));
    }
}

void UFGFadeWidget::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
    Super::NativeTick(MyGeometry, DeltaTime);

    if (LerpTime < LerpDuration)
    {
        LerpTime += DeltaTime;
        FLinearColor Color = FMath::Lerp<FLinearColor>(SrcColor, DestColor, LerpTime / LerpDuration);
        FadeImage->SetBrushTintColor(Color);
        //GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Green, TEXT("" + Color.ToString()));
    }
    //GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::White, FString::Printf(TEXT("LerpTime (%f)"), LerpTime));
    //GEngine->AddOnScreenDebugMessage(-1, 0.25f, FColor::Green, FString::Printf(TEXT("LerpDuration (%f)"), LerpDuration));
}

void UFGFadeWidget::KillFade()
{
    LerpTime = 9999.f;
}

bool UFGFadeWidget::IsFade()
{
    return LerpTime < LerpDuration;
}

void UFGFadeWidget::InitFade(float Duration, bool FadeOutBlack)
{
    LerpDuration = Duration > 0.f ? Duration : 1.5f;
    SrcColor.A = FadeOutBlack ? 1.f : 0.f;
    DestColor.A = FadeOutBlack ? 0.f : 1.f;
}

void UFGFadeWidget::DoFade(EFadeDelay fadeDelay)
{
    switch (fadeDelay)
    {
        case EFadeDelay::VE_NoDelay:
            LerpTime = 0.f;
            break;
        case EFadeDelay::VE_ShortDelay:
            LerpTime = -0.5f;
            break;
        case EFadeDelay::VE_HighDelay:
            LerpTime = -1.f;
            break;
    }
}
