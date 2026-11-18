// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 218

// DefaultGetObjectDisplayName'' @ 140f1e6d0

void __cdecl `dynamic_initializer_for_'FUObjectToken::DefaultGetObjectDisplayName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FUObjectToken::DefaultGetObjectDisplayName__);
  return;
}

// DefaultMessageTokenActivated'' @ 140f1e6f0

void __cdecl `dynamic_initializer_for_'FUObjectToken::DefaultMessageTokenActivated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FUObjectToken::DefaultMessageTokenActivated__);
  return;
}

// `dynamic_initializer_for_'CFlushStreamingOnExit'' @ 140f1e710

void __cdecl _dynamic_initializer_for__CFlushStreamingOnExit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CFlushStreamingOnExit,L"s.FlushStreamingOnExit",&GFlushStreamingOnExit,
             L"Placeholder console variable, currently not used in runtime.",0);
  atexit(_dynamic_atexit_destructor_for__CFlushStreamingOnExit__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadingAlwaysProcessPackages'' @ 140f1e760

void __cdecl _dynamic_initializer_for__CVarAsyncLoadingAlwaysProcessPackages__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadingAlwaysProcessPackages,L"s.AsyncLoadingAlwaysProcessPackages",
             &GAsyncLoadingAlwaysProcessPackages,
             L"When flushing, will process all packages instead of only what\'s needed. (Used to avoid a hard to repro potential deadlock)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadingAlwaysProcessPackages__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadingPrecachePriority'' @ 140f1e7b0

void __cdecl _dynamic_initializer_for__CVarAsyncLoadingPrecachePriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadingPrecachePriority,L"s.AsyncLoadingPrecachePriority",
             &GAsyncLoadingPrecachePriority,L"Priority of asyncloading precache requests",0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadingPrecachePriority__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadingThreadEnabled'' @ 140f1e800

void __cdecl _dynamic_initializer_for__CVarAsyncLoadingThreadEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadingThreadEnabled,L"s.AsyncLoadingThreadEnabled",
             &GAsyncLoadingThreadEnabled,
             L"Placeholder console variable, currently not used in runtime.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadingThreadEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarEventDrivenLoaderEnabled'' @ 140f1e850

void __cdecl _dynamic_initializer_for__CVarEventDrivenLoaderEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEventDrivenLoaderEnabled,L"s.EventDrivenLoaderEnabled",
             &GEventDrivenLoaderEnabledInCookedBuilds,
             L"Placeholder console variable, currently not used in runtime.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEventDrivenLoaderEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarRandomizeLoadOrder'' @ 140f1e8a0

void __cdecl _dynamic_initializer_for__CVarRandomizeLoadOrder__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRandomizeLoadOrder,L"s.RandomizeLoadOrder",&GRandomizeLoadOrder,
             L"If > 0, will randomize the load order of pending packages using this seed instead of using the most efficient order. This can be used to find bugs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRandomizeLoadOrder__);
  return;
}

// `dynamic_initializer_for_'CVar_EditorLoadPrecacheSizeKB'' @ 140f1e8f0

void __cdecl _dynamic_initializer_for__CVar_EditorLoadPrecacheSizeKB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_EditorLoadPrecacheSizeKB,L"s.EditorLoadPrecacheSizeKB",&GEditorLoadPrecacheSizeKB
             ,L"Size, in KB, to precache when loading packages in the editor.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_EditorLoadPrecacheSizeKB__);
  return;
}

// `dynamic_initializer_for_'CVar_MaxIncomingRequestsToStall'' @ 140f1e940

void __cdecl _dynamic_initializer_for__CVar_MaxIncomingRequestsToStall__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MaxIncomingRequestsToStall,L"s.MaxIncomingRequestsToStall",
             &GMaxIncomingRequestsToStall,
             L"Controls the maximum number of unhandled IO requests before we stall the pak precacher to let the CPU catch up."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_MaxIncomingRequestsToStall__);
  return;
}

// `dynamic_initializer_for_'CVar_MaxPrecacheRequestsInFlight'' @ 140f1e990

void __cdecl _dynamic_initializer_for__CVar_MaxPrecacheRequestsInFlight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MaxPrecacheRequestsInFlight,L"s.MaxPrecacheRequestsInFlight",
             &GMaxPrecacheRequestsInFlight,
             L"Controls the maximum amount of precache requests to have in flight.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_MaxPrecacheRequestsInFlight__);
  return;
}

// `dynamic_initializer_for_'CVar_MaxReadyRequestsToStallMB'' @ 140f1e9e0

void __cdecl _dynamic_initializer_for__CVar_MaxReadyRequestsToStallMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MaxReadyRequestsToStallMB,L"s.MaxReadyRequestsToStallMB",
             &GMaxReadyRequestsToStallMB,
             L"Controls the maximum amount memory for unhandled IO requests before we stall the pak precacher to let the CPU catch up (in megabytes)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_MaxReadyRequestsToStallMB__);
  return;
}

// `dynamic_initializer_for_'CVar_ProcessPrestreamingRequests'' @ 140f1ea30

void __cdecl _dynamic_initializer_for__CVar_ProcessPrestreamingRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ProcessPrestreamingRequests,L"s.ProcessPrestreamingRequests",
             &GProcessPrestreamingRequests,
             L"If non-zero, then we process prestreaming requests in cooked builds.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ProcessPrestreamingRequests__);
  return;
}

// `dynamic_initializer_for_'FPackagePathTestSubClassAutomationTestInstance'' @ 140f1ea80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FPackagePathTestSubClassAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPackagePathTestSubClass");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPackagePathTestSubClassAutomationTestInstance,&local_18,false)
  ;
  FPackagePathTestSubClassAutomationTestInstance._240_8_ = 0x155016580;
  FPackagePathTestSubClassAutomationTestInstance._248_8_ = 0x155016580;
  FPackagePathTestSubClassAutomationTestInstance._256_8_ = &LogArchiveObjectCrc32;
  FPackagePathTestSubClassAutomationTestInstance._0_8_ = &___7FPackagePathTestSubClass__6B_;
  FPackagePathTestSubClassAutomationTestInstance._264_2_ = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPackagePathTestSubClassAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObject_FAsyncPackage'' @ 140f1eb10

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObject_FAsyncPackage__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObject_FAsyncPackage,L"UObject_FAsyncPackage",(FName)0x0,(FName)0x0
             ,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogArchiveDiff'' @ 140f1eb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogArchiveDiff__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogArchiveDiff,L"LogArchiveDiff",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogArchiveDiff__);
  return;
}

// `dynamic_initializer_for_'LogArchiveObjectCrc32'' @ 140f1eba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogArchiveObjectCrc32__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogArchiveObjectCrc32,L"LogArchiveObjectCrc32",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogArchiveObjectCrc32__);
  return;
}

// `dynamic_initializer_for_'LogArchiveUObject'' @ 140f1ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogArchiveUObject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogArchiveUObject,L"LogArchiveUObject",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogArchiveUObject__);
  return;
}

// `dynamic_initializer_for_'LogAsyncArchive'' @ 140f1ec20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAsyncArchive__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAsyncArchive,L"LogAsyncArchive",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAsyncArchive__);
  return;
}

// `dynamic_initializer_for_'LogLoadingDev'' @ 140f1ec60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLoadingDev__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLoadingDev,L"LogLoadingDev",Fatal,All);
  atexit(_dynamic_atexit_destructor_for__LogLoadingDev__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncIO_AsyncLoadingBlockingTime'' @ 140f1eca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncIO_AsyncLoadingBlockingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncIO_AsyncLoadingBlockingTime ==
      (FThreadSafeStaticStat<FStat_STAT_AsyncIO_AsyncLoadingBlockingTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncIO_AsyncLoadingBlockingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncIO_AsyncLoadingBlockingTime,*pFVar1,
               L"Async loading block time","STATGROUP_AsyncIO","STATCAT_Advanced",L"Async I/O",true,
               false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime'' @ 140f1ed30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime ==
      (FThreadSafeStaticStat<FStat_STAT_AsyncIO_AsyncPackagePrecacheWaitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncIO_AsyncPackagePrecacheWaitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime,
               *pFVar1,L"Async package precache wait time","STATGROUP_AsyncIO","STATCAT_Advanced",
               L"Async I/O",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingTime'' @ 140f1edc0

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

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingTimeDetailed'' @ 140f1ee50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncLoadingTimeDetailed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncLoadingTimeDetailed ==
      (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTimeDetailed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncLoadingTimeDetailed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingTimeDetailed,*pFVar1,
               L"Async Loading Time Detailed","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load"
               ,false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncArchiveMem'' @ 140f1eee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncArchiveMem__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncArchiveMem == (FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncArchiveMem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncArchiveMem,*pFVar1,
               L"FAsyncArchive Buffers","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncArchive_Precache'' @ 140f1ef70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncArchive_Precache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncArchive_Precache ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncArchive_Precache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncArchive_Precache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncArchive_Precache,*pFVar1,
               L"Precache AsyncArchive","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",false
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading'' @ 140f1f000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncLoadingThread_ProcessAsyncLoading>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncLoadingThread_ProcessAsyncLoading");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading,
               *pFVar1,L"ProcessAsyncLoading AsyncLoadingThread","STATGROUP_AsyncLoad",
               "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue'' @ 140f1f090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateAsyncPackagesFromQueue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue
               ,*pFVar1,L"CreateAsyncPackagesFromQueue","STATGROUP_AsyncLoad","STATCAT_Advanced",
               L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateClustersGameThread'' @ 140f1f120

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateExports'' @ 140f1f1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateExports__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateExports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateExports");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateExports,*pFVar1,
               L"CreateExports AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateImports'' @ 140f1f240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateImports__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateImports");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateImports,*pFVar1,
               L"CreateImports AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateLinker'' @ 140f1f2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateLinker__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateLinker ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateLinker>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateLinker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateLinker,*pFVar1,
               L"CreateLinker AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateMetaData'' @ 140f1f360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateMetaData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateMetaData ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateMetaData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateMetaData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateMetaData,*pFVar1,
               L"CreateMetaData AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load"
               ,false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_ExternalReadDependencies'' @ 140f1f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_ExternalReadDependencies__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_ExternalReadDependencies ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_ExternalReadDependencies>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_ExternalReadDependencies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_ExternalReadDependencies,
               *pFVar1,L"ExternalReadDependencies AsyncPackage","STATGROUP_AsyncLoad",
               "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FinishLinker'' @ 140f1f480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FinishLinker__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FinishLinker ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishLinker>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FinishLinker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FinishLinker,*pFVar1,
               L"FinishLinker AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FinishObjects'' @ 140f1f510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FinishObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FinishObjects ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FinishObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FinishObjects,*pFVar1,
               L"FinishObjects AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread'' @ 140f1f5a0

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread'' @ 140f1f630

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FreeReferencedImports'' @ 140f1f6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FreeReferencedImports__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FreeReferencedImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FreeReferencedImports>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FreeReferencedImports");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FreeReferencedImports,
               *pFVar1,L"FreeReferencedImports AsyncPackage","STATGROUP_AsyncLoad",
               "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_LoadImports'' @ 140f1f750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_LoadImports__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_LoadImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_LoadImports");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_LoadImports,*pFVar1,
               L"LoadImports AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread'' @ 140f1f7e0

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadObjects'' @ 140f1f870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjects ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadObjects,*pFVar1,
               L"PostLoadObjects AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",
               L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread'' @ 140f1f900

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PreLoadObjects'' @ 140f1f990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PreLoadObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PreLoadObjects ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PreLoadObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PreLoadObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PreLoadObjects,*pFVar1,
               L"PreLoadObjects AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load"
               ,false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_Tick'' @ 140f1fa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_Tick == (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_Tick>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_Tick,*pFVar1,
               L"Tick AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",false,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread'' @ 140f1fab0

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

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread'' @ 140f1fb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TotalPostLoadGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_TotalPostLoadGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread,
               *pFVar1,L"Total PostLoadObjects time GT","STATGROUP_AsyncLoadGameThread",
               "STATCAT_Advanced",L"Async Load Game Thread",true,false,NumBits,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StreamingAllocSize'' @ 140f1fbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StreamingAllocSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StreamingAllocSize == (FThreadSafeStaticStat<FStat_STAT_StreamingAllocSize>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_StreamingAllocSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamingAllocSize,*pFVar1,
               L"Streaming Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'SummaryRacePreventer'' @ 140f1fc60

void __cdecl _dynamic_initializer_for__SummaryRacePreventer__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&SummaryRacePreventer,4000);
  atexit(_dynamic_atexit_destructor_for__SummaryRacePreventer__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h__Script_CoreUObject_3912534415'' @ 140f1fc90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h__Script_CoreUObject_3912534415__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UTextBuffer @ 141ec5130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextBuffer(void)

{
  if (Z_Registration_Info_UClass_UTextBuffer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextBuffer.OuterSingleton,
               &Z_Construct_UClass_UTextBuffer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextBuffer.OuterSingleton;
}

// `scalar_deleting_destructor' @ 141ec51a0

void * __thiscall
FPackagePathTest::_scalar_deleting_destructor_(FPackagePathTest *this,uint param_1)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&this->ErrorText);
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ec54a0

void * __thiscall
FPackagePathTestSubClass::_scalar_deleting_destructor_(FPackagePathTestSubClass *this,uint param_1)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&this->field_0xf0);
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// atomic<int><int,0> @ 141ec5500

atomic<int> * __thiscall std::atomic<int>::atomic<int><int,0>(atomic<int> *this)

{
  *this = (atomic<int>)0x0;
  return this;
}

// operator<<<FWorldTileLODInfo> @ 141ec5740

void __cdecl
operator<<<FWorldTileLODInfo>
          (FStructuredArchiveSlot param_1,
          TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar10 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    lVar11 = (longlong)(int)local_res10[0];
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res10[0]) {
      iVar9 = local_res10[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FWorldTileLODInfo,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x14,iVar9);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar9) {
        uVar8 = iVar9 - local_res10[0];
        if (((int)(uVar8 | local_res10[0]) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          _Dst = (param_2->AllocatorInstance).Data + lVar11 * 0x14;
          iVar9 = (*piVar1 - uVar8) - uVar10;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x14,(longlong)iVar9 * 0x14);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,
                 (FWorldTileLODInfo *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// operator<<<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> @ 141ec5960

FArchive * __cdecl
operator<<<FWorldTileLODInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FWorldTileLODInfo *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x14);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xccccd)) {
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
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<(param_1,(FWorldTileLODInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14))
              ;
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x414,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FWorldTileLODInfo *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x14);
              DefaultConstructItems<FWorldTileLODInfo,int>(pFVar2,1);
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

// CastChecked<UClass,UObject> @ 141ec6560

UClass * __cdecl CastChecked<UClass,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UClass>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UClass *)param_1;
  }
  pFVar3 = GetTypeName<UClass>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPackage,UPackage> @ 141ec6620

UPackage * __cdecl CastChecked<UPackage,UPackage>(UPackage *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UPackage *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UPackage>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<UPackage,UObject> @ 141ec6660

UPackage * __cdecl CastChecked<UPackage,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPackage>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPackage *)param_1;
  }
  pFVar3 = GetTypeName<UPackage>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UStruct,UObject> @ 141ec6720

UStruct * __cdecl CastChecked<UStruct,UObject>(UObject *param_1)

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
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ClearFlagsAndDissolveClustersFromLoadedObjects<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> @ 141ec67e0

void __cdecl
ClearFlagsAndDissolveClustersFromLoadedObjects<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBase *this;
  FUObjectItem *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this = *(UObjectBase **)pFVar4;
    if (this != (UObjectBase *)0x0) {
      UObjectBase::AtomicallyClearFlags
                (this,RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
      pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
      if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) {
        FUObjectClusterContainer::DissolveCluster(&GUObjectClusters,(UObjectBaseUtility *)this);
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// ClearFlagsAndDissolveClustersFromLoadedObjects<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_> @ 141ec6880

void __cdecl
ClearFlagsAndDissolveClustersFromLoadedObjects<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObjectBase *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141ec691d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_141ec691d:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar12);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141ec6a20;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_141ec6a20:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this = *(UObjectBase **)
            (*(longlong *)&param_1->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (this != (UObjectBase *)0x0) {
      UObjectBase::AtomicallyClearFlags
                (this,RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
      if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) {
        FUObjectClusterContainer::DissolveCluster(&GUObjectClusters,(UObjectBaseUtility *)this);
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// CompareItems<FNameEntryId,int> @ 141ec6ad0

bool __cdecl CompareItems<FNameEntryId,int>(FNameEntryId *param_1,FNameEntryId *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(uint *)(lVar1 + (longlong)param_2) != param_2->Value) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TObjectPtr<UObject>,UObject_*,int> @ 141ec6b00

void __cdecl
ConstructItems<TObjectPtr<UObject>,UObject_*,int>(void *param_1,UObject **param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UObject **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FWorldTileLODInfo,int> @ 141ec6b60

void __cdecl DefaultConstructItems<FWorldTileLODInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 10000;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAsyncLoadEvent,int> @ 141ec6bb0

void __cdecl DestructItems<FAsyncLoadEvent,int>(FAsyncLoadEvent *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Payload).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAsyncPackage::FCompletionCallback,int> @ 141ec6c00

void __cdecl
DestructItems<FAsyncPackage::FCompletionCallback,int>(FCompletionCallback *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Callback;
    do {
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1->Ptr;
      if (this != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
        operator_delete(this,0x18);
      }
      pTVar1 = pTVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFlushRequest,int> @ 141ec6c60

void __cdecl DestructItems<FFlushRequest,int>(FFlushRequest *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Data).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FArchiveStackTraceReader::FSerializeData,int> @ 141ec6ca0

void __cdecl
DestructItems<FArchiveStackTraceReader::FSerializeData,int>(FSerializeData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FullPropertyName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DumpTableDifferences<FNameEntryId> @ 141ec6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DumpTableDifferences<FNameEntryId>
          (FLinkerLoad *param_1,FLinkerLoad *param_2,
          TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *param_4,wchar_t *param_5,
          wchar_t *param_6,int param_7)

{
  TTableItem<FNameEntryId> *pTVar1;
  wchar_t *_Str;
  longlong lVar2;
  code *pcVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FDiffFormatHelper *pFVar13;
  FNameEntry *pFVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  size_t sVar18;
  byte bVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ForElementType<FSetElementId> FVar26;
  ForElementType<unsigned_int> FVar27;
  undefined1 auStack_4d8 [32];
  longlong local_4b8;
  wchar_t *local_4b0;
  int local_4a8;
  wchar_t *local_4a0;
  wchar_t *local_498;
  FScriptContainerElement *local_490;
  undefined1 local_488;
  undefined1 local_487;
  FIdentityFunctor local_486;
  FIdentityFunctor local_485;
  undefined1 local_484 [4];
  ulonglong local_480;
  FString local_478;
  longlong *local_468;
  FNameEntryId *pFStack_460;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  int local_440;
  undefined4 uStack_43c;
  FString local_438;
  FString local_428;
  uint local_418;
  uint uStack_414;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_410;
  undefined4 local_408;
  uint uStack_404;
  uint uStack_400;
  undefined4 uStack_3fc;
  uint local_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b0;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  FIdentityFunctor *local_380;
  wchar_t *local_378;
  TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *local_370;
  TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *local_368;
  wchar_t *local_360;
  undefined4 local_358;
  undefined4 local_354;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FIdentityFunctor *local_310;
  undefined1 local_308 [8];
  undefined1 local_300 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f0;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  undefined1 local_2a8 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  longlong *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  longlong *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  FScriptContainerElement *local_210;
  int local_208;
  int local_204;
  FScriptContainerElement *local_200;
  uint local_1f8;
  FScriptContainerElement *local_1f0;
  int local_1e8;
  int local_1e4;
  FScriptContainerElement *local_1e0;
  uint local_1d8;
  undefined4 local_1b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  uint local_160;
  int local_154;
  undefined1 local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  int local_104;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  local_360 = param_5;
  local_378 = param_6;
  local_370 = param_4;
  local_368 = param_3;
  pFVar13 = FDiffFormatHelper::Get();
  _Str = pFVar13->LineTerminator;
  pFVar13 = FDiffFormatHelper::Get();
  uVar11 = param_3->ArrayNum;
  local_480 = 1;
  local_3d8 = pFVar13->Indent;
  uVar23 = 0;
  local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.Data.ArrayNum = 0;
  local_478.Data.ArrayMax = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  iVar10 = 1;
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar11);
    if (3 < uVar11) {
      uVar24 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_354 = (undefined4)lVar21;
      iVar10 = 1 << ((byte)lVar21 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar10)) {
      local_50 = iVar10;
      TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
                *)local_98);
    }
  }
  uVar11 = param_4->ArrayNum;
  if ((uint)(local_e8._8_4_ - local_b4) < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,uVar11);
    if (uVar11 < 4) {
      iVar10 = 1;
    }
    else {
      uVar24 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_358 = (undefined4)lVar21;
      iVar10 = 1 << ((byte)lVar21 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar10)) {
      local_a0 = iVar10;
      TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
                *)local_e8);
    }
  }
  iVar10 = param_3->ArrayNum;
  uVar24 = uVar23;
  uVar16 = 1;
  if (0 < iVar10) {
    do {
      uVar12 = (uint)uVar24;
      uVar11 = 0;
      if ((int)uVar12 < iVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_4b0 = (wchar_t *)(longlong)iVar10;
        local_4b8 = (longlong)(int)uVar12;
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar22 = (param_3->AllocatorInstance).Data + uVar23;
      pFVar14 = FName::GetEntry((FNameEntryId)*(uint *)pFVar22);
      FNameEntry::GetPlainNameString(pFVar14,&local_438);
      local_210 = local_438.Data.AllocatorInstance.Data;
      local_208 = local_438.Data.ArrayNum;
      local_204 = local_438.Data.ArrayMax;
      local_438.Data.ArrayNum = 0;
      local_438.Data.ArrayMax = 0;
      local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200 = pFVar22;
      local_1f8 = uVar12;
      TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
      ::Emplace<TTableItem<FNameEntryId>_>
                ((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
                  *)local_98,(TTableItem<FNameEntryId> *)local_308,(bool *)&local_210);
      if (local_210 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210);
      }
      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data.AllocatorInstance.Data);
      }
      iVar10 = param_3->ArrayNum;
      uVar23 = uVar23 + 4;
      uVar24 = (ulonglong)(uVar12 + 1);
      uVar16 = local_480;
    } while ((int)(uVar12 + 1) < iVar10);
  }
  uVar24 = 0;
  iVar10 = param_4->ArrayNum;
  uVar23 = uVar24;
  if (0 < iVar10) {
    do {
      uVar12 = (uint)uVar23;
      uVar11 = 0;
      if ((int)uVar12 < iVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_4b0 = (wchar_t *)(longlong)iVar10;
        local_4b8 = (longlong)(int)uVar12;
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar22 = (param_4->AllocatorInstance).Data + uVar24;
      pFVar14 = FName::GetEntry((FNameEntryId)*(uint *)pFVar22);
      FNameEntry::GetPlainNameString(pFVar14,&local_428);
      local_1f0 = local_428.Data.AllocatorInstance.Data;
      local_1e8 = local_428.Data.ArrayNum;
      local_1e4 = local_428.Data.ArrayMax;
      local_428.Data.ArrayNum = 0;
      local_428.Data.ArrayMax = 0;
      local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0 = pFVar22;
      local_1d8 = uVar12;
      TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
      ::Emplace<TTableItem<FNameEntryId>_>
                ((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
                  *)local_e8,(TTableItem<FNameEntryId> *)(local_308 + 4),(bool *)&local_1f0);
      if (local_1f0 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0);
      }
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      iVar10 = param_4->ArrayNum;
      uVar24 = uVar24 + 4;
      uVar23 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < iVar10);
  }
  TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::
  Difference((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
              *)local_98,
             (TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
              *)local_188,
             (TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
              *)local_e8);
  TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::
  Difference((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
              *)local_e8,
             (TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
              *)local_138,
             (TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
              *)local_98);
  local_3d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_3d0._padding_._0_4_ = 0;
  local_3d0.UnvisitedBitMask = 0xffffffff;
  local_3d0._padding_._4_4_ = (undefined4)uVar16;
  local_3d0.CurrentBitIndex = 0;
  local_3d0.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d0);
  }
  pFStack_460 = (FNameEntryId *)CONCAT44(local_3d0._padding_._4_4_,(undefined4)local_3d0._padding_);
  local_468 = (longlong *)local_98;
  uStack_450._4_4_ = local_3d0.CurrentBitIndex;
  uStack_450._0_4_ = local_3d0.UnvisitedBitMask;
  uStack_448._4_4_ = local_3d0._28_4_;
  uStack_448._0_4_ = local_3d0.BaseBitIndex;
  local_440 = local_98._8_4_ - local_64;
  pTStack_458 = local_3d0.Array;
  uStack_278 = CONCAT44(uStack_43c,local_440);
  TStack_298.Array = local_3d0.Array;
  local_2a8._8_8_ = local_468;
  TStack_298._padding_ = (longlong)pFStack_460;
  TStack_298._16_8_ = uStack_450;
  TStack_298._24_8_ = uStack_448;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1b0,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70
                      );
  pFStack_460 = (FNameEntryId *)pTVar15->_padding_;
  pTVar4 = pTVar15->Array;
  uVar5._0_4_ = pTVar15->UnvisitedBitMask;
  uVar5._4_4_ = pTVar15->CurrentBitIndex;
  uStack_448 = *(undefined8 *)&pTVar15->BaseBitIndex;
  pTStack_458 = pTVar4;
  uStack_450 = uVar5;
  while( true ) {
    uVar7 = local_2a8._8_8_;
    if ((int)*(longlong *)(local_2a8._8_8_ + 8) - *(int *)(local_2a8._8_8_ + 0x34) !=
        (int)uStack_278) {
      local_488 = 0;
      `TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_488);
    }
    if (((TStack_298.CurrentBitIndex == uVar5._4_4_) && (TStack_298.Array == pTVar4)) &&
       ((undefined1 *)uVar7 == local_98)) break;
    pTVar1 = (TTableItem<FNameEntryId> *)
             (*(longlong *)uVar7 + (longlong)TStack_298.CurrentBitIndex * 0x28);
    uVar11 = GetTypeHash(pTVar1);
    if (local_e8._8_4_ != local_b4) {
      FVar26 = (ForElementType<FSetElementId>)local_b0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FVar26 = local_a8;
      }
      iVar10 = *(int *)((longlong)FVar26 + (ulonglong)(local_a0 - 1U & uVar11) * 4);
      while (iVar10 != -1) {
        lVar21 = (longlong)iVar10 * 0x28;
        bVar9 = operator==((TTableItem<FNameEntryId> *)(local_e8._0_8_ + lVar21),pTVar1);
        if (bVar9) {
          pFVar22 = (FScriptContainerElement *)(local_e8._0_8_ + lVar21);
          if ((pFVar22 != (FScriptContainerElement *)0x0) &&
             (pTVar1->Item->Value != **(uint **)(pFVar22 + 0x10))) {
            TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
            ::Emplace<TTableItem<FNameEntryId>_const_&>
                      ((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
                        *)local_188,(TTableItem<FNameEntryId> *)local_300,(bool *)pTVar1);
            TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
            ::Emplace<TTableItem<FNameEntryId>_const_&>
                      ((TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>
                        *)local_138,(TTableItem<FNameEntryId> *)local_2a8,(bool *)pFVar22);
          }
          break;
        }
        iVar10 = *(int *)(local_e8._0_8_ + lVar21 + 0x20);
      }
    }
    TStack_298.UnvisitedBitMask = TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
  }
  local_380 = &local_486;
  if (0 < local_188._8_4_ - local_154) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_188);
    iVar10 = local_188._8_4_ - local_154;
    if ((iVar10 < 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)local_188._0_8_,iVar10,
               local_486,
               (FElementCompareClass<_void___cdecl_DumpTableDifferences<FNameEntryId>(FLinkerLoad_*,FLinkerLoad_*,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>
                *)&local_380);
  }
  uVar11 = local_140;
  uVar23 = (ulonglong)local_140;
  if ((ForElementType<FSetElementId>)local_148.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
  }
  if (uVar11 != 0) {
    uVar12 = uVar11;
    if (uVar11 < 2) {
      if ((ForElementType<FSetElementId>)local_148.Data != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_141ec73a5;
      }
    }
    else {
LAB_141ec73a5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,uVar12,4);
    }
    if (0 < (int)uVar11) {
      uVar24 = 0;
      do {
        FVar20.Data = (FScriptContainerElement *)local_150;
        if ((ForElementType<FSetElementId>)local_148.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_148.Data;
        }
        uVar16 = uVar24 & (longlong)(int)uVar11 - 1U;
        uVar24 = uVar24 + 1;
        *(undefined4 *)((longlong)FVar20.Data + uVar16 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  uVar23 = 0;
  uVar11 = (uint)local_480;
  if (local_140 != 0) {
    local_418 = 0;
    pTStack_410 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    uStack_404 = 0;
    uStack_400 = 0;
    uVar24 = uVar23;
    uStack_414 = uVar11;
    if (local_160 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_168;
      }
      uVar12 = *(uint *)FVar27;
      uVar16 = uVar23;
      while (uVar12 == 0) {
        uStack_400 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_400;
        iVar10 = (int)uVar24;
        local_418 = iVar10 + 1;
        uVar24 = (ulonglong)local_418;
        if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_418)
        goto LAB_141ec74b7;
        uVar12 = ((uint *)((longlong)FVar27 + 4))[iVar10];
      }
      uStack_414 = -uVar12 & uVar12;
      uVar24 = (ulonglong)uStack_414 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_390 = (int)lVar21;
      uStack_404 = local_390 + -1 + uStack_400;
      uVar24 = (ulonglong)uStack_404;
      if ((int)local_160 < (int)uStack_404) {
LAB_141ec74b7:
        uVar24 = (ulonglong)local_160;
        uStack_404 = local_160;
      }
    }
    local_408 = 0xffffffff;
    local_300._8_8_ = local_188;
    local_2f0._padding_ = CONCAT44(uStack_414,local_418);
    local_2f0.CurrentBitIndex = uStack_404;
    local_2f0.UnvisitedBitMask = 0xffffffff;
    local_2f0._28_4_ = uStack_3fc;
    local_2f0.BaseBitIndex = uStack_400;
    local_2f0.Array = pTStack_410;
    if ((int)uVar24 < (int)local_160) {
      do {
        pTVar1 = (TTableItem<FNameEntryId> *)
                 (*(longlong *)local_300._8_8_ + (longlong)(int)uVar24 * 0x28);
        uVar12 = GetTypeHash(pTVar1);
        uVar12 = local_140 - 1 & uVar12;
        *(uint *)((longlong)&pTVar1[1].Key.Data.AllocatorInstance.Data + 4) = uVar12;
        FVar20.Data = (FScriptContainerElement *)local_150;
        if ((ForElementType<FSetElementId>)local_148.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_148.Data;
        }
        uVar16 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)&pTVar1[1].Key.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar20.Data + uVar16 * 4);
        *(int *)((longlong)FVar20.Data + uVar16 * 4) = (int)uVar24;
        local_2f0.UnvisitedBitMask = local_2f0.UnvisitedBitMask & ~local_2f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f0);
        uVar24 = (ulonglong)(uint)local_2f0.CurrentBitIndex;
      } while (local_2f0.CurrentBitIndex < (local_2f0.Array)->NumBits);
    }
  }
  local_310 = &local_485;
  if (0 < local_138._8_4_ - local_104) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_138);
    iVar10 = local_138._8_4_ - local_104;
    if ((iVar10 < 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_2>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)local_138._0_8_,iVar10,
               local_485,
               (FElementCompareClass<_void___cdecl_DumpTableDifferences<FNameEntryId>(FLinkerLoad_*,FLinkerLoad_*,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>
                *)&local_310);
  }
  uVar12 = local_f0;
  uVar24 = (ulonglong)local_f0;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
  }
  if (uVar12 == 0) goto LAB_141ec76b0;
  uVar25 = uVar12;
  if (uVar12 < 2) {
    if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
      uVar25 = 0;
      goto LAB_141ec764e;
    }
  }
  else {
LAB_141ec764e:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar25,4);
  }
  if (0 < (int)uVar12) {
    uVar16 = uVar23;
    do {
      FVar20.Data = (FScriptContainerElement *)local_100;
      if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar20.Data = local_f8.Data;
      }
      uVar17 = uVar16 & (longlong)(int)uVar12 - 1U;
      uVar16 = uVar16 + 1;
      *(undefined4 *)((longlong)FVar20.Data + uVar17 * 4) = 0xffffffff;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
LAB_141ec76b0:
  if (local_f0 != 0) {
    pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    local_3f8 = 0;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uStack_3f4 = uVar11;
    if (local_110 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_118;
      }
      uVar12 = *(uint *)FVar27;
      uVar24 = uVar23;
      while (uVar12 == 0) {
        uStack_3e0 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uStack_3e0;
        iVar10 = (int)uVar23;
        local_3f8 = iVar10 + 1;
        uVar23 = (ulonglong)local_3f8;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_3f8)
        goto LAB_141ec7767;
        uVar12 = ((uint *)((longlong)FVar27 + 4))[iVar10];
      }
      uStack_3f4 = -uVar12 & uVar12;
      uVar23 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_38c = (int)lVar21;
      uStack_3e4 = (uStack_3e0 - 1) + local_38c;
      uVar23 = (ulonglong)uStack_3e4;
      if ((int)local_110 < (int)uStack_3e4) {
LAB_141ec7767:
        uVar23 = (ulonglong)local_110;
        uStack_3e4 = local_110;
      }
    }
    local_3e8 = 0xffffffff;
    local_2d0 = (longlong *)local_138;
    local_2c8._padding_ = CONCAT44(uStack_3f4,local_3f8);
    local_2c8.CurrentBitIndex = uStack_3e4;
    local_2c8.UnvisitedBitMask = 0xffffffff;
    local_2c8._28_4_ = uStack_3dc;
    local_2c8.BaseBitIndex = uStack_3e0;
    local_2c8.Array = pTStack_3f0;
    if ((int)uVar23 < (int)local_110) {
      do {
        pTVar1 = (TTableItem<FNameEntryId> *)(*local_2d0 + (longlong)(int)uVar23 * 0x28);
        uVar12 = GetTypeHash(pTVar1);
        uVar12 = local_f0 - 1 & uVar12;
        *(uint *)((longlong)&pTVar1[1].Key.Data.AllocatorInstance.Data + 4) = uVar12;
        FVar20.Data = (FScriptContainerElement *)local_100;
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_f8.Data;
        }
        uVar24 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)&pTVar1[1].Key.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar20.Data + uVar24 * 4);
        *(int *)((longlong)FVar20.Data + uVar24 * 4) = (int)uVar23;
        local_2c8.UnvisitedBitMask = local_2c8.UnvisitedBitMask & ~local_2c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
        uVar23 = (ulonglong)(uint)local_2c8.CurrentBitIndex;
      } while (local_2c8.CurrentBitIndex < (local_2c8.Array)->NumBits);
    }
  }
  local_3b0._padding_._0_4_ = 0;
  local_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
  local_3b0.UnvisitedBitMask = 0xffffffff;
  local_3b0.CurrentBitIndex = 0;
  local_3b0.BaseBitIndex = 0;
  local_3b0._padding_._4_4_ = uVar11;
  if (local_160 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b0);
  }
  uVar12 = local_160;
  pFStack_460 = (FNameEntryId *)CONCAT44(local_3b0._padding_._4_4_,(undefined4)local_3b0._padding_);
  local_468 = (longlong *)local_188;
  uStack_450._4_4_ = local_3b0.CurrentBitIndex;
  uStack_450._0_4_ = local_3b0.UnvisitedBitMask;
  uStack_448._4_4_ = local_3b0._28_4_;
  uStack_448._0_4_ = local_3b0.BaseBitIndex;
  local_440 = local_188._8_4_ - local_154;
  pTStack_458 = local_3b0.Array;
  uVar11 = local_160 & 0xffffffe0;
  iVar10 = (int)local_160 >> 5;
  bVar19 = (byte)local_160;
  uStack_248 = CONCAT44(uStack_43c,local_440);
  TStack_268.Array = local_3b0.Array;
  local_270 = local_468;
  TStack_268._padding_ = (longlong)pFStack_460;
  TStack_268._16_8_ = uStack_450;
  TStack_268._24_8_ = uStack_448;
  if (((int)local_160 < 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pwVar6 = local_3d8;
  if (uVar12 != local_160) {
    FVar27 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
    if (local_168 != (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_168;
    }
    uVar12 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar21 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = local_160;
      if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_141ec7971;
      uVar12 = ((uint *)((longlong)FVar27 + 4))[lVar21];
    }
    uVar23 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_388 = (int)lVar21;
    uVar12 = local_388 + -1 + uVar11;
    if ((int)local_160 < (int)uVar12) {
      uVar12 = local_160;
    }
  }
LAB_141ec7971:
  uVar11 = 0;
  while( true ) {
    plVar8 = local_270;
    if ((int)local_270[1] - *(int *)((longlong)local_270 + 0x34) != (int)uStack_248) {
      local_487 = 0;
      `TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_487);
    }
    uVar25 = local_110;
    lVar21 = (longlong)TStack_268.CurrentBitIndex;
    if (((TStack_268.CurrentBitIndex == uVar12) &&
        (TStack_268.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10))) &&
       (plVar8 == (longlong *)local_188)) break;
    lVar2 = *plVar8;
    sVar18 = wcslen(pwVar6);
    FString::AppendChars(&local_478,pwVar6,(int)sVar18);
    pFVar14 = FName::GetEntry((FNameEntryId)**(uint **)(lVar2 + lVar21 * 0x28 + 0x10));
    FNameEntry::GetPlainNameString(pFVar14,&local_340);
    FString::PrintfImpl(&local_350,L"-[%d] %s");
    iVar10 = local_350.Data.ArrayNum + -1;
    if (local_350.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_478,(wchar_t *)local_350.Data.AllocatorInstance.Data,iVar10);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    sVar18 = wcslen(_Str);
    FString::AppendChars(&local_478,_Str,(int)sVar18);
    TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
  }
  uStack_450._4_4_ = uVar11;
  uStack_448._0_4_ = uVar11;
  if (local_110 != 0) {
    FVar27 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_118;
    }
    uVar12 = *(uint *)FVar27;
    while (uVar12 == 0) {
      lVar21 = (longlong)(int)uVar11;
      uStack_448._0_4_ = (uint)uStack_448 + 0x20;
      uVar11 = uVar11 + 1;
      uStack_450._4_4_ = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_141ec7b43;
      uVar12 = ((uint *)((longlong)FVar27 + 4))[lVar21];
    }
    local_480 = (ulonglong)(-uVar12 & uVar12);
    uVar23 = local_480 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_384 = (int)lVar21;
    uStack_450._4_4_ = ((uint)uStack_448 - 1) + local_384;
    if ((int)local_110 < (int)uStack_450._4_4_) {
      uStack_450._4_4_ = local_110;
    }
  }
