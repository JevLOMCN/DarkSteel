// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 234

// Messages'' @ 140f1fcd0

void __cdecl `dynamic_initializer_for_'FDeferredMessageLog::Messages__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDeferredMessageLog::Messages__);
  return;
}

// MessagesCritical'' @ 140f1fcf0

void __cdecl `dynamic_initializer_for_'FDeferredMessageLog::MessagesCritical__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FDeferredMessageLog::MessagesCritical,4000);
  atexit(`dynamic_atexit_destructor_for_'FDeferredMessageLog::MessagesCritical__);
  return;
}

// `dynamic_initializer_for_'AsyncLoadingFlush'' @ 140f1fd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AsyncLoadingFlush__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&AsyncLoadingFlush,L"AsyncLoadingFlush",Log,All);
  atexit(_dynamic_atexit_destructor_for__AsyncLoadingFlush__);
  return;
}

// `dynamic_initializer_for_'CVarGUseOldLoaderAsFallback'' @ 140f1fd60

void __cdecl _dynamic_initializer_for__CVarGUseOldLoaderAsFallback__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGUseOldLoaderAsFallback,L"s.UseOldLoaderAsFallback",&GUseOldLoaderAsFallback,
             L"When active, the old loader will be used as the fallback instead of zenloader",0);
  atexit(_dynamic_atexit_destructor_for__CVarGUseOldLoaderAsFallback__);
  return;
}

// `dynamic_initializer_for_'CVarImportTypeHierarchyEnabled'' @ 140f1fdb0

void __cdecl
UE::Serialization::Private::_dynamic_initializer_for__CVarImportTypeHierarchyEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarImportTypeHierarchyEnabled,L"s.ImportTypeHierarchyEnabled",
             &GImportTypeHierarchyEnabled,
             L"Controls whether Import Type Hierarchy entries will be loaded/saved.",0);
  atexit(_dynamic_atexit_destructor_for__CVarImportTypeHierarchyEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMinimumBulkDataSizeForAsyncLoading'' @ 140f1fe00

void __cdecl _dynamic_initializer_for__CVarMinimumBulkDataSizeForAsyncLoading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinimumBulkDataSizeForAsyncLoading,L"s.MinBulkDataSizeForAsyncLoading",
             &GMinimumBulkDataSizeForAsyncLoading,
             L"Minimum time the time limit exceeded warning will be triggered by.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMinimumBulkDataSizeForAsyncLoading__);
  return;
}

// `dynamic_initializer_for_'CVarShouldAllowSidecarSyncing'' @ 140f1fe50

void __cdecl UE::Serialization::_dynamic_initializer_for__CVarShouldAllowSidecarSyncing__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShouldAllowSidecarSyncing,L"Serialization.AllowSidecarSyncing",local_res8,
             L"When true FEditorBulkData will attempt to sync it\'s .upayload file via sourcecontrol if the first attempt to load from it fails"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldAllowSidecarSyncing__);
  return;
}

// `dynamic_initializer_for_'CVarShouldLoadFromSidecar'' @ 140f1fea0

void __cdecl UE::Serialization::_dynamic_initializer_for__CVarShouldLoadFromSidecar__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShouldLoadFromSidecar,L"Serialization.LoadFromSidecar",local_res8,
             L"When true FEditorBulkData will load from the sidecar file",0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldLoadFromSidecar__);
  return;
}

// `dynamic_initializer_for_'CVarShouldLoadFromTrailer'' @ 140f1fef0

void __cdecl UE::Serialization::_dynamic_initializer_for__CVarShouldLoadFromTrailer__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShouldLoadFromTrailer,L"Serialization.LoadFromTrailer",local_res8,
             L"When true FEditorBulkData will load payloads via the package trailer rather than the package itself"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldLoadFromTrailer__);
  return;
}

// `dynamic_initializer_for_'CVarShouldRehydrateOnSave'' @ 140f1ff40

void __cdecl UE::Serialization::_dynamic_initializer_for__CVarShouldRehydrateOnSave__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShouldRehydrateOnSave,L"Serialization.RehydrateOnSave",local_res8,
             L"When true FVirtualizedUntypedBulkData virtualized payloads will by hydrated and stored locally when saved to a package"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldRehydrateOnSave__);
  return;
}

// `dynamic_initializer_for_'CVarTimeLimitExceededMinTime'' @ 140f1ff90

void __cdecl _dynamic_initializer_for__CVarTimeLimitExceededMinTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTimeLimitExceededMinTime,L"s.TimeLimitExceededMinTime",&GTimeLimitExceededMinTime,
             L"Minimum time the time limit exceeded warning will be triggered by.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTimeLimitExceededMinTime__);
  return;
}

// `dynamic_initializer_for_'CVarTimeLimitExceededMultiplier'' @ 140f1ffe0

void __cdecl _dynamic_initializer_for__CVarTimeLimitExceededMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTimeLimitExceededMultiplier,L"s.TimeLimitExceededMultiplier",
             &GTimeLimitExceededMultiplier,
             L"Multiplier for time limit exceeded warning time threshold.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTimeLimitExceededMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_Dedupe'' @ 140f20030

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_Dedupe__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_Dedupe,L"TrackAsyncLoadRequests.Dedupe",local_res8,
             L"If > 0 then deduplicate requests to async load the same package in the report.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_Dedupe__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling'' @ 140f20080

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling,
             L"TrackAsyncLoadRequests.DumpAfterCsvProfiling",local_res8,
             L"If > 0, dumps tracked async load requests to a file when csv profiling ends.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_Enable'' @ 140f200d0

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_Enable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_Enable,L"TrackAsyncLoadRequests.Enable",local_res8,
             L"If > 0 then remove aliases from the counting process. This essentialy merges addresses that have the same human readable string. It is slower."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_Enable__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_RemoveAliases'' @ 140f20120

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_RemoveAliases__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_RemoveAliases,L"TrackAsyncLoadRequests.RemoveAliases",
             local_res8,
             L"If > 0 then remove aliases from the counting process. This essentialy merges addresses that have the same human readable string. It is slower."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_RemoveAliases__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_StackIgnore'' @ 140f20170

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_StackIgnore__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_StackIgnore,L"TrackAsyncLoadRequests.StackIgnore",
             local_res8,L"Number of items to discard from the top of a stack frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_StackIgnore__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_StackLen'' @ 140f201c0

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_StackLen__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0xc;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_StackLen,L"TrackAsyncLoadRequests.StackLen",local_res8,
             L"Maximum number of stack frame items to keep. This improves aggregation because calls that originate from multiple places but end up in the same place will be accounted together."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_StackLen__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadRequests_Threshhold'' @ 140f20210

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadRequests_Threshhold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTrackAsyncLoadRequests_Threshhold,L"TrackAsyncLoadRequests.Threshhold",local_res8,
             L"Minimum number of hits to include in the report.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_Threshhold__);
  return;
}

// `dynamic_initializer_for_'CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages'' @ 140f20260

void __cdecl
_dynamic_initializer_for__CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages,
             L"TransactionallySafeAsyncLoading.LegacyTrashedPackages",
             &CVar_TransactionallySafeAsyncLoadingLegacyTrashedPackages,
             L"Use the legacy trashed packages handling (EG. ignore them!).",0);
  atexit(_dynamic_atexit_destructor_for__CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarWarnIfTimeLimitExceeded'' @ 140f202b0

void __cdecl _dynamic_initializer_for__CVarWarnIfTimeLimitExceeded__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWarnIfTimeLimitExceeded,L"s.WarnIfTimeLimitExceeded",&GWarnIfTimeLimitExceeded,
             L"Enables log warning if time limit for time-sliced package streaming has been exceeded."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWarnIfTimeLimitExceeded__);
  return;
}

// `dynamic_initializer_for_'CVar_LoadPackageAsyncCommand'' @ 140f20300

void __cdecl _dynamic_initializer_for__CVar_LoadPackageAsyncCommand__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = LoadPackageAsyncCommand;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVar_LoadPackageAsyncCommand,L"LoadPackageAsync",
             L"Loads packages async by names. Usage: LoadPackageAsync <package name> [<package name> ...]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__CVar_LoadPackageAsyncCommand__);
  return;
}

// `dynamic_initializer_for_'CVar_LoadPackageCommand'' @ 140f20440

void __cdecl _dynamic_initializer_for__CVar_LoadPackageCommand__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = LoadPackageCommand;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVar_LoadPackageCommand,L"LoadPackage",
             L"Loads packages by names. Usage: LoadPackage <package name> [<package name> ...]",
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
  atexit(_dynamic_atexit_destructor_for__CVar_LoadPackageCommand__);
  return;
}

// `dynamic_initializer_for_'ForcedLoosePackages'' @ 140f20580

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__ForcedLoosePackages__(void)

{
  atexit(_dynamic_atexit_destructor_for__ForcedLoosePackages__);
  return;
}

// `dynamic_initializer_for_'GPackageLoader'' @ 140f205a0

void __cdecl _dynamic_initializer_for__GPackageLoader__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPackageLoader__);
  return;
}

// `dynamic_initializer_for_'LogPackageStore'' @ 140f205c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPackageStore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPackageStore,L"LogPackageStore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPackageStore__);
  return;
}

// `dynamic_initializer_for_'LogPackageWriter'' @ 140f20600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPackageWriter__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPackageWriter,L"LogPackageWriter",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogPackageWriter__);
  return;
}

// `dynamic_initializer_for_'PrestreamPackageClassNameLoad'' @ 140f20640

void __cdecl _dynamic_initializer_for__PrestreamPackageClassNameLoad__(void)

{
  FName::FName(&PrestreamPackageClassNameLoad,"PrestreamPackage");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingTime'' @ 140f20660

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateClustersGameThread'' @ 140f206f0

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread'' @ 140f20780

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread'' @ 140f20810

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread'' @ 140f208a0

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread'' @ 140f20930

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread'' @ 140f209c0

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

// `dynamic_initializer_for_'TrackAsyncLoadRequests_Dump'' @ 140f20a50

void __cdecl _dynamic_initializer_for__TrackAsyncLoadRequests_Dump__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TrackAsyncLoadRequests_Dump,L"TrackAsyncLoadRequests.Dump",
             L"Dump tracked async load requests and reset tracking",
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
  atexit(_dynamic_atexit_destructor_for__TrackAsyncLoadRequests_Dump__);
  return;
}

// `dynamic_initializer_for_'TrackAsyncLoadRequests_DumpToFile'' @ 140f20b80

void __cdecl _dynamic_initializer_for__TrackAsyncLoadRequests_DumpToFile__(void)

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
            (&TrackAsyncLoadRequests_DumpToFile,L"TrackAsyncLoadRequests.DumpToFile",
             L"Dump tracked async load requests and reset tracking",
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
  atexit(_dynamic_atexit_destructor_for__TrackAsyncLoadRequests_DumpToFile__);
  return;
}

// `dynamic_initializer_for_'TrackAsyncLoadRequests_Reset'' @ 140f20cb0

