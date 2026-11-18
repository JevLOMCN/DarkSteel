// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 239

// Alt'' @ 1410af880

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerInputModifier::Alt__(void)

{
  FGameplayDebuggerInputModifier::Alt.bReleased = 0;
  FGameplayDebuggerInputModifier::Alt.bPressed = 1;
  FGameplayDebuggerInputModifier::Alt.bCmd = 0;
  FGameplayDebuggerInputModifier::Alt.bAlt = 1;
  FGameplayDebuggerInputModifier::Alt.bCtrl = 0;
  FGameplayDebuggerInputModifier::Alt.bShift = 0;
  return;
}

// Cmd'' @ 1410af8a0

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerInputModifier::Cmd__(void)

{
  FGameplayDebuggerInputModifier::Cmd.bReleased = 0;
  FGameplayDebuggerInputModifier::Cmd.bPressed = 1;
  FGameplayDebuggerInputModifier::Cmd.bCmd = 1;
  FGameplayDebuggerInputModifier::Cmd.bAlt = 0;
  FGameplayDebuggerInputModifier::Cmd.bCtrl = 0;
  FGameplayDebuggerInputModifier::Cmd.bShift = 0;
  return;
}

// Ctrl'' @ 1410af8c0

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerInputModifier::Ctrl__(void)

{
  FGameplayDebuggerInputModifier::Ctrl.bReleased = 0;
  FGameplayDebuggerInputModifier::Ctrl.bPressed = 1;
  FGameplayDebuggerInputModifier::Ctrl.bCmd = 0;
  FGameplayDebuggerInputModifier::Ctrl.bAlt = 0;
  FGameplayDebuggerInputModifier::Ctrl.bCtrl = 1;
  FGameplayDebuggerInputModifier::Ctrl.bShift = 0;
  return;
}

// EnableCategoryNameCmd'' @ 1410af8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::EnableCategoryNameCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::EnableCategoryName;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"gdt.EnableCategoryName",
                      L"Enables/disables categories matching given substring. Use: gdt.EnableCategoryName <CategoryNamePart> [Enable]"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::EnableCategoryNameCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::EnableCategoryNameCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::EnableCategoryNameCmd__);
  return;
}

// EnableDebuggerCmd'' @ 1410afa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::EnableDebuggerCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::EnableGameplayDebugger;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"gdt.Enable",L"Enable Gameplay Debugger Tool",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::EnableDebuggerCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::EnableDebuggerCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::EnableDebuggerCmd__);
  return;
}

// LegacyEnableDebuggerCmd'' @ 1410afc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::LegacyEnableDebuggerCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::ToggleGameplayDebugger;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"EnableGDT",L"Toggles Gameplay Debugger Tool",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::LegacyEnableDebuggerCmd,pIVar5
            );
  FGameplayDebuggerConsoleCommands::LegacyEnableDebuggerCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::LegacyEnableDebuggerCmd__
        );
  return;
}

// None'' @ 1410afdc0

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerInputModifier::None__(void)

{
  FGameplayDebuggerInputModifier::None.bReleased = 0;
  FGameplayDebuggerInputModifier::None.bPressed = 1;
  FGameplayDebuggerInputModifier::None.bCmd = 0;
  FGameplayDebuggerInputModifier::None.bAlt = 0;
  FGameplayDebuggerInputModifier::None.bCtrl = 0;
  FGameplayDebuggerInputModifier::None.bShift = 0;
  return;
}

// NotifyDebuggerOwnerChange'' @ 1410afde0

void __cdecl
`dynamic_initializer_for_'AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange__(void)

{
  atexit(`dynamic_atexit_destructor_for_'AGameplayDebuggerCategoryReplicator::
         NotifyDebuggerOwnerChange__);
  return;
}

// OnLocalControllerInitialized'' @ 1410afe00

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerModule::OnLocalControllerInitialized__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerModule::OnLocalControllerInitialized__);
  return;
}

// OnLocalControllerUninitialized'' @ 1410afe20

void __cdecl
`dynamic_initializer_for_'FGameplayDebuggerModule::OnLocalControllerUninitialized__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerModule::OnLocalControllerUninitialized__);
  return;
}

// SelectLocalPlayerCmd'' @ 1410afe40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::SelectLocalPlayerCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::SelectLocalPlayer;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"gdt.SelectLocalPlayer",
                      L"Selects the local player for debugging",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SelectLocalPlayerCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::SelectLocalPlayerCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SelectLocalPlayerCmd__);
  return;
}

// SelectNextRowCmd'' @ 1410affe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::SelectNextRowCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::SelectNextRow;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"gdt.SelectNextRow",L"Selects next row",&local_58,
                      0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SelectNextRowCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::SelectNextRowCmd._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SelectNextRowCmd__);
  return;
}

// SelectPreviousRowCmd'' @ 1410b0180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::SelectPreviousRowCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::SelectPreviousRow;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"gdt.SelectPreviousRow",L"Selects previous row",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SelectPreviousRowCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::SelectPreviousRowCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SelectPreviousRowCmd__);
  return;
}

// SetFontSizeCmd'' @ 1410b0320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::SetFontSizeCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::SetFontSize;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"gdt.fontsize",
                      L"Configures gameplay debugger\'s font size. Usage: gdt.fontsize <fontSize> (default = 10)"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SetFontSizeCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::SetFontSizeCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SetFontSizeCmd__);
  return;
}

// Shift'' @ 1410b04c0

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerInputModifier::Shift__(void)

{
  FGameplayDebuggerInputModifier::Shift.bReleased = 0;
  FGameplayDebuggerInputModifier::Shift.bPressed = 1;
  FGameplayDebuggerInputModifier::Shift.bCmd = 0;
  FGameplayDebuggerInputModifier::Shift.bAlt = 0;
  FGameplayDebuggerInputModifier::Shift.bCtrl = 0;
  FGameplayDebuggerInputModifier::Shift.bShift = 1;
  return;
}

// ToggleCategoryCmd'' @ 1410b04e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::ToggleCategoryCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::ToggleCategory;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"gdt.ToggleCategory",
                      L"Toggles specific category index",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::ToggleCategoryCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::ToggleCategoryCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::ToggleCategoryCmd__);
  return;
}

// ToggleDebuggerCmd'' @ 1410b0680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FGameplayDebuggerConsoleCommands::ToggleDebuggerCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = FGameplayDebuggerConsoleCommands::ToggleGameplayDebugger;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"gdt.Toggle",L"Toggles Gameplay Debugger Tool",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::ToggleDebuggerCmd,pIVar5);
  FGameplayDebuggerConsoleCommands::ToggleDebuggerCmd._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::ToggleDebuggerCmd__);
  return;
}

// `dynamic_initializer_for_'CVarAutoCreateGameplayDebuggerManager'' @ 1410b0820

void __cdecl _dynamic_initializer_for__CVarAutoCreateGameplayDebuggerManager__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutoCreateGameplayDebuggerManager,
             L"GameplayDebugger.AutoCreateGameplayDebuggerManager",
             &bAutoCreateGameplayDebuggerManager,
             L"When false it stops auto-spawning the Gameplay Debugger Manager.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAutoCreateGameplayDebuggerManager__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayDebuggerRepDetails'' @ 1410b0870

void __cdecl _dynamic_initializer_for__CVarGameplayDebuggerRepDetails__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGameplayDebuggerRepDetails,L"ai.debug.DetailedReplicationLogs",local_res8,
             L"Enable or disable very verbose replication logs for gameplay debugger",1);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayDebuggerRepDetails__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabled'' @ 1410b08c0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabled__(void)

