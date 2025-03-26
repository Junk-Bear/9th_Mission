// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_CalcBaseball.generated.h"

/**
 * 
 */

static int32 CheckLife;
static int32 Strike;
static int32 Ball;

UCLASS()
class SAMPLECHAT_API UBPFL_CalcBaseball : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "CalcBaseball")
	static void InitLife(); // 초기화
	UFUNCTION(BlueprintCallable, Category = "CalcBaseball")
	static int32 GetLife() { return CheckLife; };
	UFUNCTION(BlueprintCallable, Category = "CalcBaseball")
	static void SetLife(int32 Amount) { CheckLife += Amount; };


	UFUNCTION(BlueprintCallable, Category = "CalcBaseball")
	static FString CalcBaseball(FString msg, FString ThrowBall); // 계산
};