LAB_141ec7b43:
  local_468 = (longlong *)local_138;
  uVar12 = local_110 & 0xffffffe0;
  pTStack_458 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  local_440 = local_138._8_4_ - local_104;
  uStack_450._0_4_ = 0xffffffff;
  pFStack_460 = (FNameEntryId *)CONCAT44((int)local_480,uVar11);
  uStack_448._4_4_ = local_1b4;
  iVar10 = (int)local_110 >> 5;
  uStack_218 = CONCAT44(uStack_43c,local_440);
  bVar19 = (byte)local_110;
  TStack_238.UnvisitedBitMask = 0xffffffff;
  TStack_238.CurrentBitIndex = uStack_450._4_4_;
  TStack_238.BaseBitIndex = (uint)uStack_448;
  TStack_238._28_4_ = local_1b4;
  local_240 = local_468;
  TStack_238._padding_ = (longlong)pFStack_460;
  TStack_238.Array = pTStack_458;
  if (((int)local_110 < 0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pwVar6 = local_3d8;
  if (uVar25 != local_110) {
    FVar27 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_118;
    }
    uVar11 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar21 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar25 = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_141ec7c5c;
      uVar11 = ((uint *)((longlong)FVar27 + 4))[lVar21];
    }
    uVar23 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar25 = (int)lVar21 + -1 + uVar12;
    if ((int)local_110 < (int)uVar25) {
      uVar25 = local_110;
    }
  }
