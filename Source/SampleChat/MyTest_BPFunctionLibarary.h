// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyTest_BPFunctionLibarary.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UMyTest_BPFunctionLibarary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
	static FString GetMyFirstCPP();
};
