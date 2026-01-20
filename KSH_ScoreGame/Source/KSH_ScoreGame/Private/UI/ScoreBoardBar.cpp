// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ScoreBoardBar.h"
#include "Components/TextBlock.h"

void UScoreBoardBar::UpdateData(int32 Rank, FString PlayerName, int32 Score)
{
	if (PlayerName.Len() > 10)
	{
		PlayerName = PlayerName.Right(7) + TEXT("...");
	}

	if (RankText) RankText->SetText(FText::AsNumber(Rank));
	if (NickNameText) NickNameText->SetText(FText::FromString(PlayerName));
	if (ScoreText) ScoreText->SetText(FText::AsNumber(Score));
}