void __cdecl _dynamic_initializer_for__TrackAsyncLoadRequests_Reset__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TrackAsyncLoadRequests_Reset,L"TrackAsyncLoadRequests.Reset",
             L"Reset tracked async load requests",
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
  atexit(_dynamic_atexit_destructor_for__TrackAsyncLoadRequests_Reset__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterBulkDataBatchRequest_Count'' @ 140f20de0

void __cdecl _dynamic_initializer_for____GTraceCounterBulkDataBatchRequest_Count__(void)

{
  __GTraceCounterBulkDataBatchRequest_Count.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"BulkData/BatchRequest/Count",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterBulkDataBatchRequest_Count.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterBulkDataBatchRequest_Count__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterBulkDataBatchRequest_PendingCount'' @ 140f20e20

void __cdecl _dynamic_initializer_for____GTraceCounterBulkDataBatchRequest_PendingCount__(void)

{
  __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"BulkData/BatchRequest/Pending",TraceCounterType_Int,TraceCounterDisplayHint_None
                 );
  LOCK();
  __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterBulkDataBatchRequest_PendingCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterEditorBulkData_PayloadDataLoaded'' @ 140f20e60

void __cdecl _dynamic_initializer_for____GTraceCounterEditorBulkData_PayloadDataLoaded__(void)

{
  __GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"EditorBulkData/PayloadDataLoaded",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterEditorBulkData_PayloadDataLoaded.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterEditorBulkData_PayloadDataLoaded__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterEditorBulkData_PayloadDataPulled'' @ 140f20ea0

void __cdecl _dynamic_initializer_for____GTraceCounterEditorBulkData_PayloadDataPulled__(void)

{
  __GTraceCounterEditorBulkData_PayloadDataPulled.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"EditorBulkData/PayloadDataPulled",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterEditorBulkData_PayloadDataPulled.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterEditorBulkData_PayloadDataPulled__);
  return;
}

// `scalar_deleting_destructor' @ 141f1acb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`LoadPackageAsyncCommand'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f1af50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_5>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f1b170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_6>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f1b3a0

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

// <lambda_invoker_cdecl> @ 141f1b3d0

void __cdecl `InitAsyncThread'::__l2::<lambda_1>::<lambda_invoker_cdecl>(FString *param_1)

{
  GSyncLoadCount = GSyncLoadCount + 1;
  return;
}

// operator_new<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> @ 141f1b3e0

void * __cdecl
operator_new<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,
          TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 != 0x18) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                       ,0x176,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  iVar3 = TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::Add(param_2,1);
  uVar7 = iVar3 >> 0x1f & 7;
  uVar4 = iVar3 + uVar7;
  uVar8 = (int)uVar4 >> 3;
  uVar6 = 0;
  if ((int)uVar8 < (param_2->Chunks).Array.ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  return (void *)(*(longlong *)
                   ((param_2->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8) +
                 (ulonglong)((uVar4 & 7) - uVar7) * 0x18);
}

// AddLambda<`FPackageStore::FPackageStore'::__l2::<lambda_1>_&> @ 141f1b4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_FPackageStore::FPackageStore_::__l2::<lambda_1>_&>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FPackageStore *pFVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pFVar8 = (FPackageStore *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FPackageStore::FPackageStore'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->__this = (FPackageStore *)0x0;
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
      pFVar8 = (FPackageStore *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->__this = pFVar8;
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
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
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

// AddLambda<`FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>_> @ 141f1b700

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FLinkerLoadPackageStoreBackend::OnMounted_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FLinkerLoadPackageStoreBackend *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FLinkerLoadPackageStoreBackend *)0x0;
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
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__OnMounted_FLinkerLoadPackageStoreBackend__UEAAXV__TSharedRef___CBVFPackageStoreBackendContext___00___Z___V__6B_
    ;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FLinkerLoadPackageStoreBackend *)0x0;
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
      pFVar5 = (FLinkerLoadPackageStoreBackend *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
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

// Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,`TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<`FLinkerLoadPackageStoreBackend::GetPackageStoreEntryEx'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 141f1bf90

bool __thiscall
TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
::
Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<_FLinkerLoadPackageStoreBackend::GetPackageStoreEntryEx_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this,FPackageId *param_1,<lambda_1> *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  FPackagePath *pFVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  FBucket *SRWLock;
  int iVar12;
  FPackagePath local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  TStringView<wchar_t> local_18;
  
  uVar1 = (uint)param_1->Id;
  SRWLock = this->Buckets + (uVar1 & 0x1f);
  if (SRWLock == (FBucket *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (*(int *)&(SRWLock->Map).field_0x8 != *(int *)&(SRWLock->Map).field_0x34) {
    puVar11 = *(undefined1 **)&(SRWLock->Map).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(SRWLock->Map).field_0x38;
    }
    iVar12 = *(int *)(puVar11 + (ulonglong)(*(int *)&(SRWLock->Map).field_0x48 - 1U & uVar1) * 4);
    if (iVar12 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar12 * 0x38 + *(longlong *)&(SRWLock->Map).field_0x0);
        if (*plVar8 == **(longlong **)param_2) {
          plVar10 = plVar8 + 1;
          if (plVar8 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          if (plVar10 != (longlong *)0x0) {
            puVar2 = *(undefined8 **)(param_2 + 8);
            if (*(char *)((longlong)plVar10 + 1) == '\x01') {
              plVar8 = (longlong *)*puVar2;
              lVar5 = plVar10[1];
              *plVar8 = *plVar10;
              plVar8[1] = lVar5;
              lVar5 = plVar10[3];
              plVar8[2] = plVar10[2];
              plVar8[3] = lVar5;
              plVar8[4] = plVar10[4];
              if (*(longlong *)puVar2[1] != 0) {
                pFVar9 = FPackagePath::FromPackageNameUnchecked(&local_38,*(FName *)puVar2[2]);
                uStack_20 = 0;
                local_28 = 0;
                uVar1 = *(uint *)&pFVar9->HeaderExtension;
                pFVar3 = *(FName **)puVar2[1];
                *pFVar3 = pFVar9->PackageName;
                pFVar3[1].ComparisonIndex.Value = uVar1;
                local_18.DataPtr = (wchar_t *)0x0;
                local_18.Size = 0;
                local_18._12_4_ = 0;
                FPackagePath::SetHeaderExtension
                          (*(FPackagePath **)puVar2[1],*(EPackageExtension *)*puVar2,&local_18);
              }
              bVar6 = true;
              *(undefined4 *)puVar2[3] = 4;
            }
            else {
              bVar6 = true;
              *(undefined4 *)puVar2[3] = 1;
            }
            goto LAB_141f1c03c;
          }
          break;
        }
        iVar12 = (int)plVar8[6];
      } while (iVar12 != -1);
    }
  }
  bVar6 = false;
LAB_141f1c03c:
  if (SRWLock != (FBucket *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return bVar6;
}

// AutoRTFMFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::FlushLoading'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141f1c120

void __cdecl
AutoRTFM::
AutoRTFMFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::FlushLoading_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (void *param_1)

{
  undefined8 local_18;
  undefined4 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x60))
            (*(longlong **)(*(longlong *)param_1 + 8),&local_18);
  return;
}

// AutoRTFMFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::LoadPackage'::__l8::<lambda_1>::operator()'::__l29::<lambda_1>_> @ 141f1c160

void __cdecl
AutoRTFM::
AutoRTFMFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::LoadPackage_::__l8::<lambda_1>::operator()_::__l29::<lambda_1>_>
          (void *param_1)

{
  FTransactionallySafeAsyncPackageLoader::DrainTransactionallyDeferredLoadPackages
            (*(FTransactionallySafeAsyncPackageLoader **)param_1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  return;
}

// AutoRTFMFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::FlushLoading'::__l5::<lambda_1>::operator()'::__l25::<lambda_2>_> @ 141f1c180

void __cdecl
AutoRTFM::
AutoRTFMFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::FlushLoading_::__l5::<lambda_1>::operator()_::__l25::<lambda_2>_>
          (void *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  FLowLevelMemTracker *this;
  
  puVar1 = *(undefined8 **)((longlong)param_1 + 0x10);
  pvVar2 = (void *)*puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

// AutoRTFMFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::LoadPackage'::__l8::<lambda_1>::operator()'::__l31::<lambda_2>_> @ 141f1c1a0

void __cdecl
AutoRTFM::
AutoRTFMFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::LoadPackage_::__l8::<lambda_1>::operator()_::__l31::<lambda_2>_>
          (void *param_1)

{
  FMapPayload *pFVar1;
  longlong lVar2;
  void *this;
  code *pcVar3;
  bool bVar4;
  TWeakObjectPtr<UPackage,FWeakObjectPtr> this_00;
  UPackage *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_res8 [2];
  FString local_28;
  
  pFVar1 = *(FMapPayload **)param_1;
  if (*(char *)&pFVar1[1].LoadedPackages.AllocatorInstance.Data == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar1->Result == Succeeded) {
    FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(pFVar1);
    bVar4 = FWeakObjectPtr::IsValid(local_res8);
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4163318125946732755>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\TransactionallySafeAsyncLoading.cpp"
                         ,0xd3,"MapPayload->IsStillValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  pFVar1 = *(FMapPayload **)param_1;
  if (*(char *)&pFVar1[1].LoadedPackages.AllocatorInstance.Data == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(pFVar1);
  pUVar5 = (UPackage *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if ((CVar_TransactionallySafeAsyncLoadingLegacyTrashedPackages == false) &&
     (pUVar5 != (UPackage *)0x0)) {
    pcVar3 = *(code **)(pUVar5->_padding_ + 0x170);
    pFVar6 = ::FName::ToString(*(FName **)((longlong)param_1 + 8),&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    (*pcVar3)(pUVar5,pwVar7,0,0x34);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  lVar2 = *(longlong *)param_1;
  this = *(void **)((longlong)param_1 + 0x10);
  if (*(char *)(lVar2 + 0x18) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound(this,*(FName **)((longlong)param_1 + 8),pUVar5,*(Type *)(lVar2 + 0x10));
  return;
}

// AutoRTFMLookupInstrumentedFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::FlushLoading'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 141f1c330

_func___cdecl_void_void_ptr * __cdecl
AutoRTFM::
AutoRTFMLookupInstrumentedFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::FlushLoading_::__l5::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return (_func___cdecl_void_void_ptr *)0x0;
}

// AutoRTFMLookupInstrumentedFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::LoadPackage'::__l8::<lambda_1>::operator()'::__l29::<lambda_1>_> @ 141f1c340

_func___cdecl_void_void_ptr * __cdecl
AutoRTFM::
AutoRTFMLookupInstrumentedFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::LoadPackage_::__l8::<lambda_1>::operator()_::__l29::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return (_func___cdecl_void_void_ptr *)0x0;
}

// AutoRTFMLookupInstrumentedFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::FlushLoading'::__l5::<lambda_1>::operator()'::__l25::<lambda_2>_> @ 141f1c350

_func___cdecl_void_void_ptr * __cdecl
AutoRTFM::
AutoRTFMLookupInstrumentedFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::FlushLoading_::__l5::<lambda_1>::operator()_::__l25::<lambda_2>_>
          (<lambda_2> *param_1)

{
  return (_func___cdecl_void_void_ptr *)0x0;
}

// AutoRTFMLookupInstrumentedFunctorInvoker<``FTransactionallySafeAsyncPackageLoader::LoadPackage'::__l8::<lambda_1>::operator()'::__l31::<lambda_2>_> @ 141f1c360

_func___cdecl_void_void_ptr * __cdecl
AutoRTFM::
AutoRTFMLookupInstrumentedFunctorInvoker<__FTransactionallySafeAsyncPackageLoader::LoadPackage_::__l8::<lambda_1>::operator()_::__l31::<lambda_2>_>
          (<lambda_2> *param_1)

{
  return (_func___cdecl_void_void_ptr *)0x0;
}

// BinarySearch<TArray<UObject_*,TSizedDefaultAllocator<32>_>,UObject_*,TLess<void>_> @ 141f1c370

int __cdecl
Algo::BinarySearch<TArray<UObject_*,TSizedDefaultAllocator<32>_>,UObject_*,TLess<void>_>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,UObject **param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(UObject **)(pFVar2 + (longlong)iVar4 * 8) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(UObject **)(pFVar2 + (longlong)iVar5 * 8) <= *param_2))
  {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 141f1c3f0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x10);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x10 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// CastChecked<UStruct,UObject_const_> @ 141f1c490

UStruct * __cdecl CastChecked<UStruct,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UStruct>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UStruct *)param_1;
  }
  pFVar3 = GetTypeName<UStruct>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FTrackAsyncLoadRequests::FUserData::FLoadRequest,FTrackAsyncLoadRequests::FUserData::FLoadRequest,int> @ 141f1c550

void __cdecl
ConstructItems<FTrackAsyncLoadRequests::FUserData::FLoadRequest,FTrackAsyncLoadRequests::FUserData::FLoadRequest,int>
          (void *param_1,FLoadRequest *param_2,int param_3)

{
  int *piVar1;
  FString *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar2 + (longlong)param_2);
      FString::FString(this,&param_2->RequestName);
      piVar1 = &param_2->Priority;
      param_2 = param_2 + 1;
      *(int *)&this[1].Data.AllocatorInstance.Data = *piVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FGatherableTextData,int> @ 141f1c6c0

void __cdecl DefaultConstructItems<FGatherableTextData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0x80;
      *(undefined4 *)(lVar1 + 0x44) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      lVar1 = lVar1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::DerivedData::Private::FIoRequestState,int> @ 141f1c730

void __cdecl
DefaultConstructItems<UE::DerivedData::Private::FIoRequestState,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
    do {
      puVar1[-7] = 0;
      *(undefined1 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0xffffffffffffffff;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined2 *)(puVar1 + 5) = 0x300;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Serialization::Private::FTypeResource,int> @ 141f1c780

void __cdecl
DefaultConstructItems<UE::Serialization::Private::FTypeResource,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSHAHash,int> @ 141f1c7b0

void __cdecl DefaultConstructItems<FSHAHash,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 * 0x14);
    return;
  }
  return;
}

// DestructItems<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int> @ 141f1c840

void __cdecl
DestructItems<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int>
          (TTuple<int,TSharedRef<IPackageStoreBackend,1>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::DerivedData::Private::FIoRequestState,int> @ 141f1c880

void __cdecl
DestructItems<UE::DerivedData::Private::FIoRequestState,int>(FIoRequestState *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  if (param_2 != 0) {
    puVar4 = &(param_1->State).TypeIndex;
    do {
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(puVar4 + 0x20));
      bVar1 = *puVar4;
      if ((2 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,UE::DerivedData::Private::FIoCookedState,UE::DerivedData::Private::FIoEditorState>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])
                ((TVariant<std::nullptr_t,UE::DerivedData::Private::FIoCookedState,UE::DerivedData::Private::FIoEditorState>
                  *)(puVar4 + -0x30));
      puVar4 = puVar4 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTrackAsyncLoadRequests::FUserData::FLoadRequest,int> @ 141f1c920

void __cdecl
DestructItems<FTrackAsyncLoadRequests::FUserData::FLoadRequest,int>
          (FLoadRequest *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->RequestName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int> @ 141f1c960

void __cdecl
DestructItems<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int>
          (FTransactionallyDeferredLoadPackagePayload *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->InstancingContext).TypedValue.SharedData.SharedReferenceCount;
    do {
      if (*(char *)(pFVar1 + 1) != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pFVar1->ReferenceController);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar1 + -6));
      pFVar1 = pFVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<UObject_const_> @ 141f1f280

FString * __cdecl
GetFullNameForCastLogError<UObject_const_>(FString *__return_storage_ptr__,UObject *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// HeapSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_> @ 141f1f2b0

void __cdecl
AlgoImpl::HeapSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
          (FRecursiveMutex **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FRecursiveMutex *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_141f1f390:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_141f1f390;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_> @ 141f1f440

void __cdecl
AlgoImpl::HeapSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_>
          (UObject **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_141f1f520:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pUVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pUVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pUVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pUVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pUVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pUVar1) goto LAB_141f1f520;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pUVar1;
    iVar4 = iVar7;
  } while( true );
}

// IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_> @ 141f1f5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
          (FRecursiveMutex **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FRecursiveMutex **ppFVar1;
  FRecursiveMutex *pFVar2;
  int iVar3;
  FRecursiveMutex **ppFVar4;
  FRecursiveMutex ***pppFVar5;
  FRecursiveMutex **ppFVar6;
  FRecursiveMutex **ppFVar7;
  FRecursiveMutex **ppFVar8;
  FRecursiveMutex **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FRecursiveMutex **local_338;
  FRecursiveMutex **local_328;
  FRecursiveMutex **local_320;
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
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_141f1f680:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_141f1f6b0:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000141f1f6b9;
          goto LAB_141f1f6c1;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_141f1f77c;
      }
LAB_141f1f76a:
      local_338 = ppFVar1;
      HeapSortInternal<UE::FRecursiveMutex_*,int,FIdentityFunctor,TLess<void>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_141f1f77c:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x000141f1f6b9:
  if (*ppFVar4 <= *ppFVar9) goto LAB_141f1f6b0;
LAB_141f1f6c1:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_141f1f6b0;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_141f1f77c;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_141f1f77c;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_141f1f76a;
  goto LAB_141f1f680;
}

// IntroSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_> @ 141f1f810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_>
          (UObject **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  UObject **ppUVar1;
  UObject *pUVar2;
  int iVar3;
  UObject **ppUVar4;
  UObject ***pppUVar5;
  UObject **ppUVar6;
  UObject **ppUVar7;
  UObject **ppUVar8;
  UObject **ppUVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  UObject **local_338;
  UObject **local_328;
  UObject **local_320;
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
    pppUVar5 = &local_328;
    do {
      ppUVar8 = pppUVar5[1];
      ppUVar4 = *pppUVar5;
      ppUVar1 = pppUVar5[2];
      iVar3 = (int)((longlong)ppUVar8 - (longlong)ppUVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppUVar1;
      ppUVar9 = ppUVar4;
      if ((int)local_338 != 0) {
LAB_141f1f8c0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar6 = ppUVar8 + 1;
          pUVar2 = ppUVar9[iVar3 >> 1];
          ppUVar9[iVar3 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar2;
          ppUVar4 = ppUVar9;
LAB_141f1f8f0:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar8) goto code_r0x000141f1f8f9;
          goto LAB_141f1f901;
        }
        for (; ppUVar4 = ppUVar9, ppUVar1 = ppUVar9, ppUVar9 < ppUVar8; ppUVar8 = ppUVar8 + -1) {
          while (ppUVar1 = ppUVar1 + 1, ppUVar1 <= ppUVar8) {
            if (*ppUVar4 < *ppUVar1) {
              ppUVar4 = ppUVar1;
            }
          }
          pUVar2 = *ppUVar4;
          *ppUVar4 = *ppUVar8;
          *ppUVar8 = pUVar2;
        }
        goto LAB_141f1f9bc;
      }
LAB_141f1f9aa:
      local_338 = ppUVar1;
      HeapSortInternal<UObject_*,int,FIdentityFunctor,TLess<void>_>(ppUVar4,iVar3,param_3,param_4);
LAB_141f1f9bc:
      pppUVar5 = pppUVar5 + -3;
    } while (&local_328 <= pppUVar5);
  }
  return;
code_r0x000141f1f8f9:
  if (*ppUVar4 <= *ppUVar9) goto LAB_141f1f8f0;
LAB_141f1f901:
  do {
    ppUVar7 = ppUVar6;
    ppUVar6 = ppUVar7 + -1;
    if (ppUVar6 <= ppUVar9) break;
  } while (*ppUVar9 <= *ppUVar6);
  if (ppUVar4 <= ppUVar6) {
    pUVar2 = *ppUVar4;
    *ppUVar4 = *ppUVar6;
    *ppUVar6 = pUVar2;
    goto LAB_141f1f8f0;
  }
  pUVar2 = *ppUVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppUVar9 = *ppUVar6;
  *ppUVar6 = pUVar2;
  if ((longlong)((longlong)ppUVar6 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar8 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar8) {
      *pppUVar5 = ppUVar4;
      pppUVar5[1] = ppUVar8;
      *(int *)(pppUVar5 + 2) = (int)local_338;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar6 <= ppUVar9 + 1) goto LAB_141f1f9bc;
    ppUVar8 = ppUVar7 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar6) {
      *pppUVar5 = ppUVar9;
      pppUVar5[1] = ppUVar7 + -2;
      *(int *)(pppUVar5 + 2) = (int)local_338;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar8 <= ppUVar4) goto LAB_141f1f9bc;
  }
  iVar3 = (int)((longlong)ppUVar8 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if ((int)local_338 == 0) goto LAB_141f1f9aa;
  goto LAB_141f1f8c0;
}

// LowerBoundInternal<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>_const_,int,int,int_UE::Core::Private::Tuple::TTupleBaseElement<int,0,2>::*,TGreater<void>_> @ 141f1fa50

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>_const_,int,int,int_UE::Core::Private::Tuple::TTupleBaseElement<int,0,2>::*,TGreater<void>_>
          (TTuple<int,TSharedRef<IPackageStoreBackend,1>_> *param_1,int param_2,int *param_3,
          pdm_b2452e88 param_4,TGreater<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*param_3 < *(int *)(&param_1[iVar1].field_0x0 + (int)param_4)) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,TBulkData<unsigned_char>_*>_const_,int,FName,TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 141f1fab0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,TBulkData<unsigned_char>_*>_const_,int,FName,TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,TBulkData<unsigned_char>_*> *param_1,int param_2,FName *param_3,
          FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<UObject_*_const,int,UObject_*,FIdentityFunctor,TLess<void>_> @ 141f1fb10

int __cdecl
AlgoImpl::LowerBoundInternal<UObject_*_const,int,UObject_*,FIdentityFunctor,TLess<void>_>
          (UObject **param_1,int param_2,UObject **param_3,FIdentityFunctor param_4,
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

// Reverse<FProperty_*> @ 141f20010

void __cdecl AlgoImpl::Reverse<FProperty_*>(FProperty **param_1,int param_2)

{
  FProperty *pFVar1;
  FProperty **ppFVar2;
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

// WriteToString<256,UE::FDerivedData_const_&> @ 141f20280

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,UE::FDerivedData_const_&>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,FDerivedData *param_1)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  TArrayView<unsigned_char_const_,int> local_18;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if ((param_1->CookedData).ChunkId[0xb] == '\0') {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L"Null",4);
  }
  else {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L"Chunk: ID ",10);
    local_18.ArrayNum = 0xc;
    local_18.DataPtr = (param_1->CookedData).ChunkId;
    UE::String::BytesToHexLower(&local_18,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
    if ((param_1->CookedData).ChunkOffset != 0) {
      pTVar1 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L" / Offset ",10);
      TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"%llu");
    }
    if ((param_1->CookedData).ChunkSize != 0xffffffffffffffff) {
      pTVar1 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L" / Size ",8);
      TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"%llu");
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::EDerivedDataIoStatus>_> @ 141f20380

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::EDerivedDataIoStatus>_>
          (_Atomic_padded<UE::EDerivedDataIoStatus> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::EDerivedDataIoStatus>_> @ 141f20390

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::EDerivedDataIoStatus>_>
          (_Atomic_padded<UE::EDerivedDataIoStatus> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_UE::EDerivedDataIoStatus> @ 141f203a0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_UE::EDerivedDataIoStatus>(EDerivedDataIoStatus *param_1)

{
  return *param_1;
}

// TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage'::__l2::<lambda_1>_> @ 141f203b0

TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,_private:_int___cdecl_FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage(FPackagePath_const_&,FName,TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,EPackageFlags,int,int,FLinkerInstancingContext_const_*,unsigned_int)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,_FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,_private:_int___cdecl_FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage(FPackagePath_const_&,FName,TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,EPackageFlags,int,int,FLinkerInstancingContext_const_*,unsigned_int)_::_2_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &
       ___7__TBaseFunctorDelegateInstance___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__LoadAndCachePackage_FTransactionallySafeAsyncPackageLoader__AEAAHAEBVFPackagePath__V1_V__TDelegate___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____W4EPackageFlags__HHPEBVFLinkerInstancingContext__I_Z___V__6B_
  ;
  *(FTransactionallySafeAsyncPackageLoader **)((longlong)this + 0x18) = (param_1->Functor).__this;
  ::FString::FString((FString *)((longlong)this + 0x20),&(param_1->Functor).PackagePathStr);
  *(FName *)((longlong)this + 0x30) = (param_1->Functor).CustomPackageName;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((undefined8 *)((longlong)this + 0x38),&(param_1->Functor).CompletionDelegate);
  return this;
}

// ~TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,0,0> @ 141f22c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FBulkDataBatchRequest::FBatchHandle::Issue_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Issue_FBatchHandle_FBulkDataBatchRequest__QEAAX__QEAV__TFunction___A6AXW4EStatus_FBulkDataRequest___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,0,0> @ 141f22c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::BulkData::Private::FChunkRequest::Issue_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,0,0> @ 141f22c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FBulkDataBatchRequest::FBatchBuilder::Read_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,0,1> @ 141f22cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Serialization::FEditorBulkData::SerializeToPackageTrailer_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,0,1> @ 141f22cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FBulkData::TryLoadDataIntoMemory_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,0,0> @ 141f22cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1> @ 141f22d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__UE::Serialization::FEditorBulkData::SerializeToLegacyPath_::__l2::<lambda_1>::operator()_::__l14::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1> @ 141f22d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__UE::Serialization::FEditorBulkData::SerializeToPackageTrailer_::__l2::<lambda_1>::operator()_::__l14::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,1,1> @ 141f22d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UE::Serialization::FEditorBulkData::SerializeToLegacyPath_::__l2::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0> @ 141f22d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<__FLinkerLoadPackageStoreBackend::OnMounted_::__l2::<lambda_1>::operator()_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4___R<lambda_1>__1__OnMounted_FLinkerLoadPackageStoreBackend__UEAAXV__TSharedRef___CBVFPackageStoreBackendContext___00___Z_QEBA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator<< @ 141f24800

FArchive * __cdecl operator<<(FArchive *param_1,uchar *param_2)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  return param_1;
}