LAB_141ec7c5c:
  while( true ) {
    plVar8 = local_240;
    if ((int)local_240[1] - *(int *)((longlong)local_240 + 0x34) != (int)uStack_218) {
      `TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_484);
    }
    lVar21 = (longlong)TStack_238.CurrentBitIndex;
    if (((TStack_238.CurrentBitIndex == uVar25) &&
        (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
       (plVar8 == (longlong *)local_138)) break;
    lVar2 = *plVar8;
    sVar18 = wcslen(pwVar6);
    FString::AppendChars(&local_478,pwVar6,(int)sVar18);
    pFVar14 = FName::GetEntry((FNameEntryId)**(uint **)(lVar2 + lVar21 * 0x28 + 0x10));
    FNameEntry::GetPlainNameString(pFVar14,&local_320);
    FString::PrintfImpl(&local_330,L"+[%d] %s");
    iVar10 = local_330.Data.ArrayNum + -1;
    if (local_330.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_478,(wchar_t *)local_330.Data.AllocatorInstance.Data,iVar10);
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    sVar18 = wcslen(_Str);
    FString::AppendChars(&local_478,_Str,(int)sVar18);
    TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
  }
  if (2 < (byte)LogArchiveDiff._0_1_) {
    local_490 = (FScriptContainerElement *)L"";
    if (local_478.Data.ArrayNum != 0) {
      local_490 = local_478.Data.AllocatorInstance.Data;
    }
    local_4a8 = local_370->ArrayNum;
    local_4a0 = local_378;
    local_4b0 = local_378;
    local_4b8 = CONCAT44(local_4b8._4_4_,local_368->ArrayNum);
    local_498 = _Str;
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
  }
  local_f0 = 0;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  local_140 = 0;
  if ((ForElementType<FSetElementId>)local_148.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_148.Data);
  }
  TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpTableDifferences<FObjectExport> @ 141ec7ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DumpTableDifferences<FObjectExport>
          (FLinkerLoad *param_1,FLinkerLoad *param_2,
          TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_4,wchar_t *param_5,
          wchar_t *param_6,int param_7)

{
  TTableItem<FObjectExport> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  FLinkerLoad *pFVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  FDiffFormatHelper *pFVar13;
  FString *pFVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  size_t sVar18;
  byte bVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  FObjectExport *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ForElementType<FSetElementId> FVar27;
  ulonglong uVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  wchar_t *local_4d0;
  int local_4c8;
  wchar_t *local_4c0;
  wchar_t *local_4b8;
  FScriptContainerElement *local_4b0;
  undefined1 local_4a8;
  undefined1 local_4a7;
  FIdentityFunctor local_4a6;
  FIdentityFunctor local_4a5;
  undefined1 local_4a4 [4];
  FString local_4a0;
  longlong *local_490;
  undefined8 uStack_488;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  int local_468;
  undefined4 uStack_464;
  undefined8 local_460;
  uint local_458;
  uint uStack_454;
  undefined1 *puStack_450;
  undefined4 local_448;
  uint uStack_444;
  uint uStack_440;
  undefined4 uStack_43c;
  uint local_438;
  uint uStack_434;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_430;
  undefined4 local_428;
  uint uStack_424;
  uint uStack_420;
  undefined4 uStack_41c;
  wchar_t *local_418;
  FLinkerLoad *local_410;
  wchar_t *local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  FIdentityFunctor *local_3b0;
  FIdentityFunctor *local_3a8;
  FLinkerLoad *local_3a0;
  wchar_t *local_398;
  TArray<FObjectExport,TSizedDefaultAllocator<32>_> *local_390;
  TArray<FObjectExport,TSizedDefaultAllocator<32>_> *local_388;
  wchar_t *local_380;
  undefined4 local_378;
  FString local_370;
  FString local_360;
  undefined4 local_350;
  undefined1 local_34c [8];
  undefined1 local_344 [16];
  uint uStack_334;
  undefined1 *puStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  longlong *local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_310;
  undefined1 local_2f0 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  FScriptContainerElement *local_258;
  int local_250;
  int local_24c;
  FObjectExport *local_248;
  uint local_240;
  FScriptContainerElement *local_238;
  int local_230;
  int local_22c;
  FObjectExport *local_228;
  uint local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  undefined4 local_19c;
  undefined1 local_198 [32];
  ForElementType<unsigned_int> local_178;
  uint local_170;
  int local_164;
  undefined1 local_160 [8];
  ForAnyElementType local_158;
  uint local_150;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  uint local_120;
  int local_114;
  undefined1 local_110 [8];
  ForAnyElementType local_108;
  uint local_100;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  local_380 = param_5;
  local_398 = param_6;
  local_410 = param_2;
  local_3a0 = param_1;
  local_390 = param_4;
  local_388 = param_3;
  pFVar13 = FDiffFormatHelper::Get();
  local_408 = pFVar13->LineTerminator;
  pFVar13 = FDiffFormatHelper::Get();
  uVar25 = param_3->ArrayNum;
  uVar24 = 0;
  local_418 = pFVar13->Indent;
  local_460 = 1;
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (ForElementType<unsigned_int>)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = -1;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  iVar12 = 1;
  if (uVar25 != 0) {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar25);
    if (3 < uVar25) {
      uVar30 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_378 = (undefined4)lVar21;
      iVar12 = 1 << ((byte)lVar21 & 0x1f);
    }
    if ((local_60 == 0) || (local_60 < iVar12)) {
      local_60 = iVar12;
      TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_a8);
    }
  }
  uVar25 = param_4->ArrayNum;
  if ((uint)(local_f8._8_4_ - local_c4) < uVar25) {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_f8,uVar25);
    if (uVar25 < 4) {
      iVar12 = 1;
    }
    else {
      uVar30 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_350 = (undefined4)lVar21;
      iVar12 = 1 << ((byte)lVar21 & 0x1f);
    }
    if ((local_b0 == 0) || (local_b0 < iVar12)) {
      local_b0 = iVar12;
      TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_f8);
    }
  }
  iVar12 = param_3->ArrayNum;
  uVar31 = 1;
  if (0 < iVar12) {
    do {
      uVar25 = 0;
      if ((int)uVar24 < iVar12) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_4d0 = (wchar_t *)(longlong)iVar12;
        local_4d8 = (longlong)(int)uVar24;
        bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar22 = (FObjectExport *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar24 * 0x68);
      pFVar14 = GetTableKey(&local_208,param_1,pFVar22);
      local_258 = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250 = (pFVar14->Data).ArrayNum;
      local_24c = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      local_248 = pFVar22;
      local_240 = uVar24;
      TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
      ::Emplace<TTableItem<FObjectExport>_>
                ((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                  *)local_a8,(TTableItem<FObjectExport> *)local_34c,(bool *)&local_258);
      if (local_258 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      iVar12 = param_3->ArrayNum;
      uVar24 = uVar24 + 1;
      uVar31 = local_460;
    } while ((int)uVar24 < iVar12);
  }
  iVar12 = param_4->ArrayNum;
  uVar25 = 0;
  if (0 < iVar12) {
    do {
      uVar24 = 0;
      if ((int)uVar25 < iVar12) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_4d0 = (wchar_t *)(longlong)iVar12;
        local_4d8 = (longlong)(int)uVar25;
        bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar22 = (FObjectExport *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x68);
      pFVar14 = GetTableKey(&local_1f8,param_2,pFVar22);
      local_238 = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230 = (pFVar14->Data).ArrayNum;
      local_22c = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      local_228 = pFVar22;
      local_220 = uVar25;
      TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
      ::Emplace<TTableItem<FObjectExport>_>
                ((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                  *)local_f8,(TTableItem<FObjectExport> *)(local_34c + 4),(bool *)&local_238);
      if (local_238 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      iVar12 = param_4->ArrayNum;
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < iVar12);
  }
  TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
  ::Difference((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_a8,
               (TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_198,
               (TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_f8);
  TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
  ::Difference((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_f8,
               (TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_148,
               (TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                *)local_a8);
  local_400.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_400._padding_._0_4_ = 0;
  local_400._padding_._4_4_ = (undefined4)uVar31;
  local_400.UnvisitedBitMask = 0xffffffff;
  local_400.CurrentBitIndex = 0;
  local_400.BaseBitIndex = 0;
  if (local_80 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_400);
  }
  uStack_488 = (FObjectExport *)CONCAT44(local_400._padding_._4_4_,(undefined4)local_400._padding_);
  local_490 = (longlong *)local_a8;
  uStack_478._4_4_ = local_400.CurrentBitIndex;
  uStack_478._0_4_ = local_400.UnvisitedBitMask;
  uStack_470._4_4_ = local_400._28_4_;
  uStack_470._0_4_ = local_400.BaseBitIndex;
  local_468 = local_a8._8_4_ - local_74;
  pTStack_480 = local_400.Array;
  uStack_2c0 = CONCAT44(uStack_464,local_468);
  TStack_2e0.Array = local_400.Array;
  local_2f0._8_8_ = local_490;
  TStack_2e0._padding_ = (longlong)uStack_488;
  TStack_2e0._16_8_ = uStack_478;
  TStack_2e0._24_8_ = uStack_470;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1d8,(TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),local_80
                      );
  pFVar7 = local_410;
  uStack_488 = (FObjectExport *)pTVar15->_padding_;
  pTVar4 = pTVar15->Array;
  uVar31._0_4_ = pTVar15->UnvisitedBitMask;
  uVar31._4_4_ = pTVar15->CurrentBitIndex;
  uStack_470 = *(undefined8 *)&pTVar15->BaseBitIndex;
  pTStack_480 = pTVar4;
  uStack_478 = uVar31;
  while( true ) {
    uVar9 = local_2f0._8_8_;
    if ((int)*(longlong *)(local_2f0._8_8_ + 8) - *(int *)(local_2f0._8_8_ + 0x34) !=
        (int)uStack_2c0) {
      local_4a8 = 0;
      `TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a8);
    }
    uVar5 = local_460;
    if (((TStack_2e0.CurrentBitIndex == uVar31._4_4_) && (TStack_2e0.Array == pTVar4)) &&
       ((undefined1 *)uVar9 == local_a8)) break;
    pTVar1 = (TTableItem<FObjectExport> *)
             (*(longlong *)uVar9 + (longlong)TStack_2e0.CurrentBitIndex * 0x28);
    uVar25 = GetTypeHash(pTVar1);
    if (local_f8._8_4_ != local_c4) {
      FVar27 = (ForElementType<FSetElementId>)local_c0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FVar27 = local_b8;
      }
      iVar12 = *(int *)((longlong)FVar27 + (ulonglong)(local_b0 - 1U & uVar25) * 4);
      while (iVar12 != -1) {
        lVar21 = (longlong)iVar12 * 0x28;
        bVar11 = operator==((TTableItem<FObjectExport> *)(local_f8._0_8_ + lVar21),pTVar1);
        if (bVar11) {
          pFVar23 = (FScriptContainerElement *)(local_f8._0_8_ + lVar21);
          if ((pFVar23 != (FScriptContainerElement *)0x0) &&
             (bVar11 = CompareTableItem(param_1,pFVar7,pTVar1->Item,
                                        *(FObjectExport **)(pFVar23 + 0x10)), !bVar11)) {
            TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
            ::Emplace<TTableItem<FObjectExport>_const_&>
                      ((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                        *)local_198,(TTableItem<FObjectExport> *)local_344,(bool *)pTVar1);
            TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
            ::Emplace<TTableItem<FObjectExport>_const_&>
                      ((TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>
                        *)local_148,(TTableItem<FObjectExport> *)local_2f0,(bool *)pFVar23);
          }
          break;
        }
        iVar12 = *(int *)(local_f8._0_8_ + lVar21 + 0x20);
      }
    }
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  local_3b0 = &local_4a6;
  if (0 < local_198._8_4_ - local_164) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_198);
    iVar12 = local_198._8_4_ - local_164;
    if ((iVar12 < 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)local_198._0_8_,iVar12,
               local_4a6,
               (FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectExport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>
                *)&local_3b0);
  }
  uVar25 = local_150;
  uVar30 = (ulonglong)local_150;
  if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,0,4);
  }
  if (uVar25 != 0) {
    uVar24 = uVar25;
    if (uVar25 < 2) {
      if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
        uVar24 = 0;
        goto LAB_141ec85c2;
      }
    }
    else {
LAB_141ec85c2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,uVar24,4);
    }
    if (0 < (int)uVar25) {
      uVar28 = 0;
      do {
        FVar20.Data = (FScriptContainerElement *)local_160;
        if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_158.Data;
        }
        uVar16 = uVar28 & (longlong)(int)uVar25 - 1U;
        uVar28 = uVar28 + 1;
        *(undefined4 *)((longlong)FVar20.Data + uVar16 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  uVar30 = 0;
  uVar25 = (uint)uVar5;
  if (local_150 != 0) {
    local_458 = 0;
    puStack_450 = local_198 + 0x10;
    uStack_444 = 0;
    uStack_440 = 0;
    uVar28 = uVar30;
    uStack_454 = uVar25;
    if (local_170 != 0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_198 + 0x10);
      if (local_178 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_178;
      }
      uVar24 = *(uint *)FVar29;
      uVar16 = uVar30;
      while (uVar24 == 0) {
        uStack_440 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_440;
        iVar12 = (int)uVar28;
        local_458 = iVar12 + 1;
        uVar28 = (ulonglong)local_458;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_458)
        goto LAB_141ec86d8;
        uVar24 = ((uint *)((longlong)FVar29 + 4))[iVar12];
      }
      uStack_454 = -uVar24 & uVar24;
      uVar28 = (ulonglong)uStack_454 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_3c0 = (int)lVar21;
      uStack_444 = local_3c0 + -1 + uStack_440;
      uVar28 = (ulonglong)uStack_444;
      if ((int)local_170 < (int)uStack_444) {
LAB_141ec86d8:
        uVar28 = (ulonglong)local_170;
        uStack_444 = local_170;
      }
    }
    local_448 = 0xffffffff;
    local_344._4_8_ = local_198;
    uStack_334 = uStack_454;
    local_344._12_4_ = local_458;
    local_328 = CONCAT44(uStack_444,0xffffffff);
    uStack_320 = CONCAT44(uStack_43c,uStack_440);
    puStack_330 = puStack_450;
    if ((int)uVar28 < (int)local_170) {
      do {
        pTVar1 = (TTableItem<FObjectExport> *)
                 (*(longlong *)local_344._4_8_ + (longlong)(int)uVar28 * 0x28);
        uVar24 = GetTypeHash(pTVar1);
        uVar24 = local_150 - 1 & uVar24;
        *(uint *)((longlong)&pTVar1[1].Key.Data.AllocatorInstance.Data + 4) = uVar24;
        FVar20.Data = (FScriptContainerElement *)local_160;
        if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_158.Data;
        }
        uVar16 = (longlong)(int)local_150 - 1U & (longlong)(int)uVar24;
        *(undefined4 *)&pTVar1[1].Key.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar20.Data + uVar16 * 4);
        *(int *)((longlong)FVar20.Data + uVar16 * 4) = (int)uVar28;
        local_328 = CONCAT44(local_328._4_4_,(uint)local_328 & ~uStack_334);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_344 + 0xc));
        uVar28 = (ulonglong)local_328._4_4_;
      } while ((int)local_328._4_4_ < *(int *)(puStack_330 + 0x18));
    }
  }
  local_3a8 = &local_4a5;
  if (0 < local_148._8_4_ - local_114) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_148);
    iVar12 = local_148._8_4_ - local_114;
    if ((iVar12 < 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_2>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)local_148._0_8_,iVar12,
               local_4a5,
               (FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectExport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>
                *)&local_3a8);
  }
  uVar24 = local_100;
  uVar28 = (ulonglong)local_100;
  if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,4);
  }
  if (uVar24 == 0) goto LAB_141ec88d1;
  uVar26 = uVar24;
  if (uVar24 < 2) {
    if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
      uVar26 = 0;
      goto LAB_141ec8868;
    }
  }
  else {
LAB_141ec8868:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,uVar26,4);
  }
  if (0 < (int)uVar24) {
    uVar16 = uVar30;
    do {
      FVar20.Data = (FScriptContainerElement *)local_110;
      if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
        FVar20.Data = local_108.Data;
      }
      uVar17 = uVar16 & (longlong)(int)uVar24 - 1U;
      uVar16 = uVar16 + 1;
      *(undefined4 *)((longlong)FVar20.Data + uVar17 * 4) = 0xffffffff;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
LAB_141ec88d1:
  if (local_100 != 0) {
    pTStack_430 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    local_438 = 0;
    uStack_424 = 0;
    uStack_420 = 0;
    uStack_434 = uVar25;
    if (local_120 != 0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
      if (local_128 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_128;
      }
      uVar24 = *(uint *)FVar29;
      uVar28 = uVar30;
      while (uVar24 == 0) {
        uStack_420 = (int)uVar28 + 0x20;
        uVar28 = (ulonglong)uStack_420;
        iVar12 = (int)uVar30;
        local_438 = iVar12 + 1;
        uVar30 = (ulonglong)local_438;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_438)
        goto LAB_141ec8988;
        uVar24 = ((uint *)((longlong)FVar29 + 4))[iVar12];
      }
      uStack_434 = -uVar24 & uVar24;
      uVar30 = (ulonglong)uStack_434 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_3bc = (int)lVar21;
      uStack_424 = (uStack_420 - 1) + local_3bc;
      uVar30 = (ulonglong)uStack_424;
      if ((int)local_120 < (int)uStack_424) {
LAB_141ec8988:
        uVar30 = (ulonglong)local_120;
        uStack_424 = local_120;
      }
    }
    local_428 = 0xffffffff;
    local_318 = (longlong *)local_148;
    local_310._padding_ = CONCAT44(uStack_434,local_438);
    local_310.CurrentBitIndex = uStack_424;
    local_310.UnvisitedBitMask = 0xffffffff;
    local_310._28_4_ = uStack_41c;
    local_310.BaseBitIndex = uStack_420;
    local_310.Array = pTStack_430;
    if ((int)uVar30 < (int)local_120) {
      do {
        pTVar1 = (TTableItem<FObjectExport> *)(*local_318 + (longlong)(int)uVar30 * 0x28);
        uVar24 = GetTypeHash(pTVar1);
        uVar24 = local_100 - 1 & uVar24;
        *(uint *)((longlong)&pTVar1[1].Key.Data.AllocatorInstance.Data + 4) = uVar24;
        FVar20.Data = (FScriptContainerElement *)local_110;
        if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_108.Data;
        }
        uVar28 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar24;
        *(undefined4 *)&pTVar1[1].Key.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar20.Data + uVar28 * 4);
        *(int *)((longlong)FVar20.Data + uVar28 * 4) = (int)uVar30;
        local_310.UnvisitedBitMask = local_310.UnvisitedBitMask & ~local_310._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_310);
        uVar30 = (ulonglong)(uint)local_310.CurrentBitIndex;
      } while (local_310.CurrentBitIndex < (local_310.Array)->NumBits);
    }
  }
  local_3e0._padding_._0_4_ = 0;
  local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
  local_3e0.UnvisitedBitMask = 0xffffffff;
  local_3e0.CurrentBitIndex = 0;
  local_3e0.BaseBitIndex = 0;
  local_3e0._padding_._4_4_ = uVar25;
  if (local_170 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
  }
  uVar24 = local_170;
  uStack_488 = (FObjectExport *)CONCAT44(local_3e0._padding_._4_4_,(undefined4)local_3e0._padding_);
  local_490 = (longlong *)local_198;
  uStack_478._4_4_ = local_3e0.CurrentBitIndex;
  uStack_478._0_4_ = local_3e0.UnvisitedBitMask;
  uStack_470._4_4_ = local_3e0._28_4_;
  uStack_470._0_4_ = local_3e0.BaseBitIndex;
  local_468 = local_198._8_4_ - local_164;
  pTStack_480 = local_3e0.Array;
  uVar25 = local_170 & 0xffffffe0;
  iVar12 = (int)local_170 >> 5;
  bVar19 = (byte)local_170;
  uStack_290 = CONCAT44(uStack_464,local_468);
  TStack_2b0.Array = local_3e0.Array;
  local_2b8 = local_490;
  TStack_2b0._padding_ = (longlong)uStack_488;
  TStack_2b0._16_8_ = uStack_478;
  TStack_2b0._24_8_ = uStack_470;
  if (((int)local_170 < 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = local_3a0;
  pwVar8 = local_408;
  pwVar6 = local_418;
  if (uVar24 != local_170) {
    FVar29 = (ForElementType<unsigned_int>)((longlong)local_198 + 0x10);
    if (local_178 != (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_178;
    }
    uVar24 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar12 * 4);
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar12;
      uVar25 = uVar25 + 0x20;
      iVar12 = iVar12 + 1;
      uVar24 = local_170;
      if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_141ec8ba0;
      uVar24 = ((uint *)((longlong)FVar29 + 4))[lVar21];
    }
    uVar30 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_3b8 = (int)lVar21;
    uVar24 = local_3b8 + -1 + uVar25;
    if ((int)local_170 < (int)uVar24) {
      uVar24 = local_170;
    }
  }
LAB_141ec8ba0:
  while( true ) {
    plVar10 = local_2b8;
    if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
      local_4a7 = 0;
      `TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a7);
    }
    uVar25 = local_120;
    lVar21 = (longlong)TStack_2b0.CurrentBitIndex;
    if (((TStack_2b0.CurrentBitIndex == uVar24) &&
        (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10))) &&
       (plVar10 == (longlong *)local_198)) break;
    lVar2 = *plVar10;
    sVar18 = wcslen(pwVar6);
    FString::AppendChars(&local_4a0,pwVar6,(int)sVar18);
    ConvertItemToText(&local_1e8,*(FObjectExport **)(lVar2 + lVar21 * 0x28 + 0x10),pFVar7);
    FString::PrintfImpl(&local_370,L"-[%d] %s");
    iVar12 = local_370.Data.ArrayNum + -1;
    if (local_370.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    FString::AppendChars(&local_4a0,(wchar_t *)local_370.Data.AllocatorInstance.Data,iVar12);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    sVar18 = wcslen(pwVar8);
    FString::AppendChars(&local_4a0,pwVar8,(int)sVar18);
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  iVar12 = 0;
  uVar24 = (uint)local_460;
  uStack_470._0_4_ = 0;
  uStack_478._4_4_ = 0;
  if (local_120 != 0) {
    FVar29 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
    if (local_128 != (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_128;
    }
    uVar26 = *(uint *)FVar29;
    uStack_470._0_4_ = 0;
    while (uVar26 == 0) {
      lVar21 = (longlong)iVar12;
      uStack_470._0_4_ = (int)uStack_470 + 0x20;
      iVar12 = iVar12 + 1;
      uStack_478._4_4_ = local_120;
      if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_141ec8d61;
      uVar26 = ((uint *)((longlong)FVar29 + 4))[lVar21];
    }
    uVar24 = -uVar26 & uVar26;
    uVar30 = (ulonglong)uVar24 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_3b4 = (int)lVar21;
    uStack_478._4_4_ = (int)uStack_470 + -1 + local_3b4;
    if ((int)local_120 < (int)uStack_478._4_4_) {
      uStack_478._4_4_ = local_120;
    }
  }
LAB_141ec8d61:
  local_490 = (longlong *)local_148;
  pTStack_480 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
  uVar26 = local_120 & 0xffffffe0;
  local_468 = local_148._8_4_ - local_114;
  uStack_478._0_4_ = 0xffffffff;
  uStack_488 = (FObjectExport *)CONCAT44(uVar24,iVar12);
  uStack_470._4_4_ = local_19c;
  TStack_280._padding_ = (longlong)uStack_488;
  iVar12 = (int)local_120 >> 5;
  uStack_260 = CONCAT44(uStack_464,local_468);
  bVar19 = (byte)local_120;
  TStack_280.UnvisitedBitMask = 0xffffffff;
  TStack_280.CurrentBitIndex = uStack_478._4_4_;
  TStack_280.BaseBitIndex = (int)uStack_470;
  TStack_280._28_4_ = local_19c;
  local_288 = local_490;
  TStack_280.Array = pTStack_480;
  if (((int)local_120 < 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pwVar8 = local_408;
  pwVar6 = local_418;
  if (uVar25 != local_120) {
    FVar29 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
    if (local_128 != (ForElementType<unsigned_int>)0x0) {
      FVar29 = local_128;
    }
    uVar25 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar12 * 4);
    while (uVar25 == 0) {
      lVar21 = (longlong)iVar12;
      uVar26 = uVar26 + 0x20;
      iVar12 = iVar12 + 1;
      uVar25 = local_120;
      if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_141ec8e7d;
      uVar25 = ((uint *)((longlong)FVar29 + 4))[lVar21];
    }
    uVar30 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar25 = (int)lVar21 + -1 + uVar26;
    if ((int)local_120 < (int)uVar25) {
      uVar25 = local_120;
    }
  }
LAB_141ec8e7d:
  while( true ) {
    plVar10 = local_288;
    if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
      `TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4a4);
    }
    lVar21 = (longlong)TStack_280.CurrentBitIndex;
    if (((TStack_280.CurrentBitIndex == uVar25) &&
        (TStack_280.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
       (plVar10 == (longlong *)local_148)) break;
    lVar2 = *plVar10;
    sVar18 = wcslen(pwVar6);
    FString::AppendChars(&local_4a0,pwVar6,(int)sVar18);
    ConvertItemToText(&local_218,*(FObjectExport **)(lVar2 + lVar21 * 0x28 + 0x10),local_410);
    FString::PrintfImpl(&local_360,L"+[%d] %s");
    iVar12 = local_360.Data.ArrayNum + -1;
    if (local_360.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    FString::AppendChars(&local_4a0,(wchar_t *)local_360.Data.AllocatorInstance.Data,iVar12);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    sVar18 = wcslen(pwVar8);
    FString::AppendChars(&local_4a0,pwVar8,(int)sVar18);
    TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
  }
  if (2 < (byte)LogArchiveDiff._0_1_) {
    local_4b0 = (FScriptContainerElement *)L"";
    if (local_4a0.Data.ArrayNum != 0) {
      local_4b0 = local_4a0.Data.AllocatorInstance.Data;
    }
    local_4c8 = local_390->ArrayNum;
    local_4b8 = pwVar8;
    local_4c0 = local_398;
    local_4d0 = local_398;
    local_4d8 = CONCAT44(local_4d8._4_4_,local_388->ArrayNum);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
  }
  local_100 = 0;
  if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_108.Data);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  local_150 = 0;
  if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_158.Data);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_198);
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpTableDifferences<FObjectImport> @ 141ec90f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DumpTableDifferences<FObjectImport>
          (FLinkerLoad *param_1,FLinkerLoad *param_2,
          TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_4,wchar_t *param_5,
          wchar_t *param_6,int param_7)

