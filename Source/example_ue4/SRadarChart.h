// Fill out your copyright notice in the Description page of Project Settings.

/**************************************************************************
Author: levingong
Date: 2018-11-15
Description: 多维图Slate
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"

class EXAMPLE_UE4_API SRadarChart : public SLeafWidget
{
public:
    SLATE_BEGIN_ARGS(SRadarChart)
        {}
    SLATE_END_ARGS()

    SRadarChart();

    void Construct(const FArguments& InArgs);

    void SetSideCount(int32 __SideCount);

    void SetAntialias(float __Antialias);

    void SetMinProgress(float __MinProgress);

    void SetPosOffset(const TArray<FVector2D>& __PosOffset);
    FVector2D GetPosOffset(int32 __idx) const;

    void SetPosColor(const TArray<FColor>& __PosColor);
    FColor GetPosColor(int32 __idx) const;

    void SetBrush(const FSlateBrush& __Brush);

    void SetProgress(int32 i, float prg);
    float GetProgress(int32 i) const;
    void ResetProgress();

    virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const;

protected:

    // Begin SWidget overrides.
    virtual FVector2D ComputeDesiredSize(float) const override;
    // End SWidget overrides.

    int32 SideCount;
    
    float Antialias;
    
    FSlateBrush Brush;

    TMap<int32, float> Progress;

    float MinProgress;

    TArray<FVector2D> PosOffset;

    TArray<FColor> PosColor;

};
