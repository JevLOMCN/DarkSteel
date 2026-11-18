// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 169

// `dynamic_initializer_for_'CEnableScriptImportsDebugging'' @ 140f31880

void __cdecl _dynamic_initializer_for__CEnableScriptImportsDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CEnableScriptImportsDebugging,L"s.EnableScriptImportsDebugging",
             &GEnableScriptImportsDebugging,
             L"Loads all native script objects (classes, enums, structs, CDOs) that were available in the editor during cook.Provides more informative log messages at the cost of up to ~1.5 MiB memory and ~1 MiB FName memory depending on project size."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CEnableScriptImportsDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarGAllowMultithreadedLoading'' @ 140f318d0

void __cdecl _dynamic_initializer_for__CVarGAllowMultithreadedLoading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGAllowMultithreadedLoading,L"s.AllowMultithreadedLoading",
             &GAllowMultithreadedLoading,L"Allow some loading steps to be fully multithreaded.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGAllowMultithreadedLoading__);
  return;
}

// `dynamic_initializer_for_'CVarGFailLoadOnNotInstalledImport'' @ 140f31920

void __cdecl _dynamic_initializer_for__CVarGFailLoadOnNotInstalledImport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGFailLoadOnNotInstalledImport,L"s.FailLoadOnNotInstalledImport",
             &GFailLoadOnNotInstalledImport,
             L"Fail package load if an imported package is not installed",0);
  atexit(_dynamic_atexit_destructor_for__CVarGFailLoadOnNotInstalledImport__);
  return;
}

// `dynamic_initializer_for_'CVarGOnlyProcessRequiredPackagesWhenSyncLoading'' @ 140f31970

void __cdecl _dynamic_initializer_for__CVarGOnlyProcessRequiredPackagesWhenSyncLoading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGOnlyProcessRequiredPackagesWhenSyncLoading,
             L"s.OnlyProcessRequiredPackagesWhenSyncLoading",
             &GOnlyProcessRequiredPackagesWhenSyncLoading,
             L"When sync loading a package process only that package and its imports",0);
  atexit(_dynamic_atexit_destructor_for__CVarGOnlyProcessRequiredPackagesWhenSyncLoading__);
  return;
}

// `dynamic_initializer_for_'CVarGRemoveUnreachableObjectsOnGT'' @ 140f319c0

void __cdecl _dynamic_initializer_for__CVarGRemoveUnreachableObjectsOnGT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGRemoveUnreachableObjectsOnGT,L"s.RemoveUnreachableObjectsOnGT",
             &GRemoveUnreachableObjectsOnGT,
             L"Remove unreachable objects from GlobalImportStore on the GT from the GC callback NotifyUnreachableObjects (slow)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGRemoveUnreachableObjectsOnGT__);
  return;
}

// `dynamic_initializer_for_'CVarGStallDetectorIdleLoops'' @ 140f31a10

void __cdecl _dynamic_initializer_for__CVarGStallDetectorIdleLoops__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGStallDetectorIdleLoops,L"s.StallDetectorIdleLoops",&GStallDetectorIdleLoops,
             L"The minimum amount of idle loops before considering the loader stalled if no progress is being made"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGStallDetectorIdleLoops__);
  return;
}

// `dynamic_initializer_for_'CVarGStallDetectorTimeout'' @ 140f31a60

void __cdecl _dynamic_initializer_for__CVarGStallDetectorTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGStallDetectorTimeout,L"s.StallDetectorTimeout",&GStallDetectorTimeout,
             L"Time in seconds after which we consider the loader stalled if no progress is being made"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGStallDetectorTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarGUsePostloadGroupsWithIOStore'' @ 140f31ab0

void __cdecl _dynamic_initializer_for__CVarGUsePostloadGroupsWithIOStore__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGUsePostloadGroupsWithIOStore,L"s.UsePostloadGroupsWithIOStore",
             &GUsePostloadGroupsWithIOStore,
             L"Postload groups reduces the likelihood of race conditions between the loading thread and the game thread but are slower."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGUsePostloadGroupsWithIOStore__);
  return;
}

// `dynamic_initializer_for_'CVarGVerifyObjectLoadFlags'' @ 140f31b00

void __cdecl _dynamic_initializer_for__CVarGVerifyObjectLoadFlags__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGVerifyObjectLoadFlags,L"s.VerifyObjectLoadFlags",&GVerifyObjectLoadFlags,
             L"Run AsyncFlags verifications for all objects when finished loading from the GC callback NotifyUnreachableObjects (slow)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGVerifyObjectLoadFlags__);
  return;
}

// `dynamic_initializer_for_'CVarGVerifyUnreachableObjects'' @ 140f31b50

void __cdecl _dynamic_initializer_for__CVarGVerifyUnreachableObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGVerifyUnreachableObjects,L"s.VerifyUnreachableObjects",&GVerifyUnreachableObjects
             ,
             L"Run GlobalImportStore verifications for unreachable objects from the GC callback NotifyUnreachableObjects (slow)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGVerifyUnreachableObjects__);
  return;
}

// `dynamic_initializer_for_'CVar_AllowPreemptingPackagesDuringGC'' @ 140f31ba0

void __cdecl _dynamic_initializer_for__CVar_AllowPreemptingPackagesDuringGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_AllowPreemptingPackagesDuringGC,L"s.AllowPreemptingPackagesDuringGC",
             &GAsyncLoading2_AllowPreemptingPackagesDuringGC,
             L"Allow the async loading thread to get pre-empted by garbage collection while it\'s creating packages."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_AllowPreemptingPackagesDuringGC__);
  return;
}

// `dynamic_initializer_for_'CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload'' @ 140f31bf0

void __cdecl _dynamic_initializer_for__CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload,
             L"s.CheckBlueprintCDOWillBePostLoadedAfterPreload",local_res8,
             L"Determines whether or not to check that Class Default Object (CDO)s that are compiled from Blueprints (including old VerseVM classes) areset to be post-loaded and are in the process of being loaded.When disabled, we will still `ensure` regardless, but will not treat these as fatal errors."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload__);
  return;
}

// `dynamic_initializer_for_'CVar_DebugPackageNames'' @ 140f31c40

void __cdecl _dynamic_initializer_for__CVar_DebugPackageNames__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FWriteAccessScope local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_30);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_DebugPackageNames,L"s.DebugPackageNames",&GAsyncLoading2_DebugPackageNamesString,
             L"Add debug breaks for all listed package names, also automatically added to s.VerbosePackageNames."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_30);
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_DebugPackageNames__);
  return;
}

// `dynamic_initializer_for_'CVar_VerbosePackageNames'' @ 140f31d70

void __cdecl _dynamic_initializer_for__CVar_VerbosePackageNames__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FWriteAccessScope local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_6>_>
               ::_vftable_;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_30);
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_VerbosePackageNames,L"s.VerbosePackageNames",
             &GAsyncLoading2_VerbosePackageNamesString,
             L"Restrict verbose logging to listed package names.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_30);
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_VerbosePackageNames__);
  return;
}

// `dynamic_initializer_for_'FPublicExportMapBasicTestAutomationTestInstance'' @ 140f31ea0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPublicExportMapBasicTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPublicExportMapBasicTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPublicExportMapBasicTestAutomationTestInstance,&local_18,false
            );
  FPublicExportMapBasicTestAutomationTestInstance._0_8_ = &___7FPublicExportMapBasicTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPublicExportMapBasicTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPublicExportMapIterationTestAutomationTestInstance'' @ 140f31f00

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPublicExportMapIterationTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPublicExportMapIterationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPublicExportMapIterationTestAutomationTestInstance,&local_18,
             false);
  FPublicExportMapIterationTestAutomationTestInstance._0_8_ =
       &___7FPublicExportMapIterationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPublicExportMapIterationTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance'' @ 140f31f60

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPublicExportMapPreInsertPublicExportsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance,&local_18,false);
  FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance._0_8_ =
       &___7FPublicExportMapPreInsertPublicExportsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'GAsyncLoading2_DebugPackageIds'' @ 140f31fc0

void __cdecl _dynamic_initializer_for__GAsyncLoading2_DebugPackageIds__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAsyncLoading2_DebugPackageIds__);
  return;
}

// `dynamic_initializer_for_'GAsyncLoading2_DebugPackageNamesString'' @ 140f31fe0

