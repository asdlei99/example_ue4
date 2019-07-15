// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "ExampleGameInstance.h"
#include "UtilGame.generated.h"

/**
 * 
 */
UCLASS()
class EXAMPLE_UE4_API UUtilGame : public UObject
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	static UWorld* GetMyWorld();

	UFUNCTION(BlueprintCallable)
	static UExampleGameInstance* GetGameInstance();

    UFUNCTION(BlueprintCallable)
    static int Test_TCHAR_TO_UTF8();

    UFUNCTION(BlueprintCallable)
    static void TestLowerAndUpperBound();

};

DECLARE_LOG_CATEGORY_EXTERN(LogUtilGame, Verbose, All);