// operator<< @ 141f24850

FArchive * __cdecl operator<<(FArchive *param_1,FPackageStoreEntryResource *param_2)

{
  longlong *plVar1;
  FPackageId FVar2;
  EPackageStoreEntryFlags local_res8 [2];
  FName local_res10;
  
  local_res8[0] = param_2->Flags;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((EPackageStoreEntryFlags *)plVar1[1] < (EPackageStoreEntryFlags *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(EPackageStoreEntryFlags *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->PackageName);
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ImportedPackageIds);
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->OptionalSegmentImportedPackageIds);
  TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->SoftPackageReferences);
  if ((param_1->field_0x28 & 1) != 0) {
    FVar2 = FPackageId::FromName(&local_res10);
                    /* WARNING: Load size is inaccurate */
    (param_2->PackageId).Id = *FVar2.Id;
    param_2->Flags = local_res8[0];
  }
  return param_1;
}

// operator<< @ 141f24920

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,EBulkDataFlags *param_2)

{
  EBulkDataFlags *pEVar1;
  
  pEVar1 = (EBulkDataFlags *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar1 + 1 <= (EBulkDataFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,param_2);
  return param_1;
}

// operator<< @ 141f24990

FCbWriter * __cdecl operator<<(FCbWriter *param_1,FPackageStoreEntryResource *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  
  FCbWriter::BeginObject(param_1);
  local_48.Size = 5;
  local_48.DataPtr = "flags";
  FCbWriter::SetNameOrAddString(param_1,&local_48);
  FCbWriter::AddInteger(param_1,param_2->Flags);
  local_48.Size = 0xb;
  local_48.DataPtr = "packagename";
  FCbWriter::SetNameOrAddString(param_1,&local_48);
  pFVar3 = FName::ToString(&param_2->PackageName,(FString *)&local_38);
  FCbWriter::operator<<(param_1,pFVar3);
  if (local_38.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if ((param_2->ImportedPackageIds).ArrayNum != 0) {
    local_48.Size = 0x12;
    local_48.DataPtr = "importedpackageids";
    local_38.DataPtr = "importedpackageids";
    local_38.Size = 0x12;
    local_38._12_4_ = local_48._12_4_;
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::BeginArray(param_1);
    pFVar4 = (param_2->ImportedPackageIds).AllocatorInstance.Data;
    iVar2 = (param_2->ImportedPackageIds).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_2->ImportedPackageIds).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPackageId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      FCbWriter::AddInteger(param_1,*(ulong64 *)pFVar4);
      pFVar4 = pFVar4 + 8;
    }
    FCbWriter::EndArray(param_1);
  }
  if ((param_2->ShaderMapHashes).ArrayNum != 0) {
    local_48.Size = 0xf;
    local_48.DataPtr = "shadermaphashes";
    local_38.DataPtr = "shadermaphashes";
    local_38.Size = 0xf;
    local_38._12_4_ = local_48._12_4_;
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::BeginArray(param_1);
    iVar2 = (param_2->ShaderMapHashes).ArrayNum;
    pFVar4 = (param_2->ShaderMapHashes).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x14;
    while( true ) {
      if ((param_2->ShaderMapHashes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSHAHash_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_48.DataPtr = (uchar *)0x0;
      local_48.Size = 0;
      local_48._12_4_ = 0;
      BytesToHex((uchar *)pFVar4,0x14,(FString *)&local_48);
      FCbWriter::operator<<(param_1,(FString *)&local_48);
      if (local_48.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
      pFVar4 = pFVar4 + 0x14;
    }
    FCbWriter::EndArray(param_1);
  }
  if ((param_2->OptionalSegmentImportedPackageIds).ArrayNum != 0) {
    local_48.Size = 0x21;
    local_48.DataPtr = "optionalsegmentimportedpackageids";
    local_38.DataPtr = "optionalsegmentimportedpackageids";
    local_38.Size = 0x21;
    local_38._12_4_ = local_48._12_4_;
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::BeginArray(param_1);
    pFVar4 = (param_2->OptionalSegmentImportedPackageIds).AllocatorInstance.Data;
    iVar2 = (param_2->OptionalSegmentImportedPackageIds).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_2->OptionalSegmentImportedPackageIds).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPackageId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      FCbWriter::AddInteger(param_1,*(ulong64 *)pFVar4);
      pFVar4 = pFVar4 + 8;
    }
    FCbWriter::EndArray(param_1);
  }
  if ((param_2->SoftPackageReferences).ArrayNum != 0) {
    local_48.Size = 0x15;
    local_48.DataPtr = "softpackagereferences";
    local_38.DataPtr = "softpackagereferences";
    local_38.Size = 0x15;
    local_38._12_4_ = local_48._12_4_;
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::BeginArray(param_1);
    pFVar4 = (param_2->SoftPackageReferences).AllocatorInstance.Data;
    iVar2 = (param_2->SoftPackageReferences).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_2->SoftPackageReferences).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPackageId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      FCbWriter::AddInteger(param_1,*(ulong64 *)pFVar4);
      pFVar4 = pFVar4 + 8;
    }
    FCbWriter::EndArray(param_1);
  }
  FCbWriter::EndObject(param_1);
  return param_1;
}