{
  TTableItem<FObjectImport> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  bool bVar7;
  int iVar8;
  FDiffFormatHelper *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  size_t sVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  FObjectImport *pFVar17;
  FScriptContainerElement *pFVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  wchar_t *pwVar23;
  ForElementType<FSetElementId> FVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined1 auStack_558 [32];
  longlong local_538;
  wchar_t *local_530;
  int local_528;
  wchar_t *local_520;
  wchar_t *local_518;
  FScriptContainerElement *local_510;
  undefined1 local_508;
  undefined1 local_507;
  FIdentityFunctor local_506;
  FIdentityFunctor local_505;
  undefined1 local_504 [4];
  FString local_500;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 uStack_4e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4d8;
  uint uStack_4d0;
  uint uStack_4cc;
  int iStack_4c8;
  undefined4 uStack_4c4;
  int local_4c0;
  undefined4 uStack_4bc;
  wchar_t *local_4b8;
  uint local_4b0;
  uint uStack_4ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4a8;
  undefined4 local_4a0;
  uint uStack_49c;
  uint uStack_498;
  undefined4 uStack_494;
  uint local_490;
  uint uStack_48c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_488;
  undefined4 local_480;
  uint uStack_47c;
  uint uStack_478;
  undefined4 uStack_474;
  wchar_t *local_470;
  FLinkerLoad *local_468;
  FLinkerLoad *local_460;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f8;
  int local_3d8;
  int local_3d4;
  FIdentityFunctor *local_3d0;
  FIdentityFunctor *local_3c8;
  wchar_t *local_3c0;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *local_3b8;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *local_3b0;
  wchar_t *local_3a8;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  undefined4 local_360;
  undefined4 local_35c;
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  FObjectImport *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_340;
  longlong *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  int local_2f8;
  longlong *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  longlong *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  longlong *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_288;
  undefined8 uStack_268;
  FScriptContainerElement *local_260;
  int local_258;
  int local_254;
  FObjectImport *local_250;
  uint local_248;
  FScriptContainerElement *local_240;
  int local_238;
  int local_234;
  FObjectImport *local_230;
  uint local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0 [2];
  undefined4 local_1a4;
  undefined1 local_198 [32];
  ForElementType<unsigned_int> local_178;
  uint local_170;
  int local_164;
  undefined1 local_160 [8];
  ForAnyElementType local_158;
  uint local_150;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  uint local_120;
  int local_114;
  undefined1 local_110 [8];
  ForAnyElementType local_108;
  uint local_100;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_558;
  local_3a8 = param_5;
  local_3c0 = param_6;
  local_468 = param_2;
  local_460 = param_1;
  local_3b8 = param_4;
  local_3b0 = param_3;
  pFVar9 = FDiffFormatHelper::Get();
  local_4b8 = pFVar9->LineTerminator;
  pFVar9 = FDiffFormatHelper::Get();
  uVar21 = param_3->ArrayNum;
  uVar20 = 0;
  local_4f0 = 1;
  local_470 = pFVar9->Indent;
  local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.Data.ArrayNum = 0;
  local_500.Data.ArrayMax = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (ForElementType<unsigned_int>)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = -1;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  iVar8 = 1;
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar21);
    if (3 < uVar21) {
      uVar27 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_360 = (undefined4)lVar13;
      iVar8 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_60 == 0) || (local_60 < iVar8)) {
      local_60 = iVar8;
      TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_a8);
    }
  }
  uVar21 = param_4->ArrayNum;
  if ((uint)(local_f8._8_4_ - local_c4) < uVar21) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_f8,uVar21);
    if (uVar21 < 4) {
      iVar8 = 1;
    }
    else {
      uVar27 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_35c = (undefined4)lVar13;
      iVar8 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_b0 == 0) || (local_b0 < iVar8)) {
      local_b0 = iVar8;
      TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_f8);
    }
  }
  iVar8 = param_3->ArrayNum;
  uVar28 = 1;
  if (0 < iVar8) {
    do {
      uVar21 = 0;
      if ((int)uVar20 < iVar8) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_530 = (wchar_t *)(longlong)iVar8;
        local_538 = (longlong)(int)uVar20;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar17 = (FObjectImport *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x38);
      pFVar10 = GetTableKey(&local_1f0,param_1,pFVar17);
      local_240 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238 = (pFVar10->Data).ArrayNum;
      local_234 = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      local_230 = pFVar17;
      local_228 = uVar20;
      TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
      ::Emplace<TTableItem<FObjectImport>_>
                ((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                  *)local_a8,(TTableItem<FObjectImport> *)local_358,(bool *)&local_240);
      if (local_240 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240);
      }
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      iVar8 = param_3->ArrayNum;
      uVar20 = uVar20 + 1;
      uVar28 = local_4f0;
    } while ((int)uVar20 < iVar8);
  }
  iVar8 = param_4->ArrayNum;
  uVar21 = 0;
  if (0 < iVar8) {
    do {
      uVar20 = 0;
      if ((int)uVar21 < iVar8) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_530 = (wchar_t *)(longlong)iVar8;
        local_538 = (longlong)(int)uVar21;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar17 = (FObjectImport *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x38);
      pFVar10 = GetTableKey(&local_1e0,param_2,pFVar17);
      local_260 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258 = (pFVar10->Data).ArrayNum;
      local_254 = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      local_250 = pFVar17;
      local_248 = uVar21;
      TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
      ::Emplace<TTableItem<FObjectImport>_>
                ((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                  *)local_f8,(TTableItem<FObjectImport> *)(local_358 + 4),(bool *)&local_260);
      if (local_260 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      iVar8 = param_4->ArrayNum;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < iVar8);
  }
  TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
  ::Difference((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_a8,
               (TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_198,
               (TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_f8);
  TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
  ::Difference((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_f8,
               (TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_148,
               (TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                *)local_a8);
  local_418.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_418._padding_._0_4_ = 0;
  local_458._padding_._4_4_ = (int)uVar28;
  local_418.UnvisitedBitMask = 0xffffffff;
  local_418.CurrentBitIndex = 0;
  local_418.BaseBitIndex = 0;
  local_418._padding_._4_4_ = local_458._padding_._4_4_;
  if (local_80 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_418);
  }
  uVar21 = local_80;
  uStack_4e0 = CONCAT44(local_418._padding_._4_4_,(undefined4)local_418._padding_);
  local_4e8 = (longlong *)local_a8;
  uStack_4cc = local_418.CurrentBitIndex;
  uStack_4d0 = local_418.UnvisitedBitMask;
  uStack_4c4 = local_418._28_4_;
  iStack_4c8 = local_418.BaseBitIndex;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_4c0 = local_a8._8_4_ - local_74;
  bVar15 = (byte)local_80 & 0x1f;
  pTStack_4d8 = local_418.Array;
  local_458._padding_._0_4_ = (int)local_80 >> 5;
  local_458._padding_._4_4_ = local_458._padding_._4_4_ << bVar15;
  local_458.UnvisitedBitMask = -1 << bVar15;
  local_458.BaseBitIndex = local_80 & 0xffffffe0;
  local_458.CurrentBitIndex = local_80;
  uStack_2c8 = CONCAT44(uStack_4bc,local_4c0);
  TStack_2e8.Array = local_418.Array;
  local_458.Array = pTVar19;
  local_2f0 = local_4e8;
  TStack_2e8._padding_ = uStack_4e0;
  TStack_2e8._16_8_ = _uStack_4d0;
  TStack_2e8._24_8_ = _iStack_4c8;
  if (((int)local_80 < 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = local_460;
  pFVar6 = local_468;
  if (uVar21 != local_80) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_458);
    pFVar5 = local_460;
    pFVar6 = local_468;
    uVar21 = local_458.CurrentBitIndex;
    pTVar19 = local_458.Array;
  }
  while( true ) {
    plVar2 = local_2f0;
    if ((int)local_2f0[1] - *(int *)((longlong)local_2f0 + 0x34) != (int)uStack_2c8) {
      local_508 = 0;
      `TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_508);
    }
    uVar28 = local_4f0;
    if (((TStack_2e8.CurrentBitIndex == uVar21) && (TStack_2e8.Array == pTVar19)) &&
       (plVar2 == (longlong *)local_a8)) break;
    pTVar1 = (TTableItem<FObjectImport> *)(*plVar2 + (longlong)TStack_2e8.CurrentBitIndex * 0x28);
    uVar20 = GetTypeHash(pTVar1);
    if (local_f8._8_4_ != local_c4) {
      FVar24 = (ForElementType<FSetElementId>)local_c0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FVar24 = local_b8;
      }
      iVar8 = *(int *)((longlong)FVar24 + (ulonglong)(local_b0 - 1U & uVar20) * 4);
      while (iVar8 != -1) {
        lVar13 = (longlong)iVar8 * 0x28;
        bVar7 = operator==((TTableItem<FObjectImport> *)(local_f8._0_8_ + lVar13),pTVar1);
        if (bVar7) {
          pFVar18 = (FScriptContainerElement *)(local_f8._0_8_ + lVar13);
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            plVar2 = *(longlong **)(pFVar18 + 0x10);
            pFVar17 = pTVar1->Item;
            if ((((pFVar17->_padding_ != *plVar2) ||
                 (pFVar17->ClassName != *(FName *)((longlong)plVar2 + 0x14))) ||
                (pFVar17->ClassPackage != *(FName *)((longlong)plVar2 + 0xc))) ||
               (bVar7 = ComparePackageIndices
                                  (pFVar5,pFVar6,(FPackageIndex *)&pFVar17->_padding_,
                                   (FPackageIndex *)(plVar2 + 1)), !bVar7)) {
              TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
              ::Emplace<TTableItem<FObjectImport>_const_&>
                        ((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                          *)local_198,(TTableItem<FObjectImport> *)local_350,(bool *)pTVar1);
              TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
              ::Emplace<TTableItem<FObjectImport>_const_&>
                        ((TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>
                          *)local_148,(TTableItem<FObjectImport> *)(local_350 + 4),(bool *)pFVar18);
            }
          }
          break;
        }
        iVar8 = *(int *)(local_f8._0_8_ + lVar13 + 0x20);
      }
    }
    TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
  }
  local_3d0 = &local_506;
  if (0 < local_198._8_4_ - local_164) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_198);
    iVar8 = local_198._8_4_ - local_164;
    if ((iVar8 < 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)local_198._0_8_,iVar8,
               local_506,
               (FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectImport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>
                *)&local_3d0);
  }
  uVar21 = local_150;
  uVar27 = (ulonglong)local_150;
  if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,0,4);
  }
  if (uVar21 != 0) {
    uVar20 = uVar21;
    if (uVar21 < 2) {
      if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
        uVar20 = 0;
        goto LAB_141ec985c;
      }
    }
    else {
LAB_141ec985c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,uVar20,4);
    }
    if (0 < (int)uVar21) {
      uVar25 = 0;
      do {
        FVar16.Data = (FScriptContainerElement *)local_160;
        if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
          FVar16.Data = local_158.Data;
        }
        uVar11 = uVar25 & (longlong)(int)uVar21 - 1U;
        uVar25 = uVar25 + 1;
        *(undefined4 *)((longlong)FVar16.Data + uVar11 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  uVar27 = 0;
  uVar21 = (uint)uVar28;
  if (local_150 != 0) {
    local_4b0 = 0;
    pTStack_4a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
    uStack_49c = 0;
    uStack_498 = 0;
    uVar25 = uVar27;
    uStack_4ac = uVar21;
    if (local_170 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_198 + 0x10);
      if (local_178 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_178;
      }
      uVar20 = *(uint *)FVar26;
      uVar11 = uVar27;
      while (uVar20 == 0) {
        uStack_498 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_498;
        iVar8 = (int)uVar25;
        local_4b0 = iVar8 + 1;
        uVar25 = (ulonglong)local_4b0;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_4b0)
        goto LAB_141ec996a;
        uVar20 = ((uint *)((longlong)FVar26 + 4))[iVar8];
      }
      uStack_4ac = -uVar20 & uVar20;
      uVar25 = (ulonglong)uStack_4ac * 2 + 1;
      lVar13 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_2f8 = (int)lVar13;
      uStack_49c = local_2f8 + -1 + (int)uVar11;
      uVar25 = (ulonglong)uStack_49c;
      if ((int)local_170 < (int)uStack_49c) {
LAB_141ec996a:
        uVar25 = (ulonglong)local_170;
        uStack_49c = local_170;
      }
    }
    local_4a0 = 0xffffffff;
    local_348 = (FObjectImport *)local_198;
    local_340._padding_ = CONCAT44(uStack_4ac,local_4b0);
    local_340.CurrentBitIndex = uStack_49c;
    local_340.UnvisitedBitMask = 0xffffffff;
    local_340._28_4_ = uStack_494;
    local_340.BaseBitIndex = uStack_498;
    local_340.Array = pTStack_4a8;
    if ((int)uVar25 < (int)local_170) {
      do {
        pTVar1 = (TTableItem<FObjectImport> *)(local_348->_padding_ + (longlong)(int)uVar25 * 0x28);
        uVar20 = GetTypeHash(pTVar1);
        uVar20 = local_150 - 1 & uVar20;
        *(uint *)((longlong)&pTVar1[1].Key.Data.AllocatorInstance.Data + 4) = uVar20;
        FVar16.Data = (FScriptContainerElement *)local_160;
        if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
          FVar16.Data = local_158.Data;
        }
        uVar11 = (longlong)(int)local_150 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)&pTVar1[1].Key.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar16.Data + uVar11 * 4);
        *(int *)((longlong)FVar16.Data + uVar11 * 4) = (int)uVar25;
        local_340.UnvisitedBitMask = local_340.UnvisitedBitMask & ~local_340._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_340);
        uVar25 = (ulonglong)(uint)local_340.CurrentBitIndex;
      } while (local_340.CurrentBitIndex < (local_340.Array)->NumBits);
    }
  }
  local_3c8 = &local_505;
  if (0 < local_148._8_4_ - local_114) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_148);
    iVar8 = local_148._8_4_ - local_114;
    if ((iVar8 < 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_2>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *)local_148._0_8_,iVar8,
               local_505,
               (FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectImport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>
                *)&local_3c8);
  }
  uVar20 = local_100;
  uVar25 = (ulonglong)local_100;
  if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,4);
  }
  if (uVar20 == 0) goto LAB_141ec9b60;
  uVar22 = uVar20;
  if (uVar20 < 2) {
    if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
      uVar22 = 0;
      goto LAB_141ec9afb;
    }
  }
  else {
LAB_141ec9afb:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,uVar22,4);
  }
  if (0 < (int)uVar20) {
    uVar11 = uVar27;
    do {
      FVar16.Data = (FScriptContainerElement *)local_110;
      if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
        FVar16.Data = local_108.Data;
      }
      uVar12 = uVar11 & (longlong)(int)uVar20 - 1U;
      uVar11 = uVar11 + 1;
      *(undefined4 *)((longlong)FVar16.Data + uVar12 * 4) = 0xffffffff;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
LAB_141ec9b60:
  if (local_100 != 0) {
    pTStack_488 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    local_490 = 0;
    uStack_47c = 0;
    uStack_478 = 0;
    uStack_48c = uVar21;
    if (local_120 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
      if (local_128 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_128;
      }
      uVar20 = *(uint *)FVar26;
      uVar25 = uVar27;
      while (uVar20 == 0) {
        uStack_478 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)uStack_478;
        iVar8 = (int)uVar27;
        local_490 = iVar8 + 1;
        uVar27 = (ulonglong)local_490;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_490)
        goto LAB_141ec9c1b;
        uVar20 = ((uint *)((longlong)FVar26 + 4))[iVar8];
      }
      uStack_48c = -uVar20 & uVar20;
      uVar27 = (ulonglong)uStack_48c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_3d8 = (int)lVar13;
      uStack_47c = local_3d8 + -1 + uStack_478;
      uVar27 = (ulonglong)uStack_47c;
      if ((int)local_120 < (int)uStack_47c) {
LAB_141ec9c1b:
        uVar27 = (ulonglong)local_120;
        uStack_47c = local_120;
      }
    }
    local_480 = 0xffffffff;
    local_320 = (longlong *)local_148;
    local_318._padding_ = CONCAT44(uStack_48c,local_490);
    local_318.CurrentBitIndex = uStack_47c;
    local_318.UnvisitedBitMask = 0xffffffff;
    local_318._28_4_ = uStack_474;
    local_318.BaseBitIndex = uStack_478;
    local_318.Array = pTStack_488;
    if ((int)uVar27 < (int)local_120) {
      do {
        pTVar1 = (TTableItem<FObjectImport> *)(*local_320 + (longlong)(int)uVar27 * 0x28);
        uVar20 = GetTypeHash(pTVar1);
        uVar20 = local_100 - 1 & uVar20;
        *(uint *)((longlong)&pTVar1[1].Key.Data.AllocatorInstance.Data + 4) = uVar20;
        FVar16.Data = (FScriptContainerElement *)local_110;
        if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
          FVar16.Data = local_108.Data;
        }
        uVar25 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)&pTVar1[1].Key.Data.AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar16.Data + uVar25 * 4);
        *(int *)((longlong)FVar16.Data + uVar25 * 4) = (int)uVar27;
        local_318.UnvisitedBitMask = local_318.UnvisitedBitMask & ~local_318._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
        uVar27 = (ulonglong)(uint)local_318.CurrentBitIndex;
      } while (local_318.CurrentBitIndex < (local_318.Array)->NumBits);
    }
  }
  local_3f8._padding_._0_4_ = 0;
  local_3f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
  local_3f8.UnvisitedBitMask = 0xffffffff;
  local_3f8.CurrentBitIndex = 0;
  local_3f8.BaseBitIndex = 0;
  local_3f8._padding_._4_4_ = uVar21;
  if (local_170 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f8);
  }
  uVar20 = local_170;
  uStack_4e0 = CONCAT44(local_3f8._padding_._4_4_,(undefined4)local_3f8._padding_);
  local_4e8 = (longlong *)local_198;
  uStack_4cc = local_3f8.CurrentBitIndex;
  uStack_4d0 = local_3f8.UnvisitedBitMask;
  uStack_4c4 = local_3f8._28_4_;
  iStack_4c8 = local_3f8.BaseBitIndex;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
  bVar15 = (byte)local_170 & 0x1f;
  local_4c0 = local_198._8_4_ - local_164;
  local_438._padding_._0_4_ = (int)local_170 >> 5;
  local_438._padding_._4_4_ = uVar21 << bVar15;
  local_438.UnvisitedBitMask = -1 << bVar15;
  pTStack_4d8 = local_3f8.Array;
  local_438.BaseBitIndex = local_170 & 0xffffffe0;
  uStack_298 = CONCAT44(uStack_4bc,local_4c0);
  TStack_2b8.Array = local_3f8.Array;
  local_438.Array = pTVar19;
  local_438.CurrentBitIndex = local_170;
  local_2c0 = local_4e8;
  TStack_2b8._padding_ = uStack_4e0;
  TStack_2b8._16_8_ = _uStack_4d0;
  TStack_2b8._24_8_ = _iStack_4c8;
  if (((int)local_170 < 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar5 = local_460;
  if (uVar20 != local_170) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_438);
    pFVar5 = local_460;
    uVar20 = local_438.CurrentBitIndex;
    pTVar19 = local_438.Array;
  }
  while( true ) {
    plVar2 = local_2c0;
    iVar8 = 0;
    if ((int)local_2c0[1] - *(int *)((longlong)local_2c0 + 0x34) != (int)uStack_298) {
      local_507 = 0;
      `TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_507);
    }
    uVar21 = local_120;
    lVar13 = (longlong)TStack_2b8.CurrentBitIndex;
    if (((TStack_2b8.CurrentBitIndex == uVar20) && (TStack_2b8.Array == pTVar19)) &&
       (plVar2 == (longlong *)local_198)) break;
    lVar3 = *plVar2;
    sVar14 = wcslen(local_470);
    FString::AppendChars(&local_500,local_470,(int)sVar14);
    pFVar17 = *(FObjectImport **)(lVar3 + lVar13 * 0x28 + 0x10);
    FName::ToString(&pFVar17->ClassPackage,&local_220);
    GetTableKey(local_1d0,pFVar5,pFVar17);
    FString::PrintfImpl(&local_390,L"%s ClassPackage: %s");
    if (local_1d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0[0].Data.AllocatorInstance.Data);
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    FString::PrintfImpl(&local_3a0,L"-[%d] %s");
    iVar8 = local_3a0.Data.ArrayNum + -1;
    if (local_3a0.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    FString::AppendChars(&local_500,(wchar_t *)local_3a0.Data.AllocatorInstance.Data,iVar8);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    sVar14 = wcslen(local_4b8);
    FString::AppendChars(&local_500,local_4b8,(int)sVar14);
    TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
  }
  uStack_4cc = 0;
  iStack_4c8 = iVar8;
  if (local_120 == 0) {
LAB_141eca004:
    uVar20 = (uint)local_4f0;
  }
  else {
    FVar26 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
    if (local_128 != (ForElementType<unsigned_int>)0x0) {
      FVar26 = local_128;
    }
    uVar20 = *(uint *)FVar26;
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar8;
      iStack_4c8 = iStack_4c8 + 0x20;
      iVar8 = iVar8 + 1;
      uStack_4cc = local_120;
      if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_141eca004;
      uVar20 = ((uint *)((longlong)FVar26 + 4))[lVar13];
    }
    uVar20 = -uVar20 & uVar20;
    uVar27 = (ulonglong)uVar20 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_3d4 = (int)lVar13;
    uStack_4cc = iStack_4c8 + -1 + local_3d4;
    if ((int)local_120 < (int)uStack_4cc) {
      uStack_4cc = local_120;
    }
  }
  local_4e8 = (longlong *)local_148;
  pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
  local_4c0 = local_148._8_4_ - local_114;
  uVar22 = local_120 & 0xffffffe0;
  uStack_4d0 = 0xffffffff;
  uStack_4e0 = CONCAT44(uVar20,iVar8);
  uStack_4c4 = local_1a4;
  TStack_288._padding_ = uStack_4e0;
  iVar8 = (int)local_120 >> 5;
  uStack_268 = CONCAT44(uStack_4bc,local_4c0);
  bVar15 = (byte)local_120;
  TStack_288.UnvisitedBitMask = 0xffffffff;
  TStack_288.CurrentBitIndex = uStack_4cc;
  TStack_288.BaseBitIndex = iStack_4c8;
  TStack_288._28_4_ = local_1a4;
  local_290 = local_4e8;
  TStack_288.Array = pTStack_4d8;
  if (((int)local_120 < 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pwVar23 = local_4b8;
  if (uVar21 != local_120) {
    FVar26 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
    if (local_128 != (ForElementType<unsigned_int>)0x0) {
      FVar26 = local_128;
    }
    uVar21 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar8 * 4);
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar8;
      uVar22 = uVar22 + 0x20;
      iVar8 = iVar8 + 1;
      uVar21 = local_120;
      if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_141eca140;
      uVar21 = ((uint *)((longlong)FVar26 + 4))[lVar13];
    }
    uVar27 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar21 = (int)lVar13 + -1 + uVar22;
    if ((int)local_120 < (int)uVar21) {
      uVar21 = local_120;
    }
  }
LAB_141eca140:
  while( true ) {
    plVar2 = local_290;
    if ((int)local_290[1] - *(int *)((longlong)local_290 + 0x34) != (int)uStack_268) {
      `TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_504);
    }
    lVar13 = (longlong)TStack_288.CurrentBitIndex;
    if (((TStack_288.CurrentBitIndex == uVar21) &&
        (TStack_288.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
       (plVar2 == (longlong *)local_148)) break;
    lVar3 = *plVar2;
    sVar14 = wcslen(local_470);
    FString::AppendChars(&local_500,local_470,(int)sVar14);
    pFVar17 = *(FObjectImport **)(lVar3 + lVar13 * 0x28 + 0x10);
    FName::ToString(&pFVar17->ClassPackage,&local_200);
    GetTableKey(&local_210,local_468,pFVar17);
    FString::PrintfImpl(&local_370,L"%s ClassPackage: %s");
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    FString::PrintfImpl(&local_380,L"+[%d] %s");
    iVar8 = local_380.Data.ArrayNum + -1;
    if (local_380.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    FString::AppendChars(&local_500,(wchar_t *)local_380.Data.AllocatorInstance.Data,iVar8);
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
    pwVar23 = local_4b8;
    sVar14 = wcslen(local_4b8);
    FString::AppendChars(&local_500,pwVar23,(int)sVar14);
    TStack_288.UnvisitedBitMask = TStack_288.UnvisitedBitMask & ~TStack_288._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_288);
  }
  if (2 < (byte)LogArchiveDiff._0_1_) {
    local_510 = (FScriptContainerElement *)L"";
    if (local_500.Data.ArrayNum != 0) {
      local_510 = local_500.Data.AllocatorInstance.Data;
    }
    local_528 = local_3b8->ArrayNum;
    local_520 = local_3c0;
    local_530 = local_3c0;
    local_538 = CONCAT44(local_538._4_4_,local_3b0->ArrayNum);
    local_518 = pwVar23;
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
  }
  local_100 = 0;
  if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_108.Data);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  local_150 = 0;
  if ((ForElementType<FSetElementId>)local_158.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_158.Data);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_198);
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  return;
}

// FindObjectFast<UPackage> @ 141ecd610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPackage * __cdecl
FindObjectFast<UPackage>
          (UObject *param_1,FName param_2,EFindObjectFlags param_3,EObjectFlags param_4)

{
  UClass *pUVar1;
  UPackage *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UPackage_NoRegister();
  pUVar2 = (UPackage *)StaticFindObjectFast(pUVar1,param_1,param_2,param_3,param_4,Borrowed);
  return pUVar2;
}

// GetFullNameForCastLogError<UPackage> @ 141ecd720

FString * __cdecl
GetFullNameForCastLogError<UPackage>(FString *__return_storage_ptr__,UPackage *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UStruct> @ 141ecd750

FString * __cdecl GetTypeName<UStruct>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UStruct_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValid<UObject> @ 141ecd790

UObject * __cdecl GetValid<UObject>(UObject *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  if ((param_1 == (UObject *)0x0) || (bVar1 = true, (*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)
     ) {
    bVar1 = false;
  }
  pUVar2 = (UObject *)0x0;
  if (bVar1) {
    pUVar2 = param_1;
  }
  return pUVar2;
}

// HeapSiftDown<FAsyncLoadEvent,int,FIdentityFunctor,TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_>_> @ 141ecdaf0

void __cdecl
AlgoImpl::
HeapSiftDown<FAsyncLoadEvent,int,FIdentityFunctor,TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_>_>
          (FAsyncLoadEvent *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_> *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FAsyncLoadEvent *pFVar16;
  FAsyncLoadEvent *pFVar17;
  int iVar18;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar18 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      pFVar16 = param_1 + (longlong)iVar2 + 2;
      pFVar17 = param_1 + (longlong)iVar2 + 1;
      if (pFVar17->UserPriority == pFVar16->UserPriority) {
        if (pFVar17->EventSystemPriority == pFVar16->EventSystemPriority) {
          if (pFVar17->PackageSerialNumber == pFVar16->PackageSerialNumber) {
            bVar1 = pFVar17->SerialNumber < pFVar16->SerialNumber;
          }
          else {
            bVar1 = pFVar16->PackageSerialNumber <= pFVar17->PackageSerialNumber;
          }
        }
        else {
          bVar1 = pFVar16->EventSystemPriority <= pFVar17->EventSystemPriority;
        }
      }
      else {
        bVar1 = pFVar16->UserPriority <= pFVar17->UserPriority;
      }
      if (bVar1) {
        iVar18 = iVar2;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar17 = param_1 + param_2;
    pFVar16 = param_1 + iVar18;
    if (pFVar16->UserPriority == pFVar17->UserPriority) {
      if (pFVar16->EventSystemPriority == pFVar17->EventSystemPriority) {
        if (pFVar16->PackageSerialNumber == pFVar17->PackageSerialNumber) {
          bVar1 = pFVar16->SerialNumber < pFVar17->SerialNumber;
        }
        else {
          bVar1 = pFVar17->PackageSerialNumber <= pFVar16->PackageSerialNumber;
        }
      }
      else {
        bVar1 = pFVar17->EventSystemPriority <= pFVar16->EventSystemPriority;
      }
    }
    else {
      bVar1 = pFVar17->UserPriority <= pFVar16->UserPriority;
    }
    if (!bVar1) break;
    iVar2 = pFVar16->PackageSerialNumber;
    iVar10 = pFVar16->EventSystemPriority;
    iVar11 = pFVar16->SerialNumber;
    iVar12 = pFVar17->UserPriority;
    iVar13 = pFVar17->PackageSerialNumber;
    iVar14 = pFVar17->EventSystemPriority;
    iVar15 = pFVar17->SerialNumber;
    uVar3 = *(undefined8 *)&pFVar17->Payload;
    uVar4 = *(undefined8 *)&(pFVar17->Payload).field_0x8;
    uVar5 = *(undefined8 *)&(pFVar17->Payload).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar17->Payload).field_0x18;
    uVar7 = *(undefined8 *)&(pFVar17->Payload).field_0x20;
    uVar8 = *(undefined8 *)&(pFVar17->Payload).field_0x28;
    pFVar17->UserPriority = pFVar16->UserPriority;
    pFVar17->PackageSerialNumber = iVar2;
    pFVar17->EventSystemPriority = iVar10;
    pFVar17->SerialNumber = iVar11;
    uVar9 = *(undefined8 *)&(pFVar16->Payload).field_0x8;
    *(undefined8 *)&pFVar17->Payload = *(undefined8 *)&pFVar16->Payload;
    *(undefined8 *)&(pFVar17->Payload).field_0x8 = uVar9;
    uVar9 = *(undefined8 *)&(pFVar16->Payload).field_0x18;
    *(undefined8 *)&(pFVar17->Payload).field_0x10 = *(undefined8 *)&(pFVar16->Payload).field_0x10;
    *(undefined8 *)&(pFVar17->Payload).field_0x18 = uVar9;
    uVar9 = *(undefined8 *)&(pFVar16->Payload).field_0x28;
    *(undefined8 *)&(pFVar17->Payload).field_0x20 = *(undefined8 *)&(pFVar16->Payload).field_0x20;
    *(undefined8 *)&(pFVar17->Payload).field_0x28 = uVar9;
    pFVar16->UserPriority = iVar12;
    pFVar16->PackageSerialNumber = iVar13;
    pFVar16->EventSystemPriority = iVar14;
    pFVar16->SerialNumber = iVar15;
    *(undefined8 *)&pFVar16->Payload = uVar3;
    *(undefined8 *)&(pFVar16->Payload).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar16->Payload).field_0x10 = uVar5;
    *(undefined8 *)&(pFVar16->Payload).field_0x18 = uVar6;
    *(undefined8 *)&(pFVar16->Payload).field_0x20 = uVar7;
    *(undefined8 *)&(pFVar16->Payload).field_0x28 = uVar8;
    param_2 = iVar18;
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FNameEntryId>'::__l2::<lambda_1>_>_>_> @ 141ecdc40

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FNameEntryId>(FLinkerLoad_*,FLinkerLoad_*,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141ecdd65:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((pTVar17->ElementData).Pad + 0x18) <=
        *(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_141ecdd65;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectExport>'::__l2::<lambda_1>_>_>_> @ 141ecdea0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectExport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141ecdfc5:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((pTVar17->ElementData).Pad + 0x18) <=
        *(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_141ecdfc5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectImport>'::__l2::<lambda_1>_>_>_> @ 141ece100

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectImport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141ece225:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((pTVar17->ElementData).Pad + 0x18) <=
        *(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_141ece225;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FNameEntryId>'::__l2::<lambda_2>_>_>_> @ 141ece360

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FNameEntryId>(FLinkerLoad_*,FLinkerLoad_*,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141ece485:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((pTVar17->ElementData).Pad + 0x18) <=
        *(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_141ece485;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectExport>'::__l2::<lambda_2>_>_>_> @ 141ece5c0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectExport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141ece6e5:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((pTVar17->ElementData).Pad + 0x18) <=
        *(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_141ece6e5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectImport>'::__l2::<lambda_2>_>_>_> @ 141ece820

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectImport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141ece945:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(int *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(int *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(int *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(int *)((pTVar17->ElementData).Pad + 0x18) <=
        *(int *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_141ece945;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<FArchiveCallstacks::FCallstackAtOffset,int,FIdentityFunctor,TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,`FArchiveCallstacks::Append'::__l2::<lambda_1>_>_> @ 141ecea80

void __cdecl
AlgoImpl::
HeapSortInternal<FArchiveCallstacks::FCallstackAtOffset,int,FIdentityFunctor,TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,_FArchiveCallstacks::Append_::__l2::<lambda_1>_>_>
          (FCallstackAtOffset *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,_public:_void___cdecl_FArchiveCallstacks::Append(FArchiveCallstacks_const_&,__int64)_::_2_::<lambda_1>_>
          param_4)

{
  FCallstackAtOffset *pFVar1;
  FCallstackAtOffset *pFVar2;
  code *pcVar3;
  long64 lVar4;
  uint uVar5;
  undefined3 uVar6;
  uint uVar7;
  bool bVar8;
  undefined3 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  FCallstackAtOffset *pFVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar15 = iVar12;
  iVar16 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_141eceb73:
      if (iVar16 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar17 = param_1 + lVar14;
          do {
            uVar5 = pFVar17->Callstack;
            bVar10 = pFVar17->bIgnore;
            uVar6 = *(undefined3 *)&pFVar17->field_0xd;
            iVar15 = 0;
            lVar4 = param_1->Offset;
            uVar7 = param_1->Callstack;
            bVar8 = param_1->bIgnore;
            uVar9 = *(undefined3 *)&param_1->field_0xd;
            param_1->Offset = pFVar17->Offset;
            param_1->Callstack = uVar5;
            param_1->bIgnore = bVar10;
            *(undefined3 *)&param_1->field_0xd = uVar6;
            pFVar17->Offset = lVar4;
            pFVar17->Callstack = uVar7;
            pFVar17->bIgnore = bVar8;
            *(undefined3 *)&pFVar17->field_0xd = uVar9;
            if (1 < iVar12) {
              do {
                iVar16 = iVar15 * 2;
                iVar11 = iVar16 + 1;
                if (iVar16 + 2 < iVar12) {
                  if (param_1[(longlong)iVar16 + 2].Offset < param_1[iVar11].Offset) {
                    iVar11 = iVar16;
                  }
                  iVar11 = iVar11 + 1;
                }
                if (param_1[iVar11].Offset <= param_1[iVar15].Offset) break;
                pFVar1 = param_1 + iVar11;
                uVar5 = pFVar1->Callstack;
                bVar10 = pFVar1->bIgnore;
                uVar6 = *(undefined3 *)&pFVar1->field_0xd;
                pFVar2 = param_1 + iVar15;
                lVar4 = pFVar2->Offset;
                uVar7 = pFVar2->Callstack;
                bVar8 = pFVar2->bIgnore;
                uVar9 = *(undefined3 *)&pFVar2->field_0xd;
                pFVar2 = param_1 + iVar15;
                pFVar2->Offset = pFVar1->Offset;
                pFVar2->Callstack = uVar5;
                pFVar2->bIgnore = bVar10;
                *(undefined3 *)&pFVar2->field_0xd = uVar6;
                pFVar1 = param_1 + iVar11;
                pFVar1->Offset = lVar4;
                pFVar1->Callstack = uVar7;
                pFVar1->bIgnore = bVar8;
                *(undefined3 *)&pFVar1->field_0xd = uVar9;
                iVar15 = iVar11;
              } while (iVar11 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar16 + -1;
      iVar12 = iVar15 + -2;
      iVar15 = iVar12;
      iVar16 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].Offset < param_1[iVar13].Offset) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    if (param_1[iVar13].Offset <= param_1[iVar11].Offset) goto LAB_141eceb73;
    pFVar17 = param_1 + iVar13;
    uVar5 = pFVar17->Callstack;
    bVar10 = pFVar17->bIgnore;
    uVar6 = *(undefined3 *)&pFVar17->field_0xd;
    iVar12 = iVar13 * 2 + 1;
    pFVar1 = param_1 + iVar11;
    lVar4 = pFVar1->Offset;
    uVar7 = pFVar1->Callstack;
    bVar8 = pFVar1->bIgnore;
    uVar9 = *(undefined3 *)&pFVar1->field_0xd;
    pFVar1 = param_1 + iVar11;
    pFVar1->Offset = pFVar17->Offset;
    pFVar1->Callstack = uVar5;
    pFVar1->bIgnore = bVar10;
    *(undefined3 *)&pFVar1->field_0xd = uVar6;
    pFVar17 = param_1 + iVar13;
    pFVar17->Offset = lVar4;
    pFVar17->Callstack = uVar7;
    pFVar17->bIgnore = bVar8;
    *(undefined3 *)&pFVar17->field_0xd = uVar9;
    iVar11 = iVar13;
  } while( true );
}

// InternalConstructor<UTextBuffer> @ 141ecec50

void __cdecl InternalConstructor<UTextBuffer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    FOutputDevice::FOutputDevice((FOutputDevice *)(this + 1));
    *(undefined ***)this = &UTextBuffer::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UTextBuffer::_vftable__for__FOutputDevice__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTextBuffer> @ 141ececb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextBuffer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextBuffer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    FOutputDevice::FOutputDevice((FOutputDevice *)(pUVar1 + 1));
    *(undefined ***)pUVar1 = &UTextBuffer::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UTextBuffer::_vftable__for__FOutputDevice__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FNameEntryId>'::__l2::<lambda_1>_>_>_> @ 141eced70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FNameEntryId>(FLinkerLoad_*,FLinkerLoad_*,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_141ecee40:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_141eceea0:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x000141eceea9;
          goto LAB_141eceeb3;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(int *)((pTVar3->ElementData).Pad + 0x18) < *piVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_141eceffd;
      }
LAB_141ecefee:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_1>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_141eceffd:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x000141eceea9:
  if (*(int *)((longlong)pTVar13 + 0x40) <= *(int *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_141eceea0;
LAB_141eceeb3:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_141eceea0;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_141eceffd;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_141eceffd;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_141ecefee;
  goto LAB_141ecee40;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectExport>'::__l2::<lambda_1>_>_>_> @ 141ecf0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectExport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_141ecf190:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_141ecf1f0:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x000141ecf1f9;
          goto LAB_141ecf203;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(int *)((pTVar3->ElementData).Pad + 0x18) < *piVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_141ecf34d;
      }
LAB_141ecf33e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_1>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_141ecf34d:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x000141ecf1f9:
  if (*(int *)((longlong)pTVar13 + 0x40) <= *(int *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_141ecf1f0;
LAB_141ecf203:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_141ecf1f0;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_141ecf34d;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_141ecf34d;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_141ecf33e;
  goto LAB_141ecf190;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectImport>'::__l2::<lambda_1>_>_>_> @ 141ecf410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectImport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_1>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_141ecf4e0:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_141ecf540:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x000141ecf549;
          goto LAB_141ecf553;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(int *)((pTVar3->ElementData).Pad + 0x18) < *piVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_141ecf69d;
      }
LAB_141ecf68e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_1>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_141ecf69d:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x000141ecf549:
  if (*(int *)((longlong)pTVar13 + 0x40) <= *(int *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_141ecf540;
LAB_141ecf553:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_141ecf540;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_141ecf69d;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_141ecf69d;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_141ecf68e;
  goto LAB_141ecf4e0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FNameEntryId>'::__l2::<lambda_2>_>_>_> @ 141ecf760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FNameEntryId>(FLinkerLoad_*,FLinkerLoad_*,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,TArray<FNameEntryId,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_141ecf830:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_141ecf890:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x000141ecf899;
          goto LAB_141ecf8a3;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(int *)((pTVar3->ElementData).Pad + 0x18) < *piVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_141ecf9ed;
      }
LAB_141ecf9de:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FNameEntryId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FNameEntryId>,DefaultKeyFuncs<TTableItem<FNameEntryId>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FNameEntryId>_::__l2::<lambda_2>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_141ecf9ed:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x000141ecf899:
  if (*(int *)((longlong)pTVar13 + 0x40) <= *(int *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_141ecf890;
LAB_141ecf8a3:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_141ecf890;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_141ecf9ed;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_141ecf9ed;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_141ecf9de;
  goto LAB_141ecf830;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectExport>'::__l2::<lambda_2>_>_>_> @ 141ecfab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectExport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectExport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_141ecfb80:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_141ecfbe0:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x000141ecfbe9;
          goto LAB_141ecfbf3;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(int *)((pTVar3->ElementData).Pad + 0x18) < *piVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_141ecfd3d;
      }
LAB_141ecfd2e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectExport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectExport>,DefaultKeyFuncs<TTableItem<FObjectExport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectExport>_::__l2::<lambda_2>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_141ecfd3d:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x000141ecfbe9:
  if (*(int *)((longlong)pTVar13 + 0x40) <= *(int *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_141ecfbe0;
LAB_141ecfbf3:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_141ecfbe0;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_141ecfd3d;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_141ecfd3d;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_141ecfd2e;
  goto LAB_141ecfb80;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<`DumpTableDifferences<FObjectImport>'::__l2::<lambda_2>_>_>_> @ 141ecfe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_2>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_void___cdecl_DumpTableDifferences<FObjectImport>(FLinkerLoad_*,FLinkerLoad_*,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,TArray<FObjectImport,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,int)_::_2_::<lambda_2>_>_>
          param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_141ecfed0:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_141ecff30:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x000141ecff39;
          goto LAB_141ecff43;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            piVar1 = (int *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(int *)((pTVar3->ElementData).Pad + 0x18) < *piVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_141ed008d;
      }
LAB_141ed007e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTableItem<FObjectImport>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTableItem<FObjectImport>,DefaultKeyFuncs<TTableItem<FObjectImport>,0>,FDefaultSetAllocator>::FElementCompareClass<_DumpTableDifferences<FObjectImport>_::__l2::<lambda_2>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_141ed008d:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x000141ecff39:
  if (*(int *)((longlong)pTVar13 + 0x40) <= *(int *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_141ecff30;
LAB_141ecff43:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(int *)((pTVar16->ElementData).Pad + 0x18) <= *(int *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_141ecff30;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_141ed008d;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_141ed008d;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_141ed007e;
  goto LAB_141ecfed0;
}

// IntroSortInternal<FArchiveCallstacks::FCallstackAtOffset,int,FIdentityFunctor,TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,`FArchiveCallstacks::Append'::__l2::<lambda_1>_>_> @ 141ed0150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FArchiveCallstacks::FCallstackAtOffset,int,FIdentityFunctor,TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,_FArchiveCallstacks::Append_::__l2::<lambda_1>_>_>
          (FCallstackAtOffset *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,_public:_void___cdecl_FArchiveCallstacks::Append(FArchiveCallstacks_const_&,__int64)_::_2_::<lambda_1>_>
          param_4)

{
  FCallstackAtOffset *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  long64 lVar5;
  uint uVar6;
  bool bVar7;
  undefined3 uVar8;
  uint uVar9;
  bool bVar10;
  undefined3 uVar11;
  int iVar12;
  FCallstackAtOffset *pFVar13;
  FCallstackAtOffset **ppFVar14;
  FCallstackAtOffset *pFVar15;
  FCallstackAtOffset *pFVar16;
  FCallstackAtOffset *pFVar17;
  FCallstackAtOffset *pFVar18;
  FCallstackAtOffset *pFVar19;
  float fVar20;
  undefined1 auStack_368 [48];
  FCallstackAtOffset *local_338;
  FCallstackAtOffset *local_328;
  FCallstackAtOffset *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar20;
    memset(local_310,0,0x2e8);
    ppFVar14 = &local_328;
    do {
      pFVar17 = ppFVar14[1];
      pFVar19 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar18 = pFVar19;
      if ((int)local_338 != 0) {
LAB_141ed0200:
        if (8 < iVar12) {
          uVar6 = pFVar18->Callstack;
          bVar7 = pFVar18->bIgnore;
          uVar8 = *(undefined3 *)&pFVar18->field_0xd;
          pFVar15 = pFVar17 + 1;
          pFVar19 = pFVar18 + iVar12 / 2;
          lVar5 = pFVar19->Offset;
          uVar9 = pFVar19->Callstack;
          bVar10 = pFVar19->bIgnore;
          uVar11 = *(undefined3 *)&pFVar19->field_0xd;
          pFVar19 = pFVar18 + iVar12 / 2;
          pFVar19->Offset = pFVar18->Offset;
          pFVar19->Callstack = uVar6;
          pFVar19->bIgnore = bVar7;
          *(undefined3 *)&pFVar19->field_0xd = uVar8;
          pFVar18->Offset = lVar5;
          pFVar18->Callstack = uVar9;
          pFVar18->bIgnore = bVar10;
          *(undefined3 *)&pFVar18->field_0xd = uVar11;
          pFVar19 = pFVar18;
LAB_141ed0230:
          pFVar13 = pFVar19;
          pFVar19 = pFVar13 + 1;
          if (pFVar19 <= pFVar17) goto code_r0x000141ed0239;
          goto LAB_141ed0241;
        }
        for (; pFVar19 = pFVar18, pFVar1 = pFVar18, pFVar18 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar17) {
            if (pFVar19->Offset < pFVar1->Offset) {
              pFVar19 = pFVar1;
            }
          }
          lVar5 = pFVar19->Offset;
          uVar9 = pFVar19->Callstack;
          bVar10 = pFVar19->bIgnore;
          uVar11 = *(undefined3 *)&pFVar19->field_0xd;
          uVar6 = pFVar17->Callstack;
          bVar7 = pFVar17->bIgnore;
          uVar8 = *(undefined3 *)&pFVar17->field_0xd;
          pFVar19->Offset = pFVar17->Offset;
          pFVar19->Callstack = uVar6;
          pFVar19->bIgnore = bVar7;
          *(undefined3 *)&pFVar19->field_0xd = uVar8;
          pFVar17->Offset = lVar5;
          pFVar17->Callstack = uVar9;
          pFVar17->bIgnore = bVar10;
          *(undefined3 *)&pFVar17->field_0xd = uVar11;
        }
        goto LAB_141ed0300;
      }
LAB_141ed02ef:
      local_338 = pFVar1;
      HeapSortInternal<FArchiveCallstacks::FCallstackAtOffset,int,FIdentityFunctor,TDereferenceWrapper<FArchiveCallstacks::FCallstackAtOffset,_FArchiveCallstacks::Append_::__l2::<lambda_1>_>_>
                (pFVar19,iVar12,param_3,param_4);
LAB_141ed0300:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_328 <= ppFVar14);
  }
  return;
code_r0x000141ed0239:
  if (pFVar19->Offset <= pFVar18->Offset) goto LAB_141ed0230;
LAB_141ed0241:
  do {
    pFVar16 = pFVar15;
    pFVar15 = pFVar16 + -1;
    if (pFVar15 <= pFVar18) break;
  } while (pFVar18->Offset <= pFVar15->Offset);
  uVar2 = pFVar16[-1].Callstack;
  uVar3 = pFVar16[-1].bIgnore;
  uVar4 = *(undefined3 *)&pFVar16[-1].field_0xd;
  if (pFVar19 <= pFVar15) {
    lVar5 = pFVar19->Offset;
    uVar6 = pFVar13[1].Callstack;
    bVar7 = pFVar13[1].bIgnore;
    uVar8 = *(undefined3 *)&pFVar13[1].field_0xd;
    pFVar19->Offset = pFVar15->Offset;
    pFVar13[1].Callstack = uVar2;
    pFVar13[1].bIgnore = (bool)uVar3;
    *(undefined3 *)&pFVar13[1].field_0xd = uVar4;
    pFVar15->Offset = lVar5;
    pFVar16[-1].Callstack = uVar6;
    pFVar16[-1].bIgnore = bVar7;
    *(undefined3 *)&pFVar16[-1].field_0xd = uVar8;
    goto LAB_141ed0230;
  }
  lVar5 = pFVar18->Offset;
  uVar6 = pFVar18->Callstack;
  bVar7 = pFVar18->bIgnore;
  uVar8 = *(undefined3 *)&pFVar18->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar18->Offset = pFVar15->Offset;
  pFVar18->Callstack = uVar2;
  pFVar18->bIgnore = (bool)uVar3;
  *(undefined3 *)&pFVar18->field_0xd = uVar4;
  pFVar15->Offset = lVar5;
  pFVar16[-1].Callstack = uVar6;
  pFVar16[-1].bIgnore = bVar7;
  *(undefined3 *)&pFVar16[-1].field_0xd = uVar8;
  if ((longlong)((longlong)pFVar15 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar19 & 0xfffffffffffffff0U)) {
    if (pFVar19 < pFVar17) {
      *ppFVar14 = pFVar19;
      ppFVar14[1] = pFVar17;
      *(int *)(ppFVar14 + 2) = (int)local_338;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar15 <= pFVar18 + 1) goto LAB_141ed0300;
    pFVar17 = pFVar16 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar15) {
      *ppFVar14 = pFVar18;
      ppFVar14[1] = pFVar16 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_338;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar17 <= pFVar19) goto LAB_141ed0300;
  }
  iVar12 = (int)((longlong)pFVar17 - (longlong)pFVar19 >> 4) + 1;
  pFVar18 = pFVar19;
  if ((int)local_338 == 0) goto LAB_141ed02ef;
  goto LAB_141ed0200;
}

// IsObjectPtrEqual<UScriptStruct,UScriptStruct_*,0> @ 141ed0390

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UScriptStruct,UScriptStruct_*,0>
          (TObjectPtr<UScriptStruct> *param_1,UScriptStruct **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NoneOf<TArrayView<int_const_,int>,`FAsyncLoadingThread::ContainsAnyRequestInternal'::__l2::<lambda_1>_> @ 141ed03b0

bool __cdecl
Algo::
NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread::ContainsAnyRequestInternal_::__l2::<lambda_1>_>
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

// NoneOf<TArrayView<std::atomic<int>_const_,int>,`FAsyncLoadingThread::ContainsAnyRequestInternal'::__l2::<lambda_1>_> @ 141ed0450

bool __cdecl
Algo::
NoneOf<TArrayView<std::atomic<int>_const_,int>,_FAsyncLoadingThread::ContainsAnyRequestInternal_::__l2::<lambda_1>_>
          (TArrayView<std::atomic<int>_const_,int> *param_1,<lambda_1> param_2)

{
  atomic<int> *paVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  atomic<int> *paVar6;
  
  paVar6 = param_1->DataPtr;
  paVar1 = paVar6 + param_1->ArrayNum;
  do {
    if (paVar6 == paVar1) {
      return true;
    }
    if (*(int *)&((param_2.__this)->PendingRequests).Elements.field_0x8 !=
        *(int *)&((param_2.__this)->PendingRequests).Elements.field_0x34) {
      FVar2 = ((param_2.__this)->PendingRequests).Hash.SecondaryData;
      FVar5 = (ForElementType<FSetElementId>)&((param_2.__this)->PendingRequests).Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar5 = FVar2;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)(((param_2.__this)->PendingRequests).HashSize - 1U & (uint)*paVar6)
                      * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)&((param_2.__this)->PendingRequests).Elements;
        do {
          if (*(atomic<int> *)(lVar3 + (longlong)iVar4 * 0xc) == *paVar6) {
            return false;
          }
          iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    paVar6 = paVar6 + 1;
  } while( true );
}

// ~TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,0,0> @ 141ed4290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FAsyncArchive::FAsyncArchive_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,0,0> @ 141ed42b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPrecacheCallbackHandler::FPrecacheCallbackHandler_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FPrecacheCallbackHandler__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FindPackageReferencesInObject'::__l2::<lambda_1>,0,1> @ 141ed42d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FindPackageReferencesInObject'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FindPackageReferencesInObject_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FindPackageReferencesInObject'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,0,1> @ 141ed42f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_CreateLinker_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,0,1> @ 141ed4310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_ExportsDone_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,0,1> @ 141ed4330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,0,1> @ 141ed4350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_ProcessPostloadWait_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,0,1> @ 141ed4370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_SetupExports_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,0,1> @ 141ed4390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_SetupImports_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,0,1> @ 141ed43b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_StartImportPackages_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,0,1> @ 141ed43d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_StartPostLoad_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,0,1> @ 141ed43f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncLoadingThread::QueueEvent_FinishLinker_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::`5'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,0,1> @ 141ed4410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FAsyncPackage::CreateLinker_::__l222::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::`222'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,0,0> @ 141ed4430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FAsyncArchive::FAsyncArchive_::__l15::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::`15'::<lambda_2>,0,0>::_vftable_;
  return;
}

// operator<< @ 141ed6030

FArchive * __cdecl operator<<(FArchive *param_1,FPackagePath *param_2)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                     ,0x46c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return param_1;
}

// operator<< @ 141ed6070

FArchive * __cdecl operator<<(FArchive *param_1,FWorldTileLODInfo *param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->RelativeStreamingDistance = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Reserved0;
  puVar2 = &param_1->field_0x2a;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Reserved1;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &param_2->Reserved2;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &param_2->Reserved3;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar3 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
  return param_1;
}

// operator<< @ 141ed6220

FArchive * __cdecl operator<<(FArchive *param_1,FWorldTileLayer *param_2)

{
  int *piVar1;
  int *piVar2;
  FArchive *this;
  
  this = operator<<(param_1,&param_2->Name);
  piVar1 = (int *)**(undefined8 **)&this->field_0x8;
  if ((int *)(*(undefined8 **)&this->field_0x8)[1] < piVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,&param_2->Reserved0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)&param_2->Reserved0);
    }
  }
  else {
    param_2->Reserved0 = *piVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  UE::Math::operator<<(this,&param_2->Reserved1);
  if (0x10b < *(int *)&param_1->field_0x40) {
    piVar1 = &param_2->StreamingDistance;
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  if (0x148 < *(int *)&param_1->field_0x40) {
    operator<<(param_1,&param_2->DistanceStreamingEnabled);
  }
  return param_1;
}

// operator<< @ 141ed6320

void __cdecl operator<<(FStructuredArchiveSlot param_1,FWorldTileLODInfo *param_2)

{
  float *pfVar1;
  FArchive *pFVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar3 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar2->field_0x8)[1] < piVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)param_2);
    }
  }
  else {
    param_2->RelativeStreamingDistance = *piVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  pfVar1 = &param_2->Reserved0;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar4 = (float *)**(undefined8 **)&pFVar2->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar2->field_0x8)[1] < pfVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  pfVar1 = &param_2->Reserved1;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar4 = (float *)**(undefined8 **)&pFVar2->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar2->field_0x8)[1] < pfVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  piVar3 = &param_2->Reserved2;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar5 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar2->field_0x8)[1] < piVar5 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar5;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  piVar3 = &param_2->Reserved3;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar5 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *piVar3 = *piVar5;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141ed64ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,piVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)piVar3);
  return;
}