{
  ::FString::FString(&ColorNameDisabled,L"grey");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameDisabledActiveRow'' @ 1410b08f0

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameDisabledActiveRow__(void)

{
  ::FString::FString(&ColorNameDisabledActiveRow,L"black");
  atexit(_dynamic_atexit_destructor_for__ColorNameDisabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabled'' @ 1410b0920

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabled__(void)

{
  ::FString::FString(&ColorNameEnabled,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabled__);
  return;
}

// `dynamic_initializer_for_'ColorNameEnabledActiveRow'' @ 1410b0950

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameEnabledActiveRow__(void)

{
  ::FString::FString(&ColorNameEnabledActiveRow,L"green");
  atexit(_dynamic_atexit_destructor_for__ColorNameEnabledActiveRow__);
  return;
}

// `dynamic_initializer_for_'ColorNameInput'' @ 1410b0980

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__ColorNameInput__(void)

{
  ::FString::FString(&ColorNameInput,L"white");
  atexit(_dynamic_atexit_destructor_for__ColorNameInput__);
  return;
}

// `dynamic_initializer_for_'LogGameplayDebug'' @ 1410b09b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameplayDebug__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGameplayDebug,L"LogGameplayDebug",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameplayDebug__);
  return;
}

// `dynamic_initializer_for_'LogGameplayDebugReplication'' @ 1410b09f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameplayDebugReplication__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGameplayDebugReplication,L"LogGameplayDebugReplication",Display
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogGameplayDebugReplication__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGameplayDebugger'' @ 1410b0a30

void __cdecl _dynamic_initializer_for__ModuleRegistrantGameplayDebugger__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GameplayDebugger";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GameplayDebugger",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGameplayDebuggerModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket'' @ 1410b0a80

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket__(void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket,
               L"ClientDataPackPacket");
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint'' @ 1410b0aa0

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint__(void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint,
               L"ServerResetViewPoint");
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent'' @ 1410b0ac0

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent__
          (void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent,
               L"ServerSendCategoryInputEvent");
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent'' @ 1410b0ae0

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent__
          (void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent,
               L"ServerSendExtensionInputEvent");
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled'' @ 1410b0b00

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled__(void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled,
               L"ServerSetCategoryEnabled");
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor'' @ 1410b0b20

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor__(void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor,L"ServerSetDebugActor")
  ;
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled'' @ 1410b0b40

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled__(void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled,L"ServerSetEnabled");
  return;
}

// `dynamic_initializer_for_'NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint'' @ 1410b0b60

void __cdecl
_dynamic_initializer_for__NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint__(void)

{
  FName::FName(&NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint,L"ServerSetViewPoint");
  return;
}

// `dynamic_initializer_for_'Separator'' @ 1410b0b80

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__Separator__(void)

{
  ::FString::FString(&Separator,L"{white} | ");
  atexit(_dynamic_atexit_destructor_for__Separator__);
  return;
}

// `dynamic_initializer_for_'SeparatorSpace'' @ 1410b0bb0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_initializer_for__SeparatorSpace__(void)

{
  ::FString::FString(&SeparatorSpace,L"  ");
  atexit(_dynamic_atexit_destructor_for__SeparatorSpace__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h__Script_GameplayDebugger_3081333003'' @ 1410b0be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h__Script_GameplayDebugger_3081333003__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayDebugger",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h__Script_GameplayDebugger_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h__Script_GameplayDebugger_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h__Script_GameplayDebugger_356042680'' @ 1410b0c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h__Script_GameplayDebugger_356042680__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayDebugger",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h__Script_GameplayDebugger_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h__Script_GameplayDebugger_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h__Script_GameplayDebugger_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h__Script_GameplayDebugger_3630178193'' @ 1410b0c80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h__Script_GameplayDebugger_3630178193__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayDebugger",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h__Script_GameplayDebugger_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h__Script_GameplayDebugger_2041249787'' @ 1410b0cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h__Script_GameplayDebugger_2041249787__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayDebugger",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h__Script_GameplayDebugger_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h__Script_GameplayDebugger_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h__Script_GameplayDebugger_993808758'' @ 1410b0d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h__Script_GameplayDebugger_993808758__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayDebugger",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h__Script_GameplayDebugger_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h__Script_GameplayDebugger_1407640985'' @ 1410b0d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h__Script_GameplayDebugger_1407640985__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayDebugger",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h__Script_GameplayDebugger_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h__Script_GameplayDebugger_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GameplayDebugger'' @ 1410b0da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GameplayDebugger__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc686b1c0;
  local_res8[0].DeclarationsHash = 0x449f1748;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GameplayDebugger,L"/Script/GameplayDebugger",
             &Z_Registration_Info_UPackage__Script_GameplayDebugger,local_res8);
  return;
}

// Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape @ 146d37400

UEnum * __cdecl Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape(void)

{
  if (Z_Registration_Info_UEnum_EGameplayDebuggerShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayDebuggerShape.InnerSingleton,
               &Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayDebuggerShape.InnerSingleton;
}

// EGameplayDebuggerShape_StaticEnum @ 146d37440

UEnum * __cdecl EGameplayDebuggerShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape,(UObject *)pUVar1,
                       L"EGameplayDebuggerShape");
  }
  return Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton;
}

// Z_Construct_UClass_AGameplayDebuggerCategoryReplicator @ 146d37480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameplayDebuggerCategoryReplicator(void)

{
  if (Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton,
               &Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData @ 146d374c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader @ 146d37540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackHeader.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackHeader.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackHeader.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackHeader.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams @ 146d375c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackRPCParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackRPCParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackRPCParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerDataPackRPCParams.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor @ 146d37640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerDebugActor.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerNetPack @ 146d376c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerNetPack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerNetPack.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerShape @ 146d37740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerShape(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync @ 146d377c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerVisLogSync.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerVisLogSync.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerVisLogSync.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerVisLogSync.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 146d37840

void * __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerDataPackRPCParams,&UE::CoreUObject::Private::Construct<FGameplayDebuggerDataPackRPCParams>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerDataPackRPCParams>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerDataPackRPCParams>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerDataPackRPCParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146d37880

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerShape,&UE::CoreUObject::Private::Construct<FGameplayDebuggerShape>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerShape>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerShape>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerShape>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsCompressed_SetBit @ 146d378c0

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewProp_bIsCompressed_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 1;
  return;
}

// NewStructOps @ 146d378d0

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerDataPackHeader,&UE::CoreUObject::Private::Construct<FGameplayDebuggerDataPackHeader>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerDataPackHeader>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerDataPackHeader>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerDataPackHeader>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsEnabled_SetBit @ 146d37910

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewStructOps @ 146d37920

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerCategoryData,&UE::CoreUObject::Private::Construct<FGameplayDebuggerCategoryData>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerCategoryData>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerCategoryData>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerCategoryData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister @ 146d37960

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerLocalController",
               &Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton,
               UGameplayDebuggerLocalController::
               StaticRegisterNativesUGameplayDebuggerLocalController,0x148,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerLocalController>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerLocalController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton;
}

// NewStructOps @ 146d37ac0

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerNetPack,&UE::CoreUObject::Private::Construct<FGameplayDebuggerNetPack>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerNetPack>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerNetPack>,&UE::CoreUObject::Private::NetDeltaSerialize<FGameplayDebuggerNetPack>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerNetPack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146d37b00

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerDebugActor,&UE::CoreUObject::Private::Construct<FGameplayDebuggerDebugActor>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerDebugActor>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerDebugActor>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerDebugActor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146d37b40

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerVisLogSync,&UE::CoreUObject::Private::Construct<FGameplayDebuggerVisLogSync>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerVisLogSync>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerVisLogSync>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerVisLogSync>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket @ 146d37ca0

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData @ 146d37ce0

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint @ 146d37d20

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent @ 146d37d60

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent @ 146d37da0

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 146d37de0

void __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::
NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UPackage__Script_GameplayDebugger @ 146d37e20

UPackage * __cdecl Z_Construct_UPackage__Script_GameplayDebugger(void)

{
  if (Z_Registration_Info_UPackage__Script_GameplayDebugger.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GameplayDebugger.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_GameplayDebugger.OuterSingleton;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled @ 146d37ee0

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSelectInEditor_SetBit @ 146d37fd0

void __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::
NewProp_bSelectInEditor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor @ 146d387f0

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 146d38830

void __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::
NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled @ 146d38840

UFunction * __cdecl Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint @ 146d38880

UFunction * __cdecl
Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 146d388c0

void __cdecl
Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c8) = 1;
  return;
}

// Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister @ 146d38b30

UClass * __cdecl Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerCategoryReplicator",
               &Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton,
               AGameplayDebuggerCategoryReplicator::
               StaticRegisterNativesAGameplayDebuggerCategoryReplicator,0x380,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayDebuggerCategoryReplicator>,
               InternalVTableHelperCtorCaller<AGameplayDebuggerCategoryReplicator>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.InnerSingleton;
}

// `scalar_deleting_destructor' @ 146d38d00

void * __thiscall
FGameplayDebuggerModule::_scalar_deleting_destructor_(FGameplayDebuggerModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->PlayerManagers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlayerManagers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlayerManagers);
  FGameplayDebuggerAddonManager::~FGameplayDebuggerAddonManager(&this->AddonManager);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// Z_Construct_UClass_UGameplayDebuggerConfig @ 146d38f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerConfig(void)

{
  if (Z_Registration_Info_UClass_UGameplayDebuggerConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayDebuggerConfig.OuterSingleton,
               &Z_Construct_UClass_UGameplayDebuggerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerConfig.OuterSingleton;
}

// Z_Construct_UClass_UGameplayDebuggerUserSettings @ 146d38f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerUserSettings(void)

{
  if (Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.OuterSingleton,
               &Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.OuterSingleton;
}

// Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode @ 146d38fa0

UEnum * __cdecl Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode(void)

{
  if (Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.InnerSingleton,
               &Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig @ 146d38fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig @ 146d39060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerExtensionConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerExtensionConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerExtensionConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerExtensionConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig @ 146d390e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerInputConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerInputConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerInputConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerInputConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EGameplayDebuggerOverrideMode_StaticEnum @ 146d39160

UEnum * __cdecl EGameplayDebuggerOverrideMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode,
                       (UObject *)pUVar1,L"EGameplayDebuggerOverrideMode");
  }
  return Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton;
}

// NewProp_bModShift_SetBit @ 146d391a0

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewProp_bModCtrl_SetBit @ 146d391b0

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 2;
  return;
}

// NewProp_bModAlt_SetBit @ 146d391c0

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 4;
  return;
}

// NewProp_bModCmd_SetBit @ 146d391d0

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) | 8;
  return;
}

// NewStructOps @ 146d391e0

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerInputConfig,&UE::CoreUObject::Private::Construct<FGameplayDebuggerInputConfig>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerInputConfig>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerInputConfig>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerInputConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister @ 146d392e0

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerRenderingComponent",
               &Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton,
               UGameplayDebuggerRenderingComponent::
               StaticRegisterNativesUGameplayDebuggerRenderingComponent,0x630,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerRenderingComponent>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.InnerSingleton;
}

// NewProp_bOverrideSlotIdx_SetBit @ 146d393a0

void __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  return;
}

