// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_ServerGetRand.generated.h"

/**
 * 
 */
static TArray<int32> ThrowBallPoint;

UCLASS()
class SAMPLECHAT_API UBPFL_ServerGetRand : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static void InitThrowBallPoint(); // 초기화

	UFUNCTION(BlueprintCallable, Category = "ServerGetRand")
	static TArray<int32> MakeRand(); // 랜덤 생성
	UFUNCTION(BlueprintCallable, Category = "ServerGetRand")
	static TArray<int32> GetRand() { return ThrowBallPoint; }; // 랜덤 값 반환

	UFUNCTION(BlueprintCallable, Category = "ServerGetRand")
	static FString GetRandString();
};
