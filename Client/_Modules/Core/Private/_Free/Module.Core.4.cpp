// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 323

// `dynamic_initializer_for_'CVarLLMCsvFlushEveryRow'' @ 140efd2a0

void __cdecl _dynamic_initializer_for__CVarLLMCsvFlushEveryRow__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLLMCsvFlushEveryRow,L"LLM.CsvFlushEveryRow",local_res8,
             L"Whether to flush the CSV with every row written. If disabled we only flush on a crash"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLLMCsvFlushEveryRow__);
  return;
}

// `dynamic_initializer_for_'CVarLLMHeaderMaxSize'' @ 140efd2f0

void __cdecl _dynamic_initializer_for__CVarLLMHeaderMaxSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 30000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLLMHeaderMaxSize,L"LLM.LLMHeaderMaxSize",local_res8,
             L"The maximum total number of characters allowed for all of the LLM titles",0);
  atexit(_dynamic_atexit_destructor_for__CVarLLMHeaderMaxSize__);
  return;
}

// `dynamic_initializer_for_'CVarLLMTrackPeaks'' @ 140efd340

void __cdecl _dynamic_initializer_for__CVarLLMTrackPeaks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLLMTrackPeaks,L"LLM.TrackPeaks",local_res8,
             L"Track peak memory in each category since process start rather than current frame\'s value."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLLMTrackPeaks__);
  return;
}

// `dynamic_initializer_for_'CVarLLMWriteInterval'' @ 140efd390

void __cdecl _dynamic_initializer_for__CVarLLMWriteInterval__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLLMWriteInterval,L"LLM.LLMWriteInterval",local_res8,
             L"The number of seconds between each line in the LLM csv (zero to write every frame)",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarLLMWriteInterval__);
  return;
}

// `dynamic_initializer_for_'CreateDummyFileInPersistentStorageCommand'' @ 140efd3e0

void __cdecl _dynamic_initializer_for__CreateDummyFileInPersistentStorageCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CreateDummyFileInPersistentStorageCommand,L"CreateDummyFileInPersistentStorage",
             L"Create a dummy file with specified size in specified persistent storage folder",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CreateDummyFileInPersistentStorageCommand__);
  return;
}

// `dynamic_initializer_for_'DumpLLM'' @ 140efd510

void __cdecl _dynamic_initializer_for__DumpLLM__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DumpLLM,L"DumpLLM",L"Logs out the current and peak sizes of all tracked LLM tags",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__DumpLLM__);
  return;
}

// `dynamic_initializer_for_'DumpPersistentStorage'' @ 140efd640

void __cdecl _dynamic_initializer_for__DumpPersistentStorage__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_4>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"DumpPersistentStorage",L"Dumps PersistentStorage"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&DumpPersistentStorage,pIVar5);
  DumpPersistentStorage._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__DumpPersistentStorage__);
  return;
}

// `dynamic_initializer_for_'FLLMMiscTestAutomationTestInstance'' @ 140efd7e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FLLMMiscTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLLMMiscTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLLMMiscTestAutomationTestInstance,&local_18,false);
  FLLMMiscTestAutomationTestInstance._0_8_ = &___7FLLMMiscTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLLMMiscTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FLLMScopeTestAutomationTestInstance'' @ 140efd840

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FLLMScopeTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLLMScopeTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLLMScopeTestAutomationTestInstance,&local_18,false);
  FLLMScopeTestAutomationTestInstance._0_8_ = &___7FLLMScopeTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLLMScopeTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTopologicalSortTestAutomationTestInstance'' @ 140efd8a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTopologicalSortTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTopologicalSortTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTopologicalSortTestAutomationTestInstance,&local_18,false);
  FTopologicalSortTestAutomationTestInstance._0_8_ = &___7FTopologicalSortTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTopologicalSortTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GFileLogExec'' @ 140efd900

void __cdecl _dynamic_initializer_for__GFileLogExec__(void)

{
  atexit(_dynamic_atexit_destructor_for__GFileLogExec__);
  return;
}

// `dynamic_initializer_for_'GMallocBinnedEnableCSVStatsCVar'' @ 140efd920

void __cdecl _dynamic_initializer_for__GMallocBinnedEnableCSVStatsCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GMallocBinnedEnableCSVStatsCVar,L"MallocBinned.EnableCSVStats",
             &GMallocBinnedEnableCSVStats,
             L"Whether or not to enable extended CSV stats with fragmentation stats (disabled by default)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GMallocBinnedEnableCSVStatsCVar__);
  return;
}

// `dynamic_initializer_for_'GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar'' @ 140efd970

void __cdecl
_dynamic_initializer_for__GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar,
             L"MallocBinned.FlushRegisteredThreadCachesOnOneThread",
             &GMallocBinnedFlushRegisteredThreadCachesOnOneThread,
             L"Whether or not to attempt to flush registered thread caches on one thread (enabled by default)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar__);
  return;
}

// `dynamic_initializer_for_'GMallocBinnedFlushThreadCacheMaxWaitTimeCVar'' @ 140efd9c0

void __cdecl _dynamic_initializer_for__GMallocBinnedFlushThreadCacheMaxWaitTimeCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GMallocBinnedFlushThreadCacheMaxWaitTimeCVar,
             L"MallocBinned.FlushThreadCacheMaxWaitTime",&GMallocBinnedFlushThreadCacheMaxWaitTime,
             L"The threshold of time before warning about FlushCurrentThreadCache taking too long (seconds)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__GMallocBinnedFlushThreadCacheMaxWaitTimeCVar__);
  return;
}

// `dynamic_initializer_for_'LLMSnapshot'' @ 140efda10

void __cdecl _dynamic_initializer_for__LLMSnapshot__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&LLMSnapshot,L"LLMSnapshot",
             L"Takes a single LLM Snapshot of one frame. This command requires the commandline -llmdisableautopublish"
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__LLMSnapshot__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LLMTestParentTag'' @ 140efdb40

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LLMTestParentTag__(void)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar5;
  
  LLMTagDeclaration_LLMTestParentTag.DisplayName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag.DisplayName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag.ParentTagName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag.ParentTagName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag.StatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag.StatName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag.SummaryStatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag.SummaryStatName.Number = 0;
  FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar2 = *(int *)((longlong)FVar5 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar5 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8);
  }
  if ((iVar2 < 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          ((longlong)FVar5 + (longlong)iVar2 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)((longlong)FVar5 + 8)) {
    (**(code **)FVar5)(&LLMTagDeclaration_LLMTestParentTag);
  }
  LLMTagDeclaration_LLMTestParentTag.Next = List;
  List = &LLMTagDeclaration_LLMTestParentTag;
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1'' @ 140efdc10

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1__(void)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar6;
  FName local_res20;
  
  pFVar5 = FName::FName(&local_res20,L"LLMTestParentTag");
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.ParentTagName = *pFVar5;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.CPPName = L"LLMTestParentTag_LLMTestChildTag1"
  ;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.UniqueName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.UniqueName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.DisplayName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.DisplayName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.StatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.StatName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.SummaryStatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.SummaryStatName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.TagSet = None;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.Next = (FLLMTagDeclaration *)0x0;
  FVar6 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar2 = *(int *)((longlong)FVar6 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar6 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8);
  }
  if ((iVar2 < 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          ((longlong)FVar6 + (longlong)iVar2 * 8);
  for (; FVar6 != FVar1;
      FVar6 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)((longlong)FVar6 + 8)) {
    (**(code **)FVar6)(&LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1);
  }
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1.Next = List;
  List = &LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag1;
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2'' @ 140efdd10

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2__(void)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar6;
  FName local_res20;
  
  pFVar5 = FName::FName(&local_res20,L"LLMTestParentTag");
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.ParentTagName = *pFVar5;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.CPPName = L"LLMTestParentTag_LLMTestChildTag2"
  ;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.UniqueName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.UniqueName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.DisplayName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.DisplayName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.StatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.StatName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.SummaryStatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.SummaryStatName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.TagSet = None;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.Next = (FLLMTagDeclaration *)0x0;
  FVar6 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar2 = *(int *)((longlong)FVar6 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar6 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8);
  }
  if ((iVar2 < 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          ((longlong)FVar6 + (longlong)iVar2 * 8);
  for (; FVar6 != FVar1;
      FVar6 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)((longlong)FVar6 + 8)) {
    (**(code **)FVar6)(&LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2);
  }
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2.Next = List;
  List = &LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag2;
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3'' @ 140efde10

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3__(void)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar5;
  
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.DisplayName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.DisplayName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.ParentTagName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.ParentTagName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.StatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.StatName.Number = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.SummaryStatName.ComparisonIndex.Value = 0;
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.SummaryStatName.Number = 0;
  FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  iVar2 = *(int *)((longlong)FVar5 + 0x10);
  if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8) !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    FVar5 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar5 + 8);
  }
  if ((iVar2 < 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          ((longlong)FVar5 + (longlong)iVar2 * 8);
  for (; FVar5 != FVar1;
      FVar5 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)((longlong)FVar5 + 8)) {
    (**(code **)FVar5)(&LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3);
  }
  LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3.Next = List;
  List = &LLMTagDeclaration_LLMTestParentTag_LLMTestChildTag3;
  return;
}

// `dynamic_initializer_for_'LogFileManager'' @ 140efdee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFileManager__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogFileManager,L"LogFileManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFileManager__);
  return;
}

// `dynamic_initializer_for_'LogFileOpenOrder'' @ 140efdf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFileOpenOrder__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogFileOpenOrder,L"LogFileOpenOrder",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFileOpenOrder__);
  return;
}

// `dynamic_initializer_for_'LogPlatformFile'' @ 140efdf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPlatformFile__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPlatformFile,L"LogPlatformFile",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPlatformFile__);
  return;
}

// `dynamic_initializer_for_'LogPlatformFileManagedStorage'' @ 140efdfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPlatformFileManagedStorage__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPlatformFileManagedStorage,L"LogPlatformFileManagedStorage",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogPlatformFileManagedStorage__);
  return;
}

// `dynamic_initializer_for_'MemTagChannelReg'' @ 140efdfe0

void __cdecl _dynamic_initializer_for__MemTagChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = "Memory overview";
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&MemTagChannelObject,"MemTagChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'PersistentStorageCategoryStatsCommand'' @ 140efe020

