// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Cosmetics/LyraControllerComponent_CharacterParts.h"
#include "LyraControllerComponent_ArmorParts.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class ULyraControllerComponent_ArmorParts : public ULyraControllerComponent_CharacterParts
{
	GENERATED_BODY()

public:

	// Adds a character part to the actor that owns this customization component, should be called on the authority only
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Cosmetics)
	void AddCharacterPartCheckTag(const FLyraCharacterPart& NewPart);

	// Removes a previously added character part from the actor that owns this customization component, should be called on the authority only
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Cosmetics)
	void RemoveCharacterPartByTag(FGameplayTag Tag);

protected:

	//@TODO: Was rewritten only because the original is private
	ULyraPawnComponent_CharacterParts* GetPawnCustomizer() const;
	
};