// NewStructOps @ 146d393b0

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerCategoryConfig,&UE::CoreUObject::Private::Construct<FGameplayDebuggerCategoryConfig>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerCategoryConfig>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerCategoryConfig>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerCategoryConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146d393f0

void * __cdecl
Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerExtensionConfig,&UE::CoreUObject::Private::Construct<FGameplayDebuggerExtensionConfig>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerExtensionConfig>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerExtensionConfig>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerExtensionConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDebugCanvasEnableTextShadow_SetBit @ 146d39430

void __cdecl
Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x170) = 1;
  return;
}

// NewProp_bEnableGameplayDebuggerInEditor_SetBit @ 146d397e0

void __cdecl
Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::
NewProp_bEnableGameplayDebuggerInEditor_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// Z_Construct_UClass_AGameplayDebuggerPlayerManager @ 146d39a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameplayDebuggerPlayerManager(void)

{
  if (Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton,
               &Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData @ 146d39a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerPlayerData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayDebuggerPlayerData.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerPlayerData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayDebuggerPlayerData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 146d39af0

void * __cdecl Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayDebuggerPlayerData,&UE::CoreUObject::Private::Construct<FGameplayDebuggerPlayerData>,&UE::CoreUObject::Private::ConstructForTests<FGameplayDebuggerPlayerData>,&UE::CoreUObject::Private::Destruct<FGameplayDebuggerPlayerData>,&UE::CoreUObject::Private::Copy<FGameplayDebuggerPlayerData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGameplayDebuggerLocalController @ 146d39c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerLocalController(void)

{
  if (Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton,
               &Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton;
}

// Z_Construct_UClass_UGameplayDebuggerRenderingComponent @ 146d39cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerRenderingComponent(void)

{
  if (Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.OuterSingleton,
               &Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.OuterSingleton;
}

// Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister @ 146d39e80

UClass * __cdecl Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerPlayerManager",
               &Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton,
               AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager,
               0x2f0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayDebuggerPlayerManager>,
               InternalVTableHelperCtorCaller<AGameplayDebuggerPlayerManager>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.InnerSingleton;
}

// `scalar_deleting_destructor' @ 146d3a060

void * __thiscall
IGameplayDebugger::_scalar_deleting_destructor_(IGameplayDebugger *this,uint param_1)

{
  *this = (IGameplayDebugger)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> @ 146d3a430

FArchive * __cdecl
operator<<<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FGameplayDebuggerShape *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FGameplayDebuggerShape,int>
                ((FGameplayDebuggerShape *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x66667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              operator<<(param_1,(FGameplayDebuggerShape *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FGameplayDebuggerShape *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<FGameplayDebuggerShape,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CastChecked<ADebugCameraController,AActor> @ 146d3bda0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADebugCameraController * __cdecl
CastChecked<ADebugCameraController,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ADebugCameraController *)0x0;
    }
    pFVar3 = GetTypeName<ADebugCameraController>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ADebugCameraController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ADebugCameraController *)param_1;
  }
  pFVar3 = GetTypeName<ADebugCameraController>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AGameplayDebuggerPlayerManager,AActor> @ 146d3be80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameplayDebuggerPlayerManager * __cdecl
CastChecked<AGameplayDebuggerPlayerManager,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AGameplayDebuggerPlayerManager *)0x0;
    }
    pFVar3 = GetTypeName<AGameplayDebuggerPlayerManager>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AGameplayDebuggerPlayerManager::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AGameplayDebuggerPlayerManager *)param_1;
  }
  pFVar3 = GetTypeName<AGameplayDebuggerPlayerManager>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<APawn,AActor> @ 146d3bf60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APawn * __cdecl CastChecked<APawn,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<APawn>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APawn *)param_1;
  }
  pFVar3 = GetTypeName<APawn>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FNetFastCategoryBaseState::FCategoryState,int> @ 146d3c020

bool __cdecl
CompareItems<FNetFastCategoryBaseState::FCategoryState,int>
          (FCategoryState *param_1,FCategoryState *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = &param_2->ShapesRepCounter;
    piVar2 = &param_1->ShapesRepCounter;
    do {
      if ((((((FCategoryState *)(piVar2 + -1))->TextLinesRepCounter !=
             *(int *)((longlong)piVar2 + (longlong)param_2 + (-4 - (longlong)param_1))) ||
           (*piVar2 != *piVar3)) || (piVar2[3] != piVar3[3])) ||
         (bVar1 = CompareItems<FNetFastCategoryBaseState::FDataPackState,int>
                            ((FDataPackState *)
                             (((TArray<FNetFastCategoryBaseState::FDataPackState,TSizedDefaultAllocator<32>_>
                                *)(piVar2 + 1))->AllocatorInstance).Data,
                             (FDataPackState *)
                             (((TArray<FNetFastCategoryBaseState::FDataPackState,TSizedDefaultAllocator<32>_>
                                *)(piVar3 + 1))->AllocatorInstance).Data,piVar2[3]), !bVar1)) {
        return false;
      }
      piVar3 = piVar3 + 6;
      piVar2 = piVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FNetFastCategoryBaseState::FDataPackState,int> @ 146d3c0b0

bool __cdecl
CompareItems<FNetFastCategoryBaseState::FDataPackState,int>
          (FDataPackState *param_1,FDataPackState *param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  
  if (param_3 != 0) {
    psVar2 = &param_2->SyncCounter;
    psVar1 = &param_1->SyncCounter;
    do {
      if (((((FDataPackState *)(psVar1 + -3))->DataOffset !=
            *(int *)((longlong)param_2 + (-6 - (longlong)param_1) + (longlong)psVar1)) ||
          (psVar1[-1] != psVar2[-1])) || (*psVar1 != *psVar2)) {
        return false;
      }
      psVar1 = psVar1 + 4;
      psVar2 = psVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FGameplayDebuggerShape,int> @ 146d3c100

bool __cdecl
CompareItems<FGameplayDebuggerShape,int>
          (FGameplayDebuggerShape *param_1,FGameplayDebuggerShape *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  FColor_u_0 *pFVar3;
  FColor_u_0 *pFVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    pFVar4 = &(param_2->Color).field0_0x0;
    pFVar3 = &(param_1->Color).field0_0x0;
    do {
      if (pFVar3[1]._s_0.B != pFVar4[1]._s_0.B) {
        return false;
      }
      if (pFVar3->Bits != pFVar4->Bits) {
        return false;
      }
      uVar1 = pFVar3[-2].Bits;
      if (uVar1 == pFVar4[-2].Bits) {
        if (1 < (int)uVar1) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar3 + -4),*(wchar_t **)(pFVar4 + -4));
          bVar5 = iVar2 == 0;
          goto LAB_146d3c164;
        }
      }
      else {
        bVar5 = uVar1 + pFVar4[-2].Bits == 1;
LAB_146d3c164:
        if (!bVar5) {
          return false;
        }
      }
      if ((pFVar3[-6].Bits != pFVar4[-6].Bits) ||
         (bVar5 = CompareItems<UE::Math::TVector<double>,int>
                            (*(TVector<double> **)(pFVar3 + -8),
                             *(TVector<double> **)
                              ((longlong)pFVar3 + (longlong)param_2 + (-0x20 - (longlong)param_1)),
                             pFVar3[-6].Bits), !bVar5)) {
        return false;
      }
      pFVar4 = pFVar4 + 10;
      pFVar3 = pFVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FGameplayDebuggerCategoryData,FGameplayDebuggerCategoryData,int> @ 146d3c1c0

void __cdecl
ConstructItems<FGameplayDebuggerCategoryData,FGameplayDebuggerCategoryData,int>
          (void *param_1,FGameplayDebuggerCategoryData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FString *pFVar4;
  FGameplayDebuggerShape *pFVar5;
  void *_Src;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x20);
    piVar7 = &(param_2->Shapes).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar6 + -6);
      *(undefined8 *)((longlong)piVar7 + (longlong)param_1 + (-0x20 - (longlong)param_2)) =
           *(undefined8 *)(piVar7 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-4];
      pFVar4 = *(FString **)(piVar7 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,pFVar1,iVar3,piVar6 + -3);
        ConstructItems<FString,FString,int>(pFVar1->Data,pFVar4,iVar3);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar7;
      pFVar5 = (FGameplayDebuggerShape *)
               (((TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
               AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        ConstructItems<FGameplayDebuggerShape,FGameplayDebuggerShape,int>
                  (((ForAnyElementType *)(piVar6 + -2))->Data,pFVar5,iVar3);
      }
      piVar6[2] = 0;
      piVar6[3] = 0;
      iVar3 = piVar7[4];
      _Src = *(void **)(piVar7 + 2);
      piVar6[4] = iVar3;
      if (iVar3 == 0) {
        piVar6[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,0,(ForAnyElementType *)(piVar6 + 2),iVar3,piVar6 + 5);
        memcpy(((ForAnyElementType *)(piVar6 + 2))->Data,_Src,(longlong)iVar3 << 4);
      }
      piVar2 = piVar7 + 6;
      piVar7 = piVar7 + 0x10;
      *(char *)(piVar6 + 6) = (char)*piVar2;
      piVar6 = piVar6 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FGameplayDebuggerInputConfig,FGameplayDebuggerInputConfig,int> @ 146d3c350

void __cdecl
ConstructItems<FGameplayDebuggerInputConfig,FGameplayDebuggerInputConfig,int>
          (void *param_1,FGameplayDebuggerInputConfig *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (uint *)((longlong)param_1 + 0x28);
    puVar4 = (uint *)&param_2->field_0x28;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x28 - (longlong)param_2) + (longlong)puVar4),
                       (FString *)(puVar4 + -10));
      *(undefined8 *)(puVar5 + -6) = *(undefined8 *)(puVar4 + -6);
      *(undefined8 *)(puVar5 + -4) = *(undefined8 *)(puVar4 + -4);
      lVar2 = *(longlong *)(puVar4 + -2);
      *(longlong *)(puVar5 + -2) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      uVar3 = (*puVar5 ^ *puVar4) & 1 ^ *puVar5;
      *puVar5 = uVar3;
      uVar3 = (uVar3 ^ *puVar4) & 2 ^ uVar3;
      *puVar5 = uVar3;
      uVar3 = (uVar3 ^ *puVar4) & 4 ^ uVar3;
      *puVar5 = uVar3;
      uVar1 = *puVar4;
      puVar4 = puVar4 + 0xc;
      *puVar5 = (uVar3 ^ uVar1) & 8 ^ uVar3;
      puVar5 = puVar5 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FGameplayDebuggerShape,FGameplayDebuggerShape,int> @ 146d3c410

void __cdecl
ConstructItems<FGameplayDebuggerShape,FGameplayDebuggerShape,int>
          (void *param_1,FGameplayDebuggerShape *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FColor *pFVar3;
  int *piVar4;
  longlong lVar5;
  FString *pFVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    pFVar6 = &param_2->Description;
    lVar5 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)pFVar6 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)pFVar6 + lVar5);
      iVar2 = (((FGameplayDebuggerShape *)(pFVar6 + -1))->ShapeData).ArrayNum;
      _Src = (((FGameplayDebuggerShape *)(pFVar6 + -1))->ShapeData).AllocatorInstance.Data;
      piVar4[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,pFVar1,iVar2,piVar4);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x18);
      }
      FString::FString((FString *)(piVar4 + 1),pFVar6);
      *(FColor_u_0 *)(piVar4 + 5) = *(FColor_u_0 *)(pFVar6 + 1);
      pFVar3 = (FColor *)(pFVar6 + 1);
      pFVar6 = (FString *)((longlong)(pFVar6 + 2) + 8);
      *(EGameplayDebuggerShape *)(piVar4 + 6) = *(EGameplayDebuggerShape *)(pFVar3 + 1);
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FNetFastCategoryBaseState::FCategoryState,int> @ 146d3c710