void __cdecl _dynamic_initializer_for__PersistentStorageCategoryStatsCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = <lambda_3>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&PersistentStorageCategoryStatsCommand,L"PersistentStorageCategoryStats",
             L"Get the stat of each persistent storage stats\n",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__PersistentStorageCategoryStatsCommand__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationLLM'' @ 140efe160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationLLM == (FThreadSafeStaticStat<FStat_STAT_AnimationLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationLLM,*pFVar1,L"Animation",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSummaryLLM'' @ 140efe1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_AnimationSummaryLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSummaryLLM,*pFVar1,L"Animation",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AssetRegistryLLM'' @ 140efe280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AssetRegistryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AssetRegistryLLM == (FThreadSafeStaticStat<FStat_STAT_AssetRegistryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AssetRegistryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AssetRegistryLLM,*pFVar1,L"AssetRegistry",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingLLM'' @ 140efe310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncLoadingLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncLoadingLLM == (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncLoadingLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingLLM,*pFVar1,L"AsyncLoading",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioDecompressLLM'' @ 140efe3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioDecompressLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioDecompressLLM == (FThreadSafeStaticStat<FStat_STAT_AudioDecompressLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AudioDecompressLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDecompressLLM,*pFVar1,
               L"AudioDecompress","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioFullDecompressLLM'' @ 140efe430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioFullDecompressLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioFullDecompressLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioFullDecompressLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioFullDecompressLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFullDecompressLLM,*pFVar1,
               L"AudioFullDecompress","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioLLM'' @ 140efe4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioLLM == (FThreadSafeStaticStat<FStat_STAT_AudioLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioLLM,*pFVar1,L"Audio",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMiscLLM'' @ 140efe550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMiscLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMiscLLM == (FThreadSafeStaticStat<FStat_STAT_AudioMiscLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMiscLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMiscLLM,*pFVar1,L"AudioMisc",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerLLM'' @ 140efe5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerLLM == (FThreadSafeStaticStat<FStat_STAT_AudioMixerLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerLLM,*pFVar1,L"AudioMixer",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMixerPluginsLLM'' @ 140efe670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMixerPluginsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMixerPluginsLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerPluginsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMixerPluginsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerPluginsLLM,*pFVar1,
               L"AudioMixerPlugins","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioPrecacheLLM'' @ 140efe700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioPrecacheLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioPrecacheLLM == (FThreadSafeStaticStat<FStat_STAT_AudioPrecacheLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioPrecacheLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPrecacheLLM,*pFVar1,L"AudioPrecache",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioRealtimePrecacheLLM'' @ 140efe790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioRealtimePrecacheLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioRealtimePrecacheLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioRealtimePrecacheLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioRealtimePrecacheLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRealtimePrecacheLLM,*pFVar1,
               L"AudioRealtimePrecache","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSoundWaveProxiesLLM'' @ 140efe820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSoundWaveProxiesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSoundWaveProxiesLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioSoundWaveProxiesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSoundWaveProxiesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSoundWaveProxiesLLM,*pFVar1,
               L"AudioSoundWaveProxies","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSoundWavesLLM'' @ 140efe8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSoundWavesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSoundWavesLLM == (FThreadSafeStaticStat<FStat_STAT_AudioSoundWavesLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSoundWavesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSoundWavesLLM,*pFVar1,
               L"AudioSoundWaves","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioStreamCacheCompressedDataLLM'' @ 140efe940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioStreamCacheCompressedDataLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioStreamCacheCompressedDataLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioStreamCacheCompressedDataLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioStreamCacheCompressedDataLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStreamCacheCompressedDataLLM,*pFVar1,
               L"AudioStreamCacheCompressedData","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioStreamCacheLLM'' @ 140efe9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioStreamCacheLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioStreamCacheLLM == (FThreadSafeStaticStat<FStat_STAT_AudioStreamCacheLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioStreamCacheLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStreamCacheLLM,*pFVar1,
               L"AudioStreamCache","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSummaryLLM'' @ 140efea60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSummaryLLM,*pFVar1,L"Audio",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSynthesisLLM'' @ 140efeaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSynthesisLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSynthesisLLM == (FThreadSafeStaticStat<FStat_STAT_AudioSynthesisLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSynthesisLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSynthesisLLM,*pFVar1,
               L"AudioSynthesis","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_CurrentAllocs'' @ 140efeb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_CurrentAllocs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_CurrentAllocs ==
      (FThreadSafeStaticStat<FStat_STAT_Binned_CurrentAllocs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_CurrentAllocs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_CurrentAllocs,*pFVar1,
               L"Binned Current Allocs","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_OsCurrent'' @ 140efec10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_OsCurrent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_OsCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_OsCurrent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_OsCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_OsCurrent,*pFVar1,
               L"Binned Os Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_OsPeak'' @ 140efeca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_OsPeak__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_OsPeak == (FThreadSafeStaticStat<FStat_STAT_Binned_OsPeak>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_OsPeak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_OsPeak,*pFVar1,L"Binned Os Peak",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_SlackCurrent'' @ 140efed30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_SlackCurrent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_SlackCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_SlackCurrent>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_SlackCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_SlackCurrent,*pFVar1,
               L"Binned Slack Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_TotalAllocs'' @ 140efedc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_TotalAllocs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_TotalAllocs == (FThreadSafeStaticStat<FStat_STAT_Binned_TotalAllocs>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_TotalAllocs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_TotalAllocs,*pFVar1,
               L"Binned Total Allocs","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_UsedCurrent'' @ 140efee50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_UsedCurrent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_UsedCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_UsedCurrent>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_UsedCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_UsedCurrent,*pFVar1,
               L"Binned Used Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_UsedPeak'' @ 140efeee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_UsedPeak__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_UsedPeak == (FThreadSafeStaticStat<FStat_STAT_Binned_UsedPeak>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_UsedPeak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_UsedPeak,*pFVar1,
               L"Binned Used Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_WasteCurrent'' @ 140efef70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_WasteCurrent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_WasteCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_WasteCurrent>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_WasteCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_WasteCurrent,*pFVar1,
               L"Binned Waste Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Binned_WastePeak'' @ 140eff000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Binned_WastePeak__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Binned_WastePeak == (FThreadSafeStaticStat<FStat_STAT_Binned_WastePeak>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Binned_WastePeak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_WastePeak,*pFVar1,
               L"Binned Waste Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosAccelerationLLM'' @ 140eff090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosAccelerationLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosAccelerationLLM ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosAccelerationLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosAccelerationLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosAccelerationLLM,*pFVar1,
               L"ChaosAcceleration","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosActorLLM'' @ 140eff120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosActorLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosActorLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosActorLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosActorLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosActorLLM,*pFVar1,L"ChaosActor",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosBodyLLM'' @ 140eff1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosBodyLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosBodyLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosBodyLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosBodyLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosBodyLLM,*pFVar1,L"ChaosBody",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosConstraintLLM'' @ 140eff240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosConstraintLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosConstraintLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosConstraintLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosConstraintLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosConstraintLLM,*pFVar1,
               L"ChaosConstraint","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosConvexLLM'' @ 140eff2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosConvexLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosConvexLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosConvexLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosConvexLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosConvexLLM,*pFVar1,L"ChaosConvex",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosGeometryLLM'' @ 140eff360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosGeometryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosGeometryLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosGeometryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosGeometryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosGeometryLLM,*pFVar1,L"ChaosGeometry",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosLLM'' @ 140eff3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosLLM,*pFVar1,L"Chaos",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosLandscapeLLM'' @ 140eff480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosLandscapeLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosLandscapeLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosLandscapeLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosLandscapeLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosLandscapeLLM,*pFVar1,
               L"ChaosLandscape","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosMaterialLLM'' @ 140eff510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosMaterialLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosMaterialLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosMaterialLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosMaterialLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosMaterialLLM,*pFVar1,L"ChaosMaterial",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosParticlesLLM'' @ 140eff5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosParticlesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosParticlesLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosParticlesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosParticlesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosParticlesLLM,*pFVar1,
               L"ChaosParticles","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosSceneLLM'' @ 140eff630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosSceneLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosSceneLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosSceneLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosSceneLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosSceneLLM,*pFVar1,L"ChaosScene",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosSummaryLLM'' @ 140eff6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosSummaryLLM,*pFVar1,L"Chaos",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosTrimeshLLM'' @ 140eff750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosTrimeshLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosTrimeshLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosTrimeshLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosTrimeshLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosTrimeshLLM,*pFVar1,L"ChaosTrimesh",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosUpdateLLM'' @ 140eff7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosUpdateLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosUpdateLLM == (FThreadSafeStaticStat<FStat_STAT_ChaosUpdateLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosUpdateLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosUpdateLLM,*pFVar1,L"ChaosUpdate",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ConfigSystemLLM'' @ 140eff870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ConfigSystemLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ConfigSystemLLM == (FThreadSafeStaticStat<FStat_STAT_ConfigSystemLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ConfigSystemLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConfigSystemLLM,*pFVar1,L"ConfigSystem",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CsvProfilerLLM'' @ 140eff900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CsvProfilerLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CsvProfilerLLM == (FThreadSafeStaticStat<FStat_STAT_CsvProfilerLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CsvProfilerLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CsvProfilerLLM,*pFVar1,L"CsvProfiler",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CustomName'' @ 140eff990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CustomName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CustomName == (FThreadSafeStaticStat<FStat_STAT_CustomName>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CustomName");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CustomName,*pFVar1,L"CustomName",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ElectraPlayerLLM'' @ 140effa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ElectraPlayerLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ElectraPlayerLLM == (FThreadSafeStaticStat<FStat_STAT_ElectraPlayerLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ElectraPlayerLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ElectraPlayerLLM,*pFVar1,L"ElectraPlayer",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EngineInitLLM'' @ 140effab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EngineInitLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EngineInitLLM == (FThreadSafeStaticStat<FStat_STAT_EngineInitLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EngineInitLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineInitLLM,*pFVar1,L"EngineInit",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EngineMiscLLM'' @ 140effb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EngineMiscLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EngineMiscLLM == (FThreadSafeStaticStat<FStat_STAT_EngineMiscLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EngineMiscLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineMiscLLM,*pFVar1,L"Engine Misc",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EnginePreInitLLM'' @ 140effbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EnginePreInitLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EnginePreInitLLM == (FThreadSafeStaticStat<FStat_STAT_EnginePreInitLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EnginePreInitLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EnginePreInitLLM,*pFVar1,L"EnginePreInit",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EngineSummaryLLM'' @ 140effc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EngineSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EngineSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FMallocLLM'' @ 140effcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FMallocLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FMallocLLM == (FThreadSafeStaticStat<FStat_STAT_FMallocLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FMallocLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocLLM,*pFVar1,L"FMalloc",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FMallocUnusedLLM'' @ 140effd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FMallocUnusedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FMallocUnusedLLM == (FThreadSafeStaticStat<FStat_STAT_FMallocUnusedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FMallocUnusedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMallocUnusedLLM,*pFVar1,L"FMalloc Unused"
               ,"STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FNameLLM'' @ 140effe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FNameLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FNameLLM == (FThreadSafeStaticStat<FStat_STAT_FNameLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FNameLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FNameLLM,*pFVar1,L"FName",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FileSystemLLM'' @ 140effea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FileSystemLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FileSystemLLM == (FThreadSafeStaticStat<FStat_STAT_FileSystemLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FileSystemLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileSystemLLM,*pFVar1,L"FileSystem",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCLLM'' @ 140efff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCLLM == (FThreadSafeStaticStat<FStat_STAT_GCLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCLLM,*pFVar1,L"GC","STATGROUP_LLMFULL",
               "STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSortLLM'' @ 140efffc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSortLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSortLLM == (FThreadSafeStaticStat<FStat_STAT_GPUSortLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSortLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSortLLM,*pFVar1,L"GPUSort",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GenericPlatformMallocCrashLLM'' @ 140f00050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GenericPlatformMallocCrashLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GenericPlatformMallocCrashLLM ==
      (FThreadSafeStaticStat<FStat_STAT_GenericPlatformMallocCrashLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GenericPlatformMallocCrashLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenericPlatformMallocCrashLLM,*pFVar1,
               L"GenericPlatformMallocCrash","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true
               ,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GenericPlatformMallocCrashPlatformLLM'' @ 140f000e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GenericPlatformMallocCrashPlatformLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GenericPlatformMallocCrashPlatformLLM ==
      (FThreadSafeStaticStat<FStat_STAT_GenericPlatformMallocCrashPlatformLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GenericPlatformMallocCrashPlatformLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenericPlatformMallocCrashPlatformLLM,
               *pFVar1,L"GenericPlatformMallocCrash","STATGROUP_LLMPlatform","STATCAT_Advanced",
               L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GraphicsPlatformLLM'' @ 140f00170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GraphicsPlatformLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GraphicsPlatformLLM == (FThreadSafeStaticStat<FStat_STAT_GraphicsPlatformLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_GraphicsPlatformLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GraphicsPlatformLLM,*pFVar1,L"Graphics",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InitUObjectLLM'' @ 140f00200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InitUObjectLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InitUObjectLLM == (FThreadSafeStaticStat<FStat_STAT_InitUObjectLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InitUObjectLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitUObjectLLM,*pFVar1,L"InitUObject",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InstancedMeshLLM'' @ 140f00290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InstancedMeshLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InstancedMeshLLM == (FThreadSafeStaticStat<FStat_STAT_InstancedMeshLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InstancedMeshLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstancedMeshLLM,*pFVar1,L"InstancedMesh",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LLMOverheadTotal'' @ 140f00320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LLMOverheadTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LLMOverheadTotal == (FThreadSafeStaticStat<FStat_STAT_LLMOverheadTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LLMOverheadTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LLMOverheadTotal,*pFVar1,L"LLM Overhead",
               "STATGROUP_LLMOverhead","STATCAT_Advanced",L"LLM Overhead",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LandscapeLLM'' @ 140f003a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LandscapeLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LandscapeLLM == (FThreadSafeStaticStat<FStat_STAT_LandscapeLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LandscapeLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeLLM,*pFVar1,L"Landscape",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LinearAllocatorLLM'' @ 140f00430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LinearAllocatorLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LinearAllocatorLLM == (FThreadSafeStaticStat<FStat_STAT_LinearAllocatorLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_LinearAllocatorLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinearAllocatorLLM,*pFVar1,
               L"Linear Allocator","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LoadMapMiscLLM'' @ 140f004c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LoadMapMiscLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LoadMapMiscLLM == (FThreadSafeStaticStat<FStat_STAT_LoadMapMiscLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LoadMapMiscLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LoadMapMiscLLM,*pFVar1,L"LoadMap Misc",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LocalizationLLM'' @ 140f00550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LocalizationLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LocalizationLLM == (FThreadSafeStaticStat<FStat_STAT_LocalizationLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LocalizationLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalizationLLM,*pFVar1,L"Localization",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MaterialInstanceLLM'' @ 140f005e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MaterialInstanceLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MaterialInstanceLLM == (FThreadSafeStaticStat<FStat_STAT_MaterialInstanceLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_MaterialInstanceLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaterialInstanceLLM,*pFVar1,
               L"MaterialInstance","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MaterialsLLM'' @ 140f00670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MaterialsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MaterialsLLM == (FThreadSafeStaticStat<FStat_STAT_MaterialsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MaterialsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaterialsLLM,*pFVar1,L"Materials",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MaterialsSummaryLLM'' @ 140f00700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MaterialsSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MaterialsSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_MaterialsSummaryLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_MaterialsSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaterialsSummaryLLM,*pFVar1,L"Materials",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaStreamingLLM'' @ 140f00790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaStreamingLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaStreamingLLM == (FThreadSafeStaticStat<FStat_STAT_MediaStreamingLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaStreamingLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaStreamingLLM,*pFVar1,
               L"MediaStreaming","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MediaStreamingSummaryLLM'' @ 140f00820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MediaStreamingSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MediaStreamingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_MediaStreamingSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MediaStreamingSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MediaStreamingSummaryLLM,*pFVar1,
               L"MediaStreaming","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MeshesLLM'' @ 140f008b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MeshesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MeshesLLM == (FThreadSafeStaticStat<FStat_STAT_MeshesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MeshesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshesLLM,*pFVar1,L"Meshes",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MeshesSummaryLLM'' @ 140f00940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MeshesSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MeshesSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_MeshesSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MeshesSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshesSummaryLLM,*pFVar1,L"Meshes",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NavigationRecastLLM'' @ 140f009d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NavigationRecastLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NavigationRecastLLM == (FThreadSafeStaticStat<FStat_STAT_NavigationRecastLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NavigationRecastLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationRecastLLM,*pFVar1,
               L"NavigationRecast","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NavigationSummaryLLM'' @ 140f00a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NavigationSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NavigationSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NavigationSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NavigationSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationSummaryLLM,*pFVar1,L"Navigation"
               ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetworkingLLM'' @ 140f00af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetworkingLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetworkingLLM == (FThreadSafeStaticStat<FStat_STAT_NetworkingLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetworkingLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingLLM,*pFVar1,L"Networking",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetworkingSummaryLLM'' @ 140f00b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetworkingSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetworkingSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar1,L"Networking"
               ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraLLM'' @ 140f00c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraLLM == (FThreadSafeStaticStat<FStat_STAT_NiagaraLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraLLM,*pFVar1,L"Niagara",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSummaryLLM'' @ 140f00ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_NiagaraSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSummaryLLM,*pFVar1,L"Niagara",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OOMBackupPoolLLM'' @ 140f00d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OOMBackupPoolLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OOMBackupPoolLLM == (FThreadSafeStaticStat<FStat_STAT_OOMBackupPoolLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OOMBackupPoolLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OOMBackupPoolLLM,*pFVar1,
               L"OOM Backup Pool","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OOMBackupPoolPlatformLLM'' @ 140f00dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OOMBackupPoolPlatformLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OOMBackupPoolPlatformLLM ==
      (FThreadSafeStaticStat<FStat_STAT_OOMBackupPoolPlatformLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OOMBackupPoolPlatformLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OOMBackupPoolPlatformLLM,*pFVar1,
               L"OOM Backup Pool","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOLLM'' @ 140f00e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOLLM == (FThreadSafeStaticStat<FStat_STAT_PSOLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOLLM,*pFVar1,L"PSO","STATGROUP_LLMFULL",
               "STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PagefileUsedLLM'' @ 140f00ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PagefileUsedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PagefileUsedLLM == (FThreadSafeStaticStat<FStat_STAT_PagefileUsedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PagefileUsedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PagefileUsedLLM,*pFVar1,L"PagefileUsed",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesLLM'' @ 140f00f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesLLM == (FThreadSafeStaticStat<FStat_STAT_ParticlesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesLLM,*pFVar1,L"Particles",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParticlesSummaryLLM'' @ 140f01000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParticlesSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParticlesSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_ParticlesSummaryLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_ParticlesSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesSummaryLLM,*pFVar1,L"Particles",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXAllocatorLLM'' @ 140f01090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXAllocatorLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXAllocatorLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXAllocatorLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXAllocatorLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXAllocatorLLM,*pFVar1,
               L"PhysXAllocator","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXConvexLLM'' @ 140f01120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXConvexLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXConvexLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXConvexLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXConvexLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXConvexLLM,*pFVar1,L"PhysXConvex",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXGeometryLLM'' @ 140f011b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXGeometryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXGeometryLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXGeometryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXGeometryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXGeometryLLM,*pFVar1,L"PhysXGeometry",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXLLM'' @ 140f01240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXLLM,*pFVar1,L"PhysX",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXLandscapeLLM'' @ 140f012d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXLandscapeLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXLandscapeLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXLandscapeLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXLandscapeLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXLandscapeLLM,*pFVar1,
               L"PhysXLandscape","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXSummaryLLM'' @ 140f01360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXSummaryLLM,*pFVar1,L"PhysX",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysXTrimeshLLM'' @ 140f013f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysXTrimeshLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysXTrimeshLLM == (FThreadSafeStaticStat<FStat_STAT_PhysXTrimeshLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysXTrimeshLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXTrimeshLLM,*pFVar1,L"PhysXTrimesh",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsLLM'' @ 140f01480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsLLM == (FThreadSafeStaticStat<FStat_STAT_PhysicsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsLLM,*pFVar1,L"Physics",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsSummaryLLM'' @ 140f01510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_PhysicsSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsSummaryLLM,*pFVar1,L"Physics",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformMMIOLLM'' @ 140f015a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformMMIOLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformMMIOLLM == (FThreadSafeStaticStat<FStat_STAT_PlatformMMIOLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformMMIOLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformMMIOLLM,*pFVar1,L"MMIO",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformOSAvailableLLM'' @ 140f01630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformOSAvailableLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformOSAvailableLLM ==
      (FThreadSafeStaticStat<FStat_STAT_PlatformOSAvailableLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformOSAvailableLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformOSAvailableLLM,*pFVar1,
               L"OS Available","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false
               ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformOverheadLLM'' @ 140f016c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformOverheadLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformOverheadLLM == (FThreadSafeStaticStat<FStat_STAT_PlatformOverheadLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformOverheadLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformOverheadLLM,*pFVar1,L"Overhead",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformTotalLLM'' @ 140f01750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformTotalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformTotalLLM == (FThreadSafeStaticStat<FStat_STAT_PlatformTotalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformTotalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformTotalLLM,*pFVar1,L"Total",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformTrackedTotalLLM'' @ 140f017e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformTrackedTotalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformTrackedTotalLLM ==
      (FThreadSafeStaticStat<FStat_STAT_PlatformTrackedTotalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformTrackedTotalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformTrackedTotalLLM,*pFVar1,
               L"Tracked Total","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformUntaggedTotalLLM'' @ 140f01870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformUntaggedTotalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformUntaggedTotalLLM ==
      (FThreadSafeStaticStat<FStat_STAT_PlatformUntaggedTotalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformUntaggedTotalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformUntaggedTotalLLM,*pFVar1,
               L"Untagged","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformUntrackedLLM'' @ 140f01900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformUntrackedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformUntrackedLLM ==
      (FThreadSafeStaticStat<FStat_STAT_PlatformUntrackedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformUntrackedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformUntrackedLLM,*pFVar1,L"Untracked",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlatformVMLLM'' @ 140f01990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlatformVMLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlatformVMLLM == (FThreadSafeStaticStat<FStat_STAT_PlatformVMLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlatformVMLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlatformVMLLM,*pFVar1,L"VirtualMemory",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProgramSizeLLM'' @ 140f01a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProgramSizeLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProgramSizeLLM == (FThreadSafeStaticStat<FStat_STAT_ProgramSizeLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProgramSizeLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProgramSizeLLM,*pFVar1,L"Program Size",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProgramSizePlatformLLM'' @ 140f01ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProgramSizePlatformLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProgramSizePlatformLLM ==
      (FThreadSafeStaticStat<FStat_STAT_ProgramSizePlatformLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProgramSizePlatformLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProgramSizePlatformLLM,*pFVar1,
               L"Program Size","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false
               ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ProjectSummaryLLM'' @ 140f01b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ProjectSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ProjectSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_ProjectSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ProjectSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProjectSummaryLLM,*pFVar1,L"Project",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHIMiscLLM'' @ 140f01bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHIMiscLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHIMiscLLM == (FThreadSafeStaticStat<FStat_STAT_RHIMiscLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHIMiscLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIMiscLLM,*pFVar1,L"RHIMisc",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHIUnusedLLM'' @ 140f01c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHIUnusedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHIUnusedLLM == (FThreadSafeStaticStat<FStat_STAT_RHIUnusedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHIUnusedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIUnusedLLM,*pFVar1,L"RHI Unused",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RealTimeCommunicationsLLM'' @ 140f01cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RealTimeCommunicationsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RealTimeCommunicationsLLM ==
      (FThreadSafeStaticStat<FStat_STAT_RealTimeCommunicationsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RealTimeCommunicationsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RealTimeCommunicationsLLM,*pFVar1,
               L"RealTimeCommunications","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RenderTargetsLLM'' @ 140f01d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RenderTargetsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RenderTargetsLLM == (FThreadSafeStaticStat<FStat_STAT_RenderTargetsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RenderTargetsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetsLLM,*pFVar1,L"Render Targets"
               ,"STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RenderingThreadLLM'' @ 140f01e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RenderingThreadLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RenderingThreadLLM == (FThreadSafeStaticStat<FStat_STAT_RenderingThreadLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_RenderingThreadLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderingThreadLLM,*pFVar1,
               L"Rendering Thread","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReplaysLLM'' @ 140f01ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReplaysLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReplaysLLM == (FThreadSafeStaticStat<FStat_STAT_ReplaysLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReplaysLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplaysLLM,*pFVar1,L"Replays",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SceneRenderLLM'' @ 140f01f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SceneRenderLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SceneRenderLLM == (FThreadSafeStaticStat<FStat_STAT_SceneRenderLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SceneRenderLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneRenderLLM,*pFVar1,L"SceneRender",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShadersLLM'' @ 140f01fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShadersLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShadersLLM == (FThreadSafeStaticStat<FStat_STAT_ShadersLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShadersLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShadersLLM,*pFVar1,L"Shaders",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SkeletalMeshLLM'' @ 140f02050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SkeletalMeshLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SkeletalMeshLLM == (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SkeletalMeshLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshLLM,*pFVar1,L"SkeletalMesh",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMeshLLM'' @ 140f020e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMeshLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMeshLLM == (FThreadSafeStaticStat<FStat_STAT_StaticMeshLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMeshLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshLLM,*pFVar1,L"StaticMesh",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMeshSummaryLLM'' @ 140f02170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMeshSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMeshSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMeshSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMeshSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshSummaryLLM,*pFVar1,L"StaticMesh"
               ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StatsLLM'' @ 140f02200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StatsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StatsLLM == (FThreadSafeStaticStat<FStat_STAT_StatsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StatsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatsLLM,*pFVar1,L"Stats",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StreamingManagerLLM'' @ 140f02290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StreamingManagerLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StreamingManagerLLM == (FThreadSafeStaticStat<FStat_STAT_StreamingManagerLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_StreamingManagerLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamingManagerLLM,*pFVar1,
               L"StreamingManager","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TaskGraphTasksMiscLLM'' @ 140f02320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TaskGraphTasksMiscLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TaskGraphTasksMiscLLM ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraphTasksMiscLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TaskGraphTasksMiscLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraphTasksMiscLLM,*pFVar1,
               L"TaskGraph Misc Tasks","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
               ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TextureMetaDataLLM'' @ 140f023b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TextureMetaDataLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TextureMetaDataLLM == (FThreadSafeStaticStat<FStat_STAT_TextureMetaDataLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_TextureMetaDataLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMetaDataLLM,*pFVar1,
               L"TextureMetaData","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturesLLM'' @ 140f02440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturesLLM == (FThreadSafeStaticStat<FStat_STAT_TexturesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturesLLM,*pFVar1,L"Textures",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturesSummaryLLM'' @ 140f024d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturesSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturesSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_TexturesSummaryLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_TexturesSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturesSummaryLLM,*pFVar1,L"Textures",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ThreadStackLLM'' @ 140f02560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ThreadStackLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ThreadStackLLM == (FThreadSafeStaticStat<FStat_STAT_ThreadStackLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ThreadStackLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ThreadStackLLM,*pFVar1,L"ThreadStack",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ThreadStackPlatformLLM'' @ 140f025f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ThreadStackPlatformLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ThreadStackPlatformLLM ==
      (FThreadSafeStaticStat<FStat_STAT_ThreadStackPlatformLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ThreadStackPlatformLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ThreadStackPlatformLLM,*pFVar1,
               L"ThreadStackPlatform","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalLLM'' @ 140f02680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalLLM == (FThreadSafeStaticStat<FStat_STAT_TotalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalLLM,*pFVar1,L"Total",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrackedTotalLLM'' @ 140f02710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrackedTotalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrackedTotalLLM == (FThreadSafeStaticStat<FStat_STAT_TrackedTotalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrackedTotalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrackedTotalLLM,*pFVar1,L"Tracked Total",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TrackedTotalSummaryLLM'' @ 140f027a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TrackedTotalSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TrackedTotalSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_TrackedTotalSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TrackedTotalSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrackedTotalSummaryLLM,*pFVar1,L"Total",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UILLM'' @ 140f02830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UILLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UILLM == (FThreadSafeStaticStat<FStat_STAT_UILLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UILLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UILLM,*pFVar1,L"UI","STATGROUP_LLMFULL",
               "STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UISummaryLLM'' @ 140f028c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UISummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UISummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UISummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UISummaryLLM,*pFVar1,L"UI","STATGROUP_LLM"
               ,"STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UObjectLLM'' @ 140f02950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UObjectLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UObjectLLM == (FThreadSafeStaticStat<FStat_STAT_UObjectLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UObjectLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectLLM,*pFVar1,L"UObject",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UObjectSummaryLLM'' @ 140f029e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UObjectSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UObjectSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UObjectSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UObjectSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectSummaryLLM,*pFVar1,L"UObject",
               "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UntaggedTotalLLM'' @ 140f02a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UntaggedTotalLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UntaggedTotalLLM == (FThreadSafeStaticStat<FStat_STAT_UntaggedTotalLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UntaggedTotalLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UntaggedTotalLLM,*pFVar1,L"Untagged",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UntrackedLLM'' @ 140f02b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UntrackedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UntrackedLLM == (FThreadSafeStaticStat<FStat_STAT_UntrackedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UntrackedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UntrackedLLM,*pFVar1,L"Untracked",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VideoRecordingLLM'' @ 140f02b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VideoRecordingLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VideoRecordingLLM == (FThreadSafeStaticStat<FStat_STAT_VideoRecordingLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VideoRecordingLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VideoRecordingLLM,*pFVar1,
               L"VideoRecording","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VirtualTextureSystemLLM'' @ 140f02c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VirtualTextureSystemLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VirtualTextureSystemLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VirtualTextureSystemLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VirtualTextureSystemLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VirtualTextureSystemLLM,*pFVar1,
               L"VirtualTextureSystem","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
               ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WMFPlayerLLM'' @ 140f02cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WMFPlayerLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WMFPlayerLLM == (FThreadSafeStaticStat<FStat_STAT_WMFPlayerLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WMFPlayerLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WMFPlayerLLM,*pFVar1,L"WMFPlayer",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WorkingSetSizeLLM'' @ 140f02d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WorkingSetSizeLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WorkingSetSizeLLM == (FThreadSafeStaticStat<FStat_STAT_WorkingSetSizeLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WorkingSetSizeLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WorkingSetSizeLLM,*pFVar1,
               L"WorkingSetSize","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'TagName_Untagged'' @ 140f02dd0

void __cdecl _dynamic_initializer_for__TagName_Untagged__(void)

{
  FName::FName(&TagName_Untagged,L"Untagged");
  return;
}

// `dynamic_initializer_for_'TagName_UntaggedAsset'' @ 140f02df0

void __cdecl _dynamic_initializer_for__TagName_UntaggedAsset__(void)

{
  FName::FName(&TagName_UntaggedAsset,L"UntaggedAsset");
  return;
}

// `dynamic_initializer_for_'TagName_UntaggedAssetClass'' @ 140f02e10

void __cdecl _dynamic_initializer_for__TagName_UntaggedAssetClass__(void)

{
  FName::FName(&TagName_UntaggedAssetClass,L"UntaggedAssetClass");
  return;
}

// `dynamic_initializer_for_'TagName_UntaggedUObjectClasses'' @ 140f02e30

void __cdecl _dynamic_initializer_for__TagName_UntaggedUObjectClasses__(void)

{
  FName::FName(&TagName_UntaggedUObjectClasses,L"UntaggedUObjectClasses");
  return;
}

// `dynamic_initializer_for_'VerifyPersistentStorageCategory'' @ 140f02e50

void __cdecl _dynamic_initializer_for__VerifyPersistentStorageCategory__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"VerifyPersistentStorageCategory",
                      L"VerifyPersistentStorageCategory <Category>",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&VerifyPersistentStorageCategory,pIVar5);
  VerifyPersistentStorageCategory._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__VerifyPersistentStorageCategory__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_FMemory'' @ 140f02fe0

void __cdecl _dynamic_initializer_for___GCsvCategory_FMemory__(void)

{
  FString::operator=(&_GCsvCategory_FMemory.Name,L"FMemory");
  _GCsvCategory_FMemory.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_FMemory.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_FMemory__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_LLM'' @ 140f03030

void __cdecl _dynamic_initializer_for___GCsvCategory_LLM__(void)

{
  FString::operator=(&_GCsvCategory_LLM.Name,L"LLM");
  _GCsvCategory_LLM.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_LLM.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_LLM__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_LLMPlatform'' @ 140f03080

void __cdecl _dynamic_initializer_for___GCsvCategory_LLMPlatform__(void)

{
  FString::operator=(&_GCsvCategory_LLMPlatform.Name,L"LLMPlatform");
  _GCsvCategory_LLMPlatform.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_LLMPlatform.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_LLMPlatform__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_MallocBinned'' @ 140f030d0

void __cdecl _dynamic_initializer_for___GCsvCategory_MallocBinned__(void)

{
  FString::operator=(&_GCsvCategory_MallocBinned.Name,L"MallocBinned");
  _GCsvCategory_MallocBinned.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_MallocBinned.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_MallocBinned__);
  return;
}

// `scalar_deleting_destructor' @ 14166b780

void * __thiscall
FAutoConsoleCommandWithOutputDevice::_scalar_deleting_destructor_
          (FAutoConsoleCommandWithOutputDevice *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166b7c0

void * __thiscall
FAutoConsoleCommandWithWorldArgsAndOutputDevice::_scalar_deleting_destructor_
          (FAutoConsoleCommandWithWorldArgsAndOutputDevice *this,uint param_1)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166b800

void * __thiscall
IBaseDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166b850

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166ba80

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166bab0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166bb00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166bd20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166bf40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166cb70

void * __thiscall FLLMScopeTest::_scalar_deleting_destructor_(FLLMScopeTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166cc50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166ce70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,<lambda_8>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166d640

void * __thiscall FLLMMiscTest::_scalar_deleting_destructor_(FLLMMiscTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14166ed90

void * __thiscall
FTopologicalSortTest::_scalar_deleting_destructor_(FTopologicalSortTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14166eef0

void __cdecl <lambda_3>::<lambda_invoker_cdecl>(void)

{
  <lambda_3> local_res8 [32];
  
  operator()(local_res8);
  return;
}

// <lambda_invoker_cdecl> @ 14166ef00

void __cdecl <lambda_4>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FOutputDevice *local_res10;
  code *local_28;
  FOutputDevice **local_20;
  FString local_18;
  
  bVar2 = FPaths::HasProjectPersistentDownloadDir();
  if (!bVar2) {
    FOutputDevice::Log(param_1,L"No persistent download dir configured.");
    return;
  }
  pIVar3 = IFileManager::Get();
  local_20 = &local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`<lambda_4>::operator()'::__l2::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
             ::Call;
  pcVar1 = *(code **)((longlong)*pIVar3 + 0xc0);
  local_res10 = param_1;
  pFVar4 = FPaths::ProjectPersistentDownloadDir(&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar3,pwVar5,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddLambda<`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_> @ 14166f040

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FLowLevelMemTracker::ProcessCommandLine_::__l101::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::`101'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// BinarySearchBy<TArray<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,TSizedLLMAllocator<32>_>,int,TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14166f8b0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,TSizedLLMAllocator<32>_>,int,TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,TSizedLLMAllocator<32>_> *param_1,
          int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pvVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)((longlong)pvVar2 + (longlong)iVar4 * 0x18) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)((longlong)pvVar2 + (longlong)iVar5 * 0x18) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// CompareItems<TArray<int,TSizedDefaultAllocator<32>_>,int> @ 14166f930

bool __cdecl
CompareItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      iVar1 = *(int *)(lVar2 + 8 + (longlong)param_2);
      if (iVar1 != param_2->ArrayNum) {
        return false;
      }
      if ((iVar1 != 0) &&
         (iVar1 = memcmp(*(void **)(lVar2 + (longlong)param_2),(param_2->AllocatorInstance).Data,
                         (longlong)iVar1 << 2), iVar1 != 0)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DefaultConstructItems<FMallocBinnedGPU::FFreeBlockList,int> @ 14166f9b0

void __cdecl DefaultConstructItems<FMallocBinnedGPU::FFreeBlockList,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocBinnedGPU::FGlobalRecycler::FPaddedBundlePointer,int> @ 14166f9e0

void __cdecl
DefaultConstructItems<FMallocBinnedGPU::FGlobalRecycler::FPaddedBundlePointer,int>
          (void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 6);
    return;
  }
  return;
}

// DefaultConstructItems<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPoolHashBucket,unsigned___int64> @ 14166fa00

void __cdecl
DefaultConstructItems<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPoolHashBucket,unsigned___int64>
          (void *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(void **)((longlong)param_1 + 0x10) = param_1;
    *(void **)((longlong)param_1 + 0x18) = param_1;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPoolHashBucket,unsigned___int64> @ 14166fa30

void __cdecl
DefaultConstructItems<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPoolHashBucket,unsigned___int64>
          (void *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(void **)((longlong)param_1 + 0x10) = param_1;
    *(void **)((longlong)param_1 + 0x18) = param_1;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FMallocBinned2::FPoolInfo,unsigned___int64> @ 14166fa60

void __cdecl
DefaultConstructItems<FMallocBinned2::FPoolInfo,unsigned___int64>(void *param_1,ulong64 param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0x39410000;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocBinned3::FPoolInfo,unsigned___int64> @ 14166faa0

void __cdecl
DefaultConstructItems<FMallocBinned3::FPoolInfo,unsigned___int64>(void *param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0x39431234;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocBinnedGPU::FPoolInfoLarge,unsigned___int64> @ 14166fad0

void __cdecl
DefaultConstructItems<FMallocBinnedGPU::FPoolInfoLarge,unsigned___int64>
          (void *param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0x2a1;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocBinned3::FPoolInfoSmall,unsigned_int> @ 14166fb00

void __cdecl
DefaultConstructItems<FMallocBinned3::FPoolInfoSmall,unsigned_int>(void *param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined4 *)param_1 = 0x20003;
    param_1 = (void *)((longlong)param_1 + 4);
  }
  return;
}

// DefaultConstructItems<FMallocBinnedGPU::FPoolInfoSmall,unsigned_int> @ 14166fb30

void __cdecl
DefaultConstructItems<FMallocBinnedGPU::FPoolInfoSmall,unsigned_int>(void *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0x5effeed;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocBinnedGPU::FPoolTable,int> @ 14166fb60

void __cdecl DefaultConstructItems<FMallocBinnedGPU::FPoolTable,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      puVar1[-4] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMallocBinnedGPU::PoolHashBucket,unsigned___int64> @ 14166fb90

void __cdecl
DefaultConstructItems<FMallocBinnedGPU::PoolHashBucket,unsigned___int64>
          (void *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(void **)((longlong)param_1 + 0x10) = param_1;
    *(void **)((longlong)param_1 + 0x18) = param_1;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock,int> @ 14166fbc0

void __cdecl
DefaultConstructItems<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DestructItems<FPersistentStorageCategory,int> @ 14166fc10

void __cdecl
DestructItems<FPersistentStorageCategory,int>(FPersistentStorageCategory *param_1,int param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)&(param_1->FileLockRegistry).FileLockMap.field_0x48;
    do {
      DeleteCriticalSection((LPCRITICAL_SECTION)(puVar4 + 2));
      *puVar4 = 0;
      if (*(void **)(puVar4 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar4 + -2));
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar4 + -0x12));
      BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)(puVar4 + -0x14));
      if (BVar2 == '\0') {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + -0x14));
      }
      puVar4[-0x16] = 0;
      if (*(void **)(puVar4 + -0x18) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar4 + -0x18));
      }
      TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar4 + -0x28));
      DestructItems<FString,int>(*(FString **)(puVar4 + -0x32),puVar4[-0x30]);
      if (*(void **)(puVar4 + -0x32) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar4 + -0x32));
      }
      if (*(void **)(puVar4 + -0x36) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar4 + -0x36));
      }
      puVar4 = puVar4 + 0x42;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,int> @ 14166fd20

void __cdecl
DestructItems<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int>(FTagLine *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Line).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->TagName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,0>_>::FValueComparisonClass<`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::<lambda_1>_>_>_>_> @ 141672d10

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>_>::FValueComparisonClass<_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts>,TDefaultMapHashableKeyFuncs<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,0>_>::FValueComparisonClass<_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar25;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar26;
  int iVar27;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar19 = iVar18 * 2 + 1;
  iVar27 = iVar19;
  iVar20 = iVar18;
  do {
    while (param_2 <= iVar19) {
LAB_141672e9f:
      if (iVar20 == 0) {
        iVar19 = param_2 + -1;
        lVar21 = (longlong)iVar19;
        if (0 < iVar19) {
          pTVar25 = param_1 + lVar21;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x60);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
            uVar14 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
            uVar15 = *(undefined8 *)((param_1->ElementData).Pad + 0x50);
            uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 0x58);
            param_1->_s_1 = pTVar25->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x48);
            *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x40);
            *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x58);
            *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x50);
            *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
                 *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x60);
            pTVar25->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10) = uVar7;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18) = uVar8;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20) = uVar9;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28) = uVar10;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x30) = uVar11;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x38) = uVar12;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x40) = uVar13;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x48) = uVar14;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x50) = uVar15;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x58) = uVar16;
            *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x60) = uVar2;
            iVar27 = 0;
            if (1 < iVar19) {
              do {
                iVar18 = iVar27 * 2;
                iVar20 = iVar18 + 1;
                if (iVar18 + 2 < iVar19) {
                  if (*(ulonglong *)((longlong)iVar20 * 0x68 + 0x38 + (longlong)param_1) <
                      *(ulonglong *)((longlong)iVar18 * 0x68 + 0x108 + (longlong)param_1)) {
                    iVar20 = iVar18;
                  }
                  iVar20 = iVar20 + 1;
                }
                lVar22 = (longlong)iVar27;
                lVar24 = lVar22 * 0x68;
                pTVar26 = param_1 + iVar20;
                if (*(ulonglong *)(lVar24 + 0x38 + (longlong)param_1) <=
                    *(ulonglong *)((pTVar26->ElementData).Pad + 0x38)) break;
                uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)(lVar24 + 0x60 + (longlong)param_1);
                TVar5 = param_1[lVar22]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar22].ElementData.Pad + 8);
                puVar1 = (undefined8 *)(lVar24 + 0x10 + (longlong)param_1);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)(lVar24 + 0x20 + (longlong)param_1);
                uVar9 = *puVar1;
                uVar10 = puVar1[1];
                puVar1 = (undefined8 *)(lVar24 + 0x30 + (longlong)param_1);
                uVar11 = *puVar1;
                uVar12 = puVar1[1];
                puVar1 = (undefined8 *)(lVar24 + 0x40 + (longlong)param_1);
                uVar13 = *puVar1;
                uVar14 = puVar1[1];
                puVar1 = (undefined8 *)(lVar24 + 0x50 + (longlong)param_1);
                uVar15 = *puVar1;
                uVar16 = puVar1[1];
                param_1[lVar22]._s_1 = pTVar26->_s_1;
                *(undefined8 *)((longlong)param_1[lVar22].ElementData.Pad + 8) = uVar4;
                uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x18);
                puVar1 = (undefined8 *)(lVar24 + 0x10 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x10);
                puVar1[1] = uVar4;
                uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x28);
                puVar1 = (undefined8 *)(lVar24 + 0x20 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x20);
                puVar1[1] = uVar4;
                uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x38);
                puVar1 = (undefined8 *)(lVar24 + 0x30 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x30);
                puVar1[1] = uVar4;
                uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x48);
                puVar1 = (undefined8 *)(lVar24 + 0x40 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x40);
                puVar1[1] = uVar4;
                uVar4 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x58);
                puVar1 = (undefined8 *)(lVar24 + 0x50 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar26->ElementData).Pad + 0x50);
                puVar1[1] = uVar4;
                *(undefined8 *)(lVar24 + 0x60 + (longlong)param_1) =
                     *(undefined8 *)((pTVar26->ElementData).Pad + 0x60);
                pTVar26->_s_1 = TVar5;
                *(undefined8 *)((pTVar26->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x10) = uVar7;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x18) = uVar8;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x20) = uVar9;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x28) = uVar10;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x30) = uVar11;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x38) = uVar12;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x40) = uVar13;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x48) = uVar14;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x50) = uVar15;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x58) = uVar16;
                *(undefined8 *)((pTVar26->ElementData).Pad + 0x60) = uVar2;
                iVar27 = iVar20;
              } while (iVar20 * 2 + 1 < iVar19);
            }
            iVar19 = iVar19 + -1;
            lVar21 = lVar21 + -1;
            pTVar25 = pTVar25 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar18 = iVar20 + -1;
      iVar19 = iVar27 + -2;
      iVar27 = iVar19;
      iVar20 = iVar18;
    }
    iVar19 = iVar18 * 2;
    iVar23 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      if (*(ulonglong *)((longlong)iVar23 * 0x68 + 0x38 + (longlong)param_1) <
          *(ulonglong *)((longlong)iVar19 * 0x68 + 0x108 + (longlong)param_1)) {
        iVar23 = iVar19;
      }
      iVar23 = iVar23 + 1;
    }
    lVar21 = (longlong)iVar18;
    lVar22 = lVar21 * 0x68;
    pTVar25 = param_1 + iVar23;
    if (*(ulonglong *)(lVar22 + 0x38 + (longlong)param_1) <=
        *(ulonglong *)((pTVar25->ElementData).Pad + 0x38)) goto LAB_141672e9f;
    uVar4 = *(undefined8 *)((pTVar25->ElementData).Pad + 8);
    iVar19 = iVar23 * 2 + 1;
    uVar2 = *(undefined8 *)(lVar22 + 0x60 + (longlong)param_1);
    TVar5 = param_1[lVar21]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar21].ElementData.Pad + 8);
    puVar1 = (undefined8 *)(lVar22 + 0x10 + (longlong)param_1);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    puVar1 = (undefined8 *)(lVar22 + 0x20 + (longlong)param_1);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    puVar1 = (undefined8 *)(lVar22 + 0x30 + (longlong)param_1);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    puVar1 = (undefined8 *)(lVar22 + 0x40 + (longlong)param_1);
    uVar13 = *puVar1;
    uVar14 = puVar1[1];
    puVar1 = (undefined8 *)(lVar22 + 0x50 + (longlong)param_1);
    uVar15 = *puVar1;
    uVar16 = puVar1[1];
    param_1[lVar21]._s_1 = pTVar25->_s_1;
    *(undefined8 *)((longlong)param_1[lVar21].ElementData.Pad + 8) = uVar4;
    uVar4 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x18);
    puVar1 = (undefined8 *)(lVar22 + 0x10 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x10);
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x28);
    puVar1 = (undefined8 *)(lVar22 + 0x20 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x20);
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x38);
    puVar1 = (undefined8 *)(lVar22 + 0x30 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x30);
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x48);
    puVar1 = (undefined8 *)(lVar22 + 0x40 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x40);
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x58);
    puVar1 = (undefined8 *)(lVar22 + 0x50 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x50);
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar22 + 0x60 + (longlong)param_1) =
         *(undefined8 *)((pTVar25->ElementData).Pad + 0x60);
    pTVar25->_s_1 = TVar5;
    *(undefined8 *)((pTVar25->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x10) = uVar7;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x18) = uVar8;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x20) = uVar9;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x28) = uVar10;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x30) = uVar11;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x38) = uVar12;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x40) = uVar13;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x48) = uVar14;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x50) = uVar15;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x58) = uVar16;
    *(undefined8 *)((pTVar25->ElementData).Pad + 0x60) = uVar2;
    iVar18 = iVar23;
  } while( true );
}