// operator<< @ 141ed64d0

void __cdecl operator<<(FStructuredArchiveSlot param_1,FWorldTileLayer *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  FArchive *pFVar4;
  int iVar5;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  uVar1 = *(undefined8 *)&pFVar4->field_0x40;
  operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&param_2->Name);
  piVar3 = &param_2->Reserved0;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar2 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar2;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar3 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar3 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,&param_2->Reserved1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)&param_2->Reserved1);
    }
  }
  else {
    (param_2->Reserved1).field0_0x0._s_0.X = *piVar3;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  piVar3 = &(param_2->Reserved1).field0_0x0._s_0.Y;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar2 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar2;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  iVar5 = (int)uVar1;
  if (0x10b < iVar5) {
    piVar3 = &param_2->StreamingDistance;
    pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
    piVar2 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar2 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar3);
      }
    }
    else {
      *piVar3 = *piVar2;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
  }
  if (0x148 < iVar5) {
    operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&param_2->DistanceStreamingEnabled);
  }
  return;
}

// operator== @ 141ed76a0

bool __cdecl operator==(TTableItem<FNameEntryId> *param_1,TTableItem<FNameEntryId> *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Key).Data.ArrayNum;
  iVar1 = (param_2->Key).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Key).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// operator== @ 141ed76f0