// operator() @ 141f27b40

void __thiscall
``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::
<lambda_1>::operator()(void *this,FPackagePath *param_1,FObjectPostSaveContext param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((param_2.Data)->TargetFilename).Data.AllocatorInstance.Data[0x42] !=
      (FScriptContainerElement)0x0) {
    *(uint *)(*(longlong *)this + 0x54) = *(uint *)(*(longlong *)this + 0x54) | 0x800;
    FPackagePath::operator=((FPackagePath *)(*(longlong *)this + 0x48),param_1);
    bVar3 = FPackagePath::IsEmpty((FPackagePath *)(*(longlong *)this + 0x48));
    if ((bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!this->PackagePath.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                           ,0x744,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined8 *)(*(longlong *)this + 0x40) = *(undefined8 *)((longlong)this + 8);
    *(uint *)(*(longlong *)this + 0x54) =
         (*(uint *)((longlong)this + 0x10) ^ *(uint *)(*(longlong *)this + 0x54)) & 0x8c0 ^
         *(uint *)((longlong)this + 0x10);
    lVar1 = *(longlong *)this;
    if (((*(byte *)(lVar1 + 0x54) & 1) != 0) ||
       ((bVar3 = FPackagePath::IsEmpty((FPackagePath *)(lVar1 + 0x48)), !bVar3 &&
        ((*(uint *)(lVar1 + 0x54) & 0x800) == 0)))) {
      lVar1 = *(longlong *)this;
      *(undefined2 *)(lVar1 + 0x61) = 0;
      *(undefined1 *)(lVar1 + 99) = 0;
      FSharedBuffer::Reset((FSharedBuffer *)(*(longlong *)this + 0x28));
    }
  }
  return;
}

// operator() @ 141f27c10

void __thiscall
``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::
__l14::<lambda_1>::operator()(void *this,FPackagePath *param_1,FObjectPostSaveContext param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  
  if (((param_2.Data)->TargetFilename).Data.AllocatorInstance.Data[0x42] !=
      (FScriptContainerElement)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x40) = *(undefined8 *)((longlong)this + 8);
    *(uint *)(*(longlong *)this + 0x54) =
         (*(uint *)((longlong)this + 0x10) ^ *(uint *)(*(longlong *)this + 0x54)) & 0x8c0 ^
         *(uint *)((longlong)this + 0x10);
    lVar1 = *(longlong *)this;
    for (piVar4 = (int *)(lVar1 + 0x10); piVar4 != (int *)(lVar1 + 0x24); piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        if (*(longlong *)((longlong)this + 8) == -1) {
          *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 1;
        }
        else {
          *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) | 0x800;
          FPackagePath::operator=((FPackagePath *)(*(longlong *)this + 0x48),param_1);
          bVar3 = FPackagePath::IsEmpty((FPackagePath *)(*(longlong *)this + 0x48));
          if ((bVar3) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("!this->PackagePath.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                                 ,0x782,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        break;
      }
    }
    lVar1 = *(longlong *)this;
    if (((*(byte *)(lVar1 + 0x54) & 1) != 0) ||
       ((bVar3 = FPackagePath::IsEmpty((FPackagePath *)(lVar1 + 0x48)), !bVar3 &&
        ((*(uint *)(lVar1 + 0x54) & 0x800) == 0)))) {
      lVar1 = *(longlong *)this;
      *(undefined2 *)(lVar1 + 0x61) = 0;
      *(undefined1 *)(lVar1 + 99) = 0;
      FSharedBuffer::Reset((FSharedBuffer *)(*(longlong *)this + 0x28));
    }
  }
  return;
}

// operator() @ 141f27d20

void __thiscall
``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>::
operator()(void *this,TArrayView<FAssetData_const_,int> *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  <lambda_1> local_res8;
  undefined8 local_48;
  FAssetData **local_40;
  TArrayView<std::nullptr_t,int> local_38;
  code *local_28;
  undefined8 *local_20;
  FAssetData *local_18;
  undefined8 uStack_10;
  
  uVar1 = *(undefined8 *)this;
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FLinkerLoadPackageStoreBackend::OnAssetsRemoved(TArrayView<FAssetData_const_,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId51,"FLinkerLoadPackageStoreBackend::OnAssetsRemoved"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\PackageStore.cpp"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FLinkerLoadPackageStoreBackend::OnAssetsRemoved(TArrayView<FAssetData_const_,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId51);
  }
  local_40 = &local_18;
  local_38.DataPtr = (void **)0x0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLinkerLoadPackageStoreBackend::OnAssetsRemoved'::__l2::<lambda_1>,void,int>
             ::Call;
  local_20 = &local_48;
  local_38.ArrayNum = 0;
  local_48 = uVar1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"FLinkerLoadPackageStoreBackend::OnAssetsRemoved_PF",(int)uStack_10,0x40,
             (TFunctionRef<void___cdecl(int)> *)&local_28,local_res8,None,&local_38);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 141f27e00

bool __thiscall
``FPropertyLocalizationDataGatherer::GatherTextInstance'::__l2::<lambda_1>::operator()'::__l6::
<lambda_2>::operator()(void *this,FTextSourceSiteContext *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1->KeyName).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)this + 1);
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(param_1->KeyName).Data.AllocatorInstance.Data,
                     (wchar_t *)**(undefined8 **)this);
      bVar3 = iVar2 == 0;
      goto LAB_141f27e36;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_141f27e36:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (param_1->SiteDescription).Data.ArrayNum;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_141f27e6c;
    iVar2 = wcscmp((wchar_t *)(param_1->SiteDescription).Data.AllocatorInstance.Data,
                   (wchar_t *)**(undefined8 **)((longlong)this + 8));
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_141f27e6c:
  if ((((param_1->IsEditorOnly == (bool)**(char **)((longlong)this + 0x10)) &&
       (param_1->IsOptional == false)) &&
      (bVar3 = FLocMetadataObject::operator==(&param_1->InfoMetaData,&DefaultMetadataObject), bVar3)
      ) && (bVar3 = FLocMetadataObject::operator==(&param_1->KeyMetaData,&DefaultMetadataObject),
           bVar3)) {
    return true;
  }
  return false;
}

// operator() @ 141f27ed0