// HeapSortInternal<FForkedPageAllocation,int,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,FForkedPageAllocation_const_&)> @ 141673080

void __cdecl
AlgoImpl::
HeapSortInternal<FForkedPageAllocation,int,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,FForkedPageAllocation_const_&)>
          (FForkedPageAllocation *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_FForkedPageAllocation_ptr_FForkedPageAllocation_ptr *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  FForkedPageAllocation *pFVar21;
  FForkedPageAllocation *pFVar22;
  FForkedPageAllocation *pFVar23;
  int iVar24;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar24 = iVar17;
  iVar20 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_1416731d3:
      if (iVar20 == 0) {
        iVar17 = param_2 + -1;
        lVar18 = (longlong)iVar17;
        if (0 < iVar17) {
          pFVar23 = param_1 + lVar18;
          do {
            uVar14 = pFVar23->PageEnd;
            uVar10 = param_1->PageStart;
            uVar2 = *(undefined4 *)((longlong)&param_1->PageStart + 4);
            uVar11 = param_1->PageEnd;
            uVar3 = *(undefined4 *)((longlong)&param_1->PageEnd + 4);
            uVar12 = param_1->SharedCleanKiB;
            uVar4 = *(undefined4 *)((longlong)&param_1->SharedCleanKiB + 4);
            uVar13 = param_1->SharedDirtyKiB;
            uVar5 = *(undefined4 *)((longlong)&param_1->SharedDirtyKiB + 4);
            uVar8 = param_1->PrivateCleanKiB;
            uVar9 = param_1->PrivateDirtyKiB;
            param_1->PageStart = pFVar23->PageStart;
            param_1->PageEnd = uVar14;
            uVar6 = *(undefined4 *)((longlong)&pFVar23->SharedCleanKiB + 4);
            uVar14 = pFVar23->SharedDirtyKiB;
            uVar7 = *(undefined4 *)((longlong)&pFVar23->SharedDirtyKiB + 4);
            *(int *)&param_1->SharedCleanKiB = (int)pFVar23->SharedCleanKiB;
            *(undefined4 *)((longlong)&param_1->SharedCleanKiB + 4) = uVar6;
            *(int *)&param_1->SharedDirtyKiB = (int)uVar14;
            *(undefined4 *)((longlong)&param_1->SharedDirtyKiB + 4) = uVar7;
            uVar6 = *(undefined4 *)((longlong)&pFVar23->PrivateCleanKiB + 4);
            uVar14 = pFVar23->PrivateDirtyKiB;
            uVar7 = *(undefined4 *)((longlong)&pFVar23->PrivateDirtyKiB + 4);
            *(int *)&param_1->PrivateCleanKiB = (int)pFVar23->PrivateCleanKiB;
            *(undefined4 *)((longlong)&param_1->PrivateCleanKiB + 4) = uVar6;
            *(int *)&param_1->PrivateDirtyKiB = (int)uVar14;
            *(undefined4 *)((longlong)&param_1->PrivateDirtyKiB + 4) = uVar7;
            *(int *)&pFVar23->PageStart = (int)uVar10;
            *(undefined4 *)((longlong)&pFVar23->PageStart + 4) = uVar2;
            *(int *)&pFVar23->PageEnd = (int)uVar11;
            *(undefined4 *)((longlong)&pFVar23->PageEnd + 4) = uVar3;
            *(int *)&pFVar23->SharedCleanKiB = (int)uVar12;
            *(undefined4 *)((longlong)&pFVar23->SharedCleanKiB + 4) = uVar4;
            *(int *)&pFVar23->SharedDirtyKiB = (int)uVar13;
            *(undefined4 *)((longlong)&pFVar23->SharedDirtyKiB + 4) = uVar5;
            pFVar23->PrivateCleanKiB = uVar8;
            pFVar23->PrivateDirtyKiB = uVar9;
            iVar24 = 0;
            if (1 < iVar17) {
              do {
                iVar16 = iVar24 * 2;
                iVar20 = iVar16 + 1;
                if (iVar16 + 2 < iVar17) {
                  bVar15 = (*param_4)(param_1 + (iVar16 + 2),param_1 + iVar20);
                  if (bVar15) {
                    iVar20 = iVar16;
                  }
                  iVar20 = iVar20 + 1;
                }
                pFVar22 = param_1 + iVar20;
                pFVar21 = param_1 + iVar24;
                bVar15 = (*param_4)(pFVar21,pFVar22);
                if (!bVar15) break;
                uVar14 = pFVar22->PageEnd;
                uVar10 = pFVar21->PageStart;
                uVar2 = *(undefined4 *)((longlong)&pFVar21->PageStart + 4);
                uVar11 = pFVar21->PageEnd;
                uVar3 = *(undefined4 *)((longlong)&pFVar21->PageEnd + 4);
                uVar12 = pFVar21->SharedCleanKiB;
                uVar4 = *(undefined4 *)((longlong)&pFVar21->SharedCleanKiB + 4);
                uVar13 = pFVar21->SharedDirtyKiB;
                uVar5 = *(undefined4 *)((longlong)&pFVar21->SharedDirtyKiB + 4);
                uVar8 = pFVar21->PrivateCleanKiB;
                uVar9 = pFVar21->PrivateDirtyKiB;
                pFVar21->PageStart = pFVar22->PageStart;
                pFVar21->PageEnd = uVar14;
                uVar6 = *(undefined4 *)((longlong)&pFVar22->SharedCleanKiB + 4);
                uVar14 = pFVar22->SharedDirtyKiB;
                uVar7 = *(undefined4 *)((longlong)&pFVar22->SharedDirtyKiB + 4);
                *(int *)&pFVar21->SharedCleanKiB = (int)pFVar22->SharedCleanKiB;
                *(undefined4 *)((longlong)&pFVar21->SharedCleanKiB + 4) = uVar6;
                *(int *)&pFVar21->SharedDirtyKiB = (int)uVar14;
                *(undefined4 *)((longlong)&pFVar21->SharedDirtyKiB + 4) = uVar7;
                uVar6 = *(undefined4 *)((longlong)&pFVar22->PrivateCleanKiB + 4);
                uVar14 = pFVar22->PrivateDirtyKiB;
                uVar7 = *(undefined4 *)((longlong)&pFVar22->PrivateDirtyKiB + 4);
                *(int *)&pFVar21->PrivateCleanKiB = (int)pFVar22->PrivateCleanKiB;
                *(undefined4 *)((longlong)&pFVar21->PrivateCleanKiB + 4) = uVar6;
                *(int *)&pFVar21->PrivateDirtyKiB = (int)uVar14;
                *(undefined4 *)((longlong)&pFVar21->PrivateDirtyKiB + 4) = uVar7;
                *(int *)&pFVar22->PageStart = (int)uVar10;
                *(undefined4 *)((longlong)&pFVar22->PageStart + 4) = uVar2;
                *(int *)&pFVar22->PageEnd = (int)uVar11;
                *(undefined4 *)((longlong)&pFVar22->PageEnd + 4) = uVar3;
                *(int *)&pFVar22->SharedCleanKiB = (int)uVar12;
                *(undefined4 *)((longlong)&pFVar22->SharedCleanKiB + 4) = uVar4;
                *(int *)&pFVar22->SharedDirtyKiB = (int)uVar13;
                *(undefined4 *)((longlong)&pFVar22->SharedDirtyKiB + 4) = uVar5;
                pFVar22->PrivateCleanKiB = uVar8;
                pFVar22->PrivateDirtyKiB = uVar9;
                iVar24 = iVar20;
              } while (iVar20 * 2 + 1 < iVar17);
            }
            lVar18 = lVar18 + -1;
            iVar17 = iVar17 + -1;
            pFVar23 = pFVar23 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar16 = iVar20 + -1;
      iVar17 = iVar24 + -2;
      iVar24 = iVar17;
      iVar20 = iVar16;
    }
    iVar17 = iVar16 * 2;
    iVar19 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      bVar15 = (*param_4)(param_1 + (iVar17 + 2),param_1 + iVar19);
      if (bVar15) {
        iVar19 = iVar17;
      }
      iVar19 = iVar19 + 1;
    }
    pFVar21 = param_1 + iVar19;
    pFVar23 = param_1 + iVar16;
    bVar15 = (*param_4)(pFVar23,pFVar21);
    if (!bVar15) goto LAB_1416731d3;
    uVar14 = pFVar21->PageEnd;
    iVar17 = iVar19 * 2 + 1;
    uVar8 = pFVar23->PageStart;
    uVar9 = pFVar23->PageEnd;
    uVar10 = pFVar23->SharedCleanKiB;
    uVar11 = pFVar23->SharedDirtyKiB;
    uVar12 = pFVar23->PrivateCleanKiB;
    uVar13 = pFVar23->PrivateDirtyKiB;
    pFVar23->PageStart = pFVar21->PageStart;
    pFVar23->PageEnd = uVar14;
    uVar14 = pFVar21->SharedDirtyKiB;
    pFVar23->SharedCleanKiB = pFVar21->SharedCleanKiB;
    pFVar23->SharedDirtyKiB = uVar14;
    uVar14 = pFVar21->PrivateDirtyKiB;
    pFVar23->PrivateCleanKiB = pFVar21->PrivateCleanKiB;
    pFVar23->PrivateDirtyKiB = uVar14;
    pFVar21->PageStart = uVar8;
    pFVar21->PageEnd = uVar9;
    pFVar21->SharedCleanKiB = uVar10;
    pFVar21->SharedDirtyKiB = uVar11;
    pFVar21->PrivateCleanKiB = uVar12;
    pFVar21->PrivateDirtyKiB = uVar13;
    iVar16 = iVar19;
  } while( true );
}

// HeapSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_> @ 141673340

void __cdecl
AlgoImpl::HeapSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_>
          (FSizeTableEntry *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FSizeTableEntry *pFVar1;
  FSizeTableEntry *pFVar2;
  FSizeTableEntry FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_141673422:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].BinSize < param_1[iVar6].BinSize) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->BinSize <= pFVar2->BinSize) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].BinSize < param_1[iVar8].BinSize) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->BinSize <= pFVar2->BinSize) goto LAB_141673422;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,int,FIdentityFunctor,TDereferenceWrapper<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,`FLowLevelMemTracker::DumpToLog'::__l14::<lambda_1>_>_> @ 1416734d0

void __cdecl
AlgoImpl::
HeapSortInternal<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int,FIdentityFunctor,TDereferenceWrapper<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,_FLowLevelMemTracker::DumpToLog_::__l14::<lambda_1>_>_>
          (FTagLine *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::FTagLine,_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  FTagLine *pFVar2;
  FTagLine *pFVar3;
  long64 lVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  FTagLine *pFVar22;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,_FLowLevelMemTracker::DumpToLog_::__l14::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::FTagLine,_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::<lambda_1>_>
              *)&local_res20);
  iVar19 = param_2 + -1;
  lVar21 = (longlong)iVar19;
  if (0 < iVar19) {
    pFVar22 = param_1 + lVar21;
    do {
      iVar18 = (pFVar22->TagName).Data.ArrayNum;
      iVar14 = (pFVar22->TagName).Data.ArrayMax;
      iVar20 = 0;
      lVar4 = param_1->Size;
      pFVar6 = (param_1->TagName).Data.AllocatorInstance.Data;
      iVar8 = (param_1->TagName).Data.ArrayNum;
      iVar9 = (param_1->TagName).Data.ArrayMax;
      pFVar7 = (param_1->Line).Data.AllocatorInstance.Data;
      iVar10 = (param_1->Line).Data.ArrayNum;
      iVar11 = (param_1->Line).Data.ArrayMax;
      (param_1->TagName).Data.AllocatorInstance.Data =
           (pFVar22->TagName).Data.AllocatorInstance.Data;
      (param_1->TagName).Data.ArrayNum = iVar18;
      (param_1->TagName).Data.ArrayMax = iVar14;
      iVar18 = (pFVar22->Line).Data.ArrayNum;
      iVar14 = (pFVar22->Line).Data.ArrayMax;
      (param_1->Line).Data.AllocatorInstance.Data = (pFVar22->Line).Data.AllocatorInstance.Data;
      (param_1->Line).Data.ArrayNum = iVar18;
      (param_1->Line).Data.ArrayMax = iVar14;
      param_1->Size = pFVar22->Size;
      (pFVar22->TagName).Data.AllocatorInstance.Data = pFVar6;
      (pFVar22->TagName).Data.ArrayNum = iVar8;
      (pFVar22->TagName).Data.ArrayMax = iVar9;
      (pFVar22->Line).Data.AllocatorInstance.Data = pFVar7;
      (pFVar22->Line).Data.ArrayNum = iVar10;
      (pFVar22->Line).Data.ArrayMax = iVar11;
      pFVar22->Size = lVar4;
      if (1 < iVar19) {
        do {
          iVar14 = iVar20 * 2;
          iVar18 = iVar14 + 1;
          if (iVar14 + 2 < iVar19) {
            lVar1 = (longlong)iVar14 + 2;
            lVar15 = (longlong)iVar14 + 1;
            if (param_1[lVar1].Size == param_1[lVar15].Size) {
              if (param_1[lVar15].TagName.Data.ArrayNum == 0) {
                pwVar17 = L"";
              }
              else {
                pwVar17 = (wchar_t *)param_1[lVar15].TagName.Data.AllocatorInstance.Data;
              }
              if (param_1[lVar1].TagName.Data.ArrayNum == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)param_1[lVar1].TagName.Data.AllocatorInstance.Data;
              }
              uVar13 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar17);
              uVar13 = uVar13 >> 0x1f;
            }
            else {
              uVar13 = (uint)(param_1[lVar15].Size < param_1[lVar1].Size);
            }
            if (uVar13 != 0) {
              iVar18 = iVar14;
            }
            iVar18 = iVar18 + 1;
          }
          pFVar2 = param_1 + iVar20;
          pFVar3 = param_1 + iVar18;
          if (pFVar2->Size == param_1[iVar18].Size) {
            if ((pFVar3->TagName).Data.ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(pFVar3->TagName).Data.AllocatorInstance.Data;
            }
            if ((pFVar2->TagName).Data.ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar2->TagName).Data.AllocatorInstance.Data;
            }
            iVar14 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar17);
            bVar12 = SUB41((uint)iVar14 >> 0x1f,0);
          }
          else {
            bVar12 = param_1[iVar18].Size <= pFVar2->Size;
          }
          if (bVar12 == false) break;
          iVar14 = (pFVar3->TagName).Data.ArrayNum;
          iVar8 = (pFVar3->TagName).Data.ArrayMax;
          pFVar6 = (pFVar2->TagName).Data.AllocatorInstance.Data;
          iVar9 = (pFVar2->TagName).Data.ArrayNum;
          iVar10 = (pFVar2->TagName).Data.ArrayMax;
          pFVar7 = (pFVar2->Line).Data.AllocatorInstance.Data;
          iVar11 = (pFVar2->Line).Data.ArrayNum;
          iVar20 = (pFVar2->Line).Data.ArrayMax;
          lVar4 = pFVar2->Size;
          (pFVar2->TagName).Data.AllocatorInstance.Data =
               (pFVar3->TagName).Data.AllocatorInstance.Data;
          (pFVar2->TagName).Data.ArrayNum = iVar14;
          (pFVar2->TagName).Data.ArrayMax = iVar8;
          iVar14 = (pFVar3->Line).Data.ArrayNum;
          iVar8 = (pFVar3->Line).Data.ArrayMax;
          (pFVar2->Line).Data.AllocatorInstance.Data = (pFVar3->Line).Data.AllocatorInstance.Data;
          (pFVar2->Line).Data.ArrayNum = iVar14;
          (pFVar2->Line).Data.ArrayMax = iVar8;
          pFVar2->Size = pFVar3->Size;
          (pFVar3->TagName).Data.AllocatorInstance.Data = pFVar6;
          (pFVar3->TagName).Data.ArrayNum = iVar9;
          (pFVar3->TagName).Data.ArrayMax = iVar10;
          (pFVar3->Line).Data.AllocatorInstance.Data = pFVar7;
          (pFVar3->Line).Data.ArrayNum = iVar11;
          (pFVar3->Line).Data.ArrayMax = iVar20;
          pFVar3->Size = lVar4;
          iVar20 = iVar18;
        } while (iVar18 * 2 + 1 < iVar19);
      }
      iVar19 = iVar19 + -1;
      lVar21 = lVar21 + -1;
      pFVar22 = pFVar22 + -1;
    } while (0 < lVar21);
  }
  return;
}

// HeapifyInternal<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,`FLowLevelMemTracker::DumpToLog'::__l14::<lambda_1>_>_>_> @ 141673700

void __cdecl
AlgoImpl::
HeapifyInternal<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,_FLowLevelMemTracker::DumpToLog_::__l14::<lambda_1>_>_>_>
          (FTagLine *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::FTagLine,_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  FTagLine *pFVar2;
  FTagLine *pFVar3;
  long64 lVar4;
  code *pcVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar20 = iVar14 * 2 + 1;
  iVar6 = iVar20;
  iVar21 = iVar14;
  do {
    while (param_2 <= iVar20) {
LAB_14167388d:
      if (iVar21 == 0) {
        return;
      }
      iVar14 = iVar21 + -1;
      iVar20 = iVar6 + -2;
      iVar6 = iVar20;
      iVar21 = iVar14;
    }
    iVar20 = iVar14 * 2;
    iVar19 = iVar20 + 1;
    if (iVar20 + 2 < param_2) {
      lVar1 = (longlong)iVar20 + 2;
      lVar16 = (longlong)iVar20 + 1;
      if (param_1[lVar1].Size == param_1[lVar16].Size) {
        if (param_1[lVar16].TagName.Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)param_1[lVar16].TagName.Data.AllocatorInstance.Data;
        }
        if (param_1[lVar1].TagName.Data.ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)param_1[lVar1].TagName.Data.AllocatorInstance.Data;
        }
        uVar15 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
        uVar15 = uVar15 >> 0x1f;
      }
      else {
        uVar15 = (uint)(param_1[lVar16].Size < param_1[lVar1].Size);
      }
      if (uVar15 != 0) {
        iVar19 = iVar20;
      }
      iVar19 = iVar19 + 1;
    }
    pFVar2 = param_1 + iVar14;
    pFVar3 = param_1 + iVar19;
    if (pFVar2->Size == param_1[iVar19].Size) {
      if ((pFVar3->TagName).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar3->TagName).Data.AllocatorInstance.Data;
      }
      if ((pFVar2->TagName).Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar2->TagName).Data.AllocatorInstance.Data;
      }
      iVar20 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
      bVar13 = SUB41((uint)iVar20 >> 0x1f,0);
    }
    else {
      bVar13 = param_1[iVar19].Size <= pFVar2->Size;
    }
    if (bVar13 == false) goto LAB_14167388d;
    iVar20 = (pFVar3->TagName).Data.ArrayNum;
    iVar14 = (pFVar3->TagName).Data.ArrayMax;
    pFVar7 = (pFVar2->TagName).Data.AllocatorInstance.Data;
    iVar9 = (pFVar2->TagName).Data.ArrayNum;
    iVar10 = (pFVar2->TagName).Data.ArrayMax;
    pFVar8 = (pFVar2->Line).Data.AllocatorInstance.Data;
    iVar11 = (pFVar2->Line).Data.ArrayNum;
    iVar12 = (pFVar2->Line).Data.ArrayMax;
    lVar4 = pFVar2->Size;
    (pFVar2->TagName).Data.AllocatorInstance.Data = (pFVar3->TagName).Data.AllocatorInstance.Data;
    (pFVar2->TagName).Data.ArrayNum = iVar20;
    (pFVar2->TagName).Data.ArrayMax = iVar14;
    iVar20 = (pFVar3->Line).Data.ArrayNum;
    iVar14 = (pFVar3->Line).Data.ArrayMax;
    (pFVar2->Line).Data.AllocatorInstance.Data = (pFVar3->Line).Data.AllocatorInstance.Data;
    (pFVar2->Line).Data.ArrayNum = iVar20;
    (pFVar2->Line).Data.ArrayMax = iVar14;
    pFVar2->Size = pFVar3->Size;
    (pFVar3->TagName).Data.AllocatorInstance.Data = pFVar7;
    (pFVar3->TagName).Data.ArrayNum = iVar9;
    (pFVar3->TagName).Data.ArrayMax = iVar10;
    iVar20 = iVar19 * 2 + 1;
    (pFVar3->Line).Data.AllocatorInstance.Data = pFVar8;
    (pFVar3->Line).Data.ArrayNum = iVar11;
    (pFVar3->Line).Data.ArrayMax = iVar12;
    pFVar3->Size = lVar4;
    iVar14 = iVar19;
  } while( true );
}

// IndexOfBy<TArray<FPersistentStorageCategory,TSizedDefaultAllocator<32>_>,FString,`FPersistentStorageManager::InitCategories'::__l2::<lambda_1>_> @ 1416738d0

