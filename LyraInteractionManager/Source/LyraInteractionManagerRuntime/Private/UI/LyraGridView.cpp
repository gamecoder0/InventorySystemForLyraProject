// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/LyraGridView.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraGridView)

ULyraGridView::ULyraGridView(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsVariable = true;
}

void ULyraGridView::ReleaseSlateResources(bool bReleaseChildren)
{
	// pass 2 and open inventory 
	Super::ReleaseSlateResources(bReleaseChildren);
	UE_LOG(LogTemp, Warning, TEXT("ReleaseSlateResources"));
	MyTileView.Reset();
}

void ULyraGridView::SetEntryHeight(float NewHeight)
{
	EntryHeight = NewHeight;
	if (MyTileView.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("SetEntryHeight: %f"), GetTotalEntryHeight());
		MyTileView->SetItemHeight(GetTotalEntryHeight());
	}
}

void ULyraGridView::SetEntryWidth(float NewWidth)
{
	
	EntryWidth = NewWidth;
	if (MyTileView.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("SetEntryWidth: %f"), GetTotalEntryWidth());
		MyTileView->SetItemWidth(GetTotalEntryWidth());
	}
}

TSharedRef<STableViewBase> ULyraGridView::RebuildListWidget()
{
	// pass 1
	UE_LOG(LogTemp, Warning, TEXT("RebuildListWidget"));
	return ConstructTileView<STileView>();
}

FMargin ULyraGridView::GetDesiredEntryPadding(UObject* Item) const
{
	// pass 3 when add widget
	UE_LOG(LogTemp, Warning, TEXT("GetDesiredEntryPadding, (GetHorizontalEntrySpacing(%f)), (GetVerticalEntrySpacing(%f))"), GetHorizontalEntrySpacing(), GetVerticalEntrySpacing());
	return FMargin(GetHorizontalEntrySpacing() * 0.5f, GetVerticalEntrySpacing() * 0.5f);
}

float ULyraGridView::GetTotalEntryHeight() const
{
	if (IsAligned() && !bEntrySizeIncludesEntrySpacing)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetTotalEntryHeight: %f"), GetVerticalEntrySpacing());
		return EntryHeight + GetVerticalEntrySpacing();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GetTotalEntryHeight: %f"), GetVerticalEntrySpacing());
		return EntryHeight + GetVerticalEntrySpacing() * 0.5;
	}
}

float ULyraGridView::GetTotalEntryWidth() const
{
	if (IsAligned() && !bEntrySizeIncludesEntrySpacing)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetTotalEntryWidth: %f"), GetHorizontalEntrySpacing());
		return EntryWidth + GetHorizontalEntrySpacing();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GetTotalEntryWidth: %f"), GetHorizontalEntrySpacing());
		return EntryWidth + GetHorizontalEntrySpacing() * 0.5;
	}
}

bool ULyraGridView::IsAligned() const
{
	return TileAlignment == EListItemAlignment::LeftAligned
		|| TileAlignment == EListItemAlignment::RightAligned
		|| TileAlignment == EListItemAlignment::CenterAligned;
}
