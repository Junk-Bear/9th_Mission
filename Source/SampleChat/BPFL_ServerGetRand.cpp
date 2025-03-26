// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL_ServerGetRand.h"


void UBPFL_ServerGetRand::InitThrowBallPoint()
{
	if (ThrowBallPoint.Num() > 0)
	{
		ThrowBallPoint.Empty();
	}

	for (int i = 0; i < 10; i++)
	{
		ThrowBallPoint.Add(0);
	}
}

TArray<int32> UBPFL_ServerGetRand::MakeRand()
{
	InitThrowBallPoint();

	for (int i = 1; i <= 3; i++)
	{
		int RandIndex;
		while (true)
		{
			RandIndex = FMath::RandRange(1, 9);
			if (ThrowBallPoint[RandIndex] == 0)
			{
				ThrowBallPoint[RandIndex] = i;
				break;
			}
		}		
	}

	for (int i = 0; i < 10; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("ThrowBallPoint[%d] = %d"), i, ThrowBallPoint[i]);
	}

	return ThrowBallPoint;
}

FString UBPFL_ServerGetRand::GetRandString()
{
	FString ResultString = TEXT("");

	int i = 1;
	while (i < 4)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ThrowBallPoint[j] == i)
			{
				ResultString += FString::FromInt(j);
				break;
			}
		}
		i++;
	}
	return ResultString;
}