int __cdecl
AlgoImpl::
IndexOfBy<TArray<FPersistentStorageCategory,TSizedDefaultAllocator<32>_>,FString,_FPersistentStorageManager::InitCategories_::__l2::<lambda_1>_>
          (TArray<FPersistentStorageCategory,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  iVar1 = param_1->ArrayNum;
  uVar4 = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  uVar5 = uVar4;
  if (0 < (longlong)iVar1) {
    do {
      local_30 = *(int *)(pFVar6 + 8);
      lVar3 = (longlong)local_30;
      _Src = *(void **)pFVar6;
      local_38.Data = (FScriptContainerElement *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_30,0,&local_38,local_30,&local_2c);
        memcpy(local_38.Data,_Src,lVar3 * 2);
      }
      iVar2 = (param_2->Data).ArrayNum;
      if (local_30 == iVar2) {
        if (local_30 < 2) {
          bVar7 = true;
        }
        else {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_38.Data,
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar2 == 0;
        }
      }
      else {
        bVar7 = iVar2 + local_30 == 1;
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (bVar7) {
        return (int)uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar5 = uVar5 + 1;
      pFVar6 = pFVar6 + 0x108;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  return -1;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,0>_>::FValueComparisonClass<`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::<lambda_1>_>_>_>_> @ 141673a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>_>::FValueComparisonClass<_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts>,TDefaultMapHashableKeyFuncs<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,0>_>::FValueComparisonClass<_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  ulonglong *puVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *pTVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> **ppTVar24;
  float fVar25;
  undefined1 auStack_3a8 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *local_378;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *local_368;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  if (1 < param_2) {
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar25 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar25;
    memset(local_350,0,0x2e8);
    ppTVar24 = &local_368;
    do {
      pTVar18 = ppTVar24[1];
      pTVar23 = *ppTVar24;
      pTVar2 = ppTVar24[2];
      local_378._0_4_ = (int)pTVar2;
      iVar17 = (int)(((longlong)pTVar18 - (longlong)pTVar23) / 0x68) + 1;
      pTVar22 = pTVar23;
      if ((int)local_378 != 0) {
LAB_141673ae0:
        if (8 < iVar17) {
          uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 8);
          pTVar20 = pTVar18 + 1;
          pTVar23 = pTVar22 + iVar17 / 2;
          TVar5 = pTVar23->_s_1;
          uVar6 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
          uVar7 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
          uVar10 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
          uVar11 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
          uVar12 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
          uVar13 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40);
          uVar14 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48);
          uVar15 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50);
          uVar16 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58);
          uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60);
          pTVar23->_s_1 = pTVar22->_s_1;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar4;
          uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar4;
          uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar4;
          uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar4;
          uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48) = uVar4;
          uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58) = uVar4;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x60);
          pTVar22->_s_1 = TVar5;
          *(undefined8 *)((pTVar22->ElementData).Pad + 8) = uVar6;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x20) = uVar9;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x28) = uVar10;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x30) = uVar11;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x38) = uVar12;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x40) = uVar13;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x48) = uVar14;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x50) = uVar15;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x58) = uVar16;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x60) = uVar3;
          pTVar23 = pTVar22;
LAB_141673b80:
          pTVar19 = pTVar23;
          pTVar23 = pTVar19 + 1;
          if (pTVar23 <= pTVar18) goto code_r0x000141673b89;
          goto LAB_141673b93;
        }
        for (; pTVar2 = pTVar22, pTVar23 = pTVar22, pTVar22 < pTVar18; pTVar18 = pTVar18 + -1) {
          while (pTVar20 = pTVar23 + 1, pTVar20 <= pTVar18) {
            puVar1 = (ulonglong *)((longlong)pTVar23 + 0xa0);
            pTVar23 = pTVar20;
            if (*puVar1 < *(ulonglong *)((pTVar2->ElementData).Pad + 0x38)) {
              pTVar2 = pTVar20;
            }
          }
          TVar5 = pTVar2->_s_1;
          uVar4 = *(undefined8 *)((pTVar2->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x60);
          uVar6 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x10);
          uVar7 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x18);
          uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
          uVar9 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x20);
          uVar10 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x28);
          uVar11 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x30);
          uVar12 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x38);
          uVar13 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x40);
          uVar14 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x48);
          uVar15 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x50);
          uVar16 = *(undefined8 *)((pTVar2->ElementData).Pad + 0x58);
          pTVar2->_s_1 = pTVar18->_s_1;
          *(undefined8 *)((pTVar2->ElementData).Pad + 8) = uVar8;
          uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x18) = uVar8;
          uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x28) = uVar8;
          uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x38);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x30);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x38) = uVar8;
          uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x48);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x40);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x48) = uVar8;
          uVar8 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x58);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x50);
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x58) = uVar8;
          *(undefined8 *)((pTVar2->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x60);
          pTVar18->_s_1 = TVar5;
          *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = uVar9;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x28) = uVar10;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x30) = uVar11;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x38) = uVar12;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x40) = uVar13;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x48) = uVar14;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x50) = uVar15;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x58) = uVar16;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x60) = uVar3;
        }
        goto LAB_141673d84;
      }
LAB_141673d75:
      local_378 = pTVar2;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>_>::FValueComparisonClass<_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::<lambda_1>_>_>_>_>
                (pTVar23,iVar17,param_3,param_4);
LAB_141673d84:
      ppTVar24 = ppTVar24 + -3;
    } while (&local_368 <= ppTVar24);
  }
  return;
code_r0x000141673b89:
  if (*(ulonglong *)((pTVar22->ElementData).Pad + 0x38) <= *(ulonglong *)((longlong)pTVar19 + 0xa0))
  goto LAB_141673b80;
LAB_141673b93:
  do {
    pTVar21 = pTVar20;
    pTVar20 = pTVar21 + -1;
    if (pTVar20 <= pTVar22) break;
  } while (*(ulonglong *)((longlong)pTVar21 + -0x30) <=
           *(ulonglong *)((pTVar22->ElementData).Pad + 0x38));
  uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x60);
  if (pTVar23 <= pTVar20) {
    TVar5 = pTVar23->_s_1;
    uVar6 = *(undefined8 *)((longlong)pTVar19 + 0x70);
    uVar7 = *(undefined8 *)((longlong)pTVar19 + 0x78);
    uVar8 = *(undefined8 *)((longlong)pTVar19 + 0x80);
    uVar9 = *(undefined8 *)((longlong)pTVar19 + 0x88);
    uVar10 = *(undefined8 *)((longlong)pTVar19 + 0x90);
    uVar11 = *(undefined8 *)((longlong)pTVar19 + 0x98);
    uVar12 = *(undefined8 *)((longlong)pTVar19 + 0xa0);
    uVar13 = *(undefined8 *)((longlong)pTVar19 + 0xa8);
    uVar14 = *(undefined8 *)((longlong)pTVar19 + 0xb0);
    uVar15 = *(undefined8 *)((longlong)pTVar19 + 0xb8);
    uVar16 = *(undefined8 *)((longlong)pTVar19 + 0xc0);
    uVar4 = *(undefined8 *)((longlong)pTVar19 + 200);
    pTVar23->_s_1 = pTVar20->_s_1;
    *(undefined8 *)((longlong)pTVar19 + 0x70) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x50);
    *(undefined8 *)((longlong)pTVar19 + 0x78) = *(undefined8 *)((longlong)pTVar21 + -0x58);
    *(undefined8 *)((longlong)pTVar19 + 0x80) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x40);
    *(undefined8 *)((longlong)pTVar19 + 0x88) = *(undefined8 *)((longlong)pTVar21 + -0x48);
    *(undefined8 *)((longlong)pTVar19 + 0x90) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x30);
    *(undefined8 *)((longlong)pTVar19 + 0x98) = *(undefined8 *)((longlong)pTVar21 + -0x38);
    *(undefined8 *)((longlong)pTVar19 + 0xa0) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x20);
    *(undefined8 *)((longlong)pTVar19 + 0xa8) = *(undefined8 *)((longlong)pTVar21 + -0x28);
    *(undefined8 *)((longlong)pTVar19 + 0xb0) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x10);
    *(undefined8 *)((longlong)pTVar19 + 0xb8) = *(undefined8 *)((longlong)pTVar21 + -0x18);
    *(undefined8 *)((longlong)pTVar19 + 0xc0) = uVar3;
    *(undefined8 *)((longlong)pTVar19 + 200) = *(undefined8 *)((longlong)pTVar21 + -8);
    pTVar20->_s_1 = TVar5;
    *(undefined8 *)((longlong)pTVar21 + -0x60) = uVar6;
    *(undefined8 *)((longlong)pTVar21 + -0x58) = uVar7;
    *(undefined8 *)((longlong)pTVar21 + -0x50) = uVar8;
    *(undefined8 *)((longlong)pTVar21 + -0x48) = uVar9;
    *(undefined8 *)((longlong)pTVar21 + -0x40) = uVar10;
    *(undefined8 *)((longlong)pTVar21 + -0x38) = uVar11;
    *(undefined8 *)((longlong)pTVar21 + -0x30) = uVar12;
    *(undefined8 *)((longlong)pTVar21 + -0x28) = uVar13;
    *(undefined8 *)((longlong)pTVar21 + -0x20) = uVar14;
    *(undefined8 *)((longlong)pTVar21 + -0x18) = uVar15;
    *(undefined8 *)((longlong)pTVar21 + -0x10) = uVar16;
    *(undefined8 *)((longlong)pTVar21 + -8) = uVar4;
    goto LAB_141673b80;
  }
  TVar5 = pTVar22->_s_1;
  uVar6 = *(undefined8 *)((pTVar22->ElementData).Pad + 8);
  uVar7 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x10);
  uVar8 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x18);
  local_378._0_4_ = (int)local_378 + -1;
  uVar9 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x20);
  uVar10 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x28);
  uVar11 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x30);
  uVar12 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x38);
  uVar13 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x40);
  uVar14 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x48);
  uVar15 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x50);
  uVar16 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x58);
  uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x60);
  pTVar22->_s_1 = pTVar20->_s_1;
  *(undefined8 *)((pTVar22->ElementData).Pad + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x50);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar21 + -0x58);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x18) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x40);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar21 + -0x48);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x28) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x30);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar21 + -0x38);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x38) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x20);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar21 + -0x28);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x48) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar21 + -0x10);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar21 + -0x18);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x58) = uVar3;
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar21 + -8);
  pTVar20->_s_1 = TVar5;
  *(undefined8 *)((longlong)pTVar21 + -0x60) = uVar6;
  *(undefined8 *)((longlong)pTVar21 + -0x58) = uVar7;
  *(undefined8 *)((longlong)pTVar21 + -0x50) = uVar8;
  *(undefined8 *)((longlong)pTVar21 + -0x48) = uVar9;
  *(undefined8 *)((longlong)pTVar21 + -0x40) = uVar10;
  *(undefined8 *)((longlong)pTVar21 + -0x38) = uVar11;
  *(undefined8 *)((longlong)pTVar21 + -0x30) = uVar12;
  *(undefined8 *)((longlong)pTVar21 + -0x28) = uVar13;
  *(undefined8 *)((longlong)pTVar21 + -0x20) = uVar14;
  *(undefined8 *)((longlong)pTVar21 + -0x18) = uVar15;
  *(undefined8 *)((longlong)pTVar21 + -0x10) = uVar16;
  *(undefined8 *)((longlong)pTVar21 + -8) = uVar4;
  if (((longlong)pTVar20 + (-0x68 - (longlong)pTVar22)) / 0x68 <
      ((longlong)pTVar18 - (longlong)pTVar23) / 0x68) {
    if (pTVar23 < pTVar18) {
      *ppTVar24 = pTVar23;
      ppTVar24[1] = pTVar18;
      *(int *)(ppTVar24 + 2) = (int)local_378;
      ppTVar24 = ppTVar24 + 3;
    }
    if (pTVar20 <= pTVar22 + 1) goto LAB_141673d84;
    pTVar18 = pTVar21 + -2;
    pTVar23 = pTVar22;
  }
  else {
    if (pTVar22 + 1 < pTVar20) {
      *ppTVar24 = pTVar22;
      ppTVar24[1] = pTVar21 + -2;
      *(int *)(ppTVar24 + 2) = (int)local_378;
      ppTVar24 = ppTVar24 + 3;
    }
    if (pTVar18 <= pTVar23) goto LAB_141673d84;
  }
  iVar17 = (int)(((longlong)pTVar18 - (longlong)pTVar23) / 0x68) + 1;
  pTVar22 = pTVar23;
  if ((int)local_378 == 0) goto LAB_141673d75;
  goto LAB_141673ae0;
}

// IntroSortInternal<FForkedPageAllocation,int,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,FForkedPageAllocation_const_&)> @ 141673eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FForkedPageAllocation,int,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,FForkedPageAllocation_const_&)>
          (FForkedPageAllocation *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_FForkedPageAllocation_ptr_FForkedPageAllocation_ptr *param_4)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FForkedPageAllocation *pFVar11;
  FForkedPageAllocation *pFVar12;
  FForkedPageAllocation *pFVar13;
  FForkedPageAllocation *pFVar14;
  FForkedPageAllocation *pFVar15;
  FForkedPageAllocation **ppFVar16;
  int iVar17;
  FForkedPageAllocation *pFVar18;
  float fVar19;
  undefined1 auStack_398 [48];
  FForkedPageAllocation *local_368;
  FForkedPageAllocation *local_358;
  FForkedPageAllocation *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar19;
    memset(local_340,0,0x2e8);
    ppFVar16 = &local_358;
    do {
      pFVar18 = ppFVar16[1];
      pFVar12 = *ppFVar16;
      local_368 = ppFVar16[2];
      iVar10 = (int)(((longlong)pFVar18 - (longlong)pFVar12) / 0x30) + 1;
      pFVar11 = pFVar12;
      iVar17 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_141673f90:
        if (8 < iVar10) {
          uVar1 = pFVar11->PageEnd;
          pFVar13 = pFVar18 + 1;
          pFVar12 = pFVar11 + iVar10 / 2;
          uVar2 = pFVar12->PageStart;
          uVar3 = pFVar12->PageEnd;
          uVar4 = pFVar12->SharedCleanKiB;
          uVar5 = pFVar12->SharedDirtyKiB;
          uVar6 = pFVar12->PrivateCleanKiB;
          uVar7 = pFVar12->PrivateDirtyKiB;
          pFVar12->PageStart = pFVar11->PageStart;
          pFVar12->PageEnd = uVar1;
          uVar1 = pFVar11->SharedDirtyKiB;
          pFVar12->SharedCleanKiB = pFVar11->SharedCleanKiB;
          pFVar12->SharedDirtyKiB = uVar1;
          uVar1 = pFVar11->PrivateDirtyKiB;
          pFVar12->PrivateCleanKiB = pFVar11->PrivateCleanKiB;
          pFVar12->PrivateDirtyKiB = uVar1;
          pFVar11->PageStart = uVar2;
          pFVar11->PageEnd = uVar3;
          pFVar11->SharedCleanKiB = uVar4;
          pFVar11->SharedDirtyKiB = uVar5;
          pFVar11->PrivateCleanKiB = uVar6;
          pFVar11->PrivateDirtyKiB = uVar7;
          pFVar12 = pFVar11;
LAB_141673fe3:
          pFVar15 = pFVar12;
          pFVar12 = pFVar15 + 1;
          if (pFVar12 <= pFVar18) goto code_r0x000141673fec;
          goto LAB_141674000;
        }
        for (; pFVar13 = pFVar11, pFVar12 = pFVar11, pFVar11 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar15 = pFVar13, pFVar12 = pFVar12 + 1, pFVar12 <= pFVar18) {
            bVar8 = (*param_4)(pFVar15,pFVar12);
            pFVar13 = pFVar12;
            if (!bVar8) {
              pFVar13 = pFVar15;
            }
          }
          uVar1 = pFVar15->PageStart;
          uVar2 = pFVar15->PageEnd;
          uVar3 = pFVar15->SharedCleanKiB;
          uVar4 = pFVar15->SharedDirtyKiB;
          uVar5 = pFVar15->PrivateCleanKiB;
          uVar6 = pFVar15->PrivateDirtyKiB;
          uVar7 = pFVar18->PageEnd;
          pFVar15->PageStart = pFVar18->PageStart;
          pFVar15->PageEnd = uVar7;
          uVar7 = pFVar18->SharedDirtyKiB;
          pFVar15->SharedCleanKiB = pFVar18->SharedCleanKiB;
          pFVar15->SharedDirtyKiB = uVar7;
          uVar7 = pFVar18->PrivateDirtyKiB;
          pFVar15->PrivateCleanKiB = pFVar18->PrivateCleanKiB;
          pFVar15->PrivateDirtyKiB = uVar7;
          pFVar18->PageStart = uVar1;
          pFVar18->PageEnd = uVar2;
          pFVar18->SharedCleanKiB = uVar3;
          pFVar18->SharedDirtyKiB = uVar4;
          pFVar18->PrivateCleanKiB = uVar5;
          pFVar18->PrivateDirtyKiB = uVar6;
        }
        goto LAB_14167414c;
      }
LAB_141674133:
      HeapSortInternal<FForkedPageAllocation,int,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,FForkedPageAllocation_const_&)>
                (pFVar12,iVar10,param_3,param_4);
LAB_14167414c:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_358 <= ppFVar16);
  }
  return;
code_r0x000141673fec:
  bVar8 = (*param_4)(pFVar11,pFVar12);
  if (!bVar8) goto LAB_141673fe3;
LAB_141674000:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar11) break;
    bVar8 = (*param_4)(pFVar13,pFVar11);
  } while (!bVar8);
  uVar1 = pFVar14[-1].PageEnd;
  if (pFVar12 <= pFVar13) {
    uVar2 = pFVar12->PageStart;
    uVar3 = pFVar15[1].PageEnd;
    uVar4 = pFVar15[1].SharedCleanKiB;
    uVar5 = pFVar15[1].SharedDirtyKiB;
    uVar6 = pFVar15[1].PrivateCleanKiB;
    uVar7 = pFVar15[1].PrivateDirtyKiB;
    pFVar12->PageStart = pFVar13->PageStart;
    pFVar15[1].PageEnd = uVar1;
    uVar1 = pFVar14[-1].SharedDirtyKiB;
    pFVar15[1].SharedCleanKiB = pFVar14[-1].SharedCleanKiB;
    pFVar15[1].SharedDirtyKiB = uVar1;
    uVar1 = pFVar14[-1].PrivateDirtyKiB;
    pFVar15[1].PrivateCleanKiB = pFVar14[-1].PrivateCleanKiB;
    pFVar15[1].PrivateDirtyKiB = uVar1;
    pFVar13->PageStart = uVar2;
    pFVar14[-1].PageEnd = uVar3;
    pFVar14[-1].SharedCleanKiB = uVar4;
    pFVar14[-1].SharedDirtyKiB = uVar5;
    pFVar14[-1].PrivateCleanKiB = uVar6;
    pFVar14[-1].PrivateDirtyKiB = uVar7;
    goto LAB_141673fe3;
  }
  uVar2 = pFVar11->PageStart;
  uVar3 = pFVar11->PageEnd;
  uVar4 = pFVar11->SharedCleanKiB;
  uVar5 = pFVar11->SharedDirtyKiB;
  uVar6 = pFVar11->PrivateCleanKiB;
  uVar7 = pFVar11->PrivateDirtyKiB;
  lVar9 = (longlong)pFVar13 + (-0x30 - (longlong)pFVar11);
  iVar17 = iVar17 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  pFVar11->PageStart = pFVar13->PageStart;
  pFVar11->PageEnd = uVar1;
  uVar1 = pFVar14[-1].SharedDirtyKiB;
  pFVar11->SharedCleanKiB = pFVar14[-1].SharedCleanKiB;
  pFVar11->SharedDirtyKiB = uVar1;
  uVar1 = pFVar14[-1].PrivateDirtyKiB;
  pFVar11->PrivateCleanKiB = pFVar14[-1].PrivateCleanKiB;
  pFVar11->PrivateDirtyKiB = uVar1;
  pFVar13->PageStart = uVar2;
  pFVar14[-1].PageEnd = uVar3;
  pFVar14[-1].SharedCleanKiB = uVar4;
  pFVar14[-1].SharedDirtyKiB = uVar5;
  pFVar14[-1].PrivateCleanKiB = uVar6;
  pFVar14[-1].PrivateDirtyKiB = uVar7;
  if ((lVar9 >> 3) - (lVar9 >> 0x3f) < ((longlong)pFVar18 - (longlong)pFVar12) / 0x30) {
    if (pFVar12 < pFVar18) {
      *ppFVar16 = pFVar12;
      ppFVar16[1] = pFVar18;
      *(int *)(ppFVar16 + 2) = iVar17;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar13 <= pFVar11 + 1) goto LAB_14167414c;
    pFVar18 = pFVar14 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar13) {
      *ppFVar16 = pFVar11;
      ppFVar16[1] = pFVar14 + -2;
      *(int *)(ppFVar16 + 2) = iVar17;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar18 <= pFVar12) goto LAB_14167414c;
  }
  iVar10 = (int)(((longlong)pFVar18 - (longlong)pFVar12) / 0x30) + 1;
  pFVar11 = pFVar12;
  if (iVar17 == 0) goto LAB_141674133;
  goto LAB_141673f90;
}

// IntroSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_> @ 141674230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_>
          (FSizeTableEntry *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FSizeTableEntry *pFVar1;
  FSizeTableEntry FVar2;
  int iVar3;
  FSizeTableEntry *pFVar4;
  FSizeTableEntry **ppFVar5;
  FSizeTableEntry *pFVar6;
  FSizeTableEntry *pFVar7;
  FSizeTableEntry *pFVar8;
  FSizeTableEntry *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FSizeTableEntry *local_338;
  FSizeTableEntry *local_328;
  FSizeTableEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_1416742e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_141674310:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000141674319;
          goto LAB_141674320;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->BinSize < pFVar1->BinSize) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_1416743db;
      }
LAB_1416743c9:
      local_338 = pFVar1;
      HeapSortInternal<FSizeTableEntry,int,FIdentityFunctor,TLess<void>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_1416743db:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000141674319:
  if (pFVar4->BinSize <= pFVar9->BinSize) goto LAB_141674310;
LAB_141674320:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->BinSize <= pFVar6->BinSize);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_141674310;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_1416743db;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_1416743db;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_1416743c9;
  goto LAB_1416742e0;
}

// IntroSortInternal<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,int,FIdentityFunctor,TDereferenceWrapper<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,`FLowLevelMemTracker::DumpToLog'::__l14::<lambda_1>_>_> @ 141674470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int,FIdentityFunctor,TDereferenceWrapper<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,_FLowLevelMemTracker::DumpToLog_::__l14::<lambda_1>_>_>
          (FTagLine *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::FTagLine,_public:_void___cdecl_FLowLevelMemTracker::DumpToLog(FLowLevelMemTracker::EDumpFormat,FOutputDevice_*,UE::LLM::ESizeParams,ELLMTagSet)_::_14_::<lambda_1>_>
          param_4)

{
  FString *pFVar1;
  long64 lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  FTagLine *pFVar18;
  FTagLine *pFVar19;
  FTagLine *pFVar20;
  int iVar21;
  FTagLine **ppFVar22;
  FTagLine *pFVar23;
  FTagLine *pFVar24;
  FTagLine *pFVar25;
  float fVar26;
  undefined1 auStack_388 [48];
  FTagLine *local_358;
  FTagLine *local_348;
  FTagLine *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar26 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar26;
    memset(local_330,0,0x2e8);
    ppFVar22 = &local_348;
    do {
      pFVar18 = ppFVar22[1];
      pFVar20 = *ppFVar22;
      local_358 = ppFVar22[2];
      iVar17 = (int)(((longlong)pFVar18 - (longlong)pFVar20) / 0x28) + 1;
      pFVar19 = pFVar20;
      iVar21 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_141674550:
        if (8 < iVar17) {
          iVar8 = (pFVar19->TagName).Data.ArrayNum;
          iVar9 = (pFVar19->TagName).Data.ArrayMax;
          pFVar23 = pFVar18 + 1;
          iVar17 = iVar17 / 2;
          pFVar20 = pFVar19 + iVar17;
          pFVar3 = (pFVar20->TagName).Data.AllocatorInstance.Data;
          iVar10 = (pFVar20->TagName).Data.ArrayNum;
          iVar11 = (pFVar20->TagName).Data.ArrayMax;
          pFVar1 = &pFVar19[iVar17].Line;
          pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
          iVar12 = (pFVar1->Data).ArrayNum;
          iVar13 = (pFVar1->Data).ArrayMax;
          lVar2 = pFVar19[iVar17].Size;
          pFVar20 = pFVar19 + iVar17;
          (pFVar20->TagName).Data.AllocatorInstance.Data =
               (pFVar19->TagName).Data.AllocatorInstance.Data;
          (pFVar20->TagName).Data.ArrayNum = iVar8;
          (pFVar20->TagName).Data.ArrayMax = iVar9;
          iVar8 = (pFVar19->Line).Data.ArrayNum;
          iVar9 = (pFVar19->Line).Data.ArrayMax;
          pFVar1 = &pFVar19[iVar17].Line;
          (pFVar1->Data).AllocatorInstance.Data = (pFVar19->Line).Data.AllocatorInstance.Data;
          (pFVar1->Data).ArrayNum = iVar8;
          (pFVar1->Data).ArrayMax = iVar9;
          pFVar19[iVar17].Size = pFVar19->Size;
          (pFVar19->TagName).Data.AllocatorInstance.Data = pFVar3;
          (pFVar19->TagName).Data.ArrayNum = iVar10;
          (pFVar19->TagName).Data.ArrayMax = iVar11;
          (pFVar19->Line).Data.AllocatorInstance.Data = pFVar4;
          (pFVar19->Line).Data.ArrayNum = iVar12;
          (pFVar19->Line).Data.ArrayMax = iVar13;
          pFVar19->Size = lVar2;
          pFVar20 = pFVar19;
LAB_1416745a4:
          pFVar25 = pFVar20;
          pFVar20 = pFVar25 + 1;
          if (pFVar20 <= pFVar18) goto code_r0x0001416745b0;
          goto LAB_1416745f0;
        }
        for (; pFVar23 = pFVar19, pFVar20 = pFVar19, pFVar19 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar25 = pFVar23, pFVar20 = pFVar20 + 1, pFVar20 <= pFVar18) {
            if (pFVar25->Size == pFVar20->Size) {
              if ((pFVar20->TagName).Data.ArrayNum == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)(pFVar20->TagName).Data.AllocatorInstance.Data;
              }
              if ((pFVar25->TagName).Data.ArrayNum == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)(pFVar25->TagName).Data.AllocatorInstance.Data;
              }
              iVar21 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar15);
              bVar14 = SUB41((uint)iVar21 >> 0x1f,0);
            }
            else {
              bVar14 = pFVar20->Size <= pFVar25->Size;
            }
            pFVar23 = pFVar20;
            if (bVar14 == false) {
              pFVar23 = pFVar25;
            }
          }
          pFVar3 = (pFVar25->TagName).Data.AllocatorInstance.Data;
          iVar8 = (pFVar25->TagName).Data.ArrayNum;
          iVar9 = (pFVar25->TagName).Data.ArrayMax;
          lVar2 = pFVar25->Size;
          pFVar4 = (pFVar25->Line).Data.AllocatorInstance.Data;
          iVar10 = (pFVar25->Line).Data.ArrayNum;
          iVar11 = (pFVar25->Line).Data.ArrayMax;
          iVar21 = (pFVar18->TagName).Data.ArrayNum;
          iVar17 = (pFVar18->TagName).Data.ArrayMax;
          (pFVar25->TagName).Data.AllocatorInstance.Data =
               (pFVar18->TagName).Data.AllocatorInstance.Data;
          (pFVar25->TagName).Data.ArrayNum = iVar21;
          (pFVar25->TagName).Data.ArrayMax = iVar17;
          iVar21 = (pFVar18->Line).Data.ArrayNum;
          iVar17 = (pFVar18->Line).Data.ArrayMax;
          (pFVar25->Line).Data.AllocatorInstance.Data = (pFVar18->Line).Data.AllocatorInstance.Data;
          (pFVar25->Line).Data.ArrayNum = iVar21;
          (pFVar25->Line).Data.ArrayMax = iVar17;
          pFVar25->Size = pFVar18->Size;
          (pFVar18->TagName).Data.AllocatorInstance.Data = pFVar3;
          (pFVar18->TagName).Data.ArrayNum = iVar8;
          (pFVar18->TagName).Data.ArrayMax = iVar9;
          (pFVar18->Line).Data.AllocatorInstance.Data = pFVar4;
          (pFVar18->Line).Data.ArrayNum = iVar10;
          (pFVar18->Line).Data.ArrayMax = iVar11;
          pFVar18->Size = lVar2;
        }
        goto LAB_14167478a;
      }
LAB_141674771:
      HeapSortInternal<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int,FIdentityFunctor,TDereferenceWrapper<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,_FLowLevelMemTracker::DumpToLog_::__l14::<lambda_1>_>_>
                (pFVar20,iVar17,param_3,param_4);
LAB_14167478a:
      ppFVar22 = ppFVar22 + -3;
    } while (&local_348 <= ppFVar22);
  }
  return;
code_r0x0001416745b0:
  if (pFVar19->Size == pFVar25[1].Size) {
    if (pFVar25[1].TagName.Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar20->TagName).Data.AllocatorInstance.Data;
    }
    if ((pFVar19->TagName).Data.ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar19->TagName).Data.AllocatorInstance.Data;
    }
    iVar17 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar15);
    bVar14 = SUB41((uint)iVar17 >> 0x1f,0);
  }
  else {
    bVar14 = pFVar25[1].Size <= pFVar19->Size;
  }
  if (bVar14 == false) goto LAB_1416745a4;
LAB_1416745f0:
  do {
    pFVar24 = pFVar23;
    pFVar23 = pFVar24 + -1;
    if (pFVar23 <= pFVar19) break;
    if (pFVar24[-1].Size == pFVar19->Size) {
      if ((pFVar19->TagName).Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar19->TagName).Data.AllocatorInstance.Data;
      }
      if (pFVar24[-1].TagName.Data.ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar23->TagName).Data.AllocatorInstance.Data;
      }
      iVar17 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar15);
      bVar14 = SUB41((uint)iVar17 >> 0x1f,0);
    }
    else {
      bVar14 = pFVar19->Size <= pFVar24[-1].Size;
    }
  } while (bVar14 == false);
  pFVar3 = (pFVar23->TagName).Data.AllocatorInstance.Data;
  uVar5 = pFVar24[-1].TagName.Data.ArrayNum;
  uVar6 = pFVar24[-1].TagName.Data.ArrayMax;
  if (pFVar20 <= pFVar23) {
    pFVar4 = (pFVar20->TagName).Data.AllocatorInstance.Data;
    iVar9 = pFVar25[1].TagName.Data.ArrayNum;
    iVar10 = pFVar25[1].TagName.Data.ArrayMax;
    pFVar7 = pFVar25[1].Line.Data.AllocatorInstance.Data;
    iVar11 = pFVar25[1].Line.Data.ArrayNum;
    iVar12 = pFVar25[1].Line.Data.ArrayMax;
    lVar2 = pFVar25[1].Size;
    (pFVar20->TagName).Data.AllocatorInstance.Data = pFVar3;
    pFVar25[1].TagName.Data.ArrayNum = uVar5;
    pFVar25[1].TagName.Data.ArrayMax = uVar6;
    iVar17 = pFVar24[-1].Line.Data.ArrayNum;
    iVar8 = pFVar24[-1].Line.Data.ArrayMax;
    pFVar25[1].Line.Data.AllocatorInstance.Data = pFVar24[-1].Line.Data.AllocatorInstance.Data;
    pFVar25[1].Line.Data.ArrayNum = iVar17;
    pFVar25[1].Line.Data.ArrayMax = iVar8;
    pFVar25[1].Size = pFVar24[-1].Size;
    (pFVar23->TagName).Data.AllocatorInstance.Data = pFVar4;
    pFVar24[-1].TagName.Data.ArrayNum = iVar9;
    pFVar24[-1].TagName.Data.ArrayMax = iVar10;
    pFVar24[-1].Line.Data.AllocatorInstance.Data = pFVar7;
    pFVar24[-1].Line.Data.ArrayNum = iVar11;
    pFVar24[-1].Line.Data.ArrayMax = iVar12;
    pFVar24[-1].Size = lVar2;
    goto LAB_1416745a4;
  }
  pFVar4 = (pFVar19->TagName).Data.AllocatorInstance.Data;
  iVar9 = (pFVar19->TagName).Data.ArrayNum;
  iVar10 = (pFVar19->TagName).Data.ArrayMax;
  pFVar7 = (pFVar19->Line).Data.AllocatorInstance.Data;
  iVar11 = (pFVar19->Line).Data.ArrayNum;
  iVar12 = (pFVar19->Line).Data.ArrayMax;
  lVar2 = pFVar19->Size;
  (pFVar19->TagName).Data.AllocatorInstance.Data = pFVar3;
  (pFVar19->TagName).Data.ArrayNum = uVar5;
  (pFVar19->TagName).Data.ArrayMax = uVar6;
  iVar17 = pFVar24[-1].Line.Data.ArrayNum;
  iVar8 = pFVar24[-1].Line.Data.ArrayMax;
  iVar21 = iVar21 + -1;
  (pFVar19->Line).Data.AllocatorInstance.Data = pFVar24[-1].Line.Data.AllocatorInstance.Data;
  (pFVar19->Line).Data.ArrayNum = iVar17;
  (pFVar19->Line).Data.ArrayMax = iVar8;
  pFVar19->Size = pFVar24[-1].Size;
  (pFVar23->TagName).Data.AllocatorInstance.Data = pFVar4;
  pFVar24[-1].TagName.Data.ArrayNum = iVar9;
  pFVar24[-1].TagName.Data.ArrayMax = iVar10;
  pFVar24[-1].Line.Data.AllocatorInstance.Data = pFVar7;
  pFVar24[-1].Line.Data.ArrayNum = iVar11;
  pFVar24[-1].Line.Data.ArrayMax = iVar12;
  pFVar24[-1].Size = lVar2;
  if (((longlong)pFVar23 + (-0x28 - (longlong)pFVar19)) / 0x28 <
      ((longlong)pFVar18 - (longlong)pFVar20) / 0x28) {
    if (pFVar20 < pFVar18) {
      *ppFVar22 = pFVar20;
      ppFVar22[1] = pFVar18;
      *(int *)(ppFVar22 + 2) = iVar21;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar23 <= pFVar19 + 1) goto LAB_14167478a;
    pFVar18 = pFVar24 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar23) {
      *ppFVar22 = pFVar19;
      ppFVar22[1] = pFVar24 + -2;
      *(int *)(ppFVar22 + 2) = iVar21;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar18 <= pFVar20) goto LAB_14167478a;
  }
  iVar17 = (int)(((longlong)pFVar18 - (longlong)pFVar20) / 0x28) + 1;
  pFVar19 = pFVar20;
  if (iVar21 == 0) goto LAB_141674771;
  goto LAB_141674550;
}

// LowerBoundInternal<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>_const_,int,int,TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 1416748b0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>_const_,int,int,TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *param_1,int param_2,int *param_3,
          FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<FForkedPageAllocation_const_,int,unsigned___int64,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,unsigned___int64)> @ 141674900