void __thiscall <lambda_6>::operator()(<lambda_6> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FTrackAsyncLoadRequests *this_00;
  FOutputDeviceRedirector *pFVar2;
  
  this_00 = FTrackAsyncLoadRequests::Get();
  lpCriticalSection = &this_00->CritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = GetGlobalLogSingleton();
    iVar1 = (**(code **)(*(longlong *)CVarTrackAsyncLoadRequests_Threshhold._padding_ + 200))();
    FStackTracker::DumpStackTraces
              (&this_00->StackTracker,iVar1,(FOutputDevice *)pFVar2,__real_3f800000);
    FStackTracker::ResetTracking(&this_00->StackTracker);
                    /* WARNING: Could not recover jumptable at 0x000141f27f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `vector_deleting_destructor'`adjustor{48}' @ 141f27f58

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::BulkData::Private::FChunkBulkDataRequest::`vector deleting destructor'`adjustor{48}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::_vector_deleting_destructor__adjustor_48__
          (FChunkBulkDataRequest *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FChunkBulkDataRequest *)&this[-1].Callback,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 141f27f68

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::BulkData::Private::FChunkReadFileRequest::`vector deleting destructor'`adjustor{48}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::BulkData::Private::FChunkReadFileRequest::_vector_deleting_destructor__adjustor_48__
          (FChunkReadFileRequest *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FChunkReadFileRequest *)&this[-1].field_0x50,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 141f27f80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FTransactionallySafeAsyncPackageLoader::LoadAndCachePackage'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f27fd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28000

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FPackageStore::FPackageStore'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28030

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTrackAsyncLoadRequests,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTrackAsyncLoadRequests,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28060

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAsyncLoadingFlushContext,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAsyncLoadingFlushContext,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28090

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f280c0

void * __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FSharedBuffer::TakeOwnership<void_(__cdecl&)(void_*),0>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Issue_FBatchHandle_FBulkDataBatchRequest__QEAAX__QEAV__TFunction___A6AXW4EStatus_FBulkDataRequest___Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBulkDataBatchRequest::FBatchBuilder::Read'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f281c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBulkData::TryLoadDataIntoMemory'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f282c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::`2'::<lambda_2>,1,1>
        ::_vftable_;
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4___R<lambda_1>__1__OnMounted_FLinkerLoadPackageStoreBackend__UEAAXV__TSharedRef___CBVFPackageStoreBackendContext___00___Z_QEBA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28390

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FCompressedBuffer>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FCompressedBuffer>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f283d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FSharedBuffer>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FSharedBuffer>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28410

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLinkerLoadPackageStoreBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLinkerLoadPackageStoreBackend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28450

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPackageStoreBackendContext,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPackageStoreBackendContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28490

void * __thiscall
`FFindReferencersArchive::ResetPotentialReferencer'::__l8::FArchiveProxyCollector::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f284d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
FBulkDataBatchRequest::FBatchHandle::_scalar_deleting_destructor_(FBatchHandle *this,uint param_1)

{
  ~FBatchHandle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28510

void * __thiscall
FChunkBatchReadRequest::_scalar_deleting_destructor_(FChunkBatchReadRequest *this,uint param_1)

{
  FIoRequest::~FIoRequest(&this->IoHandle);
  this->_padding_ = (longlong)&___7IHandle_FBulkDataRequest__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28560

void * __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::_scalar_deleting_destructor_
          (FChunkBulkDataRequest *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Callback != 0) {
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    plVar2 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IBulkDataIORequest__6B_;
  FChunkRequest::~FChunkRequest((FChunkRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f285d0

void * __thiscall
UE::BulkData::Private::FChunkFileSizeRequest::_scalar_deleting_destructor_
          (FChunkFileSizeRequest *this,uint param_1)

{
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28610

void * __thiscall
UE::BulkData::Private::FChunkReadFileHandle::_scalar_deleting_destructor_
          (FChunkReadFileHandle *this,uint param_1)

{
  IAsyncReadFileHandle::~IAsyncReadFileHandle((IAsyncReadFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
UE::BulkData::Private::FChunkReadFileRequest::_scalar_deleting_destructor_
          (FChunkReadFileRequest *this,uint param_1)

{
  EIoErrorCode EVar1;
  code *pcVar2;
  bool bVar3;
  TIoStatusOr<unsigned_char_*> *pTVar4;
  void *pvVar5;
  undefined1 auStack_48 [32];
  TIoStatusOr<unsigned_char_*> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  *(undefined ***)this = &_vftable__for__UE__BulkData__Private__FChunkRequest__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncReadRequest__;
  FChunkRequest::WaitForChunkRequest((FChunkRequest *)this,0.0);
  if ((*(longlong *)&this->field_0x38 == 0) &&
     ((*(byte *)(*(longlong *)&this->field_0x8 + 0x19) & 1) != 0)) {
    pTVar4 = FIoBuffer::Release((FIoBuffer *)&this->field_0x8,&local_28);
    EVar1 = (pTVar4->StatusValue).ErrorCode;
    FIoStatus::operator=(&local_28.StatusValue,Unknown);
    FIoStatus::~FIoStatus(&local_28.StatusValue);
    if (EVar1 != Ok) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bReleased",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0xa4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar2)();
        return pvVar5;
      }
    }
  }
  *(undefined8 *)&this->field_0x38 = 0;
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)&this->field_0x30);
  FChunkRequest::~FChunkRequest((FChunkRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28760

void * __thiscall
UE::BulkData::Private::FChunkRequest::_scalar_deleting_destructor_(FChunkRequest *this,uint param_1)

{
  ~FChunkRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f287a0

void * __thiscall
FDuplicateDataReader::_scalar_deleting_destructor_(FDuplicateDataReader *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f287e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void * __thiscall
FDuplicateDataWriter::_scalar_deleting_destructor_(FDuplicateDataWriter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UnserializedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28830

void * __thiscall
FFindReferencersArchive::_scalar_deleting_destructor_(FFindReferencersArchive *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ReferenceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReferenceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,FProperty_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FProperty_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FProperty_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferenceMap);
  pFVar2 = (this->TargetObjects).RefCounts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetObjects).TargetObjects.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f288d0

void * __thiscall FHandleBase::_scalar_deleting_destructor_(FHandleBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHandle_FBulkDataRequest__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28910

void * __thiscall
FHybridPackageStoreBackend::_scalar_deleting_destructor_
          (FHybridPackageStoreBackend *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CookedPackageStore).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoosePackageStore).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28970

void * __thiscall
FLinkerLoadPackageStoreBackend::_scalar_deleting_destructor_
          (FLinkerLoadPackageStoreBackend *this,uint param_1)

{
  IAssetRegistryInterface *pIVar1;
  
  this->_padding_ = (longlong)&___7FLinkerLoadPackageStoreBackend__6B_;
  if ((this->OnAssetRemovedHandle).ID != 0) {
    pIVar1 = IAssetRegistryInterface::GetPtr();
    if (pIVar1 != (IAssetRegistryInterface *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&this->OnAssetRemovedHandle);
    }
  }
  TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
  ::
  ~TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
            ((TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)&this->PackageStoreCache);
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28a00

void * __thiscall FNullArchive::_scalar_deleting_destructor_(FNullArchive *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28a40

void * __thiscall
FTextReferencesArchive::_scalar_deleting_destructor_(FTextReferencesArchive *this,uint param_1)

{
  ~FTextReferencesArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28a80

void * __thiscall
FTransactionallySafeAsyncPackageLoader::_scalar_deleting_destructor_
          (FTransactionallySafeAsyncPackageLoader *this,uint param_1)

{
  IAsyncPackageLoader *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FTransactionallySafeAsyncPackageLoader__6B_;
  pIVar1 = this->WrappedPackageLoader;
  if (pIVar1 != (IAsyncPackageLoader *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  *(undefined4 *)&(this->PackageCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PackageCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FTransactionallySafeAsyncPackageLoader::FMapPayload>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageCache);
  DestructItems<FTransactionallySafeAsyncPackageLoader::FTransactionallyDeferredLoadPackagePayload,int>
            ((FTransactionallyDeferredLoadPackagePayload *)
             (this->TransactionallyDeferredLoadPackages).AllocatorInstance.Data,
             (this->TransactionallyDeferredLoadPackages).ArrayNum);
  pFVar3 = (this->TransactionallyDeferredLoadPackages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAsyncPackageLoader__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28b20

void * __thiscall
IBulkDataIORequest::_scalar_deleting_destructor_(IBulkDataIORequest *this,uint param_1)

{
  *this = (IBulkDataIORequest)&___7IBulkDataIORequest__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28b60

void * __thiscall
FBulkDataRequest::IHandle::_scalar_deleting_destructor_(IHandle *this,uint param_1)

{
  *this = (IHandle)&___7IHandle_FBulkDataRequest__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141f28ba0

void * __thiscall
IPackageStoreBackend::_scalar_deleting_destructor_(IPackageStoreBackend *this,uint param_1)

{
  *this = (IPackageStoreBackend)&___7IPackageStoreBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CanPostLoadOnAsyncLoadingThread @ 141f2a7a0

bool __cdecl CanPostLoadOnAsyncLoadingThread(UObject *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x130))();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    plVar4 = *(longlong **)&param_1->field_0x20;
    bVar3 = true;
    bVar2 = true;
    if (plVar4 != (longlong *)0x0) {
      while (bVar2 = false, bVar3 != false) {
        if ((*(uint *)(plVar4 + 1) >> 0xc & 1) == 0) {
LAB_141f2a7de:
          bVar3 = true;
        }
        else {
          cVar1 = (**(code **)(*plVar4 + 0x130))(plVar4);
          bVar3 = false;
          if (cVar1 != '\0') goto LAB_141f2a7de;
        }
        plVar4 = (longlong *)plVar4[4];
        if (plVar4 == (longlong *)0x0) {
          return bVar3;
        }
      }
    }
  }
  return bVar2;
}

// CancelAsyncLoading @ 141f2ab50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl CancelAsyncLoading(void)

{
  int iVar1;
  UObjectBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FUObjectItem *pFVar6;
  uint uVar7;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AsyncLoading,true);
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar5 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x80))();
  if (cVar5 != '\0') {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*GPackageLoader.Ptr + 0x48))();
  if (GIsRequestingExit == false) {
    CollectGarbage(RF_NoFlags,true);
  }
  uVar7 = 0;
  if (0 < GUObjectArray.ObjObjects.NumElements) {
    do {
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar7) || ((int)uVar7 < 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((uint)GUObjectArray.ObjObjects.NumChunks <= uVar7 >> 0x10) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ChunkIndex < (uint32)NumChunks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x363,L"ChunkIndex (%d) < NumChunks (%d)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((GUObjectArray.ObjObjects.MaxElements <= (int)uVar7) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Index < MaxElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x364,L"Index (%d) < MaxElements (%d)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = GUObjectArray.ObjObjects.Objects[uVar7 >> 0x10];
      if ((pFVar6 == (FUObjectItem *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Chunk",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x366,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = pFVar6 + (uVar7 & 0xffff);
      if ((pFVar6 == (FUObjectItem *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = (pFVar6->field1_0x8).Object;
      if (pUVar2 != (UObjectBase *)0x0) {
        iVar1 = pUVar2->InternalIndex;
        if ((iVar1 < 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
          pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
        }
        else {
          pFVar6 = (FUObjectItem *)0x0;
        }
        if ((((pFVar6->field0_0x0).FlagsAndRefCount >> 0x20 & 0xc400000U) != 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("!Obj->HasAnyInternalFlags(AsyncFlags)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                               ,0x2de,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < GUObjectArray.ObjObjects.NumElements);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FlushAsyncLoading @ 141f2f5f0

void __cdecl FlushAsyncLoading(int param_1)

{
  int local_res8 [8];
  TArrayView<int_const_,int> local_18;
  
  if (param_1 == -1) {
    local_18.DataPtr = (int *)0x0;
    local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  }
  else {
    local_18.DataPtr = local_res8;
    local_18.ArrayNum = 1;
    local_res8[0] = param_1;
  }
  FlushAsyncLoading(&local_18);
  return;
}

// FlushAsyncLoading @ 141f2f640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FlushAsyncLoading(TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  int *piVar4;
  bool bVar5;
  undefined1 auStackY_8a8 [32];
  FLLMScope local_878 [2];
  FMemScope local_870;
  undefined4 local_868;
  undefined4 uStack_864;
  int iStack_860;
  undefined4 uStack_85c;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId327,"FlushAsyncLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
               ,0x147);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId327);
  }
  FLLMScope::FLLMScope(local_878,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_870,AsyncLoading,true);
  if (GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0) {
    bVar2 = (*IsAsyncLoading)();
    if ((bVar2) && (bVar2 = IsInGameThread(), bVar2)) {
      local_858.Base = local_838;
      local_858.CurPos = local_838;
      local_858.End = (wchar_t *)local_38;
      local_858.bIsDynamic = false;
      local_858.bIsExternal = false;
      if (LastFrameNumber == GFrameNumber) {
        if (4 < (byte)LogStreaming._0_1_) {
          (**(code **)((longlong)*GPackageLoader.Ptr + 0x70))();
          (**(code **)((longlong)*GPackageLoader.Ptr + 0x68))();
          piVar4 = param_1->DataPtr;
          bVar2 = true;
          piVar1 = piVar4 + param_1->ArrayNum;
          for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
            if (bVar2) {
              bVar2 = false;
            }
            else {
              if (local_858.End < local_858.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_858,1);
              }
              pvVar3 = FGenericPlatformString::Memcpy(local_858.CurPos,L",",2);
              local_858.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
            }
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%d");
          }
          TStringBuilderBase<wchar_t>::operator*(&local_858);
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
      }
      else if (3 < (byte)LogStreaming._0_1_) {
        (**(code **)((longlong)*GPackageLoader.Ptr + 0x70))();
        (**(code **)((longlong)*GPackageLoader.Ptr + 0x68))();
        piVar4 = param_1->DataPtr;
        bVar2 = true;
        piVar1 = piVar4 + param_1->ArrayNum;
        for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
          if (bVar2) {
            bVar2 = false;
          }
          else {
            if (local_858.End < local_858.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_858,1);
            }
            pvVar3 = FGenericPlatformString::Memcpy(local_858.CurPos,L",",2);
            local_858.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
          }
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%d");
        }
        TStringBuilderBase<wchar_t>::operator*(&local_858);
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      LastFrameNumber = (ulong64)GFrameNumber;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    }
    local_868 = *(undefined4 *)&param_1->DataPtr;
    uStack_864 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_860 = param_1->ArrayNum;
    uStack_85c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)((longlong)*GPackageLoader.Ptr + 0x60))(GPackageLoader.Ptr,&local_868);
  }
  FMemScope::~FMemScope(&local_870);
  FLLMScope::~FLLMScope(local_878);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAsyncLoadPercentage @ 141f32f90

float __cdecl GetAsyncLoadPercentage(FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AsyncLoading,true);
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = (float)(**(code **)((longlong)*GPackageLoader.Ptr + 0x78))(GPackageLoader.Ptr,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return fVar3;
}

// GetAsyncPackageLoader @ 141f33060

IAsyncPackageLoader * __cdecl GetAsyncPackageLoader(void)

{
  code *pcVar1;
  bool bVar2;
  IAsyncPackageLoader *pIVar3;
  
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAsyncPackageLoader *)(*pcVar1)();
    return pIVar3;
  }
  return GPackageLoader.Ptr;
}

// GetEarlyRegistrationEventsRecorder @ 141f34a60

FEarlyRegistrationEventsRecorder * __cdecl GetEarlyRegistrationEventsRecorder(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0x4004,(ForAnyElementType *)&Singleton,0,&Singleton.RecordedEvents.ArrayMax)
      ;
      atexit(`GetEarlyRegistrationEventsRecorder'::__l2::_dynamic_atexit_destructor_for__Singleton__
            );
      _Init_thread_footer(&_TSS0);
      return &Singleton;
    }
  }
  return &Singleton;
}

// GetLoadPackageAsyncPackagePath @ 141f34ce0

/* WARNING: Enum "Type": Some values do not have unique names */

FPackagePath * __cdecl
GetLoadPackageAsyncPackagePath(FPackagePath *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined3 uVar1;
  bool bVar2;
  FPackagePath *pFVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28._8_8_ = *(undefined8 *)&param_1->Size;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  __return_storage_ptr__->HeaderExtension = Unspecified;
  bVar2 = FPackagePath::TryFromMountedName(&local_28,__return_storage_ptr__);
  if (!bVar2) {
    local_18.DataPtr = param_1->DataPtr;
    local_18._8_8_ = *(undefined8 *)&param_1->Size;
    local_28.DataPtr = (wchar_t *)0x0;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    bVar2 = FPackageName::ParseExportTextPath(&local_18,(TStringView<wchar_t> *)0x0,&local_28);
    if (bVar2) {
      local_18.DataPtr = local_28.DataPtr;
      local_18.Size = local_28.Size;
      local_18._12_4_ = local_28._12_4_;
      bVar2 = FPackagePath::TryFromMountedName(&local_18,__return_storage_ptr__);
      if ((bVar2) && (2 < (byte)LogStreaming._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
    }
  }
  bVar2 = FPackagePath::IsEmpty(__return_storage_ptr__);
  if (bVar2) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = FPackagePath::TryFromPackageName(&local_18,__return_storage_ptr__);
    if (!bVar2) {
      local_18.DataPtr = param_1->DataPtr;
      local_18.Size = param_1->Size;
      local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
      pFVar3 = FPackagePath::FromLocalPath((FPackagePath *)&local_28,&local_18);
      __return_storage_ptr__->PackageName = pFVar3->PackageName;
      uVar1 = *(undefined3 *)&pFVar3->field_0x9;
      __return_storage_ptr__->HeaderExtension = pFVar3->HeaderExtension;
      *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar1;
    }
  }
  return __return_storage_ptr__;
}

// GetLoaderTypeInternal @ 141f34e00

ELoaderType __cdecl GetLoaderTypeInternal(void)

{
  code *pcVar1;
  bool bVar2;
  ELoaderType EVar3;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f34e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 200))();
  return EVar3;
}

// GetNumAsyncPackages @ 141f34e70

int __cdecl GetNumAsyncPackages(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f34eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x70))();
  return iVar3;
}

// InitAsyncThread @ 141f37370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InitAsyncThread(void)

