// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "Widgets/Views/STileView.h"
#include "LyraGridView.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI)
class ULyraGridView : public UListView
{
	GENERATED_BODY()

public:

	ULyraGridView(const FObjectInitializer& ObjectInitializer);
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	/** Sets the height of every tile entry */
	UFUNCTION(BlueprintCallable, Category = TileView)
	void SetEntryHeight(float NewHeight);

	/** Sets the width of every tile entry */
	UFUNCTION(BlueprintCallable, Category = TileView)
	void SetEntryWidth(float NewWidth);

	/** Gets the height of tile entries */
	UFUNCTION(BlueprintPure, Category = TileView)
	float GetEntryHeight() const { return EntryHeight; }

	/** Gets the width of tile entries */
	UFUNCTION(BlueprintPure, Category = TileView)
	float GetEntryWidth() const { return EntryWidth; }

protected:

	virtual TSharedRef<STableViewBase> RebuildListWidget() override;
	virtual FMargin GetDesiredEntryPadding(UObject* Item) const override;

	float GetTotalEntryHeight() const;
	float GetTotalEntryWidth() const;

	/** STileView construction helper - useful if using a custom STileView subclass */
	template <template<typename> class GridViewT = STileView>
	TSharedRef<GridViewT<UObject*>> ConstructTileView()
	{
		FTileViewConstructArgs Args;
		Args.bAllowFocus = bIsFocusable; // 1
		Args.SelectionMode = SelectionMode; // 2
		Args.bClearSelectionOnClick = bClearSelectionOnClick; // 3
		Args.ConsumeMouseWheel = ConsumeMouseWheel; // 4
		Args.bReturnFocusToSelection = bReturnFocusToSelection; // 5
		Args.Orientation = Orientation; // 6
		Args.ScrollBarStyle = &ScrollBarStyle; // 7
		//Args.TileAlignment = TileAlignment; // NOT
		//Args.bWrapDirectionalNavigation = bWrapHorizontalNavigation; // NOT

		//FListViewConstructArgs Args;
		//Args.bAllowFocus = bIsFocusable; 1 ==
		//Args.SelectionMode = SelectionMode; 2 ==
		//Args.bClearSelectionOnClick = bClearSelectionOnClick; 3 ==
		//Args.ConsumeMouseWheel = ConsumeMouseWheel; 4 ==
		//Args.bReturnFocusToSelection = bReturnFocusToSelection; 5 ==
		//Args.Orientation = Orientation; 6 ==
		//Args.ScrollBarStyle = &ScrollBarStyle; 7 ==
		Args.ListViewStyle = &WidgetStyle;  // NOT


		if (IsAligned() && !bEntrySizeIncludesEntrySpacing)
		{
			// This tells the underlying ListView to expect entries with the final width/height equal to EntryWidth/EntryHeight + spacing
			// It allows the entry widget to always occupy the entire EntryWidth/EntryHeight.
			//Args.EntryWidth = GetTotalEntryWidth();
			//Args.EntryHeight = GetTotalEntryHeight();
		}
		else
		{
			// This tells the underlying ListView to expect entries with the final width/height equal to EntryWidth/EntryHeight.
			// It forces the entry widget size to adjust so that the summation of entry widget width/height and spacing does not exceed EntryWidth/EntryHeight.
			//Args.EntryWidth = EntryWidth;
			//Args.EntryHeight = EntryHeight;
		}

		MyListView = MyTileView = ITypedUMGListView<UObject*>::ConstructTileView<GridViewT>(this, ListItems, Args);
		MyTileView->SetOnEntryInitialized(SListView<UObject*>::FOnEntryInitialized::CreateUObject(this, &ULyraGridView::HandleOnEntryInitializedInternal));
		return StaticCastSharedRef<GridViewT<UObject*>>(MyTileView.ToSharedRef());
	}

private:
	/** Returns whether the TileView is left, right or center aligned. */
	UFUNCTION()
	bool IsAligned() const;

protected:

	/** The height of each tile */
	UPROPERTY(EditAnywhere, Category = ListEntries)
	float EntryHeight = 128.f;

	/** The width of each tile */
	UPROPERTY(EditAnywhere, Category = ListEntries)
	float EntryWidth = 128.f;

	/** The method by which to align the tile entries in the available space for the tile view */
	UPROPERTY(EditAnywhere, Category = ListEntries)
	EListItemAlignment TileAlignment;

	/** True to allow left/right navigation to wrap back to the tile on the opposite edge */
	UPROPERTY(EditAnywhere, Category = Navigation)
	bool bWrapHorizontalNavigation = false;

	TSharedPtr<STileView<UObject*>> MyTileView;

private:
	/**
	 * True if entry dimensions should be the sum of the entry widget dimensions and the spacing.
	 * This means the size of the entry widget will be adjusted so that the summation of the widget size and entry spacing always equals entry size.
	 */
	UPROPERTY(EditAnywhere, Category = ListEntries, meta = (EditCondition = "IsAligned"))
	bool bEntrySizeIncludesEntrySpacing = true;
};