int __cdecl
AlgoImpl::
LowerBoundInternal<FForkedPageAllocation_const_,int,unsigned___int64,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,unsigned___int64)>
          (FForkedPageAllocation *param_1,int param_2,ulong64 *param_3,FIdentityFunctor param_4,
          _func___cdecl_bool_FForkedPageAllocation_ptr_ulong64 *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (*param_5)(param_1 + iVar1,*param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// TopologicalSort<UE::LLMPrivate::FTagData_*,`FLowLevelMemTracker::SortTags'::__l2::<lambda_1>,int> @ 1416753e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
LLMAlgoImpl::
TopologicalSort<UE::LLMPrivate::FTagData_*,_FLowLevelMemTracker::SortTags_::__l2::<lambda_1>,int>
          (FTagData **param_1,int param_2,<lambda_1> param_3,ETopologicalSortOrder param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char cVar4;
  FTagDataArray *pFVar5;
  code *pcVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FTagData *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  size_t _Size;
  longlong lVar18;
  FTagData **ppFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  FTagDataArray *local_res18;
  undefined1 auStackY_198 [32];
  uint local_148;
  ForAnyElementType local_140;
  undefined8 local_130;
  ForAnyElementType local_128;
  int local_118;
  int iStack_114;
  ForAnyElementType local_110;
  int local_100;
  int iStack_fc;
  ForAnyElementType local_f8;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  uint local_c0;
  ulonglong local_b8;
  FTagData **local_b0;
  size_t local_a8;
  ForAnyElementType local_a0;
  undefined8 local_90;
  ForAnyElementType *local_88;
  ForAnyElementType *local_80;
  FTagDataArray **local_78;
  ForAnyElementType *local_70;
  int *local_68;
  int local_60;
  ulonglong local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  if (param_2 != 0) {
    local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
    _Size = (size_t)param_2;
    local_res18 = param_3.LocalTagDatas;
    local_c4 = param_2;
    local_b0 = param_1;
    if (param_2 < 1) {
      UE::LLMPrivate::HandleAssert
                (true,L"LLM check failed: %s [File:%s] [Line: %d]\r\nInvalid number of vertices\r\n"
                );
      FWindowsPlatformMisc::RaiseException(1);
    }
    uVar15 = 0xffffffff;
    if (param_4 != RootToLeaf) {
      uVar15 = param_2;
    }
    iVar11 = -1;
    if (param_4 != RootToLeaf) {
      iVar11 = 1;
    }
    local_110.Data = (undefined4 *)0x0;
    local_110.Size = 0;
    local_148 = param_2 - 1;
    if (param_4 != RootToLeaf) {
      local_148 = 0;
    }
    local_100 = 0;
    iStack_fc = 0;
    local_c8 = iVar11;
    local_c0 = local_148;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (4,4,param_2,&local_110,0,&iStack_fc);
    local_e8 = 0;
    local_f8.Data = (void *)0x0;
    local_f8.Size = 0;
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0xc,4,param_2,&local_f8,0,(int *)((longlong)&local_e8 + 4));
    local_90 = 0;
    local_a0.Data = (int *)0x0;
    local_a0.Size = 0;
    UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (4,4,param_2,&local_a0,(int *)&local_90,(int *)((longlong)&local_90 + 4));
    local_130 = 0;
    local_140.Data = (void *)0x0;
    local_140.Size = 0;
    if (param_2 << 4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)(param_2 << 4));
    }
    if (0 < param_2 << 4) {
      UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
                (4,4,param_2 << 4,&local_140,0,(int *)((longlong)&local_130 + 4));
    }
    local_d0 = 0;
    local_e0.Data = (void *)0x0;
    local_e0.Size = 0;
    iVar10 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                       (1,1,param_2,&local_e0,(int *)&local_d0,(int *)((longlong)&local_d0 + 4));
    local_a8 = _Size;
    memset((void *)((longlong)iVar10 + (longlong)local_e0.Data),0,_Size);
    local_88 = &local_140;
    local_80 = &local_f8;
    local_78 = &local_res18;
    uVar20 = (ulonglong)(int)local_148;
    local_70 = &local_e0;
    local_68 = local_a0.Data;
    uVar22 = local_148;
    local_60 = param_2;
    if (local_148 != uVar15) {
      local_58 = (ulonglong)(int)uVar15;
      uVar21 = uVar20;
      do {
        uVar22 = (uint)uVar21;
        uVar15 = 0;
        if ((int)uVar22 < (int)local_d0) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        local_b8 = uVar20;
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar22 = local_148, bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)(uVar20 + (longlong)local_e0.Data) == '\0') {
          `LLMAlgoImpl::
          TopologicalSort<UE::LLMPrivate::FTagData_*,`FLowLevelMemTracker::SortTags'::__l2::<lambda_1>,int>'
          ::__l16::<lambda_1>::operator()(&local_88,uVar22);
          iVar10 = (int)local_e8;
joined_r0x000141675672:
          uVar22 = local_148;
          if (0 < iVar10) {
            uVar15 = 0;
            if ((int)(iVar10 - 1U) < iVar10) {
              uVar15 = ~(iVar10 - 1U) >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar10 = (int)local_e8;
            }
            iVar11 = (int)local_130;
            lVar18 = (longlong)iVar10 * 3 + -3;
            uVar15 = *(uint *)((longlong)local_f8.Data + lVar18 * 4 + 4);
            puVar2 = (undefined4 *)((longlong)local_f8.Data + lVar18 * 4);
            do {
              if (iVar11 <= (int)uVar15) {
                if (((local_110.Data <= puVar2) &&
                    (puVar2 < (undefined4 *)((longlong)local_110.Data + (longlong)iStack_fc * 4)))
                   && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (local_100 == iStack_fc) {
                  local_100 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                                        (0x404,&local_110,&iStack_fc);
                }
                lVar18 = (longlong)local_100;
                local_100 = local_100 + 1;
                *(undefined4 *)((longlong)local_110.Data + lVar18 * 4) = *puVar2;
                uVar15 = puVar2[2];
                if ((int)local_130 < (int)uVar15) {
                  iVar10 = uVar15 - (int)local_130;
                  iVar11 = UE::Core::Private::
                           ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                                     (4,4,iVar10,&local_140,(int *)&local_130,
                                      (int *)((longlong)&local_130 + 4));
                  memset((void *)((longlong)local_140.Data + (longlong)iVar11 * 4),0,
                         (longlong)iVar10 << 2);
                }
                else {
                  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
                  }
                  if ((int)uVar15 < (int)local_130) {
                    uVar22 = (int)local_130 - uVar15;
                    if (((int)(uVar22 | uVar15) < 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x458,
                                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if (uVar22 != 0) {
                      pvVar3 = (void *)((longlong)local_140.Data + (longlong)(int)uVar15 * 4);
                      iVar11 = ((int)local_130 - uVar15) - uVar22;
                      if (iVar11 != 0) {
                        memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)(int)uVar22 * 4),
                                (longlong)iVar11 << 2);
                      }
                      local_130 = CONCAT44(local_130._4_4_,(int)local_130 - uVar22);
                    }
                  }
                }
                if ((int)local_e8 < 1) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                pvVar3 = (void *)((longlong)local_f8.Data + (longlong)((int)local_e8 + -1) * 0xc);
                iVar11 = ((int)local_e8 - ((int)local_e8 + -1)) + -1;
                iVar10 = (int)local_e8;
                if (iVar11 != 0) {
                  memmove(pvVar3,(void *)((longlong)pvVar3 + 0xc),(longlong)iVar11 * 0xc);
                  iVar10 = (int)local_e8;
                }
                local_e8 = CONCAT44(local_e8._4_4_,iVar10 + -1);
                uVar20 = local_b8;
                iVar11 = local_c8;
                iVar10 = iVar10 + -1;
                goto joined_r0x000141675672;
              }
              uVar22 = 0;
              if ((int)uVar15 < (int)local_130) {
                uVar22 = ~uVar15 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar22 = *(uint *)((longlong)local_140.Data + (longlong)(int)uVar15 * 4);
              lVar18 = (longlong)(int)uVar22;
              uVar17 = ~uVar22 >> 0x1f;
              uVar15 = 0;
              if ((int)uVar22 < (int)local_d0) {
                uVar15 = uVar17;
              }
              if ((uVar15 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar7 = local_70;
              uVar15 = puVar2[1] + 1;
              cVar4 = *(char *)(lVar18 + (longlong)local_e0.Data);
              puVar2[1] = uVar15;
            } while (cVar4 != '\0');
            uVar15 = 0;
            if ((int)uVar22 < *(int *)&local_70[1].Data) {
              uVar15 = uVar17;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar8 = local_80;
            *(undefined1 *)(lVar18 + (longlong)pFVar7->Data) = 1;
            uStack_4c = *(undefined4 *)&local_88[1].Data;
            local_48 = *(undefined4 *)&local_88[1].Data;
            local_50 = uVar22;
            if (((local_80->Data <= &local_50) &&
                (&local_50 <
                 (uint *)((longlong)local_80->Data +
                         (longlong)*(int *)((longlong)&local_80[1].Data + 4) * 3 * 4))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar11 = *(int *)&pFVar8[1].Data;
            piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                                 (0x40c,pFVar8,piVar1);
            }
            piVar1 = local_68;
            *(int *)&pFVar8[1].Data = iVar11 + 1;
            pvVar3 = pFVar8->Data;
            *(ulonglong *)((longlong)pvVar3 + (longlong)iVar11 * 0xc) = CONCAT44(uStack_4c,local_50)
            ;
            *(undefined4 *)((longlong)pvVar3 + (longlong)iVar11 * 0xc + 8) = local_48;
            pFVar5 = *local_78;
            uVar15 = 0;
            if ((int)uVar22 < *(int *)&pFVar5->field_0x10) {
              uVar15 = uVar17;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar13 = UE::LLMPrivate::FTagData::GetParent
                                (*(FTagData **)(*(longlong *)pFVar5 + lVar18 * 8));
            if (pFVar13 != (FTagData *)0x0) {
              *piVar1 = pFVar13->Index;
            }
            uVar15 = (uint)(pFVar13 != (FTagData *)0x0);
            if (local_60 < (int)uVar15) {
              UE::LLMPrivate::HandleAssert
                        (true,
                         L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetEdges function passed into TopologicalSort did not write OutNumEdges, or wrote an invalid value\r\n"
                        );
              FWindowsPlatformMisc::RaiseException(1);
            }
            pFVar7 = local_88;
            if (((piVar1 == (int *)0x0) && (uVar15 != 0)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ptr != nullptr || Count == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x9c1,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar11 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                               (4,4,uVar15,pFVar7,(int *)(pFVar7 + 1),
                                (int *)((longlong)&pFVar7[1].Data + 4));
            if (uVar15 != 0) {
              memcpy((void *)((longlong)pFVar7->Data + (longlong)iVar11 * 4),piVar1,
                     (ulonglong)uVar15 << 2);
            }
            uVar20 = local_b8;
            iVar11 = local_c8;
            iVar10 = (int)local_e8;
            goto joined_r0x000141675672;
          }
        }
        local_148 = uVar22 + iVar11;
        uVar21 = (ulonglong)local_148;
        uVar20 = uVar20 + (longlong)iVar11;
        _Size = local_a8;
        param_1 = local_b0;
        param_2 = local_c4;
        uVar22 = local_c0;
        local_b8 = uVar20;
      } while (uVar20 != local_58);
    }
    pvVar3 = local_a0.Data;
    if (local_e0.Data != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_e0.Data,local_e0.Size);
    }
    if (local_140.Data != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_140.Data,local_140.Size);
    }
    if (pvVar3 != (int *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,pvVar3,local_a0.Size);
    }
    if (local_f8.Data != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_f8.Data,local_f8.Size);
    }
    if (local_100 != param_2) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    local_118 = 0;
    iStack_114 = 0;
    local_128.Data = (FTagData **)0x0;
    local_128.Size = 0;
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,param_2,&local_128,0,&iStack_114);
    ppFVar19 = local_128.Data;
    if (_Size != 0) {
      do {
        iVar10 = local_118;
        if (((ppFVar19 <= param_1) && (param_1 < ppFVar19 + iStack_114)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (iVar10 == iStack_114) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                             (0x808,&local_128,&iStack_114);
          ppFVar19 = local_128.Data;
        }
        iVar16 = iVar10 + 1;
        pFVar13 = *param_1;
        param_1 = param_1 + 1;
        ppFVar19[iVar10] = pFVar13;
        _Size = _Size - 1;
        local_118 = iVar16;
      } while (_Size != 0);
      uVar15 = 0;
      lVar18 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar15 < local_100) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar17 = *(uint *)((longlong)local_110.Data + lVar18 * 4);
        uVar12 = 0;
        if ((int)uVar17 < iVar16) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar15 = uVar15 + 1;
        lVar18 = lVar18 + 1;
        lVar14 = (longlong)(int)uVar22;
        uVar22 = uVar22 + iVar11;
        local_b0[lVar14] = ppFVar19[(int)uVar17];
      } while (lVar18 < (longlong)local_a8);
    }
    if (ppFVar19 != (FTagData **)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,ppFVar19,local_128.Size);
    }
    if (local_110.Data != (undefined4 *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_110.Data,local_110.Size);
    }
  }
  return;
}

// TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,`FTopologicalSortTest::RunTest'::__l2::<lambda_1>,int> @ 141675f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
LLMAlgoImpl::
TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,_FTopologicalSortTest::RunTest_::__l2::<lambda_1>,int>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,<lambda_1> param_3,
          ETopologicalSortOrder param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char cVar4;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ForAnyElementType *pFVar8;
  ForAnyElementType *pFVar9;
  void *_Dst;
  bool bVar10;
  int iVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  ulonglong uVar22;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 auStackY_198 [32];
  uint local_148;
  ForAnyElementType local_140;
  int local_130;
  int iStack_12c;
  ForAnyElementType local_128;
  undefined8 local_118;
  ForAnyElementType local_110;
  int local_100;
  int iStack_fc;
  ForAnyElementType local_f8;
  undefined8 local_e8;
  uint local_e0;
  ForAnyElementType local_d8;
  undefined8 local_c8;
  int local_c0;
  longlong local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b0;
  ForAnyElementType local_a8;
  undefined8 local_98;
  ForAnyElementType *local_90;
  ForAnyElementType *local_88;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> **local_80;
  ForAnyElementType *local_78;
  void *local_70;
  int local_68;
  longlong local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
    local_res18 = param_3.Edges;
    local_c0 = param_2;
    local_b0 = param_1;
    if (param_2 < 1) {
      UE::LLMPrivate::HandleAssert
                (true,L"LLM check failed: %s [File:%s] [Line: %d]\r\nInvalid number of vertices\r\n"
                );
      FWindowsPlatformMisc::RaiseException(1);
    }
    local_148 = param_2 - 1;
    if (param_4 != RootToLeaf) {
      local_148 = 0;
    }
    local_100 = 0;
    iStack_fc = 0;
    uVar20 = 0xffffffff;
    uVar13 = 0xffffffff;
    if (param_4 != RootToLeaf) {
      uVar20 = param_2;
      uVar13 = 1;
    }
    local_110.Data = (undefined4 *)0x0;
    local_110.Size = 0;
    local_e0 = uVar13;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (4,4,param_2,&local_110,0,&iStack_fc);
    local_e8 = 0;
    local_f8.Data = (void *)0x0;
    local_f8.Size = 0;
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0xc,4,param_2,&local_f8,0,(int *)((longlong)&local_e8 + 4));
    local_98 = 0;
    local_a8.Data = (void *)0x0;
    local_a8.Size = 0;
    UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (4,4,param_2,&local_a8,(int *)&local_98,(int *)((longlong)&local_98 + 4));
    local_118 = 0;
    local_128.Data = (void *)0x0;
    local_128.Size = 0;
    if (param_2 << 4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)(param_2 << 4));
    }
    if (0 < param_2 << 4) {
      UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
                (4,4,param_2 << 4,&local_128,0,(int *)((longlong)&local_118 + 4));
    }
    local_c8 = 0;
    local_d8.Data = (void *)0x0;
    local_d8.Size = 0;
    iVar11 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                       (1,1,param_2,&local_d8,(int *)&local_c8,(int *)((longlong)&local_c8 + 4));
    memset((void *)((longlong)iVar11 + (longlong)local_d8.Data),0,(longlong)param_2);
    local_90 = &local_128;
    local_88 = &local_f8;
    local_80 = &local_res18;
    local_78 = &local_d8;
    local_70 = local_a8.Data;
    local_68 = param_2;
    if (local_148 != uVar20) {
      lVar17 = (longlong)(int)local_148;
      local_60 = (longlong)(int)uVar20;
      uVar20 = local_148;
      do {
        uVar16 = 0;
        if ((int)uVar20 < (int)local_c8) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        local_b8 = lVar17;
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(char *)(lVar17 + (longlong)local_d8.Data) == '\0') {
          `LLMAlgoImpl::
          TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,`FTopologicalSortTest::RunTest'::__l2::<lambda_1>,int>'
          ::__l16::<lambda_1>::operator()(&local_90,uVar20);
          iVar11 = (int)local_e8;
joined_r0x0001416761ac:
          if (0 < iVar11) {
            uVar13 = 0;
            if ((int)(iVar11 - 1U) < iVar11) {
              uVar13 = ~(iVar11 - 1U) >> 0x1f;
            }
            if (uVar13 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar11 = (int)local_e8;
            }
            iVar14 = (int)local_118;
            lVar17 = (longlong)iVar11 * 3 + -3;
            uVar13 = *(uint *)((longlong)local_f8.Data + lVar17 * 4 + 4);
            puVar2 = (undefined4 *)((longlong)local_f8.Data + lVar17 * 4);
            do {
              if (iVar14 <= (int)uVar13) {
                if (((local_110.Data <= puVar2) &&
                    (puVar2 < (undefined4 *)((longlong)local_110.Data + (longlong)iStack_fc * 4)))
                   && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (local_100 == iStack_fc) {
                  local_100 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                                        (0x404,&local_110,&iStack_fc);
                }
                lVar17 = (longlong)local_100;
                local_100 = local_100 + 1;
                *(undefined4 *)((longlong)local_110.Data + lVar17 * 4) = *puVar2;
                uVar13 = puVar2[2];
                if ((int)local_118 < (int)uVar13) {
                  iVar14 = uVar13 - (int)local_118;
                  iVar11 = UE::Core::Private::
                           ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                                     (4,4,iVar14,&local_128,(int *)&local_118,
                                      (int *)((longlong)&local_118 + 4));
                  memset((void *)((longlong)local_128.Data + (longlong)iVar11 * 4),0,
                         (longlong)iVar14 << 2);
                }
                else {
                  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
                  }
                  if ((int)uVar13 < (int)local_118) {
                    uVar16 = (int)local_118 - uVar13;
                    if (((int)(uVar16 | uVar13) < 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if (uVar16 != 0) {
                      pvVar3 = (void *)((longlong)local_128.Data + (longlong)(int)uVar13 * 4);
                      iVar11 = ((int)local_118 - uVar13) - uVar16;
                      if (iVar11 != 0) {
                        memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)(int)uVar16 * 4),
                                (longlong)iVar11 << 2);
                      }
                      local_118 = CONCAT44(local_118._4_4_,(int)local_118 - uVar16);
                    }
                  }
                }
                if ((int)local_e8 < 1) {
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar10) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pvVar3 = (void *)((longlong)local_f8.Data + (longlong)((int)local_e8 + -1) * 0xc);
                iVar14 = ((int)local_e8 - ((int)local_e8 + -1)) + -1;
                iVar11 = (int)local_e8;
                if (iVar14 != 0) {
                  memmove(pvVar3,(void *)((longlong)pvVar3 + 0xc),(longlong)iVar14 * 0xc);
                  iVar11 = (int)local_e8;
                }
                local_e8 = CONCAT44(local_e8._4_4_,iVar11 + -1);
                lVar17 = local_b8;
                iVar11 = iVar11 + -1;
                uVar13 = local_e0;
                goto joined_r0x0001416761ac;
              }
              uVar16 = 0;
              if ((int)uVar13 < (int)local_118) {
                uVar16 = ~uVar13 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar16 = *(uint *)((longlong)local_128.Data + (longlong)(int)uVar13 * 4);
              lVar17 = (longlong)(int)uVar16;
              uVar15 = ~uVar16 >> 0x1f;
              uVar13 = 0;
              if ((int)uVar16 < (int)local_c8) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar8 = local_78;
              uVar13 = puVar2[1] + 1;
              cVar4 = *(char *)(lVar17 + (longlong)local_d8.Data);
              puVar2[1] = uVar13;
            } while (cVar4 != '\0');
            uVar13 = 0;
            if ((int)uVar16 < *(int *)&local_78[1].Data) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar9 = local_88;
            *(undefined1 *)(lVar17 + (longlong)pFVar8->Data) = 1;
            uStack_54 = *(undefined4 *)&local_90[1].Data;
            local_50 = *(undefined4 *)&local_90[1].Data;
            local_58 = uVar16;
            if (((local_88->Data <= &local_58) &&
                (&local_58 <
                 (uint *)((longlong)local_88->Data +
                         (longlong)*(int *)((longlong)&local_88[1].Data + 4) * 3 * 4))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = *(int *)&pFVar9[1].Data;
            piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                                 (0x40c,pFVar9,piVar1);
            }
            _Dst = local_70;
            *(int *)&pFVar9[1].Data = iVar11 + 1;
            pvVar3 = pFVar9->Data;
            *(ulonglong *)((longlong)pvVar3 + (longlong)iVar11 * 0xc) = CONCAT44(uStack_54,local_58)
            ;
            *(undefined4 *)((longlong)pvVar3 + (longlong)iVar11 * 0xc + 8) = local_50;
            pTVar5 = *local_80;
            uVar13 = 0;
            if ((int)uVar16 < pTVar5->ArrayNum) {
              uVar13 = uVar15;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (pTVar5->AllocatorInstance).Data;
            iVar11 = *(int *)(pFVar6 + lVar17 * 0x10 + 8);
            if (iVar11 != 0) {
              memcpy(_Dst,*(void **)(pFVar6 + lVar17 * 0x10),(longlong)iVar11 << 2);
            }
            if ((iVar11 < 0) || (local_68 < iVar11)) {
              UE::LLMPrivate::HandleAssert
                        (true,
                         L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetEdges function passed into TopologicalSort did not write OutNumEdges, or wrote an invalid value\r\n"
                        );
              FWindowsPlatformMisc::RaiseException(1);
            }
            pFVar8 = local_90;
            if (((_Dst == (void *)0x0) && (iVar11 != 0)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Ptr != nullptr || Count == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x9c1,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar14 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                               (4,4,iVar11,pFVar8,(int *)(pFVar8 + 1),
                                (int *)((longlong)&pFVar8[1].Data + 4));
            if (iVar11 != 0) {
              memcpy((void *)((longlong)pFVar8->Data + (longlong)iVar14 * 4),_Dst,
                     (longlong)iVar11 << 2);
            }
            lVar17 = local_b8;
            iVar11 = (int)local_e8;
            uVar13 = local_e0;
            goto joined_r0x0001416761ac;
          }
        }
        uVar20 = uVar20 + uVar13;
        lVar17 = lVar17 + (int)uVar13;
        param_1 = local_b0;
        param_2 = local_c0;
        local_b8 = lVar17;
      } while (lVar17 != local_60);
    }
    pvVar3 = local_a8.Data;
    if (local_d8.Data != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_d8.Data,local_d8.Size);
    }
    if (local_128.Data != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_128.Data,local_128.Size);
    }
    if (pvVar3 != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,pvVar3,local_a8.Size);
    }
    if (local_f8.Data != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_f8.Data,local_f8.Size);
    }
    if (local_100 != param_2) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    local_130 = 0;
    iStack_12c = 0;
    local_140.Data = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_140.Size = 0;
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x10,8,param_2,&local_140,0,&iStack_12c);
    pTVar18 = local_140.Data;
    lVar17 = (longlong)param_2;
    iVar11 = local_130;
    if (param_2 != 0) {
      do {
        iVar11 = local_130;
        if (((pTVar18 <= param_1) && (param_1 < pTVar18 + iStack_12c)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (iVar11 == iStack_12c) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                             (0x810,&local_140,&iStack_12c);
          pTVar18 = local_140.Data;
        }
        uVar19 = 0;
        pTVar12 = pTVar18 + iVar11;
        iVar11 = iVar11 + 1;
        (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pTVar12->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
        (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar12->ArrayNum = param_1->ArrayNum;
        pTVar12->ArrayMax = param_1->ArrayMax;
        param_1->ArrayNum = 0;
        param_1->ArrayMax = 0;
        param_1 = param_1 + 1;
        lVar17 = lVar17 + -1;
        uVar22 = uVar19;
        local_130 = iVar11;
      } while (lVar17 != 0);
      do {
        uVar20 = (uint)uVar22;
        uVar13 = 0;
        if ((int)uVar20 < local_100) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar13 = *(uint *)((longlong)local_110.Data + uVar19 * 4);
        uVar16 = 0;
        if ((int)uVar13 < iVar11) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar12 = pTVar18 + (int)uVar13;
        pTVar21 = local_b0 + (int)local_148;
        if (pTVar21 != pTVar12) {
          pFVar6 = (pTVar21->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar21->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
          (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar21->ArrayNum = pTVar12->ArrayNum;
          pTVar21->ArrayMax = pTVar12->ArrayMax;
          pTVar12->ArrayNum = 0;
          pTVar12->ArrayMax = 0;
        }
        local_148 = local_148 + local_e0;
        uVar19 = uVar19 + 1;
        uVar22 = (ulonglong)(uVar20 + 1);
      } while ((longlong)uVar19 < (longlong)param_2);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar18,iVar11);
    if (pTVar18 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,pTVar18,local_140.Size);
    }
    if (local_110.Data != (undefined4 *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,local_110.Data,local_110.Size);
    }
  }
  return;
}

// TransformAccumulate<__int64,TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>,__int64_UE::Core::Private::Tuple::TTupleBaseElement<__int64,1,2>::*,TPlus<void>_> @ 141676ab0

long64 __cdecl
Algo::
TransformAccumulate<__int64,TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>,__int64_UE::Core::Private::Tuple::TTupleBaseElement<__int64,1,2>::*,TPlus<void>_>
          (TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
           *param_1,pdm_1bb4e106 param_2,long64 param_3,TPlus<void> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  long64 lVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  pdm_1bb4e106 local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar15 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar15) goto LAB_141676b4e;
      uVar13 = puVar17[lVar8 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = iVar16 + -1 + local_res18;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_141676b4e:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar15);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res10 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar9 = (*pcVar4)();
    return lVar9;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar6) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar15) goto LAB_141676c48;
      uVar13 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_141676c48:
  plVar14 = (longlong *)(longlong)(int)local_res10;
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)param_1;
    plVar10 = (longlong *)((longlong)plVar14 + lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar10 = plVar14;
    }
    param_3 = param_3 + *plVar10;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return param_3;
}

// TrueOnFirstCallOnly<`PointerKey::PointerKey'::__l2::<lambda_1>_> @ 141677430

