# Study of Modifications in the Lyra Project to Support an Advanced Inventory System

This study outlines the necessary changes in the **Lyra Project** to implement an advanced inventory system. The layered inventory model is designed for games with frequent transactions, whether in the **Lobby**, **HUD**, or with **NPCs** encountered throughout the game. The goal is to create a **Trade Layer**, enabling players to send and receive items.

The initial aim was to implement this system using **plugins** only, without modifying the base project. However, this was not possible. Some classes need to be exported to the Lyra API (``LYRAGAME_API``), and one of them must declare a friendship with a new ``struct``.

> **Note**: The project is still under development and **not recommended for production**. Key features such as replication and the trade system have yet to be implemented and need further discussion, or possibly a complete system redesign.

## Files to be Modified

```
// File: ..\..\Source\LyraGame\Inventory\LyraInventoryItemInstance.h
class LYRAGAME_API ULyraInventoryItemInstance;
ULyraInventoryItemInstance -> friend struct FInventoryList;

// File: ..\..\Source\LyraGame\Equipment\LyraEquipmentInstance.h
class LYRAGAME_API ULyraEquipmentInstance;

// File: ..\..\Source\LyraGame\Interaction\IInteractableTarget.h
class LYRAGAME_API IInteractableTarget;

// File: ..\..\Source\LyraGame\Inventory\IPickupable.h
class LYRAGAME_API IPickupable;

// File: ..\..\Source\LyraGame\Interaction\Tasks\AbilityTask_WaitForInteractableTargets.h
class LYRAGAME_API UAbilityTask_WaitForInteractableTargets;

// File: ..\..\Source\LyraGame\Interaction\InteractionStatics.h
class LYRAGAME_API UInteractionStatics;

// File: ..\..\Source\LyraGame\Inventory\LyraInventoryItemDefinition.h
class LYRAGAME_API ULyraInventoryItemDefinition;

// File: ..\..\Source\LyraGame\Equipment\LyraEquipmentManagerComponent.h
class LYRAGAME_API ULyraEquipmentManagerComponent;

// File: ..\..\Source\LyraGame\Inventory\InventoryFragment_EquippableItem.h
class LYRAGAME_API UInventoryFragment_EquippableItem;

// File: ..\..\Source\LyraGame\Equipment\LyraEquipmentDefinition.h
class LYRAGAME_API ULyraEquipmentDefinition;

// File: ..\..\Source\LyraGame\Equipment\LyraGameplayAbility_FromEquipment.h
class LYRAGAME_API ULyraGameplayAbility_FromEquipment;

// File: ..\..\Source\LyraGame\AbilitySystem\LyraTaggedActor.h
class LYRAGAME_API ALyraTaggedActor;

// File: ..\..\Source\LyraGame\Cosmetics\LyraControllerComponent_CharacterParts.h
class LYRAGAME_API ULyraControllerComponent_CharacterParts;

// File: ..\..\Source\LyraGame\Cosmetics\LyraPawnComponent_CharacterParts.h
class LYRAGAME_API ULyraPawnComponent_CharacterParts;

// File: ..\..\Source\LyraGame\AbilitySystem\LyraAbilitySet.h
class LYRAGAME_API ULyraAbilitySet;
struct LYRAGAME_API FLyraAbilitySet_GrantedHandles;

// File: ..\..\Source\LyraGame\Weapons\LyraWeaponInstance.h
class LYRAGAME_API ULyraWeaponInstance;
```

# Plugins Based on the Lyra Project

Two plugins were developed based on the Lyra Project for Unreal Engine. After cloning the repository, these two plugins must be removed from the `InventorySystemForLyraProject` folder and moved to the `GameFeatures` folder, along with the other plugins found in `LyraStarterGame\Plugins\GameFeatures`:

- **LyraInteractionManager**: Contains all the C++ code.
- **LyraInteractionManager_TestExperience**: A copy of the Blueprint files from the ShooterCore plugin that comes by default in Lyra.

The **ShooterCore** plugin contains C++ files that manage player health, among other features. Therefore, it's necessary to add ShooterCore dependencies to the **LyraInteractionManager_TestExperience** plugin. Additionally, **ShooterCore** needs to receive dependencies from **LyraInteractionManager** because two new components need to be added.

### Changes to ShooterCore (GameFeatureData)

Add the following components to **ShooterCore**:

### Component 1:
- **Actor Class**: `Controller`
- **Component Class**: `LyraLayersInventoryManagerComponent`

### Component 2:
- **Actor Class**: `LyraCharacter`
- **Component Class**: `LyraLayersEquipmentManagerComponent`