bool __cdecl operator==(TTableItem<FObjectExport> *param_1,TTableItem<FObjectExport> *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Key).Data.ArrayNum;
  iVar1 = (param_2->Key).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Key).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// operator== @ 141ed7740

bool __cdecl operator==(TTableItem<FObjectImport> *param_1,TTableItem<FObjectImport> *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Key).Data.ArrayNum;
  iVar1 = (param_2->Key).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Key).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->Key).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// operator() @ 141ed7990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141ed7f75) */

void __thiscall
`FindPackageReferencesInObject'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  UStruct *pUVar2;
  UObjectBaseUtility *this_00;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FFieldClass *pFVar9;
  TTuple<FProperty_const_*,void_const_*> *pTVar10;
  UPackage *pUVar11;
  void *pvVar12;
  FString *pFVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar18;
  ulong64 uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 auStackY_18b8 [32];
  undefined1 local_1868 [8];
  FString local_1860;
  FString local_1850;
  longlong *local_1840;
  longlong local_1838;
  longlong local_1830;
  FName local_1828;
  UObjectBaseUtility *local_1820;
  FString local_1818;
  FString local_1808;
  FString local_17f8;
  TStringBuilderBase<wchar_t> local_17e8;
  wchar_t local_17c8 [1035];
  wchar_t local_fb2 [5];
  TStringBuilderBase<wchar_t> local_fa8;
  wchar_t local_f88 [1035];
  wchar_t local_772 [5];
  FPropertyValueIterator local_768;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_18b8;
  pUVar2 = *(UStruct **)&param_1->field_0x10;
  local_1840 = this;
  pFVar9 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_768,pFVar9,pUVar2,param_1,FullRecursion,ExcludeDeprecated);
LAB_141ed7a00:
  if (local_768.PropertyIteratorStack.ArrayNum < 1) {
    FVar18 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_768;
    if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar18 = local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
              ((FPropertyValueStackEntry *)FVar18,local_768.PropertyIteratorStack.ArrayNum);
    if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FMemory::Free((void *)local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData);
    }
    return;
  }
  pTVar10 = FPropertyValueIterator::operator->(&local_768);
  lVar17 = *(longlong *)pTVar10;
  pTVar10 = FPropertyValueIterator::operator->(&local_768);
  this_00 = (UObjectBaseUtility *)**(undefined8 **)&pTVar10->field_0x8;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    if (((*(uint *)&this_00->field_0x8 & 1) == 0) ||
       (cVar6 = (**(code **)(*(longlong *)this_00 + 0x1c0))(this_00), cVar6 == '\0')) {
      if (((*(byte *)(lVar17 + 0x38) & 8) != 0) &&
         ((*(uint *)(*(longlong *)&this_00->field_0x10 + 0xd4) & 0x1000) != 0)) {
        local_17e8.Base = local_17c8;
        local_17e8.bIsDynamic = false;
        local_17e8.bIsExternal = false;
        local_17e8.CurPos = local_17c8;
        local_17e8.End = local_fb2;
        pFVar13 = FPropertyValueIterator::GetPropertyPathDebugString(&local_768,&local_17f8);
        iVar8 = (pFVar13->Data).ArrayNum;
        pFVar20 = (pFVar13->Data).AllocatorInstance.Data;
        iVar21 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar21 = 0;
        }
        uVar19 = (ulong64)iVar21;
        if (local_17e8.End < local_17e8.CurPos + uVar19) {
          TStringBuilderBase<wchar_t>::Extend(&local_17e8,uVar19);
        }
        if (iVar21 != 0) {
          pvVar12 = FGenericPlatformString::Memcpy(local_17e8.CurPos,pFVar20,uVar19 * 2);
          local_17e8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar19 * 2);
        }
        if (local_17f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_17f8.Data.AllocatorInstance.Data);
        }
        if (local_17e8.End < local_17e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_17e8,1);
        }
        pvVar12 = FGenericPlatformString::Memcpy(local_17e8.CurPos,L"(",2);
        local_17e8.CurPos = (wchar_t *)((longlong)pvVar12 + 2);
        if (*(longlong *)&this_00->field_0x10 == 0) {
          ::FString::FString(&local_1850,L"None");
        }
        else {
          local_1828 = *(FName *)(*(longlong *)&this_00->field_0x10 + 0x18);
          ::FName::ToString(&local_1828,&local_1850);
        }
        FVar5.Data = local_1850.Data.AllocatorInstance.Data;
        iVar8 = local_1850.Data.ArrayNum + -1;
        if (local_1850.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        uVar19 = (ulong64)iVar8;
        if (local_17e8.End < local_17e8.CurPos + uVar19) {
          TStringBuilderBase<wchar_t>::Extend(&local_17e8,uVar19);
        }
        if (iVar8 != 0) {
          pvVar12 = FGenericPlatformString::Memcpy(local_17e8.CurPos,FVar5.Data,uVar19 * 2);
          local_17e8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar19 * 2);
        }
        if (local_1850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1850.Data.AllocatorInstance.Data);
        }
        if (local_17e8.End < local_17e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_17e8,1);
        }
        pvVar12 = FGenericPlatformString::Memcpy(local_17e8.CurPos,L")",2);
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        local_17e8.CurPos = (wchar_t *)((longlong)pvVar12 + 2);
        if (local_17e8.End < (wchar_t *)((longlong)pvVar12 + 4U)) {
          TStringBuilderBase<wchar_t>::Extend(&local_17e8,1);
        }
        *local_17e8.CurPos = L'\0';
        ::FString::FString(&local_1860,local_17e8.Base);
        if (((pFVar3->Data <= (FScriptContainerElement *)&local_1860) &&
            ((FScriptContainerElement *)&local_1860 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar8 + 1;
        pFVar20 = pFVar3->Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar20 = 0;
        *(FScriptContainerElement **)pFVar20 = local_1860.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 8) = local_1860.Data.ArrayNum;
        *(int *)(pFVar20 + 0xc) = local_1860.Data.ArrayMax;
        local_1860.Data.ArrayNum = 0;
        local_1860.Data.ArrayMax = 0;
        local_1860.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        puVar22 = *(undefined8 **)this;
        local_1820 = this_00;
        UE::Core::Private::Function::CheckCallable((void *)*puVar22);
        pcVar4 = (code *)*puVar22;
        plVar16 = (longlong *)puVar22[5];
        if ((longlong *)puVar22[5] == (longlong *)0x0) {
          plVar16 = puVar22 + 2;
        }
        uVar14 = (**(code **)(*plVar16 + 8))();
        (*pcVar4)(uVar14,&local_1820);
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if ((*(int *)&pFVar3[1].Data < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)*(int *)&pFVar3[1].Data;
        pFVar20 = pFVar3->Data;
        pvVar12 = *(void **)(pFVar20 + lVar17 * 0x10 + -0x10);
        *(undefined8 *)(pFVar20 + lVar17 * 0x10 + -0x10) = 0;
        *(undefined8 *)(pFVar20 + lVar17 * 0x10 + -8) = 0;
        iVar8 = *(int *)&pFVar3[1].Data;
        pFVar20 = pFVar3->Data + (longlong)iVar8 * 0x10;
        if (*(void **)(pFVar20 + -0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar20 + -0x10));
        }
        iVar8 = *(int *)&pFVar3[1].Data - iVar8;
        if (iVar8 != 0) {
          memmove(pFVar20 + -0x10,pFVar20,(longlong)iVar8 << 4);
        }
        *(int *)&pFVar3[1].Data = *(int *)&pFVar3[1].Data + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,pFVar3,*(int *)&pFVar3[1].Data,(int *)((longlong)&pFVar3[1].Data + 4));
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_17e8);
        this = local_1840;
      }
    }
    else {
      pUVar11 = UObjectBaseUtility::GetOutermost(this_00);
      local_1838 = pUVar11->_padding_;
      plVar15 = (longlong *)**(longlong **)((longlong)this + 8);
      plVar16 = plVar15 + (int)(*(longlong **)((longlong)this + 8))[1];
      if (plVar15 != plVar16) {
        while (*plVar15 != local_1838) {
          plVar15 = plVar15 + 1;
          if (plVar15 == plVar16) goto code_r0x000141ed7a8f;
        }
        plVar16 = *(longlong **)((longlong)this + 0x10);
        local_fa8.Base = local_f88;
        local_fa8.End = local_772;
        local_fa8.CurPos = local_f88;
        local_fa8.bIsDynamic = false;
        local_fa8.bIsExternal = false;
        lVar17 = plVar16[1];
        puVar22 = (undefined8 *)*plVar16;
        puVar23 = puVar22 + (longlong)(int)lVar17 * 2;
        while( true ) {
          if ((int)plVar16[1] != (int)lVar17) {
            local_1868[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1868);
          }
          if (puVar22 == puVar23) break;
          pvVar12 = (void *)*puVar22;
          iVar8 = *(int *)(puVar22 + 1) + -1;
          if (*(int *)(puVar22 + 1) == 0) {
            iVar8 = 0;
          }
          uVar19 = (ulong64)iVar8;
          if (local_fa8.End < local_fa8.CurPos + uVar19) {
            TStringBuilderBase<wchar_t>::Extend(&local_fa8,uVar19);
          }
          if (iVar8 != 0) {
            pvVar12 = FGenericPlatformString::Memcpy(local_fa8.CurPos,pvVar12,uVar19 * 2);
            local_fa8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar19 * 2);
          }
          if (local_fa8.End < local_fa8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_fa8,1);
          }
          pvVar12 = FGenericPlatformString::Memcpy(local_fa8.CurPos,L"→",2);
          local_fa8.CurPos = (wchar_t *)((longlong)pvVar12 + 2);
          puVar22 = puVar22 + 2;
        }
        pFVar13 = FPropertyValueIterator::GetPropertyPathDebugString(&local_768,&local_1808);
        lVar17 = local_1838;
        iVar21 = (pFVar13->Data).ArrayNum;
        pFVar20 = (pFVar13->Data).AllocatorInstance.Data;
        iVar8 = iVar21 + -1;
        if (iVar21 == 0) {
          iVar8 = 0;
        }
        uVar19 = (ulong64)iVar8;
        if (local_fa8.End < local_fa8.CurPos + uVar19) {
          TStringBuilderBase<wchar_t>::Extend(&local_fa8,uVar19);
        }
        if (iVar8 != 0) {
          pvVar12 = FGenericPlatformString::Memcpy(local_fa8.CurPos,pFVar20,uVar19 * 2);
          local_fa8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar19 * 2);
        }
        if (local_1808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1808.Data.AllocatorInstance.Data);
        }
        if (local_fa8.End < local_fa8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_fa8,1);
        }
        *local_fa8.CurPos = L'\0';
        ::FString::FString(&local_1818,local_fa8.Base);
        this = local_1840;
        local_1830 = lVar17;
        (*(code *)local_1840[3])(local_1840[4],&local_1830,&local_1818);
        if (local_1818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1818.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_fa8);
        FPropertyValueIterator::IterateToNext(&local_768);
        goto LAB_141ed7a00;
      }
    }
  }
  FPropertyValueIterator::IterateToNext(&local_768);
  goto LAB_141ed7a00;
code_r0x000141ed7a8f:
  FPropertyValueIterator::IterateToNext(&local_768);
  goto LAB_141ed7a00;
}

// `vector_deleting_destructor'`adjustor{8}' @ 141ed9044