bool __cdecl
UE::LLMPrivate::TrueOnFirstCallOnly<_PointerKey::PointerKey_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  bool bVar1;
  
  bVar1 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
          ::__l2::bValue;
  `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
  ::__l2::bValue = false;
  return bVar1;
}

// WriteToString<1035,FName_const_&> @ 141677450

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToString<1035,FName_const_&>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<1035,FName> @ 1416774a0

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToString<1035,FName>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PointerKey @ 14167ab90

PointerKey * __thiscall PointerKey::PointerKey(PointerKey *this)

{
  this->Pointer = 0;
  return this;
}

// StripeData @ 14167abb0

StripeData * __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
StripeData::StripeData(StripeData *this)

{
  FLowLevelAllocInfo *_Dst;
  PointerKey *pPVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 4000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  (this->Keys).Capacity = 0x40;
  pPVar1 = (this->Keys).StaticArray;
  this->Allocator = (FLLMAllocator *)0x0;
  this->Map = (uint *)0x0;
  this->Count = 0;
  this->Capacity = 0;
  lVar2 = 4;
  (this->Keys).Array = pPVar1;
  (this->Keys).Count = 0;
  (this->Keys).Allocator = (FLLMAllocator *)0x0;
  do {
    pPVar1->Pointer = 0;
    pPVar1[1].Pointer = 0;
    pPVar1[2].Pointer = 0;
    pPVar1[3].Pointer = 0;
    pPVar1[4].Pointer = 0;
    pPVar1[5].Pointer = 0;
    pPVar1[6].Pointer = 0;
    pPVar1[7].Pointer = 0;
    pPVar1[8].Pointer = 0;
    pPVar1[9].Pointer = 0;
    pPVar1[10].Pointer = 0;
    pPVar1[0xb].Pointer = 0;
    pPVar1[0xc].Pointer = 0;
    pPVar1[0xd].Pointer = 0;
    pPVar1[0xe].Pointer = 0;
    pPVar1[0xf].Pointer = 0;
    lVar2 = lVar2 + -1;
    pPVar1 = pPVar1 + 0x10;
  } while (lVar2 != 0);
  (this->KeyHashes).Count = 0;
  (this->KeyHashes).Array = (this->KeyHashes).StaticArray;
  _Dst = (this->Values2).StaticArray;
  (this->KeyHashes).Capacity = 0x40;
  (this->Values1).Array = (this->Values1).StaticArray;
  (this->KeyHashes).Allocator = (FLLMAllocator *)0x0;
  (this->Values1).Count = 0;
  (this->Values1).Capacity = 0x40;
  (this->Values1).Allocator = (FLLMAllocator *)0x0;
  (this->Values2).Array = _Dst;
  (this->Values2).Count = 0;
  (this->Values2).Capacity = 0x40;
  (this->Values2).Allocator = (FLLMAllocator *)0x0;
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar3 >> 8),0xff),0x200);
  (this->FreeKeyIndices).Count = 0;
  (this->FreeKeyIndices).Array = (this->FreeKeyIndices).StaticArray;
  (this->FreeKeyIndices).Capacity = 0x40;
  (this->FreeKeyIndices).Allocator = (FLLMAllocator *)0x0;
  return this;
}

// ~LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> @ 14167acf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
~LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
          (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           *this)

{
  FLowLevelAllocInfo *pFVar1;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  FLowLevelAllocInfo *pFVar2;
  
  Clear(this);
  lpCriticalSection = (LPCRITICAL_SECTION)&this->AllStripesMutex;
  DeleteCriticalSection(lpCriticalSection);
  lVar3 = 0x10;
  pFVar1 = this[1].MapStripes[0].Values2.StaticArray + 0x3d;
  do {
    pFVar2 = pFVar1 + -0xf7;
    lVar3 = lVar3 + -1;
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[-0x32].LockSemaphore;
    if ((FLowLevelAllocInfo *)*(undefined1 **)(pFVar1 + -0xfa) != pFVar2) {
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(pFVar1 + -0xf8),*(undefined1 **)(pFVar1 + -0xfa),
                 (ulonglong)*(uint *)((longlong)(pFVar1 + -0xf9) + 4) << 2);
      pFVar1[-0xfa] = (FLowLevelAllocInfo)pFVar2;
    }
    *(undefined4 *)((longlong)(pFVar1 + -0xf9) + 4) = 0x40;
    pFVar1[-0xf9].Tag[0] = 0;
    if (*(void **)(pFVar1 + -0x13d) != pFVar1 + -0x13a) {
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(pFVar1 + -0x13b),*(void **)(pFVar1 + -0x13d),
                 (ulonglong)*(uint *)((longlong)(pFVar1 + -0x13c) + 4) << 3);
      pFVar1[-0x13d] = (FLowLevelAllocInfo)(pFVar1 + -0x13a);
    }
    *(undefined4 *)((longlong)(pFVar1 + -0x13c) + 4) = 0x40;
    pFVar1[-0x13c].Tag[0] = 0;
    if (*(void **)(pFVar1 + -0x160) != pFVar1 + -0x15d) {
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(pFVar1 + -0x15e),*(void **)(pFVar1 + -0x160),
                 (ulonglong)*(uint *)((longlong)(pFVar1 + -0x15f) + 4) << 2);
      pFVar1[-0x160] = (FLowLevelAllocInfo)(pFVar1 + -0x15d);
    }
    *(undefined4 *)((longlong)(pFVar1 + -0x15f) + 4) = 0x40;
    pFVar1[-0x15f].Tag[0] = 0;
    if (*(void **)(pFVar1 + -0x183) != pFVar1 + -0x180) {
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(pFVar1 + -0x181),*(void **)(pFVar1 + -0x183),
                 (ulonglong)*(uint *)((longlong)(pFVar1 + -0x182) + 4) << 2);
      pFVar1[-0x183] = (FLowLevelAllocInfo)(pFVar1 + -0x180);
    }
    *(undefined4 *)((longlong)(pFVar1 + -0x182) + 4) = 0x40;
    pFVar1[-0x182].Tag[0] = 0;
    if (*(void **)(pFVar1 + -0x1c6) != pFVar1 + -0x1c3) {
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(pFVar1 + -0x1c4),*(void **)(pFVar1 + -0x1c6),
                 (ulonglong)*(uint *)((longlong)(pFVar1 + -0x1c5) + 4) << 3);
      pFVar1[-0x1c6] = (FLowLevelAllocInfo)(pFVar1 + -0x1c3);
    }
    *(undefined4 *)((longlong)(pFVar1 + -0x1c5) + 4) = 0x40;
    pFVar1[-0x1c5].Tag[0] = 0;
    DeleteCriticalSection(lpCriticalSection);
    pFVar1 = pFVar2;
  } while (lVar3 != 0);
  return;
}

// ~TFunction_OwnedObject<`FMallocBinnedCommonUtils::Trim<FMallocBinned2>'::__l2::<lambda_1>,0,0> @ 14167af10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMallocBinnedCommonUtils::Trim<FMallocBinned2>'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMallocBinnedCommonUtils::Trim<FMallocBinned2>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned2___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned2___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FMallocBinnedCommonUtils::Trim<FMallocBinned3>'::__l2::<lambda_1>,0,0> @ 14167af30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMallocBinnedCommonUtils::Trim<FMallocBinned3>'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMallocBinnedCommonUtils::Trim<FMallocBinned3>_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned3___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned3___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FMallocBinnedGPU::Trim'::__l5::<lambda_1>,0,0> @ 14167af50

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FMallocBinnedGPU::Trim'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMallocBinnedGPU::Trim_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMallocBinnedGPU::Trim'::`5'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14167b0c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~StripeData @ 14167c5b0

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
StripeData::~StripeData(StripeData *this)

{
  PointerKey *pPVar1;
  uint *puVar2;
  FLowLevelAllocInfo *pFVar3;
  uint *puVar4;
  FLowLevelAllocInfo *pFVar5;
  PointerKey *pPVar6;
  
  puVar4 = (this->FreeKeyIndices).Array;
  puVar2 = (this->FreeKeyIndices).StaticArray;
  if (puVar4 != puVar2) {
    UE::LLMPrivate::FLLMAllocator::Free
              ((this->FreeKeyIndices).Allocator,puVar4,
               (ulonglong)(this->FreeKeyIndices).Capacity << 2);
    (this->FreeKeyIndices).Array = puVar2;
  }
  (this->FreeKeyIndices).Capacity = 0x40;
  (this->FreeKeyIndices).Count = 0;
  pFVar3 = (this->Values2).StaticArray;
  pFVar5 = (this->Values2).Array;
  if (pFVar5 != pFVar3) {
    UE::LLMPrivate::FLLMAllocator::Free
              ((this->Values2).Allocator,pFVar5,(ulonglong)(this->Values2).Capacity << 3);
    (this->Values2).Array = pFVar3;
  }
  (this->Values2).Capacity = 0x40;
  puVar2 = (this->Values1).StaticArray;
  (this->Values2).Count = 0;
  puVar4 = (this->Values1).Array;
  if (puVar4 != puVar2) {
    UE::LLMPrivate::FLLMAllocator::Free
              ((this->Values1).Allocator,puVar4,(ulonglong)(this->Values1).Capacity << 2);
    (this->Values1).Array = puVar2;
  }
  (this->Values1).Capacity = 0x40;
  puVar2 = (this->KeyHashes).StaticArray;
  (this->Values1).Count = 0;
  puVar4 = (this->KeyHashes).Array;
  if (puVar4 != puVar2) {
    UE::LLMPrivate::FLLMAllocator::Free
              ((this->KeyHashes).Allocator,puVar4,(ulonglong)(this->KeyHashes).Capacity << 2);
    (this->KeyHashes).Array = puVar2;
  }
  (this->KeyHashes).Capacity = 0x40;
  pPVar1 = (this->Keys).StaticArray;
  (this->KeyHashes).Count = 0;
  pPVar6 = (this->Keys).Array;
  if (pPVar6 != pPVar1) {
    UE::LLMPrivate::FLLMAllocator::Free
              ((this->Keys).Allocator,pPVar6,(ulonglong)(this->Keys).Capacity << 3);
    (this->Keys).Array = pPVar1;
  }
  (this->Keys).Capacity = 0x40;
  (this->Keys).Count = 0;
                    /* WARNING: Could not recover jumptable at 0x00014167c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// operator() @ 14167cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`LLMAlgoImpl::
TopologicalSort<UE::LLMPrivate::FTagData_*,`FLowLevelMemTracker::SortTags'::__l2::<lambda_1>,int>'::
__l16::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  ForAnyElementType *pFVar2;
  void *pvVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FTagData *pFVar10;
  undefined1 auStackY_98 [32];
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  plVar1 = *(longlong **)((longlong)this + 0x18);
  uVar8 = 0;
  if (param_1 < (int)plVar1[2]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined1 *)((longlong)param_1 + *plVar1) = 1;
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  uStack_44 = *(undefined4 *)(*(longlong *)this + 0x10);
  local_40 = *(undefined4 *)(*(longlong *)this + 0x10);
  local_48 = param_1;
  if ((pFVar2->Data <= &local_48) &&
     (&local_48 <
      (int *)((longlong)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 3 * 4)))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&pFVar2[1].Data;
  piVar4 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar9 == *piVar4) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x40c,pFVar2,piVar4);
  }
  *(int *)&pFVar2[1].Data = iVar9 + 1;
  pvVar3 = pFVar2->Data;
  *(ulonglong *)((longlong)pvVar3 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_44,local_48);
  *(undefined4 *)((longlong)pvVar3 + (longlong)iVar9 * 0xc + 8) = local_40;
  piVar4 = *(int **)((longlong)this + 0x20);
  plVar1 = (longlong *)**(longlong **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < (int)plVar1[2]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = UE::LLMPrivate::FTagData::GetParent(*(FTagData **)(*plVar1 + (longlong)param_1 * 8));
  bVar6 = pFVar10 != (FTagData *)0x0;
  if (bVar6) {
    *piVar4 = pFVar10->Index;
  }
  if (*(int *)((longlong)this + 0x28) < (int)(uint)bVar6) {
    UE::LLMPrivate::HandleAssert
              (true,
               L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetEdges function passed into TopologicalSort did not write OutNumEdges, or wrote an invalid value\r\n"
              );
    FWindowsPlatformMisc::RaiseException(1);
  }
  pFVar2 = *(ForAnyElementType **)this;
  pvVar3 = *(void **)((longlong)this + 0x20);
  if ((pvVar3 == (void *)0x0) && (bVar6)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                    (4,4,(uint)bVar6,pFVar2,(int *)(pFVar2 + 1),
                     (int *)((longlong)&pFVar2[1].Data + 4));
  if (bVar6) {
    memcpy((void *)((longlong)pFVar2->Data + (longlong)iVar9 * 4),pvVar3,4);
  }
  return;
}

// operator() @ 14167d020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`LLMAlgoImpl::
TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,`FTopologicalSortTest::RunTest'::__l2::<lambda_1>,int>'
::__l16::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStackY_98 [32];
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  plVar2 = *(longlong **)((longlong)this + 0x18);
  lVar11 = (longlong)param_1;
  uVar8 = 0;
  if (param_1 < (int)plVar2[2]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(undefined1 *)(lVar11 + *plVar2) = 1;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  uStack_44 = *(undefined4 *)(*(longlong *)this + 0x10);
  local_40 = *(undefined4 *)(*(longlong *)this + 0x10);
  local_48 = param_1;
  if ((pFVar3->Data <= &local_48) &&
     (&local_48 <
      (int *)((longlong)pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 3 * 4)))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x40c,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar9 + 1;
  pvVar4 = pFVar3->Data;
  *(ulonglong *)((longlong)pvVar4 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_44,local_48);
  *(undefined4 *)((longlong)pvVar4 + (longlong)iVar9 * 0xc + 8) = local_40;
  pvVar4 = *(void **)((longlong)this + 0x20);
  plVar2 = (longlong *)**(longlong **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar2;
  iVar9 = *(int *)(lVar5 + 8 + lVar11 * 0x10);
  if (iVar9 == 0) {
LAB_14167d1de:
    if (iVar9 <= *(int *)((longlong)this + 0x28)) goto LAB_14167d214;
  }
  else {
    memcpy(pvVar4,*(void **)(lVar5 + lVar11 * 0x10),(longlong)iVar9 << 2);
    if (-1 < iVar9) goto LAB_14167d1de;
  }
  UE::LLMPrivate::HandleAssert
            (true,
             L"LLM check failed: %s [File:%s] [Line: %d]\r\nGetEdges function passed into TopologicalSort did not write OutNumEdges, or wrote an invalid value\r\n"
            );
  FWindowsPlatformMisc::RaiseException(1);
LAB_14167d214:
  pFVar3 = *(ForAnyElementType **)this;
  pvVar4 = *(void **)((longlong)this + 0x20);
  if ((pvVar4 == (void *)0x0) && (iVar9 != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = UE::Core::Private::ReallocGrow<0,TSizedLLMAllocator<32>::ForAnyElementType>
                     (4,4,iVar9,pFVar3,(int *)(pFVar3 + 1),(int *)((longlong)&pFVar3[1].Data + 4));
  if (iVar9 != 0) {
    memcpy((void *)((longlong)pFVar3->Data + (longlong)iVar10 * 4),pvVar4,(longlong)iVar9 << 2);
  }
  return;
}

// operator() @ 14167d2c0

bool __thiscall
`<lambda_5>::operator()'::__l15::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FFileStatData *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FString *pFVar7;
  undefined1 local_res18 [8];
  FString local_38;
  
  if ((bool)param_2->bIsDirectory || param_2->bIsValid != true) {
    return true;
  }
  lVar2 = *(longlong *)this;
  if ((*(char *)(lVar2 + 0x88) == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = *(int *)(lVar2 + 0x80);
  pFVar6 = *(FString **)(lVar2 + 0x78);
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if (*(int *)(lVar2 + 0x80) != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar6 == pFVar7) {
      return true;
    }
    ::FString::FString(&local_38,param_1);
    bVar4 = ManagedStorageInternal::IsUnderDirectory(&local_38,pFVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    pFVar6 = pFVar6 + 1;
  }
  **(longlong **)((longlong)this + 8) = **(longlong **)((longlong)this + 8) + param_2->FileSize;
  return true;
}

// operator() @ 14167d3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall <lambda_3>::operator()(<lambda_3> *this)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  longlong *plVar5;
  bool bVar6;
  FPersistentStorageManager *this_00;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  double local_110;
  undefined1 local_108 [8];
  FString local_100;
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  int local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = FPersistentStorageManager::Get();
  FPersistentStorageManager::GenerateCategoryStats
            (this_00,(TMap<FString,FPersistentStorageCategory::CategoryStat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPersistentStorageCategory::CategoryStat,0>_>
                      *)local_88);
  uVar11 = local_60;
  iStack_e8 = 0;
  local_d0 = 0;
  uStack_e4 = 1;
  uStack_d4 = 0;
  if (local_60 != 0) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar10 = *puVar12;
    while (uVar10 == 0) {
      lVar8 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      uStack_d4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
      goto LAB_14167d4a1;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_e4 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_c0 = (int)lVar8;
    uStack_d4 = local_d0 + -1 + local_c0;
    if ((int)local_60 < (int)uStack_d4) {
      uStack_d4 = local_60;
    }
  }
LAB_14167d4a1:
  local_f0 = (longlong *)local_88;
  local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_c8 = local_88._8_4_ - local_54;
  uVar10 = local_60 & 0xffffffe0;
  uStack_d8 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_d4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_e4,iStack_e8);
  iVar9 = (int)local_60 >> 5;
  TStack_b0._28_4_ = uStack_d4;
  TStack_b0.BaseBitIndex = local_d0;
  uStack_90 = CONCAT44(uStack_c4,iStack_c8);
  bVar7 = (byte)local_60;
  uStack_cc = uStack_d4;
  local_b8 = local_f0;
  TStack_b0.Array = local_e0;
  if (((int)local_60 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_35800000;
  if (uVar11 != local_60) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar11 = -1 << (bVar7 & 0x1f) & puVar12[iVar9];
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14167d5c0;
      uVar11 = puVar12[lVar8 + 1];
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)local_60 < (int)uVar11) {
      uVar11 = local_60;
    }
  }
LAB_14167d5c0:
  while( true ) {
    plVar5 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FPersistentStorageCategory::CategoryStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_b0.CurrentBitIndex == uVar11) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) break;
    if (3 < (byte)LogPlatformFileManagedStorage._0_1_) {
      lVar8 = *plVar5;
      lVar2 = *(longlong *)((longlong)TStack_b0.CurrentBitIndex * 0xa0 + 0x28 + lVar8);
      local_118 = *(undefined8 *)((longlong)TStack_b0.CurrentBitIndex * 0xa0 + 0x20 + lVar8);
      if (lVar2 < 0) {
        ::FString::PrintfImpl(&local_100,L"Category %s: %.3f MiB (%lld) / unlimited used");
      }
      else {
        local_110 = (double)((float)lVar2 * fVar4);
        ::FString::PrintfImpl(&local_100,L"Category %s: %.3f MiB (%lld) / %.3f MiB used");
      }
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPersistentStorageCategory::CategoryStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPersistentStorageCategory::CategoryStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPersistentStorageCategory::CategoryStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// operator() @ 14167d770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
<lambda_5>::operator()
          (<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FPersistentStorageManager *pFVar7;
  CategoryStat *pCVar8;
  long64 lVar9;
  wchar_t *pwVar10;
  FPersistentStorageCategory *this_00;
  FScriptContainerElement *pFVar11;
  FPersistentStorageCategory *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  TPlus<void> local_1b8;
  longlong local_1b0;
  FOutputDevice *local_1a8;
  CategoryStat *local_1a0;
  longlong *local_198;
  code *local_190;
  CategoryStat **local_188;
  CategoryStat local_178;
  char local_f0;
  FString local_e8;
  undefined1 local_d8 [104];
  void *local_70;
  undefined4 local_68;
  ForAnyElementType local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1a8 = param_3;
  if (param_1->ArrayNum < 1) {
    FOutputDevice::Log(param_3,Error,L"A category must be specified");
  }
  else {
    pFVar7 = FPersistentStorageManager::Get();
    if (param_1->ArrayNum < 1) {
      local_1c8 = 0;
      local_1c0 = (longlong)param_1->ArrayNum;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    local_f0 = '\0';
    this_00 = (FPersistentStorageCategory *)(pFVar7->Categories).Categories.AllocatorInstance.Data;
    iVar6 = (pFVar7->Categories).Categories.ArrayNum;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = this_00 + iVar6;
    for (; this_00 != pFVar12; this_00 = this_00 + 1) {
      iVar6 = (this_00->CategoryName).Data.ArrayNum;
      iVar1 = *(int *)(pFVar11 + 8);
      if (iVar6 == iVar1) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(this_00->CategoryName).Data.AllocatorInstance.Data,
                             *(wchar_t **)pFVar11);
          bVar4 = iVar6 == 0;
          goto LAB_14167d8a4;
        }
LAB_14167d8b9:
        pCVar8 = FPersistentStorageCategory::GetStat(this_00,(CategoryStat *)local_d8);
        if (local_f0 != '\0') {
          FPersistentStorageCategory::CategoryStat::~CategoryStat(&local_178);
        }
        FPersistentStorageCategory::CategoryStat::CategoryStat(&local_178,pCVar8);
        local_f0 = '\x01';
        DestructItems<FString,int>((FString *)local_60.Data,local_58);
        if (local_60.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data);
        }
        local_68 = 0;
        if (local_70 != (void *)0x0) {
          FMemory::Free(local_70);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_d8 + 0x28));
        if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_d8._0_8_);
        }
        break;
      }
      bVar4 = iVar6 + iVar1 == 1;
