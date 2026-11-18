// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 445

// CallStack'' @ 140f0fe60

void __cdecl `dynamic_initializer_for_'UE::Tasks::FPipeCallStack::CallStack__(void)

{
  __tlregdtor(`dynamic_atexit_destructor_for_'UE::Tasks::FPipeCallStack::CallStack__);
  return;
}

// `dynamic_initializer_for_'CCDumpFNames'' @ 140f0fe80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Name::Private::_dynamic_initializer_for__CCDumpFNames__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpFNames;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"FName.Dump",
                      L"Dump all base FName strings to a file. Pass -num=n to dump the most recent n names."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCDumpFNames,pIVar5);
  CCDumpFNames._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CCDumpFNames__);
  return;
}

// `dynamic_initializer_for_'CCDumpHashCsv'' @ 140f10020

void __cdecl UE::Name::Private::_dynamic_initializer_for__CCDumpHashCsv__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpHashCsv;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"FName.HashCsv",
                      L"Write FName hash stats to a csv file.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCDumpHashCsv,pIVar5);
  CCDumpHashCsv._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CCDumpHashCsv__);
  return;
}

// `dynamic_initializer_for_'CCDumpNumberedFNames'' @ 140f101c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Name::Private::_dynamic_initializer_for__CCDumpNumberedFNames__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpNumberedFNames;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"FName.DumpNumbered",
                      L"Dump all numbered FNames to a file (only when UE_FNAME_OUTLINE_NUMBER is set). Pass -num=n to dump the most recent n names."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCDumpNumberedFNames,pIVar5);
  CCDumpNumberedFNames._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CCDumpNumberedFNames__);
  return;
}

// `dynamic_initializer_for_'CCGetFNameStats'' @ 140f10360

void __cdecl UE::Name::Private::_dynamic_initializer_for__CCGetFNameStats__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = GetFNameStats;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"FName.Stats",
                      L"Write FName stats to the output device.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCGetFNameStats,pIVar5);
  CCGetFNameStats._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CCGetFNameStats__);
  return;
}

// `dynamic_initializer_for_'CCListFNames'' @ 140f10500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Name::Private::_dynamic_initializer_for__CCListFNames__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = ListFNames;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"FName.List",
                      L"List all base FName strings to the output device. Pass -num=n to list the most recent n names."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCListFNames,pIVar5);
  CCListFNames._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CCListFNames__);
  return;
}

// `dynamic_initializer_for_'CCListNumberedFNames'' @ 140f106a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Name::Private::_dynamic_initializer_for__CCListNumberedFNames__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = ListNumberedFNames;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"FName.ListNumbered",
                      L"List all numbered FNames to the output devicce (only when UE_FNAME_OUTLINE_NUMBER is set). Pass -num=n to list the most recent n names."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCListNumberedFNames,pIVar5);
  CCListNumberedFNames._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CCListNumberedFNames__);
  return;
}

// `dynamic_initializer_for_'CVarDisableSystem'' @ 140f10840

void __cdecl UE::Virtualization::_dynamic_initializer_for__CVarDisableSystem__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDisableSystem,L"VA.DisableSystem",local_res8,
             L"When true the VA system will be disabled as though \'SystemName\' was \'None\'",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableSystem__);
  return;
}

// `dynamic_initializer_for_'CVarFNameUseMmap'' @ 140f10890

void __cdecl _dynamic_initializer_for__CVarFNameUseMmap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFNameUseMmap,L"FName.UseMmap",&GFNameUseMmap,
             L"Whether to use mmap instead of malloc for block allocations",0);
  atexit(_dynamic_atexit_destructor_for__CVarFNameUseMmap__);
  return;
}

// `dynamic_initializer_for_'CVarLazyInitSystem'' @ 140f108e0

void __cdecl UE::Virtualization::_dynamic_initializer_for__CVarLazyInitSystem__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarLazyInitSystem,L"VA.LazyInitSystem",local_res8,
             L"When true the VA system will be lazy initialized on first use",0);
  atexit(_dynamic_atexit_destructor_for__CVarLazyInitSystem__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn'' @ 140f10930

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn,L"LogGameThreadFNameChurn.Enable",local_res8,
             L"If > 0, then collect sample game thread fname create, periodically print a report of the worst offenders."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn_PrintFrequency'' @ 140f10980

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn_PrintFrequency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 300;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn_PrintFrequency,L"LogGameThreadFNameChurn.PrintFrequency",
             local_res8,L"Number of frames between churn reports.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_PrintFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn_RemoveAliases'' @ 140f109d0

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn_RemoveAliases__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn_RemoveAliases,L"LogGameThreadFNameChurn.RemoveAliases",
             local_res8,
             L"If > 0 then remove aliases from the counting process. This essentialy merges addresses that have the same human readable string. It is slower."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_RemoveAliases__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn_SampleFrequency'' @ 140f10a20

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn_SampleFrequency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn_SampleFrequency,L"LogGameThreadFNameChurn.SampleFrequency"
             ,local_res8,
             L"Number of fname creates per sample. This is used to prevent churn sampling from slowing the game down too much."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_SampleFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn_StackIgnore'' @ 140f10a70

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn_StackIgnore__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn_StackIgnore,L"LogGameThreadFNameChurn.StackIgnore",
             local_res8,L"Number of items to discard from the top of a stack frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_StackIgnore__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn_StackLen'' @ 140f10ac0

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn_StackLen__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 3;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn_StackLen,L"LogGameThreadFNameChurn.StackLen",local_res8,
             L"Maximum number of stack frame items to keep. This improves aggregation because calls that originate from multiple places but end up in the same place will be accounted together."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_StackLen__);
  return;
}

// `dynamic_initializer_for_'CVarLogGameThreadFNameChurn_Threshhold'' @ 140f10b10

void __cdecl _dynamic_initializer_for__CVarLogGameThreadFNameChurn_Threshhold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogGameThreadFNameChurn_Threshhold,L"LogGameThreadFNameChurn.Threshhold",
             local_res8,
             L"Minimum average number of fname creations per frame to include in the report.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_Threshhold__);
  return;
}

// `dynamic_initializer_for_'CVarTaskGraphAlwaysWaitWithNamedThreadSupport'' @ 140f10b60

void __cdecl _dynamic_initializer_for__CVarTaskGraphAlwaysWaitWithNamedThreadSupport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTaskGraphAlwaysWaitWithNamedThreadSupport,
             L"TaskGraph.AlwaysWaitWithNamedThreadSupport",
             &GTaskGraphAlwaysWaitWithNamedThreadSupport,
             L"Default to pumping the named thread tasks when waiting on named threads to avoid potential deadlocks."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarTaskGraphAlwaysWaitWithNamedThreadSupport__);
  return;
}

// `dynamic_initializer_for_'DoubleBadCharactersTestAutomationTestInstance'' @ 140f10bb0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__DoubleBadCharactersTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"DoubleBadCharactersTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&DoubleBadCharactersTestAutomationTestInstance,&local_18,false);
  DoubleBadCharactersTestAutomationTestInstance._0_8_ = &___7DoubleBadCharactersTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__DoubleBadCharactersTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbArrayBufferTestAutomationTestInstance'' @ 140f10c10

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbArrayBufferTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbArrayBufferTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbArrayBufferTestAutomationTestInstance,&local_18,false);
  FCbArrayBufferTestAutomationTestInstance._0_8_ = &___7FCbArrayBufferTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbArrayBufferTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldArrayTestAutomationTestInstance'' @ 140f10c70

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldArrayTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldArrayTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldArrayTestAutomationTestInstance,&local_18,false);
  FCbFieldArrayTestAutomationTestInstance._0_8_ = &___7FCbFieldArrayTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldArrayTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldBinaryAttachmentTestAutomationTestInstance'' @ 140f10cd0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCbFieldBinaryAttachmentTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldBinaryAttachmentTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBinaryAttachmentTestAutomationTestInstance,&local_18,
             false);
  FCbFieldBinaryAttachmentTestAutomationTestInstance._0_8_ = &___7FCbFieldBinaryAttachmentTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldBinaryAttachmentTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldBinaryTestAutomationTestInstance'' @ 140f10d30

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldBinaryTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldBinaryTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBinaryTestAutomationTestInstance,&local_18,false);
  FCbFieldBinaryTestAutomationTestInstance._0_8_ = &___7FCbFieldBinaryTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldBinaryTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldBoolTestAutomationTestInstance'' @ 140f10d90

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldBoolTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldBoolTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBoolTestAutomationTestInstance,&local_18,false);
  FCbFieldBoolTestAutomationTestInstance._0_8_ = &___7FCbFieldBoolTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldBoolTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldBufferIteratorTestAutomationTestInstance'' @ 140f10df0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldBufferIteratorTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldBufferIteratorTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBufferIteratorTestAutomationTestInstance,&local_18,
             false);
  FCbFieldBufferIteratorTestAutomationTestInstance._0_8_ = &___7FCbFieldBufferIteratorTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldBufferIteratorTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldBufferTestAutomationTestInstance'' @ 140f10e50

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldBufferTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldBufferTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBufferTestAutomationTestInstance,&local_18,false);
  FCbFieldBufferTestAutomationTestInstance._0_8_ = &___7FCbFieldBufferTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldBufferTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldCustomByIdTestAutomationTestInstance'' @ 140f10eb0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldCustomByIdTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldCustomByIdTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldCustomByIdTestAutomationTestInstance,&local_18,false);
  FCbFieldCustomByIdTestAutomationTestInstance._0_8_ = &___7FCbFieldCustomByIdTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldCustomByIdTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldCustomByNameTestAutomationTestInstance'' @ 140f10f10

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldCustomByNameTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldCustomByNameTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldCustomByNameTestAutomationTestInstance,&local_18,false)
  ;
  FCbFieldCustomByNameTestAutomationTestInstance._0_8_ = &___7FCbFieldCustomByNameTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldCustomByNameTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldDateTimeTestAutomationTestInstance'' @ 140f10f70

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldDateTimeTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldDateTimeTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldDateTimeTestAutomationTestInstance,&local_18,false);
  FCbFieldDateTimeTestAutomationTestInstance._0_8_ = &___7FCbFieldDateTimeTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldDateTimeTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldFloatTestAutomationTestInstance'' @ 140f10fd0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldFloatTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldFloatTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldFloatTestAutomationTestInstance,&local_18,false);
  FCbFieldFloatTestAutomationTestInstance._0_8_ = &___7FCbFieldFloatTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldFloatTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldHashTestAutomationTestInstance'' @ 140f11030

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldHashTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldHashTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldHashTestAutomationTestInstance,&local_18,false);
  FCbFieldHashTestAutomationTestInstance._0_8_ = &___7FCbFieldHashTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldHashTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldIntegerTestAutomationTestInstance'' @ 140f11090

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldIntegerTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldIntegerTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldIntegerTestAutomationTestInstance,&local_18,false);
  FCbFieldIntegerTestAutomationTestInstance._0_8_ = &___7FCbFieldIntegerTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldIntegerTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldIterateAttachmentsTestAutomationTestInstance'' @ 140f110f0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCbFieldIterateAttachmentsTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldIterateAttachmentsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldIterateAttachmentsTestAutomationTestInstance,&local_18,
             false);
  FCbFieldIterateAttachmentsTestAutomationTestInstance._0_8_ =
       &___7FCbFieldIterateAttachmentsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldIterateAttachmentsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldNoneTestAutomationTestInstance'' @ 140f11150

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldNoneTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldNoneTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldNoneTestAutomationTestInstance,&local_18,false);
  FCbFieldNoneTestAutomationTestInstance._0_8_ = &___7FCbFieldNoneTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldNoneTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldNullTestAutomationTestInstance'' @ 140f111b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldNullTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldNullTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldNullTestAutomationTestInstance,&local_18,false);
  FCbFieldNullTestAutomationTestInstance._0_8_ = &___7FCbFieldNullTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldNullTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldObjectAttachmentTestAutomationTestInstance'' @ 140f11210

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCbFieldObjectAttachmentTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldObjectAttachmentTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldObjectAttachmentTestAutomationTestInstance,&local_18,
             false);
  FCbFieldObjectAttachmentTestAutomationTestInstance._0_8_ = &___7FCbFieldObjectAttachmentTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldObjectAttachmentTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldObjectIdTestAutomationTestInstance'' @ 140f11270

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldObjectIdTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldObjectIdTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldObjectIdTestAutomationTestInstance,&local_18,false);
  FCbFieldObjectIdTestAutomationTestInstance._0_8_ = &___7FCbFieldObjectIdTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldObjectIdTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldObjectTestAutomationTestInstance'' @ 140f112d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldObjectTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldObjectTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldObjectTestAutomationTestInstance,&local_18,false);
  FCbFieldObjectTestAutomationTestInstance._0_8_ = &___7FCbFieldObjectTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldObjectTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldParseTestAutomationTestInstance'' @ 140f11330

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldParseTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldParseTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldParseTestAutomationTestInstance,&local_18,false);
  FCbFieldParseTestAutomationTestInstance._0_8_ = &___7FCbFieldParseTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldParseTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldStringTestAutomationTestInstance'' @ 140f11390

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldStringTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldStringTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldStringTestAutomationTestInstance,&local_18,false);
  FCbFieldStringTestAutomationTestInstance._0_8_ = &___7FCbFieldStringTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldStringTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldTimeSpanTestAutomationTestInstance'' @ 140f113f0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldTimeSpanTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldTimeSpanTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldTimeSpanTestAutomationTestInstance,&local_18,false);
  FCbFieldTimeSpanTestAutomationTestInstance._0_8_ = &___7FCbFieldTimeSpanTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldTimeSpanTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbFieldUuidTestAutomationTestInstance'' @ 140f11450

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbFieldUuidTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbFieldUuidTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldUuidTestAutomationTestInstance,&local_18,false);
  FCbFieldUuidTestAutomationTestInstance._0_8_ = &___7FCbFieldUuidTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbFieldUuidTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCbObjectBufferTestAutomationTestInstance'' @ 140f114b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCbObjectBufferTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCbObjectBufferTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCbObjectBufferTestAutomationTestInstance,&local_18,false);
  FCbObjectBufferTestAutomationTestInstance._0_8_ = &___7FCbObjectBufferTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCbObjectBufferTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FFileManagerReaderTestAutomationTestInstance'' @ 140f11510

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FFileManagerReaderTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FFileManagerReaderTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FFileManagerReaderTestAutomationTestInstance,&local_18,false);
  FFileManagerReaderTestAutomationTestInstance._0_8_ = &___7FFileManagerReaderTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FFileManagerReaderTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPlatformVerificationTestAutomationTestInstance'' @ 140f11570

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPlatformVerificationTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPlatformVerificationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPlatformVerificationTestAutomationTestInstance,&local_18,false
            );
  FPlatformVerificationTestAutomationTestInstance._0_8_ = &___7FPlatformVerificationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPlatformVerificationTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTuplesTestAutomationTestInstance'' @ 140f115d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTuplesTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTuplesTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTuplesTestAutomationTestInstance,&local_18,false);
  FTuplesTestAutomationTestInstance._0_8_ = &___7FTuplesTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTuplesTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GDevVersions'' @ 140f11630

void __cdecl _dynamic_initializer_for__GDevVersions__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDevVersions__);
  return;
}

// `dynamic_initializer_for_'GGameThreadFNameChurnTracker'' @ 140f11650

void __cdecl _dynamic_initializer_for__GGameThreadFNameChurnTracker__(void)

{
  FStackTracker::FStackTracker
            (&GGameThreadFNameChurnTracker.GGameThreadFNameChurnTracker,
             (_func___cdecl_void_FCallStack_ptr_void_ptr *)0x0,
             (_func___cdecl_void_FCallStack_ptr_ulong64_FOutputDevice_ptr *)0x0,
             (_func___cdecl_void_void_ptr *)0x0,false);
  GGameThreadFNameChurnTracker.bEnabled = false;
  GGameThreadFNameChurnTracker.CountDown = 0x7fffffff;
  GGameThreadFNameChurnTracker.DumpFrame = 0;
  atexit(_dynamic_atexit_destructor_for__GGameThreadFNameChurnTracker__);
  return;
}

// `dynamic_initializer_for_'GRegisterAnimObjectVersion'' @ 140f116a0

void __cdecl _dynamic_initializer_for__GRegisterAnimObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FAnimObjectVersion::GUID;
  local_38 = FAnimObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0xf,L"Dev-Anim",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterAnimObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterAnimPhysObjectVersion'' @ 140f11700

void __cdecl _dynamic_initializer_for__GRegisterAnimPhysObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FAnimPhysObjectVersion::GUID;
  local_38 = FAnimPhysObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x11,L"Dev-AnimPhys",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterAnimPhysObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterAutomationObjectVersion'' @ 140f11760

void __cdecl _dynamic_initializer_for__GRegisterAutomationObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FAutomationObjectVersion::GUID;
  local_38 = FAutomationObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-Automation",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterAutomationObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterBlueprintsObjectVersion'' @ 140f117c0

void __cdecl _dynamic_initializer_for__GRegisterBlueprintsObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FBlueprintsObjectVersion::GUID;
  local_38 = FBlueprintsObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,10,L"Dev-Blueprints",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterBlueprintsObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterBuildObjectVersion'' @ 140f11820

void __cdecl _dynamic_initializer_for__GRegisterBuildObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FBuildObjectVersion::GUID;
  local_38 = FBuildObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0,L"Dev-Build",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterBuildObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterCineCameraObjectVersion'' @ 140f11880

void __cdecl _dynamic_initializer_for__GRegisterCineCameraObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FCineCameraObjectVersion::GUID;
  local_38 = FCineCameraObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-CineCamera",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterCineCameraObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterCoreObjectVersion'' @ 140f118e0

void __cdecl _dynamic_initializer_for__GRegisterCoreObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FCoreObjectVersion::GUID;
  local_38 = FCoreObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,4,L"Dev-Core",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterCoreObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterDestructionObjectVersion'' @ 140f11940

void __cdecl _dynamic_initializer_for__GRegisterDestructionObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FDestructionObjectVersion::GUID;
  local_38 = FDestructionObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,10,L"Dev-Destruction",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterDestructionObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterEditorObjectVersion'' @ 140f119a0

void __cdecl _dynamic_initializer_for__GRegisterEditorObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FEditorObjectVersion::GUID;
  local_38 = FEditorObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x28,L"Dev-Editor",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterEditorObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterEnterpriseObjectVersion'' @ 140f11a00

void __cdecl _dynamic_initializer_for__GRegisterEnterpriseObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FEnterpriseObjectVersion::GUID;
  local_38 = FEnterpriseObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0xb,L"Dev-Enterprise",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterEnterpriseObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterExternalPhysicsCustomVersion'' @ 140f11a60

void __cdecl _dynamic_initializer_for__GRegisterExternalPhysicsCustomVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FExternalPhysicsCustomObjectVersion::GUID;
  local_38 = FExternalPhysicsCustomObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x29,L"Dev-Physics-Ext",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterExternalPhysicsCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterExternalPhysicsMaterialCustomVersion'' @ 140f11ac0

void __cdecl _dynamic_initializer_for__GRegisterExternalPhysicsMaterialCustomVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FExternalPhysicsMaterialCustomObjectVersion::GUID;
  local_38 = FExternalPhysicsMaterialCustomObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-PhysicsMaterial-Chaos",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterExternalPhysicsMaterialCustomVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteMainBranchObjectVersion'' @ 140f11b20

void __cdecl _dynamic_initializer_for__GRegisterFortniteMainBranchObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FFortniteMainBranchObjectVersion::GUID;
  local_38 = FFortniteMainBranchObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0xe1,L"FortniteMain",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterFortniteMainBranchObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteMainBranchSystemGuids'' @ 140f11b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterFortniteMainBranchSystemGuids__(void)

{
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *pTVar1;
  FDevSystemGuidRegistry *this;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = FFortniteMainBranchObjectVersion::GetSystemGuids
                     ((TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                       *)local_68);
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids(this,pTVar1);
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteReleaseBranchCustomObjectVersion'' @ 140f11c00

void __cdecl _dynamic_initializer_for__GRegisterFortniteReleaseBranchCustomObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FFortniteReleaseBranchCustomObjectVersion::GUID;
  local_38 = FFortniteReleaseBranchCustomObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x11,L"FortniteRelease",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterFortniteReleaseBranchCustomObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteReleaseBranchSystemGuids'' @ 140f11c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterFortniteReleaseBranchSystemGuids__(void)

{
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *pTVar1;
  FDevSystemGuidRegistry *this;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = FFortniteReleaseBranchCustomObjectVersion::GetSystemGuids
                     ((TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                       *)local_68);
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids(this,pTVar1);
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteSeasonBranchObjectVersion'' @ 140f11ce0

void __cdecl _dynamic_initializer_for__GRegisterFortniteSeasonBranchObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FFortniteSeasonBranchObjectVersion::GUID;
  local_38 = FFortniteSeasonBranchObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0xf,L"FortniteSeason",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterFortniteSeasonBranchObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteSeasonBranchSystemGuids'' @ 140f11d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterFortniteSeasonBranchSystemGuids__(void)

{
  int iVar1;
  bool bVar2;
  FDevSystemGuidRegistry *this;
  undefined1 auStackY_d8 [32];
  FGuid local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  FString::FString((FString *)local_80,"C8B712A947FA4A42B783183B1176DB99");
  bVar2 = FGuid::Parse((FString *)local_80,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_90._0_8_ = &Guids.STATICMESH_DERIVEDDATA_VER;
  local_90._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_90);
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  FString::FString((FString *)local_90,"08F9E554F3544CE7895C8A4D0FA8C7F0");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.NANITE_DERIVEDDATA_VER;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  FString::FString((FString *)local_90,"08A58144744FCA4A9BF6DD45DFC4EC13");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.Niagara_LatestScriptCompileVersion;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids
            (this,(TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                   *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// `dynamic_initializer_for_'GRegisterFortniteValkyrieBranchObjectVersion'' @ 140f11f60

void __cdecl _dynamic_initializer_for__GRegisterFortniteValkyrieBranchObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FFortniteValkyrieBranchObjectVersion::GUID;
  local_38 = FFortniteValkyrieBranchObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,8,L"FortniteValkyrie",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterFortniteValkyrieBranchObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterFrameworkObjectVersion'' @ 140f11fc0

void __cdecl _dynamic_initializer_for__GRegisterFrameworkObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FFrameworkObjectVersion::GUID;
  local_38 = FFrameworkObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x25,L"Dev-Framework",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterFrameworkObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterGeometryObjectVersion'' @ 140f12020

void __cdecl _dynamic_initializer_for__GRegisterGeometryObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FGeometryObjectVersion::GUID;
  local_38 = FGeometryObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,3,L"Private-Geometry",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterGeometryObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterLoadTimesObjectVersion'' @ 140f12080

void __cdecl _dynamic_initializer_for__GRegisterLoadTimesObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FLoadTimesObjectVersion::GUID;
  local_38 = FLoadTimesObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-LoadTimes",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterLoadTimesObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterMediaFrameworkObjectVersion'' @ 140f120e0

void __cdecl _dynamic_initializer_for__GRegisterMediaFrameworkObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FMediaFrameworkObjectVersion::GUID;
  local_38 = FMediaFrameworkObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,2,L"Dev-MediaFramework",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterMediaFrameworkObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterMobileObjectVersion'' @ 140f12140

void __cdecl _dynamic_initializer_for__GRegisterMobileObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FMobileObjectVersion::GUID;
  local_38 = FMobileObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,3,L"Dev-Mobile",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterMobileObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterNaniteResearchStreamObjectVersion'' @ 140f121a0

void __cdecl _dynamic_initializer_for__GRegisterNaniteResearchStreamObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FNaniteResearchStreamObjectVersion::GUID;
  local_38 = FNaniteResearchStreamObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-NaniteResearch",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterNaniteResearchStreamObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterNaniteResearchStreamSystemGuids'' @ 140f12200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterNaniteResearchStreamSystemGuids__(void)

{
  int iVar1;
  bool bVar2;
  FDevSystemGuidRegistry *this;
  undefined1 auStackY_d8 [32];
  FGuid local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  FString::FString((FString *)local_80,"753A91EF-2107-4316-969A-1AA37578D5A8");
  bVar2 = FGuid::Parse((FString *)local_80,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_90._0_8_ = &Guids.NANITE_DERIVEDDATA_VER;
  local_90._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_90);
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  FString::FString((FString *)local_90,"E5FAD907-D19B-4754-8325-9C48E405CCCC");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.STATICMESH_DERIVEDDATA_VER;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  FString::FString((FString *)local_90,"9B0FD28E-09DA-4E72-BFF8-7019EEE7270B");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.SkeletalMeshDerivedDataVersion;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids
            (this,(TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                   *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// `dynamic_initializer_for_'GRegisterNetworkingObjectVersion'' @ 140f12420

void __cdecl _dynamic_initializer_for__GRegisterNetworkingObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FNetworkingObjectVersion::GUID;
  local_38 = FNetworkingObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0,L"Dev-Networking",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterNetworkingObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterNiagaraObjectVersion'' @ 140f12480

void __cdecl _dynamic_initializer_for__GRegisterNiagaraObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FNiagaraObjectVersion::GUID;
  local_38 = FNiagaraObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-Niagara",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterNiagaraObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterOnlineObjectVersion'' @ 140f124e0

void __cdecl _dynamic_initializer_for__GRegisterOnlineObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FOnlineObjectVersion::GUID;
  local_38 = FOnlineObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0,L"Dev-Online",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterOnlineObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterParallelRenderingBranchSystemGuids'' @ 140f12540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterParallelRenderingBranchSystemGuids__(void)

{
  int iVar1;
  bool bVar2;
  FDevSystemGuidRegistry *this;
  undefined1 auStackY_d8 [32];
  FGuid local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  FString::FString((FString *)local_80,"6ED76D6068904EBB9B3ADAC259F0F53E");
  bVar2 = FGuid::Parse((FString *)local_80,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_90._0_8_ = &Guids.NANITE_DERIVEDDATA_VER;
  local_90._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_90);
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  FString::FString((FString *)local_90,"EB4D2761094040DD889CC1BE3D24E1B3");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.STATICMESH_DERIVEDDATA_VER;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  FString::FString((FString *)local_90,"21EC97751B084536AE887AA52996DA1C");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.MATERIALSHADERMAP_DERIVEDDATA_VER;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids
            (this,(TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                   *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// `dynamic_initializer_for_'GRegisterPhysicsObjectVersion'' @ 140f12760

void __cdecl _dynamic_initializer_for__GRegisterPhysicsObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FPhysicsObjectVersion::GUID;
  local_38 = FPhysicsObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x14,L"Dev-Physics",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterPhysicsObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterPlatformObjectVersion'' @ 140f127c0

void __cdecl _dynamic_initializer_for__GRegisterPlatformObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FPlatformObjectVersion::GUID;
  local_38 = FPlatformObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0,L"Dev-Platform",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterPlatformObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterReflectionCaptureObjectVersion'' @ 140f12820

void __cdecl _dynamic_initializer_for__GRegisterReflectionCaptureObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FReflectionCaptureObjectVersion::GUID;
  local_38 = FReflectionCaptureObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-ReflectionCapture",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterReflectionCaptureObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterRenderingObjectVersion'' @ 140f12880

void __cdecl _dynamic_initializer_for__GRegisterRenderingObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FRenderingObjectVersion::GUID;
  local_38 = FRenderingObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x31,L"Dev-Rendering",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterRenderingObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterSequencerObjectVersion'' @ 140f128e0

void __cdecl _dynamic_initializer_for__GRegisterSequencerObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FSequencerObjectVersion::GUID;
  local_38 = FSequencerObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0xd,L"Dev-Sequencer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterSequencerObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterUE5MainBranchSystemGuids'' @ 140f12940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterUE5MainBranchSystemGuids__(void)

{
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *pTVar1;
  FDevSystemGuidRegistry *this;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = FUE5MainStreamObjectVersion::GetSystemGuids
                     ((TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                       *)local_68);
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids(this,pTVar1);
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// `dynamic_initializer_for_'GRegisterUE5MainStreamObjectVersion'' @ 140f129c0

void __cdecl _dynamic_initializer_for__GRegisterUE5MainStreamObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FUE5MainStreamObjectVersion::GUID;
  local_38 = FUE5MainStreamObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x79,L"UE5-Main",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterUE5MainStreamObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterUE5ReleaseBranchSystemGuids'' @ 140f12a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterUE5ReleaseBranchSystemGuids__(void)

{
  TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_> *pTVar1;
  FDevSystemGuidRegistry *this;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = FUE5ReleaseStreamObjectVersion::GetSystemGuids
                     ((TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                       *)local_68);
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids(this,pTVar1);
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// `dynamic_initializer_for_'GRegisterUE5ReleaseStreamObjectVersion'' @ 140f12aa0

void __cdecl _dynamic_initializer_for__GRegisterUE5ReleaseStreamObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FUE5ReleaseStreamObjectVersion::GUID;
  local_38 = FUE5ReleaseStreamObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,0x3d,L"UE5-Release",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterUE5ReleaseStreamObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterUE5SpecialProjectStreamObjectVersion'' @ 140f12b00

void __cdecl _dynamic_initializer_for__GRegisterUE5SpecialProjectStreamObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FUE5SpecialProjectStreamObjectVersion::GUID;
  local_38 = FUE5SpecialProjectStreamObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,9,L"UE5-SpecialProject",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterUE5SpecialProjectStreamObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterUE5SpecialProjectStreamSystemGuids'' @ 140f12b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__GRegisterUE5SpecialProjectStreamSystemGuids__(void)

{
  int iVar1;
  bool bVar2;
  FDevSystemGuidRegistry *this;
  undefined1 auStackY_d8 [32];
  FGuid local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  FString::FString((FString *)local_80,"C73C42D8-4CA0-4EAF-8968-722EB9EEF812");
  bVar2 = FGuid::Parse((FString *)local_80,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_90._0_8_ = &Guids.NANITE_DERIVEDDATA_VER;
  local_90._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_90);
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  FString::FString((FString *)local_90,"56B88323-F44D-46B8-A3A3-B3441BC8F448");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.SkeletalMeshDerivedDataVersion;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  FString::FString((FString *)local_90,"BFB09A107AD8451294FFD3B321C3565C");
  bVar2 = FGuid::Parse((FString *)local_90,&local_a8);
  if (!bVar2) {
    local_a8.C = 0;
    local_a8.D = 0;
    local_a8.A = 0;
    local_a8.B = 0;
  }
  local_80._0_8_ = &Guids.MaterialTranslationDDCVersion;
  local_80._8_8_ = &local_a8;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_&&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)local_68,(TPairInitializer<FGuid_const_&,FGuid_&&> *)local_98,(bool *)local_80);
  if ((FGuid *)local_90._0_8_ != (FGuid *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  this = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids
            (this,(TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                   *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// `dynamic_initializer_for_'GRegisterVRObjectVersion'' @ 140f12d80

void __cdecl _dynamic_initializer_for__GRegisterVRObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FVRObjectVersion::GUID;
  local_38 = FVRObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,3,L"Dev-VR",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterVRObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisterVirtualProductionObjectVersion'' @ 140f12de0

void __cdecl _dynamic_initializer_for__GRegisterVirtualProductionObjectVersion__(void)

{
  FGuid FVar1;
  FGuid local_38;
  FGuid local_28 [2];
  
  FVar1 = FVirtualProductionObjectVersion::GUID;
  local_38 = FVirtualProductionObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_38,1,L"Dev-VirtualProduction",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  local_28[0] = FVar1;
  FDevVersionRegistration::RecordDevVersion(local_28);
  atexit(_dynamic_atexit_destructor_for__GRegisterVirtualProductionObjectVersion__);
  return;
}

// `dynamic_initializer_for_'GRegisteredSystemGuids'' @ 140f12e40

void __cdecl _dynamic_initializer_for__GRegisteredSystemGuids__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRegisteredSystemGuids__);
  return;
}

// `dynamic_initializer_for_'GVirtualizationSystem'' @ 140f12e60

void __cdecl UE::Virtualization::_dynamic_initializer_for__GVirtualizationSystem__(void)

{
  atexit(_dynamic_atexit_destructor_for__GVirtualizationSystem__);
  return;
}

// `dynamic_initializer_for_'InvalidNonWhitespaceCharactersTestAutomationTestInstance'' @ 140f12e80

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__InvalidNonWhitespaceCharactersTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"InvalidNonWhitespaceCharactersTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&InvalidNonWhitespaceCharactersTestAutomationTestInstance,
             &local_18,false);
  InvalidNonWhitespaceCharactersTestAutomationTestInstance._0_8_ =
       &___7InvalidNonWhitespaceCharactersTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__InvalidNonWhitespaceCharactersTestAutomationTestInstance__)
  ;
  return;
}

// `dynamic_initializer_for_'LogDevObjectVersion'' @ 140f12ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDevObjectVersion__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDevObjectVersion,L"LogDevObjectVersion",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDevObjectVersion__);
  return;
}

// `dynamic_initializer_for_'LogUnrealNames'' @ 140f12f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUnrealNames__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogUnrealNames,L"LogUnrealNames",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUnrealNames__);
  return;
}

// `dynamic_initializer_for_'NameToDisplayStringExemptionLock'' @ 140f12f60

void __cdecl _dynamic_initializer_for__NameToDisplayStringExemptionLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__NameToDisplayStringExemptionLock__);
  return;
}

// `dynamic_initializer_for_'NameToDisplayStringExemptions'' @ 140f12f80

void __cdecl _dynamic_initializer_for__NameToDisplayStringExemptions__(void)

{
  atexit(_dynamic_atexit_destructor_for__NameToDisplayStringExemptions__);
  return;
}

// `dynamic_initializer_for_'SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance'' @ 140f12fa0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"SingleInvalidNonWhitespaceCharacterTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance,
             &local_18,false);
  SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance._0_8_ =
       &___7SingleInvalidNonWhitespaceCharacterTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'SingleInvalidWhitespaceCharacterTestAutomationTestInstance'' @ 140f13000

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__SingleInvalidWhitespaceCharacterTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"SingleInvalidWhitespaceCharacterTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&SingleInvalidWhitespaceCharacterTestAutomationTestInstance,
             &local_18,false);
  SingleInvalidWhitespaceCharacterTestAutomationTestInstance._0_8_ =
       &___7SingleInvalidWhitespaceCharacterTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__SingleInvalidWhitespaceCharacterTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'SmallTaskAllocator'' @ 140f13060

void __cdecl UE::Tasks::Private::_dynamic_initializer_for__SmallTaskAllocator__(void)

{
  code *pcVar1;
  bool bVar2;
  
  SmallTaskAllocator._0_4_ = TlsAlloc();
  if (SmallTaskAllocator._0_4_ == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  atexit(_dynamic_atexit_destructor_for__SmallTaskAllocator__);
  return;
}

// `dynamic_initializer_for_'StatsChannelReg'' @ 140f130c0

void __cdecl _dynamic_initializer_for__StatsChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&StatsChannelObject,"StatsChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'TaskEventBaseAllocator'' @ 140f130f0

void __cdecl UE::Tasks::Private::_dynamic_initializer_for__TaskEventBaseAllocator__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TaskEventBaseAllocator._0_4_ = TlsAlloc();
  if (TaskEventBaseAllocator._0_4_ == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  atexit(_dynamic_atexit_destructor_for__TaskEventBaseAllocator__);
  return;
}

// `dynamic_initializer_for_'ThreadIdleScopeChannelReg'' @ 140f13150

void __cdecl _dynamic_initializer_for__ThreadIdleScopeChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&ThreadIdleScopeChannelObject,"ThreadIdleScopeChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'ValidFNameTestAutomationTestInstance'' @ 140f13180

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__ValidFNameTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ValidFNameTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&ValidFNameTestAutomationTestInstance,&local_18,false);
  ValidFNameTestAutomationTestInstance._0_8_ = &___7ValidFNameTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__ValidFNameTestAutomationTestInstance__);
  return;
}

// `scalar_deleting_destructor' @ 141a34820

void * __thiscall
FCbArrayBufferTest::_scalar_deleting_destructor_(FCbArrayBufferTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a34bc0

void * __thiscall
FCbObjectBufferTest::_scalar_deleting_destructor_(FCbObjectBufferTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a364c0

void * __thiscall
FCbFieldBufferIteratorTest::_scalar_deleting_destructor_
          (FCbFieldBufferIteratorTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a36d50

void * __thiscall
FCbFieldBinaryTest::_scalar_deleting_destructor_(FCbFieldBinaryTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a374d0

void * __thiscall
FCbFieldParseTest::_scalar_deleting_destructor_(FCbFieldParseTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a37d50

void * __thiscall
FCbFieldStringTest::_scalar_deleting_destructor_(FCbFieldStringTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a37d90

void * __thiscall
FCbFieldIntegerTestBase::_scalar_deleting_destructor_(FCbFieldIntegerTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a38060

void * __thiscall FTuplesTest::_scalar_deleting_destructor_(FTuplesTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a38870

void * __thiscall
FCbFieldIntegerTest::_scalar_deleting_destructor_(FCbFieldIntegerTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a39ef0

void * __thiscall
FCbFieldFloatTest::_scalar_deleting_destructor_(FCbFieldFloatTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// GetTestFlags @ 141a39f30

EAutomationTestFlags __thiscall DoubleBadCharactersTest::GetTestFlags(DoubleBadCharactersTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 141a39f40

bool __thiscall DoubleBadCharactersTest::IsStressTest(DoubleBadCharactersTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a39f50

uint __thiscall DoubleBadCharactersTest::GetRequiredDeviceNum(DoubleBadCharactersTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a39f60

FString * __thiscall
DoubleBadCharactersTest::GetTestSourceFileName
          (DoubleBadCharactersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\NameTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a39f90

int __thiscall DoubleBadCharactersTest::GetTestSourceFileLine(DoubleBadCharactersTest *this)

{
  return 0x1a;
}

// GetTests @ 141a39fa0

/* WARNING: Removing unreachable block (ram,0x000141a3a08d) */
/* WARNING: Removing unreachable block (ram,0x000141a3a158) */

void __thiscall
DoubleBadCharactersTest::GetTests
          (DoubleBadCharactersTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.NameTypes.Test repeated invalid characters");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a3a180

bool __thiscall DoubleBadCharactersTest::RunTest(DoubleBadCharactersTest *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,
                     L"Name may not contain whitespace characters (space, line feed [\\n], carriage return [\\r], tab) or the following characters: \" \' U+000B"
                    );
  ::FString::FString(&local_38,L" \t\r\n\'\"\'  \r\n\'\"\' \v");
  pFVar2 = ::FString::FString(&local_18," \n\"\r\'\'\t\v");
  bVar1 = FNameInvalidCharsTest::RunTest
                    (pFVar2,&local_38,&local_28,false,(FAutomationTestBase *)this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetBeautifiedTestName @ 141a3a210

FString * __thiscall
DoubleBadCharactersTest::GetBeautifiedTestName
          (DoubleBadCharactersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.NameTypes.Test repeated invalid characters"
                    );
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141a3a240

void * __thiscall
DoubleBadCharactersTest::_scalar_deleting_destructor_(DoubleBadCharactersTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// GetTestFlags @ 141a3a280

EAutomationTestFlags __thiscall
SingleInvalidWhitespaceCharacterTest::GetTestFlags(SingleInvalidWhitespaceCharacterTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 141a3a290

bool __thiscall
SingleInvalidWhitespaceCharacterTest::IsStressTest(SingleInvalidWhitespaceCharacterTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3a2a0

uint __thiscall
SingleInvalidWhitespaceCharacterTest::GetRequiredDeviceNum
          (SingleInvalidWhitespaceCharacterTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3a2b0

FString * __thiscall
SingleInvalidWhitespaceCharacterTest::GetTestSourceFileName
          (SingleInvalidWhitespaceCharacterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\NameTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3a2e0

int __thiscall
SingleInvalidWhitespaceCharacterTest::GetTestSourceFileLine
          (SingleInvalidWhitespaceCharacterTest *this)

{
  return 0x27;
}

// GetTests @ 141a3a2f0

/* WARNING: Removing unreachable block (ram,0x000141a3a3dd) */
/* WARNING: Removing unreachable block (ram,0x000141a3a4a8) */

void __thiscall
SingleInvalidWhitespaceCharacterTest::GetTests
          (SingleInvalidWhitespaceCharacterTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.NameTypes.Test single whitespace character");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a3a4d0

bool __thiscall
SingleInvalidWhitespaceCharacterTest::RunTest
          (SingleInvalidWhitespaceCharacterTest *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"Name may not contain whitespace characters (line feed [\\n])");
  ::FString::FString(&local_38,L"test\nstring");
  pFVar2 = ::FString::FString(&local_18," \n\"\r\'\'");
  bVar1 = FNameInvalidCharsTest::RunTest
                    (pFVar2,&local_38,&local_28,false,(FAutomationTestBase *)this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetBeautifiedTestName @ 141a3a560

FString * __thiscall
SingleInvalidWhitespaceCharacterTest::GetBeautifiedTestName
          (SingleInvalidWhitespaceCharacterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.NameTypes.Test single whitespace character"
                    );
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141a3a590

void * __thiscall
SingleInvalidWhitespaceCharacterTest::_scalar_deleting_destructor_
          (SingleInvalidWhitespaceCharacterTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// GetTestFlags @ 141a3a5d0

EAutomationTestFlags __thiscall
SingleInvalidNonWhitespaceCharacterTest::GetTestFlags(SingleInvalidNonWhitespaceCharacterTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 141a3a5e0

bool __thiscall
SingleInvalidNonWhitespaceCharacterTest::IsStressTest(SingleInvalidNonWhitespaceCharacterTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3a5f0

uint __thiscall
SingleInvalidNonWhitespaceCharacterTest::GetRequiredDeviceNum
          (SingleInvalidNonWhitespaceCharacterTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3a600

FString * __thiscall
SingleInvalidNonWhitespaceCharacterTest::GetTestSourceFileName
          (SingleInvalidNonWhitespaceCharacterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\NameTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3a630

int __thiscall
SingleInvalidNonWhitespaceCharacterTest::GetTestSourceFileLine
          (SingleInvalidNonWhitespaceCharacterTest *this)

{
  return 0x34;
}

// GetTests @ 141a3a640

/* WARNING: Removing unreachable block (ram,0x000141a3a72d) */
/* WARNING: Removing unreachable block (ram,0x000141a3a7f8) */

void __thiscall
SingleInvalidNonWhitespaceCharacterTest::GetTests
          (SingleInvalidNonWhitespaceCharacterTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.NameTypes.Test single non-whitespace character");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a3a820

bool __thiscall
SingleInvalidNonWhitespaceCharacterTest::RunTest
          (SingleInvalidNonWhitespaceCharacterTest *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"Name may not contain whitespace characters (line feed [\\n])");
  ::FString::FString(&local_38,L"test\nstring");
  pFVar2 = ::FString::FString(&local_18," \n\"\r\'\'");
  bVar1 = FNameInvalidCharsTest::RunTest
                    (pFVar2,&local_38,&local_28,false,(FAutomationTestBase *)this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetBeautifiedTestName @ 141a3a8b0

FString * __thiscall
SingleInvalidNonWhitespaceCharacterTest::GetBeautifiedTestName
          (SingleInvalidNonWhitespaceCharacterTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.NameTypes.Test single non-whitespace character");
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141a3a8e0

void * __thiscall
SingleInvalidNonWhitespaceCharacterTest::_scalar_deleting_destructor_
          (SingleInvalidNonWhitespaceCharacterTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// GetTestFlags @ 141a3ab70

EAutomationTestFlags __thiscall
InvalidNonWhitespaceCharactersTest::GetTestFlags(InvalidNonWhitespaceCharactersTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 141a3ab80

bool __thiscall
InvalidNonWhitespaceCharactersTest::IsStressTest(InvalidNonWhitespaceCharactersTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3af90

uint __thiscall
InvalidNonWhitespaceCharactersTest::GetRequiredDeviceNum(InvalidNonWhitespaceCharactersTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3afd0

FString * __thiscall
InvalidNonWhitespaceCharactersTest::GetTestSourceFileName
          (InvalidNonWhitespaceCharactersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\NameTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3b000

int __thiscall
InvalidNonWhitespaceCharactersTest::GetTestSourceFileLine(InvalidNonWhitespaceCharactersTest *this)

{
  return 0x3f;
}

// GetTests @ 141a3b010

/* WARNING: Removing unreachable block (ram,0x000141a3b0fd) */
/* WARNING: Removing unreachable block (ram,0x000141a3b1c8) */

void __thiscall
InvalidNonWhitespaceCharactersTest::GetTests
          (InvalidNonWhitespaceCharactersTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.NameTypes.Test invalid whitespace characters");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a3b1f0

bool __thiscall
InvalidNonWhitespaceCharactersTest::RunTest
          (InvalidNonWhitespaceCharactersTest *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,
                     L"Name may not contain whitespace characters (space, line feed [\\n]) or the following characters: \" ; : Q W o p"
                    );
  ::FString::FString(&local_38,L"test\";:QWERts \ntringyuiopQWERtstringyuiopqwertstringyuiop");
  pFVar2 = ::FString::FString(&local_18,"\";:QWop \n");
  bVar1 = FNameInvalidCharsTest::RunTest
                    (pFVar2,&local_38,&local_28,false,(FAutomationTestBase *)this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetBeautifiedTestName @ 141a3b280

FString * __thiscall
InvalidNonWhitespaceCharactersTest::GetBeautifiedTestName
          (InvalidNonWhitespaceCharactersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Core.NameTypes.Test invalid whitespace characters");
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141a3b2b0

void * __thiscall
FCbFieldBoolTest::_scalar_deleting_destructor_(FCbFieldBoolTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3b2f0

void * __thiscall
InvalidNonWhitespaceCharactersTest::_scalar_deleting_destructor_
          (InvalidNonWhitespaceCharactersTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// GetTestFlags @ 141a3b330

EAutomationTestFlags __thiscall ValidFNameTest::GetTestFlags(ValidFNameTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 141a3b340

bool __thiscall ValidFNameTest::IsStressTest(ValidFNameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3b350

uint __thiscall ValidFNameTest::GetRequiredDeviceNum(ValidFNameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3b360

FString * __thiscall
ValidFNameTest::GetTestSourceFileName(ValidFNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\NameTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3b390

int __thiscall ValidFNameTest::GetTestSourceFileLine(ValidFNameTest *this)

{
  return 0x4b;
}

// GetTests @ 141a3b3a0

/* WARNING: Removing unreachable block (ram,0x000141a3b48d) */
/* WARNING: Removing unreachable block (ram,0x000141a3b558) */

void __thiscall
ValidFNameTest::GetTests
          (ValidFNameTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.NameTypes.Test valid FName");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a3b580

bool __thiscall ValidFNameTest::RunTest(ValidFNameTest *this,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"");
  ::FString::FString(&local_38,L"ValidName");
  pFVar2 = ::FString::FString(&local_18,"\"\n\r");
  bVar1 = FNameInvalidCharsTest::RunTest
                    (pFVar2,&local_38,&local_28,true,(FAutomationTestBase *)this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetBeautifiedTestName @ 141a3b610

FString * __thiscall
ValidFNameTest::GetBeautifiedTestName(ValidFNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.NameTypes.Test valid FName");
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141a3b640

void * __thiscall ValidFNameTest::_scalar_deleting_destructor_(ValidFNameTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3c120

void * __thiscall
FCbFieldObjectAttachmentTest::_scalar_deleting_destructor_
          (FCbFieldObjectAttachmentTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3cc00

void * __thiscall
FCbFieldBinaryAttachmentTest::_scalar_deleting_destructor_
          (FCbFieldBinaryAttachmentTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3d5c0

void * __thiscall
FCbFieldHashTest::_scalar_deleting_destructor_(FCbFieldHashTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3dbc0

void * __thiscall
FCbFieldUuidTest::_scalar_deleting_destructor_(FCbFieldUuidTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3e190

void * __thiscall
FCbFieldDateTimeTest::_scalar_deleting_destructor_(FCbFieldDateTimeTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3e760

void * __thiscall
FCbFieldTimeSpanTest::_scalar_deleting_destructor_(FCbFieldTimeSpanTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3ee20

void * __thiscall
FCbFieldObjectIdTest::_scalar_deleting_destructor_(FCbFieldObjectIdTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3fce0

void * __thiscall
FCbFieldCustomByIdTest::_scalar_deleting_destructor_(FCbFieldCustomByIdTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a3ffb0

void * __thiscall
FFileManagerReaderTest::_scalar_deleting_destructor_(FFileManagerReaderTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a402f0

void * __thiscall
FPlatformVerificationTest::_scalar_deleting_destructor_
          (FPlatformVerificationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a41100

void * __thiscall
FCbFieldCustomByNameTest::_scalar_deleting_destructor_(FCbFieldCustomByNameTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a41140

void * __thiscall
FCbFieldTestBase::_scalar_deleting_destructor_(FCbFieldTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a41d40

void * __thiscall
FCbFieldNoneTest::_scalar_deleting_destructor_(FCbFieldNoneTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a43110

void * __thiscall
FCbFieldIterateAttachmentsTest::_scalar_deleting_destructor_
          (FCbFieldIterateAttachmentsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a43590

void * __thiscall
FCbFieldNullTest::_scalar_deleting_destructor_(FCbFieldNullTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a454e0

void * __thiscall
FCbFieldObjectTest::_scalar_deleting_destructor_(FCbFieldObjectTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a468f0

void * __thiscall
FCbFieldBufferTest::_scalar_deleting_destructor_(FCbFieldBufferTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a47e70

void * __thiscall
FCbFieldArrayTest::_scalar_deleting_destructor_(FCbFieldArrayTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 141a47ec0

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __cdecl
`LoadNameBatchAsync'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Async<`LoadNameBatchAsync'::__l15::<lambda_1>_> @ 141a48180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_LoadNameBatchAsync_::__l15::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1d8 [32];
  TPromise<void> local_198;
  undefined4 local_180;
  TFutureState<void> *local_178;
  FRunnableThread *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FConstructor local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  undefined8 uStack_e0;
  TReferenceControllerBase<1> *local_d8;
  undefined ***local_d0;
  TFutureState<void> *local_c8;
  undefined **local_b8;
  FNameBatchAsyncLoader *pFStack_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined ***local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_180 = 0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`LoadNameBatchAsync'::`15'::<lambda_1>,1,0>::_vftable_;
  uStack_e0 = (param_2->Loader).Object;
  local_d8 = (param_2->Loader).SharedReferenceCount.ReferenceController;
  local_f8._0_8_ =
       UE::Core::Private::Function::TFunctionRefCaller<`LoadNameBatchAsync'::__l15::<lambda_1>,void>
       ::Call;
  local_d0 = (undefined ***)0x0;
  (param_2->Loader).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->Loader).Object = (FNameBatchAsyncLoader *)0x0;
  TPromise<void>::TPromise<void>(&local_198,param_3);
  if ((local_198.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_198.bFutureRetrieved = true;
  if ((local_198.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_198.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_198.State.Object;
  if (local_198.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_130.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_180 = 1;
    if (param_1 == TaskGraph) {
      local_180 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_130,(TUniqueFunction<void___cdecl(void)> *)&local_178,
               (TPromise<void> *)local_f8,(Type *)&local_198);
    if (local_178 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_178->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_178)(local_178,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (TFutureState<void> *)local_f8._0_8_;
    local_a0 = local_d0;
    local_98 = local_198.State.Object;
    local_90 = local_198.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8;
    pFStack_b0 = uStack_e0;
    local_a8 = local_d8;
    local_f8._0_8_ = (TFutureState<void> *)0x0;
    local_198.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_198.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_198.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`LoadNameBatchAsync'::`15'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_c8;
    local_50[7] = (code *)local_a0;
    local_a0 = (undefined ***)0x0;
    local_50[4] = (code *)local_b8;
    local_50[5] = (code *)pFStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_c8 = (TFutureState<void> *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (local_c8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar17 = local_a0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FNameBatchAsyncLoader **)&pTVar12->field_0x28 = uStack_e0;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_170 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FNameBatchAsyncLoader **)&pTVar12->field_0x28 = uStack_e0;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar19.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_f8._0_8_;
        puVar14[7] = local_d0;
        *(undefined4 *)(puVar14 + 4) = local_e8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_e0._4_4_;
        puVar14[6] = local_d8;
        if (puVar14[2] != 0) {
          local_f8._0_8_ = pTVar20;
        }
        puVar14[8] = local_198.State.Object;
        puVar14[9] = local_198.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_198.bFutureRetrieved;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_198.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_f8._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar17 = local_d0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// BatchLoadNameWithHash<char> @ 141a48d70

FDisplayNameEntryId __cdecl BatchLoadNameWithHash<char>(char *param_1,uint param_2,ulong64 param_3)

{
  FNameValue<1> *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FNameStringView_u_0 FVar5;
  bool bVar6;
  FNameEntry *pFVar7;
  undefined4 in_register_00000014;
  ulonglong uVar8;
  longlong lVar9;
  FNamePoolShard<1> *this;
  ulonglong in_R9;
  uint uVar10;
  FNameSlot local_res18 [2];
  FNameStringView_u_0 local_48;
  undefined8 uStack_40;
  FNameStringView_u_0 local_38;
  int iStack_30;
  undefined1 uStack_2c;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  undefined4 local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = uStack_40;
  local_38._4_4_ = in_register_00000014;
  local_38._0_4_ = param_2;
  uVar10 = 0;
  iStack_30 = (int)param_3;
  if (iStack_30 == 4) {
    uVar10 = (uint)((*(uint *)local_38.Data & 0xdfdfdfdf) == 0x454e4f4e);
  }
  uVar8 = in_R9 >> 0x20 & 0xff;
  uStack_20 = uVar10 << 0x1d | (uint)(in_R9 >> 0x20) & 0xe0000000;
  uStack_24 = (uint)in_R9;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = uStack_24;
  lVar9 = uVar8 * 0x40;
  uStack_40._0_6_ = CONCAT24(((ushort)(in_R9 >> 0x28) & 0x1f | (short)param_3 << 5) * 2,uStack_20);
  uVar4 = uStack_40;
  this = (FNamePoolShard<1> *)(NamePoolData + lVar9 + 0x10040);
  uStack_2b = uStack_40._5_2_;
  uStack_1c = uStack_40._4_4_;
  uStack_40._7_1_ = SUB81(uVar3,7);
  uStack_29 = uStack_40._7_1_;
  uStack_2c = 0;
  local_28 = local_48._0_4_;
  uStack_40 = uVar4;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar10 = *(uint *)(NamePoolData + lVar9 + 0x1004c);
  uVar8 = (ulonglong)(uStack_24 & uVar10);
  pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar9 + 0x10050) + uVar8 * 4);
  uVar2 = *(uint *)(*(longlong *)(NamePoolData + lVar9 + 0x10050) + uVar8 * 4);
  FVar5 = local_48;
  local_48 = local_38;
  while (local_38 = local_48, uVar2 != 0) {
    if ((uVar2 & 0xe0000000) == uStack_20) {
      pFVar7 = (FNameEntry *)
               ((ulonglong)((uVar2 & 0xffff) * 2) +
               *(longlong *)
                (*(longlong *)(NamePoolData + lVar9 + 0x10058) + 0x10 +
                (ulonglong)((uVar2 & 0x1fffffff) >> 0x10) * 8));
      if (pFVar7->Header == uStack_1c._0_2_) {
        uStack_40 = CONCAT17(uStack_29,CONCAT25(uStack_2b,CONCAT14(uStack_2c,iStack_30)));
        bVar6 = EqualsSameDimensions<1>(pFVar7,(FNameStringView *)&local_48);
        FVar5 = local_48;
        if (bVar6) break;
      }
    }
    local_48 = FVar5;
    uVar8 = (ulonglong)((int)uVar8 + 1U & uVar10);
    pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar9 + 0x10050) + uVar8 * 4);
    FVar5 = local_48;
    local_48 = local_38;
    uVar2 = *(uint *)(*(longlong *)(NamePoolData + lVar9 + 0x10050) + uVar8 * 4);
  }
  local_48 = FVar5;
  uVar10 = *(uint *)&(pFVar1->Name).field0_0x0;
  if (uVar10 == 0) {
    FNamePoolShard<1>::CreateAndInsertEntry<FWriteScopeLock>(this,local_res18,pFVar1);
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(uint *)param_1 = local_res18[0].IdAndHash;
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(uint *)param_1 = uVar10 & 0x1fffffff;
  }
  return (FDisplayNameEntryId)SUB84(param_1,0);
}

// BatchLoadNameWithHash<wchar_t> @ 141a48f20

FDisplayNameEntryId __cdecl
BatchLoadNameWithHash<wchar_t>(wchar_t *param_1,uint param_2,ulong64 param_3)

{
  FNameValue<1> *pFVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FNameStringView_u_0 FVar6;
  bool bVar7;
  FNameEntry *pFVar8;
  undefined4 in_register_00000014;
  ulonglong uVar9;
  FNamePoolShard<1> *this;
  ulonglong in_R9;
  longlong lVar10;
  FNameSlot local_res18 [2];
  FNameStringView_u_0 local_48;
  undefined8 uStack_40;
  FNameStringView_u_0 local_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  undefined4 local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_38._4_4_ = in_register_00000014;
  local_38._0_4_ = param_2;
  uStack_24 = (uint)in_R9;
  uVar9 = in_R9 >> 0x20 & 0xff;
  uStack_40 = CONCAT44(uStack_40._4_4_,(int)(in_R9 >> 0x20)) & 0xffffffffe0000000;
  uVar4 = uStack_40;
  local_28 = (undefined4)uVar9;
  local_48._4_4_ = uStack_24;
  local_48._0_4_ = local_28;
  lVar10 = uVar9 * 0x40;
  uStack_30 = (undefined4)param_3;
  uStack_20 = (uint)uStack_40;
  uVar9 = CONCAT26(uStack_40._6_2_,
                   CONCAT24(((ushort)(in_R9 >> 0x28) & 0x1f | (short)param_3 << 5) * 2,
                            (uint)uStack_40));
  uStack_40 = uVar9 | 0x100000000;
  uVar5 = uStack_40;
  this = (FNamePoolShard<1> *)(NamePoolData + lVar10 + 0x10040);
  uStack_40._5_2_ = (undefined2)(uVar9 >> 0x28);
  uStack_2b = uStack_40._5_2_;
  uStack_40._4_4_ = SUB84(uVar5,4);
  uStack_1c = uStack_40._4_4_;
  uStack_40._7_1_ = SUB81(uVar4,7);
  uStack_29 = uStack_40._7_1_;
  uStack_2c = 1;
  uStack_40 = uVar5;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar2 = *(uint *)(NamePoolData + lVar10 + 0x1004c);
  uVar9 = (ulonglong)(uStack_24 & uVar2);
  pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
  uVar3 = *(uint *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
  FVar6 = local_48;
  local_48 = local_38;
  while (local_38 = local_48, uVar3 != 0) {
    if ((uVar3 & 0xe0000000) == uStack_20) {
      pFVar8 = (FNameEntry *)
               ((ulonglong)((uVar3 & 0xffff) * 2) +
               *(longlong *)
                (*(longlong *)(NamePoolData + lVar10 + 0x10058) + 0x10 +
                (ulonglong)((uVar3 & 0x1fffffff) >> 0x10) * 8));
      if (pFVar8->Header == uStack_1c._0_2_) {
        uStack_40 = CONCAT17(uStack_29,CONCAT25(uStack_2b,CONCAT14(uStack_2c,uStack_30)));
        bVar7 = EqualsSameDimensions<1>(pFVar8,(FNameStringView *)&local_48);
        FVar6 = local_48;
        if (bVar7) break;
      }
    }
    local_48 = FVar6;
    uVar9 = (ulonglong)((int)uVar9 + 1U & uVar2);
    pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
    FVar6 = local_48;
    local_48 = local_38;
    uVar3 = *(uint *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
  }
  local_48 = FVar6;
  uVar2 = *(uint *)&(pFVar1->Name).field0_0x0;
  if (uVar2 == 0) {
    FNamePoolShard<1>::CreateAndInsertEntry<FWriteScopeLock>(this,local_res18,pFVar1);
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(uint *)param_1 = local_res18[0].IdAndHash;
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(uint *)param_1 = uVar2 & 0x1fffffff;
  }
  return (FDisplayNameEntryId)SUB84(param_1,0);
}

// Call<`UE::TEventCount<unsigned_int>::WaitFor'::__l5::<lambda_1>_> @ 141a490c0

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::TEventCount<unsigned_int>::WaitFor_::__l5::<lambda_1>_>(void *param_1)

{
  return (**(uint **)param_1 & 0xfffffffe) == *(uint *)((longlong)param_1 + 8);
}

// CheckLazyName<char,4> @ 141a49140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char,4>(char (*param_1) [4])

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FName FVar9;
  FNameEntryIds FVar10;
  FNameEntry *this;
  wchar_t *pwVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  char local_300 [2] [4];
  char (*local_2f8) [4];
  undefined8 uStack_2f0;
  char (*local_2e8) [4];
  undefined8 uStack_2e0;
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  int local_2b0 [2];
  int local_2a8 [2];
  int local_2a0 [2];
  char (*local_298) [4];
  int iStack_290;
  uint uStack_28c;
  char (*local_288) [4];
  longlong lStack_280;
  longlong local_278;
  char (*local_268) [4];
  int iStack_260;
  uint uStack_25c;
  FLiteralOrName local_258;
  uint local_250;
  undefined1 local_24c;
  char (*local_248) [4];
  int iStack_240;
  uint uStack_23c;
  FLiteralOrName local_238;
  uint local_230;
  undefined1 local_22c;
  FLiteralOrName local_228;
  uint local_220;
  undefined1 local_21c;
  FLiteralOrName local_218;
  uint local_210;
  undefined1 local_20c;
  FLiteralOrName local_208;
  uint local_200;
  undefined1 local_1fc;
  char (*local_1f8) [4];
  int iStack_1f0;
  uint uStack_1ec;
  FLiteralOrName local_1e8;
  uint local_1e0;
  undefined1 local_1dc;
  FLiteralOrName local_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  FLiteralOrName local_1c8;
  uint local_1c0;
  undefined1 local_1bc;
  FNameStringView_u_0 local_1a8;
  ulonglong uStack_1a0;
  FNameStringView_u_0 local_198;
  ulonglong uStack_190;
  FNameStringView_u_0 local_188;
  ulonglong uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2d8[0] = 3;
  local_258 = (FLiteralOrName)param_1;
  local_250 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d8);
  local_24c = 1;
  iVar6 = 0;
  local_298 = param_1;
  if (param_1 == (char (*) [4])0x0) {
    iStack_290 = 0;
    lStack_280 = (ulonglong)uStack_28c << 0x20;
LAB_141a49216:
    local_308 = 0;
    local_288 = local_298;
  }
  else {
    sVar8 = strlen(*param_1);
    iStack_290 = (int)sVar8;
    lStack_280 = CONCAT44(uStack_28c,iStack_290);
    local_288 = local_298;
    if (iStack_290 == 0) goto LAB_141a49216;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&lStack_280);
    uVar2 = uStack_25c;
    local_308 = (ulonglong)local_308._4_4_ << 0x20;
    iVar12 = (int)lStack_280;
    if (iVar12 == 0) {
      local_308 = 0;
    }
    else {
      local_268 = local_288;
      uStack_25c = uStack_25c & 0xffffff00;
      uStack_1a0 = CONCAT44(uVar2,iVar12) & 0xffffff00ffffffff;
      local_1a8.Data = local_288;
      iStack_260 = iVar12;
      FVar10 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1a8,FNAME_Add);
      local_308 = CONCAT44(uVar5,FVar10.ComparisonId.Value.Value);
    }
  }
  FLazyName::Resolve((FLazyName *)&local_258);
  if ((local_308 != local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2e8 = param_1;
  if (param_1 == (char (*) [4])0x0) {
    uStack_2e0 = (ulonglong)uStack_2e0._4_4_ << 0x20;
LAB_141a492e5:
    local_318 = 0;
  }
  else {
    sVar8 = strlen(*param_1);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)sVar8);
    if ((int)sVar8 == 0) goto LAB_141a492e5;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2e0);
    uVar2 = uStack_23c;
    local_318 = (ulonglong)local_318._4_4_ << 0x20;
    iVar12 = (int)uStack_2e0;
    if (iVar12 == 0) {
      local_318 = 0;
    }
    else {
      local_248 = local_2e8;
      uStack_23c = uStack_23c & 0xffffff00;
      uStack_190 = CONCAT44(uVar2,iVar12) & 0xffffff00ffffffff;
      local_198.Data = local_2e8;
      iStack_240 = iVar12;
      FVar10 = FNameHelper::FindOrStoreString((FNameStringView *)&local_198,FNAME_Add);
      local_318 = CONCAT44(uVar5,FVar10.ComparisonId.Value.Value);
    }
  }
  local_2d0[0] = 3;
  local_238 = (FLiteralOrName)param_1;
  local_230 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d0);
  lVar13 = local_318;
  local_22c = 1;
  if (((longlong)param_1 < 0) || (local_318 != 0)) {
    FVar9 = FLazyName::Resolve((FLazyName *)&local_238);
    bVar4 = lVar13 == *(longlong *)FVar9;
  }
  else {
    if (param_1 != (char (*) [4])0x0) {
      sVar8 = strlen(*param_1);
      iVar6 = (int)sVar8;
    }
    bVar4 = FNameHelper::EqualsString<char>((FName)0x0,*param_1,iVar6);
  }
  if ((bVar4 == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2c8[0] = 3;
  local_228 = (FLiteralOrName)param_1;
  local_220 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c8);
  local_21c = 1;
  local_2c0[0] = 3;
  local_218 = (FLiteralOrName)param_1;
  local_210 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c0);
  local_20c = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_218,(FLazyName *)&local_228);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2b8[0] = 3;
  local_208 = (FLiteralOrName)param_1;
  local_200 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b8);
  local_1fc = 1;
  FVar9 = FLazyName::Resolve((FLazyName *)&local_208);
  local_2f8 = param_1;
  if (param_1 == (char (*) [4])0x0) {
    uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
  }
  else {
    sVar8 = strlen(*param_1);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)sVar8);
    if ((int)sVar8 != 0) {
      uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2f0);
      uVar2 = uStack_1ec;
      local_310 = (ulonglong)local_310._4_4_ << 0x20;
      iVar6 = (int)uStack_2f0;
      if (iVar6 == 0) {
        local_310 = 0;
      }
      else {
        local_1f8 = local_2f8;
        uStack_1ec = uStack_1ec & 0xffffff00;
        uStack_180 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
        local_188.Data = local_2f8;
        iStack_1f0 = iVar6;
        FVar10 = FNameHelper::FindOrStoreString((FNameStringView *)&local_188,FNAME_Add);
        local_310 = CONCAT44(uVar5,FVar10.ComparisonId.Value.Value);
      }
      goto LAB_141a494b7;
    }
  }
  local_310 = 0;
LAB_141a494b7:
  if ((local_310 != *(longlong *)FVar9) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_300[0] = *param_1;
  local_1e8.AnsiLiteral = local_300[0];
  local_2b0[0] = 3;
  local_1e0 = UE::Core::Private::ParseNumberFromName<char>(local_300[0],local_2b0);
  local_1dc = 1;
  local_2a8[0] = 3;
  local_1d8 = (FLiteralOrName)param_1;
  local_1d0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a8);
  local_1cc = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_1d8,(FLazyName *)&local_1e8);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2a0[0] = 3;
  local_1c8 = (FLiteralOrName)param_1;
  local_1c0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a0);
  local_1bc = 1;
  FVar9 = FLazyName::Resolve((FLazyName *)&local_1c8);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar9);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar9 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  local_d8.End = (wchar_t *)local_38;
  lVar13 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  sVar8 = strlen(*param_1);
  iVar6 = (int)sVar8;
  pwVar11 = local_b8;
  pwVar14 = local_b8;
  if (local_38 < local_b8 + iVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,(longlong)iVar6);
    pwVar11 = local_d8.CurPos;
    pwVar14 = local_d8.Base;
  }
  if (iVar6 != 0) {
    pwVar11 = FGenericPlatformString::Convert<char,wchar_t>(pwVar11,iVar6,*param_1,iVar6);
    pwVar14 = local_d8.Base;
    local_d8.CurPos = pwVar11;
  }
  iVar6 = (int)((longlong)pwVar11 - (longlong)pwVar14 >> 1);
  iVar12 = (int)(lVar13 >> 1);
  if (((iVar12 == iVar6) &&
      (((iVar12 == 0 || (iVar6 == 0)) ||
       (iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar3,pwVar14,(longlong)iVar6), iVar7 == 0)))) &&
     (iVar12 == iVar6)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    return;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0xfb1,L"");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CheckLazyName<char,5> @ 141a497a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char,5>(char (*param_1) [5])

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  FName FVar8;
  FNameEntryIds FVar9;
  FNameEntry *this;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  char (*local_2f8) [5];
  undefined8 uStack_2f0;
  char (*local_2e8) [5];
  undefined8 uStack_2e0;
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  int local_2b0 [2];
  int local_2a8 [2];
  int local_2a0 [2];
  char (*local_298) [5];
  int iStack_290;
  uint uStack_28c;
  char (*local_288) [5];
  longlong lStack_280;
  longlong local_278;
  char (*local_268) [5];
  int iStack_260;
  uint uStack_25c;
  FLiteralOrName local_258;
  uint local_250;
  undefined1 local_24c;
  char (*local_248) [5];
  int iStack_240;
  uint uStack_23c;
  FLiteralOrName local_238;
  uint local_230;
  undefined1 local_22c;
  FLiteralOrName local_228;
  uint local_220;
  undefined1 local_21c;
  FLiteralOrName local_218;
  uint local_210;
  undefined1 local_20c;
  FLiteralOrName local_208;
  uint local_200;
  undefined1 local_1fc;
  char (*local_1f8) [5];
  int iStack_1f0;
  uint uStack_1ec;
  FLiteralOrName local_1e8;
  uint local_1e0;
  undefined1 local_1dc;
  FLiteralOrName local_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  FLiteralOrName local_1c8;
  uint local_1c0;
  undefined1 local_1bc;
  FNameStringView_u_0 local_1a8;
  ulonglong uStack_1a0;
  FNameStringView_u_0 local_198;
  ulonglong uStack_190;
  FNameStringView_u_0 local_188;
  ulonglong uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  undefined4 local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a0[0] = 4;
  local_258 = (FLiteralOrName)param_1;
  local_250 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a0);
  iVar12 = 0;
  local_24c = 1;
  iVar11 = 0;
  local_298 = param_1;
  if (param_1 == (char (*) [5])0x0) {
    iStack_290 = 0;
    lStack_280 = (ulonglong)uStack_28c << 0x20;
LAB_141a49874:
    local_318 = 0;
    local_288 = local_298;
  }
  else {
    sVar7 = strlen(*param_1);
    iStack_290 = (int)sVar7;
    lStack_280 = CONCAT44(uStack_28c,iStack_290);
    local_288 = local_298;
    if (iStack_290 == 0) goto LAB_141a49874;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&lStack_280);
    uVar2 = uStack_25c;
    local_318 = (ulonglong)local_318._4_4_ << 0x20;
    iVar6 = (int)lStack_280;
    if (iVar6 == 0) {
      local_318 = 0;
    }
    else {
      local_268 = local_288;
      uStack_25c = uStack_25c & 0xffffff00;
      uStack_1a0 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_1a8.Data = local_288;
      iStack_260 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1a8,FNAME_Add);
      local_318 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  FLazyName::Resolve((FLazyName *)&local_258);
  if ((local_318 != local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2f8 = param_1;
  if (param_1 == (char (*) [5])0x0) {
    uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
LAB_141a49943:
    local_310 = 0;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)sVar7);
    if ((int)sVar7 == 0) goto LAB_141a49943;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2f0);
    uVar2 = uStack_23c;
    local_310 = (ulonglong)local_310._4_4_ << 0x20;
    iVar6 = (int)uStack_2f0;
    if (iVar6 == 0) {
      local_310 = 0;
    }
    else {
      local_248 = local_2f8;
      uStack_23c = uStack_23c & 0xffffff00;
      uStack_190 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_198.Data = local_2f8;
      iStack_240 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_198,FNAME_Add);
      local_310 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  local_2d8[0] = 4;
  local_238 = (FLiteralOrName)param_1;
  local_230 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d8);
  lVar13 = local_310;
  local_22c = 1;
  if (((longlong)param_1 < 0) || (local_310 != 0)) {
    FVar8 = FLazyName::Resolve((FLazyName *)&local_238);
    bVar4 = lVar13 == *(longlong *)FVar8;
  }
  else {
    if (param_1 != (char (*) [5])0x0) {
      sVar7 = strlen(*param_1);
      iVar11 = (int)sVar7;
    }
    bVar4 = FNameHelper::EqualsString<char>((FName)0x0,*param_1,iVar11);
  }
  if ((bVar4 == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2d0[0] = 4;
  local_228 = (FLiteralOrName)param_1;
  local_220 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d0);
  local_21c = 1;
  local_2c8[0] = 4;
  local_218 = (FLiteralOrName)param_1;
  local_210 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c8);
  local_20c = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_218,(FLazyName *)&local_228);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2c0[0] = 4;
  local_208 = (FLiteralOrName)param_1;
  local_200 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c0);
  local_1fc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_208);
  local_2e8 = param_1;
  if (param_1 == (char (*) [5])0x0) {
    uStack_2e0 = (ulonglong)uStack_2e0._4_4_ << 0x20;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)sVar7);
    if ((int)sVar7 != 0) {
      uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2e0);
      uVar2 = uStack_1ec;
      local_308 = (ulonglong)local_308._4_4_ << 0x20;
      iVar11 = (int)uStack_2e0;
      if (iVar11 == 0) {
        local_308 = 0;
      }
      else {
        local_1f8 = local_2e8;
        uStack_1ec = uStack_1ec & 0xffffff00;
        uStack_180 = CONCAT44(uVar2,iVar11) & 0xffffff00ffffffff;
        local_188.Data = local_2e8;
        iStack_1f0 = iVar11;
        FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_188,FNAME_Add);
        local_308 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
      }
      goto LAB_141a49b17;
    }
  }
  local_308 = 0;
LAB_141a49b17:
  if ((local_308 != *(longlong *)FVar8) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38 = *(undefined4 *)*param_1;
  local_34 = (*param_1)[4];
  local_1e8.AnsiLiteral = (char *)&local_38;
  local_2b8[0] = 4;
  local_1e0 = UE::Core::Private::ParseNumberFromName<char>((char *)&local_38,local_2b8);
  local_1dc = 1;
  local_2b0[0] = 4;
  local_1d8 = (FLiteralOrName)param_1;
  local_1d0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b0);
  local_1cc = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_1d8,(FLazyName *)&local_1e8);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2a8[0] = 4;
  local_1c8 = (FLiteralOrName)param_1;
  local_1c0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a8);
  local_1bc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_1c8);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar8);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar8 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  lVar13 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.End = (wchar_t *)&local_38;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  if (param_1 != (char (*) [5])0x0) {
    sVar7 = strlen(*param_1);
    iVar12 = (int)sVar7;
  }
  pwVar10 = local_b8;
  pwVar14 = local_b8;
  if (&local_38 < local_b8 + iVar12) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,(longlong)iVar12);
    pwVar10 = local_d8.CurPos;
    pwVar14 = local_d8.Base;
  }
  if (iVar12 != 0) {
    pwVar10 = FGenericPlatformString::Convert<char,wchar_t>(pwVar10,iVar12,*param_1,iVar12);
    pwVar14 = local_d8.Base;
    local_d8.CurPos = pwVar10;
  }
  iVar11 = (int)((longlong)pwVar10 - (longlong)pwVar14 >> 1);
  iVar12 = (int)(lVar13 >> 1);
  if (((iVar12 == iVar11) &&
      (((iVar12 == 0 || (iVar11 == 0)) ||
       (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar3,pwVar14,(longlong)iVar11), iVar6 == 0))))
     && (iVar12 == iVar11)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    return;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0xfb1,L"");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CheckLazyName<char,6> @ 141a49e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char,6>(char (*param_1) [6])

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  FName FVar8;
  FNameEntryIds FVar9;
  FNameEntry *this;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  char (*local_2f8) [6];
  undefined8 uStack_2f0;
  char (*local_2e8) [6];
  undefined8 uStack_2e0;
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  int local_2b0 [2];
  int local_2a8 [2];
  int local_2a0 [2];
  char (*local_298) [6];
  int iStack_290;
  uint uStack_28c;
  char (*local_288) [6];
  longlong lStack_280;
  longlong local_278;
  char (*local_268) [6];
  int iStack_260;
  uint uStack_25c;
  FLiteralOrName local_258;
  uint local_250;
  undefined1 local_24c;
  char (*local_248) [6];
  int iStack_240;
  uint uStack_23c;
  FLiteralOrName local_238;
  uint local_230;
  undefined1 local_22c;
  FLiteralOrName local_228;
  uint local_220;
  undefined1 local_21c;
  FLiteralOrName local_218;
  uint local_210;
  undefined1 local_20c;
  FLiteralOrName local_208;
  uint local_200;
  undefined1 local_1fc;
  char (*local_1f8) [6];
  int iStack_1f0;
  uint uStack_1ec;
  FLiteralOrName local_1e8;
  uint local_1e0;
  undefined1 local_1dc;
  FLiteralOrName local_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  FLiteralOrName local_1c8;
  uint local_1c0;
  undefined1 local_1bc;
  FNameStringView_u_0 local_1a8;
  ulonglong uStack_1a0;
  FNameStringView_u_0 local_198;
  ulonglong uStack_190;
  FNameStringView_u_0 local_188;
  ulonglong uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a0[0] = 5;
  local_258 = (FLiteralOrName)param_1;
  local_250 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a0);
  iVar12 = 0;
  local_24c = 1;
  iVar11 = 0;
  local_298 = param_1;
  if (param_1 == (char (*) [6])0x0) {
    iStack_290 = 0;
    lStack_280 = (ulonglong)uStack_28c << 0x20;
LAB_141a49ee4:
    local_318 = 0;
    local_288 = local_298;
  }
  else {
    sVar7 = strlen(*param_1);
    iStack_290 = (int)sVar7;
    lStack_280 = CONCAT44(uStack_28c,iStack_290);
    local_288 = local_298;
    if (iStack_290 == 0) goto LAB_141a49ee4;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&lStack_280);
    uVar2 = uStack_25c;
    local_318 = (ulonglong)local_318._4_4_ << 0x20;
    iVar6 = (int)lStack_280;
    if (iVar6 == 0) {
      local_318 = 0;
    }
    else {
      local_268 = local_288;
      uStack_25c = uStack_25c & 0xffffff00;
      uStack_1a0 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_1a8.Data = local_288;
      iStack_260 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1a8,FNAME_Add);
      local_318 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  FLazyName::Resolve((FLazyName *)&local_258);
  if ((local_318 != local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2f8 = param_1;
  if (param_1 == (char (*) [6])0x0) {
    uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
LAB_141a49fb3:
    local_310 = 0;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)sVar7);
    if ((int)sVar7 == 0) goto LAB_141a49fb3;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2f0);
    uVar2 = uStack_23c;
    local_310 = (ulonglong)local_310._4_4_ << 0x20;
    iVar6 = (int)uStack_2f0;
    if (iVar6 == 0) {
      local_310 = 0;
    }
    else {
      local_248 = local_2f8;
      uStack_23c = uStack_23c & 0xffffff00;
      uStack_190 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_198.Data = local_2f8;
      iStack_240 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_198,FNAME_Add);
      local_310 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  local_2d8[0] = 5;
  local_238 = (FLiteralOrName)param_1;
  local_230 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d8);
  lVar13 = local_310;
  local_22c = 1;
  if (((longlong)param_1 < 0) || (local_310 != 0)) {
    FVar8 = FLazyName::Resolve((FLazyName *)&local_238);
    bVar4 = lVar13 == *(longlong *)FVar8;
  }
  else {
    if (param_1 != (char (*) [6])0x0) {
      sVar7 = strlen(*param_1);
      iVar11 = (int)sVar7;
    }
    bVar4 = FNameHelper::EqualsString<char>((FName)0x0,*param_1,iVar11);
  }
  if ((bVar4 == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2d0[0] = 5;
  local_228 = (FLiteralOrName)param_1;
  local_220 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d0);
  local_21c = 1;
  local_2c8[0] = 5;
  local_218 = (FLiteralOrName)param_1;
  local_210 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c8);
  local_20c = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_218,(FLazyName *)&local_228);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2c0[0] = 5;
  local_208 = (FLiteralOrName)param_1;
  local_200 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c0);
  local_1fc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_208);
  local_2e8 = param_1;
  if (param_1 == (char (*) [6])0x0) {
    uStack_2e0 = (ulonglong)uStack_2e0._4_4_ << 0x20;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)sVar7);
    if ((int)sVar7 != 0) {
      uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2e0);
      uVar2 = uStack_1ec;
      local_308 = (ulonglong)local_308._4_4_ << 0x20;
      iVar11 = (int)uStack_2e0;
      if (iVar11 == 0) {
        local_308 = 0;
      }
      else {
        local_1f8 = local_2e8;
        uStack_1ec = uStack_1ec & 0xffffff00;
        uStack_180 = CONCAT44(uVar2,iVar11) & 0xffffff00ffffffff;
        local_188.Data = local_2e8;
        iStack_1f0 = iVar11;
        FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_188,FNAME_Add);
        local_308 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
      }
      goto LAB_141a4a187;
    }
  }
  local_308 = 0;
LAB_141a4a187:
  if ((local_308 != *(longlong *)FVar8) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38 = *(undefined4 *)*param_1;
  local_34 = *(undefined2 *)(*param_1 + 4);
  local_1e8.AnsiLiteral = (char *)&local_38;
  local_2b8[0] = 5;
  local_1e0 = UE::Core::Private::ParseNumberFromName<char>((char *)&local_38,local_2b8);
  local_1dc = 1;
  local_2b0[0] = 5;
  local_1d8 = (FLiteralOrName)param_1;
  local_1d0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b0);
  local_1cc = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_1d8,(FLazyName *)&local_1e8);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2a8[0] = 5;
  local_1c8 = (FLiteralOrName)param_1;
  local_1c0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a8);
  local_1bc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_1c8);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar8);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar8 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  lVar13 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.End = (wchar_t *)&local_38;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  if (param_1 != (char (*) [6])0x0) {
    sVar7 = strlen(*param_1);
    iVar12 = (int)sVar7;
  }
  pwVar10 = local_b8;
  pwVar14 = local_b8;
  if (&local_38 < local_b8 + iVar12) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,(longlong)iVar12);
    pwVar10 = local_d8.CurPos;
    pwVar14 = local_d8.Base;
  }
  if (iVar12 != 0) {
    pwVar10 = FGenericPlatformString::Convert<char,wchar_t>(pwVar10,iVar12,*param_1,iVar12);
    pwVar14 = local_d8.Base;
    local_d8.CurPos = pwVar10;
  }
  iVar11 = (int)((longlong)pwVar10 - (longlong)pwVar14 >> 1);
  iVar12 = (int)(lVar13 >> 1);
  if (((iVar12 == iVar11) &&
      (((iVar12 == 0 || (iVar11 == 0)) ||
       (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar3,pwVar14,(longlong)iVar11), iVar6 == 0))))
     && (iVar12 == iVar11)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    return;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0xfb1,L"");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CheckLazyName<char,7> @ 141a4a480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char,7>(char (*param_1) [7])

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  FName FVar8;
  FNameEntryIds FVar9;
  FNameEntry *this;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  char (*local_2f8) [7];
  undefined8 uStack_2f0;
  char (*local_2e8) [7];
  undefined8 uStack_2e0;
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  int local_2b0 [2];
  int local_2a8 [2];
  int local_2a0 [2];
  char (*local_298) [7];
  int iStack_290;
  uint uStack_28c;
  char (*local_288) [7];
  longlong lStack_280;
  longlong local_278;
  char (*local_268) [7];
  int iStack_260;
  uint uStack_25c;
  FLiteralOrName local_258;
  uint local_250;
  undefined1 local_24c;
  char (*local_248) [7];
  int iStack_240;
  uint uStack_23c;
  FLiteralOrName local_238;
  uint local_230;
  undefined1 local_22c;
  FLiteralOrName local_228;
  uint local_220;
  undefined1 local_21c;
  FLiteralOrName local_218;
  uint local_210;
  undefined1 local_20c;
  FLiteralOrName local_208;
  uint local_200;
  undefined1 local_1fc;
  char (*local_1f8) [7];
  int iStack_1f0;
  uint uStack_1ec;
  FLiteralOrName local_1e8;
  uint local_1e0;
  undefined1 local_1dc;
  FLiteralOrName local_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  FLiteralOrName local_1c8;
  uint local_1c0;
  undefined1 local_1bc;
  FNameStringView_u_0 local_1a8;
  ulonglong uStack_1a0;
  FNameStringView_u_0 local_198;
  ulonglong uStack_190;
  FNameStringView_u_0 local_188;
  ulonglong uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  undefined4 local_38;
  undefined2 local_34;
  char local_32;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a0[0] = 6;
  local_258 = (FLiteralOrName)param_1;
  local_250 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a0);
  iVar12 = 0;
  local_24c = 1;
  iVar11 = 0;
  local_298 = param_1;
  if (param_1 == (char (*) [7])0x0) {
    iStack_290 = 0;
    lStack_280 = (ulonglong)uStack_28c << 0x20;
LAB_141a4a554:
    local_318 = 0;
    local_288 = local_298;
  }
  else {
    sVar7 = strlen(*param_1);
    iStack_290 = (int)sVar7;
    lStack_280 = CONCAT44(uStack_28c,iStack_290);
    local_288 = local_298;
    if (iStack_290 == 0) goto LAB_141a4a554;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&lStack_280);
    uVar2 = uStack_25c;
    local_318 = (ulonglong)local_318._4_4_ << 0x20;
    iVar6 = (int)lStack_280;
    if (iVar6 == 0) {
      local_318 = 0;
    }
    else {
      local_268 = local_288;
      uStack_25c = uStack_25c & 0xffffff00;
      uStack_1a0 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_1a8.Data = local_288;
      iStack_260 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1a8,FNAME_Add);
      local_318 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  FLazyName::Resolve((FLazyName *)&local_258);
  if ((local_318 != local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2f8 = param_1;
  if (param_1 == (char (*) [7])0x0) {
    uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
LAB_141a4a623:
    local_310 = 0;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)sVar7);
    if ((int)sVar7 == 0) goto LAB_141a4a623;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2f0);
    uVar2 = uStack_23c;
    local_310 = (ulonglong)local_310._4_4_ << 0x20;
    iVar6 = (int)uStack_2f0;
    if (iVar6 == 0) {
      local_310 = 0;
    }
    else {
      local_248 = local_2f8;
      uStack_23c = uStack_23c & 0xffffff00;
      uStack_190 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_198.Data = local_2f8;
      iStack_240 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_198,FNAME_Add);
      local_310 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  local_2d8[0] = 6;
  local_238 = (FLiteralOrName)param_1;
  local_230 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d8);
  lVar13 = local_310;
  local_22c = 1;
  if (((longlong)param_1 < 0) || (local_310 != 0)) {
    FVar8 = FLazyName::Resolve((FLazyName *)&local_238);
    bVar4 = lVar13 == *(longlong *)FVar8;
  }
  else {
    if (param_1 != (char (*) [7])0x0) {
      sVar7 = strlen(*param_1);
      iVar11 = (int)sVar7;
    }
    bVar4 = FNameHelper::EqualsString<char>((FName)0x0,*param_1,iVar11);
  }
  if ((bVar4 == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2d0[0] = 6;
  local_228 = (FLiteralOrName)param_1;
  local_220 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d0);
  local_21c = 1;
  local_2c8[0] = 6;
  local_218 = (FLiteralOrName)param_1;
  local_210 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c8);
  local_20c = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_218,(FLazyName *)&local_228);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2c0[0] = 6;
  local_208 = (FLiteralOrName)param_1;
  local_200 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c0);
  local_1fc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_208);
  local_2e8 = param_1;
  if (param_1 == (char (*) [7])0x0) {
    uStack_2e0 = (ulonglong)uStack_2e0._4_4_ << 0x20;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)sVar7);
    if ((int)sVar7 != 0) {
      uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2e0);
      uVar2 = uStack_1ec;
      local_308 = (ulonglong)local_308._4_4_ << 0x20;
      iVar11 = (int)uStack_2e0;
      if (iVar11 == 0) {
        local_308 = 0;
      }
      else {
        local_1f8 = local_2e8;
        uStack_1ec = uStack_1ec & 0xffffff00;
        uStack_180 = CONCAT44(uVar2,iVar11) & 0xffffff00ffffffff;
        local_188.Data = local_2e8;
        iStack_1f0 = iVar11;
        FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_188,FNAME_Add);
        local_308 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
      }
      goto LAB_141a4a7f7;
    }
  }
  local_308 = 0;
LAB_141a4a7f7:
  if ((local_308 != *(longlong *)FVar8) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38 = *(undefined4 *)*param_1;
  local_34 = *(undefined2 *)(*param_1 + 4);
  local_32 = (*param_1)[6];
  local_1e8.AnsiLiteral = (char *)&local_38;
  local_2b8[0] = 6;
  local_1e0 = UE::Core::Private::ParseNumberFromName<char>((char *)&local_38,local_2b8);
  local_1dc = 1;
  local_2b0[0] = 6;
  local_1d8 = (FLiteralOrName)param_1;
  local_1d0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b0);
  local_1cc = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_1d8,(FLazyName *)&local_1e8);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2a8[0] = 6;
  local_1c8 = (FLiteralOrName)param_1;
  local_1c0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a8);
  local_1bc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_1c8);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar8);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar8 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  lVar13 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.End = (wchar_t *)&local_38;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  if (param_1 != (char (*) [7])0x0) {
    sVar7 = strlen(*param_1);
    iVar12 = (int)sVar7;
  }
  pwVar10 = local_b8;
  pwVar14 = local_b8;
  if (&local_38 < local_b8 + iVar12) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,(longlong)iVar12);
    pwVar10 = local_d8.CurPos;
    pwVar14 = local_d8.Base;
  }
  if (iVar12 != 0) {
    pwVar10 = FGenericPlatformString::Convert<char,wchar_t>(pwVar10,iVar12,*param_1,iVar12);
    pwVar14 = local_d8.Base;
    local_d8.CurPos = pwVar10;
  }
  iVar11 = (int)((longlong)pwVar10 - (longlong)pwVar14 >> 1);
  iVar12 = (int)(lVar13 >> 1);
  if (((iVar12 == iVar11) &&
      (((iVar12 == 0 || (iVar11 == 0)) ||
       (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar3,pwVar14,(longlong)iVar11), iVar6 == 0))))
     && (iVar12 == iVar11)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    return;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0xfb1,L"");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CheckLazyName<char,8> @ 141a4ab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char,8>(char (*param_1) [8])

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FName FVar9;
  FNameEntryIds FVar10;
  FNameEntry *this;
  wchar_t *pwVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  char (*local_2f8) [8];
  undefined8 uStack_2f0;
  char (*local_2e8) [8];
  undefined8 uStack_2e0;
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  int local_2b0 [2];
  int local_2a8 [2];
  int local_2a0 [2];
  char (*local_298) [8];
  int iStack_290;
  uint uStack_28c;
  char (*local_288) [8];
  longlong lStack_280;
  longlong local_278;
  char (*local_268) [8];
  int iStack_260;
  uint uStack_25c;
  FLiteralOrName local_258;
  uint local_250;
  undefined1 local_24c;
  char (*local_248) [8];
  int iStack_240;
  uint uStack_23c;
  FLiteralOrName local_238;
  uint local_230;
  undefined1 local_22c;
  FLiteralOrName local_228;
  uint local_220;
  undefined1 local_21c;
  FLiteralOrName local_218;
  uint local_210;
  undefined1 local_20c;
  FLiteralOrName local_208;
  uint local_200;
  undefined1 local_1fc;
  char (*local_1f8) [8];
  int iStack_1f0;
  uint uStack_1ec;
  FLiteralOrName local_1e8;
  uint local_1e0;
  undefined1 local_1dc;
  FLiteralOrName local_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  FLiteralOrName local_1c8;
  uint local_1c0;
  undefined1 local_1bc;
  FNameStringView_u_0 local_1a8;
  ulonglong uStack_1a0;
  FNameStringView_u_0 local_198;
  ulonglong uStack_190;
  FNameStringView_u_0 local_188;
  ulonglong uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  char local_38 [8];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a0[0] = 7;
  local_258 = (FLiteralOrName)param_1;
  local_250 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a0);
  local_24c = 1;
  iVar6 = 0;
  local_298 = param_1;
  if (param_1 == (char (*) [8])0x0) {
    iStack_290 = 0;
    lStack_280 = (ulonglong)uStack_28c << 0x20;
LAB_141a4abd4:
    local_308 = 0;
    local_288 = local_298;
  }
  else {
    sVar8 = strlen(*param_1);
    iStack_290 = (int)sVar8;
    lStack_280 = CONCAT44(uStack_28c,iStack_290);
    local_288 = local_298;
    if (iStack_290 == 0) goto LAB_141a4abd4;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&lStack_280);
    uVar2 = uStack_25c;
    local_308 = (ulonglong)local_308._4_4_ << 0x20;
    iVar12 = (int)lStack_280;
    if (iVar12 == 0) {
      local_308 = 0;
    }
    else {
      local_268 = local_288;
      uStack_25c = uStack_25c & 0xffffff00;
      uStack_1a0 = CONCAT44(uVar2,iVar12) & 0xffffff00ffffffff;
      local_1a8.Data = local_288;
      iStack_260 = iVar12;
      FVar10 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1a8,FNAME_Add);
      local_308 = CONCAT44(uVar5,FVar10.ComparisonId.Value.Value);
    }
  }
  FLazyName::Resolve((FLazyName *)&local_258);
  if ((local_308 != local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2f8 = param_1;
  if (param_1 == (char (*) [8])0x0) {
    uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
LAB_141a4aca3:
    local_318 = 0;
  }
  else {
    sVar8 = strlen(*param_1);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)sVar8);
    if ((int)sVar8 == 0) goto LAB_141a4aca3;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2f0);
    uVar2 = uStack_23c;
    local_318 = (ulonglong)local_318._4_4_ << 0x20;
    iVar12 = (int)uStack_2f0;
    if (iVar12 == 0) {
      local_318 = 0;
    }
    else {
      local_248 = local_2f8;
      uStack_23c = uStack_23c & 0xffffff00;
      uStack_190 = CONCAT44(uVar2,iVar12) & 0xffffff00ffffffff;
      local_198.Data = local_2f8;
      iStack_240 = iVar12;
      FVar10 = FNameHelper::FindOrStoreString((FNameStringView *)&local_198,FNAME_Add);
      local_318 = CONCAT44(uVar5,FVar10.ComparisonId.Value.Value);
    }
  }
  local_2d8[0] = 7;
  local_238 = (FLiteralOrName)param_1;
  local_230 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d8);
  lVar13 = local_318;
  local_22c = 1;
  if (((longlong)param_1 < 0) || (local_318 != 0)) {
    FVar9 = FLazyName::Resolve((FLazyName *)&local_238);
    bVar4 = lVar13 == *(longlong *)FVar9;
  }
  else {
    if (param_1 != (char (*) [8])0x0) {
      sVar8 = strlen(*param_1);
      iVar6 = (int)sVar8;
    }
    bVar4 = FNameHelper::EqualsString<char>((FName)0x0,*param_1,iVar6);
  }
  if ((bVar4 == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2d0[0] = 7;
  local_228 = (FLiteralOrName)param_1;
  local_220 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d0);
  local_21c = 1;
  local_2c8[0] = 7;
  local_218 = (FLiteralOrName)param_1;
  local_210 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c8);
  local_20c = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_218,(FLazyName *)&local_228);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2c0[0] = 7;
  local_208 = (FLiteralOrName)param_1;
  local_200 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c0);
  local_1fc = 1;
  FVar9 = FLazyName::Resolve((FLazyName *)&local_208);
  local_2e8 = param_1;
  if (param_1 == (char (*) [8])0x0) {
    uStack_2e0 = (ulonglong)uStack_2e0._4_4_ << 0x20;
  }
  else {
    sVar8 = strlen(*param_1);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)sVar8);
    if ((int)sVar8 != 0) {
      uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2e0);
      uVar2 = uStack_1ec;
      local_310 = (ulonglong)local_310._4_4_ << 0x20;
      iVar6 = (int)uStack_2e0;
      if (iVar6 == 0) {
        local_310 = 0;
      }
      else {
        local_1f8 = local_2e8;
        uStack_1ec = uStack_1ec & 0xffffff00;
        uStack_180 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
        local_188.Data = local_2e8;
        iStack_1f0 = iVar6;
        FVar10 = FNameHelper::FindOrStoreString((FNameStringView *)&local_188,FNAME_Add);
        local_310 = CONCAT44(uVar5,FVar10.ComparisonId.Value.Value);
      }
      goto LAB_141a4ae77;
    }
  }
  local_310 = 0;
LAB_141a4ae77:
  if ((local_310 != *(longlong *)FVar9) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38 = *param_1;
  local_1e8.AnsiLiteral = local_38;
  local_2b8[0] = 7;
  local_1e0 = UE::Core::Private::ParseNumberFromName<char>(local_38,local_2b8);
  local_1dc = 1;
  local_2b0[0] = 7;
  local_1d8 = (FLiteralOrName)param_1;
  local_1d0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b0);
  local_1cc = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_1d8,(FLazyName *)&local_1e8);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2a8[0] = 7;
  local_1c8 = (FLiteralOrName)param_1;
  local_1c0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2a8);
  local_1bc = 1;
  FVar9 = FLazyName::Resolve((FLazyName *)&local_1c8);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar9);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar9 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  local_d8.End = (wchar_t *)local_38;
  lVar13 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  sVar8 = strlen(*param_1);
  iVar6 = (int)sVar8;
  pwVar11 = local_b8;
  pwVar14 = local_b8;
  if (local_38 < local_b8 + iVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,(longlong)iVar6);
    pwVar11 = local_d8.CurPos;
    pwVar14 = local_d8.Base;
  }
  if (iVar6 != 0) {
    pwVar11 = FGenericPlatformString::Convert<char,wchar_t>(pwVar11,iVar6,*param_1,iVar6);
    pwVar14 = local_d8.Base;
    local_d8.CurPos = pwVar11;
  }
  iVar6 = (int)((longlong)pwVar11 - (longlong)pwVar14 >> 1);
  iVar12 = (int)(lVar13 >> 1);
  if (((iVar12 == iVar6) &&
      (((iVar12 == 0 || (iVar6 == 0)) ||
       (iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar3,pwVar14,(longlong)iVar6), iVar7 == 0)))) &&
     (iVar12 == iVar6)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    return;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0xfb1,L"");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CheckLazyName<char,15> @ 141a4b160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char,15>(char (*param_1) [15])

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  FName FVar8;
  FNameEntryIds FVar9;
  FNameEntry *this;
  char (**ppacVar10) [15];
  int iVar11;
  int iVar12;
  longlong lVar13;
  char (**ppacVar14) [15];
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  char (*local_308) [15];
  undefined8 uStack_300;
  char (*local_2f8) [15];
  undefined8 uStack_2f0;
  int local_2e8 [2];
  int local_2e0 [2];
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  int local_2b0 [2];
  char (*local_2a8) [15];
  longlong lStack_2a0;
  longlong local_298;
  char (*local_288) [15];
  int iStack_280;
  uint uStack_27c;
  FLiteralOrName local_278;
  uint local_270;
  undefined1 local_26c;
  char (*local_268) [15];
  int iStack_260;
  uint uStack_25c;
  FLiteralOrName local_258;
  uint local_250;
  undefined1 local_24c;
  FLiteralOrName local_248;
  uint local_240;
  undefined1 local_23c;
  FLiteralOrName local_238;
  uint local_230;
  undefined1 local_22c;
  FLiteralOrName local_228;
  uint local_220;
  undefined1 local_21c;
  char (*local_218) [15];
  int iStack_210;
  uint uStack_20c;
  FLiteralOrName local_208;
  uint local_200;
  undefined1 local_1fc;
  FLiteralOrName local_1f8;
  uint local_1f0;
  undefined1 local_1ec;
  FLiteralOrName local_1e8;
  uint local_1e0;
  undefined1 local_1dc;
  FNameStringView_u_0 local_1b8;
  ulonglong uStack_1b0;
  FNameStringView_u_0 local_1a8;
  ulonglong uStack_1a0;
  FNameStringView_u_0 local_198;
  ulonglong uStack_190;
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [64];
  TStringBuilderBase<wchar_t> local_e8;
  char (*local_c8 [16]) [15];
  char (*local_48) [15];
  int iStack_40;
  undefined2 uStack_3c;
  char cStack_3a;
  undefined1 uStack_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_2b0[0] = 0xe;
  local_278 = (FLiteralOrName)param_1;
  local_270 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b0);
  iVar12 = 0;
  local_26c = 1;
  iVar11 = 0;
  local_48 = param_1;
  if (param_1 == (char (*) [15])0x0) {
    iStack_40 = 0;
    lStack_2a0 = (ulonglong)CONCAT13(uStack_39,CONCAT12(cStack_3a,uStack_3c)) << 0x20;
LAB_141a4b243:
    local_318 = 0;
    local_2a8 = local_48;
  }
  else {
    sVar7 = strlen(*param_1);
    iStack_40 = (int)sVar7;
    lStack_2a0 = CONCAT17(uStack_39,CONCAT16(cStack_3a,CONCAT24(uStack_3c,iStack_40)));
    local_2a8 = local_48;
    if (iStack_40 == 0) goto LAB_141a4b243;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&lStack_2a0);
    uVar2 = uStack_27c;
    local_318 = (ulonglong)local_318._4_4_ << 0x20;
    iVar6 = (int)lStack_2a0;
    if (iVar6 == 0) {
      local_318 = 0;
    }
    else {
      local_288 = local_2a8;
      uStack_27c = uStack_27c & 0xffffff00;
      uStack_1b0 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_1b8.Data = local_2a8;
      iStack_280 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1b8,FNAME_Add);
      local_318 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  FLazyName::Resolve((FLazyName *)&local_278);
  if ((local_318 != local_298) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_308 = param_1;
  if (param_1 == (char (*) [15])0x0) {
    uStack_300 = (ulonglong)uStack_300._4_4_ << 0x20;
LAB_141a4b312:
    local_328 = 0;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_300 = CONCAT44(uStack_300._4_4_,(int)sVar7);
    if ((int)sVar7 == 0) goto LAB_141a4b312;
    uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_300);
    uVar2 = uStack_25c;
    local_328 = (ulonglong)local_328._4_4_ << 0x20;
    iVar6 = (int)uStack_300;
    if (iVar6 == 0) {
      local_328 = 0;
    }
    else {
      local_268 = local_308;
      uStack_25c = uStack_25c & 0xffffff00;
      uStack_1a0 = CONCAT44(uVar2,iVar6) & 0xffffff00ffffffff;
      local_1a8.Data = local_308;
      iStack_260 = iVar6;
      FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_1a8,FNAME_Add);
      local_328 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
    }
  }
  local_2e8[0] = 0xe;
  local_258 = (FLiteralOrName)param_1;
  local_250 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2e8);
  lVar13 = local_328;
  local_24c = 1;
  if (((longlong)param_1 < 0) || (local_328 != 0)) {
    FVar8 = FLazyName::Resolve((FLazyName *)&local_258);
    bVar4 = lVar13 == *(longlong *)FVar8;
  }
  else {
    if (param_1 != (char (*) [15])0x0) {
      sVar7 = strlen(*param_1);
      iVar11 = (int)sVar7;
    }
    bVar4 = FNameHelper::EqualsString<char>((FName)0x0,*param_1,iVar11);
  }
  if ((bVar4 == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2e0[0] = 0xe;
  local_248 = (FLiteralOrName)param_1;
  local_240 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2e0);
  local_23c = 1;
  local_2d8[0] = 0xe;
  local_238 = (FLiteralOrName)param_1;
  local_230 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d8);
  local_22c = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_238,(FLazyName *)&local_248);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2d0[0] = 0xe;
  local_228 = (FLiteralOrName)param_1;
  local_220 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2d0);
  local_21c = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_228);
  local_2f8 = param_1;
  if (param_1 == (char (*) [15])0x0) {
    uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
  }
  else {
    sVar7 = strlen(*param_1);
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)sVar7);
    if ((int)sVar7 != 0) {
      uVar5 = UE::Core::Private::ParseNumberFromName<char>(*param_1,(int *)&uStack_2f0);
      uVar2 = uStack_20c;
      local_320 = (ulonglong)local_320._4_4_ << 0x20;
      iVar11 = (int)uStack_2f0;
      if (iVar11 == 0) {
        local_320 = 0;
      }
      else {
        local_218 = local_2f8;
        uStack_20c = uStack_20c & 0xffffff00;
        uStack_190 = CONCAT44(uVar2,iVar11) & 0xffffff00ffffffff;
        local_198.Data = local_2f8;
        iStack_210 = iVar11;
        FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_198,FNAME_Add);
        local_320 = CONCAT44(uVar5,FVar9.ComparisonId.Value.Value);
      }
      goto LAB_141a4b4e0;
    }
  }
  local_320 = 0;
LAB_141a4b4e0:
  if ((local_320 != *(longlong *)FVar8) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = *(int *)(*param_1 + 8);
  local_48 = *(char (**) [15])*param_1;
  uStack_3c = *(undefined2 *)(*param_1 + 0xc);
  cStack_3a = (*param_1)[0xe];
  local_208.AnsiLiteral = (char *)&local_48;
  local_2c8[0] = 0xe;
  local_200 = UE::Core::Private::ParseNumberFromName<char>((char *)&local_48,local_2c8);
  local_1fc = 1;
  local_2c0[0] = 0xe;
  local_1f8 = (FLiteralOrName)param_1;
  local_1f0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2c0);
  local_1ec = 1;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_1f8,(FLazyName *)&local_208);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2b8[0] = 0xe;
  local_1e8 = (FLiteralOrName)param_1;
  local_1e0 = UE::Core::Private::ParseNumberFromName<char>(*param_1,local_2b8);
  local_1dc = 1;
  FVar8 = FLazyName::Resolve((FLazyName *)&local_1e8);
  local_188.bIsDynamic = false;
  local_188.bIsExternal = false;
  local_188.Base = local_168;
  local_188.CurPos = local_168;
  local_188.End = (wchar_t *)&local_e8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar8);
  FNameEntry::AppendNameToString(this,&local_188);
  if (*(int *)((longlong)FVar8 + 4) != 0) {
    if (local_188.End < (TStringBuilderBase<wchar_t> *)(local_188.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,1);
    }
    *local_188.CurPos = L'_';
    local_188.CurPos = local_188.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_188,L"%d");
  }
  pwVar3 = local_188.Base;
  lVar13 = (longlong)local_188.CurPos - (longlong)local_188.Base;
  local_e8.End = (wchar_t *)&local_48;
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  local_e8.Base = (wchar_t *)local_c8;
  local_e8.CurPos = (wchar_t *)local_c8;
  if (param_1 != (char (*) [15])0x0) {
    sVar7 = strlen(*param_1);
    iVar12 = (int)sVar7;
  }
  ppacVar10 = local_c8;
  ppacVar14 = local_c8;
  if (&local_48 < (char (**) [15])((longlong)local_c8 + (longlong)iVar12 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)iVar12);
    ppacVar10 = (char (**) [15])local_e8.CurPos;
    ppacVar14 = (char (**) [15])local_e8.Base;
  }
  if (iVar12 != 0) {
    ppacVar10 = (char (**) [15])
                FGenericPlatformString::Convert<char,wchar_t>
                          ((wchar_t *)ppacVar10,iVar12,*param_1,iVar12);
    ppacVar14 = (char (**) [15])local_e8.Base;
    local_e8.CurPos = (wchar_t *)ppacVar10;
  }
  iVar11 = (int)((longlong)ppacVar10 - (longlong)ppacVar14 >> 1);
  iVar12 = (int)(lVar13 >> 1);
  if (((iVar12 == iVar11) &&
      (((iVar12 == 0 || (iVar11 == 0)) ||
       (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar3,(wchar_t *)ppacVar14,(longlong)iVar11),
       iVar6 == 0)))) && (iVar12 == iVar11)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
    return;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0xfb1,L"");
  if (!bVar4) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CheckLazyName<char8_t,4> @ 141a4b7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<char8_t,4>(uchar (*param_1) [4])

{
  byte bVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName FVar7;
  FNameEntry *this;
  size_t sVar8;
  uchar *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_318 [32];
  uchar local_2f8 [2] [4];
  int local_2f0 [2];
  int local_2e8 [2];
  int local_2e0 [2];
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  int local_2b8 [2];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [16];
  int iStack_290;
  undefined4 uStack_28c;
  uchar (*local_288) [4];
  int iStack_280;
  undefined4 uStack_27c;
  uchar *local_278;
  FLiteralOrName local_270;
  uint local_268;
  undefined1 local_264;
  FLiteralOrName local_260;
  uint local_258;
  undefined1 local_254;
  FLiteralOrName local_250;
  uint local_248;
  undefined1 local_244;
  FLiteralOrName local_240;
  uint local_238;
  undefined1 local_234;
  FLiteralOrName local_230;
  uint local_228;
  undefined1 local_224;
  FLiteralOrName local_220;
  uint local_218;
  undefined1 local_214;
  FLiteralOrName local_210;
  uint local_208;
  undefined1 local_204;
  FLiteralOrName local_200;
  uint local_1f8;
  undefined1 local_1f4;
  uchar (*local_1e8) [4];
  undefined8 uStack_1e0;
  uchar (*local_1d8) [4];
  undefined8 uStack_1d0;
  uchar (*local_1c8) [4];
  undefined8 auStack_1c0 [3];
  uchar (*local_1a8) [4];
  undefined8 uStack_1a0;
  uchar (*local_198) [4];
  undefined8 uStack_190;
  uchar (*local_188) [4];
  undefined8 uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_318;
  local_2f0[0] = 3;
  local_270 = (FLiteralOrName)param_1;
  local_268 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2f0);
  bVar12 = 0;
  local_264 = 2;
  bVar10 = 0;
  puVar9 = *param_1;
  bVar11 = bVar12;
  if (param_1 != (uchar (*) [4])0x0) {
    bVar1 = (*param_1)[0];
    while (bVar11 = bVar10, bVar1 != 0) {
      puVar9 = puVar9 + 1;
      bVar10 = bVar10 | bVar1;
      bVar1 = *puVar9;
    }
  }
  uStack_27c = CONCAT31(uStack_27c._1_3_,(bVar11 & 0x80) != 0);
  iVar5 = (int)param_1;
  iStack_280 = (int)puVar9 - iVar5;
  uStack_1e0 = CONCAT44(uStack_27c,iStack_280);
  local_288 = param_1;
  local_1e8 = param_1;
  if (iStack_280 == 0) {
    local_2b0 = (undefined1  [8])0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,(int *)&uStack_1e0);
    local_1a8 = local_1e8;
    uStack_1a0 = uStack_1e0;
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)local_2b0,(EFindName)&local_1a8,1);
  }
  FLazyName::Resolve((FLazyName *)&local_270);
  if ((local_2b0 != (undefined1  [8])local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar9 = *param_1;
  bVar10 = bVar12;
  if (param_1 != (uchar (*) [4])0x0) {
    bVar11 = (*param_1)[0];
    bVar10 = 0;
    while (bVar11 != 0) {
      puVar9 = puVar9 + 1;
      bVar10 = bVar10 | bVar11;
      bVar11 = *puVar9;
    }
  }
  uStack_28c = CONCAT31(uStack_28c._1_3_,(bVar10 & 0x80) != 0);
  iStack_290 = (int)puVar9 - iVar5;
  uStack_1d0 = CONCAT44(uStack_28c,iStack_290);
  local_2a0._8_8_ = param_1;
  local_1d8 = param_1;
  if (iStack_290 == 0) {
    local_2a8._0_4_ = 0;
    local_2a8._4_4_ = 0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,(int *)&uStack_1d0);
    local_198 = local_1d8;
    uStack_190 = uStack_1d0;
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)local_2a8,(EFindName)&local_198,1);
  }
  local_2e8[0] = 3;
  local_260 = (FLiteralOrName)param_1;
  local_258 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2e8);
  local_254 = 2;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_260,(FName)local_2a8);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2e0[0] = 3;
  local_250 = (FLiteralOrName)param_1;
  local_248 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2e0);
  local_244 = 2;
  local_2d8[0] = 3;
  local_240 = (FLiteralOrName)param_1;
  local_238 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2d8);
  local_234 = 2;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_240,(FLazyName *)&local_250);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2d0[0] = 3;
  local_230 = (FLiteralOrName)param_1;
  local_228 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2d0);
  local_224 = 2;
  FVar7 = FLazyName::Resolve((FLazyName *)&local_230);
  puVar9 = *param_1;
  if (param_1 != (uchar (*) [4])0x0) {
    bVar10 = (*param_1)[0];
    while (bVar10 != 0) {
      puVar9 = puVar9 + 1;
      bVar12 = bVar12 | bVar10;
      bVar10 = *puVar9;
    }
  }
  uStack_28c = CONCAT31(uStack_28c._1_3_,(bVar12 & 0x80) != 0);
  iStack_290 = (int)puVar9 - iVar5;
  auStack_1c0[0] = CONCAT44(uStack_28c,iStack_290);
  local_1c8 = param_1;
  if (iStack_290 == 0) {
    local_2a0._0_8_ = (uchar *)0x0;
    local_2a0._8_8_ = param_1;
  }
  else {
    local_2a0._8_8_ = param_1;
    UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,(int *)auStack_1c0);
    local_188 = local_1c8;
    uStack_180 = auStack_1c0[0];
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)local_2a0,(EFindName)&local_188,1);
  }
  if (((uchar *)local_2a0._0_8_ != *(uchar **)FVar7) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2f8[0] = *param_1;
  local_220.AnsiLiteral = (char *)local_2f8;
  local_2c8[0] = 3;
  local_218 = UE::Core::Private::ParseNumberFromName<char8_t>(local_2f8[0],local_2c8);
  local_214 = 2;
  local_2c0[0] = 3;
  local_210 = (FLiteralOrName)param_1;
  local_208 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2c0);
  local_204 = 2;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_210,(FLazyName *)&local_220);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2b8[0] = 3;
  local_200 = (FLiteralOrName)param_1;
  local_1f8 = UE::Core::Private::ParseNumberFromName<char8_t>(*param_1,local_2b8);
  local_1f4 = 2;
  FVar7 = FLazyName::Resolve((FLazyName *)&local_200);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar7);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar7 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  local_d8.Base = local_b8;
  lVar14 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.CurPos = local_b8;
  local_d8.End = (wchar_t *)local_38;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  sVar8 = strlen((char *)param_1);
  iVar13 = (int)sVar8;
  iVar5 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,*param_1,iVar13);
  if (local_d8.End < local_d8.CurPos + iVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,(longlong)iVar5);
  }
  if (iVar13 != 0) {
    local_d8.CurPos = UE::Core::Private::Convert(local_d8.CurPos,iVar5,*param_1,iVar13);
  }
  iVar5 = (int)((longlong)local_d8.CurPos - (longlong)local_d8.Base >> 1);
  iVar13 = (int)(lVar14 >> 1);
  if (((iVar13 == iVar5) &&
      (((iVar13 == 0 || (iVar5 == 0)) ||
       (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar3,local_d8.Base,(longlong)iVar5), iVar6 == 0)
       ))) && (iVar13 == iVar5)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfb1,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CheckLazyName<wchar_t,4> @ 141a4bde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CheckLazyName<wchar_t,4>(wchar_t (*param_1) [4])

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  FNameEntry *this;
  size_t sVar7;
  void *pvVar8;
  wchar_t *pwVar9;
  ushort uVar10;
  ushort uVar11;
  ulong64 uVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  undefined1 auStack_318 [32];
  int local_2f8 [2];
  int local_2f0 [2];
  int local_2e8 [2];
  int local_2e0 [2];
  int local_2d8 [2];
  int local_2d0 [2];
  int local_2c8 [2];
  int local_2c0 [2];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  FWideStringViewWithWidth local_2a8;
  wchar_t (*local_298) [4];
  int iStack_290;
  undefined4 uStack_28c;
  wchar_t (*local_288) [4];
  int iStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  FLiteralOrName local_270;
  uint local_268;
  undefined1 local_264;
  FLiteralOrName local_260;
  uint local_258;
  undefined1 local_254;
  FLiteralOrName local_250;
  uint local_248;
  undefined1 local_244;
  FLiteralOrName local_240;
  uint local_238;
  undefined1 local_234;
  FLiteralOrName local_230;
  uint local_228;
  undefined1 local_224;
  FLiteralOrName local_220;
  uint local_218;
  undefined1 local_214;
  FLiteralOrName local_210;
  uint local_208;
  undefined1 local_204;
  FLiteralOrName local_200;
  uint local_1f8;
  undefined1 local_1f4;
  wchar_t (*local_1e8) [4];
  undefined8 uStack_1e0;
  wchar_t (*local_1d8) [4];
  undefined8 uStack_1d0;
  wchar_t (*local_1c8) [4];
  undefined8 auStack_1c0 [3];
  wchar_t (*local_1a8) [4];
  undefined8 uStack_1a0;
  wchar_t (*local_198) [4];
  undefined8 uStack_190;
  wchar_t (*local_188) [4];
  undefined8 uStack_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [64];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  wchar_t local_38 [4];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_318;
  local_2f8[0] = 3;
  local_270 = (FLiteralOrName)param_1;
  local_268 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2f8);
  uVar14 = 0;
  local_264 = 3;
  uVar10 = 0;
  pwVar9 = *param_1;
  uVar11 = uVar14;
  if (param_1 != (wchar_t (*) [4])0x0) {
    wVar1 = (*param_1)[0];
    while (uVar11 = uVar10, wVar1 != L'\0') {
      pwVar9 = pwVar9 + 1;
      uVar10 = uVar10 | wVar1;
      wVar1 = *pwVar9;
    }
  }
  uStack_27c = CONCAT31(uStack_27c._1_3_,(uVar11 & 0xff80) != 0);
  iStack_280 = (int)((longlong)pwVar9 - (longlong)param_1 >> 1);
  uStack_1e0 = CONCAT44(uStack_27c,iStack_280);
  local_288 = param_1;
  local_1e8 = param_1;
  if (iStack_280 == 0) {
    local_2b8 = (undefined1  [8])0x0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,(int *)&uStack_1e0);
    local_1a8 = local_1e8;
    uStack_1a0 = uStack_1e0;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_2b8,(EFindName)&local_1a8,1);
  }
  FLazyName::Resolve((FLazyName *)&local_270);
  if ((local_2b8 != (undefined1  [8])local_278) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar9 = *param_1;
  uVar10 = uVar14;
  if (param_1 != (wchar_t (*) [4])0x0) {
    wVar1 = (*param_1)[0];
    while (wVar1 != L'\0') {
      pwVar9 = pwVar9 + 1;
      uVar10 = uVar10 | wVar1;
      wVar1 = *pwVar9;
    }
  }
  uStack_28c = CONCAT31(uStack_28c._1_3_,(uVar10 & 0xff80) != 0);
  iStack_290 = (int)((longlong)pwVar9 - (longlong)param_1 >> 1);
  uStack_1d0 = CONCAT44(uStack_28c,iStack_290);
  local_298 = param_1;
  local_1d8 = param_1;
  if (iStack_290 == 0) {
    local_2b0._0_4_ = 0;
    local_2b0._4_4_ = 0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,(int *)&uStack_1d0);
    local_198 = local_1d8;
    uStack_190 = uStack_1d0;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_2b0,(EFindName)&local_198,1);
  }
  local_2f0[0] = 3;
  local_260 = (FLiteralOrName)param_1;
  local_258 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2f0);
  local_254 = 3;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_260,(FName)local_2b0);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa2,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2e8[0] = 3;
  local_250 = (FLiteralOrName)param_1;
  local_248 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2e8);
  local_244 = 3;
  local_2e0[0] = 3;
  local_240 = (FLiteralOrName)param_1;
  local_238 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2e0);
  local_234 = 3;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_240,(FLazyName *)&local_250);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2d8[0] = 3;
  local_230 = (FLiteralOrName)param_1;
  local_228 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2d8);
  local_224 = 3;
  FVar6 = FLazyName::Resolve((FLazyName *)&local_230);
  pwVar9 = *param_1;
  if (param_1 != (wchar_t (*) [4])0x0) {
    wVar1 = (*param_1)[0];
    uVar14 = 0;
    while (wVar1 != L'\0') {
      pwVar9 = pwVar9 + 1;
      uVar14 = uVar14 | wVar1;
      wVar1 = *pwVar9;
    }
  }
  uStack_28c = CONCAT31(uStack_28c._1_3_,(uVar14 & 0xff80) != 0);
  iStack_290 = (int)((longlong)pwVar9 - (longlong)param_1 >> 1);
  auStack_1c0[0] = CONCAT44(uStack_28c,iStack_290);
  local_1c8 = param_1;
  if (iStack_290 == 0) {
    local_2a8.Str = (wchar_t *)0x0;
    local_298 = param_1;
  }
  else {
    local_298 = param_1;
    UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,(int *)auStack_1c0);
    local_188 = local_1c8;
    uStack_180 = auStack_1c0[0];
    FNameHelper::MakeWithNumber(&local_2a8,(EFindName)&local_188,1);
  }
  if ((local_2a8.Str != *(wchar_t **)FVar6) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FName(Literal) == FLazyName(Literal).Resolve()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38 = *param_1;
  local_220.AnsiLiteral = (char *)local_38;
  local_2d0[0] = 3;
  local_218 = UE::Core::Private::ParseNumberFromName<wchar_t>(local_38,local_2d0);
  local_214 = 3;
  local_2c8[0] = 3;
  local_210 = (FLiteralOrName)param_1;
  local_208 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2c8);
  local_204 = 3;
  bVar4 = FLazyName::UEOpEquals((FLazyName *)&local_210,(FLazyName *)&local_220);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FLazyName(Literal) == FLazyName(Literal2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0xfa8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_2c0[0] = 3;
  local_200 = (FLiteralOrName)param_1;
  local_1f8 = UE::Core::Private::ParseNumberFromName<wchar_t>(*param_1,local_2c0);
  local_1f4 = 3;
  FVar6 = FLazyName::Resolve((FLazyName *)&local_200);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)&local_d8;
  this = FName::ResolveEntry((FNameEntryId)*(uint *)FVar6);
  FNameEntry::AppendNameToString(this,&local_178);
  if (*(int *)((longlong)FVar6 + 4) != 0) {
    if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,1);
    }
    *local_178.CurPos = L'_';
    local_178.CurPos = local_178.CurPos + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%d");
  }
  pwVar3 = local_178.Base;
  local_d8.End = local_38;
  lVar16 = (longlong)local_178.CurPos - (longlong)local_178.Base;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  sVar7 = wcslen(*param_1);
  uVar12 = (ulong64)(int)sVar7;
  pwVar9 = local_b8;
  pwVar17 = local_b8;
  if (local_38 < local_b8 + uVar12) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,uVar12);
    pwVar9 = local_d8.CurPos;
    pwVar17 = local_d8.Base;
  }
  if ((int)sVar7 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(pwVar9,param_1,uVar12 * 2);
    pwVar9 = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
    pwVar17 = local_d8.Base;
    local_d8.CurPos = pwVar9;
  }
  iVar13 = (int)((longlong)pwVar9 - (longlong)pwVar17 >> 1);
  iVar15 = (int)(lVar16 >> 1);
  if (((iVar15 == iVar13) &&
      (((iVar15 == 0 || (iVar13 == 0)) ||
       (iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar3,pwVar17,(longlong)iVar13), iVar5 == 0))))
     && (iVar15 == iVar13)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("WriteToString<64>(FLazyName(Literal).Resolve()).ToView().Equals(WriteToString<64>(Literal).ToView(), ComparisonMode)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0xfb1,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CompareDifferentIdsAlphabetically<1> @ 141a4c3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl CompareDifferentIdsAlphabetically<1>(FNameEntryId param_1,FNameEntryId param_2)

{
  char *pcVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  wchar_t **ppwVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FLowLevelMemTracker *this;
  longlong lVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  char cVar14;
  ushort *puVar15;
  uchar *puVar16;
  undefined1 auStack_1078 [32];
  wchar_t *local_1058;
  uint local_1050;
  char local_104c;
  wchar_t *local_1048;
  uint local_1040;
  char local_103c;
  uint local_1038;
  uint uStack_1034;
  uint local_1030;
  uint uStack_102c;
  wchar_t local_1028 [1024];
  wchar_t local_828 [1024];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x141a4c416;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1078;
  if (bNamePoolInitialized) {
    puVar16 = NamePoolData;
  }
  else {
    puVar16 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  local_1038 = param_1.Value >> 0x10;
  uStack_1034 = param_1.Value & 0xffff;
  puVar15 = (ushort *)
            ((((FNamePool *)puVar16)->Entries).Blocks[param_1.Value >> 0x10] +
            (param_1.Value & 0xffff) * 2);
  if ((*puVar15 < 0x40) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Header.Len != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x976,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar2 = *puVar15;
  pwVar11 = (wchar_t *)(puVar15 + 1);
  if ((*puVar15 & 1) == 0) {
    if (pwVar11 == (wchar_t *)0x0) {
      memcpy(local_828,(void *)0x0,(ulonglong)(uVar2 >> 6));
      pwVar11 = local_828;
    }
    cVar14 = '\0';
  }
  else {
    if (pwVar11 == (wchar_t *)0x0) {
      memcpy(local_828,(void *)0x0,(ulonglong)(uVar2 >> 6) * 2);
      pwVar11 = local_828;
    }
    cVar14 = '\x01';
  }
  uStack_102c = param_2.Value & 0xffff;
  local_1030 = param_2.Value >> 0x10;
  local_104c = cVar14;
  local_1050 = (uint)(uVar2 >> 6);
  local_1058 = pwVar11;
  puVar15 = (ushort *)
            ((((FNamePool *)puVar16)->Entries).Blocks[local_1030] + (param_2.Value & 0xffff) * 2);
  if ((*puVar15 < 0x40) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Header.Len != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x976,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar3 = *puVar15;
  local_1048 = (wchar_t *)(puVar15 + 1);
  if ((*puVar15 & 1) == 0) {
    if (local_1048 == (wchar_t *)0x0) {
      memcpy(local_1028,(void *)0x0,(ulonglong)(uVar3 >> 6));
      local_1048 = local_1028;
    }
    local_103c = '\0';
  }
  else {
    if (local_1048 == (wchar_t *)0x0) {
      memcpy(local_1028,(void *)0x0,(ulonglong)(uVar3 >> 6) * 2);
      local_1048 = local_1028;
    }
    local_103c = '\x01';
  }
  local_1040 = (uint)(uVar3 >> 6);
  uVar12 = (uint)(uVar2 >> 6);
  if (cVar14 != local_103c) {
    pwVar11 = local_1028;
    ppwVar5 = &local_1048;
    if (cVar14 == '\0') {
      pwVar11 = local_828;
      ppwVar5 = &local_1058;
    }
    uVar12 = *(uint *)(ppwVar5 + 1);
    uVar13 = (ulonglong)uVar12;
    memcpy(pwVar11,*ppwVar5,(ulonglong)uVar12);
    *ppwVar5 = pwVar11;
    if (uVar12 != 0) {
      lVar10 = (longlong)pwVar11 + uVar13;
      pwVar11 = pwVar11 + uVar13;
      do {
        pcVar1 = (char *)(lVar10 + -1);
        lVar10 = lVar10 + -1;
        pwVar11[-1] = (short)*pcVar1;
        pwVar11 = pwVar11 + -1;
        uVar12 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 != 0);
    }
    *(undefined1 *)((longlong)ppwVar5 + 0xc) = 1;
    pwVar11 = local_1058;
    uVar12 = local_1050;
    cVar14 = local_104c;
  }
  uVar6 = local_1040;
  uVar9 = local_1040;
  if (uVar12 < local_1040) {
    uVar9 = uVar12;
  }
  if (cVar14 == '\0') {
    iVar8 = FGenericPlatformStricmp::Strnicmp
                      ((char *)pwVar11,(char *)local_1048,(longlong)(int)uVar9);
  }
  else {
    iVar8 = FGenericPlatformStricmp::Strnicmp(pwVar11,local_1048,(longlong)(int)uVar9);
  }
  if (iVar8 == 0) {
    iVar8 = uVar12 - uVar6;
  }
  return iVar8;
}

// CompareDifferentIdsAlphabetically<0> @ 141a4c6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl CompareDifferentIdsAlphabetically<0>(FNameEntryId param_1,FNameEntryId param_2)

{
  char *pcVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  wchar_t **ppwVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FLowLevelMemTracker *this;
  longlong lVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  char cVar14;
  ushort *puVar15;
  uchar *puVar16;
  undefined1 auStack_1078 [32];
  wchar_t *local_1058;
  uint local_1050;
  char local_104c;
  wchar_t *local_1048;
  uint local_1040;
  char local_103c;
  uint local_1038;
  uint uStack_1034;
  uint local_1030;
  uint uStack_102c;
  wchar_t local_1028 [1024];
  wchar_t local_828 [1024];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x141a4c6f6;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1078;
  if (bNamePoolInitialized) {
    puVar16 = NamePoolData;
  }
  else {
    puVar16 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  local_1038 = param_1.Value >> 0x10;
  uStack_1034 = param_1.Value & 0xffff;
  puVar15 = (ushort *)
            ((((FNamePool *)puVar16)->Entries).Blocks[param_1.Value >> 0x10] +
            (param_1.Value & 0xffff) * 2);
  if ((*puVar15 < 0x40) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Header.Len != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x976,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar2 = *puVar15;
  pwVar11 = (wchar_t *)(puVar15 + 1);
  if ((*puVar15 & 1) == 0) {
    if (pwVar11 == (wchar_t *)0x0) {
      memcpy(local_828,(void *)0x0,(ulonglong)(uVar2 >> 6));
      pwVar11 = local_828;
    }
    cVar14 = '\0';
  }
  else {
    if (pwVar11 == (wchar_t *)0x0) {
      memcpy(local_828,(void *)0x0,(ulonglong)(uVar2 >> 6) * 2);
      pwVar11 = local_828;
    }
    cVar14 = '\x01';
  }
  uStack_102c = param_2.Value & 0xffff;
  local_1030 = param_2.Value >> 0x10;
  local_104c = cVar14;
  local_1050 = (uint)(uVar2 >> 6);
  local_1058 = pwVar11;
  puVar15 = (ushort *)
            ((((FNamePool *)puVar16)->Entries).Blocks[local_1030] + (param_2.Value & 0xffff) * 2);
  if ((*puVar15 < 0x40) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Header.Len != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x976,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar3 = *puVar15;
  local_1048 = (wchar_t *)(puVar15 + 1);
  if ((*puVar15 & 1) == 0) {
    if (local_1048 == (wchar_t *)0x0) {
      memcpy(local_1028,(void *)0x0,(ulonglong)(uVar3 >> 6));
      local_1048 = local_1028;
    }
    local_103c = '\0';
  }
  else {
    if (local_1048 == (wchar_t *)0x0) {
      memcpy(local_1028,(void *)0x0,(ulonglong)(uVar3 >> 6) * 2);
      local_1048 = local_1028;
    }
    local_103c = '\x01';
  }
  local_1040 = (uint)(uVar3 >> 6);
  uVar12 = (uint)(uVar2 >> 6);
  if (cVar14 != local_103c) {
    pwVar11 = local_1028;
    ppwVar5 = &local_1048;
    if (cVar14 == '\0') {
      pwVar11 = local_828;
      ppwVar5 = &local_1058;
    }
    uVar12 = *(uint *)(ppwVar5 + 1);
    uVar13 = (ulonglong)uVar12;
    memcpy(pwVar11,*ppwVar5,(ulonglong)uVar12);
    *ppwVar5 = pwVar11;
    if (uVar12 != 0) {
      lVar10 = (longlong)pwVar11 + uVar13;
      pwVar11 = pwVar11 + uVar13;
      do {
        pcVar1 = (char *)(lVar10 + -1);
        lVar10 = lVar10 + -1;
        pwVar11[-1] = (short)*pcVar1;
        pwVar11 = pwVar11 + -1;
        uVar12 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 != 0);
    }
    *(undefined1 *)((longlong)ppwVar5 + 0xc) = 1;
    pwVar11 = local_1058;
    uVar12 = local_1050;
    cVar14 = local_104c;
  }
  uVar6 = local_1040;
  uVar9 = local_1040;
  if (uVar12 < local_1040) {
    uVar9 = uVar12;
  }
  if (cVar14 == '\0') {
    iVar8 = strncmp((char *)pwVar11,(char *)local_1048,(longlong)(int)uVar9);
  }
  else {
    iVar8 = wcsncmp(pwVar11,local_1048,(longlong)(int)uVar9);
  }
  if (iVar8 == 0) {
    iVar8 = uVar12 - uVar6;
  }
  return iVar8;
}

// CompareItems<FDisplayNameEntryId,int> @ 141a4c9b0

bool __cdecl
CompareItems<FDisplayNameEntryId,int>
          (FDisplayNameEntryId *param_1,FDisplayNameEntryId *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(uint *)(lVar1 + (longlong)param_2) != (param_2->Id).Value) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConvertInPlace<char,wchar_t> @ 141a4cbf0

wchar_t * __cdecl ConvertInPlace<char,wchar_t>(char *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    pcVar2 = param_1 + param_2;
    pcVar3 = param_1 + (ulonglong)param_2 * 2;
    do {
      pcVar1 = pcVar2 + -1;
      pcVar2 = pcVar2 + -1;
      *(short *)(pcVar3 + -2) = (short)*pcVar1;
      pcVar3 = pcVar3 + -2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return (wchar_t *)param_1;
}

// ConvertInPlace<wchar_t,char> @ 141a4cc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl ConvertInPlace<wchar_t,char>(wchar_t *param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  wchar_t wVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  uint uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  uVar20 = _UNK_1506e9cec;
  uVar18 = _UNK_1506e9ce8;
  uVar11 = _UNK_1506e9ce4;
  uVar10 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
  uVar12 = 0;
  if (param_2 == 0) {
    return (char *)param_1;
  }
  if (param_2 < 4) goto LAB_141a4cd0f;
  if (param_2 < 0x20) {
LAB_141a4cce9:
    do {
      uVar18 = (uint)*(undefined8 *)(param_1 + uVar12) & uVar10;
      uVar20 = (uint)((ulonglong)*(undefined8 *)(param_1 + uVar12) >> 0x20) & uVar11;
      sVar1 = (short)uVar18;
      sVar2 = (short)(uVar18 >> 0x10);
      sVar3 = (short)uVar20;
      sVar4 = (short)(uVar20 >> 0x10);
      *(uint *)((longlong)param_1 + uVar12) =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar20 >> 0x10) - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * (char)uVar20 - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar18 >> 0x10) -
                                      (0xff < sVar2),
                                      (0 < sVar1) * (sVar1 < 0x100) * (char)uVar18 - (0xff < sVar1))
                            ));
      uVar18 = (int)uVar12 + 4;
      uVar12 = (ulonglong)uVar18;
    } while (uVar18 < (param_2 & 0xfffffffc));
  }
  else {
    uVar15 = 0x10;
    do {
      pwVar16 = param_1 + uVar12;
      uVar17 = *(uint *)pwVar16 & uVar10;
      uVar19 = *(uint *)(pwVar16 + 2) & uVar11;
      uVar21 = *(uint *)(pwVar16 + 4) & uVar18;
      uVar22 = *(uint *)(pwVar16 + 6) & uVar20;
      sVar1 = (short)uVar17;
      sVar2 = (short)(uVar17 >> 0x10);
      sVar3 = (short)uVar19;
      sVar4 = (short)(uVar19 >> 0x10);
      sVar5 = (short)uVar21;
      sVar6 = (short)(uVar21 >> 0x10);
      sVar7 = (short)uVar22;
      sVar8 = (short)(uVar22 >> 0x10);
      *(ulonglong *)((longlong)param_1 + uVar12) =
           CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)(uVar22 >> 0x10) - (0xff < sVar8),
                    CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)uVar22 - (0xff < sVar7),
                             CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)(uVar21 >> 0x10) -
                                      (0xff < sVar6),
                                      CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar21 -
                                               (0xff < sVar5),
                                               CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                        (char)(uVar19 >> 0x10) - (0xff < sVar4),
                                                        CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                 (char)uVar19 - (0xff < sVar3),
                                                                 CONCAT11((0 < sVar2) *
                                                                          (sVar2 < 0x100) *
                                                                          (char)(uVar17 >> 0x10) -
                                                                          (0xff < sVar2),
                                                                          (0 < sVar1) *
                                                                          (sVar1 < 0x100) *
                                                                          (char)uVar17 -
                                                                          (0xff < sVar1))))))));
      uVar19 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uVar19;
      pwVar16 = param_1 + (uVar15 - 8);
      uVar17 = *(uint *)pwVar16 & uVar10;
      uVar21 = *(uint *)(pwVar16 + 2) & uVar11;
      uVar22 = *(uint *)(pwVar16 + 4) & uVar18;
      uVar23 = *(uint *)(pwVar16 + 6) & uVar20;
      sVar1 = (short)uVar17;
      sVar2 = (short)(uVar17 >> 0x10);
      sVar3 = (short)uVar21;
      sVar4 = (short)(uVar21 >> 0x10);
      sVar5 = (short)uVar22;
      sVar6 = (short)(uVar22 >> 0x10);
      sVar7 = (short)uVar23;
      sVar8 = (short)(uVar23 >> 0x10);
      *(ulonglong *)((longlong)param_1 + (ulonglong)(uVar15 - 8)) =
           CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)(uVar23 >> 0x10) - (0xff < sVar8),
                    CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)uVar23 - (0xff < sVar7),
                             CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)(uVar22 >> 0x10) -
                                      (0xff < sVar6),
                                      CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                               (0xff < sVar5),
                                               CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                        (char)(uVar21 >> 0x10) - (0xff < sVar4),
                                                        CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                 (char)uVar21 - (0xff < sVar3),
                                                                 CONCAT11((0 < sVar2) *
                                                                          (sVar2 < 0x100) *
                                                                          (char)(uVar17 >> 0x10) -
                                                                          (0xff < sVar2),
                                                                          (0 < sVar1) *
                                                                          (sVar1 < 0x100) *
                                                                          (char)uVar17 -
                                                                          (0xff < sVar1))))))));
      pwVar16 = param_1 + uVar15;
      uVar17 = *(uint *)pwVar16 & uVar10;
      uVar21 = *(uint *)(pwVar16 + 2) & uVar11;
      uVar22 = *(uint *)(pwVar16 + 4) & uVar18;
      uVar23 = *(uint *)(pwVar16 + 6) & uVar20;
      sVar1 = (short)uVar17;
      sVar2 = (short)(uVar17 >> 0x10);
      sVar3 = (short)uVar21;
      sVar4 = (short)(uVar21 >> 0x10);
      sVar5 = (short)uVar22;
      sVar6 = (short)(uVar22 >> 0x10);
      sVar7 = (short)uVar23;
      sVar8 = (short)(uVar23 >> 0x10);
      *(ulonglong *)((longlong)param_1 + (ulonglong)uVar15) =
           CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)(uVar23 >> 0x10) - (0xff < sVar8),
                    CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)uVar23 - (0xff < sVar7),
                             CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)(uVar22 >> 0x10) -
                                      (0xff < sVar6),
                                      CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                               (0xff < sVar5),
                                               CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                        (char)(uVar21 >> 0x10) - (0xff < sVar4),
                                                        CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                 (char)uVar21 - (0xff < sVar3),
                                                                 CONCAT11((0 < sVar2) *
                                                                          (sVar2 < 0x100) *
                                                                          (char)(uVar17 >> 0x10) -
                                                                          (0xff < sVar2),
                                                                          (0 < sVar1) *
                                                                          (sVar1 < 0x100) *
                                                                          (char)uVar17 -
                                                                          (0xff < sVar1))))))));
      uVar17 = uVar15 + 8;
      pwVar16 = param_1 + uVar17;
      uVar15 = uVar15 + 0x20;
      uVar21 = *(uint *)pwVar16 & uVar10;
      uVar22 = *(uint *)(pwVar16 + 2) & uVar11;
      uVar23 = *(uint *)(pwVar16 + 4) & uVar18;
      uVar24 = *(uint *)(pwVar16 + 6) & uVar20;
      sVar1 = (short)uVar21;
      sVar2 = (short)(uVar21 >> 0x10);
      sVar3 = (short)uVar22;
      sVar4 = (short)(uVar22 >> 0x10);
      sVar5 = (short)uVar23;
      sVar6 = (short)(uVar23 >> 0x10);
      sVar7 = (short)uVar24;
      sVar8 = (short)(uVar24 >> 0x10);
      *(ulonglong *)((longlong)param_1 + (ulonglong)uVar17) =
           CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)(uVar24 >> 0x10) - (0xff < sVar8),
                    CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)uVar24 - (0xff < sVar7),
                             CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)(uVar23 >> 0x10) -
                                      (0xff < sVar6),
                                      CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar23 -
                                               (0xff < sVar5),
                                               CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                        (char)(uVar22 >> 0x10) - (0xff < sVar4),
                                                        CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                 (char)uVar22 - (0xff < sVar3),
                                                                 CONCAT11((0 < sVar2) *
                                                                          (sVar2 < 0x100) *
                                                                          (char)(uVar21 >> 0x10) -
                                                                          (0xff < sVar2),
                                                                          (0 < sVar1) *
                                                                          (sVar1 < 0x100) *
                                                                          (char)uVar21 -
                                                                          (0xff < sVar1))))))));
    } while (uVar19 < param_2 - (param_2 & 0x1f));
    if (3 < (param_2 & 0x1f)) goto LAB_141a4cce9;
  }
  if (param_2 <= (uint)uVar12) {
    return (char *)param_1;
  }
LAB_141a4cd0f:
  puVar14 = (undefined1 *)(uVar12 + (longlong)param_1);
  uVar13 = (ulonglong)(param_2 - (int)uVar12);
  pwVar16 = param_1 + uVar12;
  do {
    wVar9 = *pwVar16;
    pwVar16 = pwVar16 + 1;
    *puVar14 = (char)wVar9;
    puVar14 = puVar14 + 1;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  return (char *)param_1;
}

// ConvertInPlace<wchar_t,wchar_t> @ 141a4cd50

wchar_t * __cdecl ConvertInPlace<wchar_t,wchar_t>(wchar_t *param_1,uint param_2)

{
  return param_1;
}

// EqualsSameDimensions<1> @ 141a4df40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl EqualsSameDimensions<1>(FNameEntry *param_1,FNameStringView *param_2)

{
  FNameEntryHeader FVar1;
  code *pcVar2;
  FNameEntryHeader *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FNameEntry_u_2 *pFVar7;
  size_t _Size;
  ulonglong uVar8;
  undefined1 auStack_848 [32];
  wchar_t *local_828;
  undefined8 uStack_820;
  FNameEntry_u_2 local_818;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  local_828 = (wchar_t *)(param_2->field0_0x0).Ansi;
  uStack_820._0_4_ = param_2->Len;
  uStack_820._4_1_ = param_2->bIsWide;
  uStack_820._5_3_ = *(undefined3 *)&param_2->field_0xd;
  if ((ushort)(param_1.Len << 6) < 0x40) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Header.Len != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x976,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar7 = &param_1->field1_0x2;
  if (param_1.bIsWide == 0) {
    if (pFVar7 != (FNameEntry_u_2 *)0x0) goto LAB_141a4dfd5;
    _Size = param_1->Len;
  }
  else {
    if (pFVar7 != (FNameEntry_u_2 *)0x0) goto LAB_141a4dfd5;
    _Size = param_1->Len * 2;
  }
  memcpy(&local_818,(void *)0x0,_Size);
  pFVar7 = &local_818;
LAB_141a4dfd5:
  uVar8 = param_1->Len;
  if ((char)((ulonglong)uStack_820 >> 0x20) == '\0') {
    iVar6 = FGenericPlatformStricmp::Strnicmp(pFVar7->AnsiName,(char *)local_828,uVar8);
  }
  else {
    iVar6 = FGenericPlatformStricmp::Strnicmp(pFVar7->WideName,local_828,uVar8);
  }
  return iVar6 == 0;
}

// FindByPredicate<TArrayView<TStringView<char>_const_,int>_const_&,`UE::String::Private::ParseTokensNDelimNChar<char>'::__l4::<lambda_1>_> @ 141a4e330

TStringView<char> * __cdecl
AlgoImpl::
FindByPredicate<TArrayView<TStringView<char>_const_,int>_const_&,_UE::String::Private::ParseTokensNDelimNChar<char>_::__l4::<lambda_1>_>
          (TArrayView<TStringView<char>_const_,int> *param_1,<lambda_1> *param_2)

{
  int iVar1;
  char *_Str2;
  int iVar2;
  int iVar3;
  TStringView<char> *pTVar4;
  TStringView<char> *pTVar5;
  int iVar6;
  
  pTVar5 = param_1->DataPtr;
  pTVar4 = pTVar5 + param_1->ArrayNum;
  if (pTVar5 != pTVar4) {
    iVar1 = (param_2->RemainingView).Size;
    _Str2 = (param_2->RemainingView).DataPtr;
    do {
      iVar6 = (int)*(undefined8 *)&pTVar5->Size;
      iVar2 = iVar1;
      if (iVar6 < iVar1) {
        iVar2 = iVar6;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar6 == iVar3) {
        if ((iVar6 != 0) && (iVar3 != 0)) {
          iVar2 = iVar3;
          if (iVar6 < iVar3) {
            iVar2 = iVar6;
          }
          if (param_2->SearchCase == CaseSensitive) {
            iVar2 = strncmp(pTVar5->DataPtr,_Str2,(longlong)iVar2);
          }
          else {
            iVar2 = FGenericPlatformStricmp::Strnicmp(pTVar5->DataPtr,_Str2,(longlong)iVar2);
          }
          if (iVar2 != 0) goto LAB_141a4e3c3;
        }
        if (iVar6 == iVar3) {
          return pTVar5;
        }
      }
LAB_141a4e3c3:
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar4);
  }
  return (TStringView<char> *)0x0;
}

// FindByPredicate<TArrayView<TStringView<char8_t>_const_,int>_const_&,`UE::String::Private::ParseTokensNDelimNChar<char8_t>'::__l4::<lambda_1>_> @ 141a4e400

TStringView<char8_t> * __cdecl
AlgoImpl::
FindByPredicate<TArrayView<TStringView<char8_t>_const_,int>_const_&,_UE::String::Private::ParseTokensNDelimNChar<char8_t>_::__l4::<lambda_1>_>
          (TArrayView<TStringView<char8_t>_const_,int> *param_1,<lambda_1> *param_2)

{
  int iVar1;
  uchar *_Str2;
  int iVar2;
  int iVar3;
  TStringView<char8_t> *pTVar4;
  TStringView<char8_t> *pTVar5;
  int iVar6;
  
  pTVar5 = param_1->DataPtr;
  pTVar4 = pTVar5 + param_1->ArrayNum;
  if (pTVar5 != pTVar4) {
    iVar1 = (param_2->RemainingView).Size;
    _Str2 = (param_2->RemainingView).DataPtr;
    do {
      iVar6 = (int)*(undefined8 *)&pTVar5->Size;
      iVar2 = iVar1;
      if (iVar6 < iVar1) {
        iVar2 = iVar6;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar6 == iVar3) {
        if ((iVar6 != 0) && (iVar3 != 0)) {
          iVar2 = iVar3;
          if (iVar6 < iVar3) {
            iVar2 = iVar6;
          }
          if (param_2->SearchCase == CaseSensitive) {
            iVar2 = strncmp((char *)pTVar5->DataPtr,(char *)_Str2,(longlong)iVar2);
          }
          else {
            iVar2 = FGenericPlatformStricmp::Strnicmp(pTVar5->DataPtr,_Str2,(longlong)iVar2);
          }
          if (iVar2 != 0) goto LAB_141a4e493;
        }
        if (iVar6 == iVar3) {
          return pTVar5;
        }
      }
LAB_141a4e493:
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar4);
  }
  return (TStringView<char8_t> *)0x0;
}

// FindByPredicate<TArrayView<TStringView<wchar_t>_const_,int>_const_&,`UE::String::Private::ParseTokensNDelimNChar<wchar_t>'::__l4::<lambda_1>_> @ 141a4e4d0

TStringView<wchar_t> * __cdecl
AlgoImpl::
FindByPredicate<TArrayView<TStringView<wchar_t>_const_,int>_const_&,_UE::String::Private::ParseTokensNDelimNChar<wchar_t>_::__l4::<lambda_1>_>
          (TArrayView<TStringView<wchar_t>_const_,int> *param_1,<lambda_1> *param_2)

{
  int iVar1;
  wchar_t *_Str2;
  int iVar2;
  int iVar3;
  TStringView<wchar_t> *pTVar4;
  TStringView<wchar_t> *pTVar5;
  int iVar6;
  
  pTVar5 = param_1->DataPtr;
  pTVar4 = pTVar5 + param_1->ArrayNum;
  if (pTVar5 != pTVar4) {
    iVar1 = (param_2->RemainingView).Size;
    _Str2 = (param_2->RemainingView).DataPtr;
    do {
      iVar6 = (int)*(undefined8 *)&pTVar5->Size;
      iVar2 = iVar1;
      if (iVar6 < iVar1) {
        iVar2 = iVar6;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar6 == iVar3) {
        if ((iVar6 != 0) && (iVar3 != 0)) {
          iVar2 = iVar3;
          if (iVar6 < iVar3) {
            iVar2 = iVar6;
          }
          if (param_2->SearchCase == CaseSensitive) {
            iVar2 = wcsncmp(pTVar5->DataPtr,_Str2,(longlong)iVar2);
          }
          else {
            iVar2 = FGenericPlatformStricmp::Strnicmp(pTVar5->DataPtr,_Str2,(longlong)iVar2);
          }
          if (iVar2 != 0) goto LAB_141a4e563;
        }
        if (iVar6 == iVar3) {
          return pTVar5;
        }
      }
LAB_141a4e563:
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar4);
  }
  return (TStringView<wchar_t> *)0x0;
}

// GenerateLowerCaseHash<char> @ 141a51540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl GenerateLowerCaseHash<char>(char *param_1,uint param_2)

{
  ulong64 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_438 [32];
  char local_418 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    pcVar2 = local_418;
    do {
      *pcVar2 = (-((int)pcVar2[(longlong)param_1 - (longlong)local_418] - 0x41U < 0x1a) & 0x20U) +
                pcVar2[(longlong)param_1 - (longlong)local_418];
      uVar3 = uVar3 - 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar3 != 0);
  }
  uVar1 = CityHash64(local_418,param_2);
  return uVar1;
}

// GenerateLowerCaseHash<wchar_t> @ 141a515c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl GenerateLowerCaseHash<wchar_t>(wchar_t *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  ulong64 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_848 [32];
  short local_828 [4];
  undefined8 auStack_820 [255];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  uVar6 = 0;
  if (param_2 != 0) {
    if ((7 < param_2) && (1 < __isa_available)) {
      do {
        auVar11 = pmovzxwd(in_XMM2,*(undefined8 *)(param_1 + uVar6));
        uVar2 = (int)uVar6 + 4;
        auVar9._0_4_ = auVar11._0_4_ - ___xmm_00000041000000410000004100000041;
        auVar9._4_4_ = auVar11._4_4_ - _UNK_150631f44;
        auVar9._8_4_ = auVar11._8_4_ - _UNK_150631f48;
        auVar9._12_4_ = auVar11._12_4_ - _UNK_150631f4c;
        auVar8._0_4_ = (~-(uint)(((auVar9._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                                  ___xmm_0000001a0000001a0000001a0000001a |
                                 (auVar9._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) *
                                 auVar9._0_4_) == auVar9._0_4_) &
                       ___xmm_00000001000000010000000100000001) * 0x20 + auVar11._0_4_;
        auVar8._4_4_ = (~-(uint)(((auVar9._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                                 (auVar9._4_4_ >= _UNK_150631f34) * auVar9._4_4_) == auVar9._4_4_) &
                       _UNK_150631da4) * 0x20 + auVar11._4_4_;
        auVar8._8_4_ = (~-(uint)(((auVar9._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                                 (auVar9._8_4_ >= _UNK_150631f38) * auVar9._8_4_) == auVar9._8_4_) &
                       _UNK_150631da8) * 0x20 + auVar11._8_4_;
        auVar8._12_4_ =
             (~-(uint)(((auVar9._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                       (auVar9._12_4_ >= _UNK_150631f3c) * auVar9._12_4_) == auVar9._12_4_) &
             _UNK_150631dac) * 0x20 + auVar11._12_4_;
        auVar8 = pshufhw(auVar8,auVar8,0xd8);
        auVar8 = pshuflw(auVar9,auVar8,0xd8);
        auVar12._0_8_ = CONCAT44(auVar8._8_4_,auVar8._0_4_);
        auVar12._8_4_ = auVar8._4_4_;
        auVar12._12_4_ = auVar8._12_4_;
        *(undefined8 *)(local_828 + uVar6) = auVar12._0_8_;
        uVar5 = (int)uVar6 + 8;
        uVar6 = (ulonglong)uVar5;
        auVar8 = pmovzxwd(auVar12,*(undefined8 *)(param_1 + uVar2));
        auVar10._0_4_ = auVar8._0_4_ - ___xmm_00000041000000410000004100000041;
        auVar10._4_4_ = auVar8._4_4_ - _UNK_150631f44;
        auVar10._8_4_ = auVar8._8_4_ - _UNK_150631f48;
        auVar10._12_4_ = auVar8._12_4_ - _UNK_150631f4c;
        auVar11._0_4_ =
             (~-(uint)(((auVar10._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                        ___xmm_0000001a0000001a0000001a0000001a |
                       (auVar10._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) * auVar10._0_4_)
                      == auVar10._0_4_) & ___xmm_00000001000000010000000100000001) * 0x20 +
             auVar8._0_4_;
        auVar11._4_4_ =
             (~-(uint)(((auVar10._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                       (auVar10._4_4_ >= _UNK_150631f34) * auVar10._4_4_) == auVar10._4_4_) &
             _UNK_150631da4) * 0x20 + auVar8._4_4_;
        auVar11._8_4_ =
             (~-(uint)(((auVar10._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                       (auVar10._8_4_ >= _UNK_150631f38) * auVar10._8_4_) == auVar10._8_4_) &
             _UNK_150631da8) * 0x20 + auVar8._8_4_;
        auVar11._12_4_ =
             (~-(uint)(((auVar10._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                       (auVar10._12_4_ >= _UNK_150631f3c) * auVar10._12_4_) == auVar10._12_4_) &
             _UNK_150631dac) * 0x20 + auVar8._12_4_;
        auVar8 = pshufhw(auVar11,auVar11,0xd8);
        auVar8 = pshuflw(auVar10,auVar8,0xd8);
        in_XMM2._0_8_ = CONCAT44(auVar8._8_4_,auVar8._0_4_);
        in_XMM2._8_4_ = auVar8._4_4_;
        in_XMM2._12_4_ = auVar8._12_4_;
        *(undefined8 *)(local_828 + uVar2) = in_XMM2._0_8_;
      } while (uVar5 < (param_2 & 0xfffffff8));
      if (param_2 <= uVar5) goto LAB_141a51713;
    }
    uVar7 = (ulonglong)(param_2 - (int)uVar6);
    psVar3 = local_828 + uVar6;
    do {
      uVar1 = *(ushort *)((longlong)psVar3 + ((longlong)param_1 - (longlong)local_828));
      *psVar3 = (-(ushort)(uVar1 - 0x41 < 0x1a) & 0x20) + uVar1;
      uVar7 = uVar7 - 1;
      psVar3 = psVar3 + 1;
    } while (uVar7 != 0);
  }
LAB_141a51713:
  uVar4 = CityHash64((char *)local_828,param_2 * 2);
  return uVar4;
}

// HashLowerCase<char> @ 141a51740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FNameHash * __cdecl
HashLowerCase<char>(FNameHash *__return_storage_ptr__,char *param_1,uint param_2)

{
  FNameEntryHeader *pFVar1;
  char cVar2;
  uint uVar3;
  ulong64 uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_578 [32];
  undefined4 local_558;
  wchar_t *local_550;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_548;
  uint local_428 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_578;
  uVar6 = 0;
  uVar7 = (ulonglong)param_2;
  if (param_2 < 0x401) {
    if (param_2 == 0) goto LAB_141a5184d;
  }
  else {
    local_548._padding_ = 0;
    if (param_1 == (char *)0x0) {
      local_548.Ptr = (wchar_t *)0x0;
      local_548.StringLength = 0;
    }
    else {
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_548,param_1,(param_1[0x3ff] != '\0') + 0x3ff,(uint)(param_1[0x3ff] == '\0'))
      ;
    }
    local_558 = 0x400;
    local_550 = local_548.Ptr;
    UE::Logging::Private::BasicFatalLog
              (&`struct_FNameHash___cdecl_HashLowerCase<char>(char_const*___ptr64,unsigned_int)'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogCore);
    if ((void *)local_548._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_548._padding_);
    }
  }
  puVar5 = local_428;
  do {
    cVar2 = *(char *)((longlong)puVar5 + ((longlong)param_1 - (longlong)local_428));
    *(byte *)puVar5 = (-((int)cVar2 - 0x41U < 0x1a) & 0x20U) + cVar2;
    uVar7 = uVar7 - 1;
    puVar5 = (uint *)((longlong)puVar5 + 1);
  } while (uVar7 != 0);
LAB_141a5184d:
  if (param_2 == 4) {
    uVar6 = (uint)((local_428[0] & 0xdfdfdfdf) == 0x454e4f4e);
  }
  uVar4 = CityHash64((char *)local_428,param_2);
  __return_storage_ptr__->UnmaskedSlotIndex = (uint)uVar4;
  uVar3 = (uint)(uVar4 >> 0x20);
  __return_storage_ptr__->ShardIndex = uVar3 & 0xff;
  __return_storage_ptr__->SlotProbeHash = uVar6 << 0x1d | uVar3 & 0xe0000000;
  pFVar1 = &__return_storage_ptr__->EntryProbeHeader;
  pFVar1->bIsWide = 0;
  pFVar1->Len = param_2;
  pFVar1->LowercaseProbeHash = uVar4 >> 0x28;
  return __return_storage_ptr__;
}

// HashLowerCase<wchar_t> @ 141a518e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FNameHash * __cdecl
HashLowerCase<wchar_t>(FNameHash *__return_storage_ptr__,wchar_t *param_1,uint param_2)

{
  uint uVar1;
  short *psVar2;
  ulong64 uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_868 [32];
  undefined4 local_848;
  wchar_t *local_840;
  short local_828 [4];
  undefined8 auStack_820 [255];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_868;
  if (param_2 < 0x401) {
    if (param_2 == 0) goto LAB_141a51a62;
    uVar6 = 0;
    if (7 < param_2) goto LAB_141a51953;
  }
  else {
    local_848 = 0x400;
    local_840 = param_1;
    UE::Logging::Private::BasicFatalLog
              (&`struct_FNameHash___cdecl_HashLowerCase<wchar_t>(wchar_t_const*___ptr64,unsigned_int)'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogCore);
LAB_141a51953:
    uVar6 = 0;
    if (1 < __isa_available) {
      uVar6 = 0;
      do {
        auVar11 = pmovzxwd(in_XMM2,*(undefined8 *)(param_1 + uVar6));
        uVar1 = (int)uVar6 + 4;
        auVar9._0_4_ = auVar11._0_4_ - ___xmm_00000041000000410000004100000041;
        auVar9._4_4_ = auVar11._4_4_ - _UNK_150631f44;
        auVar9._8_4_ = auVar11._8_4_ - _UNK_150631f48;
        auVar9._12_4_ = auVar11._12_4_ - _UNK_150631f4c;
        auVar8._0_4_ = (~-(uint)(((auVar9._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                                  ___xmm_0000001a0000001a0000001a0000001a |
                                 (auVar9._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) *
                                 auVar9._0_4_) == auVar9._0_4_) &
                       ___xmm_00000001000000010000000100000001) * 0x20 + auVar11._0_4_;
        auVar8._4_4_ = (~-(uint)(((auVar9._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                                 (auVar9._4_4_ >= _UNK_150631f34) * auVar9._4_4_) == auVar9._4_4_) &
                       _UNK_150631da4) * 0x20 + auVar11._4_4_;
        auVar8._8_4_ = (~-(uint)(((auVar9._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                                 (auVar9._8_4_ >= _UNK_150631f38) * auVar9._8_4_) == auVar9._8_4_) &
                       _UNK_150631da8) * 0x20 + auVar11._8_4_;
        auVar8._12_4_ =
             (~-(uint)(((auVar9._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                       (auVar9._12_4_ >= _UNK_150631f3c) * auVar9._12_4_) == auVar9._12_4_) &
             _UNK_150631dac) * 0x20 + auVar11._12_4_;
        auVar8 = pshufhw(auVar8,auVar8,0xd8);
        auVar8 = pshuflw(auVar9,auVar8,0xd8);
        auVar12._0_8_ = CONCAT44(auVar8._8_4_,auVar8._0_4_);
        auVar12._8_4_ = auVar8._4_4_;
        auVar12._12_4_ = auVar8._12_4_;
        *(undefined8 *)(local_828 + uVar6) = auVar12._0_8_;
        uVar5 = (int)uVar6 + 8;
        uVar6 = (ulonglong)uVar5;
        auVar8 = pmovzxwd(auVar12,*(undefined8 *)(param_1 + uVar1));
        auVar10._0_4_ = auVar8._0_4_ - ___xmm_00000041000000410000004100000041;
        auVar10._4_4_ = auVar8._4_4_ - _UNK_150631f44;
        auVar10._8_4_ = auVar8._8_4_ - _UNK_150631f48;
        auVar10._12_4_ = auVar8._12_4_ - _UNK_150631f4c;
        auVar11._0_4_ =
             (~-(uint)(((auVar10._0_4_ < ___xmm_0000001a0000001a0000001a0000001a) *
                        ___xmm_0000001a0000001a0000001a0000001a |
                       (auVar10._0_4_ >= ___xmm_0000001a0000001a0000001a0000001a) * auVar10._0_4_)
                      == auVar10._0_4_) & ___xmm_00000001000000010000000100000001) * 0x20 +
             auVar8._0_4_;
        auVar11._4_4_ =
             (~-(uint)(((auVar10._4_4_ < _UNK_150631f34) * _UNK_150631f34 |
                       (auVar10._4_4_ >= _UNK_150631f34) * auVar10._4_4_) == auVar10._4_4_) &
             _UNK_150631da4) * 0x20 + auVar8._4_4_;
        auVar11._8_4_ =
             (~-(uint)(((auVar10._8_4_ < _UNK_150631f38) * _UNK_150631f38 |
                       (auVar10._8_4_ >= _UNK_150631f38) * auVar10._8_4_) == auVar10._8_4_) &
             _UNK_150631da8) * 0x20 + auVar8._8_4_;
        auVar11._12_4_ =
             (~-(uint)(((auVar10._12_4_ < _UNK_150631f3c) * _UNK_150631f3c |
                       (auVar10._12_4_ >= _UNK_150631f3c) * auVar10._12_4_) == auVar10._12_4_) &
             _UNK_150631dac) * 0x20 + auVar8._12_4_;
        auVar8 = pshufhw(auVar11,auVar11,0xd8);
        auVar8 = pshuflw(auVar10,auVar8,0xd8);
        in_XMM2._0_8_ = CONCAT44(auVar8._8_4_,auVar8._0_4_);
        in_XMM2._8_4_ = auVar8._4_4_;
        in_XMM2._12_4_ = auVar8._12_4_;
        *(undefined8 *)(local_828 + uVar1) = in_XMM2._0_8_;
      } while (uVar5 < param_2 - (param_2 & 7));
      if (param_2 <= uVar5) goto LAB_141a51a62;
    }
  }
  uVar7 = (ulonglong)(param_2 - (int)uVar6);
  psVar2 = local_828 + uVar6;
  do {
    uVar4 = *(ushort *)((longlong)psVar2 + ((longlong)param_1 - (longlong)local_828));
    *psVar2 = (-(ushort)(uVar4 - 0x41 < 0x1a) & 0x20) + uVar4;
    uVar7 = uVar7 - 1;
    psVar2 = psVar2 + 1;
  } while (uVar7 != 0);
LAB_141a51a62:
  uVar3 = CityHash64((char *)local_828,param_2 * 2);
  __return_storage_ptr__->UnmaskedSlotIndex = (uint)uVar3;
  uVar1 = (uint)(uVar3 >> 0x20);
  __return_storage_ptr__->ShardIndex = uVar1 & 0xff;
  uVar4 = (ushort)__return_storage_ptr__->EntryProbeHeader & 0x3e | (short)param_2 << 6 | 1;
  __return_storage_ptr__->SlotProbeHash = uVar1 & 0xe0000000;
  __return_storage_ptr__->EntryProbeHeader =
       (FNameEntryHeader)(((short)(uVar3 >> 0x28) * 2 ^ uVar4) & 0x3e ^ uVar4);
  return __return_storage_ptr__;
}

// HashName<1> @ 141a51ae0

FNameHash * __cdecl HashName<1>(FNameHash *__return_storage_ptr__,FNameStringView *param_1)

{
  uint uVar1;
  uint uVar2;
  FNameEntryHeader FVar3;
  undefined2 uVar4;
  FNameHash *pFVar5;
  FNameHash local_28;
  FNameHash local_18;
  
  if (param_1->bIsWide == false) {
    pFVar5 = HashLowerCase<char>(&local_28,(param_1->field0_0x0).Ansi,param_1->Len);
    uVar1 = pFVar5->UnmaskedSlotIndex;
    uVar2 = pFVar5->SlotProbeHash;
    FVar3 = pFVar5->EntryProbeHeader;
    uVar4 = *(undefined2 *)&pFVar5->field_0xe;
    __return_storage_ptr__->ShardIndex = pFVar5->ShardIndex;
    __return_storage_ptr__->UnmaskedSlotIndex = uVar1;
    __return_storage_ptr__->SlotProbeHash = uVar2;
    __return_storage_ptr__->EntryProbeHeader = FVar3;
    *(undefined2 *)&__return_storage_ptr__->field_0xe = uVar4;
    return __return_storage_ptr__;
  }
  pFVar5 = HashLowerCase<wchar_t>(&local_18,(wchar_t *)(param_1->field0_0x0).Ansi,param_1->Len);
  uVar1 = pFVar5->UnmaskedSlotIndex;
  uVar2 = pFVar5->SlotProbeHash;
  FVar3 = pFVar5->EntryProbeHeader;
  uVar4 = *(undefined2 *)&pFVar5->field_0xe;
  __return_storage_ptr__->ShardIndex = pFVar5->ShardIndex;
  __return_storage_ptr__->UnmaskedSlotIndex = uVar1;
  __return_storage_ptr__->SlotProbeHash = uVar2;
  __return_storage_ptr__->EntryProbeHeader = FVar3;
  *(undefined2 *)&__return_storage_ptr__->field_0xe = uVar4;
  return __return_storage_ptr__;
}

// HashName<0> @ 141a51b40

FNameHash * __cdecl HashName<0>(FNameHash *__return_storage_ptr__,FNameStringView *param_1)

{
  if (param_1->bIsWide == false) {
    FNameHash::FNameHash<char>(__return_storage_ptr__,(param_1->field0_0x0).Ansi,param_1->Len);
    return __return_storage_ptr__;
  }
  FNameHash::FNameHash<wchar_t>
            (__return_storage_ptr__,(wchar_t *)(param_1->field0_0x0).Ansi,param_1->Len);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 141a51b80

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar12 = iVar7;
  iVar13 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_141a51c70:
      if (iVar13 == 0) {
        iVar7 = param_2 + -1;
        lVar8 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar14 = param_1 + lVar8;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            iVar12 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar14->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar13 = iVar12 * 2;
                iVar6 = iVar13 + 1;
                if (iVar13 + 2 < iVar7) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0x10 + 4) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x10 + 0x24)) {
                    iVar6 = iVar13;
                  }
                  iVar6 = iVar6 + 1;
                }
                lVar11 = (longlong)iVar12;
                lVar10 = (longlong)iVar6;
                if (*(int *)((longlong)param_1 + lVar11 * 0x10 + 4) <=
                    *(int *)((longlong)param_1 + lVar10 * 0x10 + 4)) break;
                uVar2 = *(undefined8 *)(param_1[lVar10].ElementData.Pad + 8);
                TVar3 = param_1[lVar11]._s_1;
                uVar4 = *(undefined8 *)(param_1[lVar11].ElementData.Pad + 8);
                param_1[lVar11]._s_1 = param_1[lVar10]._s_1;
                *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar2;
                param_1[lVar10]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar4;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar6 = iVar13 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar13 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4) <
          *(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 0x24)) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    lVar10 = (longlong)iVar6;
    lVar8 = (longlong)iVar9;
    if (*(int *)((longlong)param_1 + lVar10 * 0x10 + 4) <=
        *(int *)((longlong)param_1 + lVar8 * 0x10 + 4)) goto LAB_141a51c70;
    uVar2 = *(undefined8 *)(param_1[lVar8].ElementData.Pad + 8);
    iVar7 = iVar9 * 2 + 1;
    TVar3 = param_1[lVar10]._s_1;
    uVar4 = *(undefined8 *)(param_1[lVar10].ElementData.Pad + 8);
    param_1[lVar10]._s_1 = param_1[lVar8]._s_1;
    *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar2;
    param_1[lVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[lVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar9;
  } while( true );
}

// HeapSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess> @ 141a51d50

void __cdecl
AlgoImpl::HeapSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
          (FName *param_1,int param_2,FIdentityFunctor param_3,FNameLexicalLess param_4)

{
  FName *pFVar1;
  FName *pFVar2;
  FNameEntryId FVar3;
  FNameEntryId FVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar11 = iVar10;
  iVar13 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_141a51e77:
      if (iVar13 == 0) {
        iVar10 = param_2 + -1;
        lVar14 = (longlong)iVar10;
        if (0 < iVar10) {
          do {
            FVar5 = *param_1;
            *param_1 = param_1[lVar14];
            param_1[lVar14] = FVar5;
            iVar11 = 0;
            if (1 < iVar10) {
              do {
                iVar13 = iVar11 * 2;
                iVar8 = iVar13 + 1;
                if (iVar13 + 2 < iVar10) {
                  FVar3.Value = param_1[(longlong)iVar13 + 1].ComparisonIndex.Value;
                  FVar4.Value = param_1[(longlong)iVar13 + 2].ComparisonIndex.Value;
                  if (FVar4.Value == FVar3.Value) {
                    iVar12 = param_1[(longlong)iVar13 + 2].Number -
                             param_1[(longlong)iVar13 + 1].Number;
                  }
                  else {
                    iVar12 = CompareDifferentIdsAlphabetically<1>(FVar4,FVar3);
                  }
                  if (iVar12 < 0) {
                    iVar8 = iVar13;
                  }
                  iVar8 = iVar8 + 1;
                }
                FVar3.Value = param_1[iVar8].ComparisonIndex.Value;
                pFVar1 = param_1 + iVar8;
                FVar4.Value = param_1[iVar11].ComparisonIndex.Value;
                pFVar2 = param_1 + iVar11;
                if (FVar4.Value == FVar3.Value) {
                  iVar11 = pFVar2->Number - pFVar1->Number;
                }
                else {
                  iVar11 = CompareDifferentIdsAlphabetically<1>(FVar4,FVar3);
                }
                if (-1 < iVar11) break;
                FVar5 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar5;
                iVar11 = iVar8;
              } while (iVar8 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar14 = lVar14 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar8 = iVar13 + -1;
      iVar10 = iVar11 + -2;
      iVar11 = iVar10;
      iVar13 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      FVar3.Value = param_1[(longlong)iVar10 + 1].ComparisonIndex.Value;
      FVar4.Value = param_1[(longlong)iVar10 + 2].ComparisonIndex.Value;
      if (FVar4.Value == FVar3.Value) {
        iVar9 = param_1[(longlong)iVar10 + 2].Number - param_1[(longlong)iVar10 + 1].Number;
      }
      else {
        iVar9 = CompareDifferentIdsAlphabetically<1>(FVar4,FVar3);
      }
      if (iVar9 < 0) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    FVar3.Value = param_1[iVar12].ComparisonIndex.Value;
    pFVar1 = param_1 + iVar12;
    FVar4.Value = param_1[iVar8].ComparisonIndex.Value;
    pFVar2 = param_1 + iVar8;
    if (FVar4.Value == FVar3.Value) {
      iVar10 = pFVar2->Number - pFVar1->Number;
    }
    else {
      iVar10 = CompareDifferentIdsAlphabetically<1>(FVar4,FVar3);
    }
    if (-1 < iVar10) goto LAB_141a51e77;
    FVar5 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar10 = iVar12 * 2 + 1;
    *pFVar1 = FVar5;
    iVar8 = iVar12;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 141a51f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_141a52030:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
          pTVar8 = pTVar10 + 1;
          TVar3 = pTVar11[iVar5 / 2]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8);
          pTVar11[iVar5 / 2]._s_1 = pTVar11->_s_1;
          *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8) = uVar2;
          pTVar11->_s_1 = TVar3;
          *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar4;
          pTVar12 = pTVar11;
LAB_141a52060:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x000141a52069;
          goto LAB_141a52072;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            if ((pTVar1->_s_1).NextFreeIndex < (pTVar12->_s_1).NextFreeIndex) {
              pTVar12 = pTVar1;
            }
          }
          TVar3 = pTVar12->_s_1;
          uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          pTVar12->_s_1 = pTVar10->_s_1;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
          pTVar10->_s_1 = TVar3;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_141a52133;
      }
LAB_141a52122:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_141a52133:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x000141a52069:
  if ((pTVar11->_s_1).NextFreeIndex <= *(int *)((longlong)pTVar6 + 0x14)) goto LAB_141a52060;
LAB_141a52072:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while (*(int *)((longlong)pTVar9 + -0xc) <= (pTVar11->_s_1).NextFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
  if (pTVar12 <= pTVar8) {
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar6 + 0x18);
    pTVar12->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar6 + 0x18) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
    goto LAB_141a52060;
  }
  TVar3 = pTVar11->_s_1;
  uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar11->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_141a52133;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_141a52133;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_141a52122;
  goto LAB_141a52030;
}

// IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess> @ 141a521c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
          (FName *param_1,int param_2,FIdentityFunctor param_3,FNameLexicalLess param_4)

{
  FNameEntryId FVar1;
  FNameEntryId FVar2;
  FName FVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  int iVar7;
  FName **ppFVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName *pFVar11;
  float fVar12;
  undefined1 auStack_398 [48];
  FName *local_368;
  FName *local_358;
  FName *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar12;
    memset(local_340,0,0x2e8);
    ppFVar8 = &local_358;
    do {
      pFVar5 = ppFVar8[1];
      pFVar11 = *ppFVar8;
      local_368 = ppFVar8[2];
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar11 >> 3) + 1;
      pFVar10 = pFVar11;
      iVar7 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_141a52280:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          pFVar9 = pFVar5 + 1;
          FVar3 = pFVar10[iVar4 >> 1];
          pFVar10[iVar4 >> 1] = *pFVar10;
          *pFVar10 = FVar3;
          pFVar6 = pFVar10;
LAB_141a522b0:
          pFVar11 = pFVar6 + 1;
          if (pFVar11 <= pFVar5) goto code_r0x000141a522b9;
          goto LAB_141a522d7;
        }
        for (; pFVar11 = pFVar10, pFVar9 = pFVar10, pFVar10 < pFVar5; pFVar5 = pFVar5 + -1) {
          while (pFVar6 = pFVar11, pFVar11 = pFVar9 + 1, pFVar11 <= pFVar5) {
            FVar1.Value = (pFVar11->ComparisonIndex).Value;
            FVar2.Value = (pFVar6->ComparisonIndex).Value;
            if (FVar2.Value == FVar1.Value) {
              iVar7 = pFVar6->Number - pFVar9[1].Number;
            }
            else {
              iVar7 = CompareDifferentIdsAlphabetically<1>(FVar2,FVar1);
            }
            pFVar9 = pFVar11;
            if (-1 < iVar7) {
              pFVar11 = pFVar6;
            }
          }
          FVar3 = *pFVar6;
          *pFVar6 = *pFVar5;
          *pFVar5 = FVar3;
        }
        goto LAB_141a523ac;
      }
LAB_141a5239a:
      HeapSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>(pFVar11,iVar4,param_3,param_4);
LAB_141a523ac:
      ppFVar8 = ppFVar8 + -3;
    } while (&local_358 <= ppFVar8);
  }
  return;
code_r0x000141a522b9:
  FVar1.Value = (pFVar11->ComparisonIndex).Value;
  FVar2.Value = (pFVar10->ComparisonIndex).Value;
  if (FVar2.Value == FVar1.Value) {
    iVar4 = pFVar10->Number - pFVar6[1].Number;
  }
  else {
    iVar4 = CompareDifferentIdsAlphabetically<1>(FVar2,FVar1);
  }
  pFVar6 = pFVar11;
  if (-1 < iVar4) goto LAB_141a522b0;
LAB_141a522d7:
  do {
    pFVar6 = pFVar9;
    pFVar9 = pFVar6 + -1;
    if (pFVar9 <= pFVar10) break;
    FVar1.Value = (pFVar10->ComparisonIndex).Value;
    FVar2.Value = (pFVar9->ComparisonIndex).Value;
    if (FVar2.Value == FVar1.Value) {
      iVar4 = pFVar6[-1].Number - pFVar10->Number;
    }
    else {
      iVar4 = CompareDifferentIdsAlphabetically<1>(FVar2,FVar1);
    }
  } while (-1 < iVar4);
  if (pFVar11 <= pFVar9) {
    FVar3 = *pFVar11;
    *pFVar11 = *pFVar9;
    *pFVar9 = FVar3;
    pFVar6 = pFVar11;
    goto LAB_141a522b0;
  }
  FVar3 = *pFVar10;
  iVar7 = iVar7 + -1;
  *pFVar10 = *pFVar9;
  *pFVar9 = FVar3;
  if ((longlong)((longlong)pFVar9 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar5 - (longlong)pFVar11 & 0xfffffffffffffff8U)) {
    if (pFVar11 < pFVar5) {
      *ppFVar8 = pFVar11;
      ppFVar8[1] = pFVar5;
      *(int *)(ppFVar8 + 2) = iVar7;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar9 <= pFVar10 + 1) goto LAB_141a523ac;
    pFVar5 = pFVar6 + -2;
    pFVar11 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar9) {
      *ppFVar8 = pFVar10;
      ppFVar8[1] = pFVar6 + -2;
      *(int *)(ppFVar8 + 2) = iVar7;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar5 <= pFVar11) goto LAB_141a523ac;
  }
  iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar11 >> 3) + 1;
  pFVar10 = pFVar11;
  if (iVar7 == 0) goto LAB_141a5239a;
  goto LAB_141a52280;
}

// NoneOf<TArrayView<TStringView<char>_const_,int>,bool_(__cdecl_TStringView<char>::*)(void)const_> @ 141a52bc0

bool __cdecl
Algo::
NoneOf<TArrayView<TStringView<char>_const_,int>,bool_(__cdecl_TStringView<char>::*)(void)const_>
          (TArrayView<TStringView<char>_const_,int> *param_1,pmf_c9787114 param_2)

{
  char cVar1;
  TStringView<char> *pTVar2;
  TStringView<char> *pTVar3;
  
  pTVar2 = param_1->DataPtr;
  pTVar3 = pTVar2 + param_1->ArrayNum;
  while( true ) {
    if (pTVar2 == pTVar3) {
      return true;
    }
    cVar1 = (*(code *)param_2)(pTVar2);
    if (cVar1 != '\0') break;
    pTVar2 = pTVar2 + 1;
  }
  return false;
}

// NoneOf<TArrayView<TStringView<char8_t>_const_,int>,bool_(__cdecl_TStringView<char8_t>::*)(void)const_> @ 141a52c30

bool __cdecl
Algo::
NoneOf<TArrayView<TStringView<char8_t>_const_,int>,bool_(__cdecl_TStringView<char8_t>::*)(void)const_>
          (TArrayView<TStringView<char8_t>_const_,int> *param_1,pmf_9680255f param_2)

{
  char cVar1;
  TStringView<char8_t> *pTVar2;
  TStringView<char8_t> *pTVar3;
  
  pTVar2 = param_1->DataPtr;
  pTVar3 = pTVar2 + param_1->ArrayNum;
  while( true ) {
    if (pTVar2 == pTVar3) {
      return true;
    }
    cVar1 = (*(code *)param_2)(pTVar2);
    if (cVar1 != '\0') break;
    pTVar2 = pTVar2 + 1;
  }
  return false;
}

// NoneOf<TArrayView<TStringView<wchar_t>_const_,int>,bool_(__cdecl_TStringView<wchar_t>::*)(void)const_> @ 141a52ca0

bool __cdecl
Algo::
NoneOf<TArrayView<TStringView<wchar_t>_const_,int>,bool_(__cdecl_TStringView<wchar_t>::*)(void)const_>
          (TArrayView<TStringView<wchar_t>_const_,int> *param_1,pmf_8c0bea34 param_2)

{
  char cVar1;
  TStringView<wchar_t> *pTVar2;
  TStringView<wchar_t> *pTVar3;
  
  pTVar2 = param_1->DataPtr;
  pTVar3 = pTVar2 + param_1->ArrayNum;
  while( true ) {
    if (pTVar2 == pTVar3) {
      return true;
    }
    cVar1 = (*(code *)param_2)(pTVar2);
    if (cVar1 != '\0') break;
    pTVar2 = pTVar2 + 1;
  }
  return false;
}

// Reverse<FGuid> @ 141a56820

void __cdecl AlgoImpl::Reverse<FGuid>(FGuid *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FGuid *pFVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar8 = param_1 + (param_2 + -1);
    do {
      uVar1 = pFVar8->B;
      uVar2 = pFVar8->C;
      uVar3 = pFVar8->D;
      uVar4 = param_1->A;
      uVar5 = param_1->B;
      uVar6 = param_1->C;
      uVar7 = param_1->D;
      param_1->A = pFVar8->A;
      param_1->B = uVar1;
      param_1->C = uVar2;
      param_1->D = uVar3;
      param_1 = param_1 + 1;
      pFVar8->A = uVar4;
      pFVar8->B = uVar5;
      pFVar8->C = uVar6;
      pFVar8->D = uVar7;
      lVar9 = lVar9 + -1;
      pFVar8 = pFVar8 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// TestFieldBytes<30,TMemoryView<void_const_>,`FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor> @ 141a590c0

void __thiscall
FCbFieldTestBase::
TestFieldBytes<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          FCustomByIdAccessor *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FCbFieldView local_88;
  TMemoryView<void_const_> local_78;
  TMemoryView<void_const_> local_68;
  TMemoryView<void_const_> local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_88,param_2->DataPtr,CustomById);
  uVar5 = FCbFieldView::GetSize(&local_88);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_88.TypeWithFlags & CustomByName) != None);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = local_88.Error != None;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetError(%s) == None");
  if (local_88.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.Data != (void *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_78.Data = param_3->Data;
  local_78.Size = param_3->Size;
  local_68.Data = param_4->Data;
  local_68.Size = param_4->Size;
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            (this,param_1,&local_88,&local_78,&local_68,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_88.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"%s, Clone");
  local_68.Data = param_4->Data;
  local_68.Size = param_4->Size;
  local_58.Data = param_3->Data;
  local_58.Size = param_3->Size;
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbField>
            (this,pwVar6,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_88,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldBytes<31,TMemoryView<void_const_>,`FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor> @ 141a596e0

void __thiscall
FCbFieldTestBase::
TestFieldBytes<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor>
          (FCbFieldTestBase *this,wchar_t *param_1,TArrayView<unsigned_char_const_,int> *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          FCustomByNameAccessor *param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FCbFieldView local_88;
  TMemoryView<void_const_> local_78;
  TMemoryView<void_const_> local_68;
  TMemoryView<void_const_> local_58;
  TCbBuffer<FCbFieldView> local_48;
  
  FCbFieldView::FCbFieldView(&local_88,param_2->DataPtr,CustomByName);
  uVar5 = FCbFieldView::GetSize(&local_88);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetSize(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,pwVar6,uVar5,(longlong)param_2->ArrayNum + 1);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasValue(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,pwVar6,(local_88.TypeWithFlags & CustomByName) != None);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = local_88.Error != None;
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::HasError(%s) == false");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar6,bVar7);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::GetError(%s) == None");
  if (local_88.Error != None) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_68,0);
    if (local_68.Data != (void *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_78.Data = param_3->Data;
  local_78.Size = param_3->Size;
  local_68.Data = param_4->Data;
  local_68.Size = param_4->Size;
  TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbFieldView>
            (this,param_1,&local_88,&local_78,&local_68,param_5,param_6);
  local_48.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_48._padding_ = (longlong)local_88.Value;
  TCbBuffer<FCbFieldView>::MakeOwned(&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"%s, Clone");
  local_68.Data = param_4->Data;
  local_68.Size = param_4->Size;
  local_58.Data = param_3->Data;
  local_58.Size = param_3->Size;
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbField>
            (this,pwVar6,(FCbField *)&local_48,&local_58,&local_68,param_5,param_6);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  bVar7 = FCbFieldView::Equals(&local_88,(FCbFieldView *)&local_48);
  ::FString::PrintfImpl((FString *)&local_78,L"FCbFieldView::Equals(%s)");
  pwVar6 = L"";
  if ((int)local_78.Size != 0) {
    pwVar6 = local_78.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar6,bVar7);
  if (local_78.Data != (wchar_t *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FVar4.Owner.Owner = local_48.Buffer.Owner.Owner;
  if (local_48.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_48.Buffer.Owner.Owner + 0x10))(local_48.Buffer.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  return;
}

// TestFieldNoClone<6,FSharedBuffer,`FCbFieldBinaryTest::RunTest'::__l2::FCbBinaryAccessors,FCbField> @ 141a5cba0

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<6,FSharedBuffer,_FCbFieldBinaryTest::RunTest_::__l2::FCbBinaryAccessors,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,FSharedBuffer param_3,
          FSharedBuffer param_4,ECbFieldError param_5,FCbBinaryAccessors *param_6)

{
  ECbFieldError EVar1;
  longlong *plVar2;
  code *pcVar3;
  FCbBinaryAccessors *pFVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ForAnyElementType FVar9;
  FString local_48;
  FString local_38;
  
  pFVar4 = param_6;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_6->IsType);
  plVar2 = *(longlong **)&(pFVar4->IsType).field_0x28;
  pcVar3 = *(code **)&pFVar4->IsType;
  plVar8 = (longlong *)&(pFVar4->IsType).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar5 = (*pcVar3)(uVar7,param_2);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::Is[Type](%s)");
  if ((bool)cVar5 != (param_5 != TypeError)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar6 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) == false");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,bVar6);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar5 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,cVar5 != '\0');
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    cVar5 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_48,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar5 != '\x01') {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = param_6;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_6->AsType);
  plVar2 = *(longlong **)&(pFVar4->AsType).field_0x28;
  pcVar3 = *(code **)&pFVar4->AsType;
  plVar8 = (longlong *)&(pFVar4->AsType).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar3)(&param_6,uVar7,param_2,param_4.Owner.Owner);
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> Equal");
  if (param_6 != *(FCbBinaryAccessors **)param_3.Owner.Owner) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_6);
  cVar5 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar5 != '\0') != (param_5 != None)) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_48,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar1 != param_5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_3.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_4.Owner.Owner);
  return;
}

// TestFieldNoClone<30,TMemoryView<void_const_>,`FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor,FCbField> @ 141a63530

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          FCustomByIdAccessor *param_6)

{
  ECbFieldError EVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FString local_58;
  FString local_48;
  TMemoryView<void_const_> local_38;
  
  cVar4 = (*(code *)param_6->IsType)(param_2);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if ((bool)cVar4 != (param_5 != TypeError)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar4 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar4 != '\0');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar4 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar4 != '\x01') {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data.AllocatorInstance.Data = param_4->Data;
  local_48.Data._8_8_ = param_4->Size;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_6->AsType);
  plVar3 = *(longlong **)&(param_6->AsType).field_0x28;
  pcVar2 = *(code **)&param_6->AsType;
  plVar7 = (longlong *)&(param_6->AsType).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar7 = plVar3;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(&local_38,uVar6,param_2,&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,&local_38,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  cVar4 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar4 != '\0') != (param_5 != None)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar1 != param_5) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<30,TMemoryView<void_const_>,`FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor,FCbFieldView> @ 141a63880

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          FCustomByIdAccessor *param_6)

{
  ECbFieldError EVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FString local_58;
  FString local_48;
  TMemoryView<void_const_> local_38;
  
  cVar4 = (*(code *)param_6->IsType)(param_2);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if ((bool)cVar4 != (param_5 != TypeError)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar5 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    EVar1 = param_2->Error;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,EVar1 != None);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    EVar1 = param_2->Error;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar1 != TypeError) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data.AllocatorInstance.Data = param_4->Data;
  local_48.Data._8_8_ = param_4->Size;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_6->AsType);
  plVar3 = *(longlong **)&(param_6->AsType).field_0x28;
  pcVar2 = *(code **)&param_6->AsType;
  plVar7 = (longlong *)&(param_6->AsType).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar7 = plVar3;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(&local_38,uVar6,param_2,&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,&local_38,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar1 != None) != (param_5 != None)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar1 != param_5) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<31,TMemoryView<void_const_>,`FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor,FCbField> @ 141a64230

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbField>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbField *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          FCustomByNameAccessor *param_6)

{
  ECbFieldError EVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FString local_58;
  FString local_48;
  TMemoryView<void_const_> local_38;
  
  cVar4 = (*(code *)param_6->IsType)(param_2);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if ((bool)cVar4 != (param_5 != TypeError)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((*(byte *)param_2 & 0x1e) != 0xc)) {
    bVar5 = FCbFieldView::AsBool((FCbFieldView *)param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar4 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,cVar4 != '\0');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    cVar4 = param_2->field_0x1;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (cVar4 != '\x01') {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data.AllocatorInstance.Data = param_4->Data;
  local_48.Data._8_8_ = param_4->Size;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_6->AsType);
  plVar3 = *(longlong **)&(param_6->AsType).field_0x28;
  pcVar2 = *(code **)&param_6->AsType;
  plVar7 = (longlong *)&(param_6->AsType).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar7 = plVar3;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(&local_38,uVar6,param_2,&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,&local_38,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  cVar4 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((cVar4 != '\0') != (param_5 != None)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->field_0x1;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar1 != param_5) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// TestFieldNoClone<31,TMemoryView<void_const_>,`FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor,FCbFieldView> @ 141a64580

void __thiscall
FCbFieldTestBase::
TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbFieldView>
          (FCbFieldTestBase *this,wchar_t *param_1,FCbFieldView *param_2,
          TMemoryView<void_const_> *param_3,TMemoryView<void_const_> *param_4,ECbFieldError param_5,
          FCustomByNameAccessor *param_6)

{
  ECbFieldError EVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  FString local_58;
  FString local_48;
  TMemoryView<void_const_> local_38;
  
  cVar4 = (*(code *)param_6->IsType)(param_2);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::Is[Type](%s)");
  if ((bool)cVar4 != (param_5 != TypeError)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_5 == None) && ((param_2->TypeWithFlags & CustomById) != BoolFalse)) {
    bVar5 = FCbFieldView::AsBool(param_2,false);
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) == false");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,bVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    EVar1 = param_2->Error;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> HasError()");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,EVar1 != None);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    EVar1 = param_2->Error;
    ::FString::PrintfImpl(&local_58,L"FCbFieldView::AsBool(%s) -> GetError() == TypeError");
    if (EVar1 != TypeError) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_48.Data.AllocatorInstance.Data = param_4->Data;
  local_48.Data._8_8_ = param_4->Size;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_6->AsType);
  plVar3 = *(longlong **)&(param_6->AsType).field_0x28;
  pcVar2 = *(code **)&param_6->AsType;
  plVar7 = (longlong *)&(param_6->AsType).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar7 = plVar3;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(&local_38,uVar6,param_2,&local_48);
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> Equal");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,&local_38,param_3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if ((EVar1 != None) != (param_5 != None)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar1 != param_5) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// Transform<TArrayView<char_const_,int>,TArray<char,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,char_(__cdecl*)(char)> @ 141a6a970

void __cdecl
Algo::
Transform<TArrayView<char_const_,int>,TArray<char,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,char_(__cdecl*)(char)>
          (TArrayView<char_const_,int> *param_1,
          TArray<char,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          _func___cdecl_char_char *param_3)

{
  ForElementType<char> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<char> FVar5;
  char *pcVar6;
  char *pcVar7;
  char local_18 [16];
  
  pcVar7 = param_1->DataPtr;
  pcVar6 = pcVar7 + param_1->ArrayNum;
  do {
    if (pcVar7 == pcVar6) {
      return;
    }
    local_18[0] = (*param_3)(*pcVar7);
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<char>)param_2;
    if (FVar1 != (ForElementType<char>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= local_18) {
      FVar5 = (ForElementType<char>)param_2;
      if (FVar1 != (ForElementType<char>)0x0) {
        FVar5 = FVar1;
      }
      if ((local_18 < (char *)((longlong)FVar5 + (longlong)param_2->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<char>_>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<char>)param_2;
    if (FVar1 != (ForElementType<char>)0x0) {
      FVar5 = FVar1;
    }
    pcVar7 = pcVar7 + 1;
    *(char *)((longlong)iVar4 + (longlong)FVar5) = local_18[0];
  } while( true );
}

// Transform<TArrayView<char8_t_const_,int>,TArray<char8_t,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,char8_t_(__cdecl*)(char8_t)> @ 141a6aaa0

void __cdecl
Algo::
Transform<TArrayView<char8_t_const_,int>,TArray<char8_t,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,char8_t_(__cdecl*)(char8_t)>
          (TArrayView<char8_t_const_,int> *param_1,
          TArray<char8_t,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          _func___cdecl_uchar_uchar *param_3)

{
  ForElementType<char8_t> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<char8_t> FVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar local_18 [16];
  
  puVar7 = param_1->DataPtr;
  puVar6 = puVar7 + param_1->ArrayNum;
  do {
    if (puVar7 == puVar6) {
      return;
    }
    local_18[0] = (*param_3)(*puVar7);
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<char8_t>)param_2;
    if (FVar1 != (ForElementType<char8_t>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= local_18) {
      FVar5 = (ForElementType<char8_t>)param_2;
      if (FVar1 != (ForElementType<char8_t>)0x0) {
        FVar5 = FVar1;
      }
      if ((local_18 < (uchar *)((longlong)FVar5 + (longlong)param_2->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<char8_t>_>
                        (0x101,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<char8_t>)param_2;
    if (FVar1 != (ForElementType<char8_t>)0x0) {
      FVar5 = FVar1;
    }
    puVar7 = puVar7 + 1;
    *(uchar *)((longlong)iVar4 + (longlong)FVar5) = local_18[0];
  } while( true );
}

// Transform<TArrayView<wchar_t_const_,int>,TArray<wchar_t,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,wchar_t_(__cdecl*)(wchar_t)> @ 141a6abd0

void __cdecl
Algo::
Transform<TArrayView<wchar_t_const_,int>,TArray<wchar_t,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,wchar_t_(__cdecl*)(wchar_t)>
          (TArrayView<wchar_t_const_,int> *param_1,
          TArray<wchar_t,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          _func___cdecl_wchar_t_wchar_t *param_3)

{
  wchar_t *pwVar1;
  ForElementType<wchar_t> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<wchar_t> FVar6;
  wchar_t *pwVar7;
  wchar_t local_18 [8];
  
  pwVar7 = param_1->DataPtr;
  pwVar1 = pwVar7 + param_1->ArrayNum;
  do {
    if (pwVar7 == pwVar1) {
      return;
    }
    local_18[0] = (*param_3)(*pwVar7);
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<wchar_t>)param_2;
    if (FVar2 != (ForElementType<wchar_t>)0x0) {
      FVar6 = FVar2;
    }
    if ((ulonglong)FVar6 <= local_18) {
      FVar6 = (ForElementType<wchar_t>)param_2;
      if (FVar2 != (ForElementType<wchar_t>)0x0) {
        FVar6 = FVar2;
      }
      if ((local_18 < (wchar_t *)((longlong)FVar6 + (longlong)param_2->ArrayMax * 2)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                        (0x202,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<wchar_t>)param_2;
    if (FVar2 != (ForElementType<wchar_t>)0x0) {
      FVar6 = FVar2;
    }
    pwVar7 = pwVar7 + 1;
    *(wchar_t *)((longlong)FVar6 + (longlong)iVar5 * 2) = local_18[0];
  } while( true );
}

// WriteToString<64,char_const_(&)[4]> @ 141a6b060

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char_const_(&)[4]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,char (*param_1) [4])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [4])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,char8_t_const_(&)[4]> @ 141a6b100

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char8_t_const_(&)[4]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,uchar (*param_1) [4])

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar4 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (uchar (*) [4])0x0) {
    sVar2 = strlen((char *)param_1);
    iVar4 = (int)sVar2;
  }
  iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,*param_1,iVar4);
  if ((ulonglong)__return_storage_ptr__->_padding_ <
      (ulonglong)(__return_storage_ptr__->_padding_ + (longlong)iVar1 * 2)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar1);
  }
  if (iVar4 != 0) {
    pwVar3 = UE::Core::Private::Convert
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar1,*param_1,iVar4);
    __return_storage_ptr__->_padding_ = (longlong)pwVar3;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,wchar_t_const_(&)[4]> @ 141a6b1b0

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,wchar_t_const_(&)[4]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,wchar_t (*param_1) [4])

{
  int iVar1;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  if (param_1 != (wchar_t (*) [4])0x0) {
    sVar2 = wcslen(*param_1);
    iVar1 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_1,iVar1);
  return __return_storage_ptr__;
}

// WriteToString<64,char_const_(&)[5]> @ 141a6b210

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char_const_(&)[5]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,char (*param_1) [5])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [5])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,char_const_(&)[6]> @ 141a6b2b0

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char_const_(&)[6]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,char (*param_1) [6])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [6])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,char_const_(&)[7]> @ 141a6b350

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char_const_(&)[7]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,char (*param_1) [7])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [7])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,char_const_(&)[8]> @ 141a6b3f0

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char_const_(&)[8]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,char (*param_1) [8])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [8])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,char_const_(&)[15]> @ 141a6b490

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,char_const_(&)[15]>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,char (*param_1) [15])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [15])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<64,FName> @ 141a6b530

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,FName>(TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<1035,char8_t_const_*_&> @ 141a6b570

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToString<1035,char8_t_const_*_&>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,uchar **param_1)

{
  uchar *_Str;
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar4 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  _Str = *param_1;
  if (_Str != (uchar *)0x0) {
    sVar2 = strlen((char *)_Str);
    iVar4 = (int)sVar2;
  }
  iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,iVar4);
  if ((ulonglong)__return_storage_ptr__->_padding_ <
      (ulonglong)(__return_storage_ptr__->_padding_ + (longlong)iVar1 * 2)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar1);
  }
  if (iVar4 != 0) {
    pwVar3 = UE::Core::Private::Convert
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar1,_Str,iVar4);
    __return_storage_ptr__->_padding_ = (longlong)pwVar3;
  }
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FEvent_*>_> @ 141a6b620

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FEvent_*>_>(_Atomic_padded<FEvent_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FEvent_*>_> @ 141a6b630

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FEvent_*>_>(_Atomic_padded<FEvent_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Tasks::Private::FTaskBase_*>_> @ 141a6b640

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Tasks::Private::FTaskBase_*>_>
          (_Atomic_padded<UE::Tasks::Private::FTaskBase_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64_*>_> @ 141a6b650

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64_*>_>
          (_Atomic_padded<unsigned___int64_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64_*>_> @ 141a6b660

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64_*>_>
          (_Atomic_padded<unsigned___int64_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,FEvent_*> @ 141a6b670

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FEvent_*>(FEvent **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::Tasks::Private::FTaskBase_*> @ 141a6b680

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::Tasks::Private::FTaskBase_*>(FTaskBase **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,unsigned___int64_*> @ 141a6b690

long64 __cdecl std::_Atomic_reinterpret_as<__int64,unsigned___int64_*>(ulong64 **param_1)

{
  return (long64)*param_1;
}

// __builtin_array_init_helper<FNameEntryId> @ 141a6b6a0

void __cdecl __builtin_array_init_helper<FNameEntryId>(FNameEntryId *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 << 2);
    return;
  }
  return;
}

// atomic_fetch_and<unsigned___int64> @ 141a6b6c0

ulong64 __cdecl
std::atomic_fetch_and<unsigned___int64>(atomic<unsigned___int64> *param_1,ulong64 param_2)

{
  atomic<unsigned___int64> aVar1;
  atomic<unsigned___int64> aVar2;
  bool bVar3;
  
  aVar1 = *param_1;
  do {
    LOCK();
    aVar2 = *param_1;
    bVar3 = aVar1 == aVar2;
    if (bVar3) {
      *param_1 = (atomic<unsigned___int64>)((ulonglong)aVar1 & param_2);
      aVar2 = aVar1;
    }
    UNLOCK();
    aVar1 = aVar2;
  } while (!bVar3);
  return (ulong64)aVar2;
}

// atomic_fetch_or<unsigned___int64> @ 141a6b6f0

ulong64 __cdecl
std::atomic_fetch_or<unsigned___int64>(atomic<unsigned___int64> *param_1,ulong64 param_2)

{
  atomic<unsigned___int64> aVar1;
  atomic<unsigned___int64> aVar2;
  bool bVar3;
  
  aVar1 = *param_1;
  do {
    LOCK();
    aVar2 = *param_1;
    bVar3 = aVar1 == aVar2;
    if (bVar3) {
      *param_1 = (atomic<unsigned___int64>)((ulonglong)aVar1 | param_2);
      aVar2 = aVar1;
    }
    UNLOCK();
    aVar1 = aVar2;
  } while (!bVar3);
  return (ulong64)aVar2;
}

// ~<lambda_1> @ 141a721c0

void __thiscall
`Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000141a72227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~AtomicQueueB<unsigned_int,std::allocator<unsigned_int>,0,1,0,0> @ 141a72240

void __thiscall
atomic_queue::AtomicQueueB<unsigned_int,std::allocator<unsigned_int>,0,1,0,0>::
~AtomicQueueB<unsigned_int,std::allocator<unsigned_int>,0,1,0,0>
          (AtomicQueueB<unsigned_int,std::allocator<unsigned_int>,0,1,0,0> *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> *paVar2;
  ulong64 uVar3;
  
  paVar1 = this->elements_;
  if (paVar1 == (atomic<unsigned_int> *)0x0) {
    return;
  }
  uVar3 = (ulonglong)this->size_ * 4;
  paVar2 = paVar1;
  if (0xfff < uVar3) {
    paVar2 = *(atomic<unsigned_int> **)(paVar1 + -2);
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)paVar1 + (-8 - (longlong)paVar2))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(paVar2,uVar3);
  return;
}

// ~TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::__l2::<lambda_1>,0,1> @ 141a725c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FEnsureScope::FEnsureScope_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::`2'::<lambda_1>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x000141a725e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 141a725f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Async<_LoadNameBatchAsync_::__l15::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`LoadNameBatchAsync'::`15'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`LoadNameBatchAsync'::__l15::<lambda_1>,1,0> @ 141a72610

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`LoadNameBatchAsync'::__l15::<lambda_1>,1,0>::
~TFunction_OwnedObject<_LoadNameBatchAsync_::__l15::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LoadNameBatchAsync'::`15'::<lambda_1>,1,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`LoadNameBatchAsync'::__l15::<lambda_2>,0,0> @ 141a72630

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`LoadNameBatchAsync'::__l15::<lambda_2>,0,0>::
~TFunction_OwnedObject<_LoadNameBatchAsync_::__l15::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LoadNameBatchAsync'::`15'::<lambda_2>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`LoadNameBatchAsync'::__l17::<lambda_3>,0,0> @ 141a72650

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`LoadNameBatchAsync'::__l17::<lambda_3>,0,0>::
~TFunction_OwnedObject<_LoadNameBatchAsync_::__l17::<lambda_3>,0,0>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`LoadNameBatchAsync'::`17'::<lambda_3>,0,0>::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::__l1::<lambda_4_>,0,0> @ 141a72670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::__l1::<lambda_4_>,0,0>::
~TFunction_OwnedObject<_FEnsureScope::FEnsureScope_::__l1::<lambda_4_>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::`1'::<lambda_4_>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,1,0> @ 141a72690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,1,0>
::
~TFunction_OwnedObject<__FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor::FCustomByIdAccessor_::__l1::<lambda_7_>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,1,0> @ 141a726b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,1,0>
::
~TFunction_OwnedObject<__FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor::FCustomByNameAccessor_::__l1::<lambda_8_>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator<< @ 141a72e70

TStringBuilderBase<char8_t> * __cdecl
operator<<(TStringBuilderBase<char8_t> *param_1,FNameEntryId param_2)

{
  FNameEntry *this;
  
  this = FName::ResolveEntry(param_2);
  FNameEntry::AppendNameToString(this,param_1);
  return param_1;
}

// operator<< @ 141a72ea0

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,FNameEntryId param_2)

{
  FNameEntry *this;
  
  this = FName::ResolveEntry(param_2);
  FNameEntry::AppendNameToString(this,param_1);
  return param_1;
}

// operator<< @ 141a72ed0

FArchive * __cdecl operator<<(FArchive *param_1,ushort *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,param_2);
  return param_1;
}

// operator<< @ 141a72f40

FArchive * __cdecl operator<<(FArchive *param_1,FNameEntryId *param_2)

{
  uint uVar1;
  longlong *plVar2;
  FNameEntryId local_res8 [2];
  
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = (FNameEntryId)param_2->Value;
    if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 4;
      return param_1;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      return param_1;
    }
    FArchive::SerializeByteOrderSwapped(param_1,&local_res8[0].Value);
    return param_1;
  }
  local_res8[0].Value = 0;
  if ((uint *)*plVar2 + 1 <= (uint *)plVar2[1]) {
    uVar1 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
    param_2->Value = uVar1;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    param_2->Value = (uint)local_res8[0];
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&local_res8[0].Value);
  param_2->Value = (uint)local_res8[0];
  return param_1;
}

// operator<< @ 141a73050

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FNameEntrySerialized *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FArchive *pFVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  FString local_28;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if (param_2->bIsWide == false) {
      FString::FString(&local_28,(param_2->field1_0x2).AnsiName);
    }
    else {
      FString::FString(&local_28,(param_2->field1_0x2).WideName);
    }
    operator<<(param_1,&local_28);
    operator<<(param_1,&param_2->NonCasePreservingHash);
    operator<<(param_1,&param_2->CasePreservingHash);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return param_1;
    }
  }
  else {
    lVar6 = *(longlong *)&param_1->field_0x38;
    iVar5 = 0x400;
    if ((0 < lVar6) && (iVar5 = 0x400, lVar6 < 0x400)) {
      iVar5 = (int)lVar6;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    uVar4 = 0;
    if ((int)local_res8[0] < -iVar5 || iVar5 < (int)local_res8[0]) {
      FArchiveState::SetCriticalError((FArchiveState *)param_1);
      if (1 < (byte)LogUnrealNames._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogUnrealNames);
      }
    }
    else {
      bVar7 = (int)local_res8[0] < 0;
      param_2->bIsWide = bVar7;
      if ((int)local_res8[0] < 0) {
        local_res8[0] = -local_res8[0];
        if ((!bVar7) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("bIsWide",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\NameTypes.h"
                               ,0x1a1,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar3 = (FArchive *)(*pcVar2)();
          return pFVar3;
        }
        lVar6 = (longlong)(int)local_res8[0] * 2;
      }
      else {
        if ((bVar7) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bIsWide",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\NameTypes.h"
                               ,0x198,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar3 = (FArchive *)(*pcVar2)();
          return pFVar3;
        }
        lVar6 = (longlong)(int)local_res8[0];
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field1_0x2,lVar6);
      if (0x1f7 < *(int *)&param_1->field_0x40) {
        uVar4 = 4;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,uVar4);
    }
  }
  return param_1;
}

// operator<< @ 141a73240

FArchive * __cdecl operator<<(FArchive *param_1,FPackageFileVersion *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->FileVersionUE4 = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->FileVersionUE5;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator() @ 141a73f20

void __thiscall
`TestNameBatch'::__l2::<lambda_1>::operator()
          (void *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,uchar param_2,
          uint param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement local_res18 [16];
  
  uVar6 = (ulonglong)param_3;
  local_res18[0] = (FScriptContainerElement)param_2;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_3,&param_1->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)param_3) {
    do {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= local_res18) && (local_res18 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      (param_1->AllocatorInstance).Data[iVar5] = local_res18[0];
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *piVar1) {
    param_1->ArrayNum = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)*piVar1);
}

// operator() @ 141a74060

void __thiscall `LoadNameBatchAsync'::__l15::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<FSerializedNameHeader_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<FSerializedNameHeader_const_,int> local_18;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)this;
  local_48.DataPtr = (uchar *)puVar1[4];
  local_48._8_8_ = puVar1[5];
  local_38.DataPtr = (FSerializedNameHeader *)puVar1[2];
  local_38._8_8_ = puVar1[3];
  if ((*(byte *)(puVar1 + 8) & 1) != 0) {
    LoadSeparatedNameBatchInInputOrder
              ((TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(puVar1 + 10),
               (ulong64 *)*puVar1,&local_38,&local_48);
                    /* WARNING: Could not recover jumptable at 0x000141a740d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar1[9] + 0x10))();
    return;
  }
  local_28.DataPtr = local_48.DataPtr;
  local_28._8_8_ = local_48._8_8_;
  local_18.DataPtr = local_38.DataPtr;
  local_18._8_8_ = local_38._8_8_;
  LoadSeparatedNameBatchInShardOrder
            ((TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(puVar1 + 10),
             (ulong64 *)*puVar1,&local_18,&local_28);
                    /* WARNING: Could not recover jumptable at 0x000141a740fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)puVar1[9] + 0x10))();
  return;
}

// operator() @ 141a74260

void __thiscall
`TestNameBatch'::__l2::<lambda_2>::operator()
          (void *this,TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_208;
  void *local_1f8;
  undefined8 local_1f0;
  FNameBatchLoader local_1e8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TArrayView<FDisplayNameEntryId_const_,int> local_188;
  FArchiveState local_178;
  undefined8 local_e8;
  void **local_e0;
  undefined8 local_d8;
  FArchiveState local_c8;
  undefined8 local_38;
  void **local_30;
  undefined8 local_28;
  
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_178._padding_ = 0;
  local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_178._40_8_ = 0;
  local_178.ArSerializingDefaults = 0;
  local_178.ArPortFlags = 0;
  local_178.ArMaxSerializeSize = 0;
  local_178.ArUEVer.FileVersionUE4 = 0;
  local_178.ArUEVer.FileVersionUE5 = 0;
  local_178.ArLicenseeUEVer = 0;
  local_178.ArEngineVer.Major = 0;
  local_178.ArEngineVer.Minor = 0;
  local_178.ArEngineVer.Patch = 0;
  local_178.ArEngineVer._6_2_ = 0;
  local_178.ArEngineVer.Changelist = 0;
  local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_178.SerializedProperty = (FProperty *)0x0;
  local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_178.bCustomVersionsAreReset = false;
  local_178._129_7_ = 0;
  local_178.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_178);
  local_e8 = 0;
  local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_e0 = &local_1f8;
  local_d8 = 0;
  FArchiveState::SetIsSaving(&local_178,true);
  (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
  iStack_190 = param_1->ArrayNum;
  local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_198 = (param_1->AllocatorInstance).Data;
  if (iStack_190 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_188._12_4_ = uStack_18c;
  local_188.ArrayNum = iStack_190;
  local_188.DataPtr = (FDisplayNameEntryId *)local_198;
  SaveNameBatch(&local_188,(FArchive *)&local_178);
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_30 = &local_1f8;
  local_28 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_1e8.Hashes.DataPtr = (ulong64 *)0x0;
  local_1e8.Hashes.ArrayNum = 0;
  local_1e8.Headers.DataPtr = (FSerializedNameHeader *)0x0;
  local_1e8.Headers.ArrayNum = 0;
  local_1e8.Strings.DataPtr = (uchar *)0x0;
  local_1e8.Strings.ArrayNum = 0;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1e8.Flags = None;
  bVar2 = FNameBatchLoader::Read(&local_1e8,(FArchive *)&local_c8);
  if (bVar2) {
    FNameBatchLoader::Load(&local_1e8,&local_208);
  }
  else {
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_208.ArrayNum == param_1->ArrayNum) {
    bVar2 = CompareItems<FDisplayNameEntryId,int>
                      ((FDisplayNameEntryId *)local_208.AllocatorInstance.Data,
                       (FDisplayNameEntryId *)(param_1->AllocatorInstance).Data,local_208.ArrayNum);
    if (bVar2) goto LAB_141a74490;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchiveRoundtrippedNames == Names",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                     ,0x15e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141a74490:
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  FArchive::~FArchive((FArchive *)&local_178);
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  return;
}

// operator() @ 141a744e0

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __thiscall
`LoadNameBatchAsync'::__l15::<lambda_2>::operator()
          (void *this,
          TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DoneEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x14fd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x20))(*(longlong **)(lVar1 + 0x48),0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(lVar1 + 0x48));
  *(undefined8 *)(lVar1 + 0x48) = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = *(FScriptContainerElement **)(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x50) = 0;
  __return_storage_ptr__->ArrayNum = *(int *)(lVar1 + 0x58);
  __return_storage_ptr__->ArrayMax = *(int *)(lVar1 + 0x5c);
  *(undefined8 *)(lVar1 + 0x58) = 0;
  return __return_storage_ptr__;
}

// operator() @ 141a745a0

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __thiscall
`LoadNameBatchAsync'::__l17::<lambda_3>::operator()
          (void *this,
          TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)((longlong)this + 8);
  _Src = *(void **)this;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 141a747d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74800

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Tasks::Private::TryWaitOnNamedThread'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(SmallTaskAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0xff < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&SmallTaskAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a748f0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Private::TryWaitOnNamedThread'::__l5::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_(__cdecl*)(void),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_(__cdecl*)(void),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArray_VFDisplayNameEntryId__V__TSizedDefaultAllocator__0CA_____XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FSharedBuffer_(__cdecl*)(FCbFieldView_&,FSharedBuffer_const_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FSharedBuffer_(__cdecl*)(FCbFieldView_&,FSharedBuffer_const_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFSharedBuffer__AEAVFCbFieldView__AEBV1__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a749b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FEnsureHandlerArgs_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FEnsureHandlerArgs_const_&),0,0> *this,uint param_1
          )

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFEnsureHandlerArgs___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a749f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FCbFieldView_const_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FCbFieldView_const_&),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NAEBVFCbFieldView___Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::`2'::<lambda_1>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`LoadNameBatchAsync'::`15'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`LoadNameBatchAsync'::__l15::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74ae0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`LoadNameBatchAsync'::__l15::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LoadNameBatchAsync'::`15'::<lambda_1>,1,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74b30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`LoadNameBatchAsync'::__l15::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LoadNameBatchAsync'::`15'::<lambda_2>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74b80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`LoadNameBatchAsync'::__l17::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LoadNameBatchAsync'::`17'::<lambda_3>,0,0>::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::__l1::<lambda_4_>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::`1'::<lambda_4_>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74ca0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNameBatchAsyncLoader,SharedPointerInternals::DefaultDeleter<FNameBatchAsyncLoader>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNameBatchAsyncLoader,SharedPointerInternals::DefaultDeleter<FNameBatchAsyncLoader>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74ce0

void * __thiscall
FCheckScopeOutputDeviceError::_scalar_deleting_destructor_
          (FCheckScopeOutputDeviceError *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74d20

void * __thiscall FFilterFeedback::_scalar_deleting_destructor_(FFilterFeedback *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Handler != 0) {
    plVar1 = *(longlong **)&(this->Handler).field_0x28;
    plVar2 = (longlong *)&(this->Handler).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74d80

void * __thiscall
UE::Virtualization::FNullVirtualizationSystem::_scalar_deleting_destructor_
          (FNullVirtualizationSystem *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NotificationEvent).field_0x28,*(int *)&(this->NotificationEvent).field_0x30);
  pvVar1 = *(void **)&(this->NotificationEvent).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->NotificationEvent);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74df0

void * __thiscall
UE::Name::Private::FOutputDeviceWrapper::_scalar_deleting_destructor_
          (FOutputDeviceWrapper *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141a74e30

void * __thiscall
UE::Virtualization::IVirtualizationSystem::_scalar_deleting_destructor_
          (IVirtualizationSystem *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AppendHash @ 141a75940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AppendHash(FBlake3 *param_1,FName param_2)

{
  code *pcVar1;
  FNameEntryHeader *pFVar2;
  bool bVar3;
  FNameEntry *pFVar4;
  FNameEntry_u_2 *pFVar5;
  uint uVar6;
  ulong64 uVar7;
  uint uStackX_14;
  undefined1 auStack_848 [32];
  uint local_828 [4];
  FNameEntry_u_2 local_818;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  pFVar4 = FName::ResolveEntry(param_2.ComparisonIndex.Value);
  if ((ushort)(pFVar4.Len << 6) < 0x40) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Header.Len != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x976,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = &pFVar4->field1_0x2;
  uVar6 = pFVar4->Len;
  if (pFVar4.bIsWide == 0) {
    if (pFVar5 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,pFVar4->Len);
      pFVar5 = &local_818;
    }
    uVar7 = (ulong64)uVar6;
  }
  else {
    if (pFVar5 == (FNameEntry_u_2 *)0x0) {
      memcpy(&local_818,(void *)0x0,pFVar4->Len * 2);
      pFVar5 = &local_818;
    }
    uVar7 = (ulonglong)uVar6 * 2;
  }
  FBlake3::Update(param_1,pFVar5,uVar7);
  uStackX_14 = param_2.Number;
  local_828[0] = uStackX_14;
  FBlake3::Update(param_1,local_828,4);
  return;
}

// ApplyMemoryImageNamePatch @ 141a76070

void __cdecl
Freeze::ApplyMemoryImageNamePatch
          (void *param_1,FMemoryImageName *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->Flags;
  *(undefined8 *)param_1 = 0;
  if ((uVar1 & 8) == 0) {
    *(uint *)param_1 = (param_2->ComparisonIndex).Value;
    *(uint *)((longlong)param_1 + 4) = param_2->Number;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(uint *)param_1 = (param_2->ComparisonIndex).Value;
  *(uint *)((longlong)param_1 + 4) = param_2->Number;
  *(uint *)((longlong)param_1 + 8) = (param_2->ComparisonIndex).Value;
  return;
}

// BatchLoadNameWithoutHash @ 141a7af40

FDisplayNameEntryId __cdecl BatchLoadNameWithoutHash(FNameSerializedView *param_1)

{
  FNameValue<1> *pFVar1;
  uint uVar2;
  uint uVar3;
  FNameStringView_u_0 FVar4;
  bool bVar5;
  FDisplayNameEntryId FVar6;
  undefined4 extraout_var;
  FNameHash *pFVar7;
  FNameEntry *pFVar8;
  FNameStringView_u_0 *in_RDX;
  ulonglong uVar9;
  longlong lVar10;
  FNamePoolShard<1> *this;
  FNameSlot local_res8;
  uint uStackX_c;
  ushort local_res10 [4];
  FNameStringView_u_0 local_48;
  undefined8 uStack_40;
  FNameStringView_u_0 local_38;
  uint uStack_30;
  undefined1 uStack_2c;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)((longlong)in_RDX + 0xc) != '\0') {
    FVar6 = BatchLoadNameWithoutHash(local_res10,(uint)*(char **)in_RDX);
    *(undefined4 *)&param_1->field0_0x0 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Id.Value);
    return (FDisplayNameEntryId)(uint)param_1;
  }
  FVar4 = (FNameStringView_u_0)in_RDX->Ansi;
  uVar2 = *(uint *)(in_RDX + 1);
  pFVar7 = HashLowerCase<char>((FNameHash *)&local_48,FVar4.Ansi,uVar2);
  uStack_2b = uStack_40._5_2_;
  local_28 = pFVar7->ShardIndex;
  uStack_24 = pFVar7->UnmaskedSlotIndex;
  uStack_20 = pFVar7->SlotProbeHash;
  uStack_1c = *(undefined4 *)&pFVar7->EntryProbeHeader;
  uStack_29 = uStack_40._7_1_;
  uStack_2c = 0;
  lVar10 = (ulonglong)local_28 * 0x40;
  this = (FNamePoolShard<1> *)(NamePoolData + lVar10 + 0x10040);
  local_38 = FVar4;
  uStack_30 = uVar2;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar2 = *(uint *)(NamePoolData + lVar10 + 0x1004c);
  uVar9 = (ulonglong)(uStack_24 & uVar2);
  pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
  uVar3 = *(uint *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
  FVar4 = local_48;
  local_48 = local_38;
  while (local_38 = local_48, uVar3 != 0) {
    if ((uVar3 & 0xe0000000) == uStack_20) {
      uStackX_c = uVar3 & 0xffff;
      local_res8.IdAndHash = (uVar3 & 0x1fffffff) >> 0x10;
      pFVar8 = (FNameEntry *)
               ((ulonglong)((uVar3 & 0xffff) * 2) +
               *(longlong *)
                (*(longlong *)(NamePoolData + lVar10 + 0x10058) + 0x10 +
                (ulonglong)local_res8.IdAndHash * 8));
      if (pFVar8->Header == uStack_1c._0_2_) {
        uStack_40 = CONCAT17(uStack_29,CONCAT25(uStack_2b,CONCAT14(uStack_2c,uStack_30)));
        bVar5 = EqualsSameDimensions<1>(pFVar8,(FNameStringView *)&local_48);
        FVar4 = local_48;
        if (bVar5) break;
      }
    }
    local_48 = FVar4;
    uVar9 = (ulonglong)((int)uVar9 + 1U & uVar2);
    pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
    FVar4 = local_48;
    local_48 = local_38;
    uVar3 = *(uint *)(*(longlong *)(NamePoolData + lVar10 + 0x10050) + uVar9 * 4);
  }
  local_48 = FVar4;
  uVar2 = *(uint *)&(pFVar1->Name).field0_0x0;
  if (uVar2 == 0) {
    FNamePoolShard<1>::CreateAndInsertEntry<FWriteScopeLock>(this,&local_res8,pFVar1);
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    local_res8.IdAndHash = uVar2 & 0x1fffffff;
  }
  *(uint *)&param_1->field0_0x0 = local_res8.IdAndHash;
  return (FNameEntryId)(uint)param_1;
}

// BatchLoadNameWithoutHash @ 141a7b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDisplayNameEntryId __cdecl BatchLoadNameWithoutHash(ushort *param_1,uint param_2)

{
  FNameValue<1> *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FNameHash *pFVar5;
  FNameEntry *pFVar6;
  undefined4 in_register_00000014;
  ulonglong uVar7;
  longlong lVar8;
  FNamePoolShard<1> *this;
  uint in_R8D;
  undefined1 auStack_888 [32];
  FNameSlot local_868;
  uint uStack_864;
  undefined2 local_85b;
  undefined1 local_859;
  FNameStringView_u_0 local_858;
  uint uStack_850;
  undefined1 uStack_84c;
  undefined2 uStack_84b;
  undefined1 uStack_849;
  uint local_848;
  uint uStack_844;
  uint uStack_840;
  undefined4 uStack_83c;
  FNameStringView_u_0 local_838;
  undefined8 uStack_830;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_888;
  if (in_R8D != 0) {
    memcpy(local_828,(void *)CONCAT44(in_register_00000014,param_2),(ulonglong)in_R8D * 2);
  }
  pFVar5 = HashLowerCase<wchar_t>((FNameHash *)&local_838,local_828,in_R8D);
  local_858.Data = local_828;
  uStack_84c = 1;
  local_848 = pFVar5->ShardIndex;
  uStack_844 = pFVar5->UnmaskedSlotIndex;
  uStack_840 = pFVar5->SlotProbeHash;
  uStack_83c = *(undefined4 *)&pFVar5->EntryProbeHeader;
  uStack_84b = local_85b;
  uStack_849 = local_859;
  lVar8 = (ulonglong)local_848 * 0x40;
  this = (FNamePoolShard<1> *)(NamePoolData + lVar8 + 0x10040);
  uStack_850 = in_R8D;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar2 = *(uint *)(NamePoolData + lVar8 + 0x1004c);
  uVar7 = (ulonglong)(uStack_844 & uVar2);
  pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar8 + 0x10050) + uVar7 * 4);
  uVar3 = *(uint *)(*(longlong *)(NamePoolData + lVar8 + 0x10050) + uVar7 * 4);
  while (uVar3 != 0) {
    if ((uVar3 & 0xe0000000) == uStack_840) {
      uStack_864 = uVar3 & 0xffff;
      local_868.IdAndHash = (uVar3 & 0x1fffffff) >> 0x10;
      pFVar6 = (FNameEntry *)
               ((ulonglong)((uVar3 & 0xffff) * 2) +
               *(longlong *)
                (*(longlong *)(NamePoolData + lVar8 + 0x10058) + 0x10 +
                (ulonglong)local_868.IdAndHash * 8));
      if (pFVar6->Header == uStack_83c._0_2_) {
        uStack_830 = CONCAT17(uStack_849,CONCAT25(uStack_84b,CONCAT14(uStack_84c,uStack_850)));
        local_838 = local_858;
        bVar4 = EqualsSameDimensions<1>(pFVar6,(FNameStringView *)&local_838);
        if (bVar4) break;
      }
    }
    uVar7 = (ulonglong)((int)uVar7 + 1U & uVar2);
    pFVar1 = (FNameValue<1> *)(*(longlong *)(NamePoolData + lVar8 + 0x10050) + uVar7 * 4);
    uVar3 = *(uint *)(*(longlong *)(NamePoolData + lVar8 + 0x10050) + uVar7 * 4);
  }
  uVar2 = *(uint *)&(pFVar1->Name).field0_0x0;
  if (uVar2 == 0) {
    FNamePoolShard<1>::CreateAndInsertEntry<FWriteScopeLock>(this,&local_868,pFVar1);
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(uint *)param_1 = local_868.IdAndHash;
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(uint *)param_1 = uVar2 & 0x1fffffff;
  }
  return (FDisplayNameEntryId)SUB84(param_1,0);
}

// BytesToHex @ 141a7b3a0

void __cdecl BytesToHex(uchar *param_1,int param_2,FString *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 != 0) {
    piVar1 = &(param_3->Data).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(uint)((param_3->Data).ArrayNum == 0) + param_2 * 2,(ForAnyElementType *)param_3,
               piVar1,&(param_3->Data).ArrayMax);
    uVar9 = ~(param_2 * 2) + *piVar1;
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = *piVar1;
    pFVar4 = (param_3->Data).AllocatorInstance.Data;
    if ((param_2 < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar2 = param_1 + param_2;
    pFVar4 = pFVar4 + (longlong)(iVar3 + param_2 * -2 + -1) * 2;
    for (; param_1 != pbVar2; param_1 = param_1 + 1) {
      sVar7 = 0x30;
      if (9 < *param_1 >> 4) {
        sVar7 = 0x37;
      }
      *(ushort *)pFVar4 = sVar7 + (ushort)(*param_1 >> 4);
      sVar7 = 0x30;
      if (9 < (*param_1 & 0xf)) {
        sVar7 = 0x37;
      }
      *(ushort *)(pFVar4 + 2) = sVar7 + (ushort)(*param_1 & 0xf);
      pFVar4 = pFVar4 + 4;
    }
    uVar9 = *piVar1 - 1;
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined2 *)((param_3->Data).AllocatorInstance.Data + (longlong)*piVar1 * 2 + -2) = 0;
  }
  return;
}

// BytesToHexLower @ 141a7b900

void __cdecl BytesToHexLower(uchar *param_1,int param_2,FString *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 != 0) {
    piVar1 = &(param_3->Data).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(uint)((param_3->Data).ArrayNum == 0) + param_2 * 2,(ForAnyElementType *)param_3,
               piVar1,&(param_3->Data).ArrayMax);
    uVar9 = ~(param_2 * 2) + *piVar1;
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = *piVar1;
    pFVar4 = (param_3->Data).AllocatorInstance.Data;
    if ((param_2 < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar2 = param_1 + param_2;
    pFVar4 = pFVar4 + (longlong)(iVar3 + param_2 * -2 + -1) * 2;
    for (; param_1 != pbVar2; param_1 = param_1 + 1) {
      sVar7 = 0x30;
      if (9 < *param_1 >> 4) {
        sVar7 = 0x57;
      }
      *(ushort *)pFVar4 = sVar7 + (ushort)(*param_1 >> 4);
      sVar7 = 0x30;
      if (9 < (*param_1 & 0xf)) {
        sVar7 = 0x57;
      }
      *(ushort *)(pFVar4 + 2) = sVar7 + (ushort)(*param_1 & 0xf);
      pFVar4 = pFVar4 + 4;
    }
    uVar9 = *piVar1 - 1;
    uVar8 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined2 *)((param_3->Data).AllocatorInstance.Data + (longlong)*piVar1 * 2 + -2) = 0;
  }
  return;
}

// CallNameCreationHook @ 141a7c090

void __cdecl CallNameCreationHook(void)

{
  bool bVar1;
  
  if (GIsRunning) {
    bVar1 = IsInGameThread();
    if (bVar1) {
      FSampleFNameChurn::NameCreationHook(&GGameThreadFNameChurnTracker);
      return;
    }
  }
  return;
}

// DebugFName @ 141a7d9f0

wchar_t * __cdecl DebugFName(FName *param_1)

{
  FString *pFVar1;
  wchar_t *_Source;
  FString local_18;
  
  pFVar1 = FName::SafeString(&local_18,(FNameEntryId)(param_1->ComparisonIndex).Value,
                             param_1->Number);
  if ((pFVar1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  wcscpy(TempName,_Source);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return TempName;
}

// DebugFName @ 141a7da50

wchar_t * __cdecl DebugFName(int param_1,int param_2)

{
  FString *pFVar1;
  wchar_t *_Source;
  FString local_18;
  
  pFVar1 = FName::SafeString(&local_18,(FNameEntryId)param_1,param_2);
  if ((pFVar1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  wcscpy(TempName,_Source);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return TempName;
}

// DebugFName @ 141a7dab0

wchar_t * __cdecl DebugFName(FNameEntryId param_1)

{
  FNameEntry *this;
  ForAnyElementType _Source;
  FString local_18;
  
  this = FName::ResolveEntry(param_1);
  FNameEntry::GetPlainNameString(this,&local_18);
  _Source.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    _Source.Data = local_18.Data.AllocatorInstance.Data;
  }
  wcscpy(TempName,(wchar_t *)_Source.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return TempName;
}

// GetNamePool @ 141a80d80

FNamePool * __cdecl GetNamePool(void)

{
  FNamePool *pFVar1;
  FLowLevelMemTracker *this;
  
  if (bNamePoolInitialized) {
    return (FNamePool *)NamePoolData;
  }
  pFVar1 = FNamePool::FNamePool((FNamePool *)NamePoolData);
  bNamePoolInitialized = true;
  this = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    this = FLowLevelMemTracker::Construct();
  }
  FLowLevelMemTracker::FinishInitialise(this);
  return pFVar1;
}

// GetSystemGuidRegistry @ 141a814f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDevSystemGuidRegistry * __cdecl GetSystemGuidRegistry(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GSystemGuidRegistry,4000);
      GSystemGuidRegistry.RegisteredSystemGuids._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      GSystemGuidRegistry.RegisteredSystemGuids._48_8_ = _UNK_150631d98;
      GSystemGuidRegistry.RegisteredSystemGuids._0_8_ = 0;
      GSystemGuidRegistry.RegisteredSystemGuids._8_8_ = 0;
      GSystemGuidRegistry.RegisteredSystemGuids._32_8_ = 0;
      GSystemGuidRegistry.RegisteredSystemGuids._64_8_ = 0;
      GSystemGuidRegistry.RegisteredSystemGuids._72_4_ = 0;
      atexit(`GetSystemGuidRegistry'::__l2::_dynamic_atexit_destructor_for__GSystemGuidRegistry__);
      _Init_thread_footer(&_TSS0);
      return &GSystemGuidRegistry;
    }
  }
  return &GSystemGuidRegistry;
}

// GetTypeHash @ 141a82a10

uint __cdecl GetTypeHash(FNameEntryId param_1)

{
  return (param_1.Value >> 0x10) * 0x80001 + ((param_1.Value & 0xffff) >> 4) +
         (param_1.Value & 0xffff) * 0x10001;
}

// IntrinsicAppendHash @ 141a84660

uint __cdecl
Freeze::IntrinsicAppendHash
          (FMemoryImageName *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3
          ,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,(param_3->Flags & 8 | 0x10) >> 1,param_4);
  return uVar1;
}

// IntrinsicUnfrozenCopy @ 141a84680

uint __cdecl
Freeze::IntrinsicUnfrozenCopy
          (FMemoryUnfreezeContent *param_1,FMemoryImageName *param_2,void *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = FPlatformTypeLayoutParameters::IsCurrentPlatform(&param_1->FrozenLayoutParameters);
  if (bVar2) {
    *(FMemoryImageName *)param_3 = *param_2;
    return 8;
  }
  uVar1 = (param_1->FrozenLayoutParameters).Flags;
  *(undefined8 *)param_3 = 0;
  *(uint *)param_3 = (param_2->ComparisonIndex).Value;
  *(uint *)((longlong)param_3 + 4) = param_2->Number;
  uVar3 = 0xc;
  if ((uVar1 & 8) == 0) {
    uVar3 = 8;
  }
  return uVar3;
}

// IntrinsicWriteMemoryImage @ 141a84700

void __cdecl
Freeze::IntrinsicWriteMemoryImage
          (FMemoryImageWriter *param_1,FMemoryImageName *param_2,FTypeLayoutDesc *param_3)

{
  bool bVar1;
  FPlatformTypeLayoutParameters *this;
  FMemoryImageName FVar2;
  int iVar3;
  FName local_res20;
  
  this = FMemoryImageWriter::GetTargetLayoutParams(param_1);
  bVar1 = FPlatformTypeLayoutParameters::IsCurrentPlatform(this);
  if (bVar1) {
    FVar2 = *param_2;
    iVar3 = 8;
  }
  else {
    `Freeze::IntrinsicWriteMemoryImage'::__l7::<lambda_1>::operator()(&local_res20);
    iVar3 = 8;
    FVar2 = *param_2;
    if ((this->Flags & 8) != 0) {
      iVar3 = 0xc;
    }
  }
  local_res20.ComparisonIndex = FVar2.ComparisonIndex.Value;
  local_res20.Number = FVar2.Number;
  FMemoryImageWriter::WriteFMemoryImageName(param_1,iVar3,&local_res20);
  return;
}

// IntrinsicWriteMemoryImage @ 141a84780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Freeze::IntrinsicWriteMemoryImage
          (FMemoryImageWriter *param_1,FScriptName *param_2,FTypeLayoutDesc *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  FMemoryImageSection *pFVar5;
  int iVar6;
  undefined4 uStack_18;
  
  pFVar5 = param_1->Section;
  iVar4 = (pFVar5->Bytes).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar5->Bytes,iVar4 + 0xc,Default);
  if (((param_2->ComparisonIndex).Value != 0) || (param_2->Number != 0)) {
    iVar6 = (pFVar5->ScriptNames).ArrayNum;
    piVar1 = &(pFVar5->ScriptNames).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(pFVar5->ScriptNames).AllocatorInstance,piVar1);
    }
    (pFVar5->ScriptNames).ArrayNum = iVar6 + 1;
    pFVar2 = (pFVar5->ScriptNames).AllocatorInstance.Data + (longlong)iVar6 * 0xc;
    DefaultConstructItems<FMemoryImageNamePointer,int>(pFVar2,1);
    uVar3 = param_2->ComparisonIndex;
    *(ulonglong *)pFVar2 = CONCAT44(param_2->Number,uVar3);
    *(int *)(pFVar2 + 8) = iVar4;
  }
  return;
}

// LexFromString @ 141a85b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(schar *param_1,TStringView<char8_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  iVar1 = atoi((char *)local_78.Base);
  *param_1 = (schar)iVar1;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a85c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(schar *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  iVar1 = _wtoi(local_b8.Base);
  *param_1 = (schar)iVar1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a85d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(uchar *param_1,TStringView<char8_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  iVar1 = atoi((char *)local_78.Base);
  *param_1 = (uchar)iVar1;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a85e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(uchar *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  iVar1 = _wtoi(local_b8.Base);
  *param_1 = (uchar)iVar1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a85f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(short *param_1,TStringView<char8_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  iVar1 = atoi((char *)local_78.Base);
  *param_1 = (short)iVar1;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a86060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(short *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  iVar1 = _wtoi(local_b8.Base);
  *param_1 = (short)iVar1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a86170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(ushort *param_1,TStringView<char8_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  iVar1 = atoi((char *)local_78.Base);
  *param_1 = (ushort)iVar1;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a86270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(ushort *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  iVar1 = _wtoi(local_b8.Base);
  *param_1 = (ushort)iVar1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a86380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(int *param_1,TStringView<char8_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  iVar1 = atoi((char *)local_78.Base);
  *param_1 = iVar1;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a86480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(int *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  void *pvVar2;
  ulong64 uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar1;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar1 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  iVar1 = _wtoi(local_b8.Base);
  *param_1 = iVar1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a86590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(uint *param_1,TStringView<char8_t> *param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar4 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar1 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  lVar2 = _strtoi64((char *)local_78.Base,(char **)0x0,10);
  *param_1 = (uint)lVar2;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a866a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(uint *param_1,TStringView<wchar_t> *param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar1 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  lVar2 = _wtoi64(local_b8.Base);
  *param_1 = (uint)lVar2;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a867b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(float *param_1,TStringView<char8_t> *param_2)

{
  uchar *puVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_a8 [32];
  TStringBuilderBase<char8_t> local_88;
  ulonglong local_68 [8];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.Base = (uchar *)local_68;
  puVar1 = param_2->DataPtr;
  local_88.End = (uchar *)local_28;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_88.CurPos = (uchar *)local_68;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  if (local_28 < (ulonglong *)((longlong)local_68 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_88,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_88.CurPos,puVar1,uVar3);
    local_88.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_88.End < (ulonglong *)((longlong)local_88.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_88,1);
  }
  *local_88.CurPos = 0;
  dVar5 = atof((char *)local_88.Base);
  *param_1 = (float)dVar5;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_88);
  return;
}

// LexFromString @ 141a868c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(float *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_e8 [32];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.Base = local_a8;
  pwVar1 = param_2->DataPtr;
  local_c8.End = (wchar_t *)local_28;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = local_a8;
  if (local_28 < local_a8 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_c8.CurPos,pwVar1,uVar3 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  dVar5 = _wtof(local_c8.Base);
  *param_1 = (float)dVar5;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return;
}

// LexFromString @ 141a869d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(double *param_1,TStringView<char8_t> *param_2)

{
  uchar *puVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_a8 [32];
  TStringBuilderBase<char8_t> local_88;
  ulonglong local_68 [8];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.Base = (uchar *)local_68;
  puVar1 = param_2->DataPtr;
  local_88.End = (uchar *)local_28;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_88.CurPos = (uchar *)local_68;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  if (local_28 < (ulonglong *)((longlong)local_68 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_88,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_88.CurPos,puVar1,uVar3);
    local_88.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_88.End < (ulonglong *)((longlong)local_88.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_88,1);
  }
  *local_88.CurPos = 0;
  dVar5 = atof((char *)local_88.Base);
  *param_1 = dVar5;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_88);
  return;
}

// LexFromString @ 141a86ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(double *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_e8 [32];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.Base = local_a8;
  pwVar1 = param_2->DataPtr;
  local_c8.End = (wchar_t *)local_28;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = local_a8;
  if (local_28 < local_a8 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_c8.CurPos,pwVar1,uVar3 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  dVar5 = wcstod(local_c8.Base,(wchar_t **)0x0);
  *param_1 = dVar5;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return;
}

// LexFromString @ 141a86be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(long64 *param_1,TStringView<char8_t> *param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar4 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar1 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  lVar2 = _strtoi64((char *)local_78.Base,(char **)0x0,10);
  *param_1 = lVar2;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a86cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(long64 *param_1,TStringView<wchar_t> *param_2)

{
  void *pvVar1;
  longlong lVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar1 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  lVar2 = _wtoi64(local_b8.Base);
  *param_1 = lVar2;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a86e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(ulong64 *param_1,TStringView<char8_t> *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar4 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar1 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  uVar2 = _strtoui64((char *)local_78.Base,(char **)0x0,0);
  *param_1 = uVar2;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a86f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(ulong64 *param_1,TStringView<wchar_t> *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar1 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  uVar2 = _wcstoui64(local_b8.Base,(wchar_t **)0x0,0);
  *param_1 = uVar2;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexFromString @ 141a87010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(bool *param_1,TStringView<char8_t> *param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TStringBuilderBase<char8_t> local_78;
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Base = (uchar *)local_58;
  local_88 = *(undefined4 *)&param_2->DataPtr;
  uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_80 = param_2->Size;
  uStack_7c = *(undefined4 *)&param_2->field_0xc;
  local_78.End = (uchar *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_78.CurPos = (uchar *)local_58;
  local_78.bIsDynamic = false;
  local_78.bIsExternal = false;
  if (local_18 < (ulonglong *)((longlong)local_58 + uVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_78.CurPos,(void *)CONCAT44(uStack_84,local_88),uVar3);
    local_78.CurPos = (uchar *)((longlong)pvVar2 + uVar3);
  }
  if (local_78.End < (ulonglong *)((longlong)local_78.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_78,1);
  }
  *local_78.CurPos = 0;
  bVar1 = FToBoolHelper::FromCStringUtf8(local_78.Base);
  *param_1 = bVar1;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_78);
  return;
}

// LexFromString @ 141a87110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LexFromString(bool *param_1,TStringView<wchar_t> *param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined4 *)&param_2->DataPtr;
  uStack_c4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_c0 = param_2->Size;
  uStack_bc = *(undefined4 *)&param_2->field_0xc;
  local_b8.Base = local_98;
  local_b8.End = (wchar_t *)local_18;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  if (local_18 < local_98 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_b8.CurPos,(void *)CONCAT44(uStack_c4,local_c8),uVar3 * 2);
    local_b8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  bVar1 = FToBoolHelper::FromCStringWide(local_b8.Base);
  *param_1 = bVar1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// LexToString @ 141a87220

FString * __cdecl LexToString(FString *__return_storage_ptr__,FName *param_1)

{
  FName::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// LexToString @ 141a87250

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl LexToString(EName param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FString *pFVar4;
  float fVar5;
  FScriptContainerElement FVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  SSlider *pSVar9;
  SHorizontalBox *this;
  longlong *plVar10;
  STextBlock *pSVar11;
  SVerticalBox *pSVar12;
  code *pcVar13;
  undefined8 uVar14;
  FLinearColor FVar15;
  char cVar16;
  byte bVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  ISlateStyle *pIVar21;
  FName *pFVar22;
  FSliderStyle *pFVar23;
  float *pfVar24;
  FArguments *pFVar25;
  TSharedRef<SHorizontalBox,1> *pTVar26;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar27;
  FSlotArguments *pFVar28;
  FArguments *pFVar29;
  FSlot *this_00;
  FSlot *pFVar30;
  FArguments *pFVar31;
  FTextBlockStyle *pFVar32;
  TSharedRef<STextBlock,1> *pTVar33;
  TSharedRef<SVerticalBox,1> *pTVar34;
  FScriptContainerElement *pFVar35;
  TSharedRef<SSlider,1> *pTVar36;
  FArguments *pFVar37;
  FSpinBoxStyle *pFVar38;
  TAttribute<bool> *pTVar39;
  undefined8 *puVar40;
  TSharedRef<SWidget,1> *pTVar41;
  ulong64 uVar42;
  SSpinBox<float> *pSVar43;
  SSpinBox<float> *pSVar44;
  wchar_t *extraout_RAX;
  wchar_t *extraout_RAX_00;
  TReferenceControllerBase<1> *pTVar45;
  wchar_t *pwVar46;
  ulonglong uVar47;
  FPatchSource *pFVar48;
  undefined7 extraout_var;
  wchar_t *extraout_RAX_01;
  wchar_t *extraout_RAX_02;
  wchar_t *extraout_RAX_03;
  wchar_t *extraout_RAX_04;
  wchar_t *extraout_RAX_05;
  wchar_t *extraout_RAX_06;
  wchar_t *extraout_RAX_07;
  wchar_t *extraout_RAX_08;
  wchar_t *extraout_RAX_09;
  wchar_t *extraout_RAX_10;
  wchar_t *extraout_RAX_11;
  wchar_t *extraout_RAX_12;
  wchar_t *extraout_RAX_13;
  wchar_t *extraout_RAX_14;
  wchar_t *extraout_RAX_15;
  wchar_t *extraout_RAX_16;
  wchar_t *extraout_RAX_17;
  wchar_t *extraout_RAX_18;
  ForAnyElementType FVar49;
  TReferenceControllerBase<1> *pTVar50;
  TReferenceControllerBase<1> *pTVar51;
  FScriptContainerElement *pFVar52;
  longlong lVar53;
  int *piVar54;
  longlong lVar55;
  ForAnyElementType *unaff_RBX;
  FPatch *pFVar56;
  FScriptContainerElement *unaff_RBP;
  TReferenceControllerBase<1> *pTVar57;
  char cVar58;
  Type TVar59;
  FSlot *unaff_RSI;
  int iVar60;
  FArguments *unaff_RDI;
  void *pvVar61;
  int *in_R8;
  wchar_t *in_R9;
  FModulationMatrix *unaff_R12;
  undefined1 uVar62;
  undefined4 uVar63;
  ulonglong unaff_R13;
  longlong unaff_R14;
  FSlotBase *this_01;
  ulonglong uVar64;
  longlong unaff_R15;
  longlong lVar65;
  int *in_stack_00000030;
  longlong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  ForAnyElementType in_stack_00000060;
  Type in_stack_00000068;
  float in_stack_00000070;
  bool bStack0000000000000074;
  undefined3 uStack0000000000000075;
  undefined4 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  
  if (Root < param_1) {
switchD_141a87277_caseD_ed:
    return L"*INVALID*";
  }
  bVar17 = *(byte *)((longlong)&UINT_141a87da4 + (ulonglong)param_1);
  piVar54 = (int *)(ulonglong)bVar17;
  uVar64 = (ulonglong)(&switchD_141a87277::switchdataD_141a879ec)[(longlong)piVar54];
  FVar49.Data = (FScriptContainerElement *)(switchD_1501dbc7b::caseD_1.e_magic + uVar64);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar17) {
  case 0:
    return L"None";
  case 1:
    return L"ByteProperty";
  case 2:
    return L"IntProperty";
  case 3:
    return L"BoolProperty";
  case 4:
    return L"FloatProperty";
  case 5:
    return L"ObjectProperty";
  case 6:
    return L"NameProperty";
  case 7:
    return L"DelegateProperty";
  case 8:
    return L"DoubleProperty";
  case 9:
    return L"ArrayProperty";
  case 10:
    return L"StructProperty";
  case 0xb:
    return L"VectorProperty";
  case 0xc:
    return L"RotatorProperty";
  case 0xd:
    return L"StrProperty";
  case 0xe:
    return L"TextProperty";
  case 0xf:
    return L"InterfaceProperty";
  case 0x10:
    return L"MulticastDelegateProperty";
  case 0x11:
    return L"LazyObjectProperty";
  case 0x12:
    return L"SoftObjectProperty";
  case 0x13:
    return L"Int64Property";
  case 0x14:
    return L"Int32Property";
  case 0x15:
    return L"Int16Property";
  case 0x16:
    return L"Int8Property";
  case 0x17:
    return L"UInt64Property";
  case 0x18:
    return L"UInt32Property";
  case 0x19:
    return L"UInt16Property";
  case 0x1a:
    return L"MapProperty";
  case 0x1b:
    return L"SetProperty";
  case 0x1c:
    return L"Core";
  case 0x1d:
    return L"Engine";
  case 0x1e:
    return L"Editor";
  case 0x1f:
    return L"CoreUObject";
  case 0x20:
    return L"EnumProperty";
  case 0x21:
    return L"OptionalProperty";
  case 0x22:
    return L"Utf8StrProperty";
  case 0x23:
    return L"AnsiStrProperty";
  case 0x24:
    return L"Cylinder";
  case 0x25:
    return L"BoxSphereBounds";
  case 0x26:
    return L"Sphere";
  case 0x27:
    return L"Box";
  case 0x28:
    return L"Vector2D";
  case 0x29:
    return L"IntRect";
  case 0x2a:
    return L"IntPoint";
  case 0x2b:
    return L"Vector4";
  case 0x2c:
    return L"Name";
  case 0x2d:
    return L"Vector";
  case 0x2e:
    return L"Rotator";
  case 0x2f:
    return L"SHVector";
  case 0x30:
    return L"Color";
  case 0x31:
    return L"Plane";
  case 0x32:
    return L"Matrix";
  case 0x33:
    return L"LinearColor";
  case 0x34:
    return L"AdvanceFrame";
  case 0x35:
    return L"Pointer";
  case 0x36:
    return L"Double";
  case 0x37:
    return L"Quat";
  case 0x38:
    return L"Self";
  case 0x39:
    return L"Transform";
  case 0x3a:
    return L"Vector3f";
  case 0x3b:
    return L"Vector3d";
  case 0x3c:
    return L"Plane4f";
  case 0x3d:
    return L"Plane4d";
  case 0x3e:
    return L"Matrix44f";
  case 0x3f:
    return L"Matrix44d";
  case 0x40:
    return L"Quat4f";
  case 0x41:
    return L"Quat4d";
  case 0x42:
    return L"Transform3f";
  case 0x43:
    return L"Transform3d";
  case 0x44:
    return L"Box3f";
  case 0x45:
    return L"Box3d";
  case 0x46:
    return L"BoxSphereBounds3f";
  case 0x47:
    return L"BoxSphereBounds3d";
  case 0x48:
    return L"Vector4f";
  case 0x49:
    return L"Vector4d";
  case 0x4a:
    return L"Rotator3f";
  case 0x4b:
    return L"Rotator3d";
  case 0x4c:
    return L"Vector2f";
  case 0x4d:
    return L"Vector2d";
  case 0x4e:
    return L"Box2D";
  case 0x4f:
    return L"Box2f";
  case 0x50:
    return L"Box2d";
  case 0x51:
    return L"IntVector";
  case 0x52:
    return L"IntVector4";
  case 0x53:
    return L"UintVector";
  case 0x54:
    return L"UintVector4";
  case 0x55:
    return L"Object";
  case 0x56:
    return L"Camera";
  case 0x57:
    return L"Actor";
  case 0x58:
    return L"ObjectRedirector";
  case 0x59:
    return L"ObjectArchetype";
  case 0x5a:
    return L"Class";
  case 0x5b:
    return L"ScriptStruct";
  case 0x5c:
    return L"Function";
  case 0x5d:
    return L"Pawn";
  case 0x5e:
    return L"VerseClass";
  case 0x5f:
    return L"VerseStruct";
  case 0x60:
    return L"VerseEnum";
  case 0x61:
    return L"Int32Vector";
  case 0x62:
    return L"Int64Vector";
  case 99:
    return L"Uint32Vector";
  case 100:
    return L"Uint64Vector";
  case 0x65:
    return L"Int32Vector4";
  case 0x66:
    return L"Int64Vector4";
  case 0x67:
    return L"Uint32Vector4";
  case 0x68:
    return L"Uint64Vector4";
  case 0x69:
    return L"IntVector2";
  case 0x6a:
    return L"Int32Vector2";
  case 0x6b:
    return L"Int64Vector2";
  case 0x6c:
    return L"UintVector2";
  case 0x6d:
    return L"Uint32Vector2";
  case 0x6e:
    return L"Uint64Vector2";
  case 0x6f:
    return L"UintPoint";
  case 0x70:
    return L"Int32Point";
  case 0x71:
    return L"Int64Point";
  case 0x72:
    return L"Uint32Point";
  case 0x73:
    return L"Uint64Point";
  case 0x74:
    return L"Ray";
  case 0x75:
    return L"Ray3f";
  case 0x76:
    return L"Ray3d";
  case 0x77:
    return L"Sphere3f";
  case 0x78:
    return L"Sphere3d";
  case 0x79:
    return L"State";
  case 0x7a:
    return L"TRUE";
  case 0x7b:
    return L"FALSE";
  case 0x7c:
    return L"Enum";
  case 0x7d:
    return L"Default";
  case 0x7e:
    return L"Skip";
  case 0x7f:
    return L"Input";
  case 0x80:
    return L"Package";
  case 0x81:
    return L"Groups";
  case 0x82:
    return L"Interface";
  case 0x83:
    return L"Components";
  case 0x84:
    return L"Global";
  case 0x85:
    return L"Super";
  case 0x86:
    return L"Outer";
  case 0x87:
    return L"Map";
  case 0x88:
    return L"Role";
  case 0x89:
    return L"RemoteRole";
  case 0x8a:
    return L"PersistentLevel";
  case 0x8b:
    return L"TheWorld";
  case 0x8c:
    return L"PackageMetaData";
  case 0x8d:
    return L"InitialState";
  case 0x8e:
    return L"Game";
  case 0x8f:
    return L"SelectionColor";
  case 0x90:
    return L"UI";
  case 0x91:
    return L"ExecuteUbergraph";
  case 0x92:
    return L"DeviceID";
  case 0x93:
    return L"RootStat";
  case 0x94:
    return L"MoveActor";
  case 0x95:
    return L"All";
  case 0x96:
    return L"MeshEmitterVertexColor";
  case 0x97:
    return L"TextureOffsetParameter";
  case 0x98:
    return L"TextureScaleParameter";
  case 0x99:
    return L"ImpactVel";
  case 0x9a:
    return L"SlideVel";
  case 0x9b:
    return L"TextureOffset1Parameter";
  case 0x9c:
    return L"MeshEmitterDynamicParameter";
  case 0x9d:
    return L"ExpressionInput";
  case 0x9e:
    return L"Untitled";
  case 0x9f:
    return L"Timer";
  case 0xa0:
    return L"Team";
  case 0xa1:
    return L"Low";
  case 0xa2:
    return L"High";
  case 0xa3:
    return L"NetworkGUID";
  case 0xa4:
    return L"GameThread";
  case 0xa5:
    return L"RenderThread";
  case 0xa6:
    return L"OtherChildren";
  case 0xa7:
    return L"Location";
  case 0xa8:
    return L"Rotation";
  case 0xa9:
    return L"BSP";
  case 0xaa:
    return L"EditorSettings";
  case 0xab:
    return L"AudioThread";
  case 0xac:
    return L"ID";
  case 0xad:
    return L"UserDefinedEnum";
  case 0xae:
    return L"Control";
  case 0xaf:
    return L"Voice";
  case 0xb0:
    return L"Zlib";
  case 0xb1:
    return L"Gzip";
  case 0xb2:
    return L"LZ4";
  case 0xb3:
    return L"Mobile";
  case 0xb4:
    return L"Oodle";
  case 0xb5:
    return L"TrashedPackage";
  case 0xb6:
    return L"MetaData";
  case 0xb7:
    return L"AutoRTFMUnusedPackage";
  case 0xb8:
    return L"DGram";
  case 0xb9:
    return L"Stream";
  case 0xba:
    return L"GameNetDriver";
  case 0xbb:
    return L"PendingNetDriver";
  case 0xbc:
    return L"BeaconNetDriver";
  case 0xbd:
    return L"FlushNetDormancy";
  case 0xbe:
    return L"DemoNetDriver";
  case 0xbf:
    return L"GameSession";
  case 0xc0:
    return L"PartySession";
  case 0xc1:
    return L"GamePort";
  case 0xc2:
    return L"BeaconPort";
  case 0xc3:
    return L"MeshPort";
  case 0xc4:
    return L"MeshNetDriver";
  case 0xc5:
    return L"LiveStreamVoice";
  case 0xc6:
    return L"LiveStreamAnimation";
  case 199:
    return L"DataStream";
  case 200:
    return L"Linear";
  case 0xc9:
    return L"Point";
  case 0xca:
    return L"Aniso";
  case 0xcb:
    return L"LightMapResolution";
  case 0xcc:
    return L"UnGrouped";
  case 0xcd:
    return L"VoiceChat";
  case 0xce:
    return L"Playing";
  case 0xcf:
    return L"Spectating";
  case 0xd0:
    return L"Inactive";
  case 0xd1:
    return L"PerfWarning";
  case 0xd2:
    return L"Info";
  case 0xd3:
    return L"Init";
  case 0xd4:
    return L"Exit";
  case 0xd5:
    return L"Cmd";
  case 0xd6:
    return L"Warning";
  case 0xd7:
    return L"Error";
  case 0xd8:
    return L"FontCharacter";
  case 0xd9:
    return L"InitChild2StartBone";
  case 0xda:
    return L"SoundCueLocalized";
  case 0xdb:
    return L"SoundCue";
  case 0xdc:
    return L"RawDistributionFloat";
  case 0xdd:
    return L"RawDistributionVector";
  case 0xde:
    return L"InterpCurveFloat";
  case 0xdf:
    return L"InterpCurveVector2D";
  case 0xe0:
    return L"InterpCurveVector";
  case 0xe1:
    return L"InterpCurveTwoVectors";
  case 0xe2:
    return L"InterpCurveQuat";
  case 0xe3:
    return L"FrameRate";
  case 0xe4:
    return L"AI";
  case 0xe5:
    return L"NavMesh";
  case 0xe6:
    return L"PerformanceCapture";
  case 0xe7:
    return L"EditorLayout";
  case 0xe8:
    return L"EditorKeyBindings";
  case 0xe9:
    return L"GameUserSettings";
  case 0xea:
    return L"Filename";
  case 0xeb:
    return L"Lerp";
  case 0xec:
    return L"Root";
  case 0xed:
    goto switchD_141a87277_caseD_ed;
  case 0xee:
    TVar59 = (Type)unaff_RSI;
    if ((int)FVar49.Data != 0) {
      (*(code *)**(undefined8 **)FVar49.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&stack0x00000060,0,0,0x10);
      FVar49.Data = in_stack_00000060.Data;
      in_stack_00000068 = TVar59;
    }
    cVar58 = (char)unaff_RSI;
    if ((char)(((FString *)(unaff_RBP + 0x380))->Data).ArrayNum == cVar58) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 (((FString *)(unaff_RBP + 0x380))->Data).AllocatorInstance.Data,
                 (FDestructionSentinel *)&(((FString *)(unaff_RBP + 0x370))->Data).ArrayNum);
      FVar49.Data = in_stack_00000060.Data;
    }
    if (FVar49.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar49.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&stack0x00000058);
    unaff_RDI->_Orientation = *(EOrientation *)(unaff_R14 + 0x2a8);
    FVar15 = FLinearColor::Transparent;
    *(char *)&(((FString *)(unaff_RBP + 0x60))->Data).AllocatorInstance.Data = cVar58;
    *(int *)(unaff_RBP + 0x78) = 0;
    *(int *)(unaff_RBP + 0x7c) = 0;
    *(undefined1 *)((longlong)&(((FString *)(unaff_RBP + 0x60))->Data).AllocatorInstance.Data + 4) =
         1;
    ((FLinearColor_u_0 *)(unaff_RBP + 0x50))->_s_0 = (FLinearColor_u_0_s_0)FVar15.field0_0x0;
    (((FString *)(unaff_RBP + 0x70))->Data).ArrayNum = TVar59;
    *(int *)(unaff_RBP + 0x68) = 0;
    *(int *)(unaff_RBP + 0x6c) = 0;
    (((FString *)(unaff_RBP + 0x70))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (unaff_RDI->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FVar15.field0_0x0;
    uVar63 = *(undefined4 *)&(((FString *)(unaff_RBP + 0x60))->Data).AllocatorInstance.Data;
    (unaff_RDI->_SliderBarColor).Value.ColorUseRule = (char)uVar63;
    (unaff_RDI->_SliderBarColor).Value.ColorTableId = (char)((uint)uVar63 >> 8);
    *(short *)&(unaff_RDI->_SliderBarColor).Value.field_0x12 = (short)((uint)uVar63 >> 0x10);
    (unaff_RDI->_SliderBarColor).bIsSet =
         *(bool *)((longlong)&(((FString *)(unaff_RBP + 0x60))->Data).AllocatorInstance.Data + 4);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(unaff_RDI->_SliderBarColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0x60))->Data).ArrayNum);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0x60))->Data).ArrayNum,
               (FWriteAccessScope *)(unaff_RBP + 0x390));
    pFVar52 = (((FString *)(unaff_RBP + 0x70))->Data).AllocatorInstance.Data;
    if (((((FString *)(unaff_RBP + 0x70))->Data).ArrayNum != TVar59) &&
       (pFVar52 != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar52)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(unaff_RBP + 0x70),0,0,0x10);
      pFVar52 = (((FString *)(unaff_RBP + 0x70))->Data).AllocatorInstance.Data;
      (((FString *)(unaff_RBP + 0x70))->Data).ArrayNum = TVar59;
    }
    if (*(char *)&(((FString *)(unaff_RBP + 0x3a0))->Data).AllocatorInstance.Data == cVar58) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (*(FMRSWRecursiveAccessDetector **)
                  &(((FString *)(unaff_RBP + 0x390))->Data).ArrayNum,
                 (FDestructionSentinel *)(unaff_RBP + 0x390));
      pFVar52 = (((FString *)(unaff_RBP + 0x70))->Data).AllocatorInstance.Data;
    }
    if (pFVar52 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar52);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(((FString *)(unaff_RBP + 0x60))->Data).ArrayNum);
    FVar15 = FLinearColor::Transparent;
    *(char *)&(((FString *)(unaff_RBP + 0x90))->Data).AllocatorInstance.Data = cVar58;
    *(undefined1 *)((longlong)&(((FString *)(unaff_RBP + 0x90))->Data).AllocatorInstance.Data + 4) =
         1;
    *(int *)(unaff_RBP + 0xa8) = 0;
    *(int *)(unaff_RBP + 0xac) = 0;
    ((FLinearColor_u_0 *)(unaff_RBP + 0x80))->_s_0 = (FLinearColor_u_0_s_0)FVar15.field0_0x0;
    (((FString *)(unaff_RBP + 0xa0))->Data).ArrayNum = TVar59;
    *(int *)(unaff_RBP + 0x98) = 0;
    *(int *)(unaff_RBP + 0x9c) = 0;
    (((FString *)(unaff_RBP + 0xa0))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (unaff_RDI->_SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FVar15.field0_0x0;
    uVar63 = *(undefined4 *)&(((FString *)(unaff_RBP + 0x90))->Data).AllocatorInstance.Data;
    (unaff_RDI->_SliderHandleColor).Value.ColorUseRule = (char)uVar63;
    (unaff_RDI->_SliderHandleColor).Value.ColorTableId = (char)((uint)uVar63 >> 8);
    *(short *)&(unaff_RDI->_SliderHandleColor).Value.field_0x12 = (short)((uint)uVar63 >> 0x10);
    (unaff_RDI->_SliderHandleColor).bIsSet =
         *(bool *)((longlong)&(((FString *)(unaff_RBP + 0x90))->Data).AllocatorInstance.Data + 4);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(unaff_RDI->_SliderHandleColor).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0x90))->Data).ArrayNum);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0x90))->Data).ArrayNum,
               (FWriteAccessScope *)&(((FString *)(unaff_RBP + 0x3a0))->Data).ArrayNum);
    pFVar52 = (((FString *)(unaff_RBP + 0xa0))->Data).AllocatorInstance.Data;
    if (((((FString *)(unaff_RBP + 0xa0))->Data).ArrayNum != TVar59) &&
       (pFVar52 != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar52)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(unaff_RBP + 0xa0),0,0,0x10);
      pFVar52 = (((FString *)(unaff_RBP + 0xa0))->Data).AllocatorInstance.Data;
      (((FString *)(unaff_RBP + 0xa0))->Data).ArrayNum = TVar59;
    }
    if ((char)(((FString *)(unaff_RBP + 0x3b0))->Data).ArrayNum == cVar58) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 (((FString *)(unaff_RBP + 0x3b0))->Data).AllocatorInstance.Data,
                 (FDestructionSentinel *)&(((FString *)(unaff_RBP + 0x3a0))->Data).ArrayNum);
      pFVar52 = (((FString *)(unaff_RBP + 0xa0))->Data).AllocatorInstance.Data;
    }
    if (pFVar52 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar52);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(((FString *)(unaff_RBP + 0x90))->Data).ArrayNum);
    pIVar21 = FAppStyle::Get();
    pFVar22 = FName::FName((FName *)&(((FString *)(unaff_RBP + 0x460))->Data).ArrayNum,
                           "ColorPicker.Slider");
    pFVar23 = (FSliderStyle *)
              (**(code **)((longlong)*pIVar21 + 0xa0))(pIVar21,FSliderStyle::TypeName,*pFVar22,0,1);
    if (pFVar23 == (FSliderStyle *)0x0) {
      pFVar23 = FSliderStyle::GetDefault();
    }
    unaff_RDI->_Style = pFVar23;
    pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 600));
    unaff_RDI->_MinValue = *pfVar24;
    pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 0x278));
    unaff_RDI->_MaxValue = *pfVar24;
    pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 0x298));
    fVar5 = *pfVar24;
    *(int *)(unaff_RBP + -0x58) = 0;
    *(int *)(unaff_RBP + -0x54) = 0;
    *(undefined1 *)((longlong)&(((FString *)(unaff_RBP + -0x70))->Data).AllocatorInstance.Data + 4)
         = 1;
    (((FString *)(unaff_RBP + -0x60))->Data).ArrayNum = TVar59;
    *(float *)&(((FString *)(unaff_RBP + -0x70))->Data).AllocatorInstance.Data = fVar5;
    *(int *)(unaff_RBP + -0x68) = 0;
    *(int *)(unaff_RBP + -100) = 0;
    (((FString *)(unaff_RBP + -0x60))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (unaff_RDI->_StepSize).Value = fVar5;
    (unaff_RDI->_StepSize).bIsSet =
         *(bool *)((longlong)&(((FString *)(unaff_RBP + -0x70))->Data).AllocatorInstance.Data + 4);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(unaff_RDI->_StepSize).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + -0x70))->Data).ArrayNum);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + -0x70))->Data).ArrayNum,
               (FWriteAccessScope *)(unaff_RBP + 0x3c0));
    pFVar52 = (((FString *)(unaff_RBP + -0x60))->Data).AllocatorInstance.Data;
    if (((((FString *)(unaff_RBP + -0x60))->Data).ArrayNum != TVar59) &&
       (pFVar52 != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar52)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(unaff_RBP + -0x60),0,0,0x10);
      pFVar52 = (((FString *)(unaff_RBP + -0x60))->Data).AllocatorInstance.Data;
      (((FString *)(unaff_RBP + -0x60))->Data).ArrayNum = TVar59;
    }
    if (*(char *)&(((FString *)(unaff_RBP + 0x3d0))->Data).AllocatorInstance.Data == cVar58) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (*(FMRSWRecursiveAccessDetector **)
                  &(((FString *)(unaff_RBP + 0x3c0))->Data).ArrayNum,
                 (FDestructionSentinel *)(unaff_RBP + 0x3c0));
      pFVar52 = (((FString *)(unaff_RBP + -0x60))->Data).AllocatorInstance.Data;
    }
    if (pFVar52 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar52);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&(((FString *)(unaff_RBP + -0x70))->Data).ArrayNum);
    in_stack_00000070 = *(float *)(unaff_R15 + 0x1f8);
    _uStack0000000000000078 = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    uStack0000000000000080 = 0;
    _bStack0000000000000074 = CONCAT31(uStack0000000000000075,*(undefined1 *)(unaff_R15 + 0x1fc));
    (((FString *)(unaff_RBP + -0x80))->Data).ArrayNum = TVar59;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)&stack0x00000078,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x200));
    (unaff_RDI->_Value).Value = in_stack_00000070;
    (unaff_RDI->_Value).bIsSet = bStack0000000000000074;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(unaff_RDI->_Value).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&stack0x00000078);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&stack0x00000078,
               (FWriteAccessScope *)&(((FString *)(unaff_RBP + 0x3d0))->Data).ArrayNum);
    pFVar52 = (((FString *)(unaff_RBP + -0x80))->Data).AllocatorInstance.Data;
    if (((((FString *)(unaff_RBP + -0x80))->Data).ArrayNum != TVar59) &&
       (pFVar52 != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar52)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(unaff_RBP + -0x80),0,0,0x10);
      pFVar52 = (((FString *)(unaff_RBP + -0x80))->Data).AllocatorInstance.Data;
      (((FString *)(unaff_RBP + -0x80))->Data).ArrayNum = TVar59;
    }
    if ((char)(((FString *)(unaff_RBP + 0x3e0))->Data).ArrayNum == cVar58) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 (((FString *)(unaff_RBP + 0x3e0))->Data).AllocatorInstance.Data,
                 (FDestructionSentinel *)&(((FString *)(unaff_RBP + 0x3d0))->Data).ArrayNum);
      pFVar52 = (((FString *)(unaff_RBP + -0x80))->Data).AllocatorInstance.Data;
    }
    if (pFVar52 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar52);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&stack0x00000078);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&unaff_RDI->_OnMouseCaptureBegin,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x3b0));
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&unaff_RDI->_OnMouseCaptureEnd,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x3c8));
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
              (&unaff_RDI->_OnValueChanged,
               (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x398));
    FLLMScope::FLLMScope
              ((FLLMScope *)((longlong)&stack0x00000030 + 4),LLMTagDeclaration_UI_Slate.UniqueName,
               false,None,Default,true);
    *(FName *)&(((FString *)(unaff_RBP + 0x150))->Data).ArrayMax =
         LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope
              ((FMemScope *)&(((FString *)(unaff_RBP + 0x160))->Data).ArrayNum,
               (FName *)&(((FString *)(unaff_RBP + 0x150))->Data).ArrayMax,true);
    TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> *)
               &(((FString *)(unaff_RBP + 0x10))->Data).ArrayNum,"SSlider",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
               ,0x22,(T0RequiredArgs *)(unaff_RBP + 0x1fa0));
    FMemScope::~FMemScope((FMemScope *)&(((FString *)(unaff_RBP + 0x160))->Data).ArrayNum);
    FLLMScope::~FLLMScope((FLLMScope *)((longlong)&stack0x00000030 + 4));
    pFVar52 = (((FString *)(unaff_RBP + 0x20))->Data).AllocatorInstance.Data;
    if (pFVar52 != (FScriptContainerElement *)0x0) {
      LOCK();
      *(int *)(pFVar52 + 8) = *(int *)(pFVar52 + 8) + 1;
      UNLOCK();
    }
    uVar14 = *(undefined8 *)(unaff_R14 + 0x2d0);
    uVar8 = *(undefined8 *)&(((FString *)(unaff_RBP + 0x10))->Data).ArrayNum;
    (((FString *)(unaff_RBP + 0x450))->Data).AllocatorInstance.Data =
         *(FScriptContainerElement **)(unaff_R14 + 0x2c8);
    *(int *)(unaff_RBP + 0x458) = (int)uVar14;
    *(int *)(unaff_RBP + 0x45c) = (int)((ulonglong)uVar14 >> 0x20);
    *(undefined8 *)(unaff_R14 + 0x2c8) = uVar8;
    *(FScriptContainerElement **)(unaff_R14 + 0x2d0) = pFVar52;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(((FString *)(unaff_RBP + 0x450))->Data).ArrayNum);
    pSVar9 = *(SSlider **)&(((FString *)(unaff_RBP + 0x10))->Data).ArrayNum;
    if ((pSVar9 == (SSlider *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    SWidget::SWidgetConstruct((SWidget *)pSVar9,(FSlateBaseNamedArgs *)unaff_RDI);
    SSlider::Construct(pSVar9,unaff_RDI);
    if ((pSVar9 == (SSlider *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    if ((pSVar9->_padding_ & 0x10) == 0) {
      cVar16 = (**(code **)(pSVar9->_padding_ + 0x228))(pSVar9);
      bVar17 = 0;
      if (cVar16 == '\0') goto LAB_1430206b3;
    }
    bVar17 = 0x20;
LAB_1430206b3:
    *(byte *)&pSVar9->_padding_ = (byte)pSVar9->_padding_ & 0xdf;
    *(byte *)&pSVar9->_padding_ = (byte)pSVar9->_padding_ | bVar17;
    if ((pSVar9 == (SSlider *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    pbVar1 = (byte *)((longlong)&pSVar9->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((pSVar9 == (SSlider *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    pTVar45 = (TReferenceControllerBase<1> *)
              (((FString *)(unaff_RBP + 0x20))->Data).AllocatorInstance.Data;
    (((FString *)(unaff_RBP + 0x20))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)unaff_RSI;
    *(FSlot **)&(((FString *)(unaff_RBP + 0x10))->Data).ArrayNum = unaff_RSI;
    if ((pSVar9 == (SSlider *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)unaff_RSI);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0xca0))->Data).ArrayNum);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xc90));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0xc70))->Data).ArrayNum);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xc60));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0xc40))->Data).ArrayNum);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xc20));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xc00));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0xbd0))->Data).ArrayNum);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0xba0))->Data).ArrayNum);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xb70));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(((FString *)(unaff_RBP + 0xb40))->Data).ArrayNum);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs
              ((FSlateBaseNamedArgs *)&(((FString *)(unaff_RBP + 0x940))->Data).ArrayNum);
    pFVar25 = SHorizontalBox::FArguments::FArguments
                        ((FArguments *)&(((FString *)(unaff_RBP + 0xcc0))->Data).ArrayNum);
    FLLMScope::FLLMScope
              ((FLLMScope *)&stack0x00000038,LLMTagDeclaration_UI_Slate.UniqueName,false,None,
               Default,true);
    *(FName *)(unaff_RBP + 0x170) = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope
              ((FMemScope *)&(((FString *)(unaff_RBP + 0x170))->Data).ArrayNum,
               (FName *)(unaff_RBP + 0x170),true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)(unaff_RBP + 0x4c0),
               "SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
               ,0x30,(T0RequiredArgs *)&(((FString *)(unaff_RBP + 0x1fa0))->Data).ArrayNum);
    FMemScope::~FMemScope((FMemScope *)&(((FString *)(unaff_RBP + 0x170))->Data).ArrayNum);
    FLLMScope::~FLLMScope((FLLMScope *)&stack0x00000038);
    pTVar26 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)
                         (unaff_RBP + 0x4c0),
                         (TSharedRef<SHorizontalBox,1> *)
                         &(((FString *)(unaff_RBP + 0x490))->Data).ArrayNum,pFVar25);
    pTVar45 = (pTVar26->SharedReferenceCount).ReferenceController;
    this = pTVar26->Object;
    if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               (((FString *)(unaff_RBP + 0x4a0))->Data).AllocatorInstance.Data);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(((FString *)(unaff_RBP + 0x4c0))->Data).ArrayNum);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)(((FString *)(unaff_RBP + 0xec0))->Data).AllocatorInstance.Data,
               (((FString *)(unaff_RBP + 0xec0))->Data).ArrayNum);
    pFVar52 = (((FString *)(unaff_RBP + 0xec0))->Data).AllocatorInstance.Data;
    if (pFVar52 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar52);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs
              ((FSlateBaseNamedArgs *)&(((FString *)(unaff_RBP + 0xcc0))->Data).ArrayNum);
    if (*(Type *)(unaff_R14 + 0x2a8) == TVar59) {
      if ((this == (SHorizontalBox *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      pFVar27 = SHorizontalBox::AddSlot
                          (this,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)
                                (unaff_RBP + 0x5e0));
      fVar5 = __real_41000000;
      (((FString *)(unaff_RBP + 0x250))->Data).ArrayNum = 0x41000000;
      *(undefined1 *)&(((FString *)(unaff_RBP + 0x250))->Data).ArrayMax = 1;
      (((FString *)(unaff_RBP + 0x270))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(Type *)&(((FString *)(unaff_RBP + 0x270))->Data).AllocatorInstance.Data = TVar59;
      (((FString *)(unaff_RBP + 0x260))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(unaff_RBP + 0x268) = 0;
      *(int *)(unaff_RBP + 0x26c) = 0;
      pFVar28 = SHorizontalBox::FSlot::FSlotArguments::MinWidth
                          ((FSlotArguments *)&pFVar27->_padding_,
                           (TAttribute<float> *)&(((FString *)(unaff_RBP + 0x250))->Data).ArrayNum);
      (((FString *)(unaff_RBP + 0x2f0))->Data).ArrayNum = 0x41000000;
      (((FString *)(unaff_RBP + 0x310))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined1 *)&(((FString *)(unaff_RBP + 0x2f0))->Data).ArrayMax = 1;
      *(Type *)&(((FString *)(unaff_RBP + 0x310))->Data).AllocatorInstance.Data = TVar59;
      (((FString *)(unaff_RBP + 0x300))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(unaff_RBP + 0x308) = 0;
      *(int *)(unaff_RBP + 0x30c) = 0;
      pFVar28 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth
                          (pFVar28,(TAttribute<float> *)
                                   &(((FString *)(unaff_RBP + 0x2f0))->Data).ArrayNum);
      pFVar28 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar28->field_0x18,0.0,0.0,fVar5,0.0);
      (((FString *)(unaff_RBP + 0x30))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)pFVar28;
      pFVar29 = SVerticalBox::FArguments::FArguments((FArguments *)(unaff_RBP + 0xed0));
      (((FString *)(unaff_RBP + 0x10))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)pFVar29;
      this_00 = operator_new(0x58);
      pFVar30 = unaff_RSI;
      if (this_00 != (FSlot *)0x0) {
        *(undefined8 *)this_00 = 0;
        *(undefined8 *)&this_00->field_0x8 = 0;
        *(undefined8 *)&this_00->field_0x10 = 0;
        *(undefined8 *)&this_00->field_0x18 = 0;
        *(undefined8 *)&this_00->field_0x20 = 0;
        *(undefined8 *)&this_00->field_0x28 = 0;
        *(undefined8 *)&this_00->field_0x30 = 0;
        *(undefined8 *)&this_00->field_0x38 = 0;
        *(undefined8 *)&this_00->field_0x40 = 0;
        *(undefined8 *)&this_00->field_0x48 = 0;
        *(undefined8 *)&this_00->field_0x50 = 0;
        pFVar30 = SVerticalBox::FSlot::FSlot(this_00);
      }
      (((FString *)(unaff_RBP + 0x180))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)pFVar30;
      SVerticalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)(unaff_RBP + 0x860),(FSlot *)(unaff_RBP + 0x180));
      *(undefined4 *)&(((FString *)(unaff_RBP + 0x8b0))->Data).AllocatorInstance.Data = 2;
      *(undefined1 *)
       ((longlong)&(((FString *)(unaff_RBP + 0x8b0))->Data).AllocatorInstance.Data + 4) = 1;
      pFVar31 = STextBlock::FArguments::FArguments
                          ((FArguments *)&(((FString *)(unaff_RBP + 0x12d0))->Data).ArrayNum);
      plVar10 = *(longlong **)(unaff_R15 + 0x2f8);
      *(longlong **)&(((FString *)(unaff_RBP + 0x510))->Data).ArrayNum = plVar10;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10,&(((FString *)(unaff_RBP + 0x150))->Data).ArrayNum);
      }
      uVar62 = *(undefined1 *)(unaff_R15 + 0x308);
      *(undefined4 *)&(((FString *)(unaff_RBP + 0x520))->Data).AllocatorInstance.Data =
           *(undefined4 *)(unaff_R15 + 0x300);
      *(undefined1 *)&(((FString *)(unaff_RBP + 0x520))->Data).ArrayNum = uVar62;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_RBP + 0x530),
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x310));
      pFVar31 = STextBlock::FArguments::Text
                          (pFVar31,(TAttribute<FText> *)
                                   &(((FString *)(unaff_RBP + 0x510))->Data).ArrayNum);
      pIVar21 = FAppStyle::Get();
      pFVar22 = FName::FName((FName *)(unaff_RBP + 0x460),"SmallText");
      pFVar32 = (FTextBlockStyle *)
                (**(code **)((longlong)*pIVar21 + 0xa0))
                          (pIVar21,FTextBlockStyle::TypeName,*pFVar22,0,1);
      if (pFVar32 == (FTextBlockStyle *)0x0) {
        pFVar32 = FTextBlockStyle::GetDefault();
      }
      pFVar31->_TextStyle = pFVar32;
      *(undefined1 *)
       ((longlong)&(((FString *)(unaff_RBP + 0x110))->Data).AllocatorInstance.Data + 4) = 1;
      *(Type *)&(((FString *)(unaff_RBP + 0x110))->Data).AllocatorInstance.Data = TVar59;
      *(int *)(unaff_RBP + 0x128) = 0;
      *(int *)(unaff_RBP + 300) = 0;
      (((FString *)(unaff_RBP + 0x120))->Data).ArrayNum = TVar59;
      *(int *)(unaff_RBP + 0x118) = 0;
      *(int *)(unaff_RBP + 0x11c) = 0;
      (((FString *)(unaff_RBP + 0x120))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar31->_Justification).Value = TVar59;
      (pFVar31->_Justification).bIsSet =
           *(bool *)((longlong)&(((FString *)(unaff_RBP + 0x110))->Data).AllocatorInstance.Data + 4)
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_Justification).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(((FString *)(unaff_RBP + 0x110))->Data).ArrayNum);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(((FString *)(unaff_RBP + 0x110))->Data).ArrayNum);
      FLLMScope::FLLMScope
                ((FLLMScope *)((longlong)&stack0x00000038 + 4),LLMTagDeclaration_UI_Slate.UniqueName
                 ,false,None,Default,true);
      uVar20 = LLMTagDeclaration_UI_Slate.UniqueName.Number;
      *(uint *)(unaff_RBP + 0x188) = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
      *(uint *)(unaff_RBP + 0x18c) = uVar20;
      FMemScope::FMemScope
                ((FMemScope *)(unaff_RBP + 0x1b0),
                 (FName *)&(((FString *)(unaff_RBP + 0x180))->Data).ArrayNum,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)(unaff_RBP + 0x4f0),
                 "STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
                 ,0x3e,(T0RequiredArgs *)(unaff_RBP + 0x1fb0));
      FMemScope::~FMemScope((FMemScope *)(unaff_RBP + 0x1b0));
      FLLMScope::~FLLMScope((FLLMScope *)((longlong)&stack0x00000038 + 4));
      pTVar33 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)
                           (unaff_RBP + 0x4f0),(TSharedRef<STextBlock,1> *)(unaff_RBP + 0x430),
                           pFVar31);
      pTVar57 = (pTVar33->SharedReferenceCount).ReferenceController;
      pSVar11 = pTVar33->Object;
      *(TReferenceControllerBase<1> **)&(((FString *)(unaff_RBP + 0xc0))->Data).ArrayNum = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(STextBlock **)&(((FString *)(unaff_RBP + 0x860))->Data).ArrayNum = pSVar11;
      (((FString *)(unaff_RBP + 0xc0))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)unaff_RSI;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(unaff_RBP + 0x870),
                 (FSharedReferencer<1> *)&(((FString *)(unaff_RBP + 0xc0))->Data).ArrayNum);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&(((FString *)(unaff_RBP + 0xc0))->Data).ArrayNum)
      ;
      pFVar29 = SVerticalBox::FArguments::operator+
                          ((FArguments *)
                           (((FString *)(unaff_RBP + 0x10))->Data).AllocatorInstance.Data,
                           (FSlotArguments *)(unaff_RBP + 0x860));
      FLLMScope::FLLMScope
                ((FLLMScope *)&stack0x00000040,LLMTagDeclaration_UI_Slate.UniqueName,false,None,
                 Default,true);
      *(FName *)(unaff_RBP + 0x10) = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope
                ((FMemScope *)&(((FString *)(unaff_RBP + 0x1a0))->Data).ArrayNum,
                 (FName *)(unaff_RBP + 0x10),true);
      TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)
                 &(((FString *)(unaff_RBP + 0x4d0))->Data).ArrayNum,"SVerticalBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
                 ,0x39,(T0RequiredArgs *)&(((FString *)(unaff_RBP + 0x1fb0))->Data).ArrayNum);
      FMemScope::~FMemScope((FMemScope *)&(((FString *)(unaff_RBP + 0x1a0))->Data).ArrayNum);
      FLLMScope::~FLLMScope((FLLMScope *)&stack0x00000040);
      pTVar34 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)
                           &(((FString *)(unaff_RBP + 0x4d0))->Data).ArrayNum,
                           (TSharedRef<SVerticalBox,1> *)(unaff_RBP + 0x440),pFVar29);
      pTVar51 = (pTVar34->SharedReferenceCount).ReferenceController;
      pSVar12 = pTVar34->Object;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&unaff_RBP->field_0x0)->AllocatorInstance).
      Data = (FScriptContainerElement *)pSVar12;
      *(TReferenceControllerBase<1> **)(unaff_RBP + 8) = pTVar51;
      if (pTVar51 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar51->SharedReferenceCount = (atomic<int>)((int)pTVar51->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar51->SharedReferenceCount = (atomic<int>)((int)pTVar51->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar52 = (((FString *)(unaff_RBP + 0x30))->Data).AllocatorInstance.Data;
      pFVar35 = pFVar52 + 8;
      pTVar50 = pTVar51;
      if (pFVar35 != unaff_RBP) {
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar35->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)pSVar12;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&unaff_RBP->field_0x0)->AllocatorInstance).
        Data = (FScriptContainerElement *)unaff_RSI;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar52 + 0x10),(FSharedReferencer<1> *)(unaff_RBP + 8))
        ;
        pTVar50 = *(TReferenceControllerBase<1> **)(unaff_RBP + 8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar51);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x448));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&unaff_RBP[0x4e0].field_0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x438));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x4f8));
      STextBlock::FArguments::~FArguments((FArguments *)(unaff_RBP + 0x12d8));
      SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
                ((FSlotArguments *)(unaff_RBP + 0x860));
      DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
                (*(FSlotArguments **)(unaff_RBP + 0x10c8),*(int *)&unaff_RBP[0x10d0].field_0x0);
      if (*(void **)(unaff_RBP + 0x10c8) != (void *)0x0) {
        FMemory::Free(*(void **)(unaff_RBP + 0x10c8));
      }
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)(unaff_RBP + 0xed0));
      *(undefined ***)&unaff_RBP[0x5e0].field_0x0 =
           &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      if (*(FSlot **)(unaff_RBP + 0x5e8) != unaff_RSI) {
        if ((int)*(undefined8 *)(unaff_RBP + 0x6d8) == -1) {
          TPanelChildren<SBoxPanel::FSlot>::AddSlot
                    (*(TPanelChildren<SBoxPanel::FSlot> **)&unaff_RBP[0x6d0].field_0x0,
                     (FSlotArguments *)(unaff_RBP + 0x5e8));
        }
        else {
          TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                    (*(TPanelChildren<SBoxPanel::FSlot> **)&unaff_RBP[0x6d0].field_0x0,
                     (FSlotArguments *)(unaff_RBP + 0x5e8),(int)*(undefined8 *)(unaff_RBP + 0x6d8));
        }
      }
      SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
                ((FSlotArguments *)(unaff_RBP + 0x5e8));
      if ((this == (SHorizontalBox *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      pFVar27 = SHorizontalBox::AddSlot
                          (this,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)
                                (unaff_RBP + 0x6e0));
      *(undefined4 *)(unaff_RBP + 0x2b8) = *(undefined4 *)(unaff_R14 + 0x2d8);
      unaff_RBP[700] = (FScriptContainerElement)0x1;
      *(undefined8 *)&unaff_RBP[0x2d0].field_0x0 = 0;
      *(Type *)&unaff_RBP[0x2d0].field_0x0 = TVar59;
      *(undefined8 *)&unaff_RBP[0x2c0].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x2c8) = 0;
      pFVar28 = SHorizontalBox::FSlot::FSlotArguments::MinWidth
                          ((FSlotArguments *)&pFVar27->_padding_,
                           (TAttribute<float> *)(unaff_RBP + 0x2b8));
      *(undefined4 *)(unaff_RBP + 0x278) = *(undefined4 *)(unaff_R14 + 0x2d8);
      *(undefined8 *)&unaff_RBP[0x290].field_0x0 = 0;
      unaff_RBP[0x27c] = (FScriptContainerElement)0x1;
      *(undefined8 *)&unaff_RBP[0x280].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x288) = 0;
      *(Type *)&unaff_RBP[0x290].field_0x0 = TVar59;
      pFVar28 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth
                          (pFVar28,(TAttribute<float> *)(unaff_RBP + 0x278));
      pTVar36 = TSharedPtr<SSlider,1>::ToSharedRef
                          ((TSharedPtr<SSlider,1> *)(unaff_R14 + 0x2c8),
                           (TSharedRef<SSlider,1> *)(unaff_RBP + 0x420));
      pTVar57 = (pTVar36->SharedReferenceCount).ReferenceController;
      pSVar9 = pTVar36->Object;
      *(SSlider **)&unaff_RBP[-0x10].field_0x0 = pSVar9;
      *(TReferenceControllerBase<1> **)(unaff_RBP + -8) = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar51 = pTVar57;
      if ((FScriptContainerElement *)&pFVar28->field_0x8 != unaff_RBP + -0x10) {
        *(SSlider **)&pFVar28->field_0x8 = pSVar9;
        *(FSlot **)&unaff_RBP[-0x10].field_0x0 = unaff_RSI;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar28->field_0x10,
                   (FSharedReferencer<1> *)(unaff_RBP + -8));
        pTVar51 = *(TReferenceControllerBase<1> **)(unaff_RBP + -8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar51);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x428));
      *(undefined ***)&unaff_RBP[0x6e0].field_0x0 =
           &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      if (*(FSlot **)(unaff_RBP + 0x6e8) != unaff_RSI) {
        if ((int)*(undefined8 *)(unaff_RBP + 0x7d8) == -1) {
          TPanelChildren<SBoxPanel::FSlot>::AddSlot
                    (*(TPanelChildren<SBoxPanel::FSlot> **)&unaff_RBP[2000].field_0x0,
                     (FSlotArguments *)(unaff_RBP + 0x6e8));
        }
        else {
          TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                    (*(TPanelChildren<SBoxPanel::FSlot> **)&unaff_RBP[2000].field_0x0,
                     (FSlotArguments *)(unaff_RBP + 0x6e8),(int)*(undefined8 *)(unaff_RBP + 0x7d8));
        }
      }
      SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
                ((FSlotArguments *)(unaff_RBP + 0x6e8));
      if ((this == (SHorizontalBox *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      pFVar27 = SHorizontalBox::AddSlot
                          (this,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)
                                (unaff_RBP + 0x10d8));
      *(undefined4 *)(unaff_RBP + 0x298) = 0x42700000;
      unaff_RBP[0x29c] = (FScriptContainerElement)0x1;
      *(undefined8 *)&unaff_RBP[0x2a0].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x2a8) = 0;
      *(undefined8 *)&unaff_RBP[0x2b0].field_0x0 = 0;
      *(Type *)&unaff_RBP[0x2b0].field_0x0 = TVar59;
      pFVar28 = SHorizontalBox::FSlot::FSlotArguments::MinWidth
                          ((FSlotArguments *)&pFVar27->_padding_,
                           (TAttribute<float> *)(unaff_RBP + 0x298));
      *(undefined4 *)(unaff_RBP + 0x2d8) = 0x42700000;
      *(undefined8 *)&unaff_RBP[0x2f0].field_0x0 = 0;
      unaff_RBP[0x2dc] = (FScriptContainerElement)0x1;
      *(Type *)&unaff_RBP[0x2f0].field_0x0 = TVar59;
      *(undefined8 *)&unaff_RBP[0x2e0].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x2e8) = 0;
      pFVar28 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth
                          (pFVar28,(TAttribute<float> *)(unaff_RBP + 0x2d8));
      pFVar28 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar28->field_0x18,fVar5,0.0,0.0,0.0);
      *(FSlotArguments **)&unaff_RBP[400].field_0x0 = pFVar28;
      pFVar37 = SSpinBox<float>::FArguments::FArguments((FArguments *)(unaff_RBP + 0x1830));
      FName::FName((FName *)(unaff_RBP + 0x1a0),"ColorSlider.SpinBox");
      pIVar21 = FAppStyle::Get();
      pFVar38 = ISlateStyle::GetWidgetStyle<FSpinBoxStyle>
                          (pIVar21,*(FName *)(unaff_RBP + 0x1a0),(char *)0x0,(FSpinBoxStyle *)0x0);
      pFVar37->_Style = pFVar38;
      pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 0x218));
      fVar5 = *pfVar24;
      *(undefined8 *)(unaff_RBP + 0x1d8) = 0;
      *(Type *)(unaff_RBP + 0x1d8) = TVar59;
      *(float *)(unaff_RBP + 0x1b8) = fVar5;
      unaff_RBP[0x1bc] = (FScriptContainerElement)0x1;
      unaff_RBP[0x1c0].field_0x0 = 1;
      *(undefined8 *)(unaff_RBP + 0x1c8) = 0;
      *(undefined8 *)&unaff_RBP[0x1d0].field_0x0 = 0;
      TAttribute<TOptional<float>_>::operator=
                (&pFVar37->_MinValue,(TAttribute<TOptional<float>_> *)(unaff_RBP + 0x1b8));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x1c8));
      pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 0x238));
      fVar5 = *pfVar24;
      *(undefined8 *)&unaff_RBP[0x200].field_0x0 = 0;
      *(Type *)&unaff_RBP[0x200].field_0x0 = TVar59;
      *(float *)&unaff_RBP[0x1e0].field_0x0 = fVar5;
      unaff_RBP[0x1e4] = (FScriptContainerElement)0x1;
      unaff_RBP[0x1e8] = (FScriptContainerElement)0x1;
      *(undefined8 *)&unaff_RBP[0x1f0].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x1f8) = 0;
      TAttribute<TOptional<float>_>::operator=
                (&pFVar37->_MaxValue,(TAttribute<TOptional<float>_> *)(unaff_RBP + 0x1e0));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x1f0));
      pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 600));
      *(float *)(unaff_RBP + 0x208) = *pfVar24;
      unaff_RBP[0x20c] = (FScriptContainerElement)0x1;
      unaff_RBP[0x210].field_0x0 = 1;
      *(undefined8 *)(unaff_RBP + 0x228) = 0;
      *(Type *)(unaff_RBP + 0x228) = TVar59;
      *(undefined8 *)(unaff_RBP + 0x218) = 0;
      *(undefined8 *)&unaff_RBP[0x220].field_0x0 = 0;
      TAttribute<TOptional<float>_>::operator=
                (&pFVar37->_MinSliderValue,(TAttribute<TOptional<float>_> *)(unaff_RBP + 0x208));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x218));
      pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(unaff_R15 + 0x278));
      fVar5 = *pfVar24;
      *(undefined8 *)&unaff_RBP[0x250].field_0x0 = 0;
      *(Type *)&unaff_RBP[0x250].field_0x0 = TVar59;
      *(float *)&unaff_RBP[0x230].field_0x0 = fVar5;
      unaff_RBP[0x234] = (FScriptContainerElement)0x1;
      unaff_RBP[0x238] = (FScriptContainerElement)0x1;
      *(undefined8 *)&unaff_RBP[0x240].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x248) = 0;
      TAttribute<TOptional<float>_>::operator=
                (&pFVar37->_MaxSliderValue,(TAttribute<TOptional<float>_> *)(unaff_RBP + 0x230));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x240));
      *(undefined8 *)&unaff_RBP[0x150].field_0x0 = 0;
      *(undefined4 *)&unaff_RBP[0x130].field_0x0 = 3;
      unaff_RBP[0x134] = (FScriptContainerElement)0x1;
      unaff_RBP[0x138] = (FScriptContainerElement)0x1;
      *(Type *)&unaff_RBP[0x150].field_0x0 = TVar59;
      *(undefined8 *)&unaff_RBP[0x140].field_0x0 = 0;
      *(undefined8 *)(unaff_RBP + 0x148) = 0;
      if ((TAttribute<TOptional<int>_> *)(unaff_RBP + 0x130) != &pFVar37->_MaxFractionalDigits) {
        (pFVar37->_MaxFractionalDigits).Value.TypedValue = 3;
        (pFVar37->_MaxFractionalDigits).Value.bIsSet = true;
      }
      (pFVar37->_MaxFractionalDigits).bIsSet = (bool)unaff_RBP[0x138];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar37->_MaxFractionalDigits).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x140));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x140));
      FVar6 = *(FScriptContainerElement *)(unaff_R15 + 0x29c);
      *(undefined4 *)&unaff_RBP[0xf0].field_0x0 = *(undefined4 *)(unaff_R15 + 0x298);
      *(undefined8 *)(unaff_RBP + 0xf8) = 0;
      *(undefined8 *)&unaff_RBP[0x100].field_0x0 = 0;
      unaff_RBP[0xf4] = FVar6;
      *(Type *)(unaff_RBP + 0x108) = TVar59;
      TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_RBP + 0xf8),
                 (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x2a0));
      (pFVar37->_Delta).Value = *(float *)&unaff_RBP[0xf0].field_0x0;
      (pFVar37->_Delta).bIsSet = (bool)unaff_RBP[0xf4];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_Delta).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xf8));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xf8));
      FVar6 = *(FScriptContainerElement *)(unaff_R15 + 0x1fc);
      *(undefined4 *)&unaff_RBP[0xd0].field_0x0 = *(undefined4 *)(unaff_R15 + 0x1f8);
      *(undefined8 *)(unaff_RBP + 0xd8) = 0;
      *(undefined8 *)&unaff_RBP[0xe0].field_0x0 = 0;
      unaff_RBP[0xd4] = FVar6;
      *(Type *)(unaff_RBP + 0xe8) = TVar59;
      TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_RBP + 0xd8),
                 (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x200));
      (pFVar37->_Value).Value = *(float *)&unaff_RBP[0xd0].field_0x0;
      (pFVar37->_Value).bIsSet = (bool)unaff_RBP[0xd4];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar37->_Value).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xd8));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0xd8));
      pTVar39 = TAttribute<bool>::TAttribute<bool>
                          ((TAttribute<bool> *)(unaff_RBP + 0x7e0),
                           (TAttribute<bool> *)(unaff_R15 + 0x2b8));
      (pFVar37->_SupportDynamicSliderMaxValue).Value = pTVar39->Value;
      (pFVar37->_SupportDynamicSliderMaxValue).bIsSet = pTVar39->bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar37->_SupportDynamicSliderMaxValue).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar39->Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar39->Getter);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&pFVar37->_OnBeginSliderMovement,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x3e0));
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
                (&pFVar37->_OnEndSliderMovement,
                 (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x3f8));
      TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
                (&pFVar37->_OnValueChanged,
                 (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(unaff_R15 + 0x398));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar37->_OnValueCommitted,(FWriteAccessScope *)(unaff_RBP + 0x3f0));
      puVar2 = &(pFVar37->_OnValueCommitted).field_0x8;
      *(undefined1 **)(unaff_RBP + 0x408) = puVar2;
      puVar40 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar2);
      if (puVar40 == (undefined8 *)0x0) {
        pTVar57 = *(TReferenceControllerBase<1> **)&unaff_RBP[0x1fa0].field_0x0;
        uVar64 = (ulonglong)unaff_RSI & 0xffffffff;
      }
      else {
        *(undefined4 *)(unaff_RBP + 0xbc) = *(undefined4 *)(unaff_RBP + 0x344);
        *(code **)&unaff_RBP[0xb0].field_0x0 = SColorSlider::OnSpinBoxValueCommitted;
        *(Type *)(unaff_RBP + 0xb8) = TVar59;
        pTVar41 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)(unaff_R14 + 8),
                             (TSharedRef<SWidget,1> *)(unaff_RBP + 0x410));
        pTVar57 = (pTVar41->SharedReferenceCount).ReferenceController;
        *(SWidget **)&unaff_RBP[0x30].field_0x0 = pTVar41->Object;
        if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
          UNLOCK();
        }
        *puVar40 = &
                   ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar42 = FDelegateHandle::GenerateNewID();
        puVar40[2] = uVar42;
        *puVar40 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSColorSlider___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar40[3] = *(undefined8 *)&unaff_RBP[0x30].field_0x0;
        puVar40[4] = pTVar57;
        if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar57->WeakReferenceCount = (atomic<int>)((int)pTVar57->WeakReferenceCount + 1);
          UNLOCK();
        }
        uVar8 = *(undefined8 *)(unaff_RBP + 0xb8);
        uVar64 = 7;
        puVar40[5] = *(undefined8 *)&unaff_RBP[0xb0].field_0x0;
        puVar40[6] = uVar8;
      }
      if ((uVar64 & 4) != 0) {
        uVar64 = (ulonglong)((uint)uVar64 & 0xfffffffb);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57)
        ;
      }
      if ((uVar64 & 2) != 0) {
        uVar64 = (ulonglong)((uint)uVar64 & 0xfffffffd);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57)
        ;
      }
      if ((uVar64 & 1) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x418));
      }
      if (unaff_RBP[0x400].field_0x0 == cVar58) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  (*(FMRSWRecursiveAccessDetector **)(unaff_RBP + 0x3f8),
                   (FDestructionSentinel *)(unaff_RBP + 0x3f0));
      }
      FSlateFontInfo::FSlateFontInfo
                ((FSlateFontInfo *)(unaff_RBP + 0x560),(FSlateFontInfo *)(unaff_RBP + 0x800));
      unaff_RBP[0x5c0].field_0x0 = 1;
      *(undefined8 *)(unaff_RBP + 0x5d8) = 0;
      *(Type *)(unaff_RBP + 0x5d8) = TVar59;
      *(undefined8 *)(unaff_RBP + 0x5c8) = 0;
      *(undefined8 *)&unaff_RBP[0x5d0].field_0x0 = 0;
      TAttribute<FSlateFontInfo>::operator=
                (&pFVar37->_Font,(TAttribute<FSlateFontInfo> *)(unaff_RBP + 0x560));
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(unaff_RBP + 0x5c8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x598));
      FLLMScope::FLLMScope
                ((FLLMScope *)((longlong)&stack0x00000040 + 4),LLMTagDeclaration_UI_Slate.UniqueName
                 ,false,None,Default,true);
      *(FName *)(unaff_RBP + 0xb0) = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope((FMemScope *)(unaff_RBP + 0x198),(FName *)(unaff_RBP + 0xb0),true);
      TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                ((TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *)(unaff_RBP + 0x38),
                 "SSpinBox<float>",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
                 ,0x51,(T0RequiredArgs *)&stack0x00000030);
      FMemScope::~FMemScope((FMemScope *)(unaff_RBP + 0x198));
      FLLMScope::~FLLMScope((FLLMScope *)((longlong)&stack0x00000040 + 4));
      pSVar43 = TSharedPtr<SSpinBox<float>,1>::operator->
                          ((TSharedPtr<SSpinBox<float>,1> *)(unaff_RBP + 0x38));
      SWidget::SWidgetConstruct((SWidget *)pSVar43,(FSlateBaseNamedArgs *)pFVar37);
      pSVar43 = *(SSpinBox<float> **)(unaff_RBP + 0x38);
      SSpinBox<float>::Construct(pSVar43,pFVar37);
      pSVar44 = TSharedPtr<SSpinBox<float>,1>::operator->
                          ((TSharedPtr<SSpinBox<float>,1> *)(unaff_RBP + 0x38));
      SWidget::CacheVolatility((SWidget *)pSVar44);
      pSVar44 = TSharedPtr<SSpinBox<float>,1>::operator->
                          ((TSharedPtr<SSpinBox<float>,1> *)(unaff_RBP + 0x38));
      pbVar1 = (byte *)((longlong)&pSVar44->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((pSVar43 == (SSpinBox<float> *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      pTVar57 = *(TReferenceControllerBase<1> **)&unaff_RBP[0x40].field_0x0;
      *(FSlot **)&unaff_RBP[0x40].field_0x0 = unaff_RSI;
      *(FSlot **)(unaff_RBP + 0x38) = unaff_RSI;
      if ((pSVar43 == (SSpinBox<float> *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      *(SSpinBox<float> **)(unaff_RBP + 0x318) = pSVar43;
      *(TReferenceControllerBase<1> **)&unaff_RBP[800].field_0x0 = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                (*(FSlotArguments **)&unaff_RBP[400].field_0x0,
                 (TSharedRef<SWidget,1> *)(unaff_RBP + 0x318));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)unaff_RSI);
      SSpinBox<float>::FArguments::~FArguments((FArguments *)(unaff_RBP + 0x1830));
      pFVar52 = unaff_RBP + 0x10d0;
    }
    else {
      if ((this == (SHorizontalBox *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      pFVar27 = SHorizontalBox::AddSlot
                          (this,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)
                                (unaff_RBP + 0x11d8));
      pTVar36 = TSharedPtr<SSlider,1>::ToSharedRef
                          ((TSharedPtr<SSlider,1> *)(unaff_R14 + 0x2c8),
                           (TSharedRef<SSlider,1> *)(unaff_RBP + 0x508));
      pTVar57 = (pTVar36->SharedReferenceCount).ReferenceController;
      *(SSlider **)(unaff_RBP + 0x328) = pTVar36->Object;
      *(TReferenceControllerBase<1> **)&unaff_RBP[0x330].field_0x0 = pTVar57;
      if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)&pFVar27->_padding_,(TSharedRef<SWidget,1> *)(unaff_RBP + 0x328))
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&unaff_RBP[0x510].field_0x0);
      pFVar52 = unaff_RBP + 0x11d0;
    }
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
              ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)(pFVar52 + 8));
    if ((this == (SHorizontalBox *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this == (SHorizontalBox *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar18)) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
    this_01 = (FSlotBase *)(unaff_R14 + 0x238);
    if (pTVar45 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent(this_01);
    }
    else {
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent(this_01);
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar8 = *(undefined8 *)(unaff_R14 + 0x250);
    *(undefined8 *)(unaff_RBP + 0x338) = *(undefined8 *)(unaff_R14 + 0x248);
    *(undefined8 *)&unaff_RBP[0x340].field_0x0 = uVar8;
    *(SHorizontalBox **)(unaff_R14 + 0x248) = this;
    *(TReferenceControllerBase<1> **)(unaff_R14 + 0x250) = pTVar45;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&unaff_RBP[0x340].field_0x0);
    FSlotBase::AfterContentOrOwnerAssigned(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(unaff_RBP + 0x838));
    return extraout_RAX;
  case 0xef:
    in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,0x10);
    in_stack_00000038 = 0x48095b37;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,in_R9);
    if (!bVar18) {
      iVar19 = *(int *)&unaff_RBX[1].Data;
      piVar54 = (int *)((longlong)&unaff_RBX[1].Data + 4);
      if (iVar19 == *piVar54) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,unaff_RBX,piVar54);
      }
      *(int *)&unaff_RBX[1].Data = iVar19 + 1;
      pFVar52 = unaff_RBX->Data + (longlong)iVar19 * 0x10;
      *(FSlot **)pFVar52 = unaff_RSI;
      *(undefined8 *)pFVar52 = *(undefined8 *)&unaff_RBP[-0x20].field_0x0;
      uVar63 = *(undefined4 *)(unaff_RBP + -0x18);
      *(FSlot **)&unaff_RBP[-0x20].field_0x0 = unaff_RSI;
      *(undefined4 *)(pFVar52 + 8) = uVar63;
      pwVar46 = (wchar_t *)(ulonglong)*(uint *)(unaff_RBP + -0x14);
      *(uint *)(pFVar52 + 0xc) = *(uint *)(unaff_RBP + -0x14);
      pvVar61 = *(void **)&unaff_RBP[-0x20].field_0x0;
      *(FSlot **)(unaff_RBP + -0x18) = unaff_RSI;
      if (pvVar61 != (void *)0x0) {
        FMemory::Free(pvVar61);
        pwVar46 = extraout_RAX_00;
      }
      return pwVar46;
    }
    pcVar13 = (code *)swi(3);
    pwVar46 = (wchar_t *)(*pcVar13)();
    return pwVar46;
  case 0xf0:
    *(byte *)piVar54 = (char)*piVar54 + bVar17;
    *(byte *)piVar54 = (char)*piVar54 + bVar17;
    *(undefined8 *)(switchD_1501dbc7b::caseD_1.e_magic + uVar64 + 8) = 0;
    pTVar45 = operator_new(0x18);
    if (pTVar45 == (TReferenceControllerBase<1> *)0x0) {
      pTVar45 = (TReferenceControllerBase<1> *)0x0;
      pTVar57 = (TReferenceControllerBase<1> *)&DAT_00000010;
      pTVar51 = _UNK_150651568;
    }
    else {
      pTVar45->SharedReferenceCount = (atomic<int>)0x1;
      pTVar57 = pTVar45 + 1;
      pTVar45->WeakReferenceCount = (atomic<int>)0x1;
      pTVar45->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ__00_SharedPointerInternals__6B_
      ;
      pTVar45[1]._padding_ =
           (longlong)
           &
           ___7FEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ_6B_
      ;
      if ((pTVar57 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
      LOCK();
      pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
      UNLOCK();
      pTVar51 = pTVar45;
    }
    if (FVar49.Data != (FScriptContainerElement *)&stack0x00000020) {
      *(TReferenceControllerBase<1> **)FVar49.Data = pTVar57;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(switchD_1501dbc7b::caseD_1.e_magic + uVar64 + 8),
                 (FSharedReferencer<1> *)&stack0x00000028);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar51);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
    return (wchar_t *)FVar49.Data;
  case 0xf2:
    *(byte *)((longlong)piVar54 + 0x61) = *(byte *)((longlong)piVar54 + 0x61) ^ bVar17;
    *piVar54 = *piVar54 + (uint)bVar17;
    *(byte *)piVar54 = (char)*piVar54 + bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf3:
                    /* WARNING: Does not return */
    pcVar13 = (code *)invalidInstructionException();
    (*pcVar13)();
  }
  iVar19 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&unaff_RDI->_padding_,in_R8);
  *(int *)&unaff_RDI->_padding_ = iVar19 + 1;
  lVar65 = unaff_RDI->_padding_;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = in_stack_00000050;
  *(undefined4 *)(lVar53 + 4 + lVar65) = in_stack_00000054;
  *(undefined4 *)(lVar53 + 8 + lVar65) = in_stack_00000058;
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)&stack0x00000060);
  FString::FString((FString *)(unaff_RBP + 0x2b8),"ESynthModEnvPatch::PatchToLFO1Freq");
  FString::operator=((FString *)&unaff_RDI->_padding_,(FString *)(unaff_RBP + 0x2b8));
  if (*(void **)(unaff_RBP + 0x2b8) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x2b8));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)unaff_RDI);
  uVar63 = *(undefined4 *)&unaff_RBP[0x70].field_0x0;
  uVar62 = (undefined1)unaff_R13;
  unaff_RSI[0x39].field_0x50 = uVar62;
  *(undefined4 *)&unaff_RSI[0x39].field_0x18 = uVar63;
  FString::operator=((FString *)&unaff_RSI[0x39].field_0x20,(FString *)(unaff_RBP + 0x78));
  if ((*(undefined4 **)&unaff_RSI[0x39].field_0x30 <= &stack0x00000050) &&
     (&stack0x00000050 <
      *(undefined4 **)&unaff_RSI[0x39].field_0x30 +
      (longlong)*(int *)&unaff_RSI[0x39].field_0x3c * 8)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x39].field_0x38;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x39].field_0x3c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x39].field_0x38;
  if (iVar19 == *(int *)&unaff_RSI[0x39].field_0x3c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x39].field_0x30,
                        (int *)&unaff_RSI[0x39].field_0x3c);
  }
  *(int *)&unaff_RSI[0x39].field_0x38 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x39].field_0x30;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = in_stack_00000050;
  *(undefined4 *)(lVar53 + 4 + lVar65) = in_stack_00000054;
  *(undefined4 *)(lVar53 + 8 + lVar65) = in_stack_00000058;
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)&stack0x00000060);
  FString::FString((FString *)(unaff_RBP + 0x1e0),"ESynthModEnvPatch::PatchToLFO2Freq");
  puVar2 = &unaff_RSI[0x39].field_0x40;
  uVar63 = (undefined4)unaff_R13;
  if ((FScriptContainerElement *)puVar2 == unaff_RBP + 0x1e0) {
LAB_14f0e0efe:
    pvVar61 = *(void **)&unaff_RBP[0x1e0].field_0x0;
  }
  else {
    puVar3 = &unaff_RSI[0x39].field_0x4c;
    pvVar61 = *(void **)&unaff_RBP[0x1e0].field_0x0;
    iVar19 = (int)*(undefined8 *)(unaff_RBP + 0x1e8);
    *(int *)&unaff_RSI[0x39].field_0x48 = iVar19;
    if ((iVar19 != 0) || (*(int *)puVar3 != 0)) {
      in_stack_00000030 = (int *)puVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar19,*(int *)puVar3,(ForAnyElementType *)puVar2,iVar19,(int *)puVar3);
      if (iVar19 != 0) {
        memcpy(*(void **)puVar2,pvVar61,(longlong)iVar19 * 2);
      }
      goto LAB_14f0e0efe;
    }
    *(undefined4 *)puVar3 = uVar63;
  }
  if (pvVar61 != (void *)0x0) {
    FMemory::Free(pvVar61);
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x39].field_0x18);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  unaff_RSI[0x3b].field_0x20 = uVar62;
  *(undefined4 *)&unaff_RSI[0x3a].field_0x40 = uVar7;
  FString::operator=((FString *)&unaff_RSI[0x3a].field_0x48,(FString *)(unaff_RBP + 0x90));
  if ((*(undefined4 **)(unaff_RSI + 0x3b) <= &stack0x00000070) &&
     (&stack0x00000070 <
      *(undefined4 **)(unaff_RSI + 0x3b) + (longlong)*(int *)&unaff_RSI[0x3b].field_0xc * 8)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3b].field_0x8;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3b].field_0xc;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3b].field_0x8;
  if (iVar19 == *(int *)&unaff_RSI[0x3b].field_0xc) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)(unaff_RSI + 0x3b),
                        (int *)&unaff_RSI[0x3b].field_0xc);
  }
  *(int *)&unaff_RSI[0x3b].field_0x8 = iVar19 + 1;
  lVar65 = *(longlong *)(unaff_RSI + 0x3b);
  lVar53 = (longlong)iVar19 * 0x20;
  *(float *)(lVar53 + lVar65) = in_stack_00000070;
  *(undefined4 *)(lVar53 + 4 + lVar65) = _bStack0000000000000074;
  *(undefined4 *)(lVar53 + 8 + lVar65) = uStack0000000000000078;
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + -0x80));
  if ((*(FScriptContainerElement **)(unaff_RSI + 0x3b) <= unaff_RBP + -0x70) &&
     (unaff_RBP + -0x70 <
      *(FScriptContainerElement **)(unaff_RSI + 0x3b) +
      (longlong)*(int *)&unaff_RSI[0x3b].field_0xc * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3b].field_0x8;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3b].field_0xc;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3b].field_0x8;
  if (iVar19 == *(int *)&unaff_RSI[0x3b].field_0xc) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)(unaff_RSI + 0x3b),
                        (int *)&unaff_RSI[0x3b].field_0xc);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[-0x70].field_0x0;
  *(int *)&unaff_RSI[0x3b].field_0x8 = iVar19 + 1;
  lVar65 = *(longlong *)(unaff_RSI + 0x3b);
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + -0x6c);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + -0x68);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + -0x60));
  FString::FString((FString *)(unaff_RBP + 0x1f0),"ESynthModEnvBiasPatch::PatchToOscFreq");
  puVar2 = &unaff_RSI[0x3b].field_0x10;
  if ((FScriptContainerElement *)puVar2 == unaff_RBP + 0x1f0) {
LAB_14f0e1153:
    pvVar61 = *(void **)&unaff_RBP[0x1f0].field_0x0;
  }
  else {
    puVar3 = &unaff_RSI[0x3b].field_0x1c;
    pvVar61 = *(void **)&unaff_RBP[0x1f0].field_0x0;
    iVar19 = (int)*(undefined8 *)(unaff_RBP + 0x1f8);
    *(int *)&unaff_RSI[0x3b].field_0x18 = iVar19;
    if ((iVar19 != 0) || (*(int *)puVar3 != 0)) {
      in_stack_00000030 = (int *)puVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar19,*(int *)puVar3,(ForAnyElementType *)puVar2,iVar19,(int *)puVar3);
      if (iVar19 != 0) {
        memcpy(*(void **)puVar2,pvVar61,(longlong)iVar19 * 2);
      }
      goto LAB_14f0e1153;
    }
    *(undefined4 *)puVar3 = uVar63;
  }
  if (pvVar61 != (void *)0x0) {
    FMemory::Free(pvVar61);
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3a].field_0x40);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  unaff_RSI[0x3c].field_0x8 = uVar62;
  *(undefined4 *)&unaff_RSI[0x3b].field_0x28 = uVar7;
  FString::operator=((FString *)&unaff_RSI[0x3b].field_0x30,(FString *)(unaff_RBP + 0x90));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3b].field_0x40 <= unaff_RBP + -0x50) &&
     (unaff_RBP + -0x50 <
      *(FScriptContainerElement **)&unaff_RSI[0x3b].field_0x40 +
      (longlong)*(int *)&unaff_RSI[0x3b].field_0x4c * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3b].field_0x48;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3b].field_0x4c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3b].field_0x48;
  if (iVar19 == *(int *)&unaff_RSI[0x3b].field_0x4c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3b].field_0x40,
                        (int *)&unaff_RSI[0x3b].field_0x4c);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[-0x50].field_0x0;
  *(int *)&unaff_RSI[0x3b].field_0x48 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3b].field_0x40;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + -0x4c);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + -0x48);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + -0x40));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3b].field_0x40 <= unaff_RBP + -0x30) &&
     (unaff_RBP + -0x30 <
      *(FScriptContainerElement **)&unaff_RSI[0x3b].field_0x40 +
      (longlong)*(int *)&unaff_RSI[0x3b].field_0x4c * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3b].field_0x48;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3b].field_0x4c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3b].field_0x48;
  if (iVar19 == *(int *)&unaff_RSI[0x3b].field_0x4c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3b].field_0x40,
                        (int *)&unaff_RSI[0x3b].field_0x4c);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[-0x30].field_0x0;
  *(int *)&unaff_RSI[0x3b].field_0x48 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3b].field_0x40;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + -0x2c);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + -0x28);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + -0x20));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3b].field_0x40 <= unaff_RBP + -0x10) &&
     (unaff_RBP + -0x10 <
      *(FScriptContainerElement **)&unaff_RSI[0x3b].field_0x40 +
      (longlong)*(int *)&unaff_RSI[0x3b].field_0x4c * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3b].field_0x48;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3b].field_0x4c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3b].field_0x48;
  if (iVar19 == *(int *)&unaff_RSI[0x3b].field_0x4c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3b].field_0x40,
                        (int *)&unaff_RSI[0x3b].field_0x4c);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[-0x10].field_0x0;
  *(int *)&unaff_RSI[0x3b].field_0x48 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3b].field_0x40;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + -0xc);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + -8);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)unaff_RBP);
  FString::FString((FString *)(unaff_RBP + 0x2a8),"ESynthModEnvBiasPatch::PatchToFilterFreq");
  FString::operator=((FString *)&unaff_RSI[0x3b].field_0x50,(FString *)(unaff_RBP + 0x2a8));
  if (*(void **)(unaff_RBP + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x2a8));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3b].field_0x28);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  unaff_RSI[0x3c].field_0x48 = uVar62;
  *(undefined4 *)&unaff_RSI[0x3c].field_0x10 = uVar7;
  FString::operator=((FString *)&unaff_RSI[0x3c].field_0x18,(FString *)(unaff_RBP + 0x90));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3c].field_0x28 <= unaff_RBP + 0x10) &&
     (unaff_RBP + 0x10 <
      *(FScriptContainerElement **)&unaff_RSI[0x3c].field_0x28 +
      (longlong)*(int *)&unaff_RSI[0x3c].field_0x34 * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3c].field_0x30;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3c].field_0x34;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3c].field_0x30;
  if (iVar19 == *(int *)&unaff_RSI[0x3c].field_0x34) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3c].field_0x28,
                        (int *)&unaff_RSI[0x3c].field_0x34);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[0x10].field_0x0;
  *(int *)&unaff_RSI[0x3c].field_0x30 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3c].field_0x28;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + 0x14);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + 0x18);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + 0x20));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3c].field_0x28 <= unaff_RBP + 0x30) &&
     (unaff_RBP + 0x30 <
      *(FScriptContainerElement **)&unaff_RSI[0x3c].field_0x28 +
      (longlong)*(int *)&unaff_RSI[0x3c].field_0x34 * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3c].field_0x30;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3c].field_0x34;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3c].field_0x30;
  if (iVar19 == *(int *)&unaff_RSI[0x3c].field_0x34) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3c].field_0x28,
                        (int *)&unaff_RSI[0x3c].field_0x34);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[0x30].field_0x0;
  *(int *)&unaff_RSI[0x3c].field_0x30 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3c].field_0x28;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + 0x34);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + 0x38);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + 0x40));
  FString::FString((FString *)(unaff_RBP + 0x358),"ESynthModEnvBiasPatch::PatchToFilterQ");
  FString::operator=((FString *)&unaff_RSI[0x3c].field_0x38,(FString *)(unaff_RBP + 0x358));
  if (*(void **)(unaff_RBP + 0x358) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x358));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3c].field_0x10);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  unaff_RSI[0x3d].field_0x30 = uVar62;
  *(undefined4 *)&unaff_RSI[0x3c].field_0x50 = uVar7;
  FString::operator=((FString *)(unaff_RSI + 0x3d),(FString *)(unaff_RBP + 0x90));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3d].field_0x10 <= unaff_RBP + 0xa0) &&
     (unaff_RBP + 0xa0 <
      *(FScriptContainerElement **)&unaff_RSI[0x3d].field_0x10 +
      (longlong)*(int *)&unaff_RSI[0x3d].field_0x1c * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3d].field_0x18;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3d].field_0x1c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3d].field_0x18;
  if (iVar19 == *(int *)&unaff_RSI[0x3d].field_0x1c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3d].field_0x10,
                        (int *)&unaff_RSI[0x3d].field_0x1c);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[0xa0].field_0x0;
  *(int *)&unaff_RSI[0x3d].field_0x18 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3d].field_0x10;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + 0xa4);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + 0xa8);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + 0xb0));
  FString::FString((FString *)(unaff_RBP + 0x348),"ESynthModEnvBiasPatch::PatchToLFO1Gain");
  FString::operator=((FString *)&unaff_RSI[0x3d].field_0x20,(FString *)(unaff_RBP + 0x348));
  if (*(void **)(unaff_RBP + 0x348) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x348));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3c].field_0x50);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  unaff_RSI[0x3e].field_0x18 = uVar62;
  *(undefined4 *)&unaff_RSI[0x3d].field_0x38 = uVar7;
  FString::operator=((FString *)&unaff_RSI[0x3d].field_0x40,(FString *)(unaff_RBP + 0x90));
  if ((*(FScriptContainerElement **)&unaff_RSI[0x3d].field_0x50 <= unaff_RBP + 0x50) &&
     (unaff_RBP + 0x50 <
      *(FScriptContainerElement **)&unaff_RSI[0x3d].field_0x50 +
      (longlong)*(int *)&unaff_RSI[0x3e].field_0x4 * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)(unaff_RSI + 0x3e);
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3e].field_0x4;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)(unaff_RSI + 0x3e);
  if (iVar19 == *(int *)&unaff_RSI[0x3e].field_0x4) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3d].field_0x50,
                        (int *)&unaff_RSI[0x3e].field_0x4);
  }
  uVar7 = *(undefined4 *)&unaff_RBP[0x50].field_0x0;
  *(int *)(unaff_RSI + 0x3e) = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3d].field_0x50;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar7;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + 0x54);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + 0x58);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + 0x60));
  FString::FString((FString *)(unaff_RBP + 0x328),"ESynthModEnvBiasPatch::PatchToLFO2Gain");
  FString::operator=((FString *)&unaff_RSI[0x3e].field_0x8,(FString *)(unaff_RBP + 0x328));
  if (*(void **)(unaff_RBP + 0x328) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x328));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3d].field_0x38);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  *(undefined1 *)(unaff_RSI + 0x3f) = uVar62;
  *(undefined4 *)&unaff_RSI[0x3e].field_0x20 = uVar7;
  FString::operator=((FString *)&unaff_RSI[0x3e].field_0x28,(FString *)(unaff_RBP + 0x90));
  if ((*(undefined4 **)&unaff_RSI[0x3e].field_0x38 <= &stack0x00000050) &&
     (&stack0x00000050 <
      *(undefined4 **)&unaff_RSI[0x3e].field_0x38 +
      (longlong)*(int *)&unaff_RSI[0x3e].field_0x44 * 8)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3e].field_0x40;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3e].field_0x44;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3e].field_0x40;
  if (iVar19 == *(int *)&unaff_RSI[0x3e].field_0x44) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3e].field_0x38,
                        (int *)&unaff_RSI[0x3e].field_0x44);
  }
  *(int *)&unaff_RSI[0x3e].field_0x40 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3e].field_0x38;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = in_stack_00000050;
  *(undefined4 *)(lVar53 + 4 + lVar65) = in_stack_00000054;
  *(undefined4 *)(lVar53 + 8 + lVar65) = in_stack_00000058;
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)&stack0x00000060);
  FString::FString((FString *)(unaff_RBP + 0x318),"ESynthModEnvBiasPatch::PatchToLFO1Freq");
  FString::operator=((FString *)&unaff_RSI[0x3e].field_0x48,(FString *)(unaff_RBP + 0x318));
  if (*(void **)(unaff_RBP + 0x318) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x318));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3e].field_0x20);
  uVar7 = *(undefined4 *)(unaff_RBP + 0x88);
  unaff_RSI[0x3f].field_0x40 = uVar62;
  *(undefined4 *)&unaff_RSI[0x3f].field_0x8 = uVar7;
  FString::operator=((FString *)&unaff_RSI[0x3f].field_0x10,(FString *)(unaff_RBP + 0x90));
  if ((*(undefined4 **)&unaff_RSI[0x3f].field_0x20 <= &stack0x00000050) &&
     (&stack0x00000050 <
      *(undefined4 **)&unaff_RSI[0x3f].field_0x20 +
      (longlong)*(int *)&unaff_RSI[0x3f].field_0x2c * 8)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x3f].field_0x28;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x3f].field_0x2c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x3f].field_0x28;
  if (iVar19 == *(int *)&unaff_RSI[0x3f].field_0x2c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x3f].field_0x20,
                        (int *)&unaff_RSI[0x3f].field_0x2c);
  }
  *(int *)&unaff_RSI[0x3f].field_0x28 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x3f].field_0x20;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = in_stack_00000050;
  *(undefined4 *)(lVar53 + 4 + lVar65) = in_stack_00000054;
  *(undefined4 *)(lVar53 + 8 + lVar65) = in_stack_00000058;
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)&stack0x00000060);
  FString::FString((FString *)(unaff_RBP + 0x338),"ESynthModEnvBiasPatch::PatchToLFO2Freq");
  FString::operator=((FString *)&unaff_RSI[0x3f].field_0x30,(FString *)(unaff_RBP + 0x338));
  if (*(void **)(unaff_RBP + 0x338) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x338));
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x3f].field_0x8);
  uVar47 = unaff_R13 & 0xffffffff;
  *(ulonglong *)&unaff_RBP[0x410].field_0x0 = unaff_R13;
  *(undefined4 *)&unaff_RBP[0x420].field_0x0 = uVar63;
  *(ulonglong *)(unaff_RBP + 0x418) = unaff_R13;
  uVar64 = unaff_R13;
  do {
    Audio::FLFO::GetModSourceNormalPhase
              ((FLFO *)((longlong)unaff_RSI + uVar47 * 0x170 + 0xa70),
               (FPatchSource *)(unaff_RBP + 0xc0));
    uVar63 = *(undefined4 *)&unaff_RBP[0xc0].field_0x0;
    lVar65 = unaff_R13 * 0x240;
    *(undefined1 *)((longlong)unaff_RSI + lVar65 + 0xde8) = 0;
    *(undefined4 *)((longlong)unaff_RSI + lVar65 + 0xdb0) = uVar63;
    FString::operator=((FString *)((longlong)unaff_RSI + uVar47 * 0x240 + 0xdb8),
                       (FString *)(unaff_RBP + 200));
    pFVar52 = *(FScriptContainerElement **)((longlong)unaff_RSI + lVar65 + 0xdc8);
    if ((pFVar52 <= unaff_RBP + 0x220) &&
       (piVar54 = (int *)(longlong)*(int *)((longlong)unaff_RSI + lVar65 + 0xdd4),
       unaff_RBP + 0x220 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)*(int *)((longlong)unaff_RSI + lVar65 + 0xdd0);
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = *(int *)((longlong)unaff_RSI + lVar65 + 0xdd0);
    piVar54 = (int *)((longlong)unaff_RSI + lVar65 + 0xdd4);
    if (iVar19 == *piVar54) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)((longlong)unaff_RSI + lVar65 + 0xdc8),piVar54)
      ;
    }
    uVar63 = *(undefined4 *)&unaff_RBP[0x220].field_0x0;
    *(int *)((longlong)unaff_RSI + lVar65 + 0xdd0) = iVar19 + 1;
    lVar53 = *(longlong *)((longlong)unaff_RSI + lVar65 + 0xdc8);
    lVar55 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(lVar55 + lVar53) = uVar63;
    *(undefined4 *)(lVar55 + 4 + lVar53) = *(undefined4 *)(unaff_RBP + 0x224);
    *(undefined4 *)(lVar55 + 8 + lVar53) = *(undefined4 *)(unaff_RBP + 0x228);
    FString::FString((FString *)(lVar53 + lVar55 + 0x10),(FString *)(unaff_RBP + 0x230));
    FString::FString((FString *)(unaff_RBP + 0x260),"ELFOPatch::PatchToGain");
    pFVar52 = (FScriptContainerElement *)(&unaff_RSI[0x28].field_0x18 + uVar64);
    if (pFVar52 == unaff_RBP + 0x260) {
LAB_14f0e1ce7:
      pvVar61 = *(void **)&unaff_RBP[0x260].field_0x0;
    }
    else {
      piVar54 = (int *)(&unaff_RSI[0x28].field_0x24 + uVar64);
      pvVar61 = *(void **)&unaff_RBP[0x260].field_0x0;
      iVar19 = (int)*(undefined8 *)(unaff_RBP + 0x268);
      *(int *)(&unaff_RSI[0x28].field_0x20 + uVar64) = iVar19;
      if ((iVar19 != 0) || (*piVar54 != 0)) {
        in_stack_00000030 = piVar54;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,*piVar54,(ForAnyElementType *)pFVar52,iVar19,piVar54);
        if (iVar19 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar52->field_0x0,pvVar61,(longlong)iVar19 * 2);
        }
        goto LAB_14f0e1ce7;
      }
      *piVar54 = 0;
    }
    if (pvVar61 != (void *)0x0) {
      FMemory::Free(pvVar61);
    }
    Audio::FModulationMatrix::AddPatch
              (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,
               (FPatch *)(&unaff_RSI[0x27].field_0x48 + uVar64));
    uVar20 = *(uint *)&unaff_RBP[0xc0].field_0x0;
    pFVar56 = (FPatch *)((longlong)unaff_RSI + lVar65 + 0xdf0);
    pFVar56->bEnabled = false;
    (pFVar56->Source).Id = uVar20;
    FString::operator=(&(pFVar56->Source).Name,(FString *)(unaff_RBP + 200));
    FString::FString((FString *)(unaff_RBP + 0x160),"ELFOPatch::PatchToOscFreq");
    pFVar4 = &pFVar56->Name;
    if ((FScriptContainerElement *)pFVar4 == unaff_RBP + 0x160) {
LAB_14f0e1db2:
      pvVar61 = *(void **)&unaff_RBP[0x160].field_0x0;
    }
    else {
      piVar54 = &(pFVar56->Name).Data.ArrayMax;
      iVar19 = *piVar54;
      pvVar61 = *(void **)&unaff_RBP[0x160].field_0x0;
      iVar60 = (int)*(undefined8 *)(unaff_RBP + 0x168);
      (pFVar56->Name).Data.ArrayNum = iVar60;
      if ((iVar60 != 0) || (iVar19 != 0)) {
        in_stack_00000030 = piVar54;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar60,iVar19,(ForAnyElementType *)pFVar4,iVar60,piVar54);
        if (iVar60 != 0) {
          memcpy((pFVar4->Data).AllocatorInstance.Data,pvVar61,(longlong)iVar60 * 2);
        }
        goto LAB_14f0e1db2;
      }
      *piVar54 = 0;
    }
    if (pvVar61 != (void *)0x0) {
      FMemory::Free(pvVar61);
    }
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= (FScriptContainerElement *)&stack0x00000070) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       (FScriptContainerElement *)&stack0x00000070 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(float *)(pFVar52 + lVar53) = in_stack_00000070;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = _bStack0000000000000074;
    *(undefined4 *)(pFVar52 + lVar53 + 8) = uStack0000000000000078;
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + -0x80));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + -0x70) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + -0x70 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[-0x70].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + -0x6c);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + -0x68);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + -0x60));
    Audio::FModulationMatrix::AddPatch(unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,pFVar56);
    uVar20 = *(uint *)&unaff_RBP[0xc0].field_0x0;
    pFVar56 = (FPatch *)((longlong)unaff_RSI + lVar65 + 0xeb0);
    pFVar56->bEnabled = false;
    (pFVar56->Source).Id = uVar20;
    FString::operator=(&(pFVar56->Source).Name,(FString *)(unaff_RBP + 200));
    FString::FString((FString *)(unaff_RBP + 0x170),"ELFOPatch::PatchToOscPulseWidth");
    pFVar4 = &pFVar56->Name;
    if ((FScriptContainerElement *)pFVar4 == unaff_RBP + 0x170) {
LAB_14f0e2003:
      pvVar61 = *(void **)&unaff_RBP[0x170].field_0x0;
    }
    else {
      piVar54 = &(pFVar56->Name).Data.ArrayMax;
      iVar19 = *piVar54;
      pvVar61 = *(void **)&unaff_RBP[0x170].field_0x0;
      iVar60 = (int)*(undefined8 *)(unaff_RBP + 0x178);
      (pFVar56->Name).Data.ArrayNum = iVar60;
      if ((iVar60 != 0) || (iVar19 != 0)) {
        in_stack_00000030 = piVar54;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar60,iVar19,(ForAnyElementType *)pFVar4,iVar60,piVar54);
        if (iVar60 != 0) {
          memcpy((pFVar4->Data).AllocatorInstance.Data,pvVar61,(longlong)iVar60 * 2);
        }
        goto LAB_14f0e2003;
      }
      *piVar54 = 0;
    }
    if (pvVar61 != (void *)0x0) {
      FMemory::Free(pvVar61);
    }
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + 0x120) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + 0x120 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[0x120].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + 0x124);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + 0x128);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + 0x130));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + 0x140) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + 0x140 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[0x140].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + 0x144);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + 0x148);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + 0x150));
    Audio::FModulationMatrix::AddPatch(unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,pFVar56);
    uVar20 = *(uint *)&unaff_RBP[0xc0].field_0x0;
    pFVar56 = (FPatch *)((longlong)unaff_RSI + lVar65 + 0xe30);
    pFVar56->bEnabled = false;
    (pFVar56->Source).Id = uVar20;
    FString::operator=(&(pFVar56->Source).Name,(FString *)(unaff_RBP + 200));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + -0x50) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + -0x50 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[-0x50].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + -0x4c);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + -0x48);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + -0x40));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + -0x30) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + -0x30 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[-0x30].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + -0x2c);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + -0x28);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + -0x20));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + -0x10) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + -0x10 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[-0x10].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + -0xc);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + -8);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)unaff_RBP);
    FString::FString((FString *)(unaff_RBP + 0x1d0),"ELFOPatch::PatchToFilterFreq");
    pFVar4 = &pFVar56->Name;
    if ((FScriptContainerElement *)pFVar4 == unaff_RBP + 0x1d0) {
LAB_14f0e24be:
      pvVar61 = *(void **)&unaff_RBP[0x1d0].field_0x0;
    }
    else {
      piVar54 = &(pFVar56->Name).Data.ArrayMax;
      iVar19 = *piVar54;
      pvVar61 = *(void **)&unaff_RBP[0x1d0].field_0x0;
      iVar60 = (int)*(undefined8 *)(unaff_RBP + 0x1d8);
      (pFVar56->Name).Data.ArrayNum = iVar60;
      if ((iVar60 != 0) || (iVar19 != 0)) {
        in_stack_00000030 = piVar54;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar60,iVar19,(ForAnyElementType *)pFVar4,iVar60,piVar54);
        if (iVar60 != 0) {
          memcpy((pFVar4->Data).AllocatorInstance.Data,pvVar61,(longlong)iVar60 * 2);
        }
        goto LAB_14f0e24be;
      }
      *piVar54 = 0;
    }
    if (pvVar61 != (void *)0x0) {
      FMemory::Free(pvVar61);
    }
    Audio::FModulationMatrix::AddPatch(unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,pFVar56);
    uVar20 = *(uint *)&unaff_RBP[0xc0].field_0x0;
    pFVar56 = (FPatch *)((longlong)unaff_RSI + lVar65 + 0xe70);
    pFVar56->bEnabled = false;
    (pFVar56->Source).Id = uVar20;
    FString::operator=(&(pFVar56->Source).Name,(FString *)(unaff_RBP + 200));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + 0x10) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + 0x10 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[0x10].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + 0x14);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + 0x18);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + 0x20));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + 0x30) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + 0x30 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    if (iVar19 == (pFVar56->Destinations).ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,
                          &(pFVar56->Destinations).ArrayMax);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[0x30].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar53 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar53) = uVar63;
    *(undefined4 *)(pFVar52 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + 0x34);
    *(undefined4 *)(pFVar52 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + 0x38);
    FString::FString((FString *)(pFVar52 + lVar53 + 0x10),(FString *)(unaff_RBP + 0x40));
    FString::FString((FString *)(unaff_RBP + 0x180),"ELFOPatch::PatchToFilterQ");
    pFVar4 = &pFVar56->Name;
    if ((FScriptContainerElement *)pFVar4 == unaff_RBP + 0x180) {
LAB_14f0e2709:
      pvVar61 = *(void **)&unaff_RBP[0x180].field_0x0;
    }
    else {
      piVar54 = &(pFVar56->Name).Data.ArrayMax;
      iVar19 = *piVar54;
      pvVar61 = *(void **)&unaff_RBP[0x180].field_0x0;
      iVar60 = (int)*(undefined8 *)(unaff_RBP + 0x188);
      (pFVar56->Name).Data.ArrayNum = iVar60;
      if ((iVar60 != 0) || (iVar19 != 0)) {
        in_stack_00000030 = piVar54;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar60,iVar19,(ForAnyElementType *)pFVar4,iVar60,piVar54);
        if (iVar60 != 0) {
          memcpy((pFVar4->Data).AllocatorInstance.Data,pvVar61,(longlong)iVar60 * 2);
        }
        goto LAB_14f0e2709;
      }
      *piVar54 = 0;
    }
    if (pvVar61 != (void *)0x0) {
      FMemory::Free(pvVar61);
    }
    Audio::FModulationMatrix::AddPatch(unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,pFVar56);
    uVar20 = *(uint *)&unaff_RBP[0xc0].field_0x0;
    pFVar56 = (FPatch *)((longlong)unaff_RSI + lVar65 + 0xef0);
    pFVar56->bEnabled = false;
    (pFVar56->Source).Id = uVar20;
    FString::operator=(&(pFVar56->Source).Name,(FString *)(unaff_RBP + 200));
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    if ((pFVar52 <= unaff_RBP + 0x200) &&
       (piVar54 = (int *)(longlong)(pFVar56->Destinations).ArrayMax,
       unaff_RBP + 0x200 < pFVar52 + (longlong)piVar54 * 0x20)) {
      in_stack_00000038 = (longlong)(pFVar56->Destinations).ArrayNum;
      in_stack_00000040 = 0x20;
      in_stack_00000030 = piVar54;
      bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pwVar46 = (wchar_t *)(*pcVar13)();
        return pwVar46;
      }
    }
    iVar19 = (pFVar56->Destinations).ArrayNum;
    piVar54 = &(pFVar56->Destinations).ArrayMax;
    if (iVar19 == *piVar54) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(pFVar56->Destinations).AllocatorInstance,piVar54);
    }
    uVar63 = *(undefined4 *)&unaff_RBP[0x200].field_0x0;
    (pFVar56->Destinations).ArrayNum = iVar19 + 1;
    pFVar52 = (pFVar56->Destinations).AllocatorInstance.Data;
    lVar65 = (longlong)iVar19 * 0x20;
    *(undefined4 *)(pFVar52 + lVar65) = uVar63;
    *(undefined4 *)(pFVar52 + lVar65 + 4) = *(undefined4 *)(unaff_RBP + 0x204);
    *(undefined4 *)(pFVar52 + lVar65 + 8) = *(undefined4 *)(unaff_RBP + 0x208);
    FString::FString((FString *)(pFVar52 + lVar65 + 0x10),(FString *)(unaff_RBP + 0x210));
    FString::FString((FString *)(unaff_RBP + 400),"ELFOPatch::PatchToOscPan");
    pFVar4 = &pFVar56->Name;
    if ((FScriptContainerElement *)pFVar4 == unaff_RBP + 400) {
LAB_14f0e28a6:
      pvVar61 = *(void **)&unaff_RBP[400].field_0x0;
    }
    else {
      piVar54 = &(pFVar56->Name).Data.ArrayMax;
      iVar19 = *piVar54;
      pvVar61 = *(void **)&unaff_RBP[400].field_0x0;
      iVar60 = (int)*(undefined8 *)(unaff_RBP + 0x198);
      (pFVar56->Name).Data.ArrayNum = iVar60;
      if ((iVar60 != 0) || (iVar19 != 0)) {
        in_stack_00000030 = piVar54;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar60,iVar19,(ForAnyElementType *)pFVar4,iVar60,piVar54);
        if (iVar60 != 0) {
          memcpy((pFVar4->Data).AllocatorInstance.Data,pvVar61,(longlong)iVar60 * 2);
        }
        goto LAB_14f0e28a6;
      }
      *piVar54 = 0;
    }
    if (pvVar61 != (void *)0x0) {
      FMemory::Free(pvVar61);
    }
    Audio::FModulationMatrix::AddPatch(unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,pFVar56);
    if (*(void **)(unaff_RBP + 200) != (void *)0x0) {
      FMemory::Free(*(void **)(unaff_RBP + 200));
    }
    uVar20 = *(int *)&unaff_RBP[0x420].field_0x0 + 1;
    uVar47 = (ulonglong)uVar20;
    unaff_R13 = *(longlong *)&unaff_RBP[0x410].field_0x0 + 1;
    uVar64 = *(longlong *)(unaff_RBP + 0x418) + 0x240;
    *(uint *)&unaff_RBP[0x420].field_0x0 = uVar20;
    *(ulonglong *)&unaff_RBP[0x410].field_0x0 = unaff_R13;
    *(ulonglong *)(unaff_RBP + 0x418) = uVar64;
  } while ((int)uVar20 < 2);
  unaff_RSI[0x2c].field_0x48 = 0;
  pFVar48 = Audio::FLFO::GetModSourceNormalPhase
                      ((FLFO *)&unaff_RSI[0x1e].field_0x20,(FPatchSource *)(unaff_RBP + 0x368));
  puVar2 = &unaff_RSI[0x2c].field_0x18;
  pFVar4 = &pFVar48->Name;
  *(uint *)&unaff_RSI[0x2c].field_0x10 = pFVar48->Id;
  if ((FString *)puVar2 != pFVar4) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&unaff_RSI[0x2c].field_0x20 = (pFVar48->Name).Data.ArrayNum;
    *(int *)&unaff_RSI[0x2c].field_0x24 = (pFVar48->Name).Data.ArrayMax;
    (pFVar48->Name).Data.ArrayNum = 0;
    (pFVar48->Name).Data.ArrayMax = 0;
  }
  if (*(void **)&unaff_RBP[0x370].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x370].field_0x0);
  }
  if ((*(FScriptContainerElement **)&unaff_RSI[0x2c].field_0x28 <= unaff_RBP + 0x270) &&
     (unaff_RBP + 0x270 <
      *(FScriptContainerElement **)&unaff_RSI[0x2c].field_0x28 +
      (longlong)*(int *)&unaff_RSI[0x2c].field_0x34 * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x2c].field_0x30;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x2c].field_0x34;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x2c].field_0x30;
  if (iVar19 == *(int *)&unaff_RSI[0x2c].field_0x34) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x2c].field_0x28,
                        (int *)&unaff_RSI[0x2c].field_0x34);
  }
  uVar63 = *(undefined4 *)&unaff_RBP[0x270].field_0x0;
  *(int *)&unaff_RSI[0x2c].field_0x30 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x2c].field_0x28;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar63;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + 0x274);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + 0x278);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + 0x280));
  FString::FString((FString *)(unaff_RBP + 0x1a0),"ELFOPatch::PatchLFO1ToLFO2Frequency");
  puVar2 = &unaff_RSI[0x2c].field_0x38;
  if ((FScriptContainerElement *)puVar2 == unaff_RBP + 0x1a0) {
LAB_14f0e2ad5:
    pvVar61 = *(void **)&unaff_RBP[0x1a0].field_0x0;
  }
  else {
    puVar3 = &unaff_RSI[0x2c].field_0x44;
    pvVar61 = *(void **)&unaff_RBP[0x1a0].field_0x0;
    iVar19 = (int)*(undefined8 *)(unaff_RBP + 0x1a8);
    *(int *)&unaff_RSI[0x2c].field_0x40 = iVar19;
    if ((iVar19 != 0) || (*(int *)puVar3 != 0)) {
      in_stack_00000030 = (int *)puVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar19,*(int *)puVar3,(ForAnyElementType *)puVar2,iVar19,(int *)puVar3);
      if (iVar19 != 0) {
        memcpy(*(void **)puVar2,pvVar61,(longlong)iVar19 * 2);
      }
      goto LAB_14f0e2ad5;
    }
    *(undefined4 *)puVar3 = 0;
  }
  if (pvVar61 != (void *)0x0) {
    FMemory::Free(pvVar61);
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x2c].field_0x10);
  unaff_RSI[0x2d].field_0x30 = 0;
  pFVar48 = Audio::FLFO::GetModSourceNormalPhase
                      ((FLFO *)&unaff_RSI[0x1e].field_0x20,(FPatchSource *)(unaff_RBP + 0x380));
  pFVar30 = unaff_RSI + 0x2d;
  pFVar4 = &pFVar48->Name;
  *(uint *)&unaff_RSI[0x2c].field_0x50 = pFVar48->Id;
  if (pFVar30 != (FSlot *)pFVar4) {
    if (*(void **)pFVar30 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar30);
    }
    *(FScriptContainerElement **)pFVar30 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&unaff_RSI[0x2d].field_0x8 = (pFVar48->Name).Data.ArrayNum;
    *(int *)&unaff_RSI[0x2d].field_0xc = (pFVar48->Name).Data.ArrayMax;
    (pFVar48->Name).Data.ArrayNum = 0;
    (pFVar48->Name).Data.ArrayMax = 0;
  }
  if (*(void **)(unaff_RBP + 0x388) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x388));
  }
  if ((*(FScriptContainerElement **)&unaff_RSI[0x2d].field_0x10 <= unaff_RBP + 0x50) &&
     (unaff_RBP + 0x50 <
      *(FScriptContainerElement **)&unaff_RSI[0x2d].field_0x10 +
      (longlong)*(int *)&unaff_RSI[0x2d].field_0x1c * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x2d].field_0x18;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x2d].field_0x1c;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x2d].field_0x18;
  if (iVar19 == *(int *)&unaff_RSI[0x2d].field_0x1c) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)&unaff_RSI[0x2d].field_0x10,
                        (int *)&unaff_RSI[0x2d].field_0x1c);
  }
  uVar63 = *(undefined4 *)&unaff_RBP[0x50].field_0x0;
  *(int *)&unaff_RSI[0x2d].field_0x18 = iVar19 + 1;
  lVar65 = *(longlong *)&unaff_RSI[0x2d].field_0x10;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar53 + lVar65) = uVar63;
  *(undefined4 *)(lVar53 + 4 + lVar65) = *(undefined4 *)(unaff_RBP + 0x54);
  *(undefined4 *)(lVar53 + 8 + lVar65) = *(undefined4 *)(unaff_RBP + 0x58);
  FString::FString((FString *)(lVar65 + 0x10 + lVar53),(FString *)(unaff_RBP + 0x60));
  FString::FString((FString *)(unaff_RBP + 0x1b0),"ELFOPatch::PatchLFO1ToLFO2Frequency");
  puVar2 = &unaff_RSI[0x2d].field_0x20;
  if ((FScriptContainerElement *)puVar2 == unaff_RBP + 0x1b0) {
LAB_14f0e2cad:
    pvVar61 = *(void **)&unaff_RBP[0x1b0].field_0x0;
  }
  else {
    puVar3 = &unaff_RSI[0x2d].field_0x2c;
    pvVar61 = *(void **)&unaff_RBP[0x1b0].field_0x0;
    iVar19 = (int)*(undefined8 *)(unaff_RBP + 0x1b8);
    *(int *)&unaff_RSI[0x2d].field_0x28 = iVar19;
    if ((iVar19 != 0) || (*(int *)puVar3 != 0)) {
      in_stack_00000030 = (int *)puVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar19,*(int *)puVar3,(ForAnyElementType *)puVar2,iVar19,(int *)puVar3);
      if (iVar19 != 0) {
        memcpy(*(void **)puVar2,pvVar61,(longlong)iVar19 * 2);
      }
      goto LAB_14f0e2cad;
    }
    *(undefined4 *)puVar3 = 0;
  }
  if (pvVar61 != (void *)0x0) {
    FMemory::Free(pvVar61);
  }
  Audio::FModulationMatrix::AddPatch
            (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,(FPatch *)&unaff_RSI[0x2c].field_0x50);
  unaff_RSI[0x41].field_0x28 = 1;
  *(undefined4 *)&unaff_RBP[0x290].field_0x0 = *(undefined4 *)&unaff_RSI[0x1b].field_0x40;
  FString::FString((FString *)(unaff_RBP + 0x298),(FString *)&unaff_RSI[0x1b].field_0x48);
  *(undefined4 *)&unaff_RSI[0x40].field_0x48 = *(undefined4 *)&unaff_RBP[0x290].field_0x0;
  FString::operator=((FString *)&unaff_RSI[0x40].field_0x50,(FString *)(unaff_RBP + 0x298));
  if (*(void **)(unaff_RBP + 0x298) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x298));
  }
  puVar2 = &unaff_RSI[0x41].field_0x8;
  if ((*(FScriptContainerElement **)puVar2 <= unaff_RBP + 0x240) &&
     (unaff_RBP + 0x240 <
      *(FScriptContainerElement **)puVar2 + (longlong)*(int *)&unaff_RSI[0x41].field_0x14 * 0x20)) {
    in_stack_00000038 = (longlong)*(int *)&unaff_RSI[0x41].field_0x10;
    in_stack_00000040 = 0x20;
    in_stack_00000030 = (int *)(longlong)*(int *)&unaff_RSI[0x41].field_0x14;
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      pwVar46 = (wchar_t *)(*pcVar13)();
      return pwVar46;
    }
  }
  iVar19 = *(int *)&unaff_RSI[0x41].field_0x10;
  if (iVar19 == *(int *)&unaff_RSI[0x41].field_0x14) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)puVar2,(int *)&unaff_RSI[0x41].field_0x14);
  }
  uVar63 = *(undefined4 *)&unaff_RBP[0x240].field_0x0;
  *(int *)&unaff_RSI[0x41].field_0x10 = iVar19 + 1;
  lVar65 = *(longlong *)puVar2;
  lVar53 = (longlong)iVar19 * 0x20;
  *(undefined4 *)(lVar65 + lVar53) = uVar63;
  *(undefined4 *)(lVar65 + lVar53 + 4) = *(undefined4 *)(unaff_RBP + 0x244);
  *(undefined4 *)(lVar65 + lVar53 + 8) = *(undefined4 *)(unaff_RBP + 0x248);
  FString::FString((FString *)(lVar65 + lVar53 + 0x10),(FString *)(unaff_RBP + 0x250));
  FString::FString((FString *)(unaff_RBP + 0x1c0),"PatchEnvToAmp");
  puVar2 = &unaff_RSI[0x41].field_0x18;
  if ((FScriptContainerElement *)puVar2 != unaff_RBP + 0x1c0) {
    puVar3 = &unaff_RSI[0x41].field_0x24;
    pvVar61 = *(void **)&unaff_RBP[0x1c0].field_0x0;
    iVar19 = (int)*(undefined8 *)(unaff_RBP + 0x1c8);
    *(int *)&unaff_RSI[0x41].field_0x20 = iVar19;
    if ((iVar19 == 0) && (*(int *)puVar3 == 0)) {
      *(undefined4 *)puVar3 = 0;
      goto LAB_14f0e2e89;
    }
    in_stack_00000030 = (int *)puVar3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar19,*(int *)puVar3,(ForAnyElementType *)puVar2,iVar19,(int *)puVar3);
    if (iVar19 != 0) {
      memcpy(*(void **)puVar2,pvVar61,(longlong)iVar19 * 2);
    }
  }
  pvVar61 = *(void **)&unaff_RBP[0x1c0].field_0x0;
LAB_14f0e2e89:
  if (pvVar61 != (void *)0x0) {
    FMemory::Free(pvVar61);
  }
  bVar18 = Audio::FModulationMatrix::AddPatch
                     (unaff_R12,*(int *)&unaff_RSI[0x42].field_0x1c,
                      (FPatch *)&unaff_RSI[0x40].field_0x48);
  pwVar46 = (wchar_t *)CONCAT71(extraout_var,bVar18);
  if (*(void **)&unaff_RBP[0x90].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x90].field_0x0);
    pwVar46 = extraout_RAX_01;
  }
  if (*(void **)(unaff_RBP + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)(unaff_RBP + 0x78));
    pwVar46 = extraout_RAX_02;
  }
  if (*(void **)&unaff_RBP[0x60].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x60].field_0x0);
    pwVar46 = extraout_RAX_03;
  }
  if (*(void **)&unaff_RBP[0xb0].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0xb0].field_0x0);
    pwVar46 = extraout_RAX_04;
  }
  if (*(void **)&unaff_RBP[0x280].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x280].field_0x0);
    pwVar46 = extraout_RAX_05;
  }
  if (in_stack_00000060.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(in_stack_00000060.Data);
    pwVar46 = extraout_RAX_06;
  }
  if (*(void **)&unaff_RBP[0x210].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x210].field_0x0);
    pwVar46 = extraout_RAX_07;
  }
  if (*(void **)&unaff_RBP[0x230].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x230].field_0x0);
    pwVar46 = extraout_RAX_08;
  }
  if (*(void **)&unaff_RBP[0x250].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x250].field_0x0);
    pwVar46 = extraout_RAX_09;
  }
  if (*(void **)&unaff_RBP[0x40].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x40].field_0x0);
    pwVar46 = extraout_RAX_10;
  }
  if (*(void **)&unaff_RBP[0x20].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x20].field_0x0);
    pwVar46 = extraout_RAX_11;
  }
  pFVar52 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&unaff_RBP->field_0x0)->
            AllocatorInstance).Data;
  if (pFVar52 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar52);
    pwVar46 = extraout_RAX_12;
  }
  if (*(void **)&unaff_RBP[-0x20].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[-0x20].field_0x0);
    pwVar46 = extraout_RAX_13;
  }
  if (*(void **)&unaff_RBP[-0x40].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[-0x40].field_0x0);
    pwVar46 = extraout_RAX_14;
  }
  if (*(void **)&unaff_RBP[0x150].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x150].field_0x0);
    pwVar46 = extraout_RAX_15;
  }
  if (*(void **)&unaff_RBP[0x130].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[0x130].field_0x0);
    pwVar46 = extraout_RAX_16;
  }
  if (*(void **)&unaff_RBP[-0x60].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[-0x60].field_0x0);
    pwVar46 = extraout_RAX_17;
  }
  if (*(void **)&unaff_RBP[-0x80].field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&unaff_RBP[-0x80].field_0x0);
    pwVar46 = extraout_RAX_18;
  }
  return pwVar46;
}

// LoadInterleavedNameBatchInInputOrder @ 141a883d0

void __cdecl
LoadInterleavedNameBatchInInputOrder
          (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<unsigned___int64_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulong64 *puVar11;
  undefined4 local_res8 [2];
  uint local_res10;
  ulong64 *local_res18;
  
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Hashes.Num() == Out.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1357,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar11 = param_2->DataPtr;
  pbVar2 = param_3->DataPtr;
  local_res10 = 0;
  local_res18 = puVar11 + param_2->ArrayNum;
  pbVar7 = pbVar2;
  if (puVar11 != local_res18) {
    do {
      if ((pbVar2 + param_3->ArrayNum <= pbVar7) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("NameIt < Names.end()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x135e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pbVar1 = pbVar7 + 2;
      uVar9 = (ulonglong)((*pbVar7 & 0x7f) * 0x100 + (uint)pbVar7[1]);
      if ((char)*pbVar7 < '\0') {
        pbVar7 = pbVar1 + ((uint)pbVar1 & 1) + uVar9 * 2;
        BatchLoadNameWithHash<wchar_t>
                  ((wchar_t *)local_res8,(uint)(pbVar1 + ((uint)pbVar1 & 1)),uVar9);
      }
      else {
        pbVar7 = pbVar1 + uVar9;
        BatchLoadNameWithHash<char>((char *)local_res8,(uint)pbVar1,uVar9);
      }
      uVar4 = local_res8[0];
      lVar10 = (longlong)(int)local_res10;
      uVar8 = local_res10 + 1;
      uVar6 = 0;
      if ((int)local_res10 < param_1->ArrayNum) {
        uVar6 = ~local_res10 >> 0x1f;
      }
      local_res10 = uVar8;
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar11 = puVar11 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar10 * 4) = uVar4;
    } while (puVar11 != local_res18);
  }
  if ((pbVar7 != pbVar2 + param_3->ArrayNum) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("NameIt == Names.end()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1363,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// LoadInterleavedNameBatchInShardOrder @ 141a885c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
LoadInterleavedNameBatchInShardOrder
          (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<unsigned___int64_const_,int> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  ulong64 *puVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint *puVar6;
  undefined8 uVar7;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint uVar12;
  ulong64 *puVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  byte *pbVar17;
  ForAnyElementType FVar18;
  int iVar19;
  undefined4 uVar20;
  undefined1 auStackY_958 [32];
  ForAnyElementType local_928;
  int local_920 [2];
  TArray<FNameLoad<1>,TSizedDefaultAllocator<32>_> local_918;
  uint local_908;
  ulonglong local_900;
  byte *local_8f8;
  uint uStack_8f0;
  undefined4 uStack_8ec;
  FNameLoad<1> *local_8e8;
  uint uStack_8e0;
  undefined4 uStack_8dc;
  uint *local_8d8;
  undefined8 uStack_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  uint uStack_8c0;
  ushort uStack_8bc;
  undefined2 uStack_8ba;
  FScriptContainerElement *local_8b8;
  undefined2 uStack_8b0;
  undefined6 uStack_8ae;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *local_8a8;
  TArrayView<FNameLoad<1>,int> local_898;
  ulong64 *local_888;
  undefined8 uStack_880;
  undefined2 local_86a;
  undefined2 local_85a;
  undefined8 local_858;
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_958;
  local_8e8 = (FNameLoad<1> *)param_2;
  local_8a8 = param_1;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("Out.Num() == Hashes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x13e1,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar13 = param_2->DataPtr;
  uStack_880 = *(undefined8 *)&param_2->ArrayNum;
  uVar10 = param_1->ArrayNum;
  local_908 = uVar10;
  local_888 = puVar13;
  memset(&local_858,0,0x800);
  uVar15 = (uint)*(undefined8 *)&param_2->ArrayNum;
  puVar1 = puVar13 + (int)uVar15;
  for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
    puVar11 = &local_858 + *(byte *)((longlong)puVar13 + 4);
    *(uint *)puVar11 = (uint)*puVar11 + 1;
  }
  uVar12 = 0;
  puVar11 = &local_858;
  do {
    *(uint *)((longlong)puVar11 + 4) = uVar12;
    uVar12 = uVar12 + (uint)*puVar11;
    puVar11 = puVar11 + 1;
  } while (puVar11 != local_58);
  if ((uVar12 != uVar15) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("SortIdx == Hashes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x13d8,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar19 = 0;
  local_928.Data = (FScriptContainerElement *)0x0;
  local_920[0] = 0;
  local_920[1] = 0;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&local_928,local_920,local_920 + 1);
    iVar19 = local_920[0];
  }
  uVar15 = 0;
  pbVar17 = param_3->DataPtr;
  if (uVar10 != 0) {
    while( true ) {
      bVar2 = *pbVar17;
      local_8f8 = pbVar17 + 2;
      uStack_8f0 = (bVar2 & 0x7f) * 0x100 + (uint)pbVar17[1];
      if (-1 < (char)bVar2) {
        pbVar17 = local_8f8 + uStack_8f0;
      }
      else {
        local_8f8 = local_8f8 + ((uint)local_8f8 & 1);
        pbVar17 = local_8f8 + (ulonglong)uStack_8f0 * 2;
      }
      uStack_8ec = CONCAT31(uStack_8ec._1_3_,-1 >= (char)bVar2);
      uVar12 = 0;
      if ((int)uVar15 < iVar19) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar15;
      uVar15 = uVar15 + 1;
      *(byte **)(local_928.Data + lVar14 * 0x10) = local_8f8;
      *(longlong *)(local_928.Data + lVar14 * 0x10 + 8) = CONCAT44(uStack_8ec,uStack_8f0);
      if (uVar10 <= uVar15) break;
      iVar19 = local_920[0];
    }
  }
  if ((pbVar17 != param_3->DataPtr + param_3->ArrayNum) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("NameIt == HeadersAndStrings.end()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x13f0,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_918.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_918.ArrayNum = 0;
  local_918.ArrayMax = 0;
  TArray<FNameLoad<1>,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_918,uVar10,Default);
  uVar15 = 0;
  puVar11 = &local_858;
  FVar18.Data = local_918.AllocatorInstance.Data;
  if (uVar10 != 0) {
    do {
      uVar12 = ~uVar15 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar15;
      uVar3 = param_2->DataPtr[lVar14];
      local_900 = uVar3 >> 0x20 & 0xff;
      uVar20 = (undefined4)local_900;
      local_8f8 = (byte *)(local_900 * 8);
      uVar10 = 0;
      if ((int)uVar15 < local_920[0]) {
        uVar10 = uVar12;
      }
      if (uVar10 == 0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar20 = (undefined4)local_900;
      }
      pTVar8 = local_8a8;
      puVar6 = *(uint **)(local_928.Data + lVar14 * 0x10);
      uVar7 = *(undefined8 *)(local_928.Data + lVar14 * 0x10 + 8);
      uVar4 = *(undefined8 *)(local_928.Data + lVar14 * 0x10 + 8);
      uStack_8c0 = (uint)(uVar3 >> 0x20);
      uVar16 = (ushort)(uVar3 >> 0x28);
      if ((char)((ulonglong)uVar4 >> 0x20) == '\0') {
        uVar10 = 0;
        if ((int)uVar4 == 4) {
          uVar10 = (uint)((*puVar6 & 0xdfdfdfdf) == 0x454e4f4e);
        }
        uStack_8c0 = uVar10 << 0x1d | uStack_8c0 & 0xe0000000;
        uStack_8bc = (uVar16 & 0x1f | (short)uVar4 << 5) * 2;
        uStack_8ba = local_85a;
      }
      else {
        uStack_8c0 = uStack_8c0 & 0xe0000000;
        uStack_8bc = (uVar16 & 0x1f | (short)uVar4 << 5) * 2 | 1;
        uStack_8ba = local_86a;
      }
      uStack_8c4 = (undefined4)uVar3;
      uVar10 = 0;
      if ((int)uVar15 < local_8a8->ArrayNum) {
        uVar10 = uVar12;
      }
      local_8d8 = puVar6;
      uStack_8d0 = uVar7;
      local_8c8 = uVar20;
      if ((uVar10 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pbVar17 = local_8f8;
      uStack_8b0 = 0;
      local_8b8 = (pTVar8->AllocatorInstance).Data + lVar14 * 4;
      uVar10 = *(uint *)(local_8f8 + (longlong)&local_858 + 4);
      lVar14 = (longlong)(int)uVar10;
      uVar12 = 0;
      if ((int)uVar10 < local_918.ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = uVar15 + 1;
      *(uint **)&local_918.AllocatorInstance.Data[lVar14 * 0x30].field_0x0 = puVar6;
      *(undefined8 *)(local_918.AllocatorInstance.Data + lVar14 * 0x30 + 8) = uVar7;
      *(ulonglong *)(local_918.AllocatorInstance.Data + lVar14 * 0x30 + 0x10) =
           CONCAT44(uStack_8c4,local_8c8);
      *(ulonglong *)(local_918.AllocatorInstance.Data + lVar14 * 0x30 + 0x10 + 8) =
           CONCAT26(uStack_8ba,CONCAT24(uStack_8bc,uStack_8c0));
      *(FScriptContainerElement **)(local_918.AllocatorInstance.Data + lVar14 * 0x30 + 0x20) =
           local_8b8;
      *(longlong *)(local_918.AllocatorInstance.Data + lVar14 * 0x30 + 0x20 + 8) =
           CONCAT62(uStack_8ae,uStack_8b0);
      *(int *)(pbVar17 + (longlong)&local_858 + 4) =
           *(int *)(pbVar17 + (longlong)&local_858 + 4) + 1;
      FVar18.Data = local_918.AllocatorInstance.Data;
      param_2 = (TArrayView<unsigned___int64_const_,int> *)local_8e8;
    } while (uVar15 < local_908);
  }
  do {
    uStack_8e0 = (uint)*puVar11;
    local_8e8 = (FNameLoad<1> *)FVar18.Data;
    if (((int)uStack_8e0 < 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_898._12_4_ = uStack_8dc;
    local_898.ArrayNum = uStack_8e0;
    local_898.DataPtr = local_8e8;
    FVar18.Data = FVar18.Data + (ulonglong)(uint)*puVar11 * 0x30;
    FNamePoolShard<1>::InsertBatch
              ((FNamePoolShard<1> *)
               (NamePoolData +
               ((longlong)puVar11 - (longlong)&local_858 >> 3 & 0xffffffffU) * 0x40 + 0x10040),
               &local_898);
    puVar11 = puVar11 + 1;
  } while (puVar11 != local_58);
  if (((FNameLoad<1> *)FVar18.Data !=
       (FNameLoad<1> *)(local_918.AllocatorInstance.Data + (longlong)local_918.ArrayNum * 0x30)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("LoadIt == ShardSortedLoads.GetData() + ShardSortedLoads.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1408,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_918.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.AllocatorInstance.Data);
  }
  if (local_928.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.Data);
  }
  return;
}

// LoadNameBatch @ 141a88c10

TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> * __cdecl
LoadNameBatch(TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
             FArchive *param_1,ENameBatchLoadingFlags param_2)

{
  bool bVar1;
  FNameBatchLoader local_58;
  
  local_58.Hashes.DataPtr = (ulong64 *)0x0;
  local_58.Hashes.ArrayNum = 0;
  local_58.Headers.DataPtr = (FSerializedNameHeader *)0x0;
  local_58.Headers.ArrayNum = 0;
  local_58.Strings.DataPtr = (uchar *)0x0;
  local_58.Strings.ArrayNum = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Flags = param_2;
  bVar1 = FNameBatchLoader::Read(&local_58,param_1);
  if (bVar1) {
    FNameBatchLoader::Load(&local_58,__return_storage_ptr__);
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LoadNameBatch @ 141a88c90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
LoadNameBatch(TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *param_1,
             TArrayView<unsigned_char_const_,int> *param_2,
             TArrayView<unsigned_char_const_,int> *param_3,ENameBatchLoadingFlags param_4)

{
  ulong64 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FDisplayNameEntryId FVar6;
  uint uVar7;
  undefined4 extraout_var;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  undefined4 uStack_8c;
  TArrayView<unsigned_char_const_,int> local_78;
  TArrayView<unsigned___int64_const_,int> local_68;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned___int64_const_,int> local_48;
  byte *local_38;
  undefined8 uStack_30;
  
  if ((((ulonglong)param_2->DataPtr & 7) != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(NameData.GetData(), sizeof(uint64))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x146c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((ulonglong)param_3->DataPtr & 7) != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(HashData.GetData(), sizeof(uint64))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x146d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_3->ArrayNum & 7) != 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(HashData.Num(), sizeof(uint64))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x146e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("HashData.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x146f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (int)((ulonglong)(longlong)param_3->ArrayNum >> 3) - 1;
  lVar3 = *(longlong *)param_3->DataPtr;
  puVar1 = (ulong64 *)((longlong)param_3->DataPtr + 8);
  if (((int)uVar8 < 0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_1,uVar8,Default);
  if (lVar3 == 0xc1640000) {
    if ((0xff < uVar8) && ((param_4 & RespectOrder) == None)) {
      local_78.DataPtr = param_2->DataPtr;
      local_78.ArrayNum = param_2->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_68._12_4_ = uStack_8c;
      local_68.ArrayNum = uVar8;
      local_68.DataPtr = puVar1;
      LoadInterleavedNameBatchInShardOrder(param_1,&local_68,&local_78);
      return;
    }
    local_58.DataPtr = param_2->DataPtr;
    local_58.ArrayNum = param_2->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_48._12_4_ = uStack_8c;
    local_48.ArrayNum = uVar8;
    local_48.DataPtr = puVar1;
    LoadInterleavedNameBatchInInputOrder(param_1,&local_48,&local_58);
    return;
  }
  pbVar10 = param_2->DataPtr;
  uStack_30 = *(undefined8 *)&param_2->ArrayNum;
  pbVar9 = pbVar10 + (int)uStack_30;
  uVar8 = 0;
  local_38 = pbVar10;
  while (pbVar10 < pbVar9) {
    uVar11 = (ulonglong)((*pbVar10 & 0x7f) * 0x100 + (uint)pbVar10[1]);
    if ((char)*pbVar10 < '\0') {
      uVar11 = uVar11 * 2 + (ulonglong)((uint)(pbVar10 + 2) & 1);
    }
    pbVar10 = pbVar10 + 2 + uVar11;
    FVar6 = BatchLoadNameWithoutHash((FNameSerializedView *)&stack0x00000010);
    uVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Id.Value);
    uVar7 = 0;
    if ((int)uVar8 < param_1->ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = uVar2;
    uVar8 = uVar8 + 1;
  }
  if ((pbVar10 != pbVar9) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("NameIt == NameEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1351,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar8 != param_1->ArrayNum) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("OutIt.GetIndex() == Out.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1352,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// LoadNameBatchAsync @ 141a88fd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)> * __cdecl
LoadNameBatchAsync(TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)>
                   *__return_storage_ptr__,FArchive *param_1,uint param_2,
                  ENameBatchLoadingFlags param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)> *pTVar7;
  FNameBatchAsyncLoader *pFVar8;
  FEvent *pFVar9;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar10;
  FNameBatchAsyncLoader *this;
  FNameBatchAsyncLoader *pFVar11;
  <lambda_1> local_78;
  undefined1 local_68 [16];
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_58;
  TUniqueFunction<void___cdecl(void)> local_48;
  
  if ((param_2 == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("MaxWorkers > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x150c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)> *)
             (*pcVar5)();
    return pTVar7;
  }
  pFVar8 = operator_new(0x60);
  pFVar11 = (FNameBatchAsyncLoader *)0x0;
  this = pFVar11;
  if (pFVar8 != (FNameBatchAsyncLoader *)0x0) {
    ((TArrayView<unsigned___int64_const_,int> *)&pFVar8->_padding_)->DataPtr = (ulong64 *)0x0;
    *(int *)&pFVar8->_padding_ = 0;
    ((TArrayView<FSerializedNameHeader_const_,int> *)&pFVar8->_padding_)->DataPtr =
         (FSerializedNameHeader *)0x0;
    *(int *)&pFVar8->_padding_ = 0;
    ((TArrayView<unsigned_char_const_,int> *)&pFVar8->_padding_)->DataPtr = (uchar *)0x0;
    *(int *)&pFVar8->_padding_ = 0;
    (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->AllocatorInstance).
    Data = (FScriptContainerElement *)0x0;
    pFVar8->_padding_ = 0;
    *(ENameBatchLoadingFlags *)&pFVar8->_padding_ = param_3;
    pFVar8->DoneEvent = (FEvent *)0x0;
    (pFVar8->Out).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Out).ArrayNum = 0;
    (pFVar8->Out).ArrayMax = 0;
    this = pFVar8;
  }
  pFVar8 = operator_new(0x18);
  if (pFVar8 != (FNameBatchAsyncLoader *)0x0) {
    *(int *)&pFVar8->_padding_ = 1;
    *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = 1;
    ((TArrayView<unsigned___int64_const_,int> *)&pFVar8->_padding_)->DataPtr =
         (ulong64 *)
         &
         ___7__TReferenceControllerWithDeleter_UFNameBatchAsyncLoader__U__DefaultDeleter_UFNameBatchAsyncLoader___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    ((TArrayView<FSerializedNameHeader_const_,int> *)&pFVar8->_padding_)->DataPtr =
         (FSerializedNameHeader *)this;
    pFVar11 = pFVar8;
  }
  if ((this == (FNameBatchAsyncLoader *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)> *)
             (*pcVar5)();
    return pTVar7;
  }
  bVar6 = FNameBatchLoader::Read((FNameBatchLoader *)this,param_1);
  if (bVar6) {
    if ((this == (FNameBatchAsyncLoader *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)> *)
               (*pcVar5)();
      return pTVar7;
    }
    if (((param_2 == 0) || (uVar1 = (uint)this->_padding_, uVar1 < 0x100)) || ((int)uVar1 < 0x7531))
    {
      if ((this == (FNameBatchAsyncLoader *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TFunction<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>___cdecl(void)> *
                 )(*pcVar5)();
        return pTVar7;
      }
      pTVar10 = FNameBatchLoader::Load((FNameBatchLoader *)this,&local_58);
      pFVar4 = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar10->ArrayNum;
      iVar3 = pTVar10->ArrayMax;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &UE::Core::Private::Function::
            TFunction_OwnedObject<`LoadNameBatchAsync'::`17'::<lambda_3>,0,0>::_vftable_;
      *(FScriptContainerElement **)&__return_storage_ptr__->field_0x18 = pFVar4;
      *(int *)&__return_storage_ptr__->field_0x20 = iVar2;
      *(int *)&__return_storage_ptr__->field_0x24 = iVar3;
      if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
        *(code **)__return_storage_ptr__ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`LoadNameBatchAsync'::__l17::<lambda_3>,TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_>
             ::Call;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    else {
      pFVar9 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      this->DoneEvent = pFVar9;
      TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Out,(int)this->_padding_,Default);
      local_48._0_8_ = 0;
      local_48._40_8_ = 0;
      if (pFVar11 != (FNameBatchAsyncLoader *)0x0) {
        LOCK();
        *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
        UNLOCK();
      }
      local_78.Loader.Object = this;
      local_78.Loader.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar11;
      Async<_LoadNameBatchAsync_::__l15::<lambda_1>_>
                ((TFuture<void> *)local_68,TaskGraph,&local_78,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.Loader.SharedReferenceCount.ReferenceController);
      if (pFVar11 != (FNameBatchAsyncLoader *)0x0) {
        LOCK();
        *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
        UNLOCK();
      }
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &UE::Core::Private::Function::
            TFunction_OwnedObject<`LoadNameBatchAsync'::`15'::<lambda_2>,0,0>::_vftable_;
      *(FNameBatchAsyncLoader **)&__return_storage_ptr__->field_0x18 = this;
      *(FNameBatchAsyncLoader **)&__return_storage_ptr__->field_0x20 = pFVar11;
      if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
        *(code **)__return_storage_ptr__ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`LoadNameBatchAsync'::__l15::<lambda_2>,TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_>
             ::Call;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &
         ___7__TFunction_OwnedObject_P6A_AV__TArray_VFDisplayNameEntryId__V__TSizedDefaultAllocator__0CA_____XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&__return_storage_ptr__->field_0x18 =
         `LoadNameBatchAsync'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
    if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_(__cdecl*)(void),TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_>_>
           ::Call;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return __return_storage_ptr__;
}

// LoadNameHeader @ 141a892d0

FNameSerializedView * __cdecl
LoadNameHeader(FNameSerializedView *__return_storage_ptr__,uchar **param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = *param_1;
  bVar2 = *pbVar3;
  pbVar1 = pbVar3 + 2;
  uVar4 = (bVar2 & 0x7f) * 0x100 + (uint)pbVar3[1];
  __return_storage_ptr__->Len = uVar4;
  if ((char)bVar2 < '\0') {
    __return_storage_ptr__->bIsUtf16 = true;
    (__return_storage_ptr__->field0_0x0).Data = pbVar1 + ((uint)pbVar1 & 1);
    *param_1 = pbVar1 + ((uint)pbVar1 & 1) + (ulonglong)uVar4 * 2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsUtf16 = false;
  *param_1 = pbVar1 + uVar4;
  (__return_storage_ptr__->field0_0x0).Data = pbVar1;
  return __return_storage_ptr__;
}

// LoadSeparatedNameBatchInInputOrder @ 141a89330

void __cdecl
LoadSeparatedNameBatchInInputOrder
          (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *param_1,ulong64 *param_2,
          TArrayView<FSerializedNameHeader_const_,int> *param_3,
          TArrayView<unsigned_char_const_,int> *param_4)

{
  FSerializedNameHeader *pFVar1;
  code *pcVar2;
  uchar *puVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  ulonglong uVar7;
  byte bVar8;
  FSerializedNameHeader *pFVar9;
  uint uVar10;
  undefined4 local_res8 [2];
  ulong64 *local_res10;
  ulonglong uVar11;
  
  local_res10 = param_2;
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Out.Num() == Headers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x137e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = param_3->DataPtr;
  pFVar1 = pFVar9 + param_3->ArrayNum;
  puVar3 = param_4->DataPtr;
  uVar4 = 0;
  while( true ) {
    if (pFVar9 == pFVar1) {
      if ((puVar3 != param_4->DataPtr + param_4->ArrayNum) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("StringIt == Strings.end()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,4999,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
    bVar8 = (byte)*(ushort *)pFVar9->Data;
    uVar10 = (bVar8 & 0x7f) * 0x100 + (uint)(*(ushort *)pFVar9->Data >> 8);
    uVar11 = (ulonglong)uVar10;
    uVar7 = (ulonglong)(uVar10 * 2);
    if (-1 < (char)bVar8) {
      uVar7 = uVar11;
    }
    if ((char)bVar8 < '\0') {
      BatchLoadNameWithHash<wchar_t>((wchar_t *)local_res8,(uint)puVar3,uVar11);
    }
    else {
      BatchLoadNameWithHash<char>((char *)local_res8,(uint)puVar3,uVar11);
    }
    uVar5 = local_res8[0];
    uVar10 = 0;
    if ((int)uVar4 < param_1->ArrayNum) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar9 = pFVar9 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 4) = uVar5;
    puVar3 = puVar3 + uVar7;
    uVar4 = uVar4 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// LoadSeparatedNameBatchInShardOrder @ 141a894e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
LoadSeparatedNameBatchInShardOrder
          (TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *param_1,ulong64 *param_2,
          TArrayView<FSerializedNameHeader_const_,int> *param_3,
          TArrayView<unsigned_char_const_,int> *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ushort uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  ulonglong uVar21;
  undefined1 auStack_1168 [32];
  longlong local_1148;
  longlong local_1140;
  ushort local_1138;
  ushort local_1136;
  int local_1134;
  uchar *local_1130;
  TArray<FNameLoad<1>,TSizedDefaultAllocator<32>_> local_1128;
  ulonglong *local_1118;
  TArrayView<FSerializedNameHeader_const_,int> *local_1110;
  FNameLoad<1> *local_1108;
  uint uStack_1100;
  undefined4 uStack_10fc;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_10f8;
  ulonglong local_10e8;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *local_10e0;
  TArrayView<unsigned_char_const_,int> *local_10d8;
  ulonglong local_10d0;
  longlong local_10c8;
  FScriptContainerElement *local_10c0;
  undefined8 uStack_10b8;
  undefined4 local_10b0;
  undefined4 uStack_10ac;
  uint uStack_10a8;
  ushort uStack_10a4;
  undefined2 uStack_10a2;
  FScriptContainerElement *local_10a0;
  undefined2 uStack_1098;
  undefined6 uStack_1096;
  TArrayView<FNameLoad<1>,int> local_1088;
  undefined2 local_106a;
  undefined2 local_105a;
  undefined8 local_1058;
  uint local_1050 [1022];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x141a894ff;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_1168;
  local_1118 = param_2;
  local_1110 = param_3;
  local_10e0 = param_1;
  local_10d8 = param_4;
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Out.Num() == Headers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1415,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  memset(&local_1058,0,0x1000);
  iVar3 = param_3->ArrayNum;
  uVar13 = 0;
  if (0 < iVar3) {
    pbVar20 = (byte *)((longlong)param_2 + 4);
    uVar21 = uVar13;
    do {
      bVar8 = *pbVar20;
      uVar12 = (uint)uVar13;
      *(int *)(&local_1058 + (ulonglong)bVar8 * 2) =
           *(int *)(&local_1058 + (ulonglong)bVar8 * 2) + 1;
      uVar19 = 0;
      if ((int)uVar12 < iVar3) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_1140 = (longlong)iVar3;
        local_1148 = (longlong)(int)uVar12;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar2 = param_3->DataPtr->Data[uVar21];
      iVar11 = (bVar2 & 0x7f) * 0x100 + (uint)param_3->DataPtr->Data[uVar21 + 1];
      iVar5 = iVar11 * 2;
      if (-1 < (char)bVar2) {
        iVar5 = iVar11;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      piVar1 = (int *)((longlong)&local_1058 + (ulonglong)bVar8 * 0x10 + 4);
      *piVar1 = *piVar1 + iVar5;
      pbVar20 = pbVar20 + 8;
      uVar21 = uVar21 + 2;
      param_4 = local_10d8;
      param_2 = local_1118;
    } while ((int)(uVar12 + 1) < iVar3);
  }
  uVar18 = 0;
  puVar10 = local_1050 + 1;
  uVar19 = uVar18;
  uVar12 = uVar18;
  do {
    puVar10[-1] = uVar19;
    uVar19 = uVar19 + puVar10[-3];
    *puVar10 = uVar12;
    uVar12 = uVar12 + puVar10[-2];
    puVar14 = (ulonglong *)(puVar10 + 1);
    puVar10 = puVar10 + 4;
  } while (puVar14 != local_58);
  if ((uVar19 != param_3->ArrayNum) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("NumNames == Headers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1439,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((uVar12 != param_4->ArrayNum) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("NumBytes == Strings.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x143a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1128.ArrayNum = 0;
  local_1128.ArrayMax = 0;
  local_10f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10f8.ArrayNum = 0;
  local_10f8.ArrayMax = 0;
  TArray<FNameLoad<1>,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1128,uVar19,Default);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_10f8,uVar12,Default)
  ;
  local_1130 = param_4->DataPtr;
  if (uVar19 != 0) {
    do {
      uVar12 = 0;
      if ((int)uVar18 < param_3->ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_1148 = (longlong)(int)uVar18;
        local_1140 = (longlong)param_3->ArrayNum;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_1136 = *(ushort *)param_3->DataPtr[(int)uVar18].Data;
      local_1138 = local_1136 >> 8;
      uVar13 = *param_2;
      local_10d0 = uVar13 >> 0x20 & 0xff;
      local_10c8 = local_10d0 * 0x10;
      uVar12 = local_1050[local_10d0 * 4 + 1];
      uVar9 = 0;
      if ((int)uVar12 < local_10f8.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      local_10e8 = uVar13;
      if ((uVar9 == 0) &&
         (local_1148 = (longlong)(int)uVar12, local_1140 = (longlong)local_10f8.ArrayNum,
         bVar7 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1108 = (FNameLoad<1> *)(local_10f8.AllocatorInstance.Data + (int)uVar12);
      local_1134 = (local_1136 & 0x7f) * 0x100 + (uint)local_1138;
      bVar8 = (byte)local_1136 >> 7;
      local_1138 = CONCAT11(local_1138._1_1_,bVar8);
      uStack_10fc = CONCAT31(uStack_10fc._1_3_,bVar8);
      uVar12 = (((int)(char)(byte)local_1136 >> 7 & 1U) + 1) * local_1134;
      uStack_1100 = local_1134;
      memcpy(local_1108,local_1130,(ulonglong)uVar12);
      iVar3 = local_1134;
      local_1130 = local_1130 + uVar12;
      uStack_10b8 = CONCAT44(uStack_10fc,uStack_1100);
      local_10c0 = (FScriptContainerElement *)local_1108;
      uStack_10a8 = (uint)(uVar13 >> 0x20);
      uVar15 = (ushort)(uVar13 >> 0x28);
      if ((char)local_1136 < '\0') {
        uStack_10a8 = uStack_10a8 & 0xe0000000;
        uStack_10a4 = (uVar15 & 0x1f | (short)local_1134 << 5) * 2 | 1;
        uStack_10a2 = local_106a;
      }
      else {
        uVar12 = 0;
        if (local_1134 == 4) {
          uVar12 = (uint)((*(uint *)local_1108 & 0xdfdfdfdf) == 0x454e4f4e);
        }
        uStack_10a8 = uVar12 << 0x1d | uStack_10a8 & 0xe0000000;
        uStack_10a4 = (uVar15 & 0x1f | (short)local_1134 << 5) * 2;
        uStack_10a2 = local_105a;
      }
      local_10b0 = (undefined4)local_10d0;
      uStack_10ac = (undefined4)local_10e8;
      uVar12 = 0;
      if ((int)uVar18 < local_10e0->ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_1148 = (longlong)(int)uVar18, local_1140 = (longlong)local_10e0->ArrayNum,
         bVar7 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = local_10c8;
      uStack_1098 = 0;
      local_10a0 = (local_10e0->AllocatorInstance).Data + (longlong)(int)uVar18 * 4;
      uVar12 = *(uint *)((longlong)local_1050 + local_10c8);
      lVar16 = (longlong)(int)uVar12;
      uVar9 = 0;
      if ((int)uVar12 < local_1128.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_1148 = lVar16, local_1140 = (longlong)local_1128.ArrayNum,
         bVar7 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = uVar18 + 1;
      *(FScriptContainerElement **)&local_1128.AllocatorInstance.Data[lVar16 * 0x30].field_0x0 =
           local_10c0;
      *(undefined8 *)(local_1128.AllocatorInstance.Data + lVar16 * 0x30 + 8) = uStack_10b8;
      *(ulonglong *)(local_1128.AllocatorInstance.Data + lVar16 * 0x30 + 0x10) =
           CONCAT44(uStack_10ac,local_10b0);
      *(ulonglong *)(local_1128.AllocatorInstance.Data + lVar16 * 0x30 + 0x10 + 8) =
           CONCAT26(uStack_10a2,CONCAT24(uStack_10a4,uStack_10a8));
      *(FScriptContainerElement **)(local_1128.AllocatorInstance.Data + lVar16 * 0x30 + 0x20) =
           local_10a0;
      *(longlong *)(local_1128.AllocatorInstance.Data + lVar16 * 0x30 + 0x20 + 8) =
           CONCAT62(uStack_1096,uStack_1098);
      piVar1 = (int *)((longlong)local_1050 + lVar6);
      *piVar1 = *piVar1 + 1;
      param_2 = local_1118 + 1;
      piVar1 = (int *)((longlong)local_1050 + lVar6 + 4);
      *piVar1 = *piVar1 + ((byte)local_1138 + 1) * iVar3;
      param_3 = local_1110;
      param_4 = local_10d8;
      local_1118 = param_2;
    } while (uVar18 < uVar19);
  }
  if ((local_1130 != param_4->DataPtr + param_4->ArrayNum) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("UnsortedStringsIt == Strings.end()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x1458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar14 = &local_1058;
  FVar17.Data = local_1128.AllocatorInstance.Data;
  do {
    uStack_1100 = (uint)*puVar14;
    local_1108 = (FNameLoad<1> *)FVar17.Data;
    if (((int)uStack_1100 < 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1088._12_4_ = uStack_10fc;
    local_1088.ArrayNum = uStack_1100;
    local_1088.DataPtr = local_1108;
    FVar17.Data = FVar17.Data + (ulonglong)(uint)*puVar14 * 0x30;
    FNamePoolShard<1>::InsertBatch
              ((FNamePoolShard<1> *)
               (NamePoolData +
               ((longlong)puVar14 - (longlong)&local_1058 >> 4 & 0xffffffffU) * 0x40 + 0x10040),
               &local_1088);
    puVar14 = puVar14 + 2;
  } while (puVar14 != local_58);
  if (((FNameLoad<1> *)FVar17.Data !=
       (FNameLoad<1> *)(local_1128.AllocatorInstance.Data + (longlong)local_1128.ArrayNum * 0x30))
     && (bVar7 = FDebug::CheckVerifyFailedImpl2
                           ("LoadIt == ShardSortedLoads.GetData() + ShardSortedLoads.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                            ,0x1463,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_10f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10f8.AllocatorInstance.Data);
  }
  if (local_1128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1128.AllocatorInstance.Data);
  }
  return;
}

// ReserveNameBatch @ 141a8fff0

void __cdecl ReserveNameBatch(uint param_1,uint param_2)

{
  FNamePool::Reserve((FNamePool *)NamePoolData,(uint)(((ulonglong)param_1 * 6) / 5),
                     (uint)(((ulonglong)((param_2 >> 3) - 1) * 6) / 5));
  return;
}

// SaveNameBatch @ 141a90c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SaveNameBatch(TArrayView<FDisplayNameEntryId_const_,int> *param_1,
             TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
             TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  FDisplayNameEntryId *pFVar5;
  ushort uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulong64 uVar10;
  int iVar11;
  FScriptContainerElement *this;
  wchar_t *_Src;
  ushort *puVar12;
  size_t _Size;
  uint uVar13;
  FDisplayNameEntryId *pFVar14;
  undefined1 auStackY_8c8 [32];
  bool local_898;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  iVar11 = param_1->ArrayNum;
  uVar13 = iVar11 * 0x28;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_2->ArrayMax;
  piVar2 = &param_2->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar13,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar13 = iVar11 * 8 + 8;
  if (-1 < (int)uVar13) {
    piVar3 = &param_3->ArrayMax;
    piVar4 = &param_3->ArrayNum;
    *piVar4 = 0;
    if (*piVar3 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar13,&param_3->AllocatorInstance,0,piVar3);
    }
    if (((*piVar4 & 7) != 0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Out.Num() % alignof(T) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                           ,0x1270,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,8,&param_3->AllocatorInstance,piVar4,piVar3);
    pFVar14 = param_1->DataPtr;
    *(undefined8 *)((param_3->AllocatorInstance).Data + uVar13) = 0xc1640000;
    pFVar5 = pFVar14 + param_1->ArrayNum;
    while( true ) {
      if (pFVar14 == pFVar5) {
        return;
      }
      uVar13 = (pFVar14->Id).Value;
      puVar12 = (ushort *)
                (*(longlong *)(NamePoolData + (ulonglong)(uVar13 >> 0x10) * 8 + 0x10) +
                (ulonglong)((uVar13 & 0xffff) * 2));
      if ((*puVar12 < 0x40) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Header.Len != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x976,L""), bVar8)) break;
      uVar6 = *puVar12;
      _Src = (wchar_t *)(puVar12 + 1);
      uVar13 = (uint)(uVar6 >> 6);
      if ((*puVar12 & 1) == 0) {
        if (_Src == (wchar_t *)0x0) {
          memcpy(local_848,(void *)0x0,(ulonglong)(uVar6 >> 6));
          _Src = local_848;
        }
        bVar8 = false;
        iVar11 = 1;
        _Size = 0;
        local_898 = false;
      }
      else {
        if (_Src == (wchar_t *)0x0) {
          memcpy(local_848,(void *)0x0,(ulonglong)(uVar6 >> 6) * 2);
          _Src = local_848;
        }
        bVar8 = true;
        _Size = (size_t)(*piVar2 & 1);
        local_898 = true;
        iVar11 = 2;
      }
      uVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar13 * iVar11 + 2 + (int)_Size,&param_2->AllocatorInstance,piVar2,
                         piVar1);
      this = (param_2->AllocatorInstance).Data + uVar9;
      FSerializedNameHeader::FSerializedNameHeader((FSerializedNameHeader *)this,uVar13,local_898);
      memset(this + 2,0,_Size);
      memcpy(this + 2 + _Size,_Src,(ulonglong)(uVar13 * iVar11));
      if (bVar8) {
        uVar10 = GenerateLowerCaseHash<wchar_t>(_Src,uVar13);
      }
      else {
        uVar10 = GenerateLowerCaseHash<char>((char *)_Src,uVar13);
      }
      if (((*piVar4 & 7) != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Out.Num() % alignof(T) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x1270,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,8,&param_3->AllocatorInstance,piVar4,piVar3);
      pFVar14 = pFVar14 + 1;
      *(ulong64 *)((param_3->AllocatorInstance).Data + uVar13) = uVar10;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
}

// SaveNameBatch @ 141a90ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SaveNameBatch(TArrayView<FDisplayNameEntryId_const_,int> *param_1,FArchive *param_2)

{
  FDisplayNameEntryId *pFVar1;
  ushort uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  byte bVar8;
  ushort *puVar9;
  longlong lVar10;
  wchar_t *_Src;
  uint uVar11;
  uint uVar12;
  FDisplayNameEntryId *pFVar13;
  undefined1 auStackY_8f8 [32];
  undefined2 local_8a8 [2];
  uint local_8a4;
  ForAnyElementType local_8a0;
  undefined8 local_898;
  ForAnyElementType local_890;
  undefined8 local_888;
  ForAnyElementType local_880;
  undefined8 local_878;
  uint local_870 [2];
  ulong64 local_868;
  ulong64 local_860;
  uint local_858;
  uint uStack_854;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  local_8a4 = param_1->ArrayNum;
  lVar10 = (longlong)(int)local_8a4;
  plVar3 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_8a4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_8a4);
    }
  }
  else {
    local_8a4 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar7 = (ulong64)local_8a4;
  if (local_8a4 != 0) {
    local_880.Data = (FScriptContainerElement *)0x0;
    local_898._4_4_ = 0;
    local_878 = 0;
    local_8a0.Data = (FScriptContainerElement *)0x0;
    local_898 = 0;
    local_890.Data = (FScriptContainerElement *)0x0;
    local_888 = 0;
    if ((int)local_8a4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    local_898._0_4_ = local_898._4_4_;
    if (0 < (int)local_8a4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_8a4,&local_880,0,(int *)((longlong)&local_878 + 4));
      uVar7 = (ulong64)local_8a4;
    }
    uVar12 = (uint)uVar7;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    if (local_898._4_4_ < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,uVar12,&local_8a0,(int)local_898,(int *)((longlong)&local_898 + 4));
      uVar12 = local_8a4;
    }
    uVar11 = uVar12 * 0x28;
    if ((int)(uVar12 * 0x28) < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (local_888._4_4_ < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar11,&local_890,(uint)local_888,(int *)((longlong)&local_888 + 4));
    }
    pFVar13 = param_1->DataPtr;
    pFVar1 = pFVar13 + lVar10;
    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
      uVar12 = (pFVar13->Id).Value;
      local_858 = uVar12 >> 0x10;
      uStack_854 = uVar12 & 0xffff;
      puVar9 = (ushort *)
               (*(longlong *)(NamePoolData + (ulonglong)local_858 * 8 + 0x10) +
               (ulonglong)((uVar12 & 0xffff) * 2));
      if ((*puVar9 < 0x40) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Header.Len != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x976,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *puVar9;
      _Src = (wchar_t *)(puVar9 + 1);
      uVar12 = (uint)(uVar2 >> 6);
      if ((*puVar9 & 1) == 0) {
        if (_Src == (wchar_t *)0x0) {
          memcpy(local_848,(void *)0x0,(ulonglong)(uVar2 >> 6));
          _Src = local_848;
        }
        local_868 = GenerateLowerCaseHash<char>((char *)_Src,uVar12);
        bVar8 = 0;
      }
      else {
        if (_Src == (wchar_t *)0x0) {
          memcpy(local_848,(void *)0x0,(ulonglong)(uVar2 >> 6) * 2);
          _Src = local_848;
        }
        local_868 = GenerateLowerCaseHash<wchar_t>(_Src,uVar12);
        bVar8 = 1;
      }
      if (((local_880.Data <= (FScriptContainerElement *)&local_868) &&
          ((FScriptContainerElement *)&local_868 < local_880.Data + (longlong)local_878._4_4_ * 8))
         && (bVar5 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_878;
      if ((int)local_878 == local_878._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_880,(int *)((longlong)&local_878 + 4));
      }
      local_878 = CONCAT44(local_878._4_4_,iVar6 + 1);
      *(ulong64 *)(local_880.Data + (longlong)iVar6 * 8) = local_868;
      local_8a8[0] = CONCAT11((char)(uVar2 >> 6),(byte)(uVar2 >> 0xe) | bVar8 << 7);
      if (((local_8a0.Data <= (FScriptContainerElement *)local_8a8) &&
          ((FScriptContainerElement *)local_8a8 < local_8a0.Data + (longlong)local_898._4_4_ * 2))
         && (bVar5 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_898;
      if ((int)local_898 == local_898._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x102,&local_8a0,(int *)((longlong)&local_898 + 4));
      }
      local_898 = CONCAT44(local_898._4_4_,iVar6 + 1);
      uVar12 = (bVar8 + 1) * uVar12;
      *(undefined2 *)(local_8a0.Data + (longlong)iVar6 * 2) = local_8a8[0];
      if (((_Src == (wchar_t *)0x0) && (uVar12 != 0)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar12,&local_890,(int *)&local_888,(int *)((longlong)&local_888 + 4));
      if (uVar12 != 0) {
        memcpy(local_890.Data + iVar6,_Src,(ulonglong)uVar12);
      }
    }
    plVar3 = *(longlong **)&param_2->field_0x8;
    local_870[0] = (uint)local_888;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_870,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_870);
      }
    }
    else {
      local_870[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_2->field_0x8;
    local_860 = 0xc1640000;
    if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_860,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_860);
      }
    }
    else {
      local_860 = *(ulong64 *)*plVar3;
      *plVar3 = *plVar3 + 8;
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_880.Data,local_8a4 * 8);
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_8a0.Data,local_8a4 * 2);
    (**(code **)(*(longlong *)param_2 + 0x188))
              (param_2,local_890.Data,(longlong)(int)(uint)local_888);
    if (local_890.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.Data);
    }
    if (local_8a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.Data);
    }
    if (local_880.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_880.Data);
    }
  }
  return;
}

// ShouldReplicateAsInteger @ 141a92240

bool __cdecl ShouldReplicateAsInteger(EName param_1,FName *param_2)

{
  if ((param_1 < FrameRate) && (param_2->Number == 0)) {
    return true;
  }
  return false;
}

// TCharToNibble @ 141a94240

uchar __cdecl TCharToNibble(wchar_t param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uchar uVar4;
  
  cVar2 = (char)param_1;
  if ((ushort)(param_1 + L'￐') < 10) {
    return cVar2 + 0xd0;
  }
  if ((ushort)(param_1 + L'﾿') < 6) {
    return cVar2 + 0xc9;
  }
  if ((ushort)(param_1 + L'ﾟ') < 6) {
    return cVar2 + 0xa9;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h"
                     ,0x91,L"\'%c\' (0x%02X) is not a valid hexadecimal digit");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  return '\0';
}

// TestNameBatch @ 141a94f70

void __cdecl TestNameBatch(void)

{
  int iVar1;
  ForAnyElementType *pFVar2;
  ushort uVar3;
  wchar_t wVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  FLowLevelMemTracker *this;
  wchar_t *pwVar12;
  FNameEntryIds FVar13;
  size_t sVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  ushort uVar17;
  ushort uVar18;
  char cVar19;
  uchar *puVar20;
  longlong lVar21;
  ForAnyElementType *pFVar22;
  longlong lVar23;
  char cVar24;
  ushort uVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  char local_res18;
  char local_res19;
  undefined1 local_res1a;
  undefined4 local_res20;
  undefined4 local_res24;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_528;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_518;
  uint local_508;
  undefined4 local_504;
  int local_500;
  undefined4 local_4fc;
  int local_4f8;
  undefined4 local_4f4;
  uint local_4f0;
  int local_4ec;
  uint local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0 [2];
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_4c8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_4b8;
  FScriptContainerElement *local_4a8;
  int iStack_4a0;
  undefined4 uStack_49c;
  FString local_498;
  ForAnyElementType local_488;
  int local_480;
  int local_47c [3];
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_470;
  FString local_460;
  char *local_448;
  undefined8 uStack_440;
  undefined1 local_438 [12];
  undefined4 local_42c;
  undefined1 local_428 [12];
  undefined4 local_41c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_418;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_408;
  undefined1 local_3f8 [12];
  undefined4 local_3ec;
  ForAnyElementType local_3e8;
  int local_3e0;
  int local_3dc;
  ForAnyElementType local_3d8;
  int local_3d0;
  int local_3cc;
  ForAnyElementType local_3c8;
  int aiStack_3c0 [2];
  char *local_3b8;
  int aiStack_3b0 [2];
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  char *local_398;
  int aiStack_390 [2];
  FString local_388;
  char *local_378;
  int aiStack_370 [2];
  char *local_368;
  int iStack_360;
  uint uStack_35c;
  FScriptContainerElement *local_358;
  int iStack_350;
  uint uStack_34c;
  char *local_348;
  undefined8 uStack_340;
  char *local_338;
  int iStack_330;
  uint uStack_32c;
  char *local_328;
  int iStack_320;
  uint uStack_31c;
  char *local_318;
  int iStack_310;
  uint uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  int iStack_2f0;
  uint uStack_2ec;
  char *local_2e8;
  undefined8 uStack_2e0;
  char *local_2d8;
  int iStack_2d0;
  uint uStack_2cc;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  FScriptContainerElement *local_298;
  undefined8 uStack_290;
  FScriptContainerElement *local_288;
  undefined8 uStack_280;
  FScriptContainerElement *local_278;
  undefined8 uStack_270;
  FScriptContainerElement *local_268;
  undefined8 uStack_260;
  FScriptContainerElement *local_258;
  undefined8 uStack_250;
  FScriptContainerElement *local_248;
  undefined8 uStack_240;
  FScriptContainerElement *local_238;
  undefined8 uStack_230;
  FScriptContainerElement *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  TArrayView<FDisplayNameEntryId_const_,int> local_1a8;
  TArrayView<unsigned_char_const_,int> local_198;
  FScriptContainerElement *local_188;
  undefined8 uStack_180;
  FScriptContainerElement *local_178;
  undefined8 uStack_170;
  FScriptContainerElement *local_168;
  undefined8 uStack_160;
  FScriptContainerElement *local_158;
  undefined8 uStack_150;
  FScriptContainerElement *local_148;
  undefined8 uStack_140;
  FNameStringView_u_0 local_138;
  ulonglong uStack_130;
  FScriptContainerElement *local_128;
  undefined8 uStack_120;
  FNameStringView_u_0 local_118;
  ulonglong uStack_110;
  FScriptContainerElement *local_108;
  undefined8 uStack_100;
  FNameStringView_u_0 local_f8;
  ulonglong uStack_f0;
  TArrayView<unsigned_char_const_,int> local_e8;
  FNameStringView_u_0 local_d8;
  ulonglong uStack_d0;
  FNameStringView_u_0 local_c8;
  ulonglong uStack_c0;
  TArrayView<FDisplayNameEntryId_const_,int> local_b8;
  TArrayView<unsigned_char_const_,int> local_a8;
  TArrayView<unsigned_char_const_,int> local_98;
  TArrayView<unsigned_char_const_,int> local_88;
  TArrayView<unsigned_char_const_,int> local_78;
  TArrayView<FDisplayNameEntryId_const_,int> local_68;
  TArrayView<FDisplayNameEntryId_const_,int> local_58;
  FNameStringView_u_0 local_48;
  ulonglong uStack_40;
  FNameStringView_u_0 local_38;
  ulonglong uStack_30;
  
  uVar25 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8._8_8_ = (ulonglong)uStack_1ac << 0x20;
  local_1a8.DataPtr = (FDisplayNameEntryId *)0x0;
  local_528.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.ArrayNum = 0;
  local_528.ArrayMax = 0;
  local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b8.ArrayNum = 0;
  local_4b8.ArrayMax = 0;
  local_518.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_518.ArrayNum = 0;
  local_518.ArrayMax = 0;
  SaveNameBatch(&local_1a8,&local_4b8,&local_518);
  if ((local_4b8.ArrayNum != 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("NameData.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x158a,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar16.Data = local_518.AllocatorInstance.Data;
  iVar9 = local_518.ArrayNum;
  if ((local_518.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6.Data = local_4b8.AllocatorInstance.Data;
  iStack_2b0 = iVar9;
  iVar9 = local_4b8.ArrayNum;
  local_2b8 = FVar16.Data;
  if ((local_4b8.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_198._12_4_ = uStack_2ac;
  local_198.ArrayNum = iStack_2b0;
  local_2a8 = FVar6.Data;
  iStack_2a0 = iVar9;
  local_e8._12_4_ = uStack_29c;
  local_e8.ArrayNum = iVar9;
  local_e8.DataPtr = (uchar *)FVar6.Data;
  local_198.DataPtr = (uchar *)local_2b8;
  LoadNameBatch(&local_528,&local_e8,&local_198,None);
  iVar9 = 0;
  if (local_528.ArrayNum != 0) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Names.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x158c,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_528.ArrayNum;
  }
  local_4e0 = 0;
  if ((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e0) &&
     ((FScriptContainerElement *)&local_4e0 <
      local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_528.ArrayNum;
  }
  if (iVar9 == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  bVar8 = bNamePoolInitialized == false;
  *(undefined4 *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4e0;
  local_528.ArrayNum = iVar9 + 1;
  if (bVar8) {
    puVar20 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  else {
    puVar20 = NamePoolData;
  }
  local_508 = ((FNamePool *)puVar20)->ENameToEntry[0x35].Value;
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_508) &&
      ((FScriptContainerElement *)&local_508 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  local_528.ArrayNum = iVar9 + 1;
  *(uint *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_508;
  local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.Data.ArrayNum = 0;
  local_498.Data.ArrayMax = 0;
  FString::Reserve(&local_498,0x400);
  while( true ) {
    iVar9 = local_498.Data.ArrayNum + -1;
    if (local_498.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (0x3ff < iVar9) break;
    FString::AppendChars(&local_498,"0123456789ABCDEF",0x10);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_498.Data.ArrayNum != 0) {
    FVar16.Data = local_498.Data.AllocatorInstance.Data;
  }
  FString::ConstructFromPtrSize(&local_388,(wchar_t *)FVar16.Data,0x3ff);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  iVar9 = local_388.Data.ArrayNum;
  FVar16.Data = local_388.Data.AllocatorInstance.Data;
  local_498.Data.ArrayNum = local_388.Data.ArrayNum;
  lVar23 = 2;
  local_498.Data.AllocatorInstance.Data = local_388.Data.AllocatorInstance.Data;
  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.Data.ArrayNum = 0;
  local_388.Data.ArrayMax = 0;
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480 = iVar9;
  if (iVar9 == 0) {
    local_47c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_488,iVar9,local_47c);
    memcpy(local_488.Data,FVar16.Data,(longlong)iVar9 * 2);
  }
  FVar11.Value = 0;
  uVar10 = local_480 - 1;
  if (local_480 == 0) {
    uVar10 = FVar11.Value;
  }
  if (((int)uVar10 < 0xc9) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar16.Data = local_498.Data.AllocatorInstance.Data;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  *(undefined2 *)(local_488.Data + 400) = 500;
  local_3e0 = local_498.Data.ArrayNum;
  if (local_498.Data.ArrayNum == 0) {
    local_3dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_498.Data.ArrayNum,0,&local_3e8,local_498.Data.ArrayNum,&local_3dc);
    memcpy(local_3e8.Data,FVar16.Data,(longlong)local_498.Data.ArrayNum * 2);
  }
  FVar16.Data = local_488.Data;
  lVar21 = (longlong)local_480;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = local_480;
  if (local_480 == 0) {
    local_3cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_480,0,&local_3d8,local_480,&local_3cc);
    memcpy(local_3d8.Data,FVar16.Data,lVar21 * 2);
  }
  pFVar22 = &local_3e8;
  do {
    uVar17 = 0;
    if (*(int *)&pFVar22[1].Data == 0) {
      local_4a8 = (FScriptContainerElement *)0x15060d16c;
LAB_141a954c8:
      uVar3 = *(ushort *)local_4a8;
      pFVar15 = local_4a8;
      while (uVar18 = uVar17, uVar3 != 0) {
        pFVar15 = pFVar15 + 2;
        uVar17 = uVar17 | uVar3;
        uVar3 = *(ushort *)pFVar15;
      }
    }
    else {
      pFVar15 = pFVar22->Data;
      local_4a8 = pFVar15;
      uVar18 = uVar25;
      if (pFVar15 != (FScriptContainerElement *)0x0) goto LAB_141a954c8;
    }
    uStack_49c = CONCAT31(uStack_49c._1_3_,(uVar18 & 0xff80) != 0);
    iStack_4a0 = (int)((longlong)pFVar15 - (longlong)local_4a8 >> 1);
    uStack_290 = CONCAT44(uStack_49c,iStack_4a0);
    local_298 = local_4a8;
    if (iStack_4a0 == 0) {
      local_res24 = 0;
      local_res20 = 0;
    }
    else {
      UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_4a8,(int *)&uStack_290);
      local_188 = local_298;
      uStack_180 = uStack_290;
      FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)&local_res20,(EFindName)&local_188,1);
    }
    local_504 = local_res20;
    if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_504) &&
        ((FScriptContainerElement *)&local_504 <
         local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_528.ArrayNum;
    if (local_528.ArrayNum == local_528.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
    }
    *(undefined4 *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_504;
    if (*(int *)&pFVar22[1].Data == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)pFVar22->Data;
    }
    local_308 = (FScriptContainerElement *)((longlong)pwVar12 + 0x602);
    pFVar15 = local_308;
    uVar17 = uVar25;
    if (local_308 != (FScriptContainerElement *)0x0) {
      wVar4 = *(wchar_t *)local_308;
      while (wVar4 != L'\0') {
        pFVar15 = pFVar15 + 2;
        uVar17 = uVar17 | wVar4;
        wVar4 = *(wchar_t *)pFVar15;
      }
    }
    uStack_2fc = CONCAT31(uStack_2fc._1_3_,(uVar17 & 0xff80) != 0);
    iStack_300 = (int)((longlong)pFVar15 - (longlong)local_308 >> 1);
    uStack_280 = CONCAT44(uStack_2fc,iStack_300);
    local_288 = local_308;
    local_528.ArrayNum = iVar9 + 1;
    if (iStack_300 == 0) {
      local_42c._0_1_ = false;
      local_42c._1_3_ = 0;
      local_438._8_4_ = 0;
    }
    else {
      UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_308,(int *)&uStack_280);
      local_178 = local_288;
      uStack_170 = uStack_280;
      FNameHelper::MakeWithNumber
                ((FWideStringViewWithWidth *)(local_438 + 8),(EFindName)&local_178,1);
    }
    local_500 = local_438._8_4_;
    if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_500) &&
        ((FScriptContainerElement *)&local_500 <
         local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_528.ArrayNum == local_528.ArrayMax) {
      local_528.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
    }
    *(int *)(local_528.AllocatorInstance.Data + (longlong)local_528.ArrayNum * 4) = local_500;
    if (*(int *)&pFVar22[1].Data == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)pFVar22->Data;
    }
    local_2c8 = (FScriptContainerElement *)((longlong)pwVar12 + 0x600);
    pFVar15 = local_2c8;
    uVar17 = uVar25;
    if (local_2c8 != (FScriptContainerElement *)0x0) {
      wVar4 = *(wchar_t *)local_2c8;
      uVar17 = 0;
      while (wVar4 != L'\0') {
        pFVar15 = pFVar15 + 2;
        uVar17 = uVar17 | wVar4;
        wVar4 = *(wchar_t *)pFVar15;
      }
    }
    uStack_2bc = CONCAT31(uStack_2bc._1_3_,(uVar17 & 0xff80) != 0);
    iStack_2c0 = (int)((longlong)pFVar15 - (longlong)local_2c8 >> 1);
    uStack_270 = CONCAT44(uStack_2bc,iStack_2c0);
    local_278 = local_2c8;
    if (iStack_2c0 == 0) {
      local_428._4_4_ = 0;
      local_428._0_4_ = 0;
      local_528.ArrayNum = local_528.ArrayNum + 1;
    }
    else {
      local_528.ArrayNum = local_528.ArrayNum + 1;
      UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_2c8,(int *)&uStack_270);
      local_168 = local_278;
      uStack_160 = uStack_270;
      FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_428,(EFindName)&local_168,1);
    }
    local_4fc = local_428._0_4_;
    if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4fc) &&
        ((FScriptContainerElement *)&local_4fc <
         local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_528.ArrayNum == local_528.ArrayMax) {
      local_528.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
    }
    *(undefined4 *)(local_528.AllocatorInstance.Data + (longlong)local_528.ArrayNum * 4) = local_4fc
    ;
    if (*(int *)&pFVar22[1].Data == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)pFVar22->Data;
    }
    local_3a8 = (FScriptContainerElement *)((longlong)pwVar12 + 0x5fe);
    pFVar15 = local_3a8;
    uVar17 = uVar25;
    if (local_3a8 != (FScriptContainerElement *)0x0) {
      wVar4 = *(wchar_t *)local_3a8;
      while (wVar4 != L'\0') {
        pFVar15 = pFVar15 + 2;
        uVar17 = uVar17 | wVar4;
        wVar4 = *(wchar_t *)pFVar15;
      }
    }
    uStack_39c = CONCAT31(uStack_39c._1_3_,(uVar17 & 0xff80) != 0);
    iStack_3a0 = (int)((longlong)pFVar15 - (longlong)local_3a8 >> 1);
    uStack_260 = CONCAT44(uStack_39c,iStack_3a0);
    local_268 = local_3a8;
    if (iStack_3a0 == 0) {
      local_41c._0_1_ = false;
      local_41c._1_3_ = 0;
      local_428._8_4_ = 0;
      local_528.ArrayNum = local_528.ArrayNum + 1;
    }
    else {
      local_528.ArrayNum = local_528.ArrayNum + 1;
      UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_3a8,(int *)&uStack_260);
      local_158 = local_268;
      uStack_150 = uStack_260;
      FNameHelper::MakeWithNumber
                ((FWideStringViewWithWidth *)(local_428 + 8),(EFindName)&local_158,1);
    }
    local_4f8 = local_428._8_4_;
    if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f8) &&
        ((FScriptContainerElement *)&local_4f8 <
         local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = local_528.ArrayNum;
    if (local_528.ArrayNum == local_528.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
    }
    pFVar22 = pFVar22 + 2;
    local_528.ArrayNum = iVar9 + 1;
    *(int *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4f8;
  } while (pFVar22 != &local_3c8);
  pFVar22 = &local_3c8;
  do {
    pFVar2 = pFVar22 + -2;
    pFVar22 = pFVar22 + -2;
    lVar23 = lVar23 + -1;
    if (pFVar2->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2->Data);
    }
  } while (lVar23 != 0);
  FString::FString(&local_460,"Wide ");
  uVar10 = local_460.Data.ArrayNum - 1;
  if (local_460.Data.ArrayNum == 0) {
    uVar10 = FVar11.Value;
  }
  if (((int)uVar10 < 5) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(wchar_t *)(local_460.Data.AllocatorInstance.Data + 8) = L'\xea60';
  if (local_460.Data.ArrayNum == 0) {
    local_4a8 = (FScriptContainerElement *)0x15060d16c;
LAB_141a95b14:
    wVar4 = *(wchar_t *)local_4a8;
    FVar16.Data = local_4a8;
    uVar17 = 0;
    while (wVar4 != L'\0') {
      FVar16.Data = FVar16.Data + 2;
      uVar17 = uVar17 | wVar4;
      wVar4 = *(wchar_t *)FVar16.Data;
    }
  }
  else {
    local_4a8 = local_460.Data.AllocatorInstance.Data;
    FVar16.Data = local_460.Data.AllocatorInstance.Data;
    uVar17 = uVar25;
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141a95b14;
  }
  uStack_49c = CONCAT31(uStack_49c._1_3_,(uVar17 & 0xff80) != 0);
  iStack_4a0 = (int)((longlong)FVar16.Data - (longlong)local_4a8 >> 1);
  uStack_250 = CONCAT44(uStack_49c,iStack_4a0);
  local_258 = local_4a8;
  uVar10 = 0;
  if (iStack_4a0 == 0) {
    local_3f8._4_4_ = 0;
    local_3f8._0_4_ = 0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_4a8,(int *)&uStack_250);
    local_148 = local_258;
    uStack_140 = uStack_250;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_3f8,(EFindName)&local_148,1);
  }
  local_4f4 = local_3f8._0_4_;
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f4) &&
      ((FScriptContainerElement *)&local_4f4 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  aiStack_390[0] = 3;
  local_528.ArrayNum = iVar9 + 1;
  *(undefined4 *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4f4;
  local_398 = "odd";
  UE::Core::Private::ParseNumberFromName<char>("odd",aiStack_390);
  uVar7 = uStack_35c;
  iVar9 = aiStack_390[0];
  local_4f0 = uVar10;
  if (iVar9 != 0) {
    local_368 = local_398;
    uStack_35c = uStack_35c & 0xffffff00;
    uStack_130 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
    local_138.Data = local_398;
    iStack_360 = iVar9;
    FVar13 = FNameHelper::FindOrStoreString((FNameStringView *)&local_138,FNAME_Add);
    local_4f0 = (uint)FVar13.ComparisonId.Value;
  }
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f0) &&
      ((FScriptContainerElement *)&local_4f0 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  *(uint *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4f0;
  uVar17 = uVar25;
  if (local_460.Data.ArrayNum == 0) {
    local_4a8 = (FScriptContainerElement *)0x15060d16c;
LAB_141a95d9f:
    wVar4 = *(wchar_t *)local_4a8;
    FVar16.Data = local_4a8;
    while (wVar4 != L'\0') {
      FVar16.Data = FVar16.Data + 2;
      uVar17 = uVar17 | wVar4;
      wVar4 = *(wchar_t *)FVar16.Data;
    }
  }
  else {
    local_4a8 = local_460.Data.AllocatorInstance.Data;
    FVar16.Data = local_460.Data.AllocatorInstance.Data;
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_141a95d9f;
  }
  uStack_49c = CONCAT31(uStack_49c._1_3_,(uVar17 & 0xff80) != 0);
  iStack_4a0 = (int)((longlong)FVar16.Data - (longlong)local_4a8 >> 1);
  uStack_240 = CONCAT44(uStack_49c,iStack_4a0);
  local_248 = local_4a8;
  local_528.ArrayNum = iVar9 + 1;
  if (iStack_4a0 == 0) {
    local_3ec._0_1_ = false;
    local_3ec._1_3_ = 0;
    local_3f8._8_4_ = 0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_4a8,(int *)&uStack_240);
    local_128 = local_248;
    uStack_120 = uStack_240;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)(local_3f8 + 8),(EFindName)&local_128,1)
    ;
  }
  local_4ec = local_3f8._8_4_;
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4ec) &&
      ((FScriptContainerElement *)&local_4ec <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  aiStack_3c0[0] = 4;
  local_528.ArrayNum = iVar9 + 1;
  *(int *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4ec;
  local_3c8.Data = (FScriptContainerElement *)0x1506e7538;
  UE::Core::Private::ParseNumberFromName<char>("even",aiStack_3c0);
  uVar7 = uStack_34c;
  iVar9 = aiStack_3c0[0];
  local_4e8 = uVar10;
  if (iVar9 != 0) {
    local_358 = local_3c8.Data;
    uStack_34c = uStack_34c & 0xffffff00;
    uStack_110 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
    local_118.Data = local_3c8.Data;
    iStack_350 = iVar9;
    FVar13 = FNameHelper::FindOrStoreString((FNameStringView *)&local_118,FNAME_Add);
    local_4e8 = (uint)FVar13.ComparisonId.Value;
  }
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e8) &&
      ((FScriptContainerElement *)&local_4e8 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  *(uint *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4e8;
  if (local_460.Data.ArrayNum == 0) {
    local_4a8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_4a8 = local_460.Data.AllocatorInstance.Data;
    FVar16.Data = local_460.Data.AllocatorInstance.Data;
    if (local_460.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_141a96051;
  }
  wVar4 = *(wchar_t *)local_4a8;
  FVar16.Data = local_4a8;
  while (wVar4 != L'\0') {
    FVar16.Data = FVar16.Data + 2;
    uVar25 = uVar25 | wVar4;
    wVar4 = *(wchar_t *)FVar16.Data;
  }
LAB_141a96051:
  uStack_49c = CONCAT31(uStack_49c._1_3_,(uVar25 & 0xff80) != 0);
  iStack_4a0 = (int)((longlong)FVar16.Data - (longlong)local_4a8 >> 1);
  uStack_230 = CONCAT44(uStack_49c,iStack_4a0);
  local_238 = local_4a8;
  local_528.ArrayNum = iVar9 + 1;
  if (iStack_4a0 == 0) {
    local_438._4_4_ = 0;
    local_438._0_4_ = 0;
  }
  else {
    UE::Core::Private::ParseNumberFromName<wchar_t>((wchar_t *)local_4a8,(int *)&uStack_230);
    local_108 = local_238;
    uStack_100 = uStack_230;
    FNameHelper::MakeWithNumber((FWideStringViewWithWidth *)local_438,(EFindName)&local_108,1);
  }
  local_4e4 = local_438._0_4_;
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e4) &&
      ((FScriptContainerElement *)&local_4e4 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  uStack_440 = CONCAT44(uStack_440._4_4_,4);
  local_528.ArrayNum = iVar9 + 1;
  local_448 = "case";
  *(undefined4 *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4e4;
  local_348 = "case";
  uStack_340 = uStack_440;
  UE::Core::Private::ParseNumberFromName<char>("case",(int *)&uStack_340);
  uVar7 = uStack_32c;
  iVar9 = (int)uStack_340;
  if (iVar9 != 0) {
    local_338 = local_348;
    uStack_32c = uStack_32c & 0xffffff00;
    uStack_f0 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
    local_f8.Data = local_348;
    iStack_330 = iVar9;
    FNameHelper::FindOrStoreString((FNameStringView *)&local_f8,FNAME_Add);
  }
  uStack_440 = CONCAT44(uStack_440._4_4_,4);
  local_448 = "CASE";
  UE::Core::Private::ParseNumberFromName<char>("CASE",(int *)&uStack_440);
  uVar7 = uStack_31c;
  iVar9 = (int)uStack_440;
  local_4d0[0] = uVar10;
  if (iVar9 != 0) {
    local_328 = local_448;
    uStack_31c = uStack_31c & 0xffffff00;
    uStack_30 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
    local_38.Data = local_448;
    iStack_320 = iVar9;
    FVar13 = FNameHelper::FindOrStoreString((FNameStringView *)&local_38,FNAME_Add);
    local_4d0[0] = (uint)FVar13.ComparisonId.Value;
  }
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)local_4d0) &&
      ((FScriptContainerElement *)local_4d0 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  local_528.ArrayNum = iVar9 + 1;
  aiStack_3b0[0] = 4;
  *(uint *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4d0[0];
  local_3b8 = "case";
  UE::Core::Private::ParseNumberFromName<char>("case",aiStack_3b0);
  uVar7 = uStack_30c;
  iVar9 = aiStack_3b0[0];
  local_4dc = FVar11.Value;
  if (iVar9 != 0) {
    local_318 = local_3b8;
    uStack_30c = uStack_30c & 0xffffff00;
    uStack_d0 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
    local_d8.Data = local_3b8;
    iStack_310 = iVar9;
    FVar13 = FNameHelper::FindOrStoreString((FNameStringView *)&local_d8,FNAME_Add);
    local_4dc = (uint)FVar13.ComparisonId.Value;
  }
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4dc) &&
      ((FScriptContainerElement *)&local_4dc <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  aiStack_370[0] = 4;
  local_528.ArrayNum = iVar9 + 1;
  *(uint *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4dc;
  local_378 = "casE";
  UE::Core::Private::ParseNumberFromName<char>("casE",aiStack_370);
  uVar7 = uStack_2ec;
  iVar9 = aiStack_370[0];
  if (iVar9 != 0) {
    local_2f8 = local_378;
    uStack_2ec = uStack_2ec & 0xffffff00;
    uStack_c0 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
    local_c8.Data = local_378;
    iStack_2f0 = iVar9;
    FVar13 = FNameHelper::FindOrStoreString((FNameStringView *)&local_c8,FNAME_Add);
    FVar11 = FVar13.ComparisonId.Value;
  }
  local_4d8 = FVar11.Value;
  if (((local_528.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4d8) &&
      ((FScriptContainerElement *)&local_4d8 <
       local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 4)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = local_528.ArrayNum;
  if (local_528.ArrayNum == local_528.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_528.AllocatorInstance,&local_528.ArrayMax);
  }
  FVar16.Data = local_528.AllocatorInstance.Data;
  iVar1 = iVar9 + 1;
  local_528.ArrayNum = iVar1;
  *(uint *)(local_528.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_4d8;
  if ((iVar1 < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_228 = FVar16.Data;
  local_b8._12_4_ = uStack_21c;
  local_b8.ArrayNum = iVar1;
  local_b8.DataPtr = (FDisplayNameEntryId *)FVar16.Data;
  iStack_220 = iVar1;
  SaveNameBatch(&local_b8,&local_4b8,&local_518);
  if ((local_4b8.ArrayNum < 1) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("NameData.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x15b8,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar16.Data = local_518.AllocatorInstance.Data;
  iVar9 = local_518.ArrayNum;
  local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.ArrayNum = 0;
  local_470.ArrayMax = 0;
  if ((local_518.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6.Data = local_4b8.AllocatorInstance.Data;
  iStack_210 = iVar9;
  iVar9 = local_4b8.ArrayNum;
  local_218 = FVar16.Data;
  if ((local_4b8.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8._12_4_ = uStack_20c;
  local_a8.ArrayNum = iStack_210;
  local_208 = FVar6.Data;
  iStack_200 = iVar9;
  local_98._12_4_ = uStack_1fc;
  local_98.ArrayNum = iVar9;
  local_98.DataPtr = (uchar *)FVar6.Data;
  local_a8.DataPtr = (uchar *)local_218;
  LoadNameBatch(&local_470,&local_98,&local_a8,None);
  if (((local_470.ArrayNum != local_528.ArrayNum) ||
      (bVar8 = CompareItems<FDisplayNameEntryId,int>
                         ((FDisplayNameEntryId *)local_470.AllocatorInstance.Data,
                          (FDisplayNameEntryId *)local_528.AllocatorInstance.Data,local_470.ArrayNum
                         ), !bVar8)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("LoadedNames == Names",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x15bb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_518.ArrayNum < 1) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *local_518.AllocatorInstance.Data = (FScriptContainerElement)0xba;
  if ((local_518.ArrayNum < 2) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar16.Data = local_518.AllocatorInstance.Data;
  local_518.AllocatorInstance.Data[1] = (FScriptContainerElement)0xad;
  iVar9 = local_518.ArrayNum;
  if ((local_518.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6.Data = local_4b8.AllocatorInstance.Data;
  iStack_1f0 = iVar9;
  iVar9 = local_4b8.ArrayNum;
  local_1f8 = FVar16.Data;
  if ((local_4b8.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_88._12_4_ = uStack_1ec;
  local_88.ArrayNum = iStack_1f0;
  local_1e8 = FVar6.Data;
  iStack_1e0 = iVar9;
  local_78._12_4_ = uStack_1dc;
  local_78.ArrayNum = iVar9;
  local_78.DataPtr = (uchar *)FVar6.Data;
  local_88.DataPtr = (uchar *)local_1f8;
  LoadNameBatch(&local_470,&local_78,&local_88,None);
  if (((local_470.ArrayNum != local_528.ArrayNum) ||
      (bVar8 = CompareItems<FDisplayNameEntryId,int>
                         ((FDisplayNameEntryId *)local_470.AllocatorInstance.Data,
                          (FDisplayNameEntryId *)local_528.AllocatorInstance.Data,local_470.ArrayNum
                         ), !bVar8)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("LoadedNames == Names",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x15c1,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 0;
  local_408.ArrayMax = 0;
  local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.ArrayNum = 0;
  local_418.ArrayMax = 0;
  `TestNameBatch'::__l2::<lambda_1>::operator()(local_res8,&local_408,0xaa,local_4b8.ArrayNum);
  `TestNameBatch'::__l2::<lambda_1>::operator()(local_res8,&local_418,0xaa,local_518.ArrayNum);
  `TestNameBatch'::__l2::<lambda_1>::operator()(local_res8,&local_4b8,0xbb,local_4b8.ArrayNum);
  `TestNameBatch'::__l2::<lambda_1>::operator()(local_res8,&local_518,0xbb,local_518.ArrayNum);
  local_1d8 = local_528.AllocatorInstance.Data;
  iStack_1d0 = local_528.ArrayNum;
  if ((local_528.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_68._12_4_ = uStack_1cc;
  local_68.ArrayNum = iStack_1d0;
  local_68.DataPtr = (FDisplayNameEntryId *)local_1d8;
  SaveNameBatch(&local_68,&local_4b8,&local_518);
  local_1c8 = local_528.AllocatorInstance.Data;
  iStack_1c0 = local_528.ArrayNum;
  if ((local_528.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_58._12_4_ = uStack_1bc;
  local_58.ArrayNum = iStack_1c0;
  local_58.DataPtr = (FDisplayNameEntryId *)local_1c8;
  SaveNameBatch(&local_58,&local_408,&local_418);
  if (((local_4b8.ArrayNum != local_408.ArrayNum) ||
      ((local_4b8.ArrayNum != 0 &&
       (iVar9 = memcmp(local_4b8.AllocatorInstance.Data,local_408.AllocatorInstance.Data,
                       (longlong)local_4b8.ArrayNum), iVar9 != 0)))) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("NameData == NameData2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x15d6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_518.ArrayNum != local_418.ArrayNum) ||
      ((local_518.ArrayNum != 0 &&
       (iVar9 = memcmp(local_518.AllocatorInstance.Data,local_418.AllocatorInstance.Data,
                       (longlong)local_518.ArrayNum), iVar9 != 0)))) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("HashData == HashData2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                         ,0x15d7,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  `TestNameBatch'::__l2::<lambda_2>::operator()(local_res10,&local_528);
  FVar16.Data = local_528.AllocatorInstance.Data;
  lVar23 = (longlong)local_528.ArrayNum;
  local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.ArrayNum = local_528.ArrayNum;
  if (local_528.ArrayNum == 0) {
    local_4c8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_528.ArrayNum,0,&local_4c8.AllocatorInstance,local_528.ArrayNum,
               &local_4c8.ArrayMax);
    memcpy(local_4c8.AllocatorInstance.Data,FVar16.Data,lVar23 << 2);
  }
  cVar24 = 'A';
  do {
    cVar19 = 'A';
    do {
      local_3a8 = (FScriptContainerElement *)&local_res18;
      local_res1a = 0;
      local_res18 = cVar24;
      local_res19 = cVar19;
      sVar14 = strlen(&local_res18);
      iStack_3a0 = (int)sVar14;
      uStack_2e0 = CONCAT44(uStack_39c,iStack_3a0);
      local_2e8 = (char *)local_3a8;
      FVar11.Value = uVar10;
      if (iStack_3a0 != 0) {
        UE::Core::Private::ParseNumberFromName<char>(&local_res18,(int *)&uStack_2e0);
        uVar7 = uStack_2cc;
        iVar9 = (int)uStack_2e0;
        if (iVar9 != 0) {
          local_2d8 = local_2e8;
          uStack_2cc = uStack_2cc & 0xffffff00;
          uStack_40 = CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff;
          local_48.Data = local_2e8;
          iStack_2d0 = iVar9;
          FVar13 = FNameHelper::FindOrStoreString((FNameStringView *)&local_48,FNAME_Add);
          FVar11.Value = FVar13.ComparisonId.Value.Value;
        }
      }
      local_4d4 = FVar11.Value;
      if (((local_4c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4d4) &&
          ((FScriptContainerElement *)&local_4d4 <
           local_4c8.AllocatorInstance.Data + (longlong)local_4c8.ArrayMax * 4)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_4c8.ArrayNum == local_4c8.ArrayMax) {
        local_4c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_4c8.AllocatorInstance,&local_4c8.ArrayMax);
      }
      lVar23 = (longlong)local_4c8.ArrayNum;
      cVar19 = cVar19 + '\x01';
      local_4c8.ArrayNum = local_4c8.ArrayNum + 1;
      *(uint *)(local_4c8.AllocatorInstance.Data + lVar23 * 4) = local_4d4;
    } while (cVar19 < 'z');
    cVar24 = cVar24 + '\x01';
    if ('z' < cVar24) {
      if (((uint)local_4c8.ArrayNum < 0x101) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("LargeBatch.Num() > FNamePoolShards",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                             ,0x15f4,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      `TestNameBatch'::__l2::<lambda_2>::operator()(local_res10,&local_4c8);
      if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.AllocatorInstance.Data);
      }
      if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.AllocatorInstance.Data);
      }
      if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.AllocatorInstance.Data);
      }
      if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.AllocatorInstance.Data);
      }
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      if (local_488.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data);
      }
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      if (local_518.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.AllocatorInstance.Data);
      }
      if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b8.AllocatorInstance.Data);
      }
      if (local_528.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.AllocatorInstance.Data);
      }
      return;
    }
  } while( true );
}

// ToTaskPriority @ 141a97750

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __cdecl LowLevelTasks::ToTaskPriority(wchar_t *param_1,ETaskPriority *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"High");
  if (iVar1 == 0) {
    *param_2 = High;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"Normal");
  if (iVar1 == 0) {
    *param_2 = Default;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"BackgroundHigh");
  if (iVar1 == 0) {
    *param_2 = BackgroundHigh;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"BackgroundNormal");
  if (iVar1 == 0) {
    *param_2 = BackgroundNormal;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_1,L"BackgroundLow");
  if (iVar1 == 0) {
    *param_2 = BackgroundLow;
    return true;
  }
  return false;
}

// CallStack'' @ 150346310

void __cdecl `dynamic_atexit_destructor_for_'UE::Tasks::FPipeCallStack::CallStack__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbd8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CCDumpFNames'' @ 150346340

void __cdecl UE::Name::Private::_dynamic_atexit_destructor_for__CCDumpFNames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCDumpFNames);
  return;
}

// `dynamic_atexit_destructor_for_'CCDumpHashCsv'' @ 150346360

void __cdecl UE::Name::Private::_dynamic_atexit_destructor_for__CCDumpHashCsv__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCDumpHashCsv);
  return;
}

// `dynamic_atexit_destructor_for_'CCDumpNumberedFNames'' @ 150346380

void __cdecl UE::Name::Private::_dynamic_atexit_destructor_for__CCDumpNumberedFNames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCDumpNumberedFNames);
  return;
}

// `dynamic_atexit_destructor_for_'CCGetFNameStats'' @ 1503463a0

void __cdecl UE::Name::Private::_dynamic_atexit_destructor_for__CCGetFNameStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCGetFNameStats);
  return;
}

// `dynamic_atexit_destructor_for_'CCListFNames'' @ 1503463c0

void __cdecl UE::Name::Private::_dynamic_atexit_destructor_for__CCListFNames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCListFNames);
  return;
}

// `dynamic_atexit_destructor_for_'CCListNumberedFNames'' @ 1503463e0

void __cdecl UE::Name::Private::_dynamic_atexit_destructor_for__CCListNumberedFNames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCListNumberedFNames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableSystem'' @ 150346400

void __cdecl UE::Virtualization::_dynamic_atexit_destructor_for__CVarDisableSystem__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableSystem);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFNameUseMmap'' @ 150346420

void __cdecl _dynamic_atexit_destructor_for__CVarFNameUseMmap__(void)

{
  CVarFNameUseMmap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFNameUseMmap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLazyInitSystem'' @ 150346440

void __cdecl UE::Virtualization::_dynamic_atexit_destructor_for__CVarLazyInitSystem__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLazyInitSystem);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn'' @ 150346460

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn_PrintFrequency'' @ 150346480

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_PrintFrequency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn_PrintFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn_RemoveAliases'' @ 1503464a0

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_RemoveAliases__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn_RemoveAliases);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn_SampleFrequency'' @ 1503464c0

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_SampleFrequency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn_SampleFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn_StackIgnore'' @ 1503464e0

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_StackIgnore__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn_StackIgnore);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn_StackLen'' @ 150346500

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_StackLen__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn_StackLen);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogGameThreadFNameChurn_Threshhold'' @ 150346520

void __cdecl _dynamic_atexit_destructor_for__CVarLogGameThreadFNameChurn_Threshhold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLogGameThreadFNameChurn_Threshhold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTaskGraphAlwaysWaitWithNamedThreadSupport'' @ 150346540

void __cdecl _dynamic_atexit_destructor_for__CVarTaskGraphAlwaysWaitWithNamedThreadSupport__(void)

{
  CVarTaskGraphAlwaysWaitWithNamedThreadSupport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTaskGraphAlwaysWaitWithNamedThreadSupport);
  return;
}

// `dynamic_atexit_destructor_for_'Delimiter'' @ 150346560

void __cdecl
`UE::Tasks::FTaskPriorityCVar::OnSettingChanged'::__l2::_dynamic_atexit_destructor_for__Delimiter__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Delimiter.Data.AllocatorInstance.Data;
  if (Delimiter.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Delimiter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DoubleBadCharactersTestAutomationTestInstance'' @ 150346580

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__DoubleBadCharactersTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&DoubleBadCharactersTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'Event'' @ 1503465a0

void __cdecl
`UE::Virtualization::GetAnalyticsRecordEvent'::__l2::_dynamic_atexit_destructor_for__Event__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)Event._40_8_,Event._48_4_);
  if (Event._40_8_ != 0) {
    FMemory::Free((void *)Event._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503465d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&Event);
  return;
}

// `dynamic_atexit_destructor_for_'FCbArrayBufferTestAutomationTestInstance'' @ 1503465e0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbArrayBufferTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbArrayBufferTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldArrayTestAutomationTestInstance'' @ 150346600

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldArrayTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldArrayTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldBinaryAttachmentTestAutomationTestInstance'' @ 150346620

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCbFieldBinaryAttachmentTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBinaryAttachmentTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldBinaryTestAutomationTestInstance'' @ 150346640

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldBinaryTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBinaryTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldBoolTestAutomationTestInstance'' @ 150346660

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldBoolTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBoolTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldBufferIteratorTestAutomationTestInstance'' @ 150346680

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCbFieldBufferIteratorTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBufferIteratorTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldBufferTestAutomationTestInstance'' @ 1503466a0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldBufferTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldBufferTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldCustomByIdTestAutomationTestInstance'' @ 1503466c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCbFieldCustomByIdTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldCustomByIdTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldCustomByNameTestAutomationTestInstance'' @ 1503466e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCbFieldCustomByNameTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldCustomByNameTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldDateTimeTestAutomationTestInstance'' @ 150346700

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldDateTimeTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldDateTimeTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldFloatTestAutomationTestInstance'' @ 150346720

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldFloatTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldFloatTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldHashTestAutomationTestInstance'' @ 150346740

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldHashTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldHashTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldIntegerTestAutomationTestInstance'' @ 150346760

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldIntegerTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldIntegerTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldIterateAttachmentsTestAutomationTestInstance'' @ 150346780

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCbFieldIterateAttachmentsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldIterateAttachmentsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldNoneTestAutomationTestInstance'' @ 1503467a0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldNoneTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldNoneTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldNullTestAutomationTestInstance'' @ 1503467c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldNullTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldNullTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldObjectAttachmentTestAutomationTestInstance'' @ 1503467e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCbFieldObjectAttachmentTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldObjectAttachmentTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldObjectIdTestAutomationTestInstance'' @ 150346800

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldObjectIdTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldObjectIdTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldObjectTestAutomationTestInstance'' @ 150346820

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldObjectTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldObjectTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldParseTestAutomationTestInstance'' @ 150346840

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldParseTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldParseTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldStringTestAutomationTestInstance'' @ 150346860

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldStringTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldStringTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldTimeSpanTestAutomationTestInstance'' @ 150346880

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldTimeSpanTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldTimeSpanTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbFieldUuidTestAutomationTestInstance'' @ 1503468a0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbFieldUuidTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbFieldUuidTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCbObjectBufferTestAutomationTestInstance'' @ 1503468c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCbObjectBufferTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCbObjectBufferTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FFileManagerReaderTestAutomationTestInstance'' @ 1503468e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FFileManagerReaderTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FFileManagerReaderTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPlatformVerificationTestAutomationTestInstance'' @ 150346900

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPlatformVerificationTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPlatformVerificationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTuplesTestAutomationTestInstance'' @ 150346920

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTuplesTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTuplesTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GDevVersions'' @ 150346940

void __cdecl _dynamic_atexit_destructor_for__GDevVersions__(void)

{
  ForElementType<FGuid> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = GDevVersions.AllocatorInstance.SecondaryData;
  if (GDevVersions.AllocatorInstance.SecondaryData == (ForElementType<FGuid>)0x0) {
    return;
  }
  if (GDevVersions.AllocatorInstance.SecondaryData != (ForElementType<FGuid>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GGameThreadFNameChurnTracker'' @ 150346960

void __cdecl _dynamic_atexit_destructor_for__GGameThreadFNameChurnTracker__(void)

{
  FStackTracker::~FStackTracker(&GGameThreadFNameChurnTracker.GGameThreadFNameChurnTracker);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterAnimObjectVersion'' @ 150346980

void __cdecl _dynamic_atexit_destructor_for__GRegisterAnimObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterAnimObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterAnimPhysObjectVersion'' @ 1503469a0

void __cdecl _dynamic_atexit_destructor_for__GRegisterAnimPhysObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterAnimPhysObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterAutomationObjectVersion'' @ 1503469c0

void __cdecl _dynamic_atexit_destructor_for__GRegisterAutomationObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterAutomationObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterBlueprintsObjectVersion'' @ 1503469e0

void __cdecl _dynamic_atexit_destructor_for__GRegisterBlueprintsObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterBlueprintsObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterBuildObjectVersion'' @ 150346a00

void __cdecl _dynamic_atexit_destructor_for__GRegisterBuildObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterBuildObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterCineCameraObjectVersion'' @ 150346a20

void __cdecl _dynamic_atexit_destructor_for__GRegisterCineCameraObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterCineCameraObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterCoreObjectVersion'' @ 150346a40

void __cdecl _dynamic_atexit_destructor_for__GRegisterCoreObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterCoreObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterDestructionObjectVersion'' @ 150346a60

void __cdecl _dynamic_atexit_destructor_for__GRegisterDestructionObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterDestructionObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterEditorObjectVersion'' @ 150346a80

void __cdecl _dynamic_atexit_destructor_for__GRegisterEditorObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterEditorObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterEnterpriseObjectVersion'' @ 150346aa0

void __cdecl _dynamic_atexit_destructor_for__GRegisterEnterpriseObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterEnterpriseObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterExternalPhysicsCustomVersion'' @ 150346ac0

void __cdecl _dynamic_atexit_destructor_for__GRegisterExternalPhysicsCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterExternalPhysicsCustomVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterExternalPhysicsMaterialCustomVersion'' @ 150346ae0

void __cdecl _dynamic_atexit_destructor_for__GRegisterExternalPhysicsMaterialCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterExternalPhysicsMaterialCustomVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFortniteMainBranchObjectVersion'' @ 150346b00

void __cdecl _dynamic_atexit_destructor_for__GRegisterFortniteMainBranchObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterFortniteMainBranchObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFortniteReleaseBranchCustomObjectVersion'' @ 150346b20

void __cdecl
_dynamic_atexit_destructor_for__GRegisterFortniteReleaseBranchCustomObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterFortniteReleaseBranchCustomObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFortniteSeasonBranchObjectVersion'' @ 150346b40

void __cdecl _dynamic_atexit_destructor_for__GRegisterFortniteSeasonBranchObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterFortniteSeasonBranchObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFortniteValkyrieBranchObjectVersion'' @ 150346b60

void __cdecl _dynamic_atexit_destructor_for__GRegisterFortniteValkyrieBranchObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterFortniteValkyrieBranchObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterFrameworkObjectVersion'' @ 150346b80

void __cdecl _dynamic_atexit_destructor_for__GRegisterFrameworkObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterFrameworkObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterGeometryObjectVersion'' @ 150346ba0

void __cdecl _dynamic_atexit_destructor_for__GRegisterGeometryObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterGeometryObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterLoadTimesObjectVersion'' @ 150346bc0

void __cdecl _dynamic_atexit_destructor_for__GRegisterLoadTimesObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterLoadTimesObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterMediaFrameworkObjectVersion'' @ 150346be0

void __cdecl _dynamic_atexit_destructor_for__GRegisterMediaFrameworkObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterMediaFrameworkObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterMobileObjectVersion'' @ 150346c00

void __cdecl _dynamic_atexit_destructor_for__GRegisterMobileObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterMobileObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterNaniteResearchStreamObjectVersion'' @ 150346c20

void __cdecl _dynamic_atexit_destructor_for__GRegisterNaniteResearchStreamObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterNaniteResearchStreamObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterNetworkingObjectVersion'' @ 150346c40

void __cdecl _dynamic_atexit_destructor_for__GRegisterNetworkingObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterNetworkingObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterNiagaraObjectVersion'' @ 150346c60

void __cdecl _dynamic_atexit_destructor_for__GRegisterNiagaraObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterNiagaraObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterOnlineObjectVersion'' @ 150346c80

void __cdecl _dynamic_atexit_destructor_for__GRegisterOnlineObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterOnlineObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterPhysicsObjectVersion'' @ 150346ca0

void __cdecl _dynamic_atexit_destructor_for__GRegisterPhysicsObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterPhysicsObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterPlatformObjectVersion'' @ 150346cc0

void __cdecl _dynamic_atexit_destructor_for__GRegisterPlatformObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterPlatformObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterReflectionCaptureObjectVersion'' @ 150346ce0

void __cdecl _dynamic_atexit_destructor_for__GRegisterReflectionCaptureObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterReflectionCaptureObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterRenderingObjectVersion'' @ 150346d00

void __cdecl _dynamic_atexit_destructor_for__GRegisterRenderingObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterRenderingObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterSequencerObjectVersion'' @ 150346d20

void __cdecl _dynamic_atexit_destructor_for__GRegisterSequencerObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterSequencerObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterUE5MainStreamObjectVersion'' @ 150346d40

void __cdecl _dynamic_atexit_destructor_for__GRegisterUE5MainStreamObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterUE5MainStreamObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterUE5ReleaseStreamObjectVersion'' @ 150346d60

void __cdecl _dynamic_atexit_destructor_for__GRegisterUE5ReleaseStreamObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterUE5ReleaseStreamObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterUE5SpecialProjectStreamObjectVersion'' @ 150346d80

void __cdecl _dynamic_atexit_destructor_for__GRegisterUE5SpecialProjectStreamObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterUE5SpecialProjectStreamObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterVRObjectVersion'' @ 150346da0

void __cdecl _dynamic_atexit_destructor_for__GRegisterVRObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterVRObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterVirtualProductionObjectVersion'' @ 150346dc0

void __cdecl _dynamic_atexit_destructor_for__GRegisterVirtualProductionObjectVersion__(void)

{
  FCurrentCustomVersions::Unregister((FGuid *)&GRegisterVirtualProductionObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisteredSystemGuids'' @ 150346de0

void __cdecl _dynamic_atexit_destructor_for__GRegisteredSystemGuids__(void)

{
  GRegisteredSystemGuids._72_4_ = 0;
  if (GRegisteredSystemGuids._64_8_ != 0) {
    FMemory::Free((void *)GRegisteredSystemGuids._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GRegisteredSystemGuids);
  return;
}

// `dynamic_atexit_destructor_for_'GSystemGuidRegistry'' @ 150346e20

void __cdecl
`GetSystemGuidRegistry'::__l2::_dynamic_atexit_destructor_for__GSystemGuidRegistry__(void)

{
  GSystemGuidRegistry.RegisteredSystemGuids._72_4_ = 0;
  if (GSystemGuidRegistry.RegisteredSystemGuids._64_8_ != 0) {
    FMemory::Free((void *)GSystemGuidRegistry.RegisteredSystemGuids._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GSystemGuidRegistry.RegisteredSystemGuids);
                    /* WARNING: Could not recover jumptable at 0x000150346e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GSystemGuidRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'GVirtualizationSystem'' @ 150346e70

void __cdecl UE::Virtualization::_dynamic_atexit_destructor_for__GVirtualizationSystem__(void)

{
  if (GVirtualizationSystem.Ptr != (IVirtualizationSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150346e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*GVirtualizationSystem.Ptr)(GVirtualizationSystem.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InitCS'' @ 150346e90

void __cdecl `UE::Virtualization::Initialize'::__l2::_dynamic_atexit_destructor_for__InitCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150346e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&InitCS);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidNonWhitespaceCharactersTestAutomationTestInstance'' @ 150346eb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__InvalidNonWhitespaceCharactersTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&InvalidNonWhitespaceCharactersTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogDevObjectVersion'' @ 150346ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDevObjectVersion__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDevObjectVersion);
  return;
}

// `dynamic_atexit_destructor_for_'LogUnrealNames'' @ 150346ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUnrealNames__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUnrealNames);
  return;
}

// `dynamic_atexit_destructor_for_'NameToDisplayStringExemptionLock'' @ 150346f10

void __cdecl _dynamic_atexit_destructor_for__NameToDisplayStringExemptionLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&NameToDisplayStringExemptionLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150346f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&NameToDisplayStringExemptionLock);
    return;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NameToDisplayStringExemptions'' @ 150346f70

void __cdecl _dynamic_atexit_destructor_for__NameToDisplayStringExemptions__(void)

{
  DestructItems<FString,int>
            ((FString *)NameToDisplayStringExemptions.AllocatorInstance.Data,
             NameToDisplayStringExemptions.ArrayNum);
  if (NameToDisplayStringExemptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(NameToDisplayStringExemptions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance'' @ 150346fb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&SingleInvalidNonWhitespaceCharacterTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'SingleInvalidWhitespaceCharacterTestAutomationTestInstance'' @ 150346fd0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__SingleInvalidWhitespaceCharacterTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&SingleInvalidWhitespaceCharacterTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'SmallTaskAllocator'' @ 150346ff0

void __cdecl UE::Tasks::Private::_dynamic_atexit_destructor_for__SmallTaskAllocator__(void)

{
  TlsFree(SmallTaskAllocator._0_4_);
  SmallTaskAllocator._0_4_ = 0xffffffff;
  FLockFreePointerListLIFOBase<void_*,64,1>::~FLockFreePointerListLIFOBase<void_*,64,1>
            ((FLockFreePointerListLIFOBase<void_*,64,1> *)&SmallTaskAllocator.field_0x40);
  return;
}

// `dynamic_atexit_destructor_for_'TaskEventBaseAllocator'' @ 150347020

void __cdecl UE::Tasks::Private::_dynamic_atexit_destructor_for__TaskEventBaseAllocator__(void)

{
  TlsFree(TaskEventBaseAllocator._0_4_);
  TaskEventBaseAllocator._0_4_ = 0xffffffff;
  FLockFreePointerListLIFOBase<void_*,64,1>::~FLockFreePointerListLIFOBase<void_*,64,1>
            ((FLockFreePointerListLIFOBase<void_*,64,1> *)&TaskEventBaseAllocator.field_0x40);
  return;
}

// `dynamic_atexit_destructor_for_'ValidFNameTestAutomationTestInstance'' @ 150347050

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__ValidFNameTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&ValidFNameTestAutomationTestInstance);
  return;
}

// operator() @ 150480060

bool __thiscall `Freeze::IntrinsicWriteMemoryImage'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4630151968323529043>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4630151968323529043>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

