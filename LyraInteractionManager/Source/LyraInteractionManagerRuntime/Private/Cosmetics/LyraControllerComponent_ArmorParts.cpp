// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cosmetics/LyraControllerComponent_ArmorParts.h"
#include "Cosmetics/LyraPawnComponent_CharacterParts.h"
#include "AbilitySystem/LyraTaggedActor.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Cosmetic_Armor_Boots, "Cosmetic.Armor.Boots");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Cosmetic_Armor_Breastplate, "Cosmetic.Armor.Breastplate");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Cosmetic_Armor_Helmet, "Cosmetic.Armor.Helmet");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Cosmetic_Armor_Vambrace, "Cosmetic.Armor.Vambrace");

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraControllerComponent_ArmorParts)


void ULyraControllerComponent_ArmorParts::AddCharacterPartCheckTag(const FLyraCharacterPart& NewPart)
{

	UClass* PartClass = NewPart.PartClass;
	if (!PartClass)
	{
		return;
	}

	if (!PartClass->IsChildOf(ALyraTaggedActor::StaticClass()))
	{
		return;
	}

	ALyraTaggedActor* TaggedActor = PartClass->GetDefaultObject<ALyraTaggedActor>();
	if (!TaggedActor)
	{
		return;
	}

	FGameplayTagContainer TagContainer;
	TaggedActor->GetOwnedGameplayTags(TagContainer);

	for (FGameplayTag Tag : TagContainer)
	{
		if (Tag == TAG_Cosmetic_Armor_Boots)
		{
			RemoveCharacterPartByTag(TAG_Cosmetic_Armor_Boots);
			AddCharacterPart(NewPart);
		}
		else if (Tag == TAG_Cosmetic_Armor_Breastplate)
		{
			RemoveCharacterPartByTag(TAG_Cosmetic_Armor_Breastplate);
			AddCharacterPart(NewPart);
		}
		else if (Tag == TAG_Cosmetic_Armor_Helmet)
		{
			RemoveCharacterPartByTag(TAG_Cosmetic_Armor_Helmet);
			AddCharacterPart(NewPart);
		}
		else if (Tag == TAG_Cosmetic_Armor_Vambrace)
		{
			RemoveCharacterPartByTag(TAG_Cosmetic_Armor_Vambrace);
			AddCharacterPart(NewPart);
		}
	}
}

void ULyraControllerComponent_ArmorParts::RemoveCharacterPartByTag(FGameplayTag Tag)
{
	for (auto EntryIt = CharacterParts.CreateIterator(); EntryIt; ++EntryIt)
	{
		FLyraCharacterPart CharacterPart = EntryIt->Part;
		UClass* PartClass = CharacterPart.PartClass;
		if (!PartClass)
		{
			continue;
		}

		if (!PartClass->IsChildOf(ALyraTaggedActor::StaticClass()))
		{
			continue;
		}

		ALyraTaggedActor* TaggedActor = PartClass->GetDefaultObject<ALyraTaggedActor>();
		if (!TaggedActor)
		{
			continue;
		}

		FGameplayTagContainer TagContainer;
		TaggedActor->GetOwnedGameplayTags(TagContainer);

		for (const FGameplayTag& FindTag : TagContainer)
		{
			if (FindTag == Tag)
			{
				if (ULyraPawnComponent_CharacterParts* PawnCustomizer = GetPawnCustomizer())
				{
					PawnCustomizer->RemoveCharacterPart(EntryIt->Handle);
				}

				EntryIt.RemoveCurrent();
				break;
			}
		}
	}
}

ULyraPawnComponent_CharacterParts* ULyraControllerComponent_ArmorParts::GetPawnCustomizer() const
{
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		return ControlledPawn->FindComponentByClass<ULyraPawnComponent_CharacterParts>();
	}
	return nullptr;
}
