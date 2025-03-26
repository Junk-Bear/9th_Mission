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
	static void InitThrowBallPoint(); // �ʱ�ȭ

	UFUNCTION(BlueprintCallable, Category = "ServerGetRand")
	static TArray<int32> MakeRand(); // ���� ����
	UFUNCTION(BlueprintCallable, Category = "ServerGetRand")
	static TArray<int32> GetRand() { return ThrowBallPoint; }; // ���� �� ��ȯ

	UFUNCTION(BlueprintCallable, Category = "ServerGetRand")
	static FString GetRandString();
};