/* [thunk]:public: virtual void * __ptr64 __cdecl FAsyncLoadingThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAsyncLoadingThread::_vector_deleting_destructor__adjustor_8__
          (FAsyncLoadingThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,param_1);
  return pvVar1;
}

// `vector_deleting_destructor' @ 141ed9060

void * __thiscall FEventLoadNode::_vector_deleting_destructor_(FEventLoadNode *this,uint param_1)

{
  int *piVar1;
  FEventLoadNode *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  if ((param_1 & 2) == 0) {
    pFVar3 = (this->NodesWaitingForMe).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x18);
    }
    return this;
  }
  lVar4 = *(longlong *)&this[-1].NumPrerequistes;
  piVar1 = &this[-1].NumPrerequistes;
  pFVar2 = this + lVar4;
  while (lVar4 != 0) {
    pFVar3 = pFVar2[-1].NodesWaitingForMe.AllocatorInstance.Data;
    pFVar2 = pFVar2 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(piVar1,*(longlong *)piVar1 * 0x18 + 8);
  }
  return piVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 141ed9124

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextBuffer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTextBuffer::_vector_deleting_destructor__adjustor_40__(UTextBuffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextBuffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 141ed9140

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9170

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAsyncPackage,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed91a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed91d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FPrecacheCallbackHandler__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FindPackageReferencesInObject'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FindPackageReferencesInObject'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed92d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed93d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::`5'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed94d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::`222'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAsyncArchive::FAsyncArchive'::`15'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9550

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFlushRequestData,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FFlushRequestData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9590

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUObjectToken,SharedPointerInternals::DefaultDeleter<FUObjectToken>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUObjectToken,SharedPointerInternals::DefaultDeleter<FUObjectToken>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed95d0

void * __thiscall FArchiveCrc32::_scalar_deleting_destructor_(FArchiveCrc32 *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9610

void * __thiscall
FArchiveDescribeReference::_scalar_deleting_destructor_
          (FArchiveDescribeReference *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9650

void * __thiscall
FArchiveFindAllRefs::_scalar_deleting_destructor_(FArchiveFindAllRefs *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->References).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed96a0

void * __thiscall
FArchiveFindCulprit::_scalar_deleting_destructor_(FArchiveFindCulprit *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Referencers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed96f0

void * __thiscall
FArchiveHasReferences::_scalar_deleting_destructor_(FArchiveHasReferences *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9730

void * __thiscall
FArchiveObjectCrc32::_scalar_deleting_destructor_(FArchiveObjectCrc32 *this,uint param_1)

{
  ~FArchiveObjectCrc32(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9770

void * __thiscall
`FArchiveHasReferences::FArchiveHasReferences'::__l2::FArchiveProxyCollector::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed97b0

void * __thiscall
FArchiveShowReferences::_scalar_deleting_destructor_(FArchiveShowReferences *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Found).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9800

void * __thiscall
FArchiveStackTrace::_scalar_deleting_destructor_(FArchiveStackTrace *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FArchiveStackTrace__6B_;
  (this->StackTraceWriter)._padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&this->StackTraceWriter);
  operator_delete__((this->Callstacks).StackTrace.Ptr);
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Callstacks).UniqueCallstacks.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Callstacks).UniqueCallstacks);
  pFVar2 = (this->Callstacks).CallstackAtOffsetMap.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FLargeMemoryWriter::~FLargeMemoryWriter((FLargeMemoryWriter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed98b0

void * __thiscall
FArchiveStackTraceMemoryWriter::_scalar_deleting_destructor_
          (FArchiveStackTraceMemoryWriter *this,uint param_1)

{
  (this->StackTraceWriter)._padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&this->StackTraceWriter);
  FLargeMemoryWriter::~FLargeMemoryWriter((FLargeMemoryWriter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void * __thiscall
FArchiveStackTraceReader::_scalar_deleting_destructor_(FArchiveStackTraceReader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FArchiveStackTraceReader::FSerializeData,int>
            ((FSerializeData *)(this->SerializeTrace).AllocatorInstance.Data,
             (this->SerializeTrace).ArrayNum);
  pFVar1 = (this->SerializeTrace).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLargeMemoryReader::~FLargeMemoryReader((FLargeMemoryReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9980

void * __thiscall
FArchiveStackTraceWriter::_scalar_deleting_destructor_(FArchiveStackTraceWriter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed99d0

void * __thiscall FArchiveUObject::_scalar_deleting_destructor_(FArchiveUObject *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9a10

void * __thiscall FAsyncArchive::_scalar_deleting_destructor_(FAsyncArchive *this,uint param_1)

{
  ~FAsyncArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9a50

void * __thiscall
FAsyncLoadingThread::_scalar_deleting_destructor_(FAsyncLoadingThread *this,uint param_1)

{
  ~FAsyncLoadingThread(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x480);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9a90

void * __thiscall FAsyncPackage::_scalar_deleting_destructor_(FAsyncPackage *this,uint param_1)

{
  ~FAsyncPackage(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x608);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9ad0

void * __thiscall FGCObject::_scalar_deleting_destructor_(FGCObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  UnregisterGCObject(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9b20

void * __thiscall
FLinkerExportArchive::_scalar_deleting_destructor_(FLinkerExportArchive *this,uint param_1)

{
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9b60

void * __thiscall
FObjectAndNameAsStringProxyArchive::_scalar_deleting_destructor_
          (FObjectAndNameAsStringProxyArchive *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FObjectAndNameAsStringProxyArchive__6B_;
  FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9bb0

void * __thiscall
`FArchiveReplaceObjectRefBase::SerializeObject'::__l2::FReplaceObjectRefCollector::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9bf0

void * __thiscall
FStaticMemoryReader::_scalar_deleting_destructor_(FStaticMemoryReader *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9c30

void * __thiscall FUObjectToken::_scalar_deleting_destructor_(FUObjectToken *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->OriginalObjectPathName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9cc0

void * __thiscall
IAsyncPackageLoader::_scalar_deleting_destructor_(IAsyncPackageLoader *this,uint param_1)

{
  *this = (IAsyncPackageLoader)&___7IAsyncPackageLoader__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141ed9d00

void * __thiscall UTextBuffer::_scalar_deleting_destructor_(UTextBuffer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// CheckForFileOpenLogCommandLine @ 141ee02d0

bool __cdecl CheckForFileOpenLogCommandLine(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"RandomizeLoadOrder");
  if (bVar1) {
    GRandomizeLoadOrder = 1;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"FileOpenLog");
  return bVar1;
}

// CheckForFilePackageOpenLogCommandLine @ 141ee0320

bool __cdecl CheckForFilePackageOpenLogCommandLine(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"FilePackageOpenLog");
  return bVar1;
}

// ComparePackageIndices @ 141ee1760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ComparePackageIndices
          (FLinkerLoad *param_1,FLinkerLoad *param_2,FPackageIndex *param_3,FPackageIndex *param_4)

{
  int iVar1;
  int iVar2;
  FObjectExport *pFVar3;
  FObjectExport *pFVar4;
  FObjectImport *pFVar5;
  FObjectImport *pFVar6;
  ForAnyElementType FVar7;
  FStaticBasicLogRecord *pFVar8;
  bool bVar9;
  FString local_38;
  FString local_28;
  
  iVar1 = param_3->Index;
  if (iVar1 == 0) {
    if (param_4->Index == 0) {
      return true;
    }
  }
  else if ((0 < iVar1) && (0 < param_4->Index)) {
    iVar2 = param_4->Index + -1;
    if ((-1 < iVar1 + -1) &&
       (((iVar1 + -1 < (int)param_1->_padding_ && (-1 < iVar2)) && (iVar2 < (int)param_2->_padding_)
        ))) {
      pFVar3 = FLinkerTables::Exp((FLinkerTables *)&param_1->_padding_,(FPackageIndex)param_3->Index
                                 );
      pFVar4 = FLinkerTables::Exp((FLinkerTables *)&param_2->_padding_,(FPackageIndex)param_4->Index
                                 );
      GetTableKey(&local_28,param_1,pFVar3);
      GetTableKey(&local_38,param_2,pFVar4);
      if (local_28.Data.ArrayNum == local_38.Data.ArrayNum) {
        if (local_28.Data.ArrayNum < 2) {
          bVar9 = true;
        }
        else {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                             (wchar_t *)local_38.Data.AllocatorInstance.Data);
          bVar9 = iVar1 == 0;
        }
      }
      else {
        bVar9 = local_28.Data.ArrayNum + local_38.Data.ArrayNum == 1;
      }
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      goto LAB_141ee1864;
    }
    if ((byte)LogArchiveDiff._0_1_ < 3) {
      return false;
    }
    pFVar8 = &LOG_Static;
    goto LAB_141ee1999;
  }
  if (-1 < iVar1) {
    return false;
  }
  if (-1 < param_4->Index) {
    return false;
  }
  iVar1 = FPackageIndex::ToImport(param_3);
  iVar2 = FPackageIndex::ToImport(param_4);
  if (((-1 < iVar1) && (iVar1 < (int)param_1->_padding_)) &&
     ((-1 < iVar2 && (iVar2 < (int)param_2->_padding_)))) {
    pFVar5 = FLinkerTables::Imp((FLinkerTables *)&param_1->_padding_,(FPackageIndex)param_3->Index);
    pFVar6 = FLinkerTables::Imp((FLinkerTables *)&param_2->_padding_,(FPackageIndex)param_4->Index);
    GetTableKey(&local_38,param_1,pFVar5);
    GetTableKey(&local_28,param_2,pFVar6);
    if (local_38.Data.ArrayNum == local_28.Data.ArrayNum) {
      if (local_38.Data.ArrayNum < 2) {
        bVar9 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                           (wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar9 = iVar1 == 0;
      }
    }
    else {
      bVar9 = local_38.Data.ArrayNum + local_28.Data.ArrayNum == 1;
    }
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
LAB_141ee1864:
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
      return bVar9;
    }
    return bVar9;
  }
  if ((byte)LogArchiveDiff._0_1_ < 3) {
    return false;
  }
  pFVar8 = &LOG_Static;
LAB_141ee1999:
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogArchiveDiff);
  return false;
}

// CompareTableItem @ 141ee19d0

bool __cdecl
CompareTableItem(FLinkerLoad *param_1,FLinkerLoad *param_2,FObjectExport *param_3,
                FObjectExport *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  
  if ((((param_3->_padding_ == param_4->_padding_) &&
       (param_3->PackageFlags == param_4->PackageFlags)) &&
      (param_3->ObjectFlags == param_4->ObjectFlags)) &&
     (param_3->SerialSize == param_4->SerialSize)) {
    uVar1 = param_3->field_0x4c;
    uVar2 = param_4->field_0x4c;
    if ((((((param_3->bForcedExport ^ param_4->bForcedExport) & 1U) == 0) &&
         (((uVar1 ^ uVar2) & 2) == 0)) &&
        ((((uVar1 ^ uVar2) & 4) == 0 &&
         ((((uVar1 ^ uVar2) & 8) == 0 && (((uVar1 ^ uVar2) & 0x10) == 0)))))) &&
       ((((uVar1 ^ uVar2) & 0x20) == 0 &&
        ((((((uVar1 ^ uVar2) & 0x40) == 0 &&
           (bVar3 = ComparePackageIndices
                              (param_1,param_2,&param_3->TemplateIndex,&param_4->TemplateIndex),
           bVar3)) &&
          (bVar3 = ComparePackageIndices
                             (param_1,param_2,(FPackageIndex *)&param_3->_padding_,
                              (FPackageIndex *)&param_4->_padding_), bVar3)) &&
         (bVar3 = ComparePackageIndices(param_1,param_2,&param_3->ClassIndex,&param_4->ClassIndex),
         bVar3)))))) {
      bVar3 = ComparePackageIndices(param_1,param_2,&param_3->SuperIndex,&param_4->SuperIndex);
      return bVar3;
    }
  }
  return false;
}

// ConvertItemToText @ 141ee4040

FString * __cdecl
ConvertItemToText(FString *__return_storage_ptr__,FObjectExport *param_1,FLinkerLoad *param_2)

{
  FPackageIndex FVar1;
  FObjectExport *pFVar2;
  FObjectImport *pFVar3;
  byte local_res8 [8];
  byte local_res10;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if ((param_1->ClassIndex).Index == 0) {
    FNameEntryId::FromValidEName((EName)local_res8);
  }
  else {
    FLinkerTables::ImpExp
              ((FLinkerTables *)&param_2->_padding_,(FPackageIndex)(param_1->ClassIndex).Index);
  }
  FVar1.Index = (param_1->TemplateIndex).Index;
  local_res8[0] = param_1->bIsInheritedInstance;
  local_res10 = param_1->bIsAsset;
  if (FVar1.Index == 0) {
    FString::FString(&local_60,L"NULL");
  }
  else if (FVar1.Index < 1) {
    pFVar3 = FLinkerTables::Imp((FLinkerTables *)&param_2->_padding_,FVar1);
    GetTableKey(&local_60,param_2,pFVar3);
  }
  else {
    pFVar2 = FLinkerTables::Exp((FLinkerTables *)&param_2->_padding_,FVar1);
    GetTableKey(&local_60,param_2,pFVar2);
  }
  FVar1.Index = (param_1->SuperIndex).Index;
  if (FVar1.Index == 0) {
    FString::FString(&local_70,L"NULL");
  }
  else if (FVar1.Index < 1) {
    pFVar3 = FLinkerTables::Imp((FLinkerTables *)&param_2->_padding_,FVar1);
    GetTableKey(&local_70,param_2,pFVar3);
  }
  else {
    pFVar2 = FLinkerTables::Exp((FLinkerTables *)&param_2->_padding_,FVar1);
    GetTableKey(&local_70,param_2,pFVar2);
  }
  GetTableKey(&local_50,param_2,param_1);
  FString::PrintfImpl(__return_storage_ptr__,
                      L"%s Super: %s, Template: %s, Flags: %d, Size: %lld, PackageFlags: %d, ForcedExport: %d, NotForClient: %d, NotForServer: %d, NotAlwaysLoadedForEditorGame: %d, IsAsset: %d, IsInheritedInstance: %d, GeneratePublicHash: %d"
                     );
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DumpPackageHeaderDiffs_LinkerLoad @ 141eeb300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
DumpPackageHeaderDiffs_LinkerLoad
          (FPackageData *param_1,FPackageData *param_2,FString *param_3,int param_4)

{
  FTlsAutoCleanup FVar1;
  UObjectBaseUtility *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  size_t sVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  FLinkerLoad *this;
  FLinkerLoad *this_00;
  FLinkerManager *pFVar12;
  uint uVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStackY_1c8 [32];
  undefined1 local_187;
  undefined1 local_186 [2];
  int local_184;
  int local_180;
  int local_17c;
  FString local_178;
  FString *local_168;
  FString local_160;
  FString local_150;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  code *local_128;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  FString local_108;
  TStringView<wchar_t> local_f8;
  FScriptContainerElement *local_e8;
  undefined4 local_e0;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  undefined4 local_90;
  FScriptContainerElement *local_88;
  undefined4 local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  FScriptContainerElement *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_184 = param_4;
  local_168 = param_3;
  pFVar8 = FPaths::GetBaseFilename(&local_c8,param_3,true);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar6 = FString::Find(param_3,L":",1,CaseSensitive,FromStart,-1);
  FString::RightChop(param_3,&local_150,iVar6 + 1);
  pFVar8 = FPaths::GetPath(&local_d8,&local_150);
  if ((pFVar8->Data).ArrayNum == 0) {
    local_f8.DataPtr = L"";
  }
  else {
    local_f8.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  local_f8.Size = 0;
  if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen(local_f8.DataPtr);
    local_f8.Size = (int)sVar9;
  }
  local_e0 = 0;
  local_e8 = (FScriptContainerElement *)pwVar14;
  if ((FScriptContainerElement *)pwVar14 != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen(pwVar14);
    local_e0 = (undefined4)sVar9;
  }
  FPaths::CombineInternal(&local_178,&local_f8,2);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pwVar14 = L"\\:*?\"<>|\' ,.&!~\n\r\t@#";
  do {
    FString::ReplaceCharInlineCaseSensitive(&local_178,*pwVar14,L'_');
    pwVar14 = pwVar14 + 1;
  } while (pwVar14 != L"");
  local_98 = L"/SourceForDiff";
  local_88 = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    local_88 = local_178.Data.AllocatorInstance.Data;
  }
  local_a8.DataPtr = L"/Memory";
  local_80 = 0;
  local_a8.Size = 7;
  local_90 = 0xe;
  if (local_88 != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen((wchar_t *)local_88);
    local_80 = (undefined4)sVar9;
  }
  FPaths::CombineInternal(&local_160,&local_a8,3);
  local_68 = L"/DestForDiff";
  local_58 = (FScriptContainerElement *)L"";
  if (local_178.Data.ArrayNum != 0) {
    local_58 = local_178.Data.AllocatorInstance.Data;
  }
  local_50 = 0;
  local_78.DataPtr = L"/Memory";
  local_78.Size = 7;
  local_60 = 0xc;
  if (local_58 != (FScriptContainerElement *)0x0) {
    sVar9 = wcslen((wchar_t *)local_58);
    local_50 = (undefined4)sVar9;
  }
  FPaths::CombineInternal(&local_108,&local_78,3);
  local_138 = local_160.Data.AllocatorInstance.Data;
  iStack_130 = local_160.Data.ArrayNum + -1;
  if (local_160.Data.ArrayNum == 0) {
    iStack_130 = 0;
  }
  local_b8._12_4_ = uStack_12c;
  local_b8.Size = iStack_130;
  local_b8.DataPtr = (wchar_t *)local_160.Data.AllocatorInstance.Data;
  bVar4 = FPackageName::IsValidLongPackageName(&local_b8,true,(EErrorCode *)0x0);
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FPackageName::IsValidLongPackageName(SourceAssetPackageName, true )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                         ,0x62d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = GIsSavingPackage;
  local_17c = GAllowUnversionedContentInEditor;
  local_180 = GAllowCookedDataInEditorBuilds;
  GAllowCookedDataInEditorBuilds = 1;
  GIsSavingPackage = false;
  GAllowUnversionedContentInEditor = 1;
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_120 = &local_187;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_128,puVar10);
  FVar1 = pFVar11[0x2f];
  if (FVar1 != (FTlsAutoCleanup)0x0) {
    *(int *)FVar1 = *(int *)FVar1 + 1;
  }
  BeginLoad((FUObjectSerializeContext *)FVar1,(wchar_t *)0x0);
  this = FArchiveStackTraceWriter::CreateLinkerForPackage
                   ((FUObjectSerializeContext *)FVar1,&local_160,param_3,param_1);
  EndLoad((FUObjectSerializeContext *)FVar1);
  if (FVar1 != (FTlsAutoCleanup)0x0) {
    iVar6 = *(int *)FVar1 + -1;
    *(int *)FVar1 = iVar6;
    if (iVar6 < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("CurrentRefCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectThreadContext.h"
                         ,0x130,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar6 == 0) {
      FUObjectSerializeContext::~FUObjectSerializeContext((FUObjectSerializeContext *)FVar1);
      operator_delete((void *)FVar1,0x60);
    }
  }
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_110 = local_186;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_118,puVar10);
  FVar1 = pFVar11[0x2f];
  if (FVar1 != (FTlsAutoCleanup)0x0) {
    *(int *)FVar1 = *(int *)FVar1 + 1;
  }
  BeginLoad((FUObjectSerializeContext *)FVar1,(wchar_t *)0x0);
  this_00 = FArchiveStackTraceWriter::CreateLinkerForPackage
                      ((FUObjectSerializeContext *)FVar1,&local_108,param_3,param_2);
  EndLoad((FUObjectSerializeContext *)FVar1);
  if (FVar1 != (FTlsAutoCleanup)0x0) {
    iVar6 = *(int *)FVar1 + -1;
    *(int *)FVar1 = iVar6;
    if (iVar6 < 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("CurrentRefCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectThreadContext.h"
                         ,0x130,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar6 == 0) {
      FUObjectSerializeContext::~FUObjectSerializeContext((FUObjectSerializeContext *)FVar1);
      operator_delete((void *)FVar1,0x60);
    }
  }
  if (this != (FLinkerLoad *)0x0) {
    if (this_00 != (FLinkerLoad *)0x0) {
      iVar6 = (int)this->_padding_;
      if ((iVar6 != (int)this_00->_padding_) ||
         (bVar5 = CompareItems<FNameEntryId,int>
                            ((FNameEntryId *)this->_padding_,(FNameEntryId *)this_00->_padding_,
                             iVar6), !bVar5)) {
        if ((param_3->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
        }
        DumpTableDifferences<FNameEntryId>
                  (this,this_00,(TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *)&this->_padding_
                   ,(TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,pwVar14,
                   L"Name",local_184);
      }
      iVar6 = (int)this->_padding_;
      if (iVar6 == (int)this_00->_padding_) {
        uVar13 = 0;
        if (0 < iVar6) {
          lVar17 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar13 < (int)this_00->_padding_) {
              uVar7 = ~uVar13 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar16 = (longlong *)(this_00->_padding_ + lVar17);
            uVar7 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar7 = ~uVar13 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar15 = (longlong *)(this->_padding_ + lVar17);
            if ((((*plVar15 != *plVar16) ||
                 (*(longlong *)((longlong)plVar15 + 0x14) != *(longlong *)((longlong)plVar16 + 0x14)
                 )) || (*(longlong *)((longlong)plVar15 + 0xc) !=
                        *(longlong *)((longlong)plVar16 + 0xc))) ||
               (bVar5 = ComparePackageIndices
                                  (this,this_00,(FPackageIndex *)(plVar15 + 1),
                                   (FPackageIndex *)(plVar16 + 1)), !bVar5)) goto LAB_141eeb871;
            uVar13 = uVar13 + 1;
            lVar17 = lVar17 + 0x38;
          } while ((int)uVar13 < (int)this->_padding_);
        }
      }
      else {
LAB_141eeb871:
        if ((local_168->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(local_168->Data).AllocatorInstance.Data;
        }
        DumpTableDifferences<FObjectImport>
                  (this,this_00,
                   (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                   (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,pwVar14,
                   L"Import",local_184);
      }
      iVar6 = (int)this->_padding_;
      if (iVar6 == (int)this_00->_padding_) {
        uVar13 = 0;
        if (0 < iVar6) {
          do {
            uVar7 = 0;
            if ((int)uVar13 < (int)this_00->_padding_) {
              uVar7 = ~uVar13 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar17 = this_00->_padding_;
            uVar7 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar7 = ~uVar13 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar5 = CompareTableItem(this,this_00,
                                     (FObjectExport *)
                                     (this->_padding_ + (longlong)(int)uVar13 * 0x68),
                                     (FObjectExport *)((longlong)(int)uVar13 * 0x68 + lVar17));
            if (!bVar5) goto LAB_141eeb992;
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)this->_padding_);
        }
      }
      else {
LAB_141eeb992:
        if ((local_168->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(local_168->Data).AllocatorInstance.Data;
        }
        DumpTableDifferences<FObjectExport>
                  (this,this_00,
                   (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                   (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,pwVar14,
                   L"Export",local_184);
      }
    }
    pUVar2 = (UObjectBaseUtility *)this->_padding_;
    FLinkerLoad::Detach(this);
    pFVar12 = FLinkerManager::Get();
    FLinkerManager::RemoveLinker(pFVar12,this);
    if (pUVar2 != (UObjectBaseUtility *)0x0) {
      if ((*(uint *)&pUVar2[1].field_0x4 & 0xfffdbfff) != *(uint *)&pUVar2[1].field_0x4) {
        LOCK();
        *(uint *)&pUVar2[1].field_0x4 = *(uint *)&pUVar2[1].field_0x4 & 0xfffdbfff;
        UNLOCK();
      }
      UObjectBaseUtility::MarkAsGarbage(pUVar2);
    }
  }
  if (this_00 != (FLinkerLoad *)0x0) {
    pUVar2 = (UObjectBaseUtility *)this_00->_padding_;
    FLinkerLoad::Detach(this_00);
    pFVar12 = FLinkerManager::Get();
    FLinkerManager::RemoveLinker(pFVar12,this_00);
    if (pUVar2 != (UObjectBaseUtility *)0x0) {
      if ((*(uint *)&pUVar2[1].field_0x4 & 0xfffdbfff) != *(uint *)&pUVar2[1].field_0x4) {
        LOCK();
        *(uint *)&pUVar2[1].field_0x4 = *(uint *)&pUVar2[1].field_0x4 & 0xfffdbfff;
        UNLOCK();
      }
      UObjectBaseUtility::MarkAsGarbage(pUVar2);
    }
  }
  GAllowCookedDataInEditorBuilds = local_180;
  GAllowUnversionedContentInEditor = local_17c;
  GIsSavingPackage = bVar4;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextBuffer @ 141eebb60

void __cdecl EmptyLinkFunctionForGeneratedCodeTextBuffer(void)

{
  return;
}

// ExtensionToSegment @ 141ef2240

EPackageSegment __cdecl ExtensionToSegment(EPackageExtension param_1)

{
  code *pcVar1;
  bool bVar2;
  EPackageSegment EVar3;
  
  switch(param_1) {
  case Unspecified:
  case Asset:
  case Map:
  case TextAsset:
  case TextMap:
  case Custom:
  case EmptyString:
    goto switchD_141ef225d_caseD_0;
  case Exports:
    return Exports;
  case BulkDataDefault:
  case BulkDataOptional:
  case BulkDataMemoryMapped:
    return BulkDataDefault;
  case PayloadSidecar:
    return PayloadSidecar;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
switchD_141ef225d_caseD_0:
    return Header;
  }
}

// FindExportFromImport @ 141ef32a0

FPackageIndex __cdecl FindExportFromImport(FLinkerLoad *param_1,int param_2,FLinkerLoad *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPackageIndex FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FPackageIndex *pFVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong in_R9;
  TTuple<FName,FPackageIndex> local_28;
  undefined4 *puVar6;
  
  lVar9 = CONCAT44(in_register_00000014,param_2);
  uVar11 = (uint)param_3;
  if (((lVar9 == 0) || (lVar1 = *(longlong *)(lVar9 + 0x420), lVar1 == 0)) ||
     (*(int *)(lVar1 + 0x448) == *(int *)(lVar1 + 0x474))) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ImportLinker && ImportLinker->AsyncRoot && static_cast<FAsyncPackage*>(ImportLinker->AsyncRoot)->ObjectNameWithOuterToExport.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x938,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPackageIndex)iVar4;
    }
  }
  iVar4 = *(int *)(in_R9 + 0x10);
  *(undefined4 *)&param_1->_padding_ = 0;
  uVar8 = 0;
  if ((int)uVar11 < iVar4) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPackageIndex)iVar4;
    }
  }
  puVar10 = (undefined8 *)((longlong)(int)uVar11 * 0x38 + *(longlong *)(in_R9 + 8));
  uVar11 = *(uint *)(puVar10 + 1);
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
      FVar5 = FindExportFromImport
                        ((FLinkerLoad *)&stack0x00000018,param_2,(FLinkerLoad *)(ulonglong)~uVar11);
      puVar6 = (undefined4 *)CONCAT44(extraout_var,FVar5.Index);
    }
    else {
      if ((int)uVar11 < 1) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsExport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x5b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return (FPackageIndex)iVar4;
        }
      }
      FVar5 = FindImportFromExport
                        ((FLinkerLoad *)&stack0x00000008,param_2,
                         (FLinkerLoad *)(ulonglong)(*(int *)(puVar10 + 1) - 1));
      puVar6 = (undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
    }
    local_28._0_8_ = *puVar10;
    local_28._8_4_ = *puVar6;
    pFVar7 = TMapBase<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
             ::Find((TMapBase<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
                     *)(*(longlong *)(lVar9 + 0x420) + 0x440),&local_28);
    if (pFVar7 != (FPackageIndex *)0x0) {
      *(int *)&param_1->_padding_ = pFVar7->Index;
    }
  }
  return (FPackageIndex)(int)param_1;
}

// FindExportFromObject @ 141ef3410

FPackageIndex __cdecl FindExportFromObject(FLinkerLoad *param_1,UObject *param_2)

{
  FPackageIndex FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageIndex FVar6;
  uint uVar7;
  FPackageIndex *pFVar8;
  FObjectExport *pFVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong in_R8;
  longlong lVar13;
  undefined4 local_res8;
  uint local_res10;
  TTuple<FName,FPackageIndex> local_48;
  
  if ((((param_2 == (UObject *)0x0) ||
       (lVar13 = *(longlong *)&param_2[0x1a].field_0x10, lVar13 == 0)) ||
      (*(int *)(lVar13 + 0x448) == *(int *)(lVar13 + 0x474))) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Linker && Linker->AsyncRoot && static_cast<FAsyncPackage*>(Linker->AsyncRoot)->ObjectNameWithOuterToExport.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xd55,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return (FPackageIndex)iVar5;
  }
  lVar13 = *(longlong *)(in_R8 + 0x20);
  *(undefined4 *)&param_1->_padding_ = 0;
  FVar6.Index = (int)param_1;
  if (lVar13 != 0) {
    FindExportFromObject((FLinkerLoad *)&stack0x00000008,param_2);
    local_48._0_8_ = *(undefined8 *)(in_R8 + 0x18);
    local_48._8_4_ = local_res8;
    pFVar8 = TMapBase<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
             ::Find((TMapBase<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
                     *)(*(longlong *)&param_2[0x1a].field_0x10 + 0x440),&local_48);
    if (pFVar8 != (FPackageIndex *)0x0) {
      *(int *)&param_1->_padding_ = pFVar8->Index;
      return (FPackageIndex)FVar6.Index;
    }
    uVar11 = 0;
    if (0 < *(int *)&param_2->field_0x10) {
      lVar13 = 0;
      do {
        uVar12 = ~uVar11;
        uVar7 = 0;
        if ((int)uVar11 < *(int *)&param_2->field_0x10) {
          uVar7 = uVar12 >> 0x1f;
        }
        local_res10 = uVar12;
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return (FPackageIndex)iVar5;
        }
        plVar10 = (longlong *)(*(longlong *)&param_2->field_0x8 + lVar13);
        if (plVar10[5] == in_R8) {
LAB_141ef35e8:
          if (((int)uVar11 < 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("ImportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x67,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return (FPackageIndex)iVar5;
          }
          *(uint *)&param_1->_padding_ = uVar12;
          return (FPackageIndex)FVar6.Index;
        }
        if ((*plVar10 == *(longlong *)(in_R8 + 0x18)) &&
           (*(longlong *)((longlong)plVar10 + 0x14) ==
            *(longlong *)(*(longlong *)(in_R8 + 0x10) + 0x18))) {
          FVar1.Index = (int)plVar10[1];
          lVar2 = *(longlong *)(*(longlong *)(in_R8 + 0x20) + 0x18);
          if ((FVar1.Index == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("!Index.IsNull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0x59,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return (FPackageIndex)iVar5;
          }
          if (FVar1.Index < 0) {
            pFVar9 = (FObjectExport *)FLinkerTables::Imp((FLinkerTables *)&param_2->field_0x8,FVar1)
            ;
          }
          else {
            pFVar9 = FLinkerTables::Exp((FLinkerTables *)&param_2->field_0x8,FVar1);
          }
          uVar12 = local_res10;
          if (pFVar9->_padding_ == lVar2) goto LAB_141ef35e8;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0x38;
      } while ((int)uVar11 < *(int *)&param_2->field_0x10);
    }
  }
  return (FPackageIndex)FVar6.Index;
}

// FindImportFromExport @ 141ef3650

FPackageIndex __cdecl FindImportFromExport(FLinkerLoad *param_1,int param_2,FLinkerLoad *param_3)

{
  FLinkerTables *this;
  FLinkerTables *this_00;
  FPackageIndex FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FObjectExport *pFVar6;
  FObjectExport *pFVar7;
  undefined4 in_register_00000014;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong in_R9;
  longlong lVar11;
  longlong *plVar12;
  
  lVar8 = CONCAT44(in_register_00000014,param_2);
  uVar10 = (uint)param_3;
  uVar9 = 0;
  if ((int)uVar10 < *(int *)(in_R9 + 0x20)) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return (FPackageIndex)iVar5;
  }
  uVar9 = 0;
  plVar12 = (longlong *)((longlong)(int)uVar10 * 0x68 + *(longlong *)(in_R9 + 0x18));
  if (0 < *(int *)(lVar8 + 0x10)) {
    this = (FLinkerTables *)(lVar8 + 8);
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)(lVar8 + 0x10)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return (FPackageIndex)iVar5;
      }
      pFVar2 = (this->ImportMap).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + lVar11) == *plVar12) {
        FVar1.Index = *(int *)((longlong)plVar12 + 0xc);
        this_00 = (FLinkerTables *)(in_R9 + 8);
        if ((FVar1.Index == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("!Index.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0x59,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return (FPackageIndex)iVar5;
        }
        if (FVar1.Index < 0) {
          pFVar6 = (FObjectExport *)FLinkerTables::Imp(this_00,FVar1);
        }
        else {
          pFVar6 = FLinkerTables::Exp(this_00,FVar1);
        }
        if (*(longlong *)(pFVar2 + lVar11 + 0x14) == pFVar6->_padding_) {
          FVar1.Index = (int)plVar12[1];
          if ((FVar1.Index == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("!Index.IsNull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0x59,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return (FPackageIndex)iVar5;
          }
          if (FVar1.Index < 0) {
            pFVar6 = (FObjectExport *)FLinkerTables::Imp(this_00,FVar1);
          }
          else {
            pFVar6 = FLinkerTables::Exp(this_00,FVar1);
          }
          FVar1.Index = *(int *)(pFVar2 + lVar11 + 8);
          if ((FVar1.Index == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("!Index.IsNull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0x59,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return (FPackageIndex)iVar5;
          }
          if (FVar1.Index < 0) {
            pFVar7 = (FObjectExport *)FLinkerTables::Imp(this,FVar1);
          }
          else {
            pFVar7 = FLinkerTables::Exp(this,FVar1);
          }
          if (pFVar7->_padding_ == pFVar6->_padding_) {
            if (((int)uVar9 < 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("ImportIndex >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x67,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return (FPackageIndex)iVar5;
            }
            *(uint *)&param_1->_padding_ = ~uVar9;
            goto LAB_141ef38c1;
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x38;
    } while ((int)uVar9 < *(int *)(lVar8 + 0x10));
  }
  *(undefined4 *)&param_1->_padding_ = 0;
LAB_141ef38c1:
  return (FPackageIndex)(int)param_1;
}

// FindPackageReferencesInObject @ 141ef38f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FindPackageReferencesInObject
          (UObject *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<void___cdecl(FName,FString_const_&)> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  void *this;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  FString *local_68;
  undefined8 local_60;
  UObject *local_58 [2];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)param_3;
  lVar2 = *(longlong *)&param_3->field_0x8;
  local_68 = (FString *)0x0;
  local_60 = 0;
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  local_20[5] = lVar2;
  local_20[2] = (longlong)param_2;
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FindPackageReferencesInObject'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)local_48;
  local_20[3] = (longlong)&local_68;
  local_20[4] = lVar1;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FindPackageReferencesInObject'::__l2::<lambda_1>,void,UObject_const_*>
                  ::Call;
  }
  local_58[0] = param_1;
  UE::Core::Private::Function::CheckCallable(local_48[0]);
  pcVar3 = local_48[0];
  plVar4 = local_38;
  if (local_20 != (longlong *)0x0) {
    plVar4 = local_20;
  }
  this = (void *)(**(code **)(*plVar4 + 8))();
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<`FindPackageReferencesInObject'::__l2::<lambda_1>,void,UObject_const_*>
                ::Call) {
    `FindPackageReferencesInObject'::__l2::<lambda_1>::operator()(this,local_58[0]);
  }
  else {
    (*pcVar3)(this,local_58);
  }
  if (local_48[0] != (code *)0x0) {
    plVar4 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  DestructItems<FString,int>(local_68,(int)local_60);
  if (local_68 != (FString *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// GetAsyncIOPrecachePriorityAndFlags @ 141ef90a0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

EAsyncIOPriorityAndFlags __cdecl GetAsyncIOPrecachePriorityAndFlags(void)

{
  code *pcVar1;
  bool bVar2;
  EAsyncIOPriorityAndFlags EVar3;
  EAsyncIOPriorityAndFlags EVar4;
  
  if ((5 < (uint)GAsyncLoadingPrecachePriority) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GAsyncLoadingPrecachePriority >= AIOP_MIN && GAsyncLoadingPrecachePriority <= AIOP_MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x287,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  EVar3 = AIOP_CriticalPath;
  if (GAsyncLoadingPrecachePriority < 5) {
    EVar3 = GAsyncLoadingPrecachePriority;
  }
  EVar4 = AIOP_MIN;
  if (0 < (int)EVar3) {
    EVar4 = EVar3;
  }
  return EVar4 | AIOP_FLAG_PRECACHE;
}

// GetAsyncIOPriority @ 141ef9100

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

EAsyncIOPriorityAndFlags __cdecl GetAsyncIOPriority(void)

{
  code *pcVar1;
  EAsyncIOPriorityAndFlags EVar2;
  bool bVar3;
  EAsyncIOPriorityAndFlags EVar4;
  
  if ((5 < (uint)GAsyncLoadingPrecachePriority) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("GAsyncLoadingPrecachePriority >= AIOP_MIN && GAsyncLoadingPrecachePriority <= AIOP_MAX"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x287,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  EVar4 = AIOP_CriticalPath;
  if (GAsyncLoadingPrecachePriority < 5) {
    EVar4 = GAsyncLoadingPrecachePriority;
  }
  EVar2 = AIOP_MIN;
  if (0 < (int)EVar4) {
    EVar2 = EVar4;
  }
  return EVar2;
}

// GetRandomSerialNumber @ 141efa3d0

int __cdecl GetRandomSerialNumber(int param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      RandomStream.InitialSeed = GRandomizeLoadOrder;
      RandomStream.Seed = GRandomizeLoadOrder;
      _Init_thread_footer(&_TSS0);
    }
  }
  if (0 < param_1) {
    RandomStream.Seed = RandomStream.Seed * 0xbb38435 + 0x3619636b;
    return (int)(((float)(RandomStream.Seed >> 9 | 0x3f800000) - __real_3f800000) * (float)param_1);
  }
  return 0;
}

// GetTableKey @ 141efa740

FString * __cdecl
GetTableKey(FString *__return_storage_ptr__,FLinkerLoad *param_1,FObjectExport *param_2)

{
  FPackageIndex FVar1;
  bool bVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FObjectResource *pFVar5;
  FObjectExport *this;
  FString *pFVar6;
  undefined4 local_res8 [2];
  FName local_res18 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8[0] = 0;
  if ((param_2->ClassIndex).Index == 0) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res18[0].Number = 0;
    local_res18[0].ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  }
  else {
    pFVar5 = FLinkerTables::ImpExp
                       ((FLinkerTables *)&param_1->_padding_,
                        (FPackageIndex)(param_2->ClassIndex).Index);
    local_res18[0] = pFVar5->ObjectName;
  }
  FName::ToString((FName *)param_2,&local_38);
  FVar1.Index = param_2->_padding_;
  if (FVar1.Index == 0) {
    FPackageName::GetShortName(&local_58,(UPackage *)param_1->_padding_);
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if (FVar1.Index < 0) {
      this = (FObjectExport *)FLinkerTables::Imp((FLinkerTables *)&param_1->_padding_,FVar1);
    }
    else {
      this = FLinkerTables::Exp((FLinkerTables *)&param_1->_padding_,FVar1);
    }
    pFVar6 = FName::ToString((FName *)this,&local_48);
    if ((pFVar6->Data).ArrayNum == 0) {
      bVar3 = true;
      bVar2 = false;
    }
    else {
      bVar3 = true;
      bVar2 = false;
    }
  }
  FName::ToString(local_res18,&local_68);
  FString::PrintfImpl(__return_storage_ptr__,L"%s %s.%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTableKey @ 141efa8d0

FString * __cdecl
GetTableKey(FString *__return_storage_ptr__,FLinkerLoad *param_1,FObjectImport *param_2)

{
  FPackageIndex FVar1;
  FObjectExport *this;
  FString *pFVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  FName::ToString((FName *)param_2,&local_28);
  FVar1.Index = param_2->_padding_;
  if (FVar1.Index != 0) {
    if (FVar1.Index < 0) {
      this = (FObjectExport *)FLinkerTables::Imp((FLinkerTables *)&param_1->_padding_,FVar1);
    }
    else {
      this = FLinkerTables::Exp((FLinkerTables *)&param_1->_padding_,FVar1);
    }
    pFVar2 = FName::ToString((FName *)this,&local_38);
    if ((pFVar2->Data).ArrayNum == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
  }
  FName::ToString(&param_2->ClassName,&local_48);
  FString::PrintfImpl(__return_storage_ptr__,L"%s %s.%s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 141efaa00

uint __cdecl GetTypeHash(TTableItem<FNameEntryId> *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Key).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  return uVar2;
}

// GetTypeHash @ 141efaa30

uint __cdecl GetTypeHash(TTableItem<FObjectExport> *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Key).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  return uVar2;
}

// GetTypeHash @ 141efaa60

uint __cdecl GetTypeHash(TTableItem<FObjectImport> *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Key).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Key).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  return uVar2;
}

// IsEventDrivenLoaderEnabled @ 141efbc10

bool __cdecl IsEventDrivenLoaderEnabled(void)

{
  return true;
}

// LexToString @ 141efc0a0

wchar_t * __cdecl LexToString(EPackageExtension param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Unspecified:
  case EmptyString:
    goto switchD_141efc0c1_caseD_0;
  case Asset:
    return L".uasset";
  case Map:
    return L".umap";
  case TextAsset:
    return L".utxt";
  case TextMap:
    return L".utxtmap";
  case Custom:
    return L".CustomExtension";
  case Exports:
    return L".uexp";
  case BulkDataDefault:
    return L".ubulk";
  case BulkDataOptional:
    return L".uptnl";
  case BulkDataMemoryMapped:
    return L".m.ubulk";
  case PayloadSidecar:
    return L".upayload";
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                       ,0x7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
switchD_141efc0c1_caseD_0:
    return L"";
  }
}

// LexToString @ 141efc1b0

wchar_t * __cdecl LexToString(EPackageSegment param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Header:
    return L"Header";
  case Exports:
    return L"Exports";
  case BulkDataDefault:
    return L"BulkDataDefault";
  case BulkDataOptional:
    return L"BulkDataOptional";
  case BulkDataMemoryMapped:
    return L"BulkDataMemoryMapped";
  case PayloadSidecar:
    return L"PayloadSidecar";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                     ,0x22,L"");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// NotifyAsyncLoadingStateHasMaybeChanged @ 141f00070

void __cdecl NotifyAsyncLoadingStateHasMaybeChanged(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bEnabled = FParse::Param(pwVar2,L"TrackBootLoading");
      _Init_thread_footer(&_TSS0);
    }
  }
  if (bEnabled != false) {
    if (*piVar3 < _TSS1) {
      _Init_thread_header(&_TSS1);
      if (_TSS1 == -1) {
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Crit,4000);
        atexit(`NotifyAsyncLoadingStateHasMaybeChanged'::__l2::
               _dynamic_atexit_destructor_for__Crit__);
        _Init_thread_footer(&_TSS1);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&Crit);
    bVar1 = (*IsAsyncLoading)();
    if (bVar1 != bLastState) {
      NotifyLoadingStateChanged(bVar1,L"Async UObject");
      bLastState = bVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141f000f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&Crit);
    return;
  }
  return;
}

// SegmentToExtension @ 141f0f220

EPackageExtension __cdecl SegmentToExtension(EPackageSegment param_1)

{
  code *pcVar1;
  bool bVar2;
  EPackageExtension EVar3;
  
  switch(param_1) {
  case Header:
    goto switchD_141f0f23d_caseD_0;
  case Exports:
    return Exports;
  case BulkDataDefault:
    return BulkDataDefault;
  case BulkDataOptional:
    return BulkDataOptional;
  case BulkDataMemoryMapped:
    return BulkDataMemoryMapped;
  case PayloadSidecar:
    return PayloadSidecar;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackagePath.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
switchD_141f0f23d_caseD_0:
    return Unspecified;
  }
}

// ShouldDumpPropertyValueState @ 141f13640

bool __cdecl `anonymous_namespace'::ShouldDumpPropertyValueState(FProperty *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1->_padding_ + 0x18);
  while( true ) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      return true;
    }
    uVar2 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if ((uVar2 >> 0xe & 1) != 0) {
      return true;
    }
    if ((uVar2 >> 0x11 & 1) != 0) {
      return true;
    }
    if ((uVar2 >> 0xd & 1) != 0) break;
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 0x2e & 1) != 0) {
        bVar6 = ShouldDumpPropertyValueState((FProperty *)param_1[1]._padding_);
        if ((bVar6) &&
           (bVar6 = ShouldDumpPropertyValueState((FProperty *)param_1[1]._padding_), bVar6)) {
          return true;
        }
        return false;
      }
      if ((uVar2 >> 0x2f & 1) == 0) {
        if ((uVar2 >> 0x14 & 1) != 0) {
          pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
          if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
            bVar6 = pUVar5 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = (UScriptStruct *)param_1[1]._padding_ == pUVar5;
          }
          if (bVar6) {
            return true;
          }
          pUVar5 = TBaseStructure<FGuid>::Get();
          if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
            bVar6 = pUVar5 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = (UScriptStruct *)param_1[1]._padding_ == pUVar5;
          }
          if (bVar6) {
            return true;
          }
        }
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000000000) == 0) {
          return false;
        }
        if ((param_1[1]._padding_ == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ValueProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                               ,0x18,L"Expected ValueProperty to be initialized"), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
        param_1 = (FProperty *)param_1[1]._padding_;
      }
      else {
        param_1 = (FProperty *)param_1[1]._padding_;
      }
    }
    else {
      param_1 = (FProperty *)param_1[1]._padding_;
    }
    uVar1 = *(uint *)(param_1->_padding_ + 0x18);
  }
  return true;
}

// Z_Construct_UClass_UTextBuffer_NoRegister @ 141f1a940

UClass * __cdecl Z_Construct_UClass_UTextBuffer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TextBuffer",
               &Z_Registration_Info_UClass_UTextBuffer.InnerSingleton,
               UTextBuffer::StaticRegisterNativesUTextBuffer,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextBuffer>,
               InternalVTableHelperCtorCaller<UTextBuffer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBuffer.InnerSingleton;
}

// DefaultGetObjectDisplayName'' @ 15034de90

void __cdecl `dynamic_atexit_destructor_for_'FUObjectToken::DefaultGetObjectDisplayName__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FUObjectToken::DefaultGetObjectDisplayName,(FWriteAccessScope *)&local_28);
  if ((FUObjectToken::DefaultGetObjectDisplayName._16_4_ != 0) &&
     (FUObjectToken::DefaultGetObjectDisplayName._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FUObjectToken::DefaultGetObjectDisplayName._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FUObjectToken::DefaultGetObjectDisplayName.field_0x8,0,0,0x10);
    FUObjectToken::DefaultGetObjectDisplayName._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FUObjectToken::DefaultGetObjectDisplayName._8_8_ != 0) {
    FMemory::Free((void *)FUObjectToken::DefaultGetObjectDisplayName._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FUObjectToken::DefaultGetObjectDisplayName);
  return;
}

// DefaultMessageTokenActivated'' @ 15034df30

void __cdecl `dynamic_atexit_destructor_for_'FUObjectToken::DefaultMessageTokenActivated__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FUObjectToken::DefaultMessageTokenActivated,(FWriteAccessScope *)&local_28);
  if ((FUObjectToken::DefaultMessageTokenActivated._16_4_ != 0) &&
     (FUObjectToken::DefaultMessageTokenActivated._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FUObjectToken::DefaultMessageTokenActivated._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FUObjectToken::DefaultMessageTokenActivated.field_0x8,0,0,0x10)
    ;
    FUObjectToken::DefaultMessageTokenActivated._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FUObjectToken::DefaultMessageTokenActivated._8_8_ != 0) {
    FMemory::Free((void *)FUObjectToken::DefaultMessageTokenActivated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FUObjectToken::DefaultMessageTokenActivated);
  return;
}

// `dynamic_atexit_destructor_for_'BreakAtOffsetSettings'' @ 15034dfd0

void __cdecl
`FArchiveStackTraceWriter::Serialize'::__l2::_dynamic_atexit_destructor_for__BreakAtOffsetSettings__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance.Data;
  if (BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CFlushStreamingOnExit'' @ 15034dff0

void __cdecl _dynamic_atexit_destructor_for__CFlushStreamingOnExit__(void)

{
  CFlushStreamingOnExit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CFlushStreamingOnExit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadingAlwaysProcessPackages'' @ 15034e010

void __cdecl _dynamic_atexit_destructor_for__CVarAsyncLoadingAlwaysProcessPackages__(void)

{
  CVarAsyncLoadingAlwaysProcessPackages._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAsyncLoadingAlwaysProcessPackages);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadingPrecachePriority'' @ 15034e030

void __cdecl _dynamic_atexit_destructor_for__CVarAsyncLoadingPrecachePriority__(void)

{
  CVarAsyncLoadingPrecachePriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAsyncLoadingPrecachePriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadingThreadEnabled'' @ 15034e050

void __cdecl _dynamic_atexit_destructor_for__CVarAsyncLoadingThreadEnabled__(void)

{
  CVarAsyncLoadingThreadEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAsyncLoadingThreadEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEventDrivenLoaderEnabled'' @ 15034e070

void __cdecl _dynamic_atexit_destructor_for__CVarEventDrivenLoaderEnabled__(void)

{
  CVarEventDrivenLoaderEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEventDrivenLoaderEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRandomizeLoadOrder'' @ 15034e090

void __cdecl _dynamic_atexit_destructor_for__CVarRandomizeLoadOrder__(void)

{
  CVarRandomizeLoadOrder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRandomizeLoadOrder);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_EditorLoadPrecacheSizeKB'' @ 15034e0b0

void __cdecl _dynamic_atexit_destructor_for__CVar_EditorLoadPrecacheSizeKB__(void)

{
  CVar_EditorLoadPrecacheSizeKB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_EditorLoadPrecacheSizeKB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MaxIncomingRequestsToStall'' @ 15034e0d0

void __cdecl _dynamic_atexit_destructor_for__CVar_MaxIncomingRequestsToStall__(void)

{
  CVar_MaxIncomingRequestsToStall._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MaxIncomingRequestsToStall);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MaxPrecacheRequestsInFlight'' @ 15034e0f0

void __cdecl _dynamic_atexit_destructor_for__CVar_MaxPrecacheRequestsInFlight__(void)

{
  CVar_MaxPrecacheRequestsInFlight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MaxPrecacheRequestsInFlight);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MaxReadyRequestsToStallMB'' @ 15034e110

void __cdecl _dynamic_atexit_destructor_for__CVar_MaxReadyRequestsToStallMB__(void)

{
  CVar_MaxReadyRequestsToStallMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MaxReadyRequestsToStallMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ProcessPrestreamingRequests'' @ 15034e130

void __cdecl _dynamic_atexit_destructor_for__CVar_ProcessPrestreamingRequests__(void)

{
  CVar_ProcessPrestreamingRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ProcessPrestreamingRequests);
  return;
}

// `dynamic_atexit_destructor_for_'Crit'' @ 15034e150

void __cdecl
`NotifyAsyncLoadingStateHasMaybeChanged'::__l2::_dynamic_atexit_destructor_for__Crit__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015034e157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&Crit);
  return;
}

// `dynamic_atexit_destructor_for_'DiffOutputSettings'' @ 15034e170

void __cdecl
`FArchiveStackTrace::CompareWith'::__l70::_dynamic_atexit_destructor_for__DiffOutputSettings__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance.Data;
  if (DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'Empty'' @ 15034e190

void __cdecl
`FArchiveStackTraceWriter::GetDiffMap'::__l2::_dynamic_atexit_destructor_for__Empty__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = `public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
          ::__l2::Empty._0_8_;
  if (`public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
      ::__l2::Empty._0_8_ == 0) {
    return;
  }
  if (`public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
      ::__l2::Empty._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FPackagePathTestSubClassAutomationTestInstance'' @ 15034e1b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPackagePathTestSubClassAutomationTestInstance__(void)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)
             &FPackagePathTestSubClassAutomationTestInstance.field_0xf0);
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPackagePathTestSubClassAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FixedBootOrder'' @ 15034e1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FEDLBootNotificationManager::ConstructWaitingBootObjects'::__l2::
_dynamic_atexit_destructor_for__FixedBootOrder__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _FixedBootOrder;
  if (_FixedBootOrder == (void *)0x0) {
    return;
  }
  if (_FixedBootOrder != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogArchiveDiff'' @ 15034e200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogArchiveDiff__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogArchiveDiff);
  return;
}

// `dynamic_atexit_destructor_for_'LogArchiveObjectCrc32'' @ 15034e220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogArchiveObjectCrc32__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogArchiveObjectCrc32);
  return;
}

// `dynamic_atexit_destructor_for_'LogArchiveUObject'' @ 15034e240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogArchiveUObject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogArchiveUObject);
  return;
}

// `dynamic_atexit_destructor_for_'LogAsyncArchive'' @ 15034e260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAsyncArchive__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAsyncArchive);
  return;
}

// `dynamic_atexit_destructor_for_'LogLoadingDev'' @ 15034e280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLoadingDev__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLoadingDev);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15034e2a0

void __cdecl
`GetGEDLBootNotificationManager'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton.EDLBootNotificationManagerLock);
  if (::Singleton.CDORecursives.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.CDORecursives.AllocatorInstance.Data);
  }
  if (::Singleton.CDORecursiveStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.CDORecursiveStack.AllocatorInstance.Data);
  }
  if (::Singleton.PathsToFire.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.PathsToFire.AllocatorInstance.Data);
  }
  ::Singleton.PathToWaitingPackageNodes._72_4_ = 0;
  if (::Singleton.PathToWaitingPackageNodes._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.PathToWaitingPackageNodes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootWaitingPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootWaitingPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootWaitingPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton.PathToWaitingPackageNodes);
  ::Singleton.PathToState._72_4_ = 0;
  if (::Singleton.PathToState._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.PathToState._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootObjectState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootObjectState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FEDLBootObjectState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'SummaryRacePreventer'' @ 15034e340

void __cdecl _dynamic_atexit_destructor_for__SummaryRacePreventer__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015034e347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
  return;
}