LAB_14167d8a4:
      if (bVar4) goto LAB_14167d8b9;
    }
    if (local_f0 == '\0') {
      if (param_1->ArrayNum < 1) {
        local_1c8 = 0;
        local_1c0 = (longlong)param_1->ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FOutputDevice::LogfImpl(param_3,Error,L"Category %s not found");
    }
    else {
      FPersistentStorageCategory::CategoryStat::Print(&local_178,&local_e8);
      FOutputDevice::LogfImpl(param_3,L"%s");
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      FOutputDevice::Log(param_3,
                         L"Note: results may not be accurate if category is modified during verification."
                        );
      bVar4 = true;
      if ((local_f0 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = Algo::
              TransformAccumulate<__int64,TMap<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>,__int64_UE::Core::Private::Tuple::TTupleBaseElement<__int64,1,2>::*,TPlus<void>_>
                        (&local_178.FileSizes,(pdm_1bb4e106)0x0,0,local_1b8);
      if ((local_f0 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (lVar9 != local_178.UsedSize) {
        if ((local_f0 == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1c8 = local_178.UsedSize;
        FOutputDevice::LogfImpl
                  (param_3,Error,L"TotalTrackedFileSize %lld does not match UsedSize %lld");
        bVar4 = false;
      }
      local_1b0 = 0;
      pFVar7 = FPersistentStorageManager::Get();
      iVar6 = (pFVar7->RootDirectories).RootDirectories.ArrayNum;
      pFVar11 = (pFVar7->RootDirectories).RootDirectories.AllocatorInstance.Data;
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = pFVar11 + (longlong)iVar6 * 0x10;
      if (pFVar11 != pFVar13) {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
             ) {
            ::Singleton = (FFileManagerGeneric)&___7FFileManagerGeneric__6B_;
            atexit(`IFileManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
            _Init_thread_footer(&::_TSS0);
          }
          local_1a0 = &local_178;
          local_198 = &local_1b0;
          local_188 = &local_1a0;
          local_190 = UE::Core::Private::Function::
                      TFunctionRefCaller<`<lambda_5>::operator()'::__l15::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
                      ::Call;
          if (*(int *)(pFVar11 + 8) == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)pFVar11;
          }
          (**(code **)((longlong)::Singleton + 0xc0))(&::Singleton,pwVar10,&local_190);
          pFVar11 = pFVar11 + 0x10;
          param_3 = local_1a8;
        } while (pFVar11 != pFVar13);
      }
      if ((local_f0 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_1b0 == local_178.UsedSize) {
        if (bVar4) {
          FOutputDevice::Log(param_3,L"Category Verified!");
        }
      }
      else {
        if ((local_f0 == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1c8 = local_178.UsedSize;
        FOutputDevice::LogfImpl(param_3,Error,L"TotalSizeOnDisk %lld does not match UsedSize %lld");
      }
    }
    if (local_f0 != '\0') {
      FPersistentStorageCategory::CategoryStat::~CategoryStat(&local_178);
    }
  }
  return;
}

// operator() @ 14167dcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_6>::operator()(<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  IFileManager *pIVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  if (param_1->ArrayNum < 2) {
    if (1 < (byte)LogPlatformFileManagedStorage._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    ::FString::FString(&local_18,L"/download0");
    bVar4 = FPaths::IsUnderDirectory((FString *)pFVar1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((param_1->ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 0x18) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar2 + 0x10);
      }
      uVar6 = _wtoi(pwVar11);
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = 0;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x4000,&local_28,(int *)&local_20,(int *)((longlong)&local_20 + 4));
      memset(local_28.Data + iVar7,0,0x4000);
      pIVar9 = IFileManager::Get();
      if (*(int *)&pFVar1[8].field_0x0 == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                  AllocatorInstance).Data;
      }
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,pwVar11,0);
      if (plVar10 == (longlong *)0x0) {
        if (1 < (byte)LogPlatformFileManagedStorage._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
        }
      }
      else {
        for (; 0 < (int)uVar6; uVar6 = uVar6 - uVar8) {
          uVar8 = 0x4000;
          if (uVar6 < 0x4000) {
            uVar8 = uVar6;
          }
          (**(code **)(*plVar10 + 0x188))(plVar10,local_28.Data,uVar8);
        }
        cVar5 = (**(code **)(*plVar10 + 0x210))(plVar10);
        if ((cVar5 == '\0') && (1 < (byte)LogPlatformFileManagedStorage._0_1_)) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
        }
        (**(code **)*plVar10)(plVar10,1);
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
    else if (1 < (byte)LogPlatformFileManagedStorage._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogPlatformFileManagedStorage);
    }
  }
  return;
}

// operator() @ 14167df30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall
<lambda_8>::operator()
          (<lambda_8> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar2 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L" ",1);
    }
    iVar8 = *(int *)(pFVar6 + 8) + -1;
    if (*(int *)(pFVar6 + 8) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar6,iVar8);
    pFVar6 = pFVar6 + 0x10;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  bVar2 = FParse::Param((wchar_t *)FVar5.Data,L"CSV");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  bVar3 = FParse::Param((wchar_t *)FVar5.Data,L"SNAPSHOT");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  bVar4 = FParse::Param((wchar_t *)FVar5.Data,L"UObjectClasses");
  this_00 = FLowLevelMemTracker::Get();
  FLowLevelMemTracker::DumpToLog(this_00,(uint)bVar2,param_3,bVar3 * '\x02',-bVar4 & UObjectClasses)
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14167e080

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLowLevelMemTracker::ProcessCommandLine'::__l101::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e0b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e0e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e110

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,bool> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e140

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultTSDelegateUserPolicy,bool> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock_(__cdecl*)(unsigned___int64),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FWindowsPlatformMemory::FPlatformVirtualMemoryBlock_(__cdecl*)(unsigned___int64),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFPlatformVirtualMemoryBlock_FWindowsPlatformMemory___K_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_*_(__cdecl*)(unsigned___int64,unsigned___int64,unsigned___int64_&,unsigned_int_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_*_(__cdecl*)(unsigned___int64,unsigned___int64,unsigned___int64_&,unsigned_int_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAX_K0AEA_KAEAI_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e1f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(void_*,unsigned_int),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(void_*,unsigned_int),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXPEAXI_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMallocBinnedCommonUtils::Trim<FMallocBinned2>'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned2___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned2___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMallocBinnedCommonUtils::Trim<FMallocBinned3>'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____Trim_VFMallocBinned3___FMallocBinnedCommonUtils__SAXAEAVFMallocBinned3___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e2b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FMallocBinnedGPU::Trim'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMallocBinnedGPU::Trim'::`5'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e2f0

void * __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::_scalar_deleting_destructor_
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e360

void * __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::_scalar_deleting_destructor_
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e3d0

void * __thiscall
FArchiveFileReaderGeneric::_scalar_deleting_destructor_
          (FArchiveFileReaderGeneric *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IFileHandle *pIVar2;
  
  this->_padding_ = (longlong)&___7FArchiveFileReaderGeneric__6B_;
  TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>::Reset(&this->Handle,(IFileHandle *)0x0);
  pFVar1 = (this->BufferArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Handle).Ptr;
  if (pIVar2 != (IFileHandle *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e470

void * __thiscall
FArchiveFileWriterDummy::_scalar_deleting_destructor_(FArchiveFileWriterDummy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FArchiveFileWriterDummy__6B_;
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e4c0

void * __thiscall
FArchiveFileWriterGeneric::_scalar_deleting_destructor_
          (FArchiveFileWriterGeneric *this,uint param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  IFileHandle *pIVar3;
  char cVar4;
  DWORD DVar5;
  
  this->_padding_ = (longlong)&___7FArchiveFileWriterGeneric__6B_;
  FlushBuffer(this);
  pcVar1 = *(code **)(this->_padding_ + 0x270);
  if (pcVar1 == CloseLowLevel) {
    TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>::Reset(&this->Handle,(IFileHandle *)0x0);
  }
  else {
    cVar4 = (*pcVar1)(this);
    if (cVar4 == '\0') {
      DVar5 = FWindowsPlatformMisc::GetLastError();
      FArchiveState::SetError((FArchiveState *)this);
      LogWriteError(this,L"Error closing file",DVar5);
    }
  }
  pFVar2 = (this->BufferArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->Handle).Ptr;
  if (pIVar3 != (IFileHandle *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e5b0

void * __thiscall FFileLogExec::_scalar_deleting_destructor_(FFileLogExec *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e5f0

void * __thiscall
FFileManagerGeneric::_scalar_deleting_destructor_(FFileManagerGeneric *this,uint param_1)

{
  *this = (FFileManagerGeneric)&___7FFileManagerGeneric__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e630

void * __thiscall
FileManagerGenericImpl::FFileMatch::_scalar_deleting_destructor_(FFileMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WildCard).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e680

void * __thiscall
UE::LLMPrivate::FLLMTracker::_scalar_deleting_destructor_(FLLMTracker *this,uint param_1)

{
  void *pvVar1;
  
  Clear(this);
  TlsFree(this->TlsSlot);
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x60 = 0;
  pvVar1 = *(void **)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,
                        *(ulong64 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,FName>_>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,FName>_>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,FName>_>,FDefaultSparseArrayLLMAllocator>
              *)&(this->CsvProfilerWriter).TagDataToCsvStatName);
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x60 = 0;
  pvVar1 = *(void **)&(this->TraceWriter).DeclaredTags.field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,*(ulong64 *)&(this->TraceWriter).DeclaredTags.field_0x58);
  }
  TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
              *)&(this->TraceWriter).DeclaredTags);
  FLLMCsvWriter::~FLLMCsvWriter(&this->CsvWriter);
  *(undefined4 *)&(this->TagSizes).field_0x60 = 0;
  pvVar1 = *(void **)&(this->TagSizes).field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,*(ulong64 *)&(this->TagSizes).field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
              *)&this->TagSizes);
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  ~LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
            (&this->AllocationMap);
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x60 = 0;
  pvVar1 = *(void **)&(this->ThreadIdToThreadState).field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,*(ulong64 *)&(this->ThreadIdToThreadState).field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>_>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>_>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>_>,FDefaultSparseArrayLLMAllocator>
              *)&this->ThreadIdToThreadState);
  pvVar1 = (this->PendingThreadStates).AllocatorInstance.Data;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,(this->PendingThreadStates).AllocatorInstance.Size);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
  pvVar1 = (this->ThreadStates).AllocatorInstance.Data;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,(this->ThreadStates).AllocatorInstance.Size);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7eb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e7f0

void * __thiscall
FLoggedFileHandle::_scalar_deleting_destructor_(FLoggedFileHandle *this,uint param_1)

{
  ~FLoggedFileHandle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e830

void * __thiscall FMallocAnsi::_scalar_deleting_destructor_(FMallocAnsi *this,uint param_1)

{
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e890

/* WARNING: Type propagation algorithm not settling */

void * __thiscall FMallocBinned2::_scalar_deleting_destructor_(FMallocBinned2 *this,uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMallocBinned2__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)((this->CachedOSPageAllocator).FreedPageBlocks + 2);
  lVar1 = 0x33;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)((longlong)(lpCriticalSection + 0xfffffffffffffffe) + 8)
    ;
    DeleteCriticalSection(lpCriticalSection);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x16e0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e930

/* WARNING: Type propagation algorithm not settling */

void * __thiscall FMallocBinned3::_scalar_deleting_destructor_(FMallocBinned3 *this,uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMallocBinned3__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->PoolBaseVMBlock[6].field_0x8;
  lVar1 = 0x4d;
  do {
    lpCriticalSection =
         (LPCRITICAL_SECTION)((longlong)(lpCriticalSection + 0xfffffffffffffffb) + 0x18);
    DeleteCriticalSection(lpCriticalSection);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x3a40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167e9d0

/* WARNING: Type propagation algorithm not settling */

void * __thiscall FMallocBinned::_scalar_deleting_destructor_(FMallocBinned *this,uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMallocBinned__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PagePoolTable[1].CriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PagePoolTable[0].CriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->OsTable).CriticalSection);
  lVar1 = 0x29;
  lpCriticalSection = (LPCRITICAL_SECTION)&(this->OsTable).CriticalSection;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[-3].OwningThread;
    DeleteCriticalSection(lpCriticalSection);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x412f0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167eaa0

void * __thiscall
FMallocBinnedCommonBase::_scalar_deleting_destructor_(FMallocBinnedCommonBase *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ExternalAllocMutex);
  FExec::~FExec((FExec *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167eb10

void * __thiscall
FMallocBinnedGPU::_scalar_deleting_destructor_(FMallocBinnedGPU *this,uint param_1)

{
  ~FMallocBinnedGPU(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUseSystemMallocForNew::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14167eb70

void * __thiscall IFileHandle::_scalar_deleting_destructor_(IFileHandle *this,uint param_1)

{
  *this = (IFileHandle)&___7IFileHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Add @ 14167ec70

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Add
          (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           *this,PointerKey *param_1,uint *param_2,FLowLevelAllocInfo *param_3)

{
  undefined8 uVar1;
  ulong64 uVar2;
  code *pcVar3;
  uint uVar4;
  PointerKey *pPVar5;
  uint *puVar6;
  FLowLevelAllocInfo *pFVar7;
  uint uVar8;
  StripeData *this_00;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_48 [16];
  
  uVar10 = param_1->Pointer >> 0x10;
  uVar10 = ~uVar10 + uVar10 * 0x200000;
  uVar10 = (uVar10 >> 0x18 ^ uVar10) * 0x109;
  uVar10 = (uVar10 >> 0xe ^ uVar10) * 0x15;
  uVar11 = ((uint)(uVar10 >> 0x1c) ^ (uint)uVar10) * -0x7fffffff;
  this_00 = this->MapStripes + (uVar11 >> 0x1c);
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  if (this_00->Map == (uint *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar4 = StripeData::GetMapIndex(this_00,param_1,uVar11);
  uVar10 = (ulonglong)uVar4;
  uVar4 = this_00->Map[uVar10];
  if (uVar4 == 0xffffffff) {
    uVar4 = this_00->Capacity;
    uVar9 = 0x10000;
    if (uVar4 < 0x10000) {
      uVar8 = uVar4 * 0x4c >> 8;
    }
    else {
      uVar8 = (uVar4 >> 8) * 0x4c;
    }
    if (uVar8 <= this_00->Count) {
      if (uVar4 * 2 < uVar4) {
        FGenericPlatformMisc::LowLevelOutputDebugString
                  (
                  L"LLM Error: Integer overflow in LLMap::Add, Capacity has reached its maximum size.\n"
                  );
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 < this_00->Count) {
        FGenericPlatformMisc::LowLevelOutputDebugString
                  (L"LLM Assertion failure: Count > MaxCount.\n");
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this_00->Capacity != 0) {
        uVar9 = this_00->Capacity * 2;
      }
      StripeData::Reserve(this_00,uVar9);
      uVar4 = StripeData::GetMapIndex(this_00,param_1,uVar11);
      uVar10 = (ulonglong)uVar4;
    }
    if ((this_00->FreeKeyIndices).Count == 0) {
      uVar9 = 0x800;
      this_00->Map[uVar10] = (this_00->Keys).Count;
      uVar4 = (this_00->Keys).Capacity;
      if ((this_00->Keys).Count == uVar4) {
        uVar8 = 0x800;
        if ((uVar4 != 0) && (uVar8 = (uVar4 >> 1) + uVar4, uVar8 <= uVar4)) {
          `FLLMArray<PointerKey,unsigned_int>::Add'::__l8::<lambda_1>::operator()(local_res8);
        }
        FLLMArray<PointerKey,unsigned_int>::Reserve(&this_00->Keys,uVar8);
      }
      (this_00->Keys).Array[(this_00->Keys).Count].Pointer = param_1->Pointer;
      puVar6 = &(this_00->Keys).Count;
      *puVar6 = *puVar6 + 1;
      uVar4 = (this_00->KeyHashes).Capacity;
      if ((this_00->KeyHashes).Count == uVar4) {
        uVar8 = 0x1000;
        if ((uVar4 != 0) && (uVar8 = (uVar4 >> 1) + uVar4, uVar8 <= uVar4)) {
          `FLLMArray<unsigned_int,unsigned_int>::Add'::__l8::<lambda_1>::operator()(local_res10);
        }
        FLLMArray<unsigned_int,unsigned_int>::Reserve(&this_00->KeyHashes,uVar8);
      }
      (this_00->KeyHashes).Array[(this_00->KeyHashes).Count] = uVar11;
      puVar6 = &(this_00->KeyHashes).Count;
      *puVar6 = *puVar6 + 1;
      FLLMArray<unsigned_int,unsigned_int>::Add(&this_00->Values1,param_2);
      uVar11 = (this_00->Values2).Capacity;
      if ((this_00->Values2).Count == uVar11) {
        if ((uVar11 != 0) && (uVar9 = (uVar11 >> 1) + uVar11, uVar9 <= uVar11)) {
          `FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Add'::__l8::
          <lambda_1>::operator()(local_48);
        }
        FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Reserve
                  (&this_00->Values2,uVar9);
      }
      *(undefined8 *)(this_00->Values2).Array[(this_00->Values2).Count].Tag =
           *(undefined8 *)param_3->Tag;
      puVar6 = &(this_00->Values2).Count;
      *puVar6 = *puVar6 + 1;
    }
    else {
      uVar4 = FLLMArray<unsigned_int,unsigned_int>::RemoveLast(&this_00->FreeKeyIndices);
      this_00->Map[uVar10] = uVar4;
      uVar2 = param_1->Pointer;
      pPVar5 = FLLMArray<PointerKey,unsigned_int>::operator[](&this_00->Keys,uVar4);
      pPVar5->Pointer = uVar2;
      puVar6 = FLLMArray<unsigned_int,unsigned_int>::operator[](&this_00->KeyHashes,uVar4);
      *puVar6 = uVar11;
      uVar11 = *param_2;
      puVar6 = FLLMArray<unsigned_int,unsigned_int>::operator[](&this_00->Values1,uVar4);
      *puVar6 = uVar11;
      uVar1 = *(undefined8 *)param_3->Tag;
      pFVar7 = FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::operator[]
                         (&this_00->Values2,uVar4);
      *(undefined8 *)pFVar7->Tag = uVar1;
    }
    this_00->Count = this_00->Count + 1;
  }
  else {
    if (`public:_void___cdecl_LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Add(PointerKey_const&___ptr64,unsigned_int_const&___ptr64,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo_const&___ptr64)___ptr64'
        ::__l10::ShownWarning == false) {
      FGenericPlatformMisc::LowLevelOutputDebugString
                (L"LLM WARNING: Replacing allocation in tracking map. Alloc/Free Mismatch.\n");
      `public:_void___cdecl_LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Add(PointerKey_const&___ptr64,unsigned_int_const&___ptr64,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo_const&___ptr64)___ptr64'
      ::__l10::ShownWarning = true;
    }
    uVar11 = *param_2;
    if ((this_00->Values1).Count <= uVar4) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    (this_00->Values1).Array[uVar4] = uVar11;
    uVar1 = *(undefined8 *)param_3->Tag;
    if ((this_00->Values2).Count <= uVar4) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    *(undefined8 *)(this_00->Values2).Array[uVar4].Tag = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014167f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  return;
}

// AnsiFree @ 141681fd0

void __cdecl AnsiFree(void *param_1)

{
  MemoryTrace_Free((ulong64)param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x000141681feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _aligned_free(param_1);
  return;
}

// AnsiMalloc @ 141682000

void * __cdecl AnsiMalloc(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = _aligned_malloc(param_1,(ulonglong)param_2);
  MemoryTrace_Alloc((ulong64)pvVar1,param_1,param_2,0,0);
  return pvVar1;
}

// AnsiRealloc @ 141682060

void * __cdecl AnsiRealloc(void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
  MemoryTrace_ReallocFree((ulong64)param_1,0,0);
  if (param_1 == (void *)0x0) {
    pvVar1 = _aligned_malloc(param_2,(ulonglong)param_3);
  }
  else if (param_2 == 0) {
    _aligned_free(param_1);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = _aligned_realloc(param_1,param_2,(ulonglong)param_3);
  }
  MemoryTrace_ReallocAlloc((ulong64)pvVar1,param_2,param_3,0,0);
  return pvVar1;
}

// Clear @ 14168a520

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Clear
          (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           *this)

{
  undefined1 *puVar1;
  PointerKey *pPVar2;
  
  if (this != (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
               *)&this->AllStripesMutex) {
    pPVar2 = this->MapStripes[0].Keys.StaticArray;
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(pPVar2 + -0xb));
      if (((FLLMArray<PointerKey,unsigned_int> *)(pPVar2 + -3))->Array != pPVar2) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (*(FLLMAllocator **)(pPVar2 + -1),
                   ((FLLMArray<PointerKey,unsigned_int> *)(pPVar2 + -3))->Array,
                   (ulonglong)*(uint *)((longlong)(pPVar2 + -2) + 4) << 3);
        ((FLLMArray<PointerKey,unsigned_int> *)(pPVar2 + -3))->Array = pPVar2;
      }
      *(uint *)((longlong)(pPVar2 + -2) + 4) = 0x40;
      *(uint *)(pPVar2 + -2) = 0;
      if (*(void **)(pPVar2 + 0x40) != pPVar2 + 0x43) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (*(FLLMAllocator **)(pPVar2 + 0x42),*(void **)(pPVar2 + 0x40),
                   (ulonglong)*(uint *)((longlong)(pPVar2 + 0x41) + 4) << 2);
        pPVar2[0x40] = (PointerKey)(pPVar2 + 0x43);
      }
      *(undefined4 *)((longlong)(pPVar2 + 0x41) + 4) = 0x40;
      *(undefined4 *)(pPVar2 + 0x41) = 0;
      if (*(void **)(pPVar2 + 99) != pPVar2 + 0x66) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (*(FLLMAllocator **)(pPVar2 + 0x65),*(void **)(pPVar2 + 99),
                   (ulonglong)*(uint *)((longlong)(pPVar2 + 100) + 4) << 2);
        pPVar2[99] = (PointerKey)(pPVar2 + 0x66);
      }
      *(undefined4 *)((longlong)(pPVar2 + 100) + 4) = 0x40;
      *(undefined4 *)(pPVar2 + 100) = 0;
      if (*(void **)(pPVar2 + 0x86) != pPVar2 + 0x89) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (*(FLLMAllocator **)(pPVar2 + 0x88),*(void **)(pPVar2 + 0x86),
                   (ulonglong)*(uint *)((longlong)(pPVar2 + 0x87) + 4) << 3);
        pPVar2[0x86] = (PointerKey)(pPVar2 + 0x89);
      }
      *(undefined4 *)((longlong)(pPVar2 + 0x87) + 4) = 0x40;
      *(undefined4 *)(pPVar2 + 0x87) = 0;
      if (*(void **)(pPVar2 + 0xc9) != pPVar2 + 0xcc) {
        UE::LLMPrivate::FLLMAllocator::Free
                  (*(FLLMAllocator **)(pPVar2 + 0xcb),*(void **)(pPVar2 + 0xc9),
                   (ulonglong)*(uint *)((longlong)(pPVar2 + 0xca) + 4) << 2);
        pPVar2[0xc9] = (PointerKey)(pPVar2 + 0xcc);
      }
      *(undefined4 *)((longlong)(pPVar2 + 0xca) + 4) = 0x40;
      *(undefined4 *)(pPVar2 + 0xca) = 0;
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(pPVar2 + -6),*(void **)(pPVar2 + -5),
                 (ulonglong)*(uint *)((longlong)(pPVar2 + -4) + 4) << 2);
      pPVar2[-5] = 0;
      pPVar2[-4] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(pPVar2 + -0xb));
      puVar1 = (undefined1 *)(pPVar2 + 0xec);
      pPVar2 = pPVar2 + 0xf7;
    } while ((FWindowsRecursiveMutex *)puVar1 != &this->AllStripesMutex);
  }
  return;
}

// FillTable @ 141692f40

void __cdecl
FillTable(FSizeTableEntry *param_1,int *param_2,uint *param_3,uint param_4,uint param_5,
         ulong64 param_6,uint param_7)

{
  uint uVar1;
  code *pcVar2;
  FSizeTableEntry FVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_4 != 0) {
    uVar7 = (ulonglong)param_4;
    do {
      uVar1 = *param_3;
      if (uVar1 < 0x7001) {
        if ((((param_6 & param_7 - 1) != 0) || (param_6 < param_7)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(PlatformPageSize & (BasePageSize - 1)) == 0 && PlatformPageSize >= BasePageSize"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                               ,0x6b,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((uVar1 & 7) != 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("InBinSize % 8 == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                               ,0x6c,L"Small bin size must be a multiple of UE_MBC_MIN_BIN_SIZE"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = 0;
        do {
          if ((0xfe < uVar6) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("NumMemoryPagesPerBlock < ((uint8) 0xff)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                                 ,0x73,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = uVar6 + 1;
          uVar5 = (ulonglong)uVar6 * (param_6 / param_7);
        } while ((uVar5 < (byte)param_5) || (uVar5 % (ulonglong)(byte)param_5 != 0));
        if ((0xffffffff < (uVar6 * param_6) / (ulonglong)uVar1) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(PlatformPageSize * NumMemoryPagesPerBlock) / BinSize <= ((uint32) 0xffffffff)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                               ,0x7f,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar3.NumMemoryPagesPerBlock = uVar6;
        FVar3.BinSize = uVar1;
        param_1[*param_2] = FVar3;
        *param_2 = *param_2 + 1;
      }
      param_3 = param_3 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// GetMapIndex @ 1416999b0

uint __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
StripeData::GetMapIndex(StripeData *this,PointerKey *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar3;
  
  uVar4 = this->Capacity - 1;
  uVar2 = uVar4 & param_2;
  uVar3 = (ulonglong)uVar2;
  uVar1 = this->Map[uVar3];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return uVar2;
    }
    if ((this->Keys).Count <= uVar1) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if ((((this->Keys).Array[uVar1].Pointer ^ param_1->Pointer) & 0xffffffffffff0000) == 0) break;
    uVar2 = (uint)uVar3 + 1 & uVar4;
    uVar3 = (ulonglong)uVar2;
    uVar1 = this->Map[uVar3];
  }
  return (uint)uVar3;
}

// GetTagName_CustomName @ 1416a0aa0

FName __cdecl GetTagName_CustomName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&TagName_CustomName,L"CustomName");
      _Init_thread_footer(&_TSS0);
    }
  }
  *(FName *)in_RCX = TagName_CustomName;
  return in_RCX;
}

// GlobalRegisterTagDeclaration @ 1416a1d50

void __cdecl GlobalRegisterTagDeclaration(FLLMTagDeclaration *param_1)

{
  FLowLevelMemTracker *this;
  
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this = FLowLevelMemTracker::Get();
    FLowLevelMemTracker::RegisterTagDeclaration(this,param_1);
    return;
  }
  return;
}

// IsInteractiveEnsureMode @ 1416b0b80

bool __cdecl IsInteractiveEnsureMode(void)

{
  return GEnsureShowsCRC;
}

// IsUnderDirectory @ 1416b0d60

bool __cdecl ManagedStorageInternal::IsUnderDirectory(FString *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  
  iVar5 = (param_2->Data).ArrayNum;
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = 0;
  }
  bVar3 = ::FString::EndsWith(param_2,L"/",1,IgnoreCase);
  if (bVar3) {
    iVar9 = iVar9 + -1;
  }
  pwVar7 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar7,pwVar8,(longlong)iVar9);
  if (iVar5 == 0) {
    iVar5 = (param_2->Data).ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (iVar5 != iVar6) {
      if ((((iVar1 == 0) || (iVar9 < 0)) || (iVar1 + -1 <= iVar9)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar9 * 2) != 0x2f)
      goto LAB_1416b0e49;
    }
    bVar3 = true;
  }
  else {
LAB_1416b0e49:
    bVar3 = false;
  }
  return bVar3;
}

// LLMGetTagName @ 1416b11f0

wchar_t * __cdecl LLMGetTagName(ELLMTag param_1)

{
  if (param_1 < GenericTagCount) {
    return Names[param_1];
  }
  return (wchar_t *)0x0;
}

// LLMGetTagNameANSI @ 1416b1210

char * __cdecl LLMGetTagNameANSI(ELLMTag param_1)

{
  if (param_1 < GenericTagCount) {
    return Names[param_1];
  }
  return (char *)0x0;
}

// LLMGetTagUniqueName @ 1416b1230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl LLMGetTagUniqueName(ELLMTag param_1)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  undefined7 in_register_00000009;
  FName FVar4;
  byte in_DL;
  uint uVar5;
  undefined1 auStack_268 [32];
  FName local_248 [2];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  FVar4._1_7_ = in_register_00000009;
  FVar4.ComparisonIndex.Value._0_1_ = param_1;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(UniqueNames,L"Untagged");
    FName::FName(UniqueNames + 1,L"Paused");
    FName::FName(UniqueNames + 2,L"Total");
    FName::FName(UniqueNames + 3,L"Untracked");
    FName::FName(UniqueNames + 4,L"PlatformTotal");
    FName::FName(UniqueNames + 5,L"TrackedTotal");
    FName::FName(UniqueNames + 6,L"UntaggedTotal");
    FName::FName(UniqueNames + 7,L"WorkingSetSize");
    FName::FName(UniqueNames + 8,L"PagefileUsed");
    FName::FName(UniqueNames + 9,L"PlatformTrackedTotal");
    FName::FName(UniqueNames + 10,L"PlatformUntaggedTotal");
    FName::FName(UniqueNames + 0xb,L"PlatformUntracked");
    FName::FName(UniqueNames + 0xc,L"PlatformOverhead");
    FName::FName(UniqueNames + 0xd,L"PlatformOSAvailable");
    FName::FName(UniqueNames + 0xe,L"FMalloc");
    FName::FName(UniqueNames + 0xf,L"FMallocUnused");
    FName::FName(UniqueNames + 0x10,L"RHIUnused");
    FName::FName(UniqueNames + 0x11,L"ThreadStack");
    FName::FName(UniqueNames + 0x12,L"ThreadStackPlatform");
    FName::FName(UniqueNames + 0x13,L"ProgramSizePlatform");
    FName::FName(UniqueNames + 0x14,L"ProgramSize");
    FName::FName(UniqueNames + 0x15,L"BackupOOMMemoryPoolPlatform");
    FName::FName(UniqueNames + 0x16,L"BackupOOMMemoryPool");
    FName::FName(UniqueNames + 0x17,L"GenericPlatformMallocCrash");
    FName::FName(UniqueNames + 0x18,L"GenericPlatformMallocCrashPlatform");
    FName::FName(UniqueNames + 0x19,L"EngineMisc");
    FName::FName(UniqueNames + 0x1a,L"TaskGraphTasksMisc");
    FName::FName(UniqueNames + 0x1b,L"LinearAllocator");
    FName::FName(UniqueNames + 0x1c,L"Audio");
    FName::FName(UniqueNames + 0x1d,L"AudioMisc");
    FName::FName(UniqueNames + 0x1e,L"AudioSoundWaves");
    FName::FName(UniqueNames + 0x1f,L"AudioSoundWaveProxies");
    FName::FName(UniqueNames + 0x20,L"AudioMixer");
    FName::FName(UniqueNames + 0x21,L"AudioMixerPlugins");
    FName::FName(UniqueNames + 0x22,L"AudioPrecache");
    FName::FName(UniqueNames + 0x23,L"AudioDecompress");
    FName::FName(UniqueNames + 0x24,L"AudioRealtimePrecache");
    FName::FName(UniqueNames + 0x25,L"AudioFullDecompress");
    FName::FName(UniqueNames + 0x26,L"AudioStreamCache");
    FName::FName(UniqueNames + 0x27,L"AudioStreamCacheCompressedData");
    FName::FName(UniqueNames + 0x28,L"AudioSynthesis");
    FName::FName(UniqueNames + 0x29,L"RealTimeCommunications");
    FName::FName(UniqueNames + 0x2a,L"FName");
    FName::FName(UniqueNames + 0x2b,L"Networking");
    FName::FName(UniqueNames + 0x2c,L"Meshes");
    FName::FName(UniqueNames + 0x2d,L"Stats");
    FName::FName(UniqueNames + 0x2e,L"Shaders");
    FName::FName(UniqueNames + 0x2f,L"PSO");
    FName::FName(UniqueNames + 0x30,L"Textures");
    FName::FName(UniqueNames + 0x31,L"TextureMetaData");
    FName::FName(UniqueNames + 0x32,L"VirtualTextureSystem");
    FName::FName(UniqueNames + 0x33,L"RenderTargets");
    FName::FName(UniqueNames + 0x34,L"SceneRender");
    FName::FName(UniqueNames + 0x35,L"RHIMisc");
    FName::FName(UniqueNames + 0x36,L"AsyncLoading");
    FName::FName(UniqueNames + 0x37,L"UObject");
    FName::FName(UniqueNames + 0x38,L"Animation");
    FName::FName(UniqueNames + 0x39,L"StaticMesh");
    FName::FName(UniqueNames + 0x3a,L"Materials");
    FName::FName(UniqueNames + 0x3b,L"Particles");
    FName::FName(UniqueNames + 0x3c,L"Niagara");
    FName::FName(UniqueNames + 0x3d,L"GPUSort");
    FName::FName(UniqueNames + 0x3e,L"GC");
    FName::FName(UniqueNames + 0x3f,L"UI");
    FName::FName(UniqueNames + 0x40,L"NavigationRecast");
    FName::FName(UniqueNames + 0x41,L"Physics");
    FName::FName(UniqueNames + 0x42,L"PhysX");
    FName::FName(UniqueNames + 0x43,L"PhysXGeometry");
    FName::FName(UniqueNames + 0x44,L"PhysXTrimesh");
    FName::FName(UniqueNames + 0x45,L"PhysXConvex");
    FName::FName(UniqueNames + 0x46,L"PhysXAllocator");
    FName::FName(UniqueNames + 0x47,L"PhysXLandscape");
    FName::FName(UniqueNames + 0x48,L"Chaos");
    FName::FName(UniqueNames + 0x49,L"ChaosGeometry");
    FName::FName(UniqueNames + 0x4a,L"ChaosAcceleration");
    FName::FName(UniqueNames + 0x4b,L"ChaosParticles");
    FName::FName(UniqueNames + 0x4c,L"ChaosLandscape");
    FName::FName(UniqueNames + 0x4d,L"ChaosTrimesh");
    FName::FName(UniqueNames + 0x4e,L"ChaosConvex");
    FName::FName(UniqueNames + 0x4f,L"ChaosScene");
    FName::FName(UniqueNames + 0x50,L"ChaosUpdate");
    FName::FName(UniqueNames + 0x51,L"ChaosActor");
    FName::FName(UniqueNames + 0x52,L"ChaosBody");
    FName::FName(UniqueNames + 0x53,L"ChaosConstraint");
    FName::FName(UniqueNames + 0x54,L"ChaosMaterial");
    FName::FName(UniqueNames + 0x55,L"EnginePreInitMemory");
    FName::FName(UniqueNames + 0x56,L"EngineInitMemory");
    FName::FName(UniqueNames + 0x57,L"RenderingThreadMemory");
    FName::FName(UniqueNames + 0x58,L"LoadMapMisc");
    FName::FName(UniqueNames + 0x59,L"StreamingManager");
    FName::FName(UniqueNames + 0x5a,L"GraphicsPlatform");
    FName::FName(UniqueNames + 0x5b,L"FileSystem");
    FName::FName(UniqueNames + 0x5c,L"Localization");
    FName::FName(UniqueNames + 0x5d,L"AssetRegistry");
    FName::FName(UniqueNames + 0x5e,L"ConfigSystem");
    FName::FName(UniqueNames + 0x5f,L"InitUObject");
    FName::FName(UniqueNames + 0x60,L"VideoRecording");
    FName::FName(UniqueNames + 0x61,L"Replays");
    FName::FName(UniqueNames + 0x62,L"MaterialInstance");
    FName::FName(UniqueNames + 99,L"SkeletalMesh");
    FName::FName(UniqueNames + 100,L"InstancedMesh");
    FName::FName(UniqueNames + 0x65,L"Landscape");
    FName::FName(UniqueNames + 0x66,L"CsvProfiler");
    FName::FName(UniqueNames + 0x67,L"MediaStreaming");
    FName::FName(UniqueNames + 0x68,L"ElectraPlayer");
    FName::FName(UniqueNames + 0x69,L"WMFPlayer");
    FName::FName(UniqueNames + 0x6a,L"PlatformMMIO");
    FName::FName(UniqueNames + 0x6b,L"PlatformVM");
    FName::FName(UniqueNames + 0x6c,L"CustomName");
    _Init_thread_footer(&_TSS0);
  }
  if (in_DL < 0x6d) {
    *(FName *)FVar4 = UniqueNames[in_DL];
  }
  else {
    if (in_DL < 0x6f) {
      FVar2.ComparisonIndex.Value = 0;
      FVar2.Number = 0;
    }
    else {
      if (bCustomNamesInitialized == false) {
        local_238.Base = local_218;
        local_238.bIsDynamic = false;
        local_238.bIsExternal = false;
        local_238.End = (wchar_t *)local_18;
        uVar5 = 0x6f;
        do {
          local_238.CurPos = local_238.Base;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_238,L"ELLMTag%d");
          pFVar1 = FName::FName(local_248,
                                (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1),
                                local_238.Base,FNAME_Add);
          uVar3 = uVar5 - 0x6f;
          uVar5 = uVar5 + 1;
          CustomNames[uVar3] = *pFVar1;
        } while (uVar5 < 0x100);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
      }
      FVar2 = CustomNames[in_DL - 0x6f];
    }
    *(FName *)FVar4 = FVar2;
  }
  return FVar4;
}

