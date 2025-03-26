// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL_CalcBaseball.h"

void UBPFL_CalcBaseball::InitLife()
{
	CheckLife = 3;
}

FString UBPFL_CalcBaseball::CalcBaseball(FString msg, FString ThrowBall)
{
	Strike = 0;
	Ball = 0;

	//문자열 확인
	if (msg.Len() != 3)
	{
		return FString::Printf(TEXT("3자리 숫자를 입력해주세요."));
	}
	if (msg.IsNumeric() == false)
	{
		return FString::Printf(TEXT("숫자만 입력해주세요."));
	}
	for (int i = 0; i < msg.Len() - 1; i++)
	{
		for (int j = i + 1; j < msg.Len(); j++)
		{
			if (msg[i] == msg[j])
			{
				return FString::Printf(TEXT("중복된 숫자가 있습니다."));
			}
		}
	}

	for (int i = 0; i < msg.Len(); i++)
	{
		for (int j = 0; j < ThrowBall.Len(); j++)
		{
			if (msg[i] == ThrowBall[j])
			{
				if(i == j)
				{
					Strike++;
				}
				else
				{
					Ball++;
				}
			}
		}
	}

	if (Strike == 3)
	{
		return FString::Printf(TEXT("정답입니다."));
	}
	else
	{
		SetLife(-1);
		if (CheckLife == 0)
		{
			return FString::Printf(TEXT("남은 기회 %d : 실패하였습니다."), CheckLife);
		}
		else if (Strike == 0 && Ball == 0)
		{
			return FString::Printf(TEXT("남은 기회 %d : Out"), CheckLife);
		}
		else
		{
			return FString::Printf(TEXT("남은 기회 %d : %d Strike, %d Ball"), CheckLife, Strike, Ball);
		}
	}
}