{
  int *piVar1;
  int iVar2;
  IAsyncPackageLoader IVar3;
  TUniquePtr<IAsyncPackageLoader,TDefaultDelete<IAsyncPackageLoader>_> TVar4;
  bool bVar5;
  bool bVar6;
  wchar_t *pwVar7;
  FIoDispatcher *pFVar8;
  FIoDispatcher *this;
  FAsyncLoadingThreadSettings *pFVar9;
  IAsyncPackageLoader *pIVar10;
  IAsyncPackageLoader *pIVar11;
  FAsyncLoadingThread *pFVar12;
  FEarlyRegistrationEventsRecorder *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_98 [32];
  undefined1 local_58 [4];
  FLLMScope local_54;
  undefined8 local_50;
  undefined4 local_48;
  FMemScope local_40;
  FIoStatus local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  FLLMScope::FLLMScope(&local_54,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_40,AsyncLoading,true);
  pwVar7 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar7,L"NoZenLoader");
  bVar6 = FIoDispatcher::IsInitialized();
  pIVar11 = (IAsyncPackageLoader *)0x0;
  TVar4 = GPackageLoader;
  if (bVar6) {
    pFVar8 = FIoDispatcher::Get();
    this = FIoDispatcher::Get();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      local_50 = 0;
      local_48 = 0x5000000;
      local_38.ErrorMessage.Chars = (wchar_t *)0x0;
      local_38.ErrorCode = 0x5000000;
      `public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
      HasScriptObjectsChunk = FIoDispatcher::DoesChunkExist(this,(FIoChunkId *)&local_38);
      _Init_thread_footer(&`public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (`public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
        HasScriptObjectsChunk == false) {
      pFVar9 = FAsyncLoadingThreadSettings::Get();
      pFVar9->bLooseFileLoadingEnabled = true;
      TVar4 = GPackageLoader;
    }
    else {
      pIVar10 = MakeAsyncPackageLoader2(pFVar8);
      TVar4 = GPackageLoader;
      if ((GPackageLoader.Ptr != pIVar10) &&
         (TVar4.Ptr = pIVar10, GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0)) {
        IVar3 = *GPackageLoader.Ptr;
        GPackageLoader.Ptr = pIVar10;
        (**(code **)IVar3)();
        TVar4.Ptr = GPackageLoader.Ptr;
      }
    }
  }
  GPackageLoader.Ptr = TVar4.Ptr;
  TVar4.Ptr = GPackageLoader.Ptr;
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    if ((GUseOldLoaderAsFallback != false) || (bVar5)) {
      pFVar12 = operator_new(0x480);
      if ((pFVar12 != (FAsyncLoadingThread *)0x0) &&
         (pFVar12 = FAsyncLoadingThread::FAsyncLoadingThread(pFVar12,0),
         pFVar12 != (FAsyncLoadingThread *)0x0)) {
        pIVar11 = (IAsyncPackageLoader *)&pFVar12->_padding_;
      }
    }
    else {
      bVar5 = FIoDispatcher::IsInitialized();
      if (!bVar5) {
        FIoDispatcher::Initialize(&local_38);
        FIoStatus::~FIoStatus(&local_38);
        GIoDispatcherInitializedByLoader = true;
      }
      pFVar8 = FIoDispatcher::Get();
      pIVar11 = MakeAsyncPackageLoader2(pFVar8);
      TVar4 = GPackageLoader;
      if (GPackageLoader.Ptr == pIVar11) goto LAB_141f37508;
    }
    TVar4.Ptr = pIVar11;
    if (GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0) {
      IVar3 = *GPackageLoader.Ptr;
      pIVar10 = GPackageLoader.Ptr;
      GPackageLoader.Ptr = pIVar11;
      (**(code **)IVar3)(pIVar10,1);
      TVar4.Ptr = GPackageLoader.Ptr;
    }
  }
LAB_141f37508:
  GPackageLoader.Ptr = TVar4.Ptr;
  LOCK();
  GIsLoaderCreated = GIsLoaderCreated + 1;
  UNLOCK();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
               *)&FCoreDelegates::OnSyncLoadPackage,(_func___cdecl_void_FString_ptr *)&local_50);
  pFVar13 = GetEarlyRegistrationEventsRecorder();
  TVar4 = GPackageLoader;
  if (4 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FEarlyRegistrationEventsRecorder::Replay(IAsyncPackageLoader&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  iVar2 = (pFVar13->RecordedEvents).ArrayNum;
  pFVar14 = (pFVar13->RecordedEvents).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((pFVar13->RecordedEvents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEarlyRegistrationEventsRecorder::FRecordedEvent,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_58);
    }
    if (pFVar14 == pFVar15) break;
    (**(code **)((longlong)*TVar4.Ptr + 0xb0))
              (TVar4.Ptr,*(undefined8 *)pFVar14,*(undefined8 *)(pFVar14 + 8),
               *(undefined4 *)(pFVar14 + 0x10));
    pFVar14 = pFVar14 + 0x30;
  }
  piVar1 = &(pFVar13->RecordedEvents).ArrayMax;
  (pFVar13->RecordedEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)pFVar13,0,piVar1);
  }
  (**(code **)((longlong)*GPackageLoader.Ptr + 8))();
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(&local_54);
  return;
}

// IoBufferToSharedBuffer @ 141f39de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSharedBuffer __cdecl IoBufferToSharedBuffer(FIoBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  ulong64 uVar5;
  FIoBuffer this;
  TIoStatusOr<unsigned_char_*> *pTVar6;
  FIoBuffer *in_RDX;
  undefined1 auStack_58 [32];
  FIoBuffer local_38 [2];
  TIoStatusOr<unsigned_char_*> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((((in_RDX->CorePtr).Reference)->Flags & 1) == 0) {
    FIoBuffer::MakeOwned(in_RDX);
  }
  local_38[0].CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(in_RDX->CorePtr).Reference;
  uVar3 = ((BufCore *)local_38[0].CorePtr.Reference)->DataSizeHigh;
  uVar4 = ((BufCore *)local_38[0].CorePtr.Reference)->DataSizeLow;
  if (local_38[0].CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    ((BufCore *)local_38[0].CorePtr.Reference)->NumRefs =
         ((BufCore *)local_38[0].CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  pTVar6 = FIoBuffer::Release(local_38,&local_28);
  if ((pTVar6->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&pTVar6->StatusValue);
  }
  uVar5 = *(ulong64 *)(pTVar6->Value).Pad;
  FIoStatus::operator=(&local_28.StatusValue,Unknown);
  FIoStatus::~FIoStatus(&local_28.StatusValue);
  FSharedBuffer::TakeOwnership<void_(__cdecl&)(void_*),0>
            (param_1,uVar5,(_func___cdecl_void_void_ptr *)(ulonglong)CONCAT14(uVar3,uVar4));
  this.CorePtr.Reference = local_38[0].CorePtr.Reference;
  if (local_38[0].CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_38[0].CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)this.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this.CorePtr.Reference);
      operator_delete((void *)this.CorePtr.Reference,0x20);
    }
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// IsAsyncLoadingCoreUObjectInternal @ 141f39f20

bool __cdecl IsAsyncLoadingCoreUObjectInternal(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f39f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x98))();
  return (bool)uVar3;
}

// IsAsyncLoadingMultithreadedCoreUObjectInternal @ 141f39f70

bool __cdecl IsAsyncLoadingMultithreadedCoreUObjectInternal(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f39fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x90))();
  return (bool)uVar3;
}

// IsAsyncLoadingSuspendedInternal @ 141f3a010

bool __cdecl IsAsyncLoadingSuspendedInternal(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f3a052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x80))();
  return (bool)uVar3;
}

// IsInAsyncLoadingThreadCoreUObjectInternal @ 141f3a400

bool __cdecl IsInAsyncLoadingThreadCoreUObjectInternal(void)

{
  undefined1 uVar1;
  
  if (GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f3a40f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x88))();
    return (bool)uVar1;
  }
  return false;
}

// IsNativeCodePackage @ 141f3a4a0

bool __cdecl IsNativeCodePackage(UPackage *param_1)

{
  if ((param_1 != (UPackage *)0x0) && (((uint)param_1->PackageFlagsPrivate & 0x10) != 0)) {
    return true;
  }
  return false;
}

// IsTimeLimitExceededPrint @ 141f3a580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
IsTimeLimitExceededPrint
          (double param_1,double param_2,double param_3,double param_4,wchar_t *param_5,
          UObject *param_6)

{
  FString *pFVar1;
  bool bVar2;
  FString local_38 [3];
  
  bVar2 = false;
  if ((((LastPrintStartTime != param_1) && ((double)GTimeLimitExceededMinTime < param_2 - param_1))
      && ((double)GTimeLimitExceededMultiplier * param_4 < param_2 - param_1)) &&
     (LastPrintStartTime = param_1, 2 < (byte)LogStreaming._0_1_)) {
    if (param_6 != (UObject *)0x0) {
      pFVar1 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)param_6,local_38,(UObject *)0x0,None);
      if ((pFVar1->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if ((bVar2) && (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LexToString @ 141f3b2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

FString * __cdecl LexToString(FString *__return_storage_ptr__,EBulkDataFlags param_1)

{
  TStringBuilderBase<wchar_t> *this;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.Base = local_218;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  this = LexToString(param_1,&local_238);
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this,1);
  }
  *this->CurPos = L'\0';
  FString::FString(__return_storage_ptr__,this->Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// LexToString @ 141f3b3b0

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

TStringBuilderBase<wchar_t> * __cdecl
LexToString(EBulkDataFlags param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t **ppwVar1;
  wchar_t *pwVar2;
  
  ppwVar1 = &param_2->CurPos;
  if (param_1 == BULKDATA_None) {
    if (param_2->End < *ppwVar1 + 0xd) {
      TStringBuilderBase<wchar_t>::Extend(param_2,0xd);
    }
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>(*ppwVar1,0xd,"BULKDATA_None",0xd);
    *ppwVar1 = pwVar2;
    return param_2;
  }
  if ((param_1 & BULKDATA_PayloadAtEndOfFile) != BULKDATA_None) {
    if ((int)((longlong)*ppwVar1 - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_PayloadAtEndOfFile",0x1b);
  }
  if ((param_1 & BULKDATA_SerializeCompressed) != BULKDATA_None) {
    if ((int)((longlong)*ppwVar1 - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_SerializeCompressedZLIB",0x20)
    ;
  }
  if ((param_1 & BULKDATA_ForceSingleElementSerialization) != BULKDATA_None) {
    if ((int)((longlong)*ppwVar1 - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,L"BULKDATA_ForceSingleElementSerialization",0x28);
  }
  if ((param_1 & BULKDATA_SingleUse) != BULKDATA_None) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_SingleUse",0x12);
  }
  if ((param_1 & BULKDATA_ForceInlinePayload) != BULKDATA_None) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_ForceInlinePayload",0x1b);
  }
  if ((param_1 & BULKDATA_SerializeCompressed) != BULKDATA_None) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_SerializeCompressed",0x1c);
  }
  if ((param_1 >> 8 & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_PayloadInSeparateFile",0x1e);
  }
  if ((param_1 >> 10 & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_Force_NOT_InlinePayload",0x20)
    ;
  }
  if ((param_1 >> 0xb & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_OptionalPayload",0x18);
  }
  if ((param_1 >> 0xc & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_MemoryMappedPayload",0x1c);
  }
  if ((param_1 >> 0xd & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_Size64Bit",0x12);
  }
  if ((param_1 >> 0xe & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,L"BULKDATA_DuplicateNonOptionalPayload",0x24);
  }
  if ((param_1 >> 0x10 & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_NoOffsetFixUp",0x16);
  }
  if ((param_1 >> 0x11 & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_WorkspaceDomainPayload",0x1f);
  }
  if ((param_1 >> 0x12 & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_LazyLoadable",0x15);
  }
  if ((int)param_1 < 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_UsesIoDispatcher",0x19);
  }
  if ((param_1 >> 0x1e & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_DataIsMemoryMapped",0x1b);
  }
  if ((param_1 >> 0x1d & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_HasAsyncReadPending",0x1c);
  }
  if ((param_1 >> 0x1c & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_AlwaysAllowDiscard",0x1b);
  }
  if ((param_1 >> 0xf & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_BadDataVersion",0x17);
  }
  if ((char)param_1 < '\0') {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_ForceStreamPayload",0x1b);
  }
  if ((param_1 >> 9 & 1) != 0) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,L"BULKDATA_SerializeCompressedBitWindow",0x25);
  }
  if ((param_1 & BULKDATA_Unused) != BULKDATA_None) {
    if ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"|",1);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"BULKDATA_Unused",0xf);
  }
  return param_2;
}

// LoadPackageAsync @ 141f3d190

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl LoadPackageAsync(FPackagePath *param_1,FLoadPackageAsyncOptionalParams *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  code *pcVar1;
  TUniquePtr<IAsyncPackageLoader,TDefaultDelete<IAsyncPackageLoader>_> TVar2;
  bool bVar3;
  int iVar4;
  FTrackAsyncLoadRequests *this_00;
  FString *pFVar5;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FString local_78;
  FString local_68;
  FName local_58;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  *local_50;
  FLoadPackageAsyncProgressDelegate *local_48;
  TReferenceControllerBase<1> *local_40;
  EPackageFlags local_38;
  int local_34;
  int local_30;
  FLinkerInstancingContext *local_28;
  uint local_20;
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AsyncLoading,true);
  if ((GAsyncLoadingAllowed == false) && (bVar3 = (*IsInAsyncLoadingThread)(), !bVar3)) {
    FPackagePath::GetDebugName(param_1,&local_78);
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  this_00 = FTrackAsyncLoadRequests::Get();
  iVar4 = param_2->PackagePriority;
  pFVar5 = FPackagePath::GetDebugName(param_1,&local_68);
  FTrackAsyncLoadRequests::TrackRequest(this_00,pFVar5,(wchar_t *)0x0,iVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  TVar2.Ptr = GPackageLoader.Ptr;
  pcVar1 = *(code **)((longlong)*GPackageLoader.Ptr + 0x28);
  local_58 = param_2->CustomPackageName;
  local_50 = (param_2->CompletionDelegate).Ptr;
  local_48 = (param_2->ProgressDelegate).Object;
  local_40 = (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController;
  (param_2->CompletionDelegate).Ptr =
       (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
        *)0x0;
  (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->ProgressDelegate).Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_38 = param_2->PackageFlags;
  local_34 = param_2->PIEInstanceID;
  local_30 = param_2->PackagePriority;
  local_28 = param_2->InstancingContext;
  local_20 = param_2->LoadFlags;
  iVar4 = (*pcVar1)(TVar2.Ptr,param_1,&local_58);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  this = (TDelegateBase<FNotThreadSafeDelegateMode> *)(param_2->CompletionDelegate).Ptr;
  if (this != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
    operator_delete(this,0x18);
  }
  return iVar4;
}

// LoadPackageAsync @ 141f3d370

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
LoadPackageAsync(FPackagePath *param_1,FName param_2,
                TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                *param_3,EPackageFlags param_4,int param_5,int param_6,
                FLinkerInstancingContext *param_7,uint param_8)

{
  code *pcVar1;
  TUniquePtr<IAsyncPackageLoader,TDefaultDelete<IAsyncPackageLoader>_> TVar2;
  bool bVar3;
  int iVar4;
  FTrackAsyncLoadRequests *this;
  FString *pFVar5;
  FLLMScope local_68 [2];
  FMemScope local_60;
  FString local_58;
  FString local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  FLLMScope::FLLMScope(local_68,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_60,AsyncLoading,true);
  if ((GAsyncLoadingAllowed == false) && (bVar3 = (*IsInAsyncLoadingThread)(), !bVar3)) {
    FPackagePath::GetDebugName(param_1,&local_58);
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  this = FTrackAsyncLoadRequests::Get();
  pFVar5 = FPackagePath::GetDebugName(param_1,&local_48);
  FTrackAsyncLoadRequests::TrackRequest(this,pFVar5,(wchar_t *)0x0,param_6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  TVar2.Ptr = GPackageLoader.Ptr;
  pcVar1 = *(code **)((longlong)*GPackageLoader.Ptr + 0x30);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&local_38,param_3);
  iVar4 = (*pcVar1)(TVar2.Ptr,param_1,param_2,&local_38,param_4,param_5,param_6,param_7,param_8);
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return iVar4;
}

// LoadPackageAsync @ 141f3d550

int __cdecl LoadPackageAsync(FString *param_1,FGuid *param_2)

{
  int iVar1;
  FLLMScope local_res8 [5];
  undefined8 local_res18;
  FMemScope local_res20;
  FPackagePath local_38;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  local_28;
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AsyncLoading,true);
  local_28._0_8_ = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_28._8_4_ = 0;
  }
  GetLoadPackageAsyncPackagePath(&local_38,(TStringView<wchar_t> *)&local_28);
  local_28._16_8_ = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_res18 = 0;
  iVar1 = LoadPackageAsync(&local_38,(FName)0x0,&local_28,PKG_None,-1,0,
                           (FLinkerInstancingContext *)0x0,0);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return iVar1;
}

// LoadPackageAsync @ 141f3d630

int __cdecl
LoadPackageAsync(FString *param_1,FGuid *param_2,wchar_t *param_3,
                TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                *param_4,EPackageFlags param_5,int param_6,int param_7,
                FLinkerInstancingContext *param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  FName FVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FLLMScope local_res18 [5];
  FMemScope local_68 [2];
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  FPackagePath local_28;
  undefined4 local_1c;
  
  FLLMScope::FLLMScope(local_res18,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_68,AsyncLoading,true);
  if (param_3 == (wchar_t *)0x0) {
    iVar3 = (param_1->Data).ArrayNum;
    local_48 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(local_1c,iVar2);
    GetLoadPackageAsyncPackagePath(&local_28,(TStringView<wchar_t> *)&local_48);
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    sVar4 = wcslen(param_3);
    uStack_40 = CONCAT44(local_1c,(int)sVar4);
    local_48 = (FScriptContainerElement *)param_3;
    GetLoadPackageAsyncPackagePath(&local_28,(TStringView<wchar_t> *)&local_48);
    local_58.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    uVar6 = 0;
    iVar3 = (param_1->Data).ArrayNum;
    local_48 = (FScriptContainerElement *)0x0;
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    local_58.Size = iVar3 + -1;
    if (iVar3 == 0) {
      local_58.Size = 0;
    }
    bVar1 = FPackagePath::TryFromMountedName(&local_58,(FPackagePath *)&local_48);
    uVar7 = uVar6;
    if (bVar1) {
      FVar5 = FPackagePath::GetPackageFName((FPackagePath *)&local_48);
      uVar7 = *(ulonglong *)FVar5;
      uVar6 = uVar7 >> 0x20;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_48,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  iVar3 = LoadPackageAsync(&local_28,(FName)(uVar7 & 0xffffffff | uVar6 << 0x20),
                           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                            *)&local_48,param_5,param_6,param_7,param_8,0);
  FMemScope::~FMemScope(local_68);
  FLLMScope::~FLLMScope(local_res18);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return iVar3;
}

// LoadPackageAsync @ 141f3d7c0

int __cdecl LoadPackageAsync(FString *param_1,FLoadPackageAsyncOptionalParams *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  int iVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FPackagePath local_68;
  TStringView<wchar_t> local_58;
  FLoadPackageAsyncOptionalParams local_48;
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AsyncLoading,true);
  local_58.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_58.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_58.Size = 0;
  }
  GetLoadPackageAsyncPackagePath(&local_68,&local_58);
  local_48.CustomPackageName = param_2->CustomPackageName;
  local_48.CompletionDelegate.Ptr = (param_2->CompletionDelegate).Ptr;
  local_48.ProgressDelegate.Object = (param_2->ProgressDelegate).Object;
  local_48.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController;
  (param_2->CompletionDelegate).Ptr =
       (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
        *)0x0;
  (param_2->ProgressDelegate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->ProgressDelegate).Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_48.PackageFlags = param_2->PackageFlags;
  local_48.PIEInstanceID = param_2->PIEInstanceID;
  local_48.PackagePriority = param_2->PackagePriority;
  local_48.InstancingContext = param_2->InstancingContext;
  local_48.LoadFlags = param_2->LoadFlags;
  iVar1 = LoadPackageAsync(&local_68,&local_48);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  this = (TDelegateBase<FNotThreadSafeDelegateMode> *)(param_2->CompletionDelegate).Ptr;
  if (this != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
    operator_delete(this,0x18);
  }
  return iVar1;
}

// LoadPackageAsync @ 141f3d900

int __cdecl
LoadPackageAsync(FString *param_1,
                TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                *param_2,int param_3,EPackageFlags param_4,int param_5)

{
  int iVar1;
  FLLMScope local_res8 [2];
  TStringView<wchar_t> local_48;
  FMemScope local_38;
  FPackagePath local_30;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  local_20;
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_38,AsyncLoading,true);
  local_48.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  GetLoadPackageAsyncPackagePath(&local_30,&local_48);
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  local_20._16_4_ = 0;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&local_20,param_2);
  local_48.DataPtr = (wchar_t *)0x0;
  iVar1 = LoadPackageAsync(&local_30,(FName)0x0,&local_20,param_4,param_5,param_3,
                           (FLinkerInstancingContext *)0x0,0);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return iVar1;
}

// LoadPackageAsyncCommand @ 141f3da10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LoadPackageAsyncCommand(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  undefined8 local_res18;
  FMemScope local_res20;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  local_a8;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  undefined1 local_68 [40];
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (3 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_c0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`LoadPackageAsyncCommand'::`6'::<lambda_1>_>
                 ::_vftable_;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,AsyncLoading,true);
    local_a8._0_8_ = *(undefined8 *)pFVar4;
    local_68._8_4_ = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      local_68._8_4_ = 0;
    }
    local_a8._12_4_ = local_68._12_4_;
    local_a8._8_4_ = local_68._8_4_;
    local_68._0_8_ = local_a8._0_8_;
    GetLoadPackageAsyncPackagePath
              ((FPackagePath *)(local_68 + 0x10),(TStringView<wchar_t> *)&local_a8);
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_a8._16_4_ = 0;
    TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_a8,
               (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                *)local_c8);
    local_res18 = 0;
    LoadPackageAsync((FPackagePath *)(local_68 + 0x10),(FName)0x0,&local_a8,PKG_None,-1,0,
                     (FLinkerInstancingContext *)0x0,0);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_88);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// LoadPackageCommand @ 141f3dc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LoadPackageCommand(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (3 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar3;
    }
    LoadPackage((UPackage *)0x0,pwVar2,0,(FArchive *)0x0,(FLinkerInstancingContext *)0x0);
    if (3 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// MakeIoFilenameHash @ 141f3e300

uint __cdecl MakeIoFilenameHash(FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(longlong *)param_1->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
     (*(int *)(param_1->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
    return 0;
  }
  uVar2 = *(uint *)(param_1->Id + 8);
  uVar1 = *(undefined8 *)param_1->Id;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  uVar3 = (uVar2 >> 0x18) + 0x58a2c485 +
          ((((((uVar3 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) * 0x21 +
             (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) * 0x21 +
           (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21 +
          (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 + ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)
          ) * 0x40a9121 + (uVar3 & 0xff) * -0x13be2b1f +
          ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 + ((uint)uVar1 & 0xff) * 0x30f35d61
  ;
  uVar2 = 0xffffffff;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// MakeIoFilenameHash @ 141f3e400

uint __cdecl MakeIoFilenameHash(FPackagePath *param_1)

{
  bool bVar1;
  uint uVar2;
  FString *this;
  ForAnyElementType FVar3;
  uint uVar4;
  FString local_28;
  FString local_18;
  
  bVar1 = FPackagePath::IsEmpty(param_1);
  if (!bVar1) {
    this = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_18);
    FString::ToLower(this,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar3.Data,0);
    uVar4 = 0xffffffff;
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return uVar4;
  }
  return 0;
}

// MakeIoFilenameHash @ 141f3e490

uint __cdecl MakeIoFilenameHash(FString *param_1)

{
  uint uVar1;
  FString *this;
  ForAnyElementType FVar2;
  uint uVar3;
  FString local_28;
  FString local_18;
  
  if (1 < (param_1->Data).ArrayNum) {
    this = FPaths::GetBaseFilename(&local_18,param_1,true);
    FString::ToLower(this,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    uVar1 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar2.Data,0);
    uVar3 = 0xffffffff;
    if (uVar1 != 0) {
      uVar3 = uVar1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return uVar3;
  }
  return 0;
}

// MakeTransactionallySafeAsyncPackageLoader @ 141f3e620

IAsyncPackageLoader * __cdecl
MakeTransactionallySafeAsyncPackageLoader(IAsyncPackageLoader *param_1)

{
  IAsyncPackageLoader *pIVar1;
  
  pIVar1 = operator_new(0x78);
  if (pIVar1 != (IAsyncPackageLoader *)0x0) {
    pIVar1[1] = (IAsyncPackageLoader)param_1;
    *pIVar1 = (IAsyncPackageLoader)&___7FTransactionallySafeAsyncPackageLoader__6B_;
    pIVar1[2] = (IAsyncPackageLoader)0x0;
    pIVar1[3] = (IAsyncPackageLoader)0x0;
    pIVar1[4] = (IAsyncPackageLoader)0x0;
    pIVar1[5] = (IAsyncPackageLoader)0x0;
    pIVar1[8] = (IAsyncPackageLoader)0x0;
    *(undefined4 *)(pIVar1 + 9) = 0;
    *(undefined4 *)&pIVar1[9].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 10) = 0xffffffff;
    *(undefined4 *)&pIVar1[10].field_0x4 = 0;
    pIVar1[0xc] = (IAsyncPackageLoader)0x0;
    *(undefined4 *)(pIVar1 + 0xd) = 0;
    *(undefined4 *)(pIVar1 + 0xe) = 0xffffffff;
    pIVar1[0xe].field_0x4 = 0;
    return pIVar1;
  }
  return (IAsyncPackageLoader *)0x0;
}

// NotifyRegistrationComplete @ 141f3ea60

void __cdecl NotifyRegistrationComplete(void)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  TArrayView<int_const_,int> local_18;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId767,"NotifyRegistrationComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
               ,0x2ff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId767);
  }
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AsyncLoading,true);
  (**(code **)((longlong)*GPackageLoader.Ptr + 0xc0))();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (int *)0x0;
  FlushAsyncLoading(&local_18);
  (**(code **)((longlong)*GPackageLoader.Ptr + 0x18))();
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// NotifyRegistrationEvent @ 141f3eb60

void __cdecl
NotifyRegistrationEvent
          (FName param_1,FName param_2,ENotifyRegistrationType param_3,
          ENotifyRegistrationPhase param_4,_func___cdecl_UObject_ptr *param_5,bool param_6,
          UObject *param_7)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEarlyRegistrationEventsRecorder *pFVar7;
  longlong lVar8;
  FLLMScope local_48 [2];
  FMemScope local_40;
  FName local_38;
  FName FStack_30;
  ENotifyRegistrationType local_28;
  ENotifyRegistrationPhase EStack_24;
  _func___cdecl_UObject_ptr *p_Stack_20;
  UObject *local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  FLLMScope::FLLMScope(local_48,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_40,AsyncLoading,true);
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    pFVar7 = GetEarlyRegistrationEventsRecorder();
    p_Stack_20 = param_5;
    pFVar2 = (FName *)(pFVar7->RecordedEvents).AllocatorInstance.Data;
    local_18 = param_7;
    bStack_10 = param_6;
    local_38 = param_1;
    FStack_30 = param_2;
    local_28 = param_3;
    EStack_24 = param_4;
    if ((pFVar2 <= &local_38) &&
       (&local_38 < pFVar2 + (longlong)(pFVar7->RecordedEvents).ArrayMax * 6)) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar7->RecordedEvents).ArrayNum;
    piVar1 = &(pFVar7->RecordedEvents).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)pFVar7,piVar1);
    }
    lVar8 = (longlong)iVar6;
    (pFVar7->RecordedEvents).ArrayNum = iVar6 + 1;
    pFVar3 = (pFVar7->RecordedEvents).AllocatorInstance.Data;
    *(FName *)(pFVar3 + lVar8 * 0x30) = local_38;
    ((FName *)(pFVar3 + lVar8 * 0x30))[1] = FStack_30;
    *(ulonglong *)(pFVar3 + lVar8 * 0x30 + 0x10) = CONCAT44(EStack_24,local_28);
    *(_func___cdecl_UObject_ptr **)(pFVar3 + lVar8 * 0x30 + 0x10 + 8) = p_Stack_20;
    *(UObject **)(pFVar3 + lVar8 * 0x30 + 0x20) = local_18;
    *(ulonglong *)(pFVar3 + lVar8 * 0x30 + 0x20 + 8) = CONCAT71(uStack_f,bStack_10);
  }
  else {
    (**(code **)((longlong)*GPackageLoader.Ptr + 0xb0))
              (GPackageLoader.Ptr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_48);
  return;
}

