// Copyright Epic Games, Inc. All Rights Reserved.

#include "Inventory/InventoryFragment_TypesActionsWhenSelectingItem.h"

TArray<UActionsWhenSelectingItem*> UInventoryFragment_TypesActionsWhenSelectingItem::GetTypesActionsWhenSelectingItem(UObject* OwnerObject, UObject* OptionalObject)
{
    TArray<UActionsWhenSelectingItem*> AllObjectsTypeAction;

    for (FTypesActionsWhenSelectingItem TypeAction : TypesActionsWhenSelectingItem)
    {
        TypeAction.OptionalObject = OptionalObject;
        UActionsWhenSelectingItem* ObjectTypeAction = NewObject<UActionsWhenSelectingItem>(OwnerObject);
        ObjectTypeAction->TypesActionsWhenSelectingItem = TypeAction;
        AllObjectsTypeAction.Add(ObjectTypeAction);
    }
    return AllObjectsTypeAction;
}