void __cdecl _dynamic_initializer_for__GAsyncLoading2_DebugPackageNamesString__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAsyncLoading2_DebugPackageNamesString__);
  return;
}

// `dynamic_initializer_for_'GAsyncLoading2_VerbosePackageIds'' @ 140f32000

void __cdecl _dynamic_initializer_for__GAsyncLoading2_VerbosePackageIds__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAsyncLoading2_VerbosePackageIds__);
  return;
}

// `dynamic_initializer_for_'GAsyncLoading2_VerbosePackageNamesString'' @ 140f32020

void __cdecl _dynamic_initializer_for__GAsyncLoading2_VerbosePackageNamesString__(void)

{
  atexit(_dynamic_atexit_destructor_for__GAsyncLoading2_VerbosePackageNamesString__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObject_FAsyncPackage2'' @ 140f32040

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObject_FAsyncPackage2__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObject_FAsyncPackage2,L"UObject_FAsyncPackage2",(FName)0x0,
             (FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingTime'' @ 140f32090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncLoadingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncLoadingTime == (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncLoadingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingTime,*pFVar1,
               L"Async Loading Time","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",false,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateClustersGameThread'' @ 140f32120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateClustersGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateClustersGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateClustersGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateClustersGameThread,
               *pFVar1,L"CreateClusters GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread'' @ 140f321b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread,*pFVar1,
               L"Flush All Async Loads GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread'' @ 140f32240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,
               *pFVar1,L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread'' @ 140f322d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadInstancesGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadInstancesGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread,
               *pFVar1,L"PostLoadInstances GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread'' @ 140f32360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadObjectsGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,
               *pFVar1,L"PostLoadObjects GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread'' @ 140f323f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_TickAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread,
               *pFVar1,L"TickAsyncLoading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameCompletedExportBundleLoadsKB'' @ 140f32480

void __cdecl _dynamic_initializer_for___GCsvStat_FrameCompletedExportBundleLoadsKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_FileIO.Index;
  FName::FName(&_GCsvStat_FrameCompletedExportBundleLoadsKB.Name,
               L"FrameCompletedExportBundleLoadsKB");
  _GCsvStat_FrameCompletedExportBundleLoadsKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameCompletedExportBundleLoadsKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingFileSystemLoads'' @ 140f324c0

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingFileSystemLoads__(void)

{
  __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoadingThread/FileSystemLoads",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingFileSystemLoads__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingIoStoreLoads'' @ 140f32500

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingIoStoreLoads__(void)

{
  __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoadingThread/IoStoreLoads",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingIoStoreLoads__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingLoadingPackages'' @ 140f32540

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingLoadingPackages__(void)

{
  __GTraceCounterAsyncLoadingLoadingPackages.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoading/PackagesLoading",TraceCounterType_Int,TraceCounterDisplayHint_None)
  ;
  LOCK();
  __GTraceCounterAsyncLoadingLoadingPackages.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingLoadingPackages__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingPackagesWithRemainingWork'' @ 140f32580

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingPackagesWithRemainingWork__(void)

{
  __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoading/PackagesWithRemainingWork",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingPackagesWithRemainingWork__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingPendingIoRequests'' @ 140f325c0

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingPendingIoRequests__(void)

{
  __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoading/PendingIoRequests",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingPendingIoRequests__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingQueuedPackages'' @ 140f32600

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingQueuedPackages__(void)

{
  __GTraceCounterAsyncLoadingQueuedPackages.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoading/PackagesQueued",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAsyncLoadingQueuedPackages.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingQueuedPackages__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAsyncLoadingTotalLoaded'' @ 140f32640

void __cdecl _dynamic_initializer_for____GTraceCounterAsyncLoadingTotalLoaded__(void)

{
  __GTraceCounterAsyncLoadingTotalLoaded.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"AsyncLoading/TotalLoaded",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterAsyncLoadingTotalLoaded.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingTotalLoaded__);
  return;
}

// `scalar_deleting_destructor' @ 1422fc300

void * __thiscall
FPublicExportMapBasicTest::_scalar_deleting_destructor_
          (FPublicExportMapBasicTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422fce90

void * __thiscall
FPublicExportMapIterationTest::_scalar_deleting_destructor_
          (FPublicExportMapIterationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142300cc0

void * __thiscall
FPublicExportMapPreInsertPublicExportsTest::_scalar_deleting_destructor_
          (FPublicExportMapPreInsertPublicExportsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142300ee0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423010f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// operator<<<FBulkDataCookedIndex,0> @ 142301250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
operator<<<FBulkDataCookedIndex,0>(FArchive *param_1,FBulkDataCookedIndex *param_2)

{
  longlong *plVar1;
  uchar *puVar2;
  FStructuredArchiveSlot FVar3;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar3 = FStructuredArchiveFromArchive::GetSlot(&local_1a0);
  plVar1 = *(longlong **)(**(longlong **)FVar3 + 8);
  puVar2 = *(uchar **)plVar1[1];
  if ((uchar *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar1 + 0x188))(plVar1,param_2,1);
  }
  else {
    param_2->Value = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// AddLambda<`AsyncLoading2::Private::FExcludedClassSet::FExcludedClassSet'::__l2::<lambda_1>_> @ 1423016c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::AddLambda<_AsyncLoading2::Private::FExcludedClassSet::FExcludedClassSet_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  uVar8 = 0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__1___0FExcludedClassSet_Private_AsyncLoading2__QEAA_PEB_W_Z___V__6B_
    ;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_70);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FAsyncLoadingThread2::InitializeLoading'::__l2::<lambda_1>_> @ 142301910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FAsyncLoadingThread2::InitializeLoading_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FAsyncLoadingThread2 *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FReadAccessScope local_50;
  FWriteAccessScope local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FAsyncLoadingThread2 *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope(&local_68,&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FAsyncLoadingThread2::InitializeLoading'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_38);
  param_1->__this = (FAsyncLoadingThread2 *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FAsyncLoadingThread2 *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
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
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
              ((FWriteAccessScope *)&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope(&local_68,&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
            (&local_38);
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// DefaultConstructItems<FAsyncLoadEventSpec,int> @ 142302770

void __cdecl DefaultConstructItems<FAsyncLoadEventSpec,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FExportMapEntry,int> @ 1423027a0

void __cdecl DefaultConstructItems<FExportMapEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      puVar1[2] = 0xffffffffffffffff;
      puVar1[3] = 0xffffffffffffffff;
      puVar1[4] = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x35) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x37) = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FUnreachableObject,int> @ 142302800

void __cdecl DefaultConstructItems<FUnreachableObject,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)((longlong)puVar1 + -0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + -4) = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPackageObjectIndex,int> @ 142302830

void __cdecl DefaultConstructItems<FPackageObjectIndex,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int> @ 1423028b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
DestructItems<FAsyncLoadingThread2::FCompletedPackageRequest,int>
          (FCompletedPackageRequest *param_1,int param_2)

{
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar1;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ProgressCallbacks).AllocatorInstance.SecondaryData;
    do {
      if (pFVar2[3] != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
        FMemory::Free((void *)pFVar2[3]);
      }
      FVar1 = *pFVar2;
      if (*pFVar2 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
        FVar1 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)(pFVar2 + -4);
      }
      DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
                ((TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)FVar1,*(int *)(pFVar2 + 1));
      if (*pFVar2 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      FVar1 = pFVar2[-6];
      if (pFVar2[-6] == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
        FVar1 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)(pFVar2 + -8);
      }
      DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
                ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
                  *)FVar1,*(int *)(pFVar2 + -5));
      if (pFVar2[-6] != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
        FMemory::Free((void *)pFVar2[-6]);
      }
      pFVar2 = pFVar2 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int> @ 142302940

void __cdecl
DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
          (TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int> @ 142302980

void __cdecl
DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
          (TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
           *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1->Ptr;
    if (this != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      operator_delete(this,0x18);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[8],FText> @ 142304a80

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[8],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [8],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[8],FText,wchar_t_const_(&)[17],FText> @ 142304c70

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[8],FText,wchar_t_const_(&)[17],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [8],FText *param_3,wchar_t (*param_4) [17],FText *param_5)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FormatNamed<wchar_t_const_(&)[17],FText>(param_1,param_4,param_5);
  return;
}

// FormatNamed<wchar_t_const_(&)[17],FText> @ 142304d20

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[17],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [17],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[17]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[17],FText,wchar_t_const_(&)[12],FText> @ 142304da0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[17],FText,wchar_t_const_(&)[12],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [17],FText *param_3,wchar_t (*param_4) [12],FText *param_5)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  FormatNamed<wchar_t_const_(&)[17],FText>(param_1,param_2,param_3);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[12]>(param_1,param_4);
  ::FString::FString((FString *)this,*param_4);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_5);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[12],FText> @ 142304e30

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[12],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [12],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[12]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[15],FText> @ 142304eb0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[15],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [15],FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[15]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_3);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText> @ 1423050a0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [15],FText *param_3,wchar_t (*param_4) [17],FText *param_5)

{
  FormatNamed<wchar_t_const_(&)[15],FText>(param_1,param_2,param_3);
  FormatNamed<wchar_t_const_(&)[17],FText>(param_1,param_4,param_5);
  return;
}

// FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText,wchar_t_const_(&)[12],FText> @ 1423052c0

void __cdecl
TextFormatUtil::
FormatNamed<wchar_t_const_(&)[15],FText,wchar_t_const_(&)[17],FText,wchar_t_const_(&)[12],FText>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [15],FText *param_3,wchar_t (*param_4) [17],FText *param_5,
          wchar_t (*param_6) [12],FText *param_7)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *this;
  
  FormatNamed<wchar_t_const_(&)[15],FText>(param_1,param_2,param_3);
  FormatNamed<wchar_t_const_(&)[17],FText>(param_1,param_4,param_5);
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[12]>(param_1,param_6);
  ::FString::FString((FString *)this,*param_6);
  *(undefined4 *)&this->field_0x10 = 4;
  FText::FText((FText *)&this->field_0x20,param_7);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// HeapSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_> @ 142305360

void __cdecl
AlgoImpl::HeapSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_>
          (ulong64 *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar7 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_142305440:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            uVar2 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = uVar2;
            if (1 < iVar6) {
              do {
                iVar5 = iVar9 * 2;
                iVar7 = iVar5 + 1;
                if (iVar5 + 2 < iVar6) {
                  if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
                    iVar7 = iVar5;
                  }
                  iVar7 = iVar7 + 1;
                }
                uVar1 = param_1[iVar9];
                if (param_1[iVar7] <= uVar1) break;
                param_1[iVar9] = param_1[iVar7];
                param_1[iVar7] = uVar1;
                iVar9 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar7 + -2;
      iVar7 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2] < param_1[iVar8]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    uVar1 = param_1[iVar5];
    if (param_1[iVar8] <= uVar1) goto LAB_142305440;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = uVar1;
    iVar5 = iVar8;
  } while( true );
}

// IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_> @ 1423054f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_>
          (ulong64 *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulong64 **ppuVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  ulong64 *local_338;
  ulong64 *local_328;
  ulong64 *local_320;
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
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 3) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_1423055a0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_1423055d0:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x0001423055d9;
          goto LAB_1423055e1;
        }
        for (; puVar6 = puVar9, puVar4 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar4 = puVar4 + 1, puVar4 <= puVar8) {
            if (*puVar6 < *puVar4) {
              puVar6 = puVar4;
            }
          }
          uVar2 = *puVar6;
          *puVar6 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_14230569c;
      }
LAB_14230568a:
      local_338 = puVar1;
      HeapSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_>
                (puVar4,iVar3,param_3,param_4);
LAB_14230569c:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x0001423055d9:
  if (*puVar4 <= *puVar9) goto LAB_1423055d0;
LAB_1423055e1:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar9 <= *puVar6);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_1423055d0;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffff8U)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_14230569c;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_14230569c;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 3) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_14230568a;
  goto LAB_1423055a0;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[17],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 142305760

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[17],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [17],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[12],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 142305830

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[12],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [12],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[15],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 142305900

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[15],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [15],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<TIoPriorityQueue<FEventLoadNode2>::TInternalQueue_*_const,int,int,int_TIoPriorityQueue<FEventLoadNode2>::TInternalQueue::*,TLess<void>_> @ 1423059d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __cdecl
AlgoImpl::
LowerBoundInternal<TIoPriorityQueue<FEventLoadNode2>::TInternalQueue_*_const,int,int,int_TIoPriorityQueue<FEventLoadNode2>::TInternalQueue::*,TLess<void>_>
          (TInternalQueue **param_1,int param_2,int *param_3,pdm_42ff064a param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  TInternalQueue *pTVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pTVar3 = UE::Core::Private::
               DereferenceIfNecessary<TIoPriorityQueue<FEventLoadNode2>::TInternalQueue,TIoPriorityQueue<FEventLoadNode2>::TInternalQueue_*_const_&>
                         (param_1 + iVar1);
      if (*(int *)((longlong)&pTVar3->NextFree + (longlong)(int)param_4) < *param_3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<unsigned___int64,int,unsigned___int64,FIdentityFunctor,TLess<void>_> @ 142305a60

int __cdecl
AlgoImpl::LowerBoundInternal<unsigned___int64,int,unsigned___int64,FIdentityFunctor,TLess<void>_>
          (ulong64 *param_1,int param_2,ulong64 *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// NoneOf<TArrayView<int_const_,int>,`FAsyncLoadingThread2::ContainsAnyRequestID'::__l2::<lambda_1>_> @ 142305c90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __cdecl
Algo::
NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread2::ContainsAnyRequestID_::__l2::<lambda_1>_>
          (TArrayView<int_const_,int> *param_1,<lambda_1> param_2)

{
  uint *puVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  
  puVar6 = (uint *)param_1->DataPtr;
  puVar1 = puVar6 + param_1->ArrayNum;
  if (puVar6 != puVar1) {
    do {
      if (*(int *)&((param_2.__this)->PendingRequests).Elements.field_0x8 !=
          *(int *)&((param_2.__this)->PendingRequests).Elements.field_0x34) {
        FVar2 = ((param_2.__this)->PendingRequests).Hash.SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&((param_2.__this)->PendingRequests).Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        iVar4 = *(int *)((longlong)FVar5 +
                        (ulonglong)(((param_2.__this)->PendingRequests).HashSize - 1U & *puVar6) * 4
                        );
        if (iVar4 != -1) {
          lVar3 = *(longlong *)&((param_2.__this)->PendingRequests).Elements;
          do {
            if (*(uint *)(lVar3 + (longlong)iVar4 * 0xc) == *puVar6) {
              return false;
            }
            iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
          } while (iVar4 != -1);
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  return true;
}

// Reverse<FEventLoadNode2_*> @ 142306e00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl AlgoImpl::Reverse<FEventLoadNode2_*>(FEventLoadNode2 **param_1,int param_2)

{
  FEventLoadNode2 *pFVar1;
  FEventLoadNode2 **ppFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppFVar2 = param_1 + (param_2 + -1);
    do {
      pFVar1 = param_1[lVar3];
      param_1[lVar3] = *ppFVar2;
      lVar3 = lVar3 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = ppFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// WriteToString<256,FName_const_&> @ 142307000

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,FName_const_&>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncPackageLoadingState2>_> @ 142307050

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncPackageLoadingState2>_>
          (_Atomic_padded<EAsyncPackageLoadingState2> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncPackageLoadingState2>_> @ 142307060

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EAsyncPackageLoadingState2>_>
          (_Atomic_padded<EAsyncPackageLoadingState2> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>_> @ 142307070

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>_> @ 142307080

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>_> @ 142307090

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>_> @ 1423070a0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPackageRequest,FMemory>::FNode_*>_> @ 1423070b0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPackageRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FPackageRequest,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPackageRequest,FMemory>::FNode_*>_> @ 1423070c0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPackageRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FPackageRequest,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<char,enum_EAsyncPackageLoadingState2> @ 1423070d0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_EAsyncPackageLoadingState2>
          (EAsyncPackageLoadingState2 *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> @ 1423070e0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>(FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> @ 1423070f0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<FPackageRequest,FMemory>::FNode_*> @ 142307100

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<FPackageRequest,FMemory>::FNode_*>(FNode **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 1423092d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FAsyncPackage2::ImportPackagesRecursiveInner_::__l93::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::`93'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,1,0> @ 1423092f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FAsyncPackage2::ImportPackagesRecursiveInner_::__l127::<lambda_2>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::`127'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 142309310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FAsyncPackage2::StartLoading_::__l23::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::`23'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014230933a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0> @ 142309350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FAsyncPackage2::DumpStateImpl_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,0,0> @ 142309370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FAsyncPackage2::StartLoading_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,0,1> @ 142309390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FCookedScriptObjectsDebug::TrimDebugData_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,0,0> @ 1423093b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__FAsyncPackage2::DumpStateImpl_::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>_::__l8::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,0,0> @ 1423093d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FAsyncPackage2::DumpStateImpl_::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>_::__l14::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`14'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// operator<< @ 14230ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FBulkDataMapEntry *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  long64 *plVar3;
  long64 *plVar4;
  uint *puVar5;
  longlong *plVar6;
  uchar *puVar7;
  FStructuredArchiveSlot FVar8;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  plVar3 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->SerialOffset = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar3 = &param_2->DuplicateSerialOffset;
  puVar2 = &param_1->field_0x2a;
  plVar4 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar3,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar3);
    }
  }
  else {
    *plVar3 = *plVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar3 = &param_2->SerialSize;
  plVar4 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar3,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar3);
    }
  }
  else {
    *plVar3 = *plVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->Flags;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar8 = FStructuredArchiveFromArchive::GetSlot(&local_1a0);
  plVar6 = *(longlong **)(**(longlong **)FVar8 + 8);
  puVar7 = *(uchar **)plVar6[1];
  if ((uchar *)((undefined8 *)plVar6[1])[1] < puVar7 + 1) {
    (**(code **)(*plVar6 + 0x188))(plVar6,&param_2->CookedIndex,1);
  }
  else {
    (param_2->CookedIndex).Value = *puVar7;
    *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 1;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->Pad,3);
  return param_1;
}

// operator<< @ 14230ae60

FArchive * __cdecl operator<<(FArchive *param_1,FCellExportMapEntry *param_2)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->CookedSerialOffset);
    }
  }
  else {
    param_2->CookedSerialOffset = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->CookedSerialLayoutSize;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->CookedSerialSize;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  operator<<(param_1,&param_2->CppClassInfo);
  puVar2 = &param_2->PublicExportHash;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 14230afe0

FArchive * __cdecl operator<<(FArchive *param_1,FDependencyBundleEntry *param_2)

{
  operator<<(param_1,&param_2->LocalImportOrExportIndex);
  return param_1;
}

// operator<< @ 14230b000

FArchive * __cdecl operator<<(FArchive *param_1,FDependencyBundleHeader *param_2)

{
  uint (*pauVar1) [2];
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  FDependencyBundleHeader *pFVar5;
  
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->FirstEntryIndex = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  lVar4 = 2;
  do {
    pFVar5 = (FDependencyBundleHeader *)(param_2->EntryCount[0] + 1);
    pauVar1 = param_2->EntryCount;
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pauVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,*pauVar1);
      }
    }
    else {
      (*pauVar1)[0] = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar5);
      }
    }
    else {
      pFVar5->FirstEntryIndex = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    lVar4 = lVar4 + -1;
    param_2 = pFVar5;
  } while (lVar4 != 0);
  return param_1;
}

// operator<< @ 14230b120

FArchive * __cdecl operator<<(FArchive *param_1,FExportBundleEntry *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->LocalExportIndex);
    }
  }
  else {
    param_2->LocalExportIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->CommandType;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14230b1f0

FArchive * __cdecl operator<<(FArchive *param_1,FExportMapEntry *param_2)

{
  FPackageObjectIndex *pFVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  longlong *plVar4;
  EExportFilterFlags local_res8 [8];
  EObjectFlags local_res10 [2];
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->CookedSerialOffset);
    }
  }
  else {
    param_2->CookedSerialOffset = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->CookedSerialSize;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  operator<<(param_1,&param_2->ObjectName);
  pFVar1 = &param_2->OuterIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
    }
  }
  else {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pFVar1 = &param_2->ClassIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
    }
  }
  else {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pFVar1 = &param_2->SuperIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
    }
  }
  else {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pFVar1 = &param_2->TemplateIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
    }
  }
  else {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->PublicExportHash;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = param_2->ObjectFlags;
  if ((EObjectFlags *)plVar4[1] < (EObjectFlags *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(EObjectFlags *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->ObjectFlags = local_res10[0];
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = param_2->FilterFlags;
  if ((EExportFilterFlags *)plVar4[1] < (EExportFilterFlags *)*plVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EExportFilterFlags *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->FilterFlags = local_res8[0];
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->Pad,3);
  return param_1;
}

// operator<< @ 14230b4d0

FArchive * __cdecl operator<<(FArchive *param_1,FScriptObjectEntry *param_2)

{
  FPackageObjectIndex *pFVar1;
  ulong64 *puVar2;
  
  operator<<(param_1,(FMappedName *)param_2);
  pFVar1 = &param_2->GlobalIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
    }
  }
  else {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pFVar1 = &param_2->OuterIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
    }
  }
  else {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pFVar1 = &param_2->CDOClassIndex;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    pFVar1->TypeAndId = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->TypeAndId);
  return param_1;
}

// operator<< @ 14230b600

FArchive * __cdecl operator<<(FArchive *param_1,FZenPackageImportedPackageNamesContainer *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArchive *pFVar7;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_88 [2];
  longlong local_80;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FDisplayNameEntryId_const_,int> local_58;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_48;
  
  uVar13 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  if ((param_1->field_0x28 & 4) == 0) {
    pTVar8 = LoadNameBatch(&local_48,param_1,None);
    if (&local_78 != pTVar8) {
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      local_78.AllocatorInstance.Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = pTVar8->ArrayNum;
      local_78.ArrayMax = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    iVar9 = (param_2->Names).ArrayNum;
    piVar1 = &(param_2->Names).ArrayNum;
    iVar6 = local_78.ArrayNum;
    lVar12 = (longlong)local_78.ArrayNum;
    if (iVar9 < local_78.ArrayNum) {
      iVar9 = local_78.ArrayNum - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar9,(ForAnyElementType *)param_2,piVar1,&(param_2->Names).ArrayMax);
      memset((param_2->Names).AllocatorInstance.Data + (longlong)iVar6 * 8,0,(longlong)iVar9 << 3);
    }
    else {
      if (local_78.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_78._8_8_ & 0xffffffff);
      }
      if (local_78.ArrayNum < iVar9) {
        uVar16 = iVar9 - local_78.ArrayNum;
        if ((int)(local_78.ArrayNum | uVar16) < 0) {
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar4)();
            return pFVar7;
          }
        }
        if (uVar16 != 0) {
          pFVar2 = (param_2->Names).AllocatorInstance.Data + lVar12 * 8;
          iVar6 = (*piVar1 - uVar16) - iVar6;
          if (iVar6 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar16 * 8,(longlong)iVar6 << 3);
          }
          *piVar1 = *piVar1 - uVar16;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,(ForAnyElementType *)param_2,*piVar1,&(param_2->Names).ArrayMax);
        }
      }
    }
    if (0 < local_78.ArrayNum) {
      local_80 = 0;
      uVar15 = uVar13;
      do {
        lVar12 = local_80;
        plVar3 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_88);
          }
        }
        else {
          local_88[0] = *(uint *)*plVar3;
          *plVar3 = *plVar3 + 4;
        }
        uVar10 = (uint)uVar13;
        uVar16 = 0;
        if ((int)uVar10 < local_78.ArrayNum) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar4)();
            return pFVar7;
          }
        }
        uVar14 = CONCAT44(local_88[0],*(undefined4 *)(local_78.AllocatorInstance.Data + lVar12));
        uVar16 = 0;
        if ((int)uVar10 < (param_2->Names).ArrayNum) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar4)();
            return pFVar7;
          }
        }
        uVar13 = (ulonglong)(uVar10 + 1);
        *(undefined8 *)((param_2->Names).AllocatorInstance.Data + uVar15) = uVar14;
        uVar15 = uVar15 + 8;
        local_80 = local_80 + 4;
      } while ((int)(uVar10 + 1) < local_78.ArrayNum);
    }
  }
  else {
    uVar16 = (param_2->Names).ArrayNum;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar16,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
      uVar13 = local_78._8_8_ & 0xffffffff;
    }
    pFVar11 = (param_2->Names).AllocatorInstance.Data;
    iVar9 = (param_2->Names).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar9 * 8;
    while( true ) {
      iStack_60 = (int)uVar13;
      if ((param_2->Names).ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
        iStack_60 = local_78.ArrayNum;
      }
      if (pFVar11 == pFVar2) break;
      uVar14 = *(undefined8 *)pFVar11;
      if (iStack_60 == local_78.ArrayMax) {
        iStack_60 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      local_78.ArrayNum = iStack_60 + 1U;
      pFVar11 = pFVar11 + 8;
      *(int *)(local_78.AllocatorInstance.Data + (longlong)iStack_60 * 4) = (int)uVar14;
      uVar13 = (ulonglong)(iStack_60 + 1U);
    }
    local_68 = local_78.AllocatorInstance.Data;
    if (iStack_60 < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iStack_60;
    local_58.DataPtr = (FDisplayNameEntryId *)local_68;
    SaveNameBatch(&local_58,param_1);
    pFVar11 = (param_2->Names).AllocatorInstance.Data;
    iVar9 = (param_2->Names).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar9 * 8;
    while( true ) {
      if ((param_2->Names).ArrayNum != iVar9) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar11 == pFVar2) break;
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = (uint)((ulonglong)*(undefined8 *)pFVar11 >> 0x20);
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          pFVar11 = pFVar11 + 8;
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          pFVar11 = pFVar11 + 8;
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
        pFVar11 = pFVar11 + 8;
      }
    }
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return param_1;
}

// operator<< @ 14230ba40

/* WARNING: Enum "EZenPackageVersion": Some values do not have unique names */
/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FZenPackageVersioningInfo *param_2)

{
  int *piVar1;
  EZenPackageVersion *pEVar2;
  int *piVar3;
  
  pEVar2 = (EZenPackageVersion *)**(undefined8 **)&param_1->field_0x8;
  if ((EZenPackageVersion *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ZenVersion);
    }
  }
  else {
    param_2->ZenVersion = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->PackageVersion);
  piVar1 = &param_2->LicenseeVersion;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FCustomVersionContainer::Serialize(&param_2->CustomVersions,param_1,Latest);
  return param_1;
}

// operator() @ 14230cff0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FTaskBase *this_00;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  atomic<__int64> aVar9;
  
  this_00 = *(FTaskBase **)((longlong)this + 8);
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)this + 0x438) + 0xbd0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  aVar9 = (atomic<__int64>)(longlong)(iVar2 + -1);
  if (__GTraceCounterAsyncLoadingPendingIoRequests.Value != aVar9) {
    LOCK();
    UNLOCK();
    __GTraceCounterAsyncLoadingPendingIoRequests.Value = aVar9;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
        uVar8 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterAsyncLoadingPendingIoRequests.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterAsyncLoadingPendingIoRequests.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._2_2_ = 0;
          __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_ = uVar8;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_,
                 (long64)__GTraceCounterAsyncLoadingPendingIoRequests.Value);
    }
  }
  lVar4 = *(longlong *)this;
  lVar5 = *(longlong *)(lVar4 + 0x438);
  if ((*(int *)(lVar4 + 0x1d8) < 7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x1d0);
  if ((*(int *)(lVar4 + 0x1b8) < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BarrierCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x16f5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  piVar1 = (int *)(lVar4 + 0x1b8);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    FEventLoadNode2::Fire((FEventLoadNode2 *)(lVar4 + 0x180),(FAsyncLoadingThreadState2 *)0x0);
  }
  if (iVar2 + -1 == 0) {
    FZenaphore::NotifyOne((FZenaphore *)(lVar5 + 0x1010));
  }
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(param_1);
  return;
}

// operator() @ 14230d180

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FEventLoadNode2 *param_1)

{
  FAsyncPackage2 *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  if (2 < (byte)LogStreaming._0_1_) {
    pFVar1 = param_1->Package;
    ::LexToString((EAsyncPackageLoadingState2)pFVar1->AsyncPackageLoadingState);
    ::FName::ToString(&(pFVar1->Desc).UPackageName,&local_18);
    ::LexToString((pFVar1->Desc).Loader);
    ::FString::PrintfImpl(&local_28,L"%s package %s state %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (((*(int *)this + 1 < 0) || (0xff < *(int *)this + 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14230d7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FindAllRuntimeScriptPackages'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStack_918 [32];
  UObject **local_8f8;
  FScriptContainerElement *local_8f0;
  longlong local_8e8;
  longlong local_8e0;
  undefined8 local_8d8;
  UObject *local_8c8 [2];
  TStringView<wchar_t> local_8b8;
  FName local_8a4;
  wchar_t *local_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  TStringView<wchar_t> local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  wchar_t local_848 [1040];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_918;
  if (param_1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UPackage>(&local_878);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar8 = Z_Construct_UClass_UPackage_NoRegister();
  iVar7 = (int)pUVar8->_padding_;
  if ((iVar7 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
      &pUVar8->_padding_)) {
    if ((*(uint *)&param_1[1].field_0x4 >> 4 & 1) != 0) {
      local_8a4.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_8a4.Number = *(uint *)&param_1->field_0x1c;
      local_8c8[0] = param_1;
      uVar6 = ::FName::ToStringInternal(&local_8a4,local_848,0x40b);
      uVar4 = uVar6;
      if (8 < (int)uVar6) {
        uVar4 = 8;
      }
      uVar12 = 0;
      if (0 < (int)uVar4) {
        uVar12 = uVar4;
      }
      if ((uVar12 == 8) && (iVar7 = wcsncmp(L"/Script/",local_848,8), iVar7 == 0)) {
        pFVar2 = *(ForAnyElementType **)this;
        pFVar10 = pFVar2->Data;
        if ((pFVar10 <= (FScriptContainerElement *)local_8c8) &&
           (lVar11 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4),
           (FScriptContainerElement *)local_8c8 < pFVar10 + lVar11 * 8)) {
          local_8e0 = (longlong)*(int *)&pFVar2[1].Data;
          local_8d8 = 8;
          local_8f8 = local_8c8;
          local_8f0 = pFVar10;
          local_8e8 = lVar11;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar7 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar7 + 1;
        pFVar10 = pFVar2->Data;
      }
      else {
        uStack_890 = 0xc;
        local_898 = L"/_Verse/VNI/";
        local_888._12_4_ = uStack_88c;
        local_888.Size = 0xc;
        local_888.DataPtr = L"/_Verse/VNI/";
        local_8b8.Size = 0;
        if (0 < (int)uVar6) {
          local_8b8.Size = uVar6;
        }
        local_8b8.DataPtr = local_848 + ((longlong)(int)uVar6 - (longlong)local_8b8.Size);
        iVar7 = UE::String::FindFirst(&local_8b8,&local_888,CaseSensitive);
        if (iVar7 == -1) {
          return;
        }
        lVar11 = *(longlong *)this;
        pFVar10 = *(FScriptContainerElement **)(lVar11 + 0x10);
        if ((pFVar10 <= (FScriptContainerElement *)local_8c8) &&
           ((FScriptContainerElement *)local_8c8 < pFVar10 + (longlong)*(int *)(lVar11 + 0x1c) * 8))
        {
          local_8e0 = (longlong)*(int *)(lVar11 + 0x18);
          local_8d8 = 8;
          local_8f8 = local_8c8;
          local_8f0 = pFVar10;
          local_8e8 = (longlong)*(int *)(lVar11 + 0x1c);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar7 = *(int *)(lVar11 + 0x18);
        if (iVar7 == *(int *)(lVar11 + 0x1c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar11 + 0x10),(int *)(lVar11 + 0x1c));
        }
        *(int *)(lVar11 + 0x18) = iVar7 + 1;
        pFVar10 = *(FScriptContainerElement **)(lVar11 + 0x10);
      }
      *(UObject **)(pFVar10 + (longlong)iVar7 * 8) = local_8c8[0];
    }
    return;
  }
  pFVar9 = GetTypeName<UPackage>(&local_868);
  pwVar13 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UObject>(&local_858,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar14);
}

// operator() @ 14230e390

void __thiscall
`VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_res18 [2];
  EObjectFlags local_res20 [2];
  UObjectBase *local_98;
  UObjectBase **local_90;
  EObjectFlags *local_88;
  uint *local_80;
  UObjectBase **local_78;
  EObjectFlags *local_70;
  uint *local_68;
  UObjectBase **local_60;
  EObjectFlags *local_58;
  uint *local_50;
  UObjectBase **local_48;
  EObjectFlags *local_40;
  uint *local_38;
  
  pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,param_1);
  local_98 = (pFVar5->field1_0x8).Object;
  if (local_98 != (UObjectBase *)0x0) {
    iVar1 = local_98->InternalIndex;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    else {
      pFVar5 = (FUObjectItem *)0x0;
    }
    local_res18[0] = (uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x20);
    local_res20[0] = local_98->ObjectFlags;
    uVar10 = *(uint *)this & local_res18[0];
    uVar9 = local_res20[0] >> 0x13;
    uVar7 = local_res18[0] >> 0x14;
    uVar8 = local_res20[0] >> 0x15;
    if ((*(EObjectFlags *)((longlong)this + 4) & local_res20[0]) != RF_NoFlags) {
      local_90 = &local_98;
      local_88 = local_res20;
      local_80 = local_res18;
      ``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::
      operator()(&local_90);
    }
    if (((uVar7 & 1) != 0) && (GUObjectArray.ObjLastNonGCIndex < local_98->InternalIndex)) {
      local_78 = &local_98;
      local_70 = local_res20;
      local_68 = local_res18;
      ``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>::
      operator()(&local_78);
    }
    if ((uVar9 & 1) != 0) {
      pUVar6 = Z_Construct_UClass_UPackage_NoRegister();
      pUVar2 = (local_98->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((!bVar4) && ((uVar8 & 1) == 0)) {
        local_60 = &local_98;
        local_58 = local_res20;
        local_50 = local_res18;
        ``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l8::<lambda_3>
        ::operator()(&local_60);
      }
      if (uVar10 != 0) {
        local_48 = &local_98;
        local_40 = local_res20;
        local_38 = local_res18;
        ``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l8::<lambda_4>
        ::operator()(&local_48);
      }
    }
  }
  return;
}

// operator() @ 14230fb70

void __thiscall <lambda_5>::operator()(<lambda_5> *this,IConsoleVariable *param_1)

{
  FString *pFVar1;
  void *local_18 [2];
  
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::UnhashElements
              (&GAsyncLoading2_DebugPackageIds);
    GAsyncLoading2_DebugPackageIds.Elements._8_4_ = 0;
    if ((int)GAsyncLoading2_DebugPackageIds.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&GAsyncLoading2_DebugPackageIds,0,
                 (int *)&GAsyncLoading2_DebugPackageIds.Elements.field_0xc);
    }
    GAsyncLoading2_DebugPackageIds.Elements._48_4_ = 0xffffffff;
    GAsyncLoading2_DebugPackageIds.Elements._52_4_ = 0;
    GAsyncLoading2_DebugPackageIds.Elements._40_4_ = 0;
  }
  pFVar1 = (FString *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_18);
  ParsePackageNames(pFVar1,&GAsyncLoading2_DebugPackageIds);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  pFVar1 = (FString *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_18);
  ParsePackageNames(pFVar1,&GAsyncLoading2_VerbosePackageIds);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  GAsyncLoading2_VerboseLogFilter =
       ((int)(GAsyncLoading2_VerbosePackageIds.Elements._8_4_ -
             GAsyncLoading2_VerbosePackageIds.Elements._52_4_) < 1) + 1;
  return;
}

// operator() @ 14230fc70

void __thiscall <lambda_6>::operator()(<lambda_6> *this,IConsoleVariable *param_1)

{
  FString *pFVar1;
  void *local_18 [2];
  
  if (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
      GAsyncLoading2_VerbosePackageIds.Elements._52_4_) {
    TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::UnhashElements
              (&GAsyncLoading2_VerbosePackageIds);
    GAsyncLoading2_VerbosePackageIds.Elements._8_4_ = 0;
    if ((int)GAsyncLoading2_VerbosePackageIds.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&GAsyncLoading2_VerbosePackageIds,0,
                 (int *)&GAsyncLoading2_VerbosePackageIds.Elements.field_0xc);
    }
    GAsyncLoading2_VerbosePackageIds.Elements._48_4_ = 0xffffffff;
    GAsyncLoading2_VerbosePackageIds.Elements._52_4_ = 0;
    GAsyncLoading2_VerbosePackageIds.Elements._40_4_ = 0;
  }
  pFVar1 = (FString *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_18);
  ParsePackageNames(pFVar1,&GAsyncLoading2_VerbosePackageIds);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  GAsyncLoading2_VerboseLogFilter =
       ((int)(GAsyncLoading2_VerbosePackageIds.Elements._8_4_ -
             GAsyncLoading2_VerbosePackageIds.Elements._52_4_) < 1) + 1;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14230fd40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FAsyncLoadingThread2::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAsyncLoadingThread2::_vector_deleting_destructor__adjustor_8__
          (FAsyncLoadingThread2 *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAsyncLoadingThread2 *)&this[-1].AsyncLoadingTickCounter,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14230fd50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName,enum_ECompiledInUObjectsRegisteredStatus),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230fd80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy,`AsyncLoading2::Private::FExcludedClassSet::FExcludedClassSet'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230fdb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FAsyncLoadingThread2::InitializeLoading'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230fde0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAsyncLoadingThread2,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAsyncLoadingThread2,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230fe10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCookedScriptObjectsDebug,void___cdecl(FName,enum_ECompiledInUObjectsRegisteredStatus),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230fe40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,enum_ECompiledInUObjectsRegisteredStatus),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230fe70

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FEventLoadNode2::Fire'::__l19::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 14230ff60

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FEventLoadNode2::Fire'::__l19::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230ffa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::`93'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14230ffe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::`127'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::`23'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423100d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCookedScriptObjectsDebug::TrimDebugData'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`14'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423101d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
FAsyncLoadingSyncLoadContext::_scalar_deleting_destructor_
          (FAsyncLoadingSyncLoadContext *this,uint param_1)

{
  ForElementType<FAsyncPackage2_*> FVar1;
  int iVar2;
  ForElementType<int> FVar3;
  ForElementType<FAsyncPackage2_*> FVar4;
  undefined1 local_res10 [8];
  
  if (this->RequestingPackage != (FAsyncPackage2 *)0x0) {
    FAsyncPackage2::Release(this->RequestingPackage);
  }
  FVar4 = (this->RequestedPackages).AllocatorInstance.SecondaryData;
  iVar2 = (this->RequestedPackages).ArrayNum;
  if (FVar4 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar4 = (ForElementType<FAsyncPackage2_*>)&this->RequestedPackages;
  }
  FVar1 = (ForElementType<FAsyncPackage2_*>)((longlong)FVar4 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->RequestedPackages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAsyncPackage2_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4 == FVar1) break;
    if (*(FAsyncPackage2 **)FVar4 != (FAsyncPackage2 *)0x0) {
      FAsyncPackage2::Release(*(FAsyncPackage2 **)FVar4);
    }
    FVar4 = (ForElementType<FAsyncPackage2_*>)((longlong)FVar4 + 8);
  }
  FVar4 = (this->RequestedPackages).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FAsyncPackage2_*>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar3 = (this->RequestIDs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310290

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
FAsyncLoadingThread2::_scalar_deleting_destructor_(FAsyncLoadingThread2 *this,uint param_1)

{
  ~FAsyncLoadingThread2(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1423102d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall FAsyncPackage2::_scalar_deleting_destructor_(FAsyncPackage2 *this,uint param_1)

{
  ~FAsyncPackage2(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x610);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142310310

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall FExportArchive::_scalar_deleting_destructor_(FExportArchive *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FExportArchive__6B_;
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// ApplyLooseFileLocalizationPackageNameRedirects @ 142310fa0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl ApplyLooseFileLocalizationPackageNameRedirects(FName param_1)

{
  FAsyncLoadingThreadSettings *pFVar1;
  FPackageLocalizationManager *this;
  FName in_RDX;
  FPlayInEditorLoadingScope local_res8 [2];
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res10 = in_RDX;
  pFVar1 = FAsyncLoadingThreadSettings::Get();
  if (pFVar1->bLooseFileLoadingEnabled != false) {
    UE::Core::Private::FPlayInEditorLoadingScope::FPlayInEditorLoadingScope(local_res8,-1);
    this = FPackageLocalizationManager::Get();
    FPackageLocalizationManager::FindLocalizedPackageName(this,(FName)local_res18);
    if (local_res18[0] != (FName)0x0) {
      if (5 < (byte)LogStreaming._0_1_) {
        FName::ToString(local_res18,&local_28);
        FName::ToString(&local_res10,&local_38);
        UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      local_res10 = local_res18[0];
    }
    UE::Core::Private::FPlayInEditorLoadingScope::~FPlayInEditorLoadingScope(local_res8);
  }
  *(FName *)param_1 = local_res10;
  return param_1;
}

// AsyncLoading2_ShouldSkipLoadingExport @ 1423110b0

bool __cdecl AsyncLoading2_ShouldSkipLoadingExport(EExportFilterFlags param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      if ((GIsClient == false) && (GIsServer != false)) {
        bIsDedicatedServer = true;
      }
      else {
        bIsDedicatedServer = false;
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  if (*piVar1 < _TSS1) {
    _Init_thread_header(&_TSS1);
    if (_TSS1 == -1) {
      if ((GIsClient == false) || (GIsServer != false)) {
        bIsClientOnly = false;
      }
      else {
        bIsClientOnly = true;
      }
      _Init_thread_footer(&_TSS1);
    }
  }
  if ((bIsDedicatedServer != false) && ((param_1 & NotForServer) != None)) {
    return true;
  }
  if (bIsClientOnly != false) {
    return (bool)(param_1 & NotForClient);
  }
  return false;
}

// FindAllRuntimeScriptPackages @ 142322a20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FindAllRuntimeScriptPackages(FRuntimeScriptPackages *param_1)

{
  int *piVar1;
  UClass *pUVar2;
  FRuntimeScriptPackages *local_res8;
  code *local_18;
  FRuntimeScriptPackages **local_10;
  
  piVar1 = &(param_1->Script).ArrayMax;
  (param_1->Script).ArrayNum = 0;
  if (*piVar1 != 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x100,(ForAnyElementType *)param_1,0,piVar1);
  }
  piVar1 = &(param_1->VerseVNI).ArrayMax;
  (param_1->VerseVNI).ArrayNum = 0;
  if (*piVar1 != 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x100,&(param_1->VerseVNI).AllocatorInstance,0,piVar1);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FindAllRuntimeScriptPackages'::__l2::<lambda_1>,void,UObject_*>::
             Call;
  local_res8 = param_1;
  pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
  ForEachObjectOfClass
            (pUVar2,(TFunctionRef<void___cdecl(UObject_*)> *)&local_18,false,RF_ClassDefaultObject,
             Borrowed);
  return;
}

// FormatPackageId @ 142325f30

FString * __cdecl FormatPackageId(FString *__return_storage_ptr__,FPackageId param_1)

{
  FPackageId local_res10 [3];
  FString local_18;
  
  local_res10[0].Id = param_1.Id;
  LexToString(&local_18,local_res10);
  FString::PrintfImpl(__return_storage_ptr__,L"0x%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LexToString @ 14232b090

wchar_t * __cdecl LexToString(EAsyncPackageLoadingState2 param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case NewPackage:
    return L"NewPackage";
  case WaitingForIo:
    return L"WaitingForIo";
  case ProcessPackageSummary:
    return L"ProcessPackageSummary";
  case ProcessDependencies:
    return L"ProcessDependencies";
  case WaitingForDependencies:
    return L"WaitingForDependencies";
  case DependenciesReady:
    return L"DependenciesReady";
  case CreateLinkerLoadExports:
    return L"CreateLinkerLoadExports";
  case WaitingForLinkerLoadDependencies:
    return L"WaitingForLinkerLoadDependencies";
  case ResolveLinkerLoadImports:
    return L"ResolveLinkerLoadImports";
  case PreloadLinkerLoadExports:
    return L"PreloadLinkerLoadExports";
  case ProcessExportBundles:
    return L"ProcessExportBundles";
  case WaitingForExternalReads:
    return L"WaitingForExternalReads";
  case ExportsDone:
    return L"ExportsDone";
  case PostLoad:
    return L"PostLoad";
  case DeferredPostLoad:
    return L"DeferredPostLoad";
  case DeferredPostLoadDone:
    return L"DeferredPostLoadDone";
  case Finalize:
    return L"Finalize";
  case PostLoadInstances:
    return L"PostLoadInstances";
  case CreateClusters:
    return L"CreateClusters";
  case Complete:
    return L"Complete";
  case DeferredDelete:
    return L"DeferredDelete";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0xb99,L"");
  if (!bVar2) {
    return L"Unknown";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// LexToString @ 14232b240

wchar_t * __cdecl LexToString(EExportFilterFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 == NotForClient) {
    return L"NotForClient";
  }
  if (param_1 == NotForServer) {
    return L"NotForServer";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                     ,0x10b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// LexToString @ 14232b2c0

wchar_t * __cdecl LexToString(EPackageLoader param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Unknown) {
    return L"Unknown";
  }
  if (param_1 == LinkerLoad) {
    return L"LinkerLoad";
  }
  if (param_1 == Zen) {
    return L"Zen";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x2f0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Not Implemented";
}

// MakeAsyncPackageLoader2 @ 14232c160

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

IAsyncPackageLoader * __cdecl MakeAsyncPackageLoader2(FIoDispatcher *param_1)

{
  FAsyncLoadingThread2 *pFVar1;
  FAsyncLoadingThread2 *pFVar2;
  
  pFVar1 = operator_new(0x1180);
  pFVar2 = (FAsyncLoadingThread2 *)0x0;
  if (pFVar1 != (FAsyncLoadingThread2 *)0x0) {
    pFVar2 = FAsyncLoadingThread2::FAsyncLoadingThread2(pFVar1,param_1);
  }
  pFVar1 = (FAsyncLoadingThread2 *)&pFVar2->_padding_;
  if (pFVar2 == (FAsyncLoadingThread2 *)0x0) {
    pFVar1 = (FAsyncLoadingThread2 *)0x0;
  }
  return (IAsyncPackageLoader *)pFVar1;
}

// ParsePackageNames @ 14232e220

void __cdecl
ParsePackageNames(FString *param_1,
                 TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FPackageId FVar8;
  uint uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  FPackageId local_res20;
  FPackageId local_68;
  ulonglong local_60;
  FName local_58;
  FName local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  wchar_t *local_38;
  undefined *local_30;
  
  local_38 = L",";
  local_30 = &u__;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FString::ParseIntoArray(param_1,&local_48,&local_38,2,true);
  uVar9 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar11 = local_48.ArrayNum + uVar9;
  if (uVar9 < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_2,uVar11);
    if (uVar11 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_res18 = (undefined4)lVar2;
      iVar5 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((param_2->HashSize == 0) || (param_2->HashSize < iVar5)) {
      param_2->HashSize = iVar5;
      TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Rehash(param_2);
    }
  }
  iVar5 = local_48.ArrayNum;
  pFVar13 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar12.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar12.Data == pFVar13) {
        DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return;
      }
      iVar7 = *(int *)(FVar12.Data + 8);
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) break;
LAB_14232e3b9:
      if (*(int *)(FVar12.Data + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)FVar12.Data;
      }
      FName::FName(&local_58,pwVar10);
      FVar8 = FPackageId::FromName(&local_50);
      TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Emplace<FPackageId>
                (param_2,&local_68,(bool *)FVar8.Id);
      FVar12.Data = FVar12.Data + 0x10;
    }
    if (((iVar7 == 0) || (iVar7 + -1 < 1)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = iswdigit(**(wint_t **)FVar12.Data);
    if (iVar7 == 0) goto LAB_14232e3b9;
    if (*(int *)(FVar12.Data + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)FVar12.Data;
    }
    local_60 = _wcstoui64(pwVar10,(wchar_t **)0x0,0);
    TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Emplace<FPackageId_const_&>
              (param_2,&local_res20,(bool *)&local_60);
    FVar12.Data = FVar12.Data + 0x10;
  } while( true );
}

// `dynamic_atexit_destructor_for_'CEnableScriptImportsDebugging'' @ 150354cf0

void __cdecl _dynamic_atexit_destructor_for__CEnableScriptImportsDebugging__(void)

{
  CEnableScriptImportsDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CEnableScriptImportsDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGAllowMultithreadedLoading'' @ 150354d10

void __cdecl _dynamic_atexit_destructor_for__CVarGAllowMultithreadedLoading__(void)

{
  CVarGAllowMultithreadedLoading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGAllowMultithreadedLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGFailLoadOnNotInstalledImport'' @ 150354d30

void __cdecl _dynamic_atexit_destructor_for__CVarGFailLoadOnNotInstalledImport__(void)

{
  CVarGFailLoadOnNotInstalledImport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGFailLoadOnNotInstalledImport);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGOnlyProcessRequiredPackagesWhenSyncLoading'' @ 150354d50

void __cdecl _dynamic_atexit_destructor_for__CVarGOnlyProcessRequiredPackagesWhenSyncLoading__(void)

{
  CVarGOnlyProcessRequiredPackagesWhenSyncLoading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGOnlyProcessRequiredPackagesWhenSyncLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGRemoveUnreachableObjectsOnGT'' @ 150354d70

void __cdecl _dynamic_atexit_destructor_for__CVarGRemoveUnreachableObjectsOnGT__(void)

{
  CVarGRemoveUnreachableObjectsOnGT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGRemoveUnreachableObjectsOnGT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGStallDetectorIdleLoops'' @ 150354d90

void __cdecl _dynamic_atexit_destructor_for__CVarGStallDetectorIdleLoops__(void)

{
  CVarGStallDetectorIdleLoops._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGStallDetectorIdleLoops);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGStallDetectorTimeout'' @ 150354db0

void __cdecl _dynamic_atexit_destructor_for__CVarGStallDetectorTimeout__(void)

{
  CVarGStallDetectorTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGStallDetectorTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGUsePostloadGroupsWithIOStore'' @ 150354dd0

void __cdecl _dynamic_atexit_destructor_for__CVarGUsePostloadGroupsWithIOStore__(void)

{
  CVarGUsePostloadGroupsWithIOStore._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGUsePostloadGroupsWithIOStore);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGVerifyObjectLoadFlags'' @ 150354df0

void __cdecl _dynamic_atexit_destructor_for__CVarGVerifyObjectLoadFlags__(void)

{
  CVarGVerifyObjectLoadFlags._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGVerifyObjectLoadFlags);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGVerifyUnreachableObjects'' @ 150354e10

void __cdecl _dynamic_atexit_destructor_for__CVarGVerifyUnreachableObjects__(void)

{
  CVarGVerifyUnreachableObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGVerifyUnreachableObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_AllowPreemptingPackagesDuringGC'' @ 150354e30

void __cdecl _dynamic_atexit_destructor_for__CVar_AllowPreemptingPackagesDuringGC__(void)

{
  CVar_AllowPreemptingPackagesDuringGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_AllowPreemptingPackagesDuringGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload'' @ 150354e50

void __cdecl
_dynamic_atexit_destructor_for__CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_DebugPackageNames'' @ 150354e70

void __cdecl _dynamic_atexit_destructor_for__CVar_DebugPackageNames__(void)

{
  CVar_DebugPackageNames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_DebugPackageNames);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_VerbosePackageNames'' @ 150354e90

void __cdecl _dynamic_atexit_destructor_for__CVar_VerbosePackageNames__(void)

{
  CVar_VerbosePackageNames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_VerbosePackageNames);
  return;
}

// `dynamic_atexit_destructor_for_'FPublicExportMapBasicTestAutomationTestInstance'' @ 150354eb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPublicExportMapBasicTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPublicExportMapBasicTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPublicExportMapIterationTestAutomationTestInstance'' @ 150354ed0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPublicExportMapIterationTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPublicExportMapIterationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance'' @ 150354ef0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FPublicExportMapPreInsertPublicExportsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GAsyncLoading2_DebugPackageIds'' @ 150354f10

void __cdecl _dynamic_atexit_destructor_for__GAsyncLoading2_DebugPackageIds__(void)

{
  GAsyncLoading2_DebugPackageIds.HashSize = 0;
  if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GAsyncLoading2_DebugPackageIds.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GAsyncLoading2_DebugPackageIds.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GAsyncLoading2_DebugPackageNamesString'' @ 150354f50

void __cdecl _dynamic_atexit_destructor_for__GAsyncLoading2_DebugPackageNamesString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GAsyncLoading2_DebugPackageNamesString.Data.AllocatorInstance.Data;
  if (GAsyncLoading2_DebugPackageNamesString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GAsyncLoading2_DebugPackageNamesString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GAsyncLoading2_VerbosePackageIds'' @ 150354f70

void __cdecl _dynamic_atexit_destructor_for__GAsyncLoading2_VerbosePackageIds__(void)

{
  GAsyncLoading2_VerbosePackageIds.HashSize = 0;
  if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GAsyncLoading2_VerbosePackageIds.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GAsyncLoading2_VerbosePackageNamesString'' @ 150354fb0

void __cdecl _dynamic_atexit_destructor_for__GAsyncLoading2_VerbosePackageNamesString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GAsyncLoading2_VerbosePackageNamesString.Data.AllocatorInstance.Data;
  if (GAsyncLoading2_VerbosePackageNamesString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GAsyncLoading2_VerbosePackageNamesString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ParallelPreloadExclusions'' @ 150354fd0

void __cdecl
`FAsyncPackage2::CanRunNodeAsync'::__l5::_dynamic_atexit_destructor_for__ParallelPreloadExclusions__
          (void)

{
  AsyncLoading2::Private::FExcludedClassSet::~FExcludedClassSet(&ParallelPreloadExclusions);
  return;
}

// `dynamic_atexit_destructor_for_'SkippedPackages'' @ 150354ff0

void __cdecl
`FAsyncLoadingThread2::QueueUnresolvedPackage'::__l2::
_dynamic_atexit_destructor_for__SkippedPackages__(void)

{
  SkippedPackages.HashSize = 0;
  if (SkippedPackages.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SkippedPackages.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SkippedPackages.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingFileSystemLoads'' @ 150355030

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingFileSystemLoads__(void)

{
  if ((__GTraceCounterAsyncLoadingFileSystemLoads.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAsyncLoadingFileSystemLoads.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingIoStoreLoads'' @ 150355050

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingIoStoreLoads__(void)

{
  if ((__GTraceCounterAsyncLoadingIoStoreLoads.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAsyncLoadingIoStoreLoads.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingLoadingPackages'' @ 150355070

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingLoadingPackages__(void)

{
  if ((__GTraceCounterAsyncLoadingLoadingPackages.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAsyncLoadingLoadingPackages.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingPackagesWithRemainingWork'' @ 150355090

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingPackagesWithRemainingWork__(void)

{
  if ((__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName
              (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingPendingIoRequests'' @ 1503550b0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingPendingIoRequests__(void)

{
  if ((__GTraceCounterAsyncLoadingPendingIoRequests.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAsyncLoadingPendingIoRequests.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingQueuedPackages'' @ 1503550d0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingQueuedPackages__(void)

{
  if ((__GTraceCounterAsyncLoadingQueuedPackages.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAsyncLoadingQueuedPackages.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterAsyncLoadingTotalLoaded'' @ 1503550f0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAsyncLoadingTotalLoaded__(void)

{
  if ((__GTraceCounterAsyncLoadingTotalLoaded.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAsyncLoadingTotalLoaded.CounterName);
    return;
  }
  return;
}

// operator() @ 15048a6d0

bool __thiscall
``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209243708>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209243708>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048a76b;
    }
  }
  bVar2 = false;
LAB_15048a76b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048ace0

bool __thiscall
``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209243701>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209243701>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048ad7b;
    }
  }
  bVar2 = false;
LAB_15048ad7b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048ae50

bool __thiscall
``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l8::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209243690>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209243690>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048aeeb;
    }
  }
  bVar2 = false;
LAB_15048aeeb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048af60

bool __thiscall
``VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()'::__l8::<lambda_4>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209243683>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209243683>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048affb;
    }
  }
  bVar2 = false;
LAB_15048affb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