// NotifyScriptVersePackage @ 141f3ed70

void __cdecl NotifyScriptVersePackage(VPackage *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f3edbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GPackageLoader.Ptr + 0xb8))(GPackageLoader.Ptr,param_1);
  return;
}

// NotifyUnreachableObjects @ 141f3edf0

void __cdecl NotifyUnreachableObjects(TArrayView<FUObjectItem_*,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AsyncLoading,true);
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*GPackageLoader.Ptr + 0xa8))(GPackageLoader.Ptr,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ProcessAsyncLoading @ 141f40380

Type __cdecl ProcessAsyncLoading(bool param_1,bool param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  bool bVar4;
  FLLMScope local_res20 [2];
  FMemScope local_28 [4];
  
  FLLMScope::FLLMScope(local_res20,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_28,AsyncLoading,true);
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId372,"ProcessAsyncLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
               ,0x174);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId372);
  }
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  TVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x38))
                    (GPackageLoader.Ptr,param_1,param_2,SUB84(param_3,0));
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res20);
  return TVar3;
}

// ProcessAsyncLoadingUntilComplete @ 141f40490

Type __cdecl
ProcessAsyncLoadingUntilComplete(TFunctionRef<bool___cdecl(void)> *param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AsyncLoading,true);
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined8 *)&param_1->field_0x8;
  TVar3 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x40))
                    (GPackageLoader.Ptr,&local_28,SUB84(param_2,0));
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return TVar3;
}

// ResetAsyncLoadingStats @ 141f43c40

void __cdecl ResetAsyncLoadingStats(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0x312,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GFlushAsyncLoadingTime = 0.0;
  GFlushAsyncLoadingCount = 0;
  GSyncLoadCount = 0;
  return;
}

// ResumeAsyncLoadingInternal @ 141f43e90

