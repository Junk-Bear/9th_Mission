// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTest_BPFunctionLibarary.h"

FString UMyTest_BPFunctionLibarary::GetMyFirstCPP()
{
    return FString(TEXT("Hello CPP lib in BP"));
}