void __cdecl
DefaultConstructItems<FNetFastCategoryBaseState::FCategoryState,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNetFastCategoryBaseState::FDataPackState,int> @ 146d3c740

void __cdecl
DefaultConstructItems<FNetFastCategoryBaseState::FDataPackState,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 6;
    do {
      *(undefined8 *)(lVar1 + -6) = 0;
      lVar1 = lVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGameplayDebuggerCategoryData,int> @ 146d3c770

void __cdecl DefaultConstructItems<FGameplayDebuggerCategoryData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGameplayDebuggerDataPackHeader,int> @ 146d3c7b0

void __cdecl DefaultConstructItems<FGameplayDebuggerDataPackHeader,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffffe;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGameplayDebuggerShape,int> @ 146d3c7e0

void __cdecl DefaultConstructItems<FGameplayDebuggerShape,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined1 *)(lVar1 + 0x18) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetFastCategoryBaseState::FCategoryState,int> @ 146d3c8e0

void __cdecl
DestructItems<FNetFastCategoryBaseState::FCategoryState,int>(FCategoryState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DataPackStates).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FCategoryState *)(&param_1->DataPackStates + 1);
  }
  return;
}

// DestructItems<FGameplayDebuggerCategoryConfig,int> @ 146d3c920

void __cdecl
DestructItems<FGameplayDebuggerCategoryConfig,int>
          (FGameplayDebuggerCategoryConfig *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InputHandlers;
    do {
      DestructItems<FGameplayDebuggerInputConfig,int>
                ((FGameplayDebuggerInputConfig *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FGameplayDebuggerCategoryConfig *)(pTVar2 + -2))->CategoryName).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayDebuggerCategoryData,int> @ 146d3c980

void __cdecl
DestructItems<FGameplayDebuggerCategoryData,int>(FGameplayDebuggerCategoryData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FGameplayDebuggerShape,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Shapes;
    do {
      pFVar1 = (((TArray<FGameplayDebuggerDataPackHeader,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1)
                )->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FGameplayDebuggerShape,int>
                ((FGameplayDebuggerShape *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>
                ((FString *)
                 (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance)
                 .Data,((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayDebuggerDataPack,int> @ 146d3c9f0

void __cdecl
DestructItems<FGameplayDebuggerDataPack,int>(FGameplayDebuggerDataPack *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->SerializeDelegate;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -1);
      if (*(void **)&this[-1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-1].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -1));
      if (*(void **)(this + -3) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -3));
      }
      this = this + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayDebuggerExtensionConfig,int> @ 146d3ca80

void __cdecl
DestructItems<FGameplayDebuggerExtensionConfig,int>
          (FGameplayDebuggerExtensionConfig *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InputHandlers;
    do {
      DestructItems<FGameplayDebuggerInputConfig,int>
                ((FGameplayDebuggerInputConfig *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      pTVar2 = (TArray<FGameplayDebuggerInputConfig,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayDebuggerInputConfig,int> @ 146d3cae0

void __cdecl
DestructItems<FGameplayDebuggerInputConfig,int>(FGameplayDebuggerInputConfig *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController);
    pFVar1 = (param_1->ConfigName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FGameplayDebuggerInputHandler,int> @ 146d3cb30

void __cdecl
DestructItems<FGameplayDebuggerInputHandler,int>(FGameplayDebuggerInputHandler *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayDebuggerShape,int> @ 146d3cb80

void __cdecl DestructItems<FGameplayDebuggerShape,int>(FGameplayDebuggerShape *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Description).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ShapeData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FInputKeyBinding,int> @ 146d3cbd0

void __cdecl DestructItems<FInputKeyBinding,int>(FInputKeyBinding *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->KeyDelegate).FuncDelegateWithKey.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-5].ReferenceController);
      pFVar1 = pFVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTaggedStringParser::FNode,int> @ 146d3cc30

void __cdecl DestructItems<FTaggedStringParser::FNode,int>(FNode *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->String).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int> @ 146d3cc70

void __cdecl
DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int>
          (TSharedRef<FGameplayDebuggerCategory,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FGameplayDebuggerExtension,1>,int> @ 146d3ccb0

void __cdecl
DestructItems<TSharedRef<FGameplayDebuggerExtension,1>,int>
          (TSharedRef<FGameplayDebuggerExtension,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindLastByPredicate<`AGameplayDebuggerCategoryReplicator::ClientDataPackPacket_Implementation'::__l2::<lambda_1>_> @ 146d3d4f0

int __thiscall
TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_AGameplayDebuggerCategoryReplicator::ClientDataPackPacket_Implementation_::__l2::<lambda_1>_>
          (TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar2 + (longlong)param_2 * 0x10;
  do {
    if (pFVar6 == pFVar2) {
      return -1;
    }
    pFVar1 = pFVar6 + -0x10;
    pFVar6 = pFVar6 + -0x10;
  } while (*(FName *)(*(longlong *)pFVar1 + 0x48) != param_1.CategoryName);
  return (int)((longlong)pFVar6 - (longlong)pFVar2 >> 4);
}

// FindLastByPredicate<`FGameplayDebuggerNetPack::ApplyToOwner'::__l9::<lambda_1>_> @ 146d3d5a0

int __thiscall
TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FGameplayDebuggerNetPack::ApplyToOwner_::__l9::<lambda_1>_>
          (TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar2 + (longlong)param_2 * 0x10;
  do {
    if (pFVar6 == pFVar2) {
      return -1;
    }
    pFVar1 = pFVar6 + -0x10;
    pFVar6 = pFVar6 + -0x10;
  } while (*(FName *)(*(longlong *)pFVar1 + 0x48) != param_1.CategoryName);
  return (int)((longlong)pFVar6 - (longlong)pFVar2 >> 4);
}

// FindLastByPredicate<`FGameplayDebuggerNetPack::NetDeltaSerialize'::__l246::<lambda_1>_> @ 146d3d650

int __thiscall
TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FGameplayDebuggerNetPack::NetDeltaSerialize_::__l246::<lambda_1>_>
          (TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar2 + (longlong)param_2 * 0x10;
  do {
    if (pFVar6 == pFVar2) {
      return -1;
    }
    pFVar1 = pFVar6 + -0x10;
    pFVar6 = pFVar6 + -0x10;
  } while (*(FName *)(*(longlong *)pFVar1 + 0x48) != param_1.CategoryName);
  return (int)((longlong)pFVar6 - (longlong)pFVar2 >> 4);
}

// GetTypeName<ADebugCameraController> @ 146d3d780

FString * __cdecl GetTypeName<ADebugCameraController>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADebugCameraController_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<AGameplayDebuggerPlayerManager> @ 146d3d7c0

FString * __cdecl GetTypeName<AGameplayDebuggerPlayerManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AGameplayDebuggerPlayerManager::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<APawn> @ 146d3d800

FString * __cdecl GetTypeName<APawn>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_APawn_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<`FGameplayDebuggerAddonManager::NotifyCategoriesChanged'::__l2::FSlotInfo,int,FIdentityFunctor,TDereferenceWrapper<`FGameplayDebuggerAddonManager::NotifyCategoriesChanged'::__l2::FSlotInfo,TLess<void>_>_> @ 146d3d840

void __cdecl
AlgoImpl::
HeapSortInternal<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,int,FIdentityFunctor,TDereferenceWrapper<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,TLess<void>_>_>
          (FSlotInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FGameplayDebuggerAddonManager::NotifyCategoriesChanged(void)_::_2_::FSlotInfo,TLess<void>_>
          param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FSlotInfo *this;
  FSlotInfo *pFVar10;
  longlong lVar11;
  int iVar12;
  FSlotInfo *pFVar13;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_public:_void___cdecl_FGameplayDebuggerAddonManager::NotifyCategoriesChanged(void)_::_2_::FSlotInfo,TLess<void>_>
              *)&local_res20);
  iVar12 = param_2 + -1;
  lVar11 = (longlong)iVar12;
  if (0 < iVar12) {
    pFVar13 = param_1 + lVar11;
    do {
      iVar8 = pFVar13->CategoryId;
      iVar9 = pFVar13->SlotIdx;
      FVar5 = param_1->CategoryName;
      iVar4 = param_1->CategoryId;
      iVar1 = param_1->SlotIdx;
      param_1->CategoryName = pFVar13->CategoryName;
      param_1->CategoryId = iVar8;
      param_1->SlotIdx = iVar9;
      pFVar13->CategoryName = FVar5;
      pFVar13->CategoryId = iVar4;
      pFVar13->SlotIdx = iVar1;
      iVar8 = 0;
      if (1 < iVar12) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar12) {
            iVar1 = param_1[(longlong)iVar4 + 1].SlotIdx;
            iVar2 = param_1[(longlong)iVar4 + 2].SlotIdx;
            if (iVar2 == iVar1) {
              uVar7 = ::FName::Compare(&param_1[(longlong)iVar4 + 2].CategoryName,
                                       &param_1[(longlong)iVar4 + 1].CategoryName);
              uVar7 = uVar7 >> 0x1f;
            }
            else {
              uVar7 = (uint)(iVar2 < iVar1);
            }
            if (uVar7 != 0) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          this = param_1 + iVar8;
          pFVar10 = param_1 + iVar9;
          if (this->SlotIdx == pFVar10->SlotIdx) {
            iVar8 = ::FName::Compare(&this->CategoryName,&pFVar10->CategoryName);
            bVar6 = SUB41((uint)iVar8 >> 0x1f,0);
          }
          else {
            bVar6 = this->SlotIdx < pFVar10->SlotIdx;
          }
          if (bVar6 == false) break;
          FVar5 = this->CategoryName;
          iVar1 = this->CategoryId;
          iVar2 = this->SlotIdx;
          iVar8 = pFVar10->CategoryId;
          iVar4 = pFVar10->SlotIdx;
          this->CategoryName = pFVar10->CategoryName;
          this->CategoryId = iVar8;
          this->SlotIdx = iVar4;
          pFVar10->CategoryName = FVar5;
          pFVar10->CategoryId = iVar1;
          pFVar10->SlotIdx = iVar2;
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < iVar12);
      }
      iVar12 = iVar12 + -1;
      lVar11 = lVar11 + -1;
      pFVar13 = pFVar13 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapifyInternal<`FGameplayDebuggerAddonManager::NotifyCategoriesChanged'::__l2::FSlotInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`FGameplayDebuggerAddonManager::NotifyCategoriesChanged'::__l2::FSlotInfo,TLess<void>_>_>_> @ 146d3d9d0

void __cdecl
AlgoImpl::
HeapifyInternal<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,TLess<void>_>_>_>
          (FSlotInfo *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_public:_void___cdecl_FGameplayDebuggerAddonManager::NotifyCategoriesChanged(void)_::_2_::FSlotInfo,TLess<void>_>_>
          param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FSlotInfo *this;
  FSlotInfo *pFVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar9 = iVar7 * 2 + 1;
  iVar4 = iVar9;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar9) {
LAB_146d3daed:
      if (iVar12 == 0) {
        return;
      }
      iVar7 = iVar12 + -1;
      iVar9 = iVar4 + -2;
      iVar4 = iVar9;
      iVar12 = iVar7;
    }
    iVar9 = iVar7 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      iVar1 = param_1[(longlong)iVar9 + 1].SlotIdx;
      iVar2 = param_1[(longlong)iVar9 + 2].SlotIdx;
      if (iVar2 == iVar1) {
        uVar8 = ::FName::Compare(&param_1[(longlong)iVar9 + 2].CategoryName,
                                 &param_1[(longlong)iVar9 + 1].CategoryName);
        uVar8 = uVar8 >> 0x1f;
      }
      else {
        uVar8 = (uint)(iVar2 < iVar1);
      }
      if (uVar8 != 0) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    this = param_1 + iVar7;
    pFVar11 = param_1 + iVar10;
    if (this->SlotIdx == pFVar11->SlotIdx) {
      iVar9 = ::FName::Compare(&this->CategoryName,&pFVar11->CategoryName);
      bVar6 = SUB41((uint)iVar9 >> 0x1f,0);
    }
    else {
      bVar6 = this->SlotIdx < pFVar11->SlotIdx;
    }
    if (bVar6 == false) goto LAB_146d3daed;
    FVar5 = this->CategoryName;
    iVar1 = this->CategoryId;
    iVar2 = this->SlotIdx;
    iVar9 = pFVar11->CategoryId;
    iVar7 = pFVar11->SlotIdx;
    this->CategoryName = pFVar11->CategoryName;
    this->CategoryId = iVar9;
    this->SlotIdx = iVar7;
    iVar9 = iVar10 * 2 + 1;
    pFVar11->CategoryName = FVar5;
    pFVar11->CategoryId = iVar1;
    pFVar11->SlotIdx = iVar2;
    iVar7 = iVar10;
  } while( true );
}

// InternalConstructor<AGameplayDebuggerCategoryReplicator> @ 146d3db30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AGameplayDebuggerCategoryReplicator>(FObjectInitializer *param_1)

{
  double *pdVar1;
  byte bVar2;
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->bReplicates = '\x01';
    this->_padding_ = (longlong)&___7AGameplayDebuggerCategoryReplicator__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined2 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined1 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    *(undefined1 *)&this[1].AttachmentReplication.RotationOffset.Yaw = 0;
    bVar2 = *(byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    pdVar1 = &this[1].AttachmentReplication.RotationOffset.Roll;
    *(uint *)pdVar1 = *(uint *)pdVar1 & 0xfffffff0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2) = bVar2 & 0xfb | 0xb;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    this[1]._padding_ = (longlong)this;
    pdVar1 = &this[1].AttachmentReplication.RotationOffset.Roll;
    *(uint *)pdVar1 = *(uint *)pdVar1 & 0xffffffef;
  }
  return;
}

// InternalConstructor<AGameplayDebuggerPlayerManager> @ 146d3dc10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AGameplayDebuggerPlayerManager>(FObjectInitializer *param_1)

{
  uint *puVar1;
  byte bVar2;
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    puVar1 = (uint *)((longlong)&this[1].PrimaryActorTick._padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffff9;
    this->_padding_ = (longlong)&AGameplayDebuggerPlayerManager::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&AGameplayDebuggerPlayerManager::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    bVar2 = *(byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *(undefined4 *)((longlong)&(this->PrimaryActorTick)._padding_ + 4) = 0x3f000000;
    *(byte *)&this[1].PrimaryActorTick._padding_ = (byte)this[1].PrimaryActorTick._padding_ & 0xfe;
    *(byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2) = bVar2 & 0xfb | 0xb;
  }
  return;
}

// InternalConstructor<UGameplayDebuggerConfig> @ 146d3dcb0

void __cdecl InternalConstructor<UGameplayDebuggerConfig>(FObjectInitializer *param_1)

{
  if ((UGameplayDebuggerConfig *)param_1->Obj != (UGameplayDebuggerConfig *)0x0) {
    UGameplayDebuggerConfig::UGameplayDebuggerConfig
              ((UGameplayDebuggerConfig *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGameplayDebuggerLocalController> @ 146d3dcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UGameplayDebuggerLocalController>(FObjectInitializer *param_1)

{
  if ((UGameplayDebuggerLocalController *)param_1->Obj != (UGameplayDebuggerLocalController *)0x0) {
    UGameplayDebuggerLocalController::UGameplayDebuggerLocalController
              ((UGameplayDebuggerLocalController *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGameplayDebuggerRenderingComponent> @ 146d3dcf0

void __cdecl InternalConstructor<UGameplayDebuggerRenderingComponent>(FObjectInitializer *param_1)

{
  UDebugDrawComponent *this;
  
  this = (UDebugDrawComponent *)param_1->Obj;
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UGameplayDebuggerRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)
         &UGameplayDebuggerRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ =
         (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__IPhysicsComponent__;
    FGameplayDebuggerDebugDrawDelegateHelper::FGameplayDebuggerDebugDrawDelegateHelper
              ((FGameplayDebuggerDebugDrawDelegateHelper *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UGameplayDebuggerUserSettings> @ 146d3dd70

void __cdecl InternalConstructor<UGameplayDebuggerUserSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x46c35000;
    this->_padding_ = (longlong)&___7UGameplayDebuggerUserSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42340000;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex.Value = 10;
  }
  return;
}

// InternalVTableHelperCtorCaller<AGameplayDebuggerCategoryReplicator> @ 146d3ddf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AGameplayDebuggerCategoryReplicator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameplayDebuggerCategoryReplicator::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AGameplayDebuggerCategoryReplicator__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined2 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined1 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    *(undefined1 *)&this[1].AttachmentReplication.RotationOffset.Yaw = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AGameplayDebuggerPlayerManager> @ 146d3df10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AGameplayDebuggerPlayerManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  AActor *pAVar3;
  
  pAVar3 = (AActor *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameplayDebuggerPlayerManager::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ = (longlong)&AGameplayDebuggerPlayerManager::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&AGameplayDebuggerPlayerManager::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pAVar3 = this;
  }
  return (UObject *)pAVar3;
}

// InternalVTableHelperCtorCaller<UGameplayDebuggerConfig> @ 146d3dff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayDebuggerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayDebuggerConfig *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayDebuggerConfig::GetPrivateStaticClass();
  pUVar3 = (UGameplayDebuggerConfig *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGameplayDebuggerConfig *)0x0) {
    pUVar3 = UGameplayDebuggerConfig::UGameplayDebuggerConfig(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayDebuggerLocalController> @ 146d3e090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayDebuggerLocalController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayDebuggerLocalController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameplayDebuggerLocalController__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 8) = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayDebuggerRenderingComponent> @ 146d3e200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayDebuggerRenderingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDebugDrawComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayDebuggerRenderingComponent::GetPrivateStaticClass();
  this = (UDebugDrawComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDebugDrawComponent *)0x0) {
    UDebugDrawComponent::UDebugDrawComponent(this,param_1);
    this->_padding_ = (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UGameplayDebuggerRenderingComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)
         &UGameplayDebuggerRenderingComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ =
         (longlong)&UGameplayDebuggerRenderingComponent::_vftable__for__IPhysicsComponent__;
    FGameplayDebuggerDebugDrawDelegateHelper::FGameplayDebuggerDebugDrawDelegateHelper
              ((FGameplayDebuggerDebugDrawDelegateHelper *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayDebuggerUserSettings> @ 146d3e300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayDebuggerUserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayDebuggerUserSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x46c35000;
    this->_padding_ = (longlong)&___7UGameplayDebuggerUserSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    *(undefined4 *)&this[1]._padding_ = 0x42340000;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex.Value = 10;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<`FGameplayDebuggerAddonManager::NotifyCategoriesChanged'::__l2::FSlotInfo,int,FIdentityFunctor,TDereferenceWrapper<`FGameplayDebuggerAddonManager::NotifyCategoriesChanged'::__l2::FSlotInfo,TLess<void>_>_> @ 146d3e3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,int,FIdentityFunctor,TDereferenceWrapper<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,TLess<void>_>_>
          (FSlotInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FGameplayDebuggerAddonManager::NotifyCategoriesChanged(void)_::_2_::FSlotInfo,TLess<void>_>
          param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FName FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FSlotInfo *pFVar10;
  FSlotInfo *pFVar11;
  FSlotInfo *pFVar12;
  int iVar13;
  FSlotInfo **ppFVar14;
  FSlotInfo *this;
  FSlotInfo *pFVar15;
  FSlotInfo *pFVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  FSlotInfo *local_358;
  FSlotInfo *local_348;
  FSlotInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar14 = &local_348;
    do {
      pFVar16 = ppFVar14[1];
      pFVar15 = *ppFVar14;
      local_358 = ppFVar14[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      this = pFVar15;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146d3e4b0:
        if (8 < iVar9) {
          iVar4 = this->CategoryId;
          iVar5 = this->SlotIdx;
          pFVar10 = pFVar16 + 1;
          pFVar15 = this + iVar9 / 2;
          FVar3 = pFVar15->CategoryName;
          iVar6 = pFVar15->CategoryId;
          iVar7 = pFVar15->SlotIdx;
          pFVar15 = this + iVar9 / 2;
          pFVar15->CategoryName = this->CategoryName;
          pFVar15->CategoryId = iVar4;
          pFVar15->SlotIdx = iVar5;
          this->CategoryName = FVar3;
          this->CategoryId = iVar6;
          this->SlotIdx = iVar7;
          pFVar15 = this;
LAB_146d3e4e0:
          pFVar12 = pFVar15;
          pFVar15 = pFVar12 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x000146d3e4e9;
          goto LAB_146d3e510;
        }
        for (; pFVar10 = this, pFVar15 = this, this < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar12 = pFVar10, pFVar15 = pFVar15 + 1, pFVar15 <= pFVar16) {
            if (pFVar12->SlotIdx == pFVar15->SlotIdx) {
              iVar13 = ::FName::Compare(&pFVar12->CategoryName,&pFVar15->CategoryName);
              bVar8 = SUB41((uint)iVar13 >> 0x1f,0);
            }
            else {
              bVar8 = pFVar12->SlotIdx < pFVar15->SlotIdx;
            }
            pFVar10 = pFVar15;
            if (bVar8 == false) {
              pFVar10 = pFVar12;
            }
          }
          FVar3 = pFVar12->CategoryName;
          iVar4 = pFVar12->CategoryId;
          iVar5 = pFVar12->SlotIdx;
          iVar13 = pFVar16->CategoryId;
          iVar9 = pFVar16->SlotIdx;
          pFVar12->CategoryName = pFVar16->CategoryName;
          pFVar12->CategoryId = iVar13;
          pFVar12->SlotIdx = iVar9;
          pFVar16->CategoryName = FVar3;
          pFVar16->CategoryId = iVar4;
          pFVar16->SlotIdx = iVar5;
        }
        goto LAB_146d3e5e9;
      }
LAB_146d3e5d8:
      HeapSortInternal<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,int,FIdentityFunctor,TDereferenceWrapper<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,TLess<void>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_146d3e5e9:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_348 <= ppFVar14);
  }
  return;
code_r0x000146d3e4e9:
  if (this->SlotIdx == pFVar12[1].SlotIdx) {
    iVar9 = ::FName::Compare(&this->CategoryName,&pFVar15->CategoryName);
    bVar8 = SUB41((uint)iVar9 >> 0x1f,0);
  }
  else {
    bVar8 = this->SlotIdx < pFVar12[1].SlotIdx;
  }
  if (bVar8 == false) goto LAB_146d3e4e0;
LAB_146d3e510:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= this) break;
    if (pFVar11[-1].SlotIdx == this->SlotIdx) {
      iVar9 = ::FName::Compare(&pFVar10->CategoryName,&this->CategoryName);
      bVar8 = SUB41((uint)iVar9 >> 0x1f,0);
    }
    else {
      bVar8 = pFVar11[-1].SlotIdx < this->SlotIdx;
    }
  } while (bVar8 == false);
  uVar1 = pFVar11[-1].CategoryId;
  uVar2 = pFVar11[-1].SlotIdx;
  if (pFVar15 <= pFVar10) {
    FVar3 = pFVar15->CategoryName;
    iVar9 = pFVar12[1].CategoryId;
    iVar4 = pFVar12[1].SlotIdx;
    pFVar15->CategoryName = pFVar10->CategoryName;
    pFVar12[1].CategoryId = uVar1;
    pFVar12[1].SlotIdx = uVar2;
    pFVar10->CategoryName = FVar3;
    pFVar11[-1].CategoryId = iVar9;
    pFVar11[-1].SlotIdx = iVar4;
    goto LAB_146d3e4e0;
  }
  FVar3 = this->CategoryName;
  iVar9 = this->CategoryId;
  iVar4 = this->SlotIdx;
  iVar13 = iVar13 + -1;
  this->CategoryName = pFVar10->CategoryName;
  this->CategoryId = uVar1;
  this->SlotIdx = uVar2;
  pFVar10->CategoryName = FVar3;
  pFVar11[-1].CategoryId = iVar9;
  pFVar11[-1].SlotIdx = iVar4;
  if ((longlong)((longlong)pFVar10 + (-0x10 - (longlong)this) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar14 = pFVar15;
      ppFVar14[1] = pFVar16;
      *(int *)(ppFVar14 + 2) = iVar13;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar10 <= this + 1) goto LAB_146d3e5e9;
    pFVar16 = pFVar11 + -2;
    pFVar15 = this;
  }
  else {
    if (this + 1 < pFVar10) {
      *ppFVar14 = this;
      ppFVar14[1] = pFVar11 + -2;
      *(int *)(ppFVar14 + 2) = iVar13;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_146d3e5e9;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  this = pFVar15;
  if (iVar13 == 0) goto LAB_146d3e5d8;
  goto LAB_146d3e4b0;
}

// IsObjectPtrEqual<AActor,AActor_*,0> @ 146d3e6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AActor,AActor_*,0>(TObjectPtr<AActor> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AActor *)0x0) {
    return *param_2 == (AActor *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<AGameplayDebuggerCategoryReplicator,AGameplayDebuggerCategoryReplicator_*,0> @ 146d3e6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<AGameplayDebuggerCategoryReplicator,AGameplayDebuggerCategoryReplicator_*,0>
          (TObjectPtr<AGameplayDebuggerCategoryReplicator> *param_1,
          AGameplayDebuggerCategoryReplicator **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AGameplayDebuggerCategoryReplicator *)0x0) {
    return *param_2 == (AGameplayDebuggerCategoryReplicator *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<APawn,APawn_*,0> @ 146d3e700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<APawn,APawn_*,0>(TObjectPtr<APawn> *param_1,APawn **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APawn *)0x0) {
    return *param_2 == (APawn *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<APlayerController,APlayerController_*,0> @ 146d3e720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<APlayerController,APlayerController_*,0>
          (TObjectPtr<APlayerController> *param_1,APlayerController **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APlayerController *)0x0) {
    return *param_2 == (APlayerController *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<APlayerController,AController_*,0> @ 146d3e740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<APlayerController,AController_*,0>
          (TObjectPtr<APlayerController> *param_1,AController **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APlayerController *)0x0) {
    return (APlayerController *)*param_2 == (APlayerController *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (APlayerController *)*param_2;
}

// IsObjectPtrEqual<APlayerController,APlayerController_const_*,0> @ 146d3e760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<APlayerController,APlayerController_const_*,0>
          (TObjectPtr<APlayerController> *param_1,APlayerController **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APlayerController *)0x0) {
    return *param_2 == (APlayerController *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<APlayerController,AActor_const_*,0> @ 146d3e780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<APlayerController,AActor_const_*,0>
          (TObjectPtr<APlayerController> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APlayerController *)0x0) {
    return (APlayerController *)*param_2 == (APlayerController *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (APlayerController *)*param_2;
}

// NewObject<UFont> @ 146d3e7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFont * __cdecl
NewObject<UFont>(UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
                FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UFont *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UFont_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UFont *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayDebuggerLocalController> @ 146d3e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayDebuggerLocalController * __cdecl
NewObject<UGameplayDebuggerLocalController>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UGameplayDebuggerLocalController *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UGameplayDebuggerLocalController::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UGameplayDebuggerLocalController *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayDebuggerRenderingComponent> @ 146d3e980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayDebuggerRenderingComponent * __cdecl
NewObject<UGameplayDebuggerRenderingComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UGameplayDebuggerRenderingComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UGameplayDebuggerRenderingComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UGameplayDebuggerRenderingComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UInputComponent> @ 146d3ea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputComponent * __cdecl
NewObject<UInputComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInputComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UInputComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInputComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EGameplayDebuggerOverrideMode> @ 146d3f3f0

UEnum * __cdecl StaticEnum<enum_EGameplayDebuggerOverrideMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode,
                       (UObject *)pUVar1,L"EGameplayDebuggerOverrideMode");
  }
  return Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton;
}

// StaticEnum<enum_EGameplayDebuggerShape> @ 146d3f430

UEnum * __cdecl StaticEnum<enum_EGameplayDebuggerShape>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerShape,(UObject *)pUVar1,
                       L"EGameplayDebuggerShape");
  }
  return Z_Registration_Info_UEnum_EGameplayDebuggerShape.OuterSingleton;
}

// operator<< @ 146d41970

FArchive * __cdecl operator<<(FArchive *param_1,FGameplayDebuggerShape *param_2)

{
  FColor *pFVar1;
  FColor_u_0 *pFVar2;
  longlong *plVar3;
  EGameplayDebuggerShape local_res8 [8];
  
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ShapeData);
  operator<<(param_1,&param_2->Description);
  pFVar1 = &param_2->Color;
  pFVar2 = (FColor_u_0 *)**(undefined8 **)&param_1->field_0x8;
  if ((FColor_u_0 *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->field0_0x0 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = param_2->Type;
  if ((EGameplayDebuggerShape *)plVar3[1] < (EGameplayDebuggerShape *)*plVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EGameplayDebuggerShape *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  param_2->Type = local_res8[0];
  return param_1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146d41e70

/* [thunk]:public: virtual void * __ptr64 __cdecl AGameplayDebuggerPlayerManager::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AGameplayDebuggerPlayerManager::_vector_deleting_destructor__adjustor_704__
          (AGameplayDebuggerPlayerManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AGameplayDebuggerPlayerManager *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146d41e84

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayDebuggerRenderingComponent::`vector
   deleting destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayDebuggerRenderingComponent::_vector_deleting_destructor__adjustor_592__
          (UGameplayDebuggerRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayDebuggerRenderingComponent *)&this[-1].field_0x3e0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146d41e98

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayDebuggerRenderingComponent::`vector
   deleting destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayDebuggerRenderingComponent::_vector_deleting_destructor__adjustor_600__
          (UGameplayDebuggerRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayDebuggerRenderingComponent *)&this[-1].field_0x3d8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146d41eac

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayDebuggerRenderingComponent::`vector
   deleting destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayDebuggerRenderingComponent::_vector_deleting_destructor__adjustor_608__
          (UGameplayDebuggerRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayDebuggerRenderingComponent *)&this[-1].field_0x3d0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146d41ec0

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayDebuggerRenderingComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayDebuggerRenderingComponent::_vector_deleting_destructor__adjustor_40__
          (UGameplayDebuggerRenderingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayDebuggerRenderingComponent *)
                      &this[-1].GameplayDebuggerDebugDrawDelegateHelper._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146d41ed0

void * __thiscall
IBaseDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d41f00

void * __thiscall
IBaseDelegateInstance<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d41f30

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerExtension_HUD,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerExtension_HUD,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d41f60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerExtension_Spectator,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerExtension_Spectator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d41f90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerModule,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerModule,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d41fc0

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d41ff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d420b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d420e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42140

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42170

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d421a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int,int> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d421d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerExtension_HUD,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerExtension_HUD>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerExtension_HUD,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerExtension_HUD>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42210

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerExtension_Spectator,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerExtension_Spectator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayDebuggerExtension_Spectator,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerExtension_Spectator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42250

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetFastCategoryBaseState,SharedPointerInternals::DefaultDeleter<FNetFastCategoryBaseState>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetFastCategoryBaseState,SharedPointerInternals::DefaultDeleter<FNetFastCategoryBaseState>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
AGameplayDebuggerCategoryReplicator::_scalar_deleting_destructor_
          (AGameplayDebuggerCategoryReplicator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AGameplayDebuggerCategoryReplicator__6B_;
  DestructItems<TSharedRef<FGameplayDebuggerExtension,1>,int>
            ((TSharedRef<FGameplayDebuggerExtension,1> *)(this->Extensions).AllocatorInstance.Data,
             (this->Extensions).ArrayNum);
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int>
            ((TSharedRef<FGameplayDebuggerCategory,1> *)(this->Categories).AllocatorInstance.Data,
             (this->Categories).ArrayNum);
  pFVar1 = (this->Categories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisLogSync).DeviceIDs.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayDebuggerCategoryData,int>
            ((FGameplayDebuggerCategoryData *)
             (this->ReplicatedData).SavedData.AllocatorInstance.Data,
             (this->ReplicatedData).SavedData.ArrayNum);
  pFVar1 = (this->ReplicatedData).SavedData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AGameplayDebuggerPlayerManager::_scalar_deleting_destructor_
          (AGameplayDebuggerPlayerManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->PendingRegistrations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42420

void * __thiscall
FGameplayDebuggerAddonBase::_scalar_deleting_destructor_
          (FGameplayDebuggerAddonBase *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            ((FGameplayDebuggerInputHandler *)(this->InputHandlers).AllocatorInstance.Data,
             (this->InputHandlers).ArrayNum);
  pFVar3 = (this->InputHandlers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d424a0

void * __thiscall
FGameplayDebuggerCategory::_scalar_deleting_destructor_
          (FGameplayDebuggerCategory *this,uint param_1)

{
  ~FGameplayDebuggerCategory(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d424e0

void * __thiscall
FGameplayDebuggerCompositeSceneProxy::_scalar_deleting_destructor_
          (FGameplayDebuggerCompositeSceneProxy *this,uint param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  this->_padding_ = (longlong)&___7FGameplayDebuggerCompositeSceneProxy__6B_;
  if (0 < (this->ChildProxies).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ChildProxies).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar3)();
        return pvVar6;
      }
      puVar1 = *(undefined8 **)((this->ChildProxies).AllocatorInstance.Data + lVar8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->ChildProxies).ArrayNum);
  }
  pFVar2 = (this->ChildProxies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d425f0

void * __thiscall
FGameplayDebuggerDebugDrawDelegateHelper::_scalar_deleting_destructor_
          (FGameplayDebuggerDebugDrawDelegateHelper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FGameplayDebuggerDebugDrawDelegateHelper__6B_;
  Reset(this);
  pFVar1 = (this->DebugDrawDelegateHelpers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDebugDrawDelegateHelper::~FDebugDrawDelegateHelper((FDebugDrawDelegateHelper *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42650

void * __thiscall
FGameplayDebuggerExtension::_scalar_deleting_destructor_
          (FGameplayDebuggerExtension *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            (*(FGameplayDebuggerInputHandler **)&this->field_0x18,*(int *)&this->field_0x20);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d426d0

void * __thiscall
FGameplayDebuggerExtension_HUD::_scalar_deleting_destructor_
          (FGameplayDebuggerExtension_HUD *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->CachedDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            ((FGameplayDebuggerInputHandler *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42760

void * __thiscall
FGameplayDebuggerExtension_Spectator::_scalar_deleting_destructor_
          (FGameplayDebuggerExtension_Spectator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->CachedDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            ((FGameplayDebuggerInputHandler *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d427f0

void * __thiscall
FNetFastCategoryBaseState::_scalar_deleting_destructor_
          (FNetFastCategoryBaseState *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FNetFastCategoryBaseState::FCategoryState,int>
            ((FCategoryState *)(this->CategoryStates).AllocatorInstance.Data,
             (this->CategoryStates).ArrayNum);
  pFVar3 = (this->CategoryStates).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7INetDeltaBaseState__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42870

void * __thiscall
INetDeltaBaseState::_scalar_deleting_destructor_(INetDeltaBaseState *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7INetDeltaBaseState__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d428e0

void * __thiscall
UGameplayDebuggerConfig::_scalar_deleting_destructor_(UGameplayDebuggerConfig *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGameplayDebuggerConfig__6B_;
  *(undefined4 *)&(this->KnownExtensionInputNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KnownExtensionInputNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KnownExtensionInputNames);
  *(undefined4 *)&(this->KnownCategoryInputNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KnownCategoryInputNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KnownCategoryInputNames);
  pFVar2 = (this->KnownExtensionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KnownCategoryNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGameplayDebuggerExtensionConfig,int>
            ((FGameplayDebuggerExtensionConfig *)(this->Extensions).AllocatorInstance.Data,
             (this->Extensions).ArrayNum);
  pFVar2 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGameplayDebuggerCategoryConfig,int>
            ((FGameplayDebuggerCategoryConfig *)(this->Categories).AllocatorInstance.Data,
             (this->Categories).ArrayNum);
  pFVar2 = (this->Categories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UGameplayDebuggerLocalController::_scalar_deleting_destructor_
          (UGameplayDebuggerLocalController *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UGameplayDebuggerLocalController__6B_;
  pFVar1 = (this->CategoryKeysDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RowDownKeyDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RowUpKeyDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActivationKeyDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->UsedBindings).HashSize = 0;
  FVar2 = (this->UsedBindings).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UsedBindings).Elements);
  DestructItems<FString,int>
            ((FString *)(this->SlotNames).AllocatorInstance.Data,(this->SlotNames).ArrayNum);
  pFVar1 = (this->SlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->SlotCategoryIds).AllocatorInstance.Data,(this->SlotCategoryIds).ArrayNum);
  pFVar1 = (this->SlotCategoryIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->DataPackMap).AllocatorInstance.Data,
             (this->DataPackMap).ArrayNum);
  pFVar1 = (this->DataPackMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42bd0

void * __thiscall
UGameplayDebuggerRenderingComponent::_scalar_deleting_destructor_
          (UGameplayDebuggerRenderingComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->GameplayDebuggerDebugDrawDelegateHelper)._padding_ =
       (longlong)&___7FGameplayDebuggerDebugDrawDelegateHelper__6B_;
  FGameplayDebuggerDebugDrawDelegateHelper::Reset(&this->GameplayDebuggerDebugDrawDelegateHelper);
  pFVar1 = (this->GameplayDebuggerDebugDrawDelegateHelper).DebugDrawDelegateHelpers.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDebugDrawDelegateHelper::~FDebugDrawDelegateHelper
            ((FDebugDrawDelegateHelper *)&this->GameplayDebuggerDebugDrawDelegateHelper);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x630);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d42cc0

void * __thiscall
UGameplayDebuggerUserSettings::_scalar_deleting_destructor_
          (UGameplayDebuggerUserSettings *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UGameplayDebuggerUserSettings__6B_;
  (this->EnabledCategories).HashSize = 0;
  FVar1 = (this->EnabledCategories).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EnabledCategories).Elements);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebuggerCategoryReplicator @ 146d4af70

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebuggerCategoryReplicator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebuggerConfig @ 146d4af80

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebuggerConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebuggerLocalController @ 146d4af90

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebuggerLocalController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebuggerPlayerManager @ 146d4afa0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebuggerPlayerManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebuggerRenderingComponent @ 146d4afb0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebuggerRenderingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebuggerTypes @ 146d4afc0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebuggerTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayDebugger_init @ 146d4afd0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayDebugger_init(void)

{
  return;
}

// Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister @ 146d5f960

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerConfig",
               &Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton,
               UGameplayDebuggerConfig::StaticRegisterNativesUGameplayDebuggerConfig,600,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerConfig>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerConfig.InnerSingleton;
}

// Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister @ 146d5fa10

UClass * __cdecl Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerUserSettings",
               &Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton,
               UGameplayDebuggerUserSettings::StaticRegisterNativesUGameplayDebuggerUserSettings,
               0xa0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGameplayDebuggerUserSettings>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_GameplayDebugger @ 146d60250

void __cdecl IMPLEMENT_MODULE_GameplayDebugger(void)

{
  return;
}

// EnableCategoryNameCmd'' @ 1503e0610

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::EnableCategoryNameCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::EnableCategoryNameCmd);
  return;
}

// EnableDebuggerCmd'' @ 1503e0630

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::EnableDebuggerCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::EnableDebuggerCmd);
  return;
}

// LegacyEnableDebuggerCmd'' @ 1503e0650

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::LegacyEnableDebuggerCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::LegacyEnableDebuggerCmd);
  return;
}

// NotifyDebuggerOwnerChange'' @ 1503e0670

void __cdecl
`dynamic_atexit_destructor_for_'AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange._8_8_,
             AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange._16_4_);
  if (AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange._8_8_ != 0) {
    FMemory::Free((void *)AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AGameplayDebuggerCategoryReplicator::NotifyDebuggerOwnerChange);
  return;
}

// OnLocalControllerInitialized'' @ 1503e06b0

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerModule::OnLocalControllerInitialized__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameplayDebuggerModule::OnLocalControllerInitialized._8_8_,
             FGameplayDebuggerModule::OnLocalControllerInitialized._16_4_);
  if (FGameplayDebuggerModule::OnLocalControllerInitialized._8_8_ != 0) {
    FMemory::Free((void *)FGameplayDebuggerModule::OnLocalControllerInitialized._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGameplayDebuggerModule::OnLocalControllerInitialized)
  ;
  return;
}

// OnLocalControllerUninitialized'' @ 1503e06f0

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerModule::OnLocalControllerUninitialized__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameplayDebuggerModule::OnLocalControllerUninitialized._8_8_,
             FGameplayDebuggerModule::OnLocalControllerUninitialized._16_4_);
  if (FGameplayDebuggerModule::OnLocalControllerUninitialized._8_8_ != 0) {
    FMemory::Free((void *)FGameplayDebuggerModule::OnLocalControllerUninitialized._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FGameplayDebuggerModule::OnLocalControllerUninitialized);
  return;
}

// SelectLocalPlayerCmd'' @ 1503e0730

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SelectLocalPlayerCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SelectLocalPlayerCmd);
  return;
}

// SelectNextRowCmd'' @ 1503e0750

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SelectNextRowCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SelectNextRowCmd);
  return;
}

// SelectPreviousRowCmd'' @ 1503e0770

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SelectPreviousRowCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SelectPreviousRowCmd);
  return;
}

// SetFontSizeCmd'' @ 1503e0790

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::SetFontSizeCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::SetFontSizeCmd);
  return;
}

// ToggleCategoryCmd'' @ 1503e07b0

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::ToggleCategoryCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::ToggleCategoryCmd);
  return;
}

// ToggleDebuggerCmd'' @ 1503e07d0

void __cdecl
`dynamic_atexit_destructor_for_'FGameplayDebuggerConsoleCommands::ToggleDebuggerCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FGameplayDebuggerConsoleCommands::ToggleDebuggerCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoCreateGameplayDebuggerManager'' @ 1503e07f0

void __cdecl _dynamic_atexit_destructor_for__CVarAutoCreateGameplayDebuggerManager__(void)

{
  CVarAutoCreateGameplayDebuggerManager._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAutoCreateGameplayDebuggerManager);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayDebuggerRepDetails'' @ 1503e0810

void __cdecl _dynamic_atexit_destructor_for__CVarGameplayDebuggerRepDetails__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayDebuggerRepDetails);
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameDisabled'' @ 1503e0830

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameDisabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameDisabled.Data.AllocatorInstance.Data;
  if (ColorNameDisabled.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameDisabled.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameDisabledActiveRow'' @ 1503e0850

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameDisabledActiveRow__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameDisabledActiveRow.Data.AllocatorInstance.Data;
  if (ColorNameDisabledActiveRow.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameDisabledActiveRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameEnabled'' @ 1503e0870

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameEnabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameEnabled.Data.AllocatorInstance.Data;
  if (ColorNameEnabled.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameEnabled.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameEnabledActiveRow'' @ 1503e0890

void __cdecl
FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameEnabledActiveRow__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameEnabledActiveRow.Data.AllocatorInstance.Data;
  if (ColorNameEnabledActiveRow.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameEnabledActiveRow.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ColorNameInput'' @ 1503e08b0

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__ColorNameInput__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ColorNameInput.Data.AllocatorInstance.Data;
  if (ColorNameInput.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ColorNameInput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogGameplayDebug'' @ 1503e08d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameplayDebug__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameplayDebug);
  return;
}

// `dynamic_atexit_destructor_for_'LogGameplayDebugReplication'' @ 1503e08f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameplayDebugReplication__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameplayDebugReplication);
  return;
}

// `dynamic_atexit_destructor_for_'Separator'' @ 1503e0910

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__Separator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Separator.Data.AllocatorInstance.Data;
  if (Separator.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Separator.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SeparatorSpace'' @ 1503e0930

void __cdecl FGameplayDebuggerCanvasStrings::_dynamic_atexit_destructor_for__SeparatorSpace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SeparatorSpace.Data.AllocatorInstance.Data;
  if (SeparatorSpace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SeparatorSpace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