void __cdecl ResumeAsyncLoadingInternal(void)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AsyncLoading,true);
  bVar2 = IsInGameThread();
  if (bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) goto LAB_141f43ef7;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("IsInGameThread() && !IsInSlateThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                     ,0x193,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141f43ef7:
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*GPackageLoader.Ptr + 0x58))();
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetAsyncLoadingAllowed @ 141f4d270

void __cdecl SetAsyncLoadingAllowed(bool param_1)

{
  GAsyncLoadingAllowed = param_1;
  return;
}

// ShouldAlwaysLoadPackageAsync @ 141f4d950

bool __cdecl ShouldAlwaysLoadPackageAsync(FPackagePath *param_1)

{
  undefined1 uVar1;
  
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f4d965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x20))(GPackageLoader.Ptr,param_1);
  return (bool)uVar1;
}

// ShutdownAsyncThread @ 141f4dbb0

void __cdecl ShutdownAsyncThread(void)

{
  TUniquePtr<IAsyncPackageLoader,TDefaultDelete<IAsyncPackageLoader>_> TVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AsyncLoading,true);
  if (GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0) {
    (**(code **)((longlong)*GPackageLoader.Ptr + 0x10))();
    TVar1 = GPackageLoader;
    if (GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0) {
      GPackageLoader.Ptr = (IAsyncPackageLoader *)0x0;
      (**(code **)*TVar1.Ptr)(TVar1.Ptr,1);
    }
  }
  if (GIoDispatcherInitializedByLoader != false) {
    FIoDispatcher::Shutdown();
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SuspendAsyncLoadingInternal @ 141f4de50

void __cdecl SuspendAsyncLoadingInternal(void)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AsyncLoading,true);
  bVar2 = IsInGameThread();
  if (bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) goto LAB_141f4deb7;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("IsInGameThread() && !IsInSlateThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                     ,0x18c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141f4deb7:
  if (GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GPackageLoader.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*GPackageLoader.Ptr + 0x50))();
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Messages'' @ 15034e360

void __cdecl `dynamic_atexit_destructor_for_'FDeferredMessageLog::Messages__(void)

{
  FDeferredMessageLog::Messages._72_4_ = 0;
  if (FDeferredMessageLog::Messages._64_8_ != 0) {
    FMemory::Free((void *)FDeferredMessageLog::Messages._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FDeferredMessageLog::Messages);
  return;
}

// MessagesCritical'' @ 15034e3a0

void __cdecl `dynamic_atexit_destructor_for_'FDeferredMessageLog::MessagesCritical__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015034e3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FDeferredMessageLog::MessagesCritical);
  return;
}

// `dynamic_atexit_destructor_for_'AsyncLoadingFlush'' @ 15034e3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__AsyncLoadingFlush__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&AsyncLoadingFlush);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGUseOldLoaderAsFallback'' @ 15034e3e0

void __cdecl _dynamic_atexit_destructor_for__CVarGUseOldLoaderAsFallback__(void)

{
  CVarGUseOldLoaderAsFallback._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGUseOldLoaderAsFallback);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImportTypeHierarchyEnabled'' @ 15034e400

void __cdecl
UE::Serialization::Private::_dynamic_atexit_destructor_for__CVarImportTypeHierarchyEnabled__(void)

{
  CVarImportTypeHierarchyEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImportTypeHierarchyEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinimumBulkDataSizeForAsyncLoading'' @ 15034e420

void __cdecl _dynamic_atexit_destructor_for__CVarMinimumBulkDataSizeForAsyncLoading__(void)

{
  CVarMinimumBulkDataSizeForAsyncLoading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinimumBulkDataSizeForAsyncLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldAllowSidecarSyncing'' @ 15034e440

void __cdecl
UE::Serialization::_dynamic_atexit_destructor_for__CVarShouldAllowSidecarSyncing__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShouldAllowSidecarSyncing);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldLoadFromSidecar'' @ 15034e460

void __cdecl UE::Serialization::_dynamic_atexit_destructor_for__CVarShouldLoadFromSidecar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShouldLoadFromSidecar);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldLoadFromTrailer'' @ 15034e480

void __cdecl UE::Serialization::_dynamic_atexit_destructor_for__CVarShouldLoadFromTrailer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShouldLoadFromTrailer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldRehydrateOnSave'' @ 15034e4a0

void __cdecl UE::Serialization::_dynamic_atexit_destructor_for__CVarShouldRehydrateOnSave__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShouldRehydrateOnSave);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTimeLimitExceededMinTime'' @ 15034e4c0

void __cdecl _dynamic_atexit_destructor_for__CVarTimeLimitExceededMinTime__(void)

{
  CVarTimeLimitExceededMinTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTimeLimitExceededMinTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTimeLimitExceededMultiplier'' @ 15034e4e0

void __cdecl _dynamic_atexit_destructor_for__CVarTimeLimitExceededMultiplier__(void)

{
  CVarTimeLimitExceededMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTimeLimitExceededMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_Dedupe'' @ 15034e500

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_Dedupe__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_Dedupe);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling'' @ 15034e520

void __cdecl
_dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_DumpAfterCsvProfiling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_Enable'' @ 15034e540

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_Enable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_Enable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_RemoveAliases'' @ 15034e560

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_RemoveAliases__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_RemoveAliases);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_StackIgnore'' @ 15034e580

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_StackIgnore__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_StackIgnore);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_StackLen'' @ 15034e5a0

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_StackLen__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_StackLen);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadRequests_Threshhold'' @ 15034e5c0

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadRequests_Threshhold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTrackAsyncLoadRequests_Threshhold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages'' @ 15034e5e0

void __cdecl
_dynamic_atexit_destructor_for__CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages__(void)

{
  CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTransactionallySafeAsyncLoadingLegacyTrashedPackages);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWarnIfTimeLimitExceeded'' @ 15034e600

void __cdecl _dynamic_atexit_destructor_for__CVarWarnIfTimeLimitExceeded__(void)

{
  CVarWarnIfTimeLimitExceeded._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarWarnIfTimeLimitExceeded);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_LoadPackageAsyncCommand'' @ 15034e620

void __cdecl _dynamic_atexit_destructor_for__CVar_LoadPackageAsyncCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_LoadPackageAsyncCommand);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_LoadPackageCommand'' @ 15034e640

void __cdecl _dynamic_atexit_destructor_for__CVar_LoadPackageCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_LoadPackageCommand);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMetadataObject'' @ 15034e660

void __cdecl
``FPropertyLocalizationDataGatherer::GatherTextInstance'::__l2::<lambda_1>::operator()'::__l6::
_dynamic_atexit_destructor_for__DefaultMetadataObject__(void)

{
  DefaultMetadataObject.Values._72_4_ = 0;
  if (DefaultMetadataObject.Values._64_8_ != 0) {
    FMemory::Free((void *)DefaultMetadataObject.Values._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DefaultMetadataObject);
  return;
}

// `dynamic_atexit_destructor_for_'ForcedLoosePackages'' @ 15034e6a0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__ForcedLoosePackages__(void)

{
  ForcedLoosePackages.HashSize = 0;
  if (ForcedLoosePackages.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ForcedLoosePackages.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ForcedLoosePackages.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GPackageLoader'' @ 15034e6e0

void __cdecl _dynamic_atexit_destructor_for__GPackageLoader__(void)

{
  if (GPackageLoader.Ptr != (IAsyncPackageLoader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015034e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*GPackageLoader.Ptr)(GPackageLoader.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15034e700

void __cdecl `FPackageStore::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Instance.LinkerLoadBackend.SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<int,TSharedRef<IPackageStoreBackend,1>_>,int>
            ((TTuple<int,TSharedRef<IPackageStoreBackend,1>_> *)
             ::Instance.Backends.AllocatorInstance.Data,::Instance.Backends.ArrayNum);
  if (::Instance.Backends.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.Backends.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Instance.BackendContext.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15034e750

void __cdecl `FTrackAsyncLoadRequests::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
              ::__l2::Instance.CritSec);
  FStackTracker::~FStackTracker
            (&`public:_static_struct_FTrackAsyncLoadRequests&___ptr64___cdecl_FTrackAsyncLoadRequests::Get(void)'
              ::__l2::Instance.StackTracker);
  return;
}

// `dynamic_atexit_destructor_for_'LogPackageStore'' @ 15034e780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPackageStore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPackageStore);
  return;
}

// `dynamic_atexit_destructor_for_'LogPackageWriter'' @ 15034e7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPackageWriter__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPackageWriter);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15034e7c0

void __cdecl
`GetEarlyRegistrationEventsRecorder'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Singleton.RecordedEvents.AllocatorInstance.Data;
  if (::Singleton.RecordedEvents.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Singleton.RecordedEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TrackAsyncLoadRequests_Dump'' @ 15034e7e0

void __cdecl _dynamic_atexit_destructor_for__TrackAsyncLoadRequests_Dump__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TrackAsyncLoadRequests_Dump);
  return;
}

// `dynamic_atexit_destructor_for_'TrackAsyncLoadRequests_DumpToFile'' @ 15034e800

void __cdecl _dynamic_atexit_destructor_for__TrackAsyncLoadRequests_DumpToFile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TrackAsyncLoadRequests_DumpToFile);
  return;
}

// `dynamic_atexit_destructor_for_'TrackAsyncLoadRequests_Reset'' @ 15034e820

void __cdecl _dynamic_atexit_destructor_for__TrackAsyncLoadRequests_Reset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TrackAsyncLoadRequests_Reset);
  return;
}

// `dynamic_atexit_destructor_for_'TrashedPackage'' @ 15034e840

void __cdecl
`FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage'::__l15::
_dynamic_atexit_destructor_for__TrashedPackage__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
               ::__l15::TrashedPackage.Data.AllocatorInstance.Data;
  if (`public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
      ::__l15::TrashedPackage.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_struct_TWeakObjectPtr<UPackage,FWeakObjectPtr>___cdecl_FTransactionallySafeAsyncPackageLoader::FMapPayload::GetPackage(void)const___ptr64'
      ::__l15::TrashedPackage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypeSpecificLocalizationDataGatheringCallbacks'' @ 15034e860

void __cdecl
`FPropertyLocalizationDataGatherer::GetTypeSpecificLocalizationDataObjectGatheringCallbacks'::__l2::
_dynamic_atexit_destructor_for__TypeSpecificLocalizationDataGatheringCallbacks__(void)

{
  TypeSpecificLocalizationDataGatheringCallbacks._72_4_ = 0;
  if (TypeSpecificLocalizationDataGatheringCallbacks._64_8_ != 0) {
    FMemory::Free((void *)TypeSpecificLocalizationDataGatheringCallbacks._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,enum_EPropertyLocalizationGathererTextFlags)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,TFunction<void___cdecl(UObject_const_*,FPropertyLocalizationDataGatherer_&,enum_EPropertyLocalizationGathererTextFlags)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TypeSpecificLocalizationDataGatheringCallbacks);
  return;
}

// `dynamic_atexit_destructor_for_'TypeSpecificLocalizationDataGatheringCallbacks'' @ 15034e8a0

void __cdecl
`FPropertyLocalizationDataGatherer::GetTypeSpecificLocalizationDataStructGatheringCallbacks'::__l2::
_dynamic_atexit_destructor_for__TypeSpecificLocalizationDataGatheringCallbacks__(void)

{
  TypeSpecificLocalizationDataGatheringCallbacks._72_4_ = 0;
  if (TypeSpecificLocalizationDataGatheringCallbacks._64_8_ != 0) {
    FMemory::Free((void *)TypeSpecificLocalizationDataGatheringCallbacks._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,enum_EPropertyLocalizationGathererTextFlags)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TFunction<void___cdecl(FString_const_&,UScriptStruct_const_*,void_const_*,void_const_*,FPropertyLocalizationDataGatherer_&,enum_EPropertyLocalizationGathererTextFlags)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TypeSpecificLocalizationDataGatheringCallbacks);
  return;
}

// `dynamic_atexit_destructor_for_'TypeSpecificTextReferenceCollectorCallbacks'' @ 15034e8e0

void __cdecl
`FTextReferenceCollector::GetTypeSpecificTextReferenceCollectorCallbacks'::__l2::
_dynamic_atexit_destructor_for__TypeSpecificTextReferenceCollectorCallbacks__(void)

{
  TypeSpecificTextReferenceCollectorCallbacks._72_4_ = 0;
  if (TypeSpecificTextReferenceCollectorCallbacks._64_8_ != 0) {
    FMemory::Free((void *)TypeSpecificTextReferenceCollectorCallbacks._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,TFunction<void___cdecl(UObject_*,FArchive_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,TFunction<void___cdecl(UObject_*,FArchive_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,TFunction<void___cdecl(UObject_*,FArchive_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TypeSpecificTextReferenceCollectorCallbacks);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterBulkDataBatchRequest_Count'' @ 15034e920

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterBulkDataBatchRequest_Count__(void)

{
  if ((__GTraceCounterBulkDataBatchRequest_Count.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterBulkDataBatchRequest_Count.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterBulkDataBatchRequest_PendingCount'' @ 15034e940

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterBulkDataBatchRequest_PendingCount__(void)

{
  if ((__GTraceCounterBulkDataBatchRequest_PendingCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterBulkDataBatchRequest_PendingCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterEditorBulkData_PayloadDataLoaded'' @ 15034e960

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterEditorBulkData_PayloadDataLoaded__(void)

{
  if ((__GTraceCounterEditorBulkData_PayloadDataLoaded.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterEditorBulkData_PayloadDataLoaded.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterEditorBulkData_PayloadDataPulled'' @ 15034e980

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterEditorBulkData_PayloadDataPulled__(void)

{
  if ((__GTraceCounterEditorBulkData_PayloadDataPulled.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterEditorBulkData_PayloadDataPulled.CounterName);
    return;
  }
  return;
}

// operator() @ 150482fa0

bool __thiscall
``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8881822549416083523>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8881822549416083523>,
                       &`public:___cdecl_`public:___cdecl_`public:_virtual_void___cdecl_FLinkerLoadPackageStoreBackend::OnMounted(TSharedRef<FPackageStoreBackendContext_const_,1>)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