// LLMGetUntaggedTagName @ 1416b1bd0

FName __cdecl LLMGetUntaggedTagName(ELLMTagSet param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  undefined7 in_register_00000009;
  char in_DL;
  
  if (in_DL == '\0') {
    *(FName *)CONCAT71(in_register_00000009,param_1) = TagName_Untagged;
    FVar3._1_7_ = in_register_00000009;
    FVar3.ComparisonIndex.Value._0_1_ = param_1;
    return FVar3;
  }
  if (in_DL != '\x03') {
    *(undefined8 *)CONCAT71(in_register_00000009,param_1) = 0;
    FVar1._1_7_ = in_register_00000009;
    FVar1.ComparisonIndex.Value._0_1_ = param_1;
    return FVar1;
  }
  *(FName *)CONCAT71(in_register_00000009,param_1) = TagName_UntaggedUObjectClasses;
  FVar2._1_7_ = in_register_00000009;
  FVar2.ComparisonIndex.Value._0_1_ = param_1;
  return FVar2;
}

// LockAll @ 1416b1dd0

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
LockAll(LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
        *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->AllStripesMutex;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bAllStripesLocked != (atomic<bool>)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  LOCK();
  this->bAllStripesLocked = (atomic<bool>)0x1;
  UNLOCK();
  for (; this != (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
                  *)lpCriticalSection;
      this = (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
              *)(this->MapStripes + 1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// Remove @ 1416bd580

bool __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Remove
          (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           *this,PointerKey *param_1,Values *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  StripeData *this_00;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  uVar8 = param_1->Pointer >> 0x10;
  uVar8 = ~uVar8 + uVar8 * 0x200000;
  uVar8 = (uVar8 >> 0x18 ^ uVar8) * 0x109;
  uVar8 = (uVar8 >> 0xe ^ uVar8) * 0x15;
  uVar7 = ((uint)(uVar8 >> 0x1c) ^ (uint)uVar8) * -0x7fffffff;
  this_00 = this->MapStripes + (uVar7 >> 0x1c);
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  if (this_00->Map == (uint *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar3 = StripeData::GetMapIndex(this_00,param_1,uVar7);
  uVar8 = (ulonglong)uVar3;
  uVar7 = this_00->Map[uVar8];
  if (uVar7 != 0xffffffff) {
    if ((this_00->Keys).Count <= uVar7) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    (param_2->Key).Pointer = (this_00->Keys).Array[uVar7].Pointer;
    if ((this_00->Values1).Count <= uVar7) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    param_2->Value1 = (this_00->Values1).Array[uVar7];
    if ((this_00->Values2).Count <= uVar7) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    *(undefined8 *)(param_2->Value2).Tag = *(undefined8 *)(this_00->Values2).Array[uVar7].Tag;
    uVar1 = (this_00->Keys).Count;
    if (uVar7 == uVar1 - 1) {
      if (uVar1 == 0) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
      puVar2 = &(this_00->Keys).Count;
      *puVar2 = *puVar2 - 1;
      FLLMArray<unsigned_int,unsigned_int>::RemoveLast(&this_00->KeyHashes);
      FLLMArray<unsigned_int,unsigned_int>::RemoveLast(&this_00->Values1);
      if ((this_00->Values2).Count == 0) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
      puVar2 = &(this_00->Values2).Count;
      *puVar2 = *puVar2 - 1;
    }
    else {
      uVar1 = (this_00->FreeKeyIndices).Capacity;
      if ((this_00->FreeKeyIndices).Count == uVar1) {
        uVar4 = 0x1000;
        if ((uVar1 != 0) && (uVar4 = (uVar1 >> 1) + uVar1, uVar4 <= uVar1)) {
          `FLLMArray<unsigned_int,unsigned_int>::Add'::__l8::<lambda_1>::operator()(local_res8);
        }
        FLLMArray<unsigned_int,unsigned_int>::Reserve(&this_00->FreeKeyIndices,uVar4);
      }
      (this_00->FreeKeyIndices).Array[(this_00->FreeKeyIndices).Count] = uVar7;
      puVar2 = &(this_00->FreeKeyIndices).Count;
      *puVar2 = *puVar2 + 1;
    }
    uVar7 = uVar3;
    if (uVar3 == 0) {
      uVar7 = this_00->Capacity;
    }
    uVar9 = (ulonglong)(uVar7 - 1);
    uVar7 = this_00->Map[uVar9];
    while (uVar7 != 0xffffffff) {
      uVar3 = (uint)uVar9;
      uVar7 = uVar3;
      if (uVar3 == 0) {
        uVar7 = this_00->Capacity;
      }
      uVar9 = (ulonglong)(uVar7 - 1);
      uVar7 = this_00->Map[uVar9];
    }
    do {
      uVar1 = (uint)uVar8;
      puVar2 = this_00->Map;
      uVar6 = (ulonglong)(uVar1 + 1 & this_00->Capacity - 1);
      uVar9 = 0xffffffff;
      bVar5 = false;
      uVar7 = puVar2[uVar6];
      while (uVar7 != 0xffffffff) {
        uVar7 = puVar2[uVar6];
        if ((this_00->KeyHashes).Count <= uVar7) {
          UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        uVar4 = this_00->Capacity - 1;
        uVar7 = (this_00->KeyHashes).Array[uVar7] & uVar4;
        if (uVar1 < uVar3) {
          if (uVar7 < uVar3) goto joined_r0x0001416bd8d4;
LAB_1416bd8d6:
          bVar5 = true;
          uVar9 = uVar6;
        }
        else if (uVar3 <= uVar7) {
joined_r0x0001416bd8d4:
          if (uVar7 <= uVar1) goto LAB_1416bd8d6;
        }
        puVar2 = this_00->Map;
        uVar6 = (ulonglong)((int)uVar6 + 1U & uVar4);
        uVar7 = puVar2[uVar6];
      }
      if (!bVar5) goto LAB_1416bd911;
      puVar2[uVar8] = puVar2[uVar9];
      uVar8 = uVar9;
    } while( true );
  }
  bVar5 = false;
LAB_1416bd926:
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  return bVar5;
LAB_1416bd911:
  bVar5 = true;
  puVar2[uVar8] = 0xffffffff;
  this_00->Count = this_00->Count - 1;
  goto LAB_1416bd926;
}

// ReportInteractiveEnsure @ 1416be0b0

void __cdecl ReportInteractiveEnsure(wchar_t *param_1)

{
  FOutputDeviceRedirector *this;
  
  GEnsureShowsCRC = true;
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(this,None);
  ReportEnsure(param_1,(void *)0x0);
  GEnsureShowsCRC = false;
  return;
}

// Reserve @ 1416be7f0

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
StripeData::Reserve(StripeData *this,uint param_1)

{
  uint **ppuVar1;
  uint uVar2;
  uint *puVar3;
  PointerKey *pPVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar3 = this->Map;
  ppuVar1 = &this->Map;
  uVar2 = this->Capacity;
  uVar7 = (ulonglong)uVar2;
  uVar10 = 1;
  if (1 < param_1) {
    uVar10 = param_1;
  }
  uVar5 = 1;
  if (uVar10 != 0) {
    uVar5 = (ulonglong)uVar10;
  }
  uVar5 = uVar5 - 1;
  lVar9 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  cVar8 = (char)lVar9;
  if (uVar5 == 0) {
    cVar8 = -1;
  }
  uVar5 = 1L << (0x40U - ('?' - cVar8) & 0x3f);
  uVar10 = (uint)uVar5;
  if (uVar10 <= uVar2) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->Capacity = uVar10;
  puVar6 = UE::LLMPrivate::FLLMAllocator::Alloc(this->Allocator,(uVar5 & 0xffffffff) << 2);
  uVar11 = 0;
  *ppuVar1 = puVar6;
  if (uVar10 != 0) {
    uVar12 = uVar11;
    if ((3 < uVar10) && ((ppuVar1 < puVar6 || (uVar12 = 0, puVar6 + (uVar10 - 1) < ppuVar1)))) {
      do {
        uVar11 = uVar11 + 4;
      } while (uVar11 < (uVar10 & 0xfffffffc));
      memset(puVar6,-1,(ulonglong)(uVar10 >> 2) << 4);
      uVar12 = uVar11;
      if (uVar10 <= uVar11) goto LAB_1416be927;
    }
    uVar5 = (ulonglong)(uVar10 - uVar12);
    lVar9 = (ulonglong)uVar12 * 4;
    do {
      *(undefined4 *)(lVar9 + (longlong)*ppuVar1) = 0xffffffff;
      uVar5 = uVar5 - 1;
      lVar9 = lVar9 + 4;
    } while (uVar5 != 0);
  }
LAB_1416be927:
  puVar6 = puVar3;
  if (uVar2 != 0) {
    do {
      uVar10 = *puVar6;
      if (uVar10 != 0xffffffff) {
        if ((this->KeyHashes).Count <= uVar10) {
          UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        uVar11 = (this->KeyHashes).Array[uVar10];
        if ((this->Keys).Count <= uVar10) {
          UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        pPVar4 = (this->Keys).Array;
        uVar12 = this->Capacity - 1;
        uVar5 = (ulonglong)(uVar11 & uVar12);
        uVar11 = (*ppuVar1)[uVar5];
        while (uVar11 != 0xffffffff) {
          if ((this->Keys).Count <= uVar11) {
            UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
            FWindowsPlatformMisc::RaiseException(1);
          }
          if ((((this->Keys).Array[uVar11].Pointer ^ pPVar4[uVar10].Pointer) & 0xffffffffffff0000)
              == 0) break;
          uVar5 = (ulonglong)((int)uVar5 + 1U & uVar12);
          uVar11 = (*ppuVar1)[uVar5];
        }
        (*ppuVar1)[uVar5] = uVar10;
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  UE::LLMPrivate::FLLMAllocator::Free(this->Allocator,puVar3,(ulonglong)uVar2 << 2);
  return;
}

// SetAllocator @ 1416bfe40

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
SetAllocator(LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
             *this,FLLMAllocator *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  PointerKey *pPVar3;
  ulonglong uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  if (this != (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
               *)&this->AllStripesMutex) {
    uVar7 = 1;
    if (1 < param_2 >> 4) {
      uVar7 = param_2 >> 4;
    }
    uVar4 = 1;
    if (uVar7 != 0) {
      uVar4 = (ulonglong)uVar7;
    }
    uVar4 = uVar4 - 1;
    puVar12 = &this->MapStripes[0].Keys.Count;
    do {
      *(FLLMAllocator **)(puVar12 + -8) = param_1;
      puVar1 = puVar12 + -6;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      *(FLLMAllocator **)(puVar12 + 2) = param_1;
      *(FLLMAllocator **)(puVar12 + 0x88) = param_1;
      cVar6 = (char)lVar8;
      if (uVar4 == 0) {
        cVar6 = -1;
      }
      *(FLLMAllocator **)(puVar12 + 0xce) = param_1;
      *(FLLMAllocator **)(puVar12 + 0x114) = param_1;
      *(FLLMAllocator **)(puVar12 + 0x19a) = param_1;
      uVar7 = puVar12[-3];
      uVar9 = (ulonglong)uVar7;
      puVar2 = *(uint **)puVar1;
      uVar11 = 1L << (0x40U - ('?' - cVar6) & 0x3f);
      uVar10 = (uint)uVar11;
      if (uVar10 <= uVar7) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
      puVar12[-3] = uVar10;
      puVar5 = UE::LLMPrivate::FLLMAllocator::Alloc
                         (*(FLLMAllocator **)(puVar12 + -8),(uVar11 & 0xffffffff) << 2);
      uVar13 = 0;
      *(uint **)puVar1 = puVar5;
      if (uVar10 != 0) {
        uVar14 = uVar13;
        if ((3 < uVar10) && ((puVar1 < puVar5 || (uVar14 = 0, puVar5 + (uVar10 - 1) < puVar1)))) {
          do {
            uVar13 = uVar13 + 4;
          } while (uVar13 < (uVar10 & 0xfffffffc));
          memset(puVar5,-1,(ulonglong)(uVar10 >> 2) << 4);
          uVar14 = uVar13;
          if (uVar10 <= uVar13) goto LAB_1416bffde;
        }
        uVar11 = (ulonglong)(uVar10 - uVar14);
        lVar8 = (ulonglong)uVar14 * 4;
        do {
          *(undefined4 *)(lVar8 + *(longlong *)puVar1) = 0xffffffff;
          uVar11 = uVar11 - 1;
          lVar8 = lVar8 + 4;
        } while (uVar11 != 0);
      }
LAB_1416bffde:
      puVar5 = puVar2;
      if (uVar7 != 0) {
        do {
          uVar10 = *puVar5;
          if (uVar10 != 0xffffffff) {
            if (puVar12[0x86] <= uVar10) {
              UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
              FWindowsPlatformMisc::RaiseException(1);
            }
            uVar13 = *(uint *)(*(longlong *)(puVar12 + 0x84) + (ulonglong)uVar10 * 4);
            if (*puVar12 <= uVar10) {
              UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
              FWindowsPlatformMisc::RaiseException(1);
            }
            uVar14 = puVar12[-3];
            pPVar3 = ((FLLMArray<PointerKey,unsigned_int> *)(puVar12 + -2))->Array;
            uVar11 = (ulonglong)(uVar14 - 1 & uVar13);
            uVar13 = *(uint *)(*(longlong *)puVar1 + uVar11 * 4);
            while (uVar13 != 0xffffffff) {
              if (*puVar12 <= uVar13) {
                UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
                FWindowsPlatformMisc::RaiseException(1);
              }
              if (((((FLLMArray<PointerKey,unsigned_int> *)(puVar12 + -2))->Array[uVar13].Pointer ^
                   pPVar3[uVar10].Pointer) & 0xffffffffffff0000) == 0) break;
              uVar11 = (ulonglong)((int)uVar11 + 1U & uVar14 - 1);
              uVar13 = *(uint *)(*(longlong *)puVar1 + uVar11 * 4);
            }
            *(uint *)(*(longlong *)puVar1 + uVar11 * 4) = uVar10;
          }
          uVar9 = uVar9 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar9 != 0);
      }
      UE::LLMPrivate::FLLMAllocator::Free
                (*(FLLMAllocator **)(puVar12 + -8),puVar2,(ulonglong)uVar7 << 2);
      puVar1 = puVar12 + 0x1dc;
      puVar12 = puVar12 + 0x1ee;
    } while ((FWindowsRecursiveMutex *)puVar1 != &this->AllStripesMutex);
  }
  return;
}

// Trim @ 1416c2c30

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Trim
          (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           *this)

{
  uint *puVar1;
  uint *puVar2;
  
  if (this != (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
               *)&this->AllStripesMutex) {
    puVar2 = &this->MapStripes[0].Keys.Count;
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + -0x12));
      if ((((FLLMArray<PointerKey,unsigned_int> *)(puVar2 + -2))->Array !=
           (PointerKey *)(puVar2 + 4)) && (*puVar2 < puVar2[1] - (puVar2[1] >> 2))) {
        FLLMArray<PointerKey,unsigned_int>::Reserve
                  ((FLLMArray<PointerKey,unsigned_int> *)(puVar2 + -2),*puVar2);
      }
      if ((((FLLMArray<unsigned_int,unsigned_int> *)(puVar2 + 0x84))->Array != puVar2 + 0x8a) &&
         (puVar2[0x86] < puVar2[0x87] - (puVar2[0x87] >> 2))) {
        FLLMArray<unsigned_int,unsigned_int>::Reserve
                  ((FLLMArray<unsigned_int,unsigned_int> *)(puVar2 + 0x84),puVar2[0x86]);
      }
      if ((((FLLMArray<unsigned_int,unsigned_int> *)(puVar2 + 0xca))->Array != puVar2 + 0xd0) &&
         (puVar2[0xcc] < puVar2[0xcd] - (puVar2[0xcd] >> 2))) {
        FLLMArray<unsigned_int,unsigned_int>::Reserve
                  ((FLLMArray<unsigned_int,unsigned_int> *)(puVar2 + 0xca),puVar2[0xcc]);
      }
      if ((((FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> *)
           (puVar2 + 0x110))->Array != (FLowLevelAllocInfo *)(puVar2 + 0x116)) &&
         (puVar2[0x112] < puVar2[0x113] - (puVar2[0x113] >> 2))) {
        FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::Reserve
                  ((FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> *)
                   (puVar2 + 0x110),puVar2[0x112]);
      }
      if ((((FLLMArray<unsigned_int,unsigned_int> *)(puVar2 + 0x196))->Array != puVar2 + 0x19c) &&
         (puVar2[0x198] < puVar2[0x199] - (puVar2[0x199] >> 2))) {
        FLLMArray<unsigned_int,unsigned_int>::Reserve
                  ((FLLMArray<unsigned_int,unsigned_int> *)(puVar2 + 0x196),puVar2[0x198]);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + -0x12));
      puVar1 = puVar2 + 0x1dc;
      puVar2 = puVar2 + 0x1ee;
    } while ((FWindowsRecursiveMutex *)puVar1 != &this->AllStripesMutex);
  }
  return;
}

// UnlockAll @ 1416c5120

void __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
UnlockAll(LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
          *this)

{
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
  *lpCriticalSection;
  
  for (lpCriticalSection = this;
      lpCriticalSection !=
      (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
       *)&this->AllStripesMutex;
      lpCriticalSection =
           (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
            *)(lpCriticalSection->MapStripes + 1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (this->bAllStripesLocked != (atomic<bool>)0x1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  LOCK();
  this->bAllStripesLocked = (atomic<bool>)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001416c51ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->AllStripesMutex);
  return;
}

// begin @ 1416c8820

FIterator * __thiscall
LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::begin
          (LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           *this,FIterator *__return_storage_ptr__)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (this->bAllStripesLocked == (atomic<bool>)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  *(LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> **)
   __return_storage_ptr__ = this;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  uVar4 = 0;
  do {
    uVar1 = this->MapStripes[(int)uVar4].Capacity;
    if (uVar1 != 0) {
      puVar2 = this->MapStripes[(int)uVar4].Map;
      uVar4 = 0;
      do {
        if (puVar2[uVar4] != 0xffffffff) {
          return __return_storage_ptr__;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        *(uint *)&__return_storage_ptr__->field_0xc = uVar3;
      } while (uVar3 < uVar1);
    }
    *(int *)&__return_storage_ptr__->field_0x8 = *(int *)&__return_storage_ptr__->field_0x8 + 1;
    uVar4 = (ulonglong)*(uint *)&__return_storage_ptr__->field_0x8;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  } while ((int)*(uint *)&__return_storage_ptr__->field_0x8 < 0x10);
  return __return_storage_ptr__;
}

// `dynamic_atexit_destructor_for_'Array'' @ 15033cc90

void __cdecl
`UE::LLMPrivate::GetInitialisedCallbacks'::__l2::_dynamic_atexit_destructor_for__Array__(void)

{
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = ::Array.AllocatorInstance.SecondaryData;
  if (::Array.AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
    return;
  }
  if (::Array.AllocatorInstance.SecondaryData !=
      (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
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

// `dynamic_atexit_destructor_for_'Array'' @ 15033ccb0

void __cdecl
`UE::LLMPrivate::GetTagCreationCallbacks'::__l2::_dynamic_atexit_destructor_for__Array__(void)

{
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = ::Array.AllocatorInstance.SecondaryData;
  if (::Array.AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
       )0x0) {
    return;
  }
  if (::Array.AllocatorInstance.SecondaryData !=
      (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
       )0x0) {
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

// `dynamic_atexit_destructor_for_'CVarLLMCsvFlushEveryRow'' @ 15033ccd0

void __cdecl _dynamic_atexit_destructor_for__CVarLLMCsvFlushEveryRow__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLLMCsvFlushEveryRow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLLMHeaderMaxSize'' @ 15033ccf0

void __cdecl _dynamic_atexit_destructor_for__CVarLLMHeaderMaxSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLLMHeaderMaxSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLLMTrackPeaks'' @ 15033cd10

void __cdecl _dynamic_atexit_destructor_for__CVarLLMTrackPeaks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLLMTrackPeaks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLLMWriteInterval'' @ 15033cd30

void __cdecl _dynamic_atexit_destructor_for__CVarLLMWriteInterval__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLLMWriteInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CreateDummyFileInPersistentStorageCommand'' @ 15033cd50

void __cdecl _dynamic_atexit_destructor_for__CreateDummyFileInPersistentStorageCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CreateDummyFileInPersistentStorageCommand);
  return;
}

// `dynamic_atexit_destructor_for_'CreationCallbacks'' @ 15033cd70

void __cdecl
`UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks'::__l2::
_dynamic_atexit_destructor_for__CreationCallbacks__(void)

{
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = CreationCallbacks.AllocatorInstance.SecondaryData;
  if (CreationCallbacks.AllocatorInstance.SecondaryData ==
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
    return;
  }
  if (CreationCallbacks.AllocatorInstance.SecondaryData !=
      (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
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

// `dynamic_atexit_destructor_for_'DumpLLM'' @ 15033cd90

void __cdecl _dynamic_atexit_destructor_for__DumpLLM__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpLLM);
  return;
}

// `dynamic_atexit_destructor_for_'DumpPersistentStorage'' @ 15033cdb0

void __cdecl _dynamic_atexit_destructor_for__DumpPersistentStorage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpPersistentStorage);
  return;
}

// `dynamic_atexit_destructor_for_'FLLMMiscTestAutomationTestInstance'' @ 15033cdd0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FLLMMiscTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLLMMiscTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLLMScopeTestAutomationTestInstance'' @ 15033cdf0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FLLMScopeTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLLMScopeTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTopologicalSortTestAutomationTestInstance'' @ 15033ce10

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTopologicalSortTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTopologicalSortTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FoundTags'' @ 15033ce30

void __cdecl
`FLowLevelMemTracker::FindTagName'::__l2::_dynamic_atexit_destructor_for__FoundTags__(void)

{
  FoundTags._72_4_ = 0;
  if (FoundTags._64_8_ != 0) {
    FMemory::Free((void *)FoundTags._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FoundTags);
  return;
}

// `dynamic_atexit_destructor_for_'FreeBlockListsRegistrationMutex'' @ 15033ce70

void __cdecl
`TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex'::__l2::
_dynamic_atexit_destructor_for__FreeBlockListsRegistrationMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015033ce77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
              ::__l2::FreeBlockListsRegistrationMutex);
  return;
}

// `dynamic_atexit_destructor_for_'FreeBlockListsRegistrationMutex'' @ 15033ce90

void __cdecl
`TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex'::__l2::
_dynamic_atexit_destructor_for__FreeBlockListsRegistrationMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015033ce97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
              ::__l2::FreeBlockListsRegistrationMutex);
  return;
}

// `dynamic_atexit_destructor_for_'GFileLogExec'' @ 15033ceb0

void __cdecl _dynamic_atexit_destructor_for__GFileLogExec__(void)

{
  if (GFileLogExec.Ptr != (FFileLogExec *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033cec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GFileLogExec.Ptr)->_padding_)(GFileLogExec.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GMallocBinnedEnableCSVStatsCVar'' @ 15033ced0

void __cdecl _dynamic_atexit_destructor_for__GMallocBinnedEnableCSVStatsCVar__(void)

{
  GMallocBinnedEnableCSVStatsCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GMallocBinnedEnableCSVStatsCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar'' @ 15033cef0

void __cdecl
_dynamic_atexit_destructor_for__GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar__(void)

{
  GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GMallocBinnedFlushRegisteredThreadCachesOnOneThreadCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GMallocBinnedFlushThreadCacheMaxWaitTimeCVar'' @ 15033cf10

void __cdecl _dynamic_atexit_destructor_for__GMallocBinnedFlushThreadCacheMaxWaitTimeCVar__(void)

{
  GMallocBinnedFlushThreadCacheMaxWaitTimeCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GMallocBinnedFlushThreadCacheMaxWaitTimeCVar);
  return;
}

// `dynamic_atexit_destructor_for_'LLMSnapshot'' @ 15033cf30

void __cdecl _dynamic_atexit_destructor_for__LLMSnapshot__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LLMSnapshot);
  return;
}

// `dynamic_atexit_destructor_for_'LogFileManager'' @ 15033cf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFileManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFileManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogFileOpenOrder'' @ 15033cf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFileOpenOrder__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFileOpenOrder);
  return;
}

// `dynamic_atexit_destructor_for_'LogPlatformFile'' @ 15033cf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPlatformFile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPlatformFile);
  return;
}

// `dynamic_atexit_destructor_for_'LogPlatformFileManagedStorage'' @ 15033cfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPlatformFileManagedStorage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPlatformFileManagedStorage);
  return;
}

// `dynamic_atexit_destructor_for_'PersistentStorageCategoryStatsCommand'' @ 15033cfd0

void __cdecl _dynamic_atexit_destructor_for__PersistentStorageCategoryStatsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&PersistentStorageCategoryStatsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredFreeBlockLists'' @ 15033cff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists'::__l2::
_dynamic_atexit_destructor_for__RegisteredFreeBlockLists__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _RegisteredFreeBlockLists;
  if (_RegisteredFreeBlockLists == (void *)0x0) {
    return;
  }
  if (_RegisteredFreeBlockLists != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'RegisteredFreeBlockLists'' @ 15033d010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists'::__l2::
_dynamic_atexit_destructor_for__RegisteredFreeBlockLists__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _RegisteredFreeBlockLists;
  if (_RegisteredFreeBlockLists == (void *)0x0) {
    return;
  }
  if (_RegisteredFreeBlockLists != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033d030

void __cdecl
`FPersistentStorageManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  DestructItems<FPersistentStorageCategory,int>
            ((FPersistentStorageCategory *)::Singleton.Categories.Categories.AllocatorInstance.Data,
             ::Singleton.Categories.Categories.ArrayNum);
  if (::Singleton.Categories.Categories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.Categories.Categories.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)::Singleton.RootDirectories.RootDirectories.AllocatorInstance.Data,
             ::Singleton.RootDirectories.RootDirectories.ArrayNum);
  if (::Singleton.RootDirectories.RootDirectories.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.RootDirectories.RootDirectories.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033d090

void __cdecl `IFileManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton = (FFileManagerGeneric)&___7FFileManagerGeneric__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Tracker'' @ 15033d0b0

void __cdecl `FLowLevelMemTracker::Construct'::__l2::_dynamic_atexit_destructor_for__Tracker__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  FLowLevelMemTracker::EnabledState = Disabled;
  FLowLevelMemTracker::bIsDisabled = true;
  FLowLevelMemTracker::Clear(&Tracker);
  Allocator = (FLLMAllocator *)0x0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&Tracker.BootstrapMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&Tracker.UpdateMutex);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&Tracker.TagDataMutex);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&Tracker.TagDataMutex);
  }
  UE::LLMPrivate::FLLMAllocator::Clear(&Tracker.Allocator);
                    /* WARNING: Could not recover jumptable at 0x00015033d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&Tracker);
  return;
}

// `dynamic_atexit_destructor_for_'VerifyPersistentStorageCategory'' @ 15033d160

void __cdecl _dynamic_atexit_destructor_for__VerifyPersistentStorageCategory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&VerifyPersistentStorageCategory);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_FMemory'' @ 15033d180

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_FMemory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_FMemory.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_FMemory.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_FMemory.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_LLM'' @ 15033d1a0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_LLM__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_LLM.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_LLM.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_LLM.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_LLMPlatform'' @ 15033d1c0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_LLMPlatform__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_LLMPlatform.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_LLMPlatform.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_LLMPlatform.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_MallocBinned'' @ 15033d1e0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_MallocBinned__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_MallocBinned.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_MallocBinned.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_MallocBinned.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

