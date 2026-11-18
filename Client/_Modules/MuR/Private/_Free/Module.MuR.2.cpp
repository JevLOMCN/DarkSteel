// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 259

// CVarEnableGlobalMemoryTracking'' @ 1411d39e0

void __cdecl
`dynamic_initializer_for_'UE::Mutable::Private::FMemoryTrackingConsoleFlags::
CVarEnableGlobalMemoryTracking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UE::Mutable::Private::FMemoryTrackingConsoleFlags::CVarEnableGlobalMemoryTracking,
             L"mutable.EnableGlobalMemoryTracking",
             &UE::Mutable::Private::FMemoryTrackingConsoleFlags::bEnableGlobalMemoryTracking,
             L"Enables Mutable plugin global memory tracking, peak and total.",0);
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingConsoleFlags::
         CVarEnableGlobalMemoryTracking__);
  return;
}

// CmdDumpMutableGlobalMemoryAbsoluteCounter'' @ 1411d3a30

void __cdecl
`dynamic_initializer_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdDumpMutableGlobalMemoryAbsoluteCounter__(void)

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
    puVar1[3] = UE::Mutable::Private::FMemoryTrackingCommands::<lambda_26>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UE::Mutable::Private::FMemoryTrackingCommands::
              CmdDumpMutableGlobalMemoryAbsoluteCounter,
             L"mutable.DumpMutableGlobalMemoryAbsoluteCounter",
             L"Dump Mutable plugin global tracked memory absolute counter.",
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
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
         CmdDumpMutableGlobalMemoryAbsoluteCounter__);
  return;
}

// CmdDumpMutableGlobalMemoryCounter'' @ 1411d3b70

void __cdecl
`dynamic_initializer_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdDumpMutableGlobalMemoryCounter__(void)

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
    puVar1[3] = UE::Mutable::Private::FMemoryTrackingCommands::<lambda_25>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UE::Mutable::Private::FMemoryTrackingCommands::CmdDumpMutableGlobalMemoryCounter,
             L"mutable.DumpMutableGlobalMemoryCounter",
             L"Dump Mutable plugin global tracked memory counter.",
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
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
         CmdDumpMutableGlobalMemoryCounter__);
  return;
}

// CmdRestoreMutableGlobalMemoryCounter'' @ 1411d3cb0

void __cdecl
`dynamic_initializer_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdRestoreMutableGlobalMemoryCounter__(void)

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
    puVar1[3] = UE::Mutable::Private::FMemoryTrackingCommands::<lambda_28>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UE::Mutable::Private::FMemoryTrackingCommands::CmdRestoreMutableGlobalMemoryCounter,
             L"mutable.RestoreMutableGlobalMemoryCounter",
             L"Restore Mutable plugin global tracked memory counter.",
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
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
         CmdRestoreMutableGlobalMemoryCounter__);
  return;
}

// CmdZeroMutableGlobalMemoryCounter'' @ 1411d3df0

void __cdecl
`dynamic_initializer_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdZeroMutableGlobalMemoryCounter__(void)

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
    puVar1[3] = UE::Mutable::Private::FMemoryTrackingCommands::<lambda_27>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UE::Mutable::Private::FMemoryTrackingCommands::CmdZeroMutableGlobalMemoryCounter,
             L"mutable.ZeroMutableGlobalMemoryCounter",
             L"Zero Mutable plugin global tracked memory counter.",
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
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
         CmdZeroMutableGlobalMemoryCounter__);
  return;
}

// Mutex'' @ 1411d3f30

void __cdecl `dynamic_initializer_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex,4000);
  atexit(`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__);
  return;
}

// `dynamic_initializer_for_'CVarCodeRunnerForceInline'' @ 1411d3f60

void __cdecl _dynamic_initializer_for__CVarCodeRunnerForceInline__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCodeRunnerForceInline,L"mutable.CodeRunnerForceInline",local_res8,
             L"If true, force all Code Runners to be inline (do not split them into tasks).",0);
  atexit(_dynamic_atexit_destructor_for__CVarCodeRunnerForceInline__);
  return;
}

// `dynamic_initializer_for_'LogMuscleActivationConstraint'' @ 1411d3fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMuscleActivationConstraint,L"LogMuscleActivationConstraint",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogMuscleActivationConstraint__);
  return;
}

// `dynamic_initializer_for_'LogMutableCore'' @ 1411d3ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMutableCore__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMutableCore,L"LogMutableCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMutableCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMutableRuntime'' @ 1411d4030

void __cdecl _dynamic_initializer_for__ModuleRegistrantMutableRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MutableRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MutableRuntime",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMutableRuntimeModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1411d4080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1411d4110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1411d41a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1411d4230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1411d42c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1411d4350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1411d43e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1411d4470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1411d4500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1411d4590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotated'' @ 1411d4620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotated == (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotated>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotated,*pFVar1,
               L"Chaos XPBD Corotated Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedDet'' @ 1411d46b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotatedDet__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotatedDet ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedDet>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotatedDet");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedDet,*pFVar1,
               L"Chaos XPBD Corotated Constraint Det Compute","STATGROUP_Chaos","STATCAT_Advanced",
               L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChaosXPBDCorotatedPolar'' @ 1411d4740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChaosXPBDCorotatedPolar__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChaosXPBDCorotatedPolar ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosXPBDCorotatedPolar>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChaosXPBDCorotatedPolar");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosXPBDCorotatedPolar,*pFVar1,
               L"Chaos XPBD Corotated Constraint Polar Compute","STATGROUP_Chaos","STATCAT_Advanced"
               ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MutableCoreTask'' @ 1411d47d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MutableCoreTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MutableCoreTask == (FThreadSafeStaticStat<FStat_STAT_MutableCoreTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MutableCoreTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableCoreTask,*pFVar1,L"MutableCoreTask"
               ,"STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_StiffnessApplyValues'' @ 1411d4860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_StiffnessApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_StiffnessApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_StiffnessApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_StiffnessApplyValues,*pFVar1,
               L"Chaos PBD Stiffness Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PBD_WeightMapApplyValues'' @ 1411d48f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PBD_WeightMapApplyValues__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PBD_WeightMapApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_WeightMapApplyValues>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PBD_WeightMapApplyValues");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_WeightMapApplyValues,*pFVar1,
               L"Chaos PBD WeightMap Apply Values","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_ClosedTasks'' @ 1411d4980

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_ClosedTasks__(void)

{
  __GTraceCounterMutableRuntime_ClosedTasks.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/ClosedTasks",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_ClosedTasks.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_ClosedTasks__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_IssuedTasks'' @ 1411d49c0

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_IssuedTasks__(void)

{
  __GTraceCounterMutableRuntime_IssuedTasks.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/IssuedTasks",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_IssuedTasks.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_IssuedTasks__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_IssuedTasksOnHold'' @ 1411d4a00

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_IssuedTasksOnHold__
          (void)

{
  __GTraceCounterMutableRuntime_IssuedTasksOnHold.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/IssuedHoldTasks",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_IssuedTasksOnHold.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_IssuedTasksOnHold__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMutableRuntime_OpenTask'' @ 1411d4a40

void __cdecl
UE::Mutable::Private::_dynamic_initializer_for____GTraceCounterMutableRuntime_OpenTask__(void)

{
  __GTraceCounterMutableRuntime_OpenTask.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MutableRuntime/OpenTask",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMutableRuntime_OpenTask.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_OpenTask__);
  return;
}

// `dynamic_initializer_for_'s_imageFormatData'' @ 1411d4a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Mutable::Private::_dynamic_initializer_for__s_imageFormatData__(void)

{
  s_imageFormatData[0x14].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x14].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x14].BlackBlock[2] = 0xff;
  s_imageFormatData[0x14].BlackBlock[3] = 0xff;
  s_imageFormatData[0x14].BlackBlock[4] = 0xff;
  s_imageFormatData[0x14].BlackBlock[5] = 0xff;
  s_imageFormatData[0x14].BlackBlock[6] = 0xff;
  s_imageFormatData[0x14].BlackBlock[7] = 0xff;
  s_imageFormatData[0x14].BlackBlock[8] = '\0';
  s_imageFormatData[0x14].BlackBlock[9] = '\0';
  s_imageFormatData[0x14].BlackBlock[10] = '\0';
  s_imageFormatData[0x14].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x14].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x14].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x14].BlackBlock[0xe] = 0xff;
  s_imageFormatData[0x14].BlackBlock[0xf] = 0xff;
  s_imageFormatData[0x15].PixelsPerBlockX = '\x04';
  s_imageFormatData[0x15].PixelsPerBlockY = '\x04';
  s_imageFormatData[0x15].BytesPerBlock = 0x10;
  s_imageFormatData[0x15].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x15].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x15].BlackBlock[2] = 0xff;
  s_imageFormatData[0x15].BlackBlock[3] = 0xff;
  s_imageFormatData[0x15].BlackBlock[4] = 0xff;
  s_imageFormatData[0x15].BlackBlock[5] = 0xff;
  s_imageFormatData[0x15].BlackBlock[6] = 0xff;
  s_imageFormatData[0x15].BlackBlock[7] = 0xff;
  s_imageFormatData[0x15].BlackBlock[8] = '\0';
  s_imageFormatData[0x15].BlackBlock[9] = '\0';
  s_imageFormatData[0x15].BlackBlock[10] = '\0';
  s_imageFormatData[0x15].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x15].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x15].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x15].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x15].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x15].Channels = 4;
  s_imageFormatData[0x17].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x17].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x17].BlackBlock[2] = 0xff;
  s_imageFormatData[0x17].BlackBlock[3] = 0xff;
  s_imageFormatData[0x17].BlackBlock[4] = 0xff;
  s_imageFormatData[0x17].BlackBlock[5] = 0xff;
  s_imageFormatData[0x17].BlackBlock[6] = 0xff;
  s_imageFormatData[0x17].BlackBlock[7] = 0xff;
  s_imageFormatData[0x17].BlackBlock[8] = '\0';
  s_imageFormatData[0x17].BlackBlock[9] = '\0';
  s_imageFormatData[0x17].BlackBlock[10] = '\0';
  s_imageFormatData[0x17].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x17].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x17].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x17].BlackBlock[0xe] = 0xff;
  s_imageFormatData[0x17].BlackBlock[0xf] = 0xff;
  s_imageFormatData[0x18].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x18].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x18].BlackBlock[2] = 0xff;
  s_imageFormatData[0x18].BlackBlock[3] = 0xff;
  s_imageFormatData[0x18].BlackBlock[4] = 0xff;
  s_imageFormatData[0x18].BlackBlock[5] = 0xff;
  s_imageFormatData[0x18].BlackBlock[6] = 0xff;
  s_imageFormatData[0x18].BlackBlock[7] = 0xff;
  s_imageFormatData[0x18].BlackBlock[8] = '\0';
  s_imageFormatData[0x18].BlackBlock[9] = '\0';
  s_imageFormatData[0x18].BlackBlock[10] = '\0';
  s_imageFormatData[0x18].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x18].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x18].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x18].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x18].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x16].PixelsPerBlockX = '\x04';
  s_imageFormatData[0x16].PixelsPerBlockY = '\x04';
  s_imageFormatData[0x16].BytesPerBlock = 0x10;
  s_imageFormatData[0x1a].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x1a].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x1a].BlackBlock[2] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[3] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[4] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[5] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[6] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[7] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[8] = '\0';
  s_imageFormatData[0x1a].BlackBlock[9] = '\0';
  s_imageFormatData[0x1a].BlackBlock[10] = '\0';
  s_imageFormatData[0x1a].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x1a].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x1a].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x1a].BlackBlock[0xe] = 0xff;
  s_imageFormatData[0x1a].BlackBlock[0xf] = 0xff;
  s_imageFormatData[0x16].Channels = 2;
  s_imageFormatData[0x1b].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x1b].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x1b].BlackBlock[2] = 0xff;
  s_imageFormatData[0x1b].BlackBlock[3] = 0xff;
  s_imageFormatData[0x1b].BlackBlock[4] = 0xff;
  s_imageFormatData[0x1b].BlackBlock[5] = 0xff;
  s_imageFormatData[0x1b].BlackBlock[6] = 0xff;
  s_imageFormatData[0x1b].BlackBlock[7] = 0xff;
  s_imageFormatData[0x1b].BlackBlock[8] = '\0';
  s_imageFormatData[0x1b].BlackBlock[9] = '\0';
  s_imageFormatData[0x1b].BlackBlock[10] = '\0';
  s_imageFormatData[0x1b].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x1b].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x1b].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x1b].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x1b].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x17].PixelsPerBlockX = '\b';
  s_imageFormatData[0x17].PixelsPerBlockY = '\b';
  s_imageFormatData[0x17].BytesPerBlock = 0x10;
  s_imageFormatData[0x1d].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x1d].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x1d].BlackBlock[2] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[3] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[4] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[5] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[6] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[7] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[8] = '\0';
  s_imageFormatData[0x1d].BlackBlock[9] = '\0';
  s_imageFormatData[0x1d].BlackBlock[10] = '\0';
  s_imageFormatData[0x1d].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x1d].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x1d].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x1d].BlackBlock[0xe] = 0xff;
  s_imageFormatData[0x1d].BlackBlock[0xf] = 0xff;
  s_imageFormatData[0x17].Channels = 3;
  s_imageFormatData[0x1e].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x1e].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x1e].BlackBlock[2] = 0xff;
  s_imageFormatData[0x1e].BlackBlock[3] = 0xff;
  s_imageFormatData[0x1e].BlackBlock[4] = 0xff;
  s_imageFormatData[0x1e].BlackBlock[5] = 0xff;
  s_imageFormatData[0x1e].BlackBlock[6] = 0xff;
  s_imageFormatData[0x1e].BlackBlock[7] = 0xff;
  s_imageFormatData[0x1e].BlackBlock[8] = '\0';
  s_imageFormatData[0x1e].BlackBlock[9] = '\0';
  s_imageFormatData[0x1e].BlackBlock[10] = '\0';
  s_imageFormatData[0x1e].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x1e].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x1e].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x1e].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x1e].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x18].PixelsPerBlockX = '\b';
  s_imageFormatData[0x18].PixelsPerBlockY = '\b';
  s_imageFormatData[0x18].BytesPerBlock = 0x10;
  s_imageFormatData[0x20].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x20].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x20].BlackBlock[2] = 0xff;
  s_imageFormatData[0x20].BlackBlock[3] = 0xff;
  s_imageFormatData[0x20].BlackBlock[4] = 0xff;
  s_imageFormatData[0x20].BlackBlock[5] = 0xff;
  s_imageFormatData[0x20].BlackBlock[6] = 0xff;
  s_imageFormatData[0x20].BlackBlock[7] = 0xff;
  s_imageFormatData[0x20].BlackBlock[8] = '\0';
  s_imageFormatData[0x20].BlackBlock[9] = '\0';
  s_imageFormatData[0x20].BlackBlock[10] = '\0';
  s_imageFormatData[0x20].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x20].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x20].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x20].BlackBlock[0xe] = 0xff;
  s_imageFormatData[0x20].BlackBlock[0xf] = 0xff;
  s_imageFormatData[0x18].Channels = 4;
  s_imageFormatData[0x19].PixelsPerBlockX = '\b';
  s_imageFormatData[0x19].PixelsPerBlockY = '\b';
  s_imageFormatData[0x19].BytesPerBlock = 0x10;
  s_imageFormatData[0x16].BlackBlock[0] = '\0';
  s_imageFormatData[0x16].BlackBlock[1] = '\0';
  s_imageFormatData[0x16].BlackBlock[2] = '\0';
  s_imageFormatData[0x16].BlackBlock[3] = '\0';
  s_imageFormatData[0x16].BlackBlock[4] = '\0';
  s_imageFormatData[0x16].BlackBlock[5] = '\0';
  s_imageFormatData[0x16].BlackBlock[6] = '\0';
  s_imageFormatData[0x16].BlackBlock[7] = '\0';
  s_imageFormatData[0x16].BlackBlock[8] = '\0';
  s_imageFormatData[0x16].BlackBlock[9] = '\0';
  s_imageFormatData[0x16].BlackBlock[10] = '\0';
  s_imageFormatData[0x16].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x16].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x16].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x16].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x16].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x19].Channels = 2;
  s_imageFormatData[0x21].BlackBlock[0] = 0xfc;
  s_imageFormatData[0x21].BlackBlock[1] = 0xfd;
  s_imageFormatData[0x21].BlackBlock[2] = 0xff;
  s_imageFormatData[0x21].BlackBlock[3] = 0xff;
  s_imageFormatData[0x21].BlackBlock[4] = 0xff;
  s_imageFormatData[0x21].BlackBlock[5] = 0xff;
  s_imageFormatData[0x21].BlackBlock[6] = 0xff;
  s_imageFormatData[0x21].BlackBlock[7] = 0xff;
  s_imageFormatData[0x21].BlackBlock[8] = '\0';
  s_imageFormatData[0x21].BlackBlock[9] = '\0';
  s_imageFormatData[0x21].BlackBlock[10] = '\0';
  s_imageFormatData[0x21].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x21].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x21].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x21].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x21].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x1a].PixelsPerBlockX = '\f';
  s_imageFormatData[0x1a].PixelsPerBlockY = '\f';
  s_imageFormatData[0x1a].BytesPerBlock = 0x10;
  s_imageFormatData[0x19].BlackBlock[0] = '\0';
  s_imageFormatData[0x19].BlackBlock[1] = '\0';
  s_imageFormatData[0x19].BlackBlock[2] = '\0';
  s_imageFormatData[0x19].BlackBlock[3] = '\0';
  s_imageFormatData[0x19].BlackBlock[4] = '\0';
  s_imageFormatData[0x19].BlackBlock[5] = '\0';
  s_imageFormatData[0x19].BlackBlock[6] = '\0';
  s_imageFormatData[0x19].BlackBlock[7] = '\0';
  s_imageFormatData[0x19].BlackBlock[8] = '\0';
  s_imageFormatData[0x19].BlackBlock[9] = '\0';
  s_imageFormatData[0x19].BlackBlock[10] = '\0';
  s_imageFormatData[0x19].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x19].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x19].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x19].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x19].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x1a].Channels = 3;
  s_imageFormatData[0x1b].PixelsPerBlockX = '\f';
  s_imageFormatData[0x1b].PixelsPerBlockY = '\f';
  s_imageFormatData[0x1b].BytesPerBlock = 0x10;
  s_imageFormatData[0x1b].Channels = 4;
  s_imageFormatData[0x1c].BlackBlock[0] = '\0';
  s_imageFormatData[0x1c].BlackBlock[1] = '\0';
  s_imageFormatData[0x1c].BlackBlock[2] = '\0';
  s_imageFormatData[0x1c].BlackBlock[3] = '\0';
  s_imageFormatData[0x1c].BlackBlock[4] = '\0';
  s_imageFormatData[0x1c].BlackBlock[5] = '\0';
  s_imageFormatData[0x1c].BlackBlock[6] = '\0';
  s_imageFormatData[0x1c].BlackBlock[7] = '\0';
  s_imageFormatData[0x1c].BlackBlock[8] = '\0';
  s_imageFormatData[0x1c].BlackBlock[9] = '\0';
  s_imageFormatData[0x1c].BlackBlock[10] = '\0';
  s_imageFormatData[0x1c].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x1c].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x1c].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x1c].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x1c].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x1c].PixelsPerBlockX = '\f';
  s_imageFormatData[0x1c].PixelsPerBlockY = '\f';
  s_imageFormatData[0x1c].BytesPerBlock = 0x10;
  s_imageFormatData[0x1c].Channels = 2;
  s_imageFormatData[0x1d].PixelsPerBlockX = '\x06';
  s_imageFormatData[0x1d].PixelsPerBlockY = '\x06';
  s_imageFormatData[0x1d].BytesPerBlock = 0x10;
  s_imageFormatData[0x1d].Channels = 3;
  s_imageFormatData[0x1e].PixelsPerBlockX = '\x06';
  s_imageFormatData[0x1e].PixelsPerBlockY = '\x06';
  s_imageFormatData[0x1e].BytesPerBlock = 0x10;
  s_imageFormatData[0x1e].Channels = 4;
  s_imageFormatData[0x1f].BlackBlock[0] = '\0';
  s_imageFormatData[0x1f].BlackBlock[1] = '\0';
  s_imageFormatData[0x1f].BlackBlock[2] = '\0';
  s_imageFormatData[0x1f].BlackBlock[3] = '\0';
  s_imageFormatData[0x1f].BlackBlock[4] = '\0';
  s_imageFormatData[0x1f].BlackBlock[5] = '\0';
  s_imageFormatData[0x1f].BlackBlock[6] = '\0';
  s_imageFormatData[0x1f].BlackBlock[7] = '\0';
  s_imageFormatData[0x1f].BlackBlock[8] = '\0';
  s_imageFormatData[0x1f].BlackBlock[9] = '\0';
  s_imageFormatData[0x1f].BlackBlock[10] = '\0';
  s_imageFormatData[0x1f].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x1f].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x1f].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x1f].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x1f].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x1f].PixelsPerBlockX = '\x06';
  s_imageFormatData[0x1f].PixelsPerBlockY = '\x06';
  s_imageFormatData[0x1f].BytesPerBlock = 0x10;
  s_imageFormatData[0x1f].Channels = 2;
  s_imageFormatData[0x20].PixelsPerBlockX = '\n';
  s_imageFormatData[0x20].PixelsPerBlockY = '\n';
  s_imageFormatData[0x20].BytesPerBlock = 0x10;
  s_imageFormatData[0x20].Channels = 3;
  s_imageFormatData[0x21].PixelsPerBlockX = '\n';
  s_imageFormatData[0x21].PixelsPerBlockY = '\n';
  s_imageFormatData[0x21].BytesPerBlock = 0x10;
  s_imageFormatData[0x21].Channels = 4;
  s_imageFormatData[0x22].BlackBlock[0] = '\0';
  s_imageFormatData[0x22].BlackBlock[1] = '\0';
  s_imageFormatData[0x22].BlackBlock[2] = '\0';
  s_imageFormatData[0x22].BlackBlock[3] = '\0';
  s_imageFormatData[0x22].BlackBlock[4] = '\0';
  s_imageFormatData[0x22].BlackBlock[5] = '\0';
  s_imageFormatData[0x22].BlackBlock[6] = '\0';
  s_imageFormatData[0x22].BlackBlock[7] = '\0';
  s_imageFormatData[0x22].BlackBlock[8] = '\0';
  s_imageFormatData[0x22].BlackBlock[9] = '\0';
  s_imageFormatData[0x22].BlackBlock[10] = '\0';
  s_imageFormatData[0x22].BlackBlock[0xb] = '\0';
  s_imageFormatData[0x22].BlackBlock[0xc] = '\0';
  s_imageFormatData[0x22].BlackBlock[0xd] = '\0';
  s_imageFormatData[0x22].BlackBlock[0xe] = '\0';
  s_imageFormatData[0x22].BlackBlock[0xf] = '\0';
  s_imageFormatData[0x22].PixelsPerBlockX = '\n';
  s_imageFormatData[0x22].PixelsPerBlockY = '\n';
  s_imageFormatData[0x22].BytesPerBlock = 0x10;
  s_imageFormatData[0x22].Channels = 2;
  return;
}

// `scalar_deleting_destructor' @ 14a9fafb0

void * __thiscall
FMutableRuntimeModule::_scalar_deleting_destructor_(FMutableRuntimeModule *this,uint param_1)

{
  *this = (FMutableRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// FImage_const_,1>_> @ 14a9fb4e0

void __cdecl
UE::Mutable::Private::operator>><unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>
          (FInputArchive *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  byte local_res18 [16];
  
  Private::operator>>(param_1,local_res18);
  if (1 < local_res18[0]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < sizeof...(Ts)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                       ,0x8b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (1 < (ulonglong)local_res18[0]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Loaders)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                       ,0x80,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Mutable::Private::TVariantLoadFromInputArchiveLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Load(unsigned___int64,UE::Mutable::Private::FInputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>&___ptr64)'
              ::__l2::Loaders)[local_res18[0]])(param_1,param_2);
  return;
}

// FMeshBufferSet>,TSizedDefaultAllocator<32>_> @ 14a9fb750

void __cdecl
UE::Mutable::Private::operator>><TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::
Private::FMeshBufferSet>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  undefined4 local_res18 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x20,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if ((int)(uVar8 | local_res10[0]) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x20;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
      *(undefined4 *)pFVar7 = local_res18[0];
      operator>><UE::Mutable::Private::FMeshBufferSet>(param_1,(FMeshBufferSet *)(pFVar7 + 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res10[0]);
  }
  return;
}

// FBoneName> @ 14a9fb900

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FBoneName>
          (FInputArchive *param_1,FBoneName *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ab6118d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,param_2,4);
  return;
}

// FBoneName,TSizedDefaultAllocator<32>_> @ 14a9fb910

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar7 = (longlong)(int)local_res10[0];
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FBoneName,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar9 = iVar6 - local_res10[0];
      if (((int)(uVar9 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar7 * 4;
        iVar6 = (*piVar1 - uVar9) - uVar5;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Private::operator>>(param_1,(uint *)((param_2->AllocatorInstance).Data +
                                          (longlong)(int)uVar9 * 4));
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FBonePose> @ 14a9fbab0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMesh::FBonePose>
          (FInputArchive *param_1,FBonePose *param_2)

{
  __m128 _Var1;
  __m128 _Var2;
  EBoneUsageFlags local_res8 [2];
  undefined1 local_38 [8];
  float local_30 [2];
  undefined8 local_28;
  float local_20 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  Private::operator>>(param_1,(uint *)param_2);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  param_2->BoneUsageFlags = local_res8[0];
  Private::operator>>(param_1,(float *)&local_18);
  Private::operator>>(param_1,(float *)((longlong)&local_18 + 4));
  Private::operator>>(param_1,(float *)&uStack_10);
  Private::operator>>(param_1,(float *)((longlong)&uStack_10 + 4));
  Private::operator>>(param_1,(float *)local_38);
  Private::operator>>(param_1,(float *)(local_38 + 4));
  Private::operator>>(param_1,(float *)(local_38 + 8));
  Private::operator>>(param_1,(float *)&local_28);
  Private::operator>>(param_1,(float *)((longlong)&local_28 + 4));
  Private::operator>>(param_1,local_20);
  _Var1.m128_f32[3] = 0.0;
  _Var1._0_12_ = _local_38;
  (param_2->BoneTransform).Translation = _Var1;
  _Var2.m128_f32[2] = local_20[0];
  _Var2.m128_u64[0] = local_28;
  _Var2.m128_f32[3] = 0.0;
  (param_2->BoneTransform).Scale3D = _Var2;
  (param_2->BoneTransform).Rotation.m128_u64[0] = local_18;
  (param_2->BoneTransform).Rotation.m128_u64[1] = uStack_10;
  return;
}

// FConstantResourceIndex,TSizedDefaultAllocator<32>_> @ 14a9fbd60

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::
FConstantResourceIndex_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FConstantResourceIndex,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar6 = (longlong)(int)local_res10[0];
  if (iVar4 < (int)local_res10[0]) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_res10[0] - iVar4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar4) {
      uVar8 = iVar4 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar6 * 4;
        iVar4 = (*piVar1 - uVar8) - uVar5;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar4 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4,4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FExtensionDataConstant> @ 14a9fbef0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FExtensionDataConstant>
          (FInputArchive *param_1,FExtensionDataConstant *param_2)

{
  FExtensionData *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  FExtensionData>(param_1,&param_2->Data);
  if ((param_2->Data).Object == (FExtensionData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                       ,0xab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2->Data).Object == (FExtensionData *)0x0) {
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
  }
  pFVar1 = (param_2->Data).Object;
  if (pFVar1->Origin != ConstantAlwaysLoaded) {
    if (pFVar1 == (FExtensionData *)0x0) {
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
    if (((param_2->Data).Object)->Origin != ConstantStreamed) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->Origin == FExtensionData::EOrigin::ConstantAlwaysLoaded || Data->Origin == FExtensionData::EOrigin::ConstantStreamed"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                         ,0xac,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// FExtensionDataConstant,TSizedDefaultAllocator<32>_> @ 14a9fbfd0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::
FExtensionDataConstant_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FExtensionDataConstant,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FExtensionDataConstant,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if ((int)(local_res10[0] | uVar8) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<UE::Mutable::Private::FExtensionDataConstant,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10);
      FExtensionData>(param_1,pTVar7);
      if (pTVar7->Object == (FExtensionData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                           ,0xab,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pTVar7->Object == (FExtensionData *)0x0) {
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
      }
      if (pTVar7->Object->Origin != ConstantAlwaysLoaded) {
        if (pTVar7->Object == (FExtensionData *)0x0) {
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
        if (pTVar7->Object->Origin != ConstantStreamed) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data->Origin == FExtensionData::EOrigin::ConstantAlwaysLoaded || Data->Origin == FExtensionData::EOrigin::ConstantStreamed"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                             ,0xac,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res10[0]);
  }
  return;
}

// FImageLODRange,TSizedDefaultAllocator<32>_> @ 14a9fc220

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FImageLODRange_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FImageLODRange,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar7 = (longlong)(int)local_res10[0];
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FImageLODRange,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0xc,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar9 = iVar6 - local_res10[0];
      if (((int)(uVar9 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar7 * 0xc;
        iVar6 = (*piVar1 - uVar9) - uVar5;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0xc,(longlong)iVar6 * 0xc);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc,0xc)
      ;
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FIntValueDesc> @ 14a9fc3e0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FParameterDesc::FIntValueDesc>
          (FInputArchive *param_1,FIntValueDesc *param_2)

{
  Private::operator>>(param_1,&param_2->Value);
  Private::operator>>(param_1,&param_2->Name);
  return;
}

// FIntValueDesc,TSizedDefaultAllocator<32>_> @ 14a9fc420

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FParameterDesc::
FIntValueDesc_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar6 = local_res10[0];
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar7 < (int)local_res10[0]) {
    iVar7 = local_res10[0] - iVar7;
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x18,iVar7);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar7) {
      uVar8 = iVar7 - local_res10[0];
      if ((int)(uVar8 | local_res10[0]) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar6,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x18;
      Private::operator>>(param_1,(short *)pFVar2);
      Private::operator>>(param_1,(FString *)(pFVar2 + 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res10[0]);
  }
  return;
}

// FMeshBuffer> @ 14a9fc5c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMeshBuffer>
          (FInputArchive *param_1,FMeshBuffer *param_2)

{
  uint local_res10 [6];
  
  Private::operator>>(param_1,local_res10);
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&param_2->Channels,local_res10[0],Default);
  if (local_res10[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(param_2->Channels).AllocatorInstance.Data,
               (ulonglong)local_res10[0] << 4);
  }
  operator>><UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::
  Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>(param_1,&param_2->Data);
  Private::operator>>(param_1,&param_2->ElementSize);
  return;
}

// FMeshBuffer,TSizedDefaultAllocator<32>_> @ 14a9fc630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMeshBuffer_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this;
  uint local_res18 [2];
  uint local_res20 [2];
  
  Private::operator>>(param_1,local_res18);
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_res18[0],Default);
  uVar5 = 0;
  if (local_res18[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x30);
      Private::operator>>(param_1,local_res20);
      TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
                (this,local_res20[0],Default);
      if (local_res20[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,(this->AllocatorInstance).Data,(ulonglong)local_res20[0] << 4);
      }
      operator>><UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE
      ::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                (param_1,(TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                          *)(this + 1));
      Private::operator>>(param_1,(uint *)&this[2].ArrayNum);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res18[0]);
  }
  return;
}

// FMeshContentRange,TSizedDefaultAllocator<32>_> @ 14a9fc740

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::
FMeshContentRange_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FMeshContentRange,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar7 = (longlong)(int)local_res10[0];
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FMeshContentRange,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar9 = iVar6 - local_res10[0];
      if (((int)(uVar9 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar7 * 8;
        iVar6 = (*piVar1 - uVar9) - uVar5;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 8,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8,8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FMeshSurface> @ 14a9fc8f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMeshSurface>
          (FInputArchive *param_1,FMeshSurface *param_2)

{
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar1;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar2;
  uint local_res10 [6];
  
  Private::operator>>(param_1,local_res10);
  TArray<UE::Mutable::Private::FSurfaceSubMesh,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&param_2->SubMeshes,local_res10[0],Default);
  if (local_res10[0] != 0) {
    FVar1 = (param_2->SubMeshes).AllocatorInstance.SecondaryData;
    FVar2 = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)param_2;
    if (FVar1 != (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
      FVar2 = FVar1;
    }
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,FVar2,(ulonglong)local_res10[0] * 0x14);
  }
  Private::operator>>(param_1,&param_2->BoneMapIndex);
  Private::operator>>(param_1,&param_2->BoneMapCount);
  Private::operator>>(param_1,&param_2->Id);
  return;
}

// FMeshSurface,TSizedDefaultAllocator<32>_> @ 14a9fc980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMeshSurface_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> this;
  uint local_res10 [2];
  uint local_res18 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar7 < (int)local_res10[0]) {
    iVar7 = local_res10[0] - iVar7;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FMeshSurface,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x38,iVar7);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar7) {
      uVar9 = iVar7 - local_res10[0];
      if ((int)(local_res10[0] | uVar9) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar9 != 0) {
        TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,uVar5,uVar9);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)
             ((longlong)(int)uVar9 * 0x38 + (longlong)(param_2->AllocatorInstance).Data);
      Private::operator>>(param_1,local_res18);
      TArray<UE::Mutable::Private::FSurfaceSubMesh,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum((TArray<UE::Mutable::Private::FSurfaceSubMesh,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)this,local_res18[0],Default);
      if (local_res18[0] != 0) {
        FVar6 = this;
        if (*(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)((longlong)this + 0x18) !=
            (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
          FVar6 = *(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)((longlong)this + 0x18);
        }
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,FVar6,(ulonglong)local_res18[0] * 0x14);
      }
      Private::operator>>(param_1,(uint *)((longlong)this + 0x28));
      Private::operator>>(param_1,(uint *)((longlong)this + 0x2c));
      Private::operator>>(param_1,(uint *)((longlong)this + 0x30));
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FParameterDesc> @ 14a9fcb70

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FParameterDesc>
          (FInputArchive *param_1,FParameterDesc *param_2)

{
  Private::operator>>(param_1,&param_2->Name);
  Private::operator>>(param_1,&param_2->UID);
  Private::operator>>(param_1,&param_2->Type);
  operator>><bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE
  ::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
  FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
  ::
  FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE
  ::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
  FInternalReferenceCollectorReferencerNameProvider>_>(param_1,&param_2->DefaultValue);
  operator>><TSizedDefaultAllocator<32>_>(param_1,&param_2->Ranges);
  FParameterDesc::FIntValueDesc_TSizedDefaultAllocator<32>_>(param_1,&param_2->PossibleValues);
  return;
}

// FParameterDesc,TSizedDefaultAllocator<32>_> @ 14a9fcbe0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FParameterDesc_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FParameterDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,0x10,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FParameterDesc,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x70,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if ((int)(uVar8 | local_res10[0]) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<UE::Mutable::Private::FParameterDesc,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x70;
      Private::operator>>(param_1,(FString *)pFVar7);
      Private::operator>>(param_1,(FGuid *)(pFVar7 + 0x10));
      Private::operator>>(param_1,(EParameterType *)(pFVar7 + 0x20));
      operator>><bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE
      ::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
      ::
      FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE
      ::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
      FInternalReferenceCollectorReferencerNameProvider>_>
                (param_1,(TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                          *)(pFVar7 + 0x30));
      operator>><TSizedDefaultAllocator<32>_>
                (param_1,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pFVar7 + 0x50));
      FParameterDesc::FIntValueDesc_TSizedDefaultAllocator<32>_>
                (param_1,(TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_>
                          *)(pFVar7 + 0x60));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res10[0]);
  }
  return;
}

// FProgram> @ 14a9fcdb0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FProgram>
          (FInputArchive *param_1,FProgram *param_2)

{
  Private::FProgram::Unserialise(param_2,param_1);
  return;
}

// FProjector> @ 14a9fcdd0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FProjector>
          (FInputArchive *param_1,FProjector *param_2)

{
  Private::operator>>(param_1,&param_2->type);
  Private::operator>>(param_1,(float *)&param_2->position);
  Private::operator>>(param_1,&(param_2->position).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->position).field0_0x0._s_0.Z);
  Private::operator>>(param_1,(float *)&param_2->direction);
  Private::operator>>(param_1,&(param_2->direction).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->direction).field0_0x0._s_0.Z);
  Private::operator>>(param_1,(float *)&param_2->up);
  Private::operator>>(param_1,&(param_2->up).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->up).field0_0x0._s_0.Z);
  Private::operator>>(param_1,(float *)&param_2->scale);
  Private::operator>>(param_1,&(param_2->scale).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->scale).field0_0x0._s_0.Z);
  Private::operator>>(param_1,&param_2->projectionAngle);
  return;
}

// FProjector,TSizedDefaultAllocator<32>_> @ 14a9fcea0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FProjector_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FProjector,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar7 = (longlong)(int)local_res10[0];
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,4,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FProjector,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x38,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar9 = iVar6 - local_res10[0];
      if (((int)(uVar9 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar7 * 0x38;
        iVar6 = (*piVar1 - uVar9) - uVar5;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0x38,(longlong)iVar6 * 0x38);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FProjector>(param_1,(FProjector *)
                          ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38));
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FRangeDesc> @ 14a9fd050

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FRangeDesc>
          (FInputArchive *param_1,FRangeDesc *param_2)

{
  Private::operator>>(param_1,&param_2->Name);
  Private::operator>>(param_1,&param_2->UID);
  Private::operator>>(param_1,&param_2->DimensionParameter);
  return;
}

// FRangeDesc,TSizedDefaultAllocator<32>_> @ 14a9fd090

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FRangeDesc_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FRangeDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar6 = local_res10[0];
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar7 < (int)local_res10[0]) {
    iVar7 = local_res10[0] - iVar7;
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FRangeDesc,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x28,iVar7);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar7) {
      uVar8 = iVar7 - local_res10[0];
      if ((int)(local_res10[0] | uVar8) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<UE::Mutable::Private::FRangeDesc,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,uVar6,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x28;
      Private::operator>>(param_1,(FString *)pFVar2);
      Private::operator>>(param_1,(FString *)(pFVar2 + 0x10));
      Private::operator>>(param_1,(int *)(pFVar2 + 0x20));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res10[0]);
  }
  return;
}

// FRomDataCompile,TSizedDefaultAllocator<32>_> @ 14a9fd3d0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FRomDataCompile_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FRomDataCompile,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar6 = (longlong)(int)local_res10[0];
  if (iVar4 < (int)local_res10[0]) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_res10[0] - iVar4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar4) {
      uVar8 = iVar4 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar6 * 4;
        iVar4 = (*piVar1 - uVar8) - uVar5;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar4 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4,4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FRomDataRuntime,TSizedDefaultAllocator<32>_> @ 14a9fd560

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FRomDataRuntime_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FRomDataRuntime,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar6 = (longlong)(int)local_res10[0];
  if (iVar4 < (int)local_res10[0]) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_res10[0] - iVar4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar4) {
      uVar8 = iVar4 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar6 * 4;
        iVar4 = (*piVar1 - uVar8) - uVar5;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar4 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 4,4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FShape> @ 14a9fd6f0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FShape>
          (FInputArchive *param_1,FShape *param_2)

{
  Private::operator>>(param_1,(float *)param_2);
  Private::operator>>(param_1,&(param_2->position).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->position).field0_0x0._s_0.Z);
  Private::operator>>(param_1,(float *)&param_2->up);
  Private::operator>>(param_1,&(param_2->up).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->up).field0_0x0._s_0.Z);
  Private::operator>>(param_1,(float *)&param_2->side);
  Private::operator>>(param_1,&(param_2->side).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->side).field0_0x0._s_0.Z);
  Private::operator>>(param_1,(float *)&param_2->size);
  Private::operator>>(param_1,&(param_2->size).field0_0x0._s_0.Y);
  Private::operator>>(param_1,&(param_2->size).field0_0x0._s_0.Z);
  Private::operator>>(param_1,&param_2->type);
  return;
}

// FShape,TSizedDefaultAllocator<32>_> @ 14a9fd7b0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FShape_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FShape,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  lVar7 = (longlong)(int)local_res10[0];
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x34,4,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FShape,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x34,iVar6);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar9 = iVar6 - local_res10[0];
      if ((int)(uVar9 | local_res10[0]) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar9 != 0) {
        pFVar10 = (param_2->AllocatorInstance).Data + lVar7 * 0x34;
        iVar6 = (*piVar1 - uVar9) - uVar5;
        if (iVar6 != 0) {
          memmove(pFVar10,pFVar10 + (longlong)(int)uVar9 * 0x34,(longlong)iVar6 * 0x34);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x34,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar10 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x34;
      Private::operator>>(param_1,(float *)pFVar10);
      Private::operator>>(param_1,(float *)(pFVar10 + 4));
      Private::operator>>(param_1,(float *)(pFVar10 + 8));
      Private::operator>>(param_1,(float *)(pFVar10 + 0xc));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x10));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x14));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x18));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x1c));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x20));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x24));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x28));
      Private::operator>>(param_1,(float *)(pFVar10 + 0x2c));
      Private::operator>>(param_1,(uchar *)(pFVar10 + 0x30));
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FState> @ 14a9fda00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FProgram::FState>
          (FInputArchive *param_1,FState *param_2)

{
  uint local_res10 [2];
  
  Private::operator>>(param_1,&param_2->Name);
  Private::operator>>(param_1,&param_2->Root);
  Private::operator>>(param_1,local_res10);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_2->m_runtimeParameters,local_res10[0],Default);
  if (local_res10[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(param_2->m_runtimeParameters).AllocatorInstance.Data,
               (ulonglong)local_res10[0] << 2);
  }
  operator>><TSizedDefaultAllocator<32>_>(param_1,&param_2->m_updateCache);
  operator>><TTuple<unsigned_int,unsigned___int64>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->m_dynamicResources);
  return;
}

// FState,TSizedDefaultAllocator<32>_> @ 14a9fda90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FProgram::FState_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<UE::Mutable::Private::FProgram::FState,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res10 [2];
  uint local_res18 [4];
  
  Private::operator>>(param_1,local_res10);
  uVar6 = local_res10[0];
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar7 < (int)local_res10[0]) {
    iVar7 = local_res10[0] - iVar7;
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FProgram::FState,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x48,iVar7);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar7) {
      uVar9 = iVar7 - local_res10[0];
      if (((int)(local_res10[0] | uVar9) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        TArray<UE::Mutable::Private::FProgram::FState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_2,uVar6,uVar9);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar9 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x48;
      Private::operator>>(param_1,(FString *)pFVar2);
      Private::operator>>(param_1,(uint *)(pFVar2 + 0x10));
      Private::operator>>(param_1,local_res18);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 0x18),local_res18[0],Default);
      if (local_res18[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)&pFVar2[0x18].field_0x0,
                   (ulonglong)local_res18[0] << 2);
      }
      operator>><TSizedDefaultAllocator<32>_>
                (param_1,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 0x28));
      operator>><TTuple<unsigned_int,unsigned___int64>,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<TTuple<unsigned_int,unsigned___int64>,TSizedDefaultAllocator<32>_>
                          *)(pFVar2 + 0x38));
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// TMatrix<float>_>_> @ 14a9fe180

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>_>(FInputArchive *param_1,TIndirectObject<UE::Math::TMatrix<float>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->StoragePtr).Ptr == (TMatrix<float> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Private::operator>>(param_1,(param_2->StoragePtr).Ptr);
  return;
}

// FProjector>_> @ 14a9fe1e0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private
::FProjector>_>(FInputArchive *param_1,TIndirectObject<UE::Mutable::Private::FProjector> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->StoragePtr).Ptr == (FProjector *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator>><UE::Mutable::Private::FProjector>(param_1,(param_2->StoragePtr).Ptr);
  return;
}

// TIndirectObject<FString>_> @ 14a9fe240

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::Private::TIndirectObject<FString>_>
          (FInputArchive *param_1,TIndirectObject<FString> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->StoragePtr).Ptr == (FString *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Private::operator>>(param_1,(param_2->StoragePtr).Ptr);
  return;
}

// FImage_const_,1>,TSizedDefaultAllocator<32>_> @ 14a9fe440

void __cdecl
UE::Mutable::Private::operator>><TSharedPtr<UE::Mutable::Private::
FImage_const__1>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,(longlong)iVar6 << 4);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><UE::Mutable::Private::FImage>
                (param_1,(TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FLayout_const_,1>,TSizedDefaultAllocator<32>_> @ 14a9fe5d0

void __cdecl
UE::Mutable::Private::operator>><TSharedPtr<UE::Mutable::Private::
FLayout_const__1>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,(longlong)iVar6 << 4);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><UE::Mutable::Private::FLayout>
                (param_1,(TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FMaterial_const_,1>,TSizedDefaultAllocator<32>_> @ 14a9fe760

void __cdecl
UE::Mutable::Private::operator>><TSharedPtr<UE::Mutable::Private::
FMaterial_const__1>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,(longlong)iVar6 << 4);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><UE::Mutable::Private::FMaterial>
                (param_1,(TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FMesh_const_,1>,TSizedDefaultAllocator<32>_> @ 14a9fe8f0

void __cdecl
UE::Mutable::Private::operator>><TSharedPtr<UE::Mutable::Private::
FMesh_const__1>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,(longlong)iVar6 << 4);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><UE::Mutable::Private::FMesh>
                (param_1,(TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_> @ 14a9fea80

void __cdecl
UE::Mutable::Private::operator>><TSharedPtr<UE::Mutable::Private::
FPhysicsBody_const__1>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,(longlong)iVar6 << 4);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><UE::Mutable::Private::FPhysicsBody>
                (param_1,(TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FSkeleton_const_,1>,TSizedDefaultAllocator<32>_> @ 14a9fec10

void __cdecl
UE::Mutable::Private::operator>><TSharedPtr<UE::Mutable::Private::
FSkeleton_const__1>_TSizedDefaultAllocator<32>_>
          (FInputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  Private::operator>>(param_1,local_res10);
  uVar5 = local_res10[0];
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar6 < (int)local_res10[0]) {
    iVar6 = local_res10[0] - iVar6;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,(longlong)iVar6 << 4);
  }
  else {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if ((int)local_res10[0] < iVar6) {
      uVar8 = iVar6 - local_res10[0];
      if (((int)(uVar8 | local_res10[0]) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(param_2,uVar5,uVar8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      operator>><UE::Mutable::Private::FSkeleton>
                (param_1,(TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FExtensionData> @ 14a9feed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FExtensionData>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *param_2
          )

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FExtensionData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  TSharedRef<UE::Mutable::Private::FExtensionData,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  EOrigin local_res18 [8];
  FLLMScope local_res20 [2];
  uint local_88 [2];
  FMemScope local_80;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> local_78;
  FExtensionData *local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> local_48;
  TSharedRef<UE::Mutable::Private::FExtensionData,1> local_38;
  
  Private::operator>>(param_1,(int *)local_88);
  if (local_88[0] == 0xffffffff) {
    local_48.Object = (FExtensionData *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_48) {
      param_2->Object = (FExtensionData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return;
  }
  iVar1 = (param_1->History).ArrayNum;
  if ((int)local_88[0] < iVar1) {
    uVar7 = 0;
    if ((int)local_88[0] < iVar1) {
      uVar7 = ~local_88[0] >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = (param_1->History).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)(int)local_88[0] * 0x10 + 8);
    local_78.Object = *(FExtensionData **)(pFVar9 + (longlong)(int)local_88[0] * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.SharedReferenceCount.ReferenceController = pTVar2;
    if (param_2 != &local_78) {
      param_2->Object = local_78.Object;
      local_78.Object = (FExtensionData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_78.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((param_2->Object == (FExtensionData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                           ,0x121,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->History,local_88[0] + 1,No);
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId22,"Mutable_ExtensionDataUnserialise",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\ExtensionData.cpp"
                 ,0x16);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name23,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res20,LLMScope_Name23,false,None,Default,true);
    FMemScope::FMemScope(&local_80,&LLMScope_Name23,true);
    pTVar8 = MakeShared<UE::Mutable::Private::FExtensionData,1>(&local_38);
    pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar8->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((pFVar3 == (FExtensionData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    Private::operator>>(param_1,&pFVar3->Index);
    Private::operator>>(param_1,local_res18);
    pFVar3->Origin = local_res18[0];
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res20);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar3;
    local_58.SharedReferenceCount.ReferenceController = pTVar2;
    if (param_2 != &local_58) {
      param_2->Object = pFVar3;
      local_58.Object = (FExtensionData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar7 = 0;
    if ((int)local_88[0] < (param_1->History).ArrayNum) {
      uVar7 = ~local_88[0] >> 0x1f;
    }
    local_68 = pFVar3;
    local_60.ReferenceController = pTVar2;
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = (param_1->History).AllocatorInstance.Data + (longlong)(int)local_88[0] * 0x10;
    if (pFVar9 != (FScriptContainerElement *)&local_68) {
      *(FExtensionData **)pFVar9 = pFVar3;
      local_68 = (FExtensionData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar9 + 8),&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// FExtensionData> @ 14a9ff290

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FExtensionData>
          (FInputArchive *param_1,FExtensionData *param_2)

{
  EOrigin local_res10 [24];
  
  Private::operator>>(param_1,&param_2->Index);
  Private::operator>>(param_1,local_res10);
  param_2->Origin = local_res10[0];
  return;
}

// FImage> @ 14a9ff2d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FImage>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_2)

{
  TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_> *this;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> *paVar7;
  uint local_res18 [2];
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_78;
  FImage *local_68;
  FSharedReferencer<1> FStack_60;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_48;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_38 [2];
  
  Private::operator>>(param_1,(int *)local_res18);
  if (local_res18[0] == 0xffffffff) {
    local_48.Object = (FImage *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_48) {
      param_2->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  else {
    iVar1 = (param_1->History).ArrayNum;
    this = &param_1->History;
    if ((int)local_res18[0] < iVar1) {
      uVar5 = 0;
      if ((int)local_res18[0] < iVar1) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10 + 8);
      local_78.Object = *(FImage **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.SharedReferenceCount.ReferenceController = pTVar2;
      if (param_2 != &local_78) {
        param_2->Object = local_78.Object;
        local_78.Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_78.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((param_2->Object == (FImage *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x121,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum(this,local_res18[0] + 1,No);
      FImage::StaticUnserialise(local_38,param_1);
      local_58.Object = local_38[0].Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_38[0].SharedReferenceCount.ReferenceController;
      if (local_38[0].SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
         ) {
        paVar7 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar7 = &(local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      if (param_2 != &local_58) {
        param_2->Object = local_38[0].Object;
        local_58.Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      local_68 = local_38[0].Object;
      FStack_60.ReferenceController = local_38[0].SharedReferenceCount.ReferenceController;
      if (local_38[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      uVar5 = 0;
      if ((int)local_res18[0] < (param_1->History).ArrayNum) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data + (longlong)(int)local_res18[0] * 0x10;
      if (pFVar6 != (FScriptContainerElement *)&local_68) {
        *(FImage **)pFVar6 = local_68;
        local_68 = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar6 + 8),&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// FImage> @ 14a9ff560

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FImage>
          (FInputArchive *param_1,FImage *param_2)

{
  FImageDataStorage::Unserialise(&param_2->DataStorage,param_1);
  Private::operator>>(param_1,&param_2->Flags);
  return;
}

// FImageDataStorage> @ 14a9ff5a0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FImageDataStorage>
          (FInputArchive *param_1,FImageDataStorage *param_2)

{
  FImageDataStorage::Unserialise(param_2,param_1);
  return;
}

// FLayout> @ 14a9ff5c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FLayout>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLayout *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedRef<UE::Mutable::Private::FLayout,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FLLMScope local_res18 [2];
  EReductionMethod local_res20 [2];
  uint local_88;
  uint local_84;
  FMemScope local_80;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> local_78;
  FLayout *local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> local_48;
  TSharedRef<UE::Mutable::Private::FLayout,1> local_38;
  
  Private::operator>>(param_1,(int *)&local_84);
  if (local_84 == 0xffffffff) {
    local_48.Object = (FLayout *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_48) {
      param_2->Object = (FLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return;
  }
  iVar1 = (param_1->History).ArrayNum;
  if ((int)local_84 < iVar1) {
    uVar6 = 0;
    if ((int)local_84 < iVar1) {
      uVar6 = ~local_84 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = (param_1->History).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)(int)local_84 * 0x10 + 8);
    local_78.Object = *(FLayout **)(pFVar8 + (longlong)(int)local_84 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.SharedReferenceCount.ReferenceController = pTVar2;
    if (param_2 != &local_78) {
      param_2->Object = local_78.Object;
      local_78.Object = (FLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_78.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (param_2->Object == (FLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                         ,0x121,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->History,local_84 + 1,No);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name27,L"MutableRuntime");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(local_res18,LLMScope_Name27,false,None,Default,true);
    FMemScope::FMemScope(&local_80,&LLMScope_Name27,true);
    pTVar7 = MakeShared<UE::Mutable::Private::FLayout,1>(&local_38);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (pFVar3 == (FLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    Private::operator>>(param_1,&pFVar3->Size);
    Private::operator>>(param_1,&pFVar3->MaxSize);
    Private::operator>>(param_1,local_res20);
    pFVar3->Strategy = local_res20[0];
    Private::operator>>(param_1,local_res20);
    pFVar3->ReductionMethod = local_res20[0];
    Private::operator>>(param_1,&local_88);
    TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_>::SetNum
              (&pFVar3->Blocks,local_88,Default);
    if (local_88 != 0) {
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(pFVar3->Blocks).AllocatorInstance.Data,(ulonglong)local_88 << 5);
    }
    operator>><TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
              (param_1,&pFVar3->Masks);
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res18);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar3;
    local_58.SharedReferenceCount.ReferenceController = pTVar2;
    if (param_2 != &local_58) {
      param_2->Object = pFVar3;
      local_58.Object = (FLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar6 = 0;
    if ((int)local_84 < (param_1->History).ArrayNum) {
      uVar6 = ~local_84 >> 0x1f;
    }
    local_68 = pFVar3;
    local_60.ReferenceController = pTVar2;
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = (param_1->History).AllocatorInstance.Data + (longlong)(int)local_84 * 0x10;
    if (pFVar8 != (FScriptContainerElement *)&local_68) {
      *(FLayout **)pFVar8 = pFVar3;
      local_68 = (FLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar8 + 8),&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// FLayout> @ 14a9ff9a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FLayout>
          (FInputArchive *param_1,FLayout *param_2)

{
  EReductionMethod local_res10 [2];
  uint local_res18 [2];
  
  Private::operator>>(param_1,&param_2->Size);
  Private::operator>>(param_1,&param_2->MaxSize);
  Private::operator>>(param_1,local_res10);
  param_2->Strategy = local_res10[0];
  Private::operator>>(param_1,local_res10);
  param_2->ReductionMethod = local_res10[0];
  Private::operator>>(param_1,local_res18);
  TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_>::SetNum
            (&param_2->Blocks,local_res18[0],Default);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(param_2->Blocks).AllocatorInstance.Data,
               (ulonglong)local_res18[0] << 5);
  }
  operator>><TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Masks);
  return;
}

// FMaterial> @ 14a9ffa50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMaterial>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMaterial *this;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TSharedRef<UE::Mutable::Private::FMaterial,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FLLMScope local_res18 [2];
  uint local_res20 [2];
  FMemScope local_88;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> local_80;
  FMaterial *local_70;
  FSharedReferencer<1> local_68;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> local_60;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> local_50;
  TSharedRef<UE::Mutable::Private::FMaterial,1> local_40;
  
  Private::operator>>(param_1,(int *)local_res20);
  if (local_res20[0] == 0xffffffff) {
    local_50.Object = (FMaterial *)0x0;
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_50) {
      param_2->Object = (FMaterial *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_50.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    return;
  }
  iVar1 = (param_1->History).ArrayNum;
  if ((int)local_res20[0] < iVar1) {
    uVar6 = 0;
    if ((int)local_res20[0] < iVar1) {
      uVar6 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = (param_1->History).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)(int)local_res20[0] * 0x10 + 8);
    local_80.Object = *(FMaterial **)(pFVar8 + (longlong)(int)local_res20[0] * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80.SharedReferenceCount.ReferenceController = pTVar2;
    if (param_2 != &local_80) {
      param_2->Object = local_80.Object;
      local_80.Object = (FMaterial *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_80.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((param_2->Object == (FMaterial *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                           ,0x121,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->History,local_res20[0] + 1,No);
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId23,"Mutable_MaterialUnserialise",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Material.cpp"
                 ,0x17);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name24,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res18,LLMScope_Name24,false,None,Default,true);
    FMemScope::FMemScope(&local_88,&LLMScope_Name24,true);
    pTVar7 = MakeShared<UE::Mutable::Private::FMaterial,1>(&local_40);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    this = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.SharedReferenceCount.ReferenceController);
    if ((this == (FMaterial *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMaterial::Unserialise(this,param_1);
    FMemScope::~FMemScope(&local_88);
    FLLMScope::~FLLMScope(local_res18);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60.Object = this;
    local_60.SharedReferenceCount.ReferenceController = pTVar2;
    if (param_2 != &local_60) {
      param_2->Object = this;
      local_60.Object = (FMaterial *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_60.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar6 = 0;
    if ((int)local_res20[0] < (param_1->History).ArrayNum) {
      uVar6 = ~local_res20[0] >> 0x1f;
    }
    local_70 = this;
    local_68.ReferenceController = pTVar2;
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = (param_1->History).AllocatorInstance.Data + (longlong)(int)local_res20[0] * 0x10;
    if (pFVar8 != (FScriptContainerElement *)&local_70) {
      *(FMaterial **)pFVar8 = this;
      local_70 = (FMaterial *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar8 + 8),&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// FMaterial> @ 14a9ffe00

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMaterial>
          (FInputArchive *param_1,FMaterial *param_2)

{
  FMaterial::Unserialise(param_2,param_1);
  return;
}

// FMesh> @ 14a9ffe20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMesh>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_2)

{
  TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_> *this;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> *paVar7;
  uint local_res18 [2];
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_78;
  FMesh *local_68;
  FSharedReferencer<1> FStack_60;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_58;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_48;
  TSharedPtr<UE::Mutable::Private::FMesh,1> local_38 [2];
  
  Private::operator>>(param_1,(int *)local_res18);
  if (local_res18[0] == 0xffffffff) {
    local_48.Object = (FMesh *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_48) {
      param_2->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  else {
    iVar1 = (param_1->History).ArrayNum;
    this = &param_1->History;
    if ((int)local_res18[0] < iVar1) {
      uVar5 = 0;
      if ((int)local_res18[0] < iVar1) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10 + 8);
      local_78.Object = *(FMesh **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.SharedReferenceCount.ReferenceController = pTVar2;
      if (param_2 != &local_78) {
        param_2->Object = local_78.Object;
        local_78.Object = (FMesh *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_78.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((param_2->Object == (FMesh *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x121,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum(this,local_res18[0] + 1,No);
      Private::FMesh::StaticUnserialise(local_38,param_1);
      local_58.Object = local_38[0].Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_38[0].SharedReferenceCount.ReferenceController;
      if (local_38[0].SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
         ) {
        paVar7 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar7 = &(local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      if (param_2 != &local_58) {
        param_2->Object = local_38[0].Object;
        local_58.Object = (FMesh *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      local_68 = local_38[0].Object;
      FStack_60.ReferenceController = local_38[0].SharedReferenceCount.ReferenceController;
      if (local_38[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      uVar5 = 0;
      if ((int)local_res18[0] < (param_1->History).ArrayNum) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data + (longlong)(int)local_res18[0] * 0x10;
      if (pFVar6 != (FScriptContainerElement *)&local_68) {
        *(FMesh **)pFVar6 = local_68;
        local_68 = (FMesh *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar6 + 8),&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// FMesh> @ 14aa000b0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMesh>(FInputArchive *param_1,FMesh *param_2)

{
  Private::FMesh::Unserialise(param_2,param_1);
  return;
}

// FMeshBufferSet> @ 14aa000d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FMeshBufferSet>
          (FInputArchive *param_1,FMeshBufferSet *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this;
  uint local_res8 [2];
  uint local_res10 [2];
  EMeshBufferSetFlags local_res18 [4];
  
  Private::operator>>(param_1,&param_2->ElementCount);
  Private::operator>>(param_1,local_res8);
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::SetNum
            (&param_2->Buffers,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (param_2->Buffers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *)
             ((param_2->Buffers).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
      Private::operator>>(param_1,local_res10);
      TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
                (this,local_res10[0],Default);
      if (local_res10[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,(this->AllocatorInstance).Data,(ulonglong)local_res10[0] << 4);
      }
      operator>><UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE
      ::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                (param_1,(TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                          *)(this + 1));
      Private::operator>>(param_1,(uint *)&this[2].ArrayNum);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  param_2->Flags = local_res18[0];
  return;
}

// FPhysicsBody> @ 14aa00200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FPhysicsBody>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *param_2)

{
  TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_> *this;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res18 [4];
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> local_68;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> local_58;
  FPhysicsBody *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> local_38;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> local_28;
  
  Private::operator>>(param_1,(int *)local_res18);
  if (local_res18[0] == 0xffffffff) {
    local_28.Object = (FPhysicsBody *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_28) {
      param_2->Object = (FPhysicsBody *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    iVar1 = (param_1->History).ArrayNum;
    this = &param_1->History;
    if ((int)local_res18[0] < iVar1) {
      uVar5 = 0;
      if ((int)local_res18[0] < iVar1) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10 + 8);
      local_68.Object = *(FPhysicsBody **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.SharedReferenceCount.ReferenceController = pTVar2;
      if (param_2 != &local_68) {
        param_2->Object = local_68.Object;
        local_68.Object = (FPhysicsBody *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_68.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((param_2->Object == (FPhysicsBody *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x121,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum(this,local_res18[0] + 1,No);
      FPhysicsBody::StaticUnserialise(&local_38,param_1);
      local_58.Object = local_38.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_2 != &local_58) {
        param_2->Object = local_38.Object;
        local_58.Object = (FPhysicsBody *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      local_48 = local_38.Object;
      FStack_40.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar5 = 0;
      if ((int)local_res18[0] < (param_1->History).ArrayNum) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data + (longlong)(int)local_res18[0] * 0x10;
      if (pFVar6 != (FScriptContainerElement *)&local_48) {
        *(FPhysicsBody **)pFVar6 = local_48;
        local_48 = (FPhysicsBody *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar6 + 8),&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// FSkeleton> @ 14aa00470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FSkeleton>
          (FInputArchive *param_1,TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *param_2)

{
  TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_> *this;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res18 [4];
  TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> local_68;
  TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> local_58;
  FSkeleton *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<UE::Mutable::Private::FSkeleton,1> local_38;
  TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> local_28;
  
  Private::operator>>(param_1,(int *)local_res18);
  if (local_res18[0] == 0xffffffff) {
    local_28.Object = (FSkeleton *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_2 != &local_28) {
      param_2->Object = (FSkeleton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    iVar1 = (param_1->History).ArrayNum;
    this = &param_1->History;
    if ((int)local_res18[0] < iVar1) {
      uVar5 = 0;
      if ((int)local_res18[0] < iVar1) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10 + 8);
      local_68.Object = *(FSkeleton **)(pFVar6 + (longlong)(int)local_res18[0] * 0x10);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.SharedReferenceCount.ReferenceController = pTVar2;
      if (param_2 != &local_68) {
        param_2->Object = local_68.Object;
        local_68.Object = (FSkeleton *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_68.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((param_2->Object == (FSkeleton *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x121,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum(this,local_res18[0] + 1,No);
      FSkeleton::StaticUnserialise(&local_38,param_1);
      local_58.Object = local_38.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_2 != &local_58) {
        param_2->Object = local_38.Object;
        local_58.Object = (FSkeleton *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      local_48 = local_38.Object;
      FStack_40.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar5 = 0;
      if ((int)local_res18[0] < (param_1->History).ArrayNum) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->AllocatorInstance).Data + (longlong)(int)local_res18[0] * 0x10;
      if (pFVar6 != (FScriptContainerElement *)&local_48) {
        *(FSkeleton **)pFVar6 = local_48;
        local_48 = (FSkeleton *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar6 + 8),&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Private> @ 14aa007a0

void __cdecl
UE::Mutable::Private::operator>><UE::Mutable::Private::FModel::Private>
          (FInputArchive *param_1,Private *param_2)

{
  Private::FProgram::Unserialise(&param_2->Program,param_1);
  return;
}

// FImage_const_,1>_> @ 14aa008f0

void __cdecl
UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>
          (FOutputArchive *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  uchar local_res8 [8];
  <lambda_1> local_res10;
  
  local_res8[0] = param_2->TypeIndex;
  Private::operator<<(param_1,local_res8);
  local_res10.Ar = param_1;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`void___cdecl_UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(UE::Mutable::Private::FOutputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>,0,1,0,TVariant<unsigned_int,class_TSharedPtr<class_UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64>(unsigned___int64,`void___cdecl_UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(UE::Mutable::Private::FOutputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(&local_res10,param_2);
  return;
}

// FMeshBufferSet>,TSizedDefaultAllocator<32>_> @ 14aa00a30

void __cdecl
UE::Mutable::Private::operator<<<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::
Private::FMeshBufferSet>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x20;
      local_res18[0] = *(undefined4 *)pFVar6;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
      operator<<<UE::Mutable::Private::FMeshBufferSet>(param_1,(FMeshBufferSet *)(pFVar6 + 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FBoneName,TSizedDefaultAllocator<32>_> @ 14aa00b10

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      Private::operator<<(param_1,(uint *)((param_2->AllocatorInstance).Data +
                                          (longlong)(int)uVar4 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FConstantResourceIndex,TSizedDefaultAllocator<32>_> @ 14aa00e50

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::
FConstantResourceIndex_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FConstantResourceIndex,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 4,4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FExtensionDataConstant,TSizedDefaultAllocator<32>_> @ 14aa00ff0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::
FExtensionDataConstant_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FExtensionDataConstant,TSizedDefaultAllocator<32>_> *param_2)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uchar local_res10 [8];
  uint local_res18 [2];
  int local_res20 [2];
  int local_48;
  undefined1 local_44 [12];
  undefined8 *local_38;
  int *local_30;
  
  local_res18[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res18);
  uVar8 = 0;
  if (local_res18[0] != 0) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
      pvVar1 = *(void **)pFVar9;
      if (pvVar1 == (void *)0x0) {
        local_48 = -1;
        piVar6 = &local_48;
LAB_14aa0112e:
        Private::operator<<(param_1,piVar6);
      }
      else {
        piVar6 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,pvVar1);
        if (piVar6 != (int *)0x0) goto LAB_14aa0112e;
        local_res20[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_38 = (undefined8 *)(local_44 + 4);
        local_30 = local_res20;
        local_44._4_8_ = pvVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,(TPairInitializer<void_const_*_&&,int_const_&> *)local_44,
                   (bool *)&local_38);
        Private::operator<<(param_1,local_res20);
        lVar2 = *(longlong *)pFVar9;
        Private::operator<<(param_1,(short *)(lVar2 + 8));
        local_res10[0] = *(uchar *)(lVar2 + 10);
        Private::operator<<(param_1,local_res10);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res18[0]);
  }
  return;
}

// FImageLODRange,TSizedDefaultAllocator<32>_> @ 14aa01170

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FImageLODRange_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FImageLODRange,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xc,0xc)
      ;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FIntValueDesc,TSizedDefaultAllocator<32>_> @ 14aa01270

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FParameterDesc::
FIntValueDesc_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar6 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x18;
      Private::operator<<(param_1,(short *)pFVar1);
      Private::operator<<(param_1,(FString *)(pFVar1 + 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res10[0]);
  }
  return;
}

// FMeshBuffer,TSizedDefaultAllocator<32>_> @ 14aa013e0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FMeshBuffer_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x30;
      local_res18[0] = *(uint *)(pFVar6 + 8);
      Private::operator<<(param_1,local_res18);
      if (local_res18[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)pFVar6,(ulonglong)local_res18[0] << 4);
      }
      local_res20[0] = *(uint *)(pFVar6 + 0x20);
      Private::operator<<(param_1,local_res20);
      if (local_res20[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)(pFVar6 + 0x10),local_res20[0]);
      }
      Private::operator<<(param_1,(uint *)(pFVar6 + 0x28));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FMeshContentRange,TSizedDefaultAllocator<32>_> @ 14aa01500

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::
FMeshContentRange_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FMeshContentRange,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 8,8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FMeshSurface,TSizedDefaultAllocator<32>_> @ 14aa01640

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FMeshSurface_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar6 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x38;
      local_res18[0] = *(uint *)(pFVar7 + 0x20);
      Private::operator<<(param_1,local_res18);
      if (local_res18[0] != 0) {
        pFVar4 = pFVar7;
        if (*(FScriptContainerElement **)(pFVar7 + 0x18) != (FScriptContainerElement *)0x0) {
          pFVar4 = *(FScriptContainerElement **)(pFVar7 + 0x18);
        }
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,pFVar4,(ulonglong)local_res18[0] * 0x14);
      }
      Private::operator<<(param_1,(uint *)(pFVar7 + 0x28));
      Private::operator<<(param_1,(uint *)(pFVar7 + 0x2c));
      Private::operator<<(param_1,(uint *)(pFVar7 + 0x30));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res10[0]);
  }
  return;
}

// FParameterDesc,TSizedDefaultAllocator<32>_> @ 14aa018a0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FParameterDesc_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FParameterDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  short *psVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uchar local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_48 [2];
  <lambda_1> local_40;
  
  local_res20[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res20);
  uVar7 = 0;
  if (local_res20[0] != 0) {
    do {
      uVar5 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x70;
      Private::operator<<(param_1,(FString *)pFVar8);
      Private::operator<<(param_1,(FGuid *)(pFVar8 + 0x10));
      Private::operator<<(param_1,(EParameterType *)(pFVar8 + 0x20));
      local_res10[0] = pFVar8[0x40].field_0x0;
      Private::operator<<(param_1,local_res10);
      local_40.Ar = param_1;
      (*switchD_14aa91dff::switchdataD_152295830[(byte)pFVar8[0x40].field_0x0])
                (&local_40,
                 (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                  *)(pFVar8 + 0x30));
      local_48[0] = *(uint *)(pFVar8 + 0x58);
      Private::operator<<(param_1,local_48);
      if (local_48[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)&pFVar8[0x50].field_0x0,
                   (ulonglong)local_48[0] << 2);
      }
      local_res18[0] = *(uint *)(pFVar8 + 0x68);
      Private::operator<<(param_1,local_res18);
      uVar6 = 0;
      if (local_res18[0] != 0) {
        do {
          uVar5 = (uint)uVar6;
          uVar4 = 0;
          if ((int)uVar5 < *(int *)(pFVar8 + 0x68)) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          psVar1 = (short *)(*(longlong *)&pFVar8[0x60].field_0x0 + (longlong)(int)uVar5 * 0x18);
          Private::operator<<(param_1,psVar1);
          Private::operator<<(param_1,(FString *)(psVar1 + 4));
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_res18[0]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res20[0]);
  }
  return;
}

// FProjector,TSizedDefaultAllocator<32>_> @ 14aa01ba0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FProjector_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FProjector,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FProjector>(param_1,(FProjector *)
                          ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x38));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FRangeDesc,TSizedDefaultAllocator<32>_> @ 14aa01c90

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FRangeDesc_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FRangeDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar6 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x28;
      Private::operator<<(param_1,(FString *)pFVar1);
      Private::operator<<(param_1,(FString *)(pFVar1 + 0x10));
      Private::operator<<(param_1,(int *)(pFVar1 + 0x20));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res10[0]);
  }
  return;
}

// FRomDataCompile,TSizedDefaultAllocator<32>_> @ 14aa01e30

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FRomDataCompile_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FRomDataCompile,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 4,4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FRomDataRuntime,TSizedDefaultAllocator<32>_> @ 14aa01ef0

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FRomDataRuntime_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FRomDataRuntime,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 4,4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FShape,TSizedDefaultAllocator<32>_> @ 14aa02070

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FShape_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FShape,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x34;
      Private::operator<<(param_1,(float *)pFVar6);
      Private::operator<<(param_1,(float *)(pFVar6 + 4));
      Private::operator<<(param_1,(float *)(pFVar6 + 8));
      Private::operator<<(param_1,(float *)(pFVar6 + 0xc));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x10));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x14));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x18));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x1c));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x20));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x24));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x28));
      Private::operator<<(param_1,(float *)(pFVar6 + 0x2c));
      Private::operator<<(param_1,(uchar *)(pFVar6 + 0x30));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  return;
}

// FState,TSizedDefaultAllocator<32>_> @ 14aa02310

void __cdecl
UE::Mutable::Private::operator<<<UE::Mutable::Private::FProgram::FState_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<UE::Mutable::Private::FProgram::FState,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_38 [4];
  
  local_res18[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res18);
  uVar7 = 0;
  if (local_res18[0] != 0) {
    do {
      uVar5 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x48;
      Private::operator<<(param_1,(FString *)pFVar1);
      Private::operator<<(param_1,(uint *)(pFVar1 + 0x10));
      local_res20[0] =
           *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1[0x20].field_0x0)->
                     AllocatorInstance).Data;
      Private::operator<<(param_1,local_res20);
      if (local_res20[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)&pFVar1[0x18].field_0x0,
                   (ulonglong)local_res20[0] << 2);
      }
      local_38[0] = *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                               &pFVar1[0x30].field_0x0)->AllocatorInstance).Data;
      Private::operator<<(param_1,local_38);
      if (local_38[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)&pFVar1[0x28].field_0x0,
                   (ulonglong)local_38[0] << 2);
      }
      local_res10[0] =
           *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1[0x40].field_0x0)->
                     AllocatorInstance).Data;
      Private::operator<<(param_1,local_res10);
      uVar6 = 0;
      if (local_res10[0] != 0) {
        do {
          uVar5 = (uint)uVar6;
          uVar4 = 0;
          if ((int)uVar5 <
              *(int *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1[0x40].field_0x0)->
                       AllocatorInstance).Data) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar8 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&pFVar1[0x38].field_0x0);
          Private::operator<<(param_1,puVar8);
          Private::operator<<(param_1,(ulong64 *)(puVar8 + 2));
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_res10[0]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res18[0]);
  }
  return;
}

// FImage_const_,1>,TSizedDefaultAllocator<32>_> @ 14aa02950

void __cdecl
UE::Mutable::Private::operator<<<TSharedPtr<UE::Mutable::Private::
FImage_const__1>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<void_const_*_&&,int_const_&> local_48;
  int **local_38;
  int *local_30;
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
      piVar1 = *(int **)pFVar8;
      if (piVar1 == (int *)0x0) {
        local_res20[0] = -1;
        piVar5 = local_res20;
LAB_14aa02a72:
        Private::operator<<(param_1,piVar5);
      }
      else {
        piVar5 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar1);
        if (piVar5 != (int *)0x0) goto LAB_14aa02a72;
        local_res18[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_38 = &local_48.Value;
        local_30 = local_res18;
        local_48.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,&local_48,(bool *)&local_38);
        Private::operator<<(param_1,local_res18);
        FImage::Serialise(*(FImage **)pFVar8,param_1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FLayout_const_,1>,TSizedDefaultAllocator<32>_> @ 14aa02ab0

void __cdecl
UE::Mutable::Private::operator<<<TSharedPtr<UE::Mutable::Private::
FLayout_const__1>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint local_res10 [2];
  int local_res18 [2];
  uint local_res20 [2];
  int local_58;
  uint local_54;
  uint local_50;
  undefined1 local_4c [12];
  undefined8 *local_40;
  int *local_38;
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
      pvVar1 = *(void **)pFVar9;
      if (pvVar1 == (void *)0x0) {
        local_58 = -1;
        piVar6 = &local_58;
LAB_14aa02c50:
        Private::operator<<(param_1,piVar6);
      }
      else {
        piVar6 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,pvVar1);
        if (piVar6 != (int *)0x0) goto LAB_14aa02c50;
        local_res18[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_40 = (undefined8 *)(local_4c + 4);
        local_38 = local_res18;
        local_4c._4_8_ = pvVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,(TPairInitializer<void_const_*_&&,int_const_&> *)local_4c,
                   (bool *)&local_40);
        Private::operator<<(param_1,local_res18);
        lVar2 = *(longlong *)pFVar9;
        Private::operator<<(param_1,(TIntVector2<int> *)(lVar2 + 8));
        Private::operator<<(param_1,(TIntVector2<int> *)(lVar2 + 0x10));
        local_54 = *(uint *)(lVar2 + 0x18);
        Private::operator<<(param_1,&local_54);
        local_50 = *(uint *)(lVar2 + 0x1c);
        Private::operator<<(param_1,&local_50);
        local_res20[0] = *(uint *)(lVar2 + 0x28);
        Private::operator<<(param_1,local_res20);
        if (local_res20[0] != 0) {
          (**(code **)((longlong)*param_1->Stream + 8))
                    (param_1->Stream,*(undefined8 *)(lVar2 + 0x20),(ulonglong)local_res20[0] << 5);
        }
        FImage_const__1>_TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_>
                            *)(lVar2 + 0x30));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FMaterial_const_,1>,TSizedDefaultAllocator<32>_> @ 14aa02c90

void __cdecl
UE::Mutable::Private::operator<<<TSharedPtr<UE::Mutable::Private::
FMaterial_const__1>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<void_const_*_&&,int_const_&> local_48;
  int **local_38;
  int *local_30;
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar8 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
      piVar1 = *(int **)pFVar9;
      if (piVar1 == (int *)0x0) {
        local_res20[0] = -1;
        piVar6 = local_res20;
LAB_14aa02de4:
        Private::operator<<(param_1,piVar6);
      }
      else {
        piVar6 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar1);
        if (piVar6 != (int *)0x0) goto LAB_14aa02de4;
        local_res18[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_38 = &local_48.Value;
        local_30 = local_res18;
        local_48.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,&local_48,(bool *)&local_38);
        Private::operator<<(param_1,local_res18);
        lVar2 = *(longlong *)pFVar9;
        Private::operator<<(param_1,(int *)(lVar2 + 0x10));
        operator<<<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>_>
                  (param_1,(TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
                            *)(lVar2 + 0x18));
        operator<<<FName,UE::Math::TVector4<float>_>
                  (param_1,(TMap<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
                            *)(lVar2 + 0x68));
        operator<<<FName,float>
                  (param_1,(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                            *)(lVar2 + 0xb8));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res10[0]);
  }
  return;
}

// FMesh_const_,1>,TSizedDefaultAllocator<32>_> @ 14aa02e20

void __cdecl
UE::Mutable::Private::operator<<<TSharedPtr<UE::Mutable::Private::
FMesh_const__1>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<void_const_*_&&,int_const_&> local_48;
  int **local_38;
  int *local_30;
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
      piVar1 = *(int **)pFVar8;
      if (piVar1 == (int *)0x0) {
        local_res20[0] = -1;
        piVar5 = local_res20;
LAB_14aa02f42:
        Private::operator<<(param_1,piVar5);
      }
      else {
        piVar5 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar1);
        if (piVar5 != (int *)0x0) goto LAB_14aa02f42;
        local_res18[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_38 = &local_48.Value;
        local_30 = local_res18;
        local_48.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,&local_48,(bool *)&local_38);
        Private::operator<<(param_1,local_res18);
        FMesh::Serialise(*(FMesh **)pFVar8,param_1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_> @ 14aa02f80

void __cdecl
UE::Mutable::Private::operator<<<TSharedPtr<UE::Mutable::Private::
FPhysicsBody_const__1>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<void_const_*_&&,int_const_&> local_48;
  int **local_38;
  int *local_30;
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
      piVar1 = *(int **)pFVar8;
      if (piVar1 == (int *)0x0) {
        local_res20[0] = -1;
        piVar5 = local_res20;
LAB_14aa030a2:
        Private::operator<<(param_1,piVar5);
      }
      else {
        piVar5 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar1);
        if (piVar5 != (int *)0x0) goto LAB_14aa030a2;
        local_res18[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_38 = &local_48.Value;
        local_30 = local_res18;
        local_48.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,&local_48,(bool *)&local_38);
        Private::operator<<(param_1,local_res18);
        FPhysicsBody::Serialise(*(FPhysicsBody **)pFVar8,param_1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FSkeleton_const_,1>,TSizedDefaultAllocator<32>_> @ 14aa030e0

void __cdecl
UE::Mutable::Private::operator<<<TSharedPtr<UE::Mutable::Private::
FSkeleton_const__1>_TSizedDefaultAllocator<32>_>
          (FOutputArchive *param_1,
          TArray<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<void_const_*_&&,int_const_&> local_48;
  int **local_38;
  int *local_30;
  
  local_res10[0] = param_2->ArrayNum;
  Private::operator<<(param_1,local_res10);
  uVar7 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
      piVar1 = *(int **)pFVar8;
      if (piVar1 == (int *)0x0) {
        local_res20[0] = -1;
        piVar5 = local_res20;
LAB_14aa03202:
        Private::operator<<(param_1,piVar5);
      }
      else {
        piVar5 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar1);
        if (piVar5 != (int *)0x0) goto LAB_14aa03202;
        local_res18[0] =
             *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_38 = &local_48.Value;
        local_30 = local_res18;
        local_48.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,&local_48,(bool *)&local_38);
        Private::operator<<(param_1,local_res18);
        FSkeleton::Serialise(*(FSkeleton **)pFVar8,param_1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}

// FImage_const_,1>_>_> @ 14aa03d80

void __cdecl
UE::Mutable::Private::operator<<<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::
FImage_const__1>_>_>
          (FOutputArchive *param_1,
          TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  <lambda_1> local_a0;
  TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res20[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  Private::operator<<(param_1,local_res20);
  iVar4 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14aa03e2e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar9;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_14aa03e2e:
  uVar12 = *(uint *)&param_2->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14aa03f30;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14aa03f30:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_2))
    break;
    pFVar2 = (FName *)(*(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    Private::operator<<(param_1,pFVar2);
    local_res10[0] = (uchar)pFVar2[3].ComparisonIndex.Value;
    Private::operator<<(param_1,local_res10);
    local_a0.Ar = param_1;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`void___cdecl_UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(UE::Mutable::Private::FOutputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>,0,1,0,TVariant<unsigned_int,class_TSharedPtr<class_UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64>(unsigned___int64,`void___cdecl_UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(UE::Mutable::Private::FOutputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'
      ::__l2::Invokers[(byte)pFVar2[3].ComparisonIndex.Value])
              (&local_a0,
               (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
               (pFVar2 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// CompareItems<UE::Mutable::Private::FBoxBody,int> @ 14aa89890

bool __cdecl
CompareItems<UE::Mutable::Private::FBoxBody,int>(FBoxBody *param_1,FBoxBody *param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    plVar4 = &param_2->_padding_;
    plVar3 = &param_1->_padding_;
    do {
      if ((int)plVar3[1] != (int)plVar4[1]) {
        return false;
      }
      iVar2 = (int)*plVar3;
      if (iVar2 == (int)*plVar4) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)((FBoxBody *)(plVar3 + -1))->_padding_,
                             *(wchar_t **)
                              ((longlong)plVar3 + (longlong)param_2 + (-8 - (longlong)param_1)));
          bVar5 = iVar2 == 0;
          goto LAB_14aa898f0;
        }
      }
      else {
        iVar2 = iVar2 + (int)*plVar4;
        bVar5 = iVar2 == 1;
LAB_14aa898f0:
        iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),bVar5);
        if (bVar5 == false) {
          return false;
        }
      }
      if (((((((TVector<float> *)(plVar4 + 2))->field0_0x0)._s_0.X !=
             (((TVector<float> *)(plVar3 + 2))->field0_0x0)._s_0.X) ||
           (*(float *)((longlong)plVar4 + 0x14) != *(float *)((longlong)plVar3 + 0x14))) ||
          (*(float *)(plVar4 + 3) != *(float *)(plVar3 + 3))) ||
         (((auVar1._4_4_ = -(uint)(*(float *)((longlong)plVar4 + 0x2c) ==
                                  *(float *)((longlong)plVar3 + 0x2c)),
           auVar1._0_4_ = -(uint)(((TQuat<float> *)(plVar4 + 5))->X ==
                                 ((TQuat<float> *)(plVar3 + 5))->X),
           auVar1._8_4_ = -(uint)(*(float *)(plVar4 + 6) == *(float *)(plVar3 + 6)),
           auVar1._12_4_ =
                -(uint)(*(float *)((longlong)plVar4 + 0x34) == *(float *)((longlong)plVar3 + 0x34)),
           iVar2 = movmskps(iVar2,auVar1), iVar2 != 0xf ||
           ((((TVector<float> *)(plVar4 + 7))->field0_0x0)._s_0.X !=
            (((TVector<float> *)(plVar3 + 7))->field0_0x0)._s_0.X)) ||
          ((*(float *)((longlong)plVar4 + 0x3c) != *(float *)((longlong)plVar3 + 0x3c) ||
           (*(float *)(plVar4 + 8) != *(float *)(plVar3 + 8))))))) {
        return false;
      }
      plVar4 = plVar4 + 10;
      plVar3 = plVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FConvexBody,int> @ 14aa89980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
CompareItems<UE::Mutable::Private::FConvexBody,int>
          (FConvexBody *param_1,FConvexBody *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  
  fVar12 = _UNK_1506895ec;
  fVar11 = _UNK_1506895e8;
  fVar10 = _UNK_1506895e4;
  fVar9 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
  uVar8 = _UNK_15061cc7c;
  uVar7 = _UNK_15061cc78;
  uVar6 = _UNK_15061cc74;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (param_3 != 0) {
    piVar15 = &(param_2->Indices).ArrayNum;
    piVar14 = &(param_1->Indices).ArrayNum;
    do {
      if (piVar14[-8] != piVar15[-8]) {
        return false;
      }
      iVar13 = piVar14[-10];
      if (iVar13 == piVar15[-10]) {
        if (1 < iVar13) {
          iVar13 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(piVar14 + -0xc),
                              *(wchar_t **)
                               ((longlong)piVar14 + (longlong)param_2 + (-0x30 - (longlong)param_1))
                             );
          bVar16 = iVar13 == 0;
          goto LAB_14aa89a02;
        }
      }
      else {
        bVar16 = iVar13 + piVar15[-10] == 1;
LAB_14aa89a02:
        if (!bVar16) {
          return false;
        }
      }
      if ((piVar14[-4] != piVar15[-4]) ||
         (bVar16 = CompareItems<UE::Math::TVector<float>,int>
                             (*(TVector<float> **)(piVar14 + -6),*(TVector<float> **)(piVar15 + -6),
                              piVar14[-4]), !bVar16)) {
        return false;
      }
      iVar13 = *piVar14;
      if (iVar13 != *piVar15) {
        return false;
      }
      if ((iVar13 != 0) &&
         (iVar13 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar14 + -2))->
                          AllocatorInstance).Data,
                          (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar15 + -2))->
                          AllocatorInstance).Data,(longlong)iVar13 << 2), iVar13 != 0)) {
        return false;
      }
      auVar1._4_4_ = -(uint)(fVar10 < (float)((uint)((float)piVar14[9] - (float)piVar15[9]) & uVar6)
                            );
      auVar1._0_4_ = -(uint)(fVar9 < (float)((uint)((float)piVar14[8] - (float)piVar15[8]) & uVar5))
      ;
      auVar1._8_4_ = -(uint)(fVar11 < (float)((uint)((float)piVar14[10] - (float)piVar15[10]) &
                                             uVar7));
      auVar1._12_4_ =
           -(uint)(fVar12 < (float)((uint)((float)piVar14[0xb] - (float)piVar15[0xb]) & uVar8));
      iVar13 = movmskps(0,auVar1);
      if (iVar13 != 0) {
        return false;
      }
      auVar2._4_4_ = -(uint)(fVar10 < (float)((uint)((float)piVar14[5] - (float)piVar15[5]) & uVar6)
                            );
      auVar2._0_4_ = -(uint)(fVar9 < (float)((uint)((float)piVar14[4] - (float)piVar15[4]) & uVar5))
      ;
      auVar2._8_4_ = -(uint)(fVar11 < (float)((uint)((float)piVar14[6] - (float)piVar15[6]) & uVar7)
                            );
      auVar2._12_4_ =
           -(uint)(fVar12 < (float)((uint)((float)piVar14[7] - (float)piVar15[7]) & uVar8));
      iVar13 = movmskps(0,auVar2);
      if ((iVar13 != 0) &&
         (auVar3._4_4_ = -(uint)(fVar10 < (float)((uint)((float)piVar14[5] + (float)piVar15[5]) &
                                                 uVar6)),
         auVar3._0_4_ = -(uint)(fVar9 < (float)((uint)((float)piVar14[4] + (float)piVar15[4]) &
                                               uVar5)),
         auVar3._8_4_ = -(uint)(fVar11 < (float)((uint)((float)piVar14[6] + (float)piVar15[6]) &
                                                uVar7)),
         auVar3._12_4_ =
              -(uint)(fVar12 < (float)((uint)((float)piVar14[7] + (float)piVar15[7]) & uVar8)),
         iVar13 = movmskps(iVar13,auVar3), iVar13 != 0)) {
        return false;
      }
      auVar4._4_4_ = -(uint)(fVar10 < (float)((uint)((float)piVar14[0xd] - (float)piVar15[0xd]) &
                                             uVar6));
      auVar4._0_4_ = -(uint)(fVar9 < (float)((uint)((float)piVar14[0xc] - (float)piVar15[0xc]) &
                                            uVar5));
      auVar4._8_4_ = -(uint)(fVar11 < (float)((uint)((float)piVar14[0xe] - (float)piVar15[0xe]) &
                                             uVar7));
      auVar4._12_4_ =
           -(uint)(fVar12 < (float)((uint)((float)piVar14[0xf] - (float)piVar15[0xf]) & uVar8));
      iVar13 = movmskps(0,auVar4);
      if (iVar13 != 0) {
        return false;
      }
      piVar15 = piVar15 + 0x1c;
      piVar14 = piVar14 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FLayoutBlock,int> @ 14aa89b00

bool __cdecl
CompareItems<UE::Mutable::Private::FLayoutBlock,int>
          (FLayoutBlock *param_1,FLayoutBlock *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  
  if (param_3 != 0) {
    piVar3 = &(param_2->Min).field0_0x0._s_0.Y;
    piVar1 = &(param_1->Min).field0_0x0._s_0.Y;
    do {
      if ((((*(longlong *)(piVar1 + 3) != *(longlong *)(piVar3 + 3)) ||
           (((TIntVector2<int>_u_0_s_0 *)(piVar1 + -1))->X !=
            *(int *)((longlong)param_2 + (-4 - (longlong)param_1) + (longlong)piVar1))) ||
          (*piVar1 != *piVar3)) ||
         (((piVar1[1] != piVar3[1] || (piVar1[2] != piVar3[2])) || (piVar1[5] != piVar3[5])))) {
        return false;
      }
      bVar4 = (byte)(short)piVar3[6];
      bVar2 = (byte)(short)piVar1[6];
      if (((bVar4 ^ bVar2) & 1) != 0) {
        return false;
      }
      if (((bVar2 ^ bVar4) & 2) != 0) {
        return false;
      }
      if (*(short *)((longlong)piVar1 + 0x1a) != *(short *)((longlong)piVar3 + 0x1a)) {
        return false;
      }
      piVar3 = piVar3 + 8;
      piVar1 = piVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FMeshBuffer,int> @ 14aa89b90

bool __cdecl
CompareItems<UE::Mutable::Private::FMeshBuffer,int>
          (FMeshBuffer *param_1,FMeshBuffer *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar4 = &(param_2->Channels).ArrayNum;
    piVar3 = &(param_1->Channels).ArrayNum;
    do {
      if (((*piVar3 != *piVar4) ||
          (bVar1 = CompareItems<UE::Mutable::Private::FMeshBufferChannel,int>
                             ((FMeshBufferChannel *)
                              (((TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>
                                 *)(piVar3 + -2))->AllocatorInstance).Data,
                              *(FMeshBufferChannel **)
                               ((longlong)piVar3 + (longlong)param_2 + (-8 - (longlong)param_1)),
                              *piVar3), !bVar1)) || (piVar3[8] != piVar4[8])) {
        return false;
      }
      iVar2 = piVar3[6];
      if (iVar2 != piVar4[6]) {
        return false;
      }
      if ((iVar2 != 0) &&
         (iVar2 = memcmp(*(void **)(piVar3 + 2),*(void **)(piVar4 + 2),(longlong)iVar2), iVar2 != 0)
         ) {
        return false;
      }
      piVar4 = piVar4 + 0xc;
      piVar3 = piVar3 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FMeshBufferChannel,int> @ 14aa89c40

bool __cdecl
CompareItems<UE::Mutable::Private::FMeshBufferChannel,int>
          (FMeshBufferChannel *param_1,FMeshBufferChannel *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = &param_2->SemanticIndex;
    piVar1 = &param_1->SemanticIndex;
    do {
      if ((((((FMeshBufferChannel *)(piVar1 + -2))->Semantic !=
             *(EMeshBufferSemantic *)
              ((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)piVar1)) ||
           (piVar1[-1] != piVar2[-1])) || (*piVar1 != *piVar2)) ||
         ((*(ushort *)(piVar1 + 1) != *(ushort *)(piVar2 + 1) ||
          (*(ushort *)((longlong)piVar1 + 6) != *(ushort *)((longlong)piVar2 + 6))))) {
        return false;
      }
      piVar2 = piVar2 + 4;
      piVar1 = piVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FMeshSurface,int> @ 14aa89ca0

bool __cdecl
CompareItems<UE::Mutable::Private::FMeshSurface,int>
          (FMeshSurface *param_1,FMeshSurface *param_2,int param_3)

{
  bool bVar1;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar2;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_3 != 0) {
    puVar5 = &param_2->BoneMapIndex;
    puVar4 = &param_1->BoneMapIndex;
    do {
      if ((((puVar4[2] != puVar5[2]) || (*puVar4 != *puVar5)) || (puVar4[1] != puVar5[1])) ||
         (puVar4[-2] != puVar5[-2])) {
        return false;
      }
      FVar3 = *(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)(puVar5 + -4);
      if (*(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)(puVar5 + -4) ==
          (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
        FVar3 = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)
                ((longlong)param_2 + (-0x28 - (longlong)param_1) + (longlong)puVar4);
      }
      FVar2 = *(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)(puVar4 + -4);
      if (*(ForElementType<UE::Mutable::Private::FSurfaceSubMesh> *)(puVar4 + -4) ==
          (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
        FVar2 = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)(puVar4 + -10);
      }
      bVar1 = CompareItems<UE::Mutable::Private::FSurfaceSubMesh,int>
                        ((FSurfaceSubMesh *)FVar2,(FSurfaceSubMesh *)FVar3,puVar4[-2]);
      if (!bVar1) {
        return false;
      }
      puVar5 = puVar5 + 0xe;
      puVar4 = puVar4 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FPhysicsBodyAggregate,int> @ 14aa89d50

bool __cdecl
CompareItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>
          (FPhysicsBodyAggregate *param_1,FPhysicsBodyAggregate *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = &(param_2->Sphyls).ArrayNum;
    piVar2 = &(param_1->Sphyls).ArrayNum;
    do {
      if ((((((piVar2[-0xc] != piVar3[-0xc]) ||
             (bVar1 = CompareItems<UE::Mutable::Private::FSphereBody,int>
                                (*(FSphereBody **)(piVar2 + -0xe),
                                 *(FSphereBody **)
                                  ((longlong)piVar2 +
                                  (longlong)param_2 + (-0x38 - (longlong)param_1)),piVar2[-0xc]),
             !bVar1)) || (piVar2[-8] != piVar3[-8])) ||
           ((bVar1 = CompareItems<UE::Mutable::Private::FBoxBody,int>
                               (*(FBoxBody **)(piVar2 + -10),*(FBoxBody **)(piVar3 + -10),piVar2[-8]
                               ), !bVar1 || (*piVar2 != *piVar3)))) ||
          ((bVar1 = CompareItems<UE::Mutable::Private::FSphylBody,int>
                              ((FSphylBody *)
                               (((TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>
                                  *)(piVar2 + -2))->AllocatorInstance).Data,
                               (FSphylBody *)
                               (((TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>
                                  *)(piVar3 + -2))->AllocatorInstance).Data,*piVar2), !bVar1 ||
           ((piVar2[4] != piVar3[4] ||
            (bVar1 = CompareItems<UE::Mutable::Private::FTaperedCapsuleBody,int>
                               (*(FTaperedCapsuleBody **)(piVar2 + 2),
                                *(FTaperedCapsuleBody **)(piVar3 + 2),piVar2[4]), !bVar1)))))) ||
         ((piVar2[-4] != piVar3[-4] ||
          (bVar1 = CompareItems<UE::Mutable::Private::FConvexBody,int>
                             (*(FConvexBody **)(piVar2 + -6),*(FConvexBody **)(piVar3 + -6),
                              piVar2[-4]), !bVar1)))) {
        return false;
      }
      piVar3 = piVar3 + 0x14;
      piVar2 = piVar2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FSphereBody,int> @ 14aa89e50

bool __cdecl
CompareItems<UE::Mutable::Private::FSphereBody,int>
          (FSphereBody *param_1,FSphereBody *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    plVar3 = &param_2->_padding_;
    plVar2 = &param_1->_padding_;
    do {
      if ((int)plVar2[1] != (int)plVar3[1]) {
        return false;
      }
      iVar1 = (int)*plVar2;
      if (iVar1 == (int)*plVar3) {
        if (1 < iVar1) {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)((FSphereBody *)(plVar2 + -1))->_padding_,
                             *(wchar_t **)
                              ((longlong)plVar2 + (longlong)param_2 + (-8 - (longlong)param_1)));
          bVar4 = iVar1 == 0;
          goto LAB_14aa89eac;
        }
      }
      else {
        bVar4 = iVar1 + (int)*plVar3 == 1;
LAB_14aa89eac:
        if (!bVar4) {
          return false;
        }
      }
      if (((((((TVector<float> *)(plVar3 + 2))->field0_0x0)._s_0.X !=
             (((TVector<float> *)(plVar2 + 2))->field0_0x0)._s_0.X) ||
           (*(float *)((longlong)plVar3 + 0x14) != *(float *)((longlong)plVar2 + 0x14))) ||
          (*(float *)(plVar3 + 3) != *(float *)(plVar2 + 3))) ||
         (*(float *)((longlong)plVar3 + 0x1c) != *(float *)((longlong)plVar2 + 0x1c))) {
        return false;
      }
      plVar3 = plVar3 + 5;
      plVar2 = plVar2 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FSphylBody,int> @ 14aa89f10

bool __cdecl
CompareItems<UE::Mutable::Private::FSphylBody,int>
          (FSphylBody *param_1,FSphylBody *param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)&param_2->field_0x8;
    piVar3 = (int *)&param_1->field_0x8;
    do {
      if (piVar3[2] != piVar4[2]) {
        return false;
      }
      iVar2 = *piVar3;
      if (iVar2 == *piVar4) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(piVar3 + -2),
                             *(wchar_t **)
                              ((longlong)piVar3 + (longlong)param_2 + (-8 - (longlong)param_1)));
          bVar5 = iVar2 == 0;
          goto LAB_14aa89f70;
        }
      }
      else {
        iVar2 = iVar2 + *piVar4;
        bVar5 = iVar2 == 1;
LAB_14aa89f70:
        iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),bVar5);
        if (bVar5 == false) {
          return false;
        }
      }
      if (((((float)piVar4[4] != (float)piVar3[4]) || ((float)piVar4[5] != (float)piVar3[5])) ||
          ((float)piVar4[6] != (float)piVar3[6])) ||
         (((auVar1._4_4_ = -(uint)((float)piVar4[0xb] == (float)piVar3[0xb]),
           auVar1._0_4_ = -(uint)((float)piVar4[10] == (float)piVar3[10]),
           auVar1._8_4_ = -(uint)((float)piVar4[0xc] == (float)piVar3[0xc]),
           auVar1._12_4_ = -(uint)((float)piVar4[0xd] == (float)piVar3[0xd]),
           iVar2 = movmskps(iVar2,auVar1), iVar2 != 0xf ||
           ((float)piVar4[0xe] != (float)piVar3[0xe])) || ((float)piVar4[0xf] != (float)piVar3[0xf])
          ))) {
        return false;
      }
      piVar4 = piVar4 + 0x14;
      piVar3 = piVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FSurfaceSubMesh,int> @ 14aa8a000

bool __cdecl
CompareItems<UE::Mutable::Private::FSurfaceSubMesh,int>
          (FSurfaceSubMesh *param_1,FSurfaceSubMesh *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      lVar1._0_4_ = param_2->VertexBegin;
      lVar1._4_4_ = param_2->VertexEnd;
      if (((*(longlong *)(lVar3 + (longlong)param_2) != lVar1) ||
          (lVar2._0_4_ = param_2->IndexBegin, lVar2._4_4_ = param_2->IndexEnd,
          *(longlong *)(lVar3 + 8 + (longlong)param_2) != lVar2)) ||
         (*(uint *)(lVar3 + 0x10 + (longlong)param_2) != param_2->ExternalId)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<UE::Mutable::Private::FTaperedCapsuleBody,int> @ 14aa8a050

bool __cdecl
CompareItems<UE::Mutable::Private::FTaperedCapsuleBody,int>
          (FTaperedCapsuleBody *param_1,FTaperedCapsuleBody *param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    plVar4 = &param_2->_padding_;
    plVar3 = &param_1->_padding_;
    do {
      if ((int)plVar3[1] != (int)plVar4[1]) {
        return false;
      }
      iVar2 = (int)*plVar3;
      if (iVar2 == (int)*plVar4) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)((FTaperedCapsuleBody *)(plVar3 + -1))->_padding_,
                             *(wchar_t **)
                              ((longlong)plVar3 + (longlong)param_2 + (-8 - (longlong)param_1)));
          bVar5 = iVar2 == 0;
          goto LAB_14aa8a0b0;
        }
      }
      else {
        iVar2 = iVar2 + (int)*plVar4;
        bVar5 = iVar2 == 1;
LAB_14aa8a0b0:
        iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),bVar5);
        if (bVar5 == false) {
          return false;
        }
      }
      if (((((((TVector<float> *)(plVar4 + 2))->field0_0x0)._s_0.X !=
             (((TVector<float> *)(plVar3 + 2))->field0_0x0)._s_0.X) ||
           (*(float *)((longlong)plVar4 + 0x14) != *(float *)((longlong)plVar3 + 0x14))) ||
          (*(float *)(plVar4 + 3) != *(float *)(plVar3 + 3))) ||
         (((auVar1._4_4_ = -(uint)(*(float *)((longlong)plVar4 + 0x2c) ==
                                  *(float *)((longlong)plVar3 + 0x2c)),
           auVar1._0_4_ = -(uint)(((TQuat<float> *)(plVar4 + 5))->X ==
                                 ((TQuat<float> *)(plVar3 + 5))->X),
           auVar1._8_4_ = -(uint)(*(float *)(plVar4 + 6) == *(float *)(plVar3 + 6)),
           auVar1._12_4_ =
                -(uint)(*(float *)((longlong)plVar4 + 0x34) == *(float *)((longlong)plVar3 + 0x34)),
           iVar2 = movmskps(iVar2,auVar1), iVar2 != 0xf ||
           (*(float *)(plVar4 + 7) != *(float *)(plVar3 + 7))) ||
          ((*(float *)((longlong)plVar4 + 0x3c) != *(float *)((longlong)plVar3 + 0x3c) ||
           (*(float *)(plVar4 + 8) != *(float *)(plVar3 + 8))))))) {
        return false;
      }
      plVar4 = plVar4 + 10;
      plVar3 = plVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int> @ 14aa8a140

void __cdecl
ConstructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
          (void *param_1,
          TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>
          *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FMeshBuffer *pFVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined4 *)&param_2->field_0xc;
    puVar5 = (undefined4 *)((longlong)param_1 + 8);
    do {
      pFVar1 = (ForAnyElementType *)(puVar5 + 2);
      *(undefined4 *)((longlong)param_1 + (-0xc - (longlong)param_2) + (longlong)puVar4) =
           puVar4[-3];
      *puVar5 = puVar4[-1];
      puVar5[1] = *puVar4;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = puVar4[3];
      pFVar3 = *(FMeshBuffer **)(puVar4 + 1);
      puVar5[4] = iVar2;
      if (iVar2 == 0) {
        puVar5[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar2,0,pFVar1,iVar2,puVar5 + 5);
        ConstructItems<UE::Mutable::Private::FMeshBuffer,UE::Mutable::Private::FMeshBuffer,int>
                  (pFVar1->Data,pFVar3,iVar2);
      }
      puVar5 = puVar5 + 8;
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Mutable::Private::FInstanceComponent,UE::Mutable::Private::FInstanceComponent,int> @ 14aa8a220

void __cdecl
ConstructItems<UE::Mutable::Private::FInstanceComponent,UE::Mutable::Private::FInstanceComponent,int>
          (void *param_1,FInstanceComponent *param_2,int param_3)

{
  int iVar1;
  ForElementType<UE::Mutable::Private::FInstanceLOD> *pFVar2;
  int *piVar3;
  ForElementType<UE::Mutable::Private::FInstanceLOD> *pFVar4;
  ForElementType<UE::Mutable::Private::FInstanceLOD> FVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xcc);
    pFVar4 = &(param_2->LODs).AllocatorInstance.SecondaryData;
    do {
      *(undefined2 *)((longlong)pFVar4 + (longlong)param_1 + (-0xc0 - (longlong)param_2)) =
           *(undefined2 *)(pFVar4 + -0x18);
      ((FHandle *)(piVar3 + -0x31))->Id = 0xffffffff;
      piVar3[-0x2f] = 0;
      piVar3[-0x2e] = 0;
      piVar3[-0x2d] = 0;
      piVar3[-0x2c] = 0;
      TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
      ::FHandle::operator=((FHandle *)(piVar3 + -0x31),(FHandle *)(pFVar4 + -0x17));
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      FVar5 = *pFVar4;
      iVar1 = *(int *)(pFVar4 + 1);
      piVar3[-1] = iVar1;
      if (FVar5 == (ForElementType<UE::Mutable::Private::FInstanceLOD>)0x0) {
        FVar5 = (ForElementType<UE::Mutable::Private::FInstanceLOD>)(pFVar4 + -0x14);
      }
      if (iVar1 == 0) {
        *piVar3 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceLOD>_>
                  (0xa0,8,iVar1,0,
                   (ForElementType<UE::Mutable::Private::FInstanceLOD> *)(piVar3 + -0x2b),iVar1,
                   piVar3);
        pFVar2 = *(ForElementType<UE::Mutable::Private::FInstanceLOD> **)(piVar3 + -3);
        if (*(ForElementType<UE::Mutable::Private::FInstanceLOD> **)(piVar3 + -3) ==
            (ForElementType<UE::Mutable::Private::FInstanceLOD> *)0x0) {
          pFVar2 = (ForElementType<UE::Mutable::Private::FInstanceLOD> *)(piVar3 + -0x2b);
        }
        ConstructItems<UE::Mutable::Private::FInstanceLOD,UE::Mutable::Private::FInstanceLOD,int>
                  (pFVar2,(FInstanceLOD *)FVar5,iVar1);
      }
      piVar3 = piVar3 + 0x34;
      pFVar4 = pFVar4 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Mutable::Private::NamedExtensionData,UE::Mutable::Private::NamedExtensionData,int> @ 14aa8a360

void __cdecl
ConstructItems<UE::Mutable::Private::NamedExtensionData,UE::Mutable::Private::NamedExtensionData,int>
          (void *param_1,NamedExtensionData *param_2,int param_3)

{
  FName FVar1;
  FName *pFVar2;
  FName *pFVar3;
  
  if (param_3 != 0) {
    pFVar3 = &param_2->Name;
    pFVar2 = (FName *)((longlong)param_1 + 0x10);
    do {
      pFVar2[-2] = *(FName *)((longlong)pFVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      FVar1 = pFVar3[-1];
      pFVar2[-1] = FVar1;
      if (FVar1 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar1 + 8) = *(int *)((longlong)FVar1 + 8) + 1;
        UNLOCK();
      }
      FVar1 = *pFVar3;
      pFVar3 = pFVar3 + 3;
      *pFVar2 = FVar1;
      pFVar2 = pFVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int> @ 14aa8a3b0

void __cdecl
ConstructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
          (void *param_1,
          TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
          *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)((longlong)param_1 + 0x14);
    do {
      piVar2[-5] = 0;
      piVar2[-4] = 0;
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      iVar1 = param_2->ArrayNum;
      _Src = (void *)(param_2->AllocatorInstance)._padding_;
      piVar2[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar2 + -5),iVar1,piVar2);
        memcpy((void *)((ForAnyElementType *)(piVar2 + -5))->_padding_,_Src,(longlong)iVar1);
      }
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int> @ 14aa8a470

void __cdecl
ConstructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>
          (void *param_1,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FImage **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int> @ 14aa8a4b0

void __cdecl
ConstructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>
          (void *param_1,TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FLayout **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<unsigned_int,unsigned___int64>,int> @ 14aa8a4f0

void __cdecl
DefaultConstructItems<TTuple<unsigned_int,unsigned___int64>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int> @ 14aa8a520

void __cdecl
DefaultConstructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FBoneName,int> @ 14aa8a550

void __cdecl DefaultConstructItems<UE::Mutable::Private::FBoneName,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FMesh::FBonePose,int> @ 14aa8a570

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FMesh::FBonePose,int>(void *param_1,int param_2)

{
  __m128 *p_Var1;
  
  if (param_2 != 0) {
    p_Var1 = (__m128 *)((longlong)param_1 + 0x10);
    do {
      p_Var1[-1].m128_u64[0] = 0;
      *p_Var1 = GlobalVectorConstants::Float0001;
      p_Var1[1] = GlobalVectorConstants::FloatZero;
      p_Var1[2] = GlobalVectorConstants::Float1110;
      param_2 = param_2 + -1;
      p_Var1 = p_Var1 + 4;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FConstantResourceIndex,int> @ 14aa8a5c0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FConstantResourceIndex,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FExtensionDataConstant,int> @ 14aa8a5d0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FExtensionDataConstant,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FImageLODRange,int> @ 14aa8a600

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FImageLODRange,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 6;
    do {
      *(undefined8 *)(lVar1 + -6) = 0;
      *(undefined4 *)(lVar1 + 2) = 0;
      lVar1 = lVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int> @ 14aa8a630

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FLayoutBlock,int> @ 14aa8a660

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FLayoutBlock,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined4 *)(lVar1 + 0x10) = 0xffff0000;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FMeshContentRange,int> @ 14aa8a6a0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FMeshContentRange,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FParameterDesc,int> @ 14aa8a6d0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FParameterDesc,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FProjector,int> @ 14aa8a720

void __cdecl DefaultConstructItems<UE::Mutable::Private::FProjector,int>(void *param_1,int param_2)

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
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FRangeDesc,int> @ 14aa8a760

void __cdecl DefaultConstructItems<UE::Mutable::Private::FRangeDesc,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0xffffffff;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FRomDataCompile,int> @ 14aa8a7a0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FRomDataCompile,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FRomDataRuntime,int> @ 14aa8a7b0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FRomDataRuntime,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Mutable::Private::CodeRunner::FRomLoadOp,int> @ 14aa8a7c0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::CodeRunner::FRomLoadOp,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::CodeRunner::FScheduledOpData,int> @ 14aa8a800

void __cdecl
DefaultConstructItems<UE::Mutable::Private::CodeRunner::FScheduledOpData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FShape,int> @ 14aa8a830

void __cdecl DefaultConstructItems<UE::Mutable::Private::FShape,int>(void *param_1,int param_2)

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
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x34);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FProgram::FState,int> @ 14aa8a870

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FProgram::FState,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      lVar1 = lVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::FSurfaceSubMesh,int> @ 14aa8a8c0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::FSurfaceSubMesh,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Mutable::Private::NamedExtensionData,int> @ 14aa8a8f0

void __cdecl
DefaultConstructItems<UE::Mutable::Private::NamedExtensionData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int> @ 14aa8a920

void __cdecl
DefaultConstructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0x10) = 0;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FExtensionDataConstant,int> @ 14aa8a950

void __cdecl
DestructItems<UE::Mutable::Private::FExtensionDataConstant,int>
          (FExtensionDataConstant *param_1,int param_2)

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

// DestructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int> @ 14aa8a990

void __cdecl
DestructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int>
          (FIntValueDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FParameterDesc,int> @ 14aa8a9d0

void __cdecl
DestructItems<UE::Mutable::Private::FParameterDesc,int>(FParameterDesc *param_1,int param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_2 != 0) {
    pTVar5 = &param_1->PossibleValues;
    do {
      DestructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int>
                ((FIntValueDesc *)(pTVar5->AllocatorInstance).Data,pTVar5->ArrayNum);
      pFVar2 = (pTVar5->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar5 + -1))->
               AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      bVar1 = *(byte *)(pTVar5 + -2);
      if ((9 < (ulonglong)bVar1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[bVar1])
                ((TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                  *)(pTVar5 + -3));
      pFVar2 = (((FParameterDesc *)(pTVar5 + -6))->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pTVar5 = pTVar5 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Mutable::Private::FRangeDesc,int> @ 14aa8aaa0

void __cdecl DestructItems<UE::Mutable::Private::FRangeDesc,int>(FRangeDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->UID).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Mutable::Private::FProgram::FState,int> @ 14aa8aaf0

void __cdecl DestructItems<UE::Mutable::Private::FProgram::FState,int>(FState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->m_updateCache;
    do {
      pFVar1 = (((TArray<TTuple<unsigned_int,unsigned___int64>,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      pTVar2 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,int> @ 14aa8ab60

void __cdecl
DestructItems<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,int>
          (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,int> @ 14aa8aba0

void __cdecl
DestructItems<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,int>
          (TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<void,1>,int> @ 14aa8abe0

void __cdecl DestructItems<TSharedPtr<void,1>,int>(TSharedPtr<void,1> *param_1,int param_2)

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

// DestructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int> @ 14aa8ac20

void __cdecl
DestructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int>
          (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
           *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    bVar1 = param_1->TypeIndex;
    if ((9 < (ulonglong)bVar1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) break;
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[bVar1])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// IntCastChecked<int,unsigned_short> @ 14aa90360

int __cdecl IntCastChecked<int,unsigned_short>(ushort param_1)

{
  return (int)param_1;
}

// Launch<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l9::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&> @ 14aa90370

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_::__l9::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,FTaskHandle *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *pFVar4;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__8____Any_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedInlineAllocator__07_0CA_V__TSizedDefaultAllocator__0CA________Tasks_UE__YA_AVFTaskHandle_Private_23_AEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedInlineAllocator__07_0CA_V__TSizedDefaultAllocator__0CA________Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    pFVar4 = param_3[1].Pimpl.Reference;
    this[1]._padding_ = (longlong)(param_3->Pimpl).Reference;
    this[1]._padding_ = (longlong)pFVar4;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__8____Any_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedInlineAllocator__07_0CA_V__TSizedDefaultAllocator__0CA________Tasks_UE__YA_AVFTaskHandle_Private_23_AEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TSizedInlineAllocator__07_0CA_V__TSizedDefaultAllocator__0CA________Z__Private_Tasks_UE__6B_
    ;
  }
  Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
            (this,(FTaskHandle *)CONCAT71(in_register_00000089,param_4));
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// MakeShared<UE::Mutable::Private::FExtensionData,1> @ 14aa90470

TSharedRef<UE::Mutable::Private::FExtensionData,1> * __cdecl
MakeShared<UE::Mutable::Private::FExtensionData,1>
          (TSharedRef<UE::Mutable::Private::FExtensionData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FExtensionData,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FExtensionData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFExtensionData_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = (longlong)&___7FExtensionData_Private_Mutable_UE__6B_;
    *(undefined2 *)&pTVar3[1].SharedReferenceCount = 0xffff;
    __return_storage_ptr__->Object = (FExtensionData *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FExtensionData *)(pTVar3 + 1) == (FExtensionData *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FExtensionData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::FImage,1> @ 14aa90520

TSharedRef<UE::Mutable::Private::FImage,1> * __cdecl
MakeShared<UE::Mutable::Private::FImage,1>
          (TSharedRef<UE::Mutable::Private::FImage,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FImage,1> *pTVar4;
  
  pTVar3 = operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FImage_Private_Mutable_UE__6B_;
    *(undefined4 *)&pTVar3[1].SharedReferenceCount.field_0x2 = 0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    *(undefined1 *)&pTVar3[1].SharedReferenceCount = 0;
    *(undefined4 *)&pTVar3[5]._padding_ = 0;
    *(undefined8 *)((longlong)&pTVar3[5]._padding_ + 4) = 1;
    *(undefined8 *)&pTVar3[5].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar3[6]._padding_ + 4) = 0;
    __return_storage_ptr__->Object = (FImage *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FImage *)(pTVar3 + 1) == (FImage *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FImage,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::FImageExternalLoadTask,1,UE::Mutable::Private::FScheduledOp_&,unsigned_char_const_&,UE::Mutable::Private::CodeRunner::FExternalResourceId_&> @ 14aa905f0

TSharedRef<UE::Mutable::Private::FImageExternalLoadTask,1> * __cdecl
MakeShared<UE::Mutable::Private::FImageExternalLoadTask,1,UE::Mutable::Private::FScheduledOp_&,unsigned_char_const_&,UE::Mutable::Private::CodeRunner::FExternalResourceId_&>
          (TSharedRef<UE::Mutable::Private::FImageExternalLoadTask,1> *__return_storage_ptr__,
          FScheduledOp *param_1,uchar *param_2,FExternalResourceId *param_3)

{
  USkeletalMesh *pUVar1;
  uchar uVar2;
  code *pcVar3;
  UTexture *pUVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<UE::Mutable::Private::FImageExternalLoadTask,1> *pTVar10;
  
  pTVar9 = operator_new(0x90);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImageExternalLoadTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImageExternalLoadTask_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    iVar6 = param_3->ReferenceResourceId;
    uVar7 = *(undefined4 *)&param_3->field_0x4;
    pUVar4 = param_3->ImageParameter;
    uVar2 = *param_2;
    pUVar1 = param_3->MeshParameter;
    pTVar9[1]._padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
    uVar5 = param_1->CustomState;
    pTVar9[1].SharedReferenceCount = (atomic<int>)param_1->At;
    pTVar9[1].WeakReferenceCount = (atomic<int>)uVar5;
    *(undefined4 *)&pTVar9[2]._padding_ = *(undefined4 *)&param_1->ExecutionIndex;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ = (longlong)&___7FImageExternalLoadTask_Private_Mutable_UE__6B_;
    *(uchar *)&pTVar9[3]._padding_ = uVar2;
    pTVar9[3].SharedReferenceCount = (atomic<int>)iVar6;
    pTVar9[3].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar9[4]._padding_ = (longlong)pUVar4;
    *(USkeletalMesh **)&pTVar9[4].SharedReferenceCount = pUVar1;
    __return_storage_ptr__->Object = (FImageExternalLoadTask *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if ((FImageExternalLoadTask *)(pTVar9 + 1) == (FImageExternalLoadTask *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TSharedRef<UE::Mutable::Private::FImageExternalLoadTask,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::FLayout,1> @ 14aa90700

TSharedRef<UE::Mutable::Private::FLayout,1> * __cdecl
MakeShared<UE::Mutable::Private::FLayout,1>
          (TSharedRef<UE::Mutable::Private::FLayout,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::FLayout,1> *pTVar4;
  
  pTVar3 = operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FLayout *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLayout_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FLayout_Private_Mutable_UE__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FLayout *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FLayout *)(pTVar3 + 1) == (FLayout *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::FLayout,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Mutable::Private::String,1,FString_const_&> @ 14aa907c0

TSharedRef<UE::Mutable::Private::String,1> * __cdecl
MakeShared<UE::Mutable::Private::String,1,FString_const_&>
          (TSharedRef<UE::Mutable::Private::String,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Mutable::Private::String,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (String *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VString_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7String_Private_Mutable_UE__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    FString::operator=((FString *)&pTVar3[1].SharedReferenceCount,param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (String *)(pTVar3 + 1);
    if ((String *)(pTVar3 + 1) == (String *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Mutable::Private::String,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// FImage_const_,1>_>_const_&> @ 14aa91dd0

void __cdecl
Visit<`UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::
FImage_const_,1>_>'::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::
FImage_const__1>_>_const__>
          (<lambda_1> *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    UE::Mutable::Private::operator<<(param_1->Ar,(uint *)param_2);
    return;
  case '\x01':
    UE::Mutable::Private::operator<<<UE::Mutable::Private::FImage>
              (param_1->Ar,(TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)param_2);
    return;
  }
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91df0

void __cdecl
Visit<`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::
Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  FOutputArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    UE::Mutable::Private::operator<<(param_1->Ar,(bool *)param_2);
    return;
  case '\x01':
    UE::Mutable::Private::operator<<(param_1->Ar,(int *)param_2);
    return;
  case '\x02':
    UE::Mutable::Private::operator<<(param_1->Ar,(float *)param_2);
    return;
  case '\x03':
    UE::Mutable::Private::operator<<(param_1->Ar,(TVector4<float> *)param_2);
    return;
  case '\x05':
    return;
  case '\x06':
    return;
  case '\a':
    pFVar1 = param_1->Ar;
    if (*(longlong *)param_2 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StoragePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                         ,0x4f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Mutable::Private::operator<<(pFVar1,*(FString **)param_2);
    return;
  case '\b':
    pFVar1 = param_1->Ar;
    if (*(longlong *)param_2 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StoragePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                         ,0x4f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Mutable::Private::operator<<(pFVar1,*(TMatrix<float> **)param_2);
    return;
  case '\t':
    return;
  }
  pFVar1 = param_1->Ar;
  if (*(longlong *)param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Mutable::Private::operator<<<UE::Mutable::Private::FProjector>(pFVar1,*(FProjector **)param_2)
  ;
  return;
}

// Visit<`UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>'::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&> @ 14aa91e10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

bool __cdecl
Visit<_UE::Mutable::Private::operator__<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  UObjectBase *pUVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte bVar17;
  byte extraout_AL;
  byte extraout_AL_00;
  byte extraout_AL_01;
  undefined1 extraout_AL_02;
  undefined1 extraout_AL_03;
  undefined1 extraout_AL_04;
  byte extraout_AL_05;
  byte extraout_AL_06;
  byte extraout_AL_07;
  undefined1 extraout_AL_08;
  bool bVar18;
  undefined1 uVar19;
  undefined1 extraout_AL_09;
  char cVar20;
  uint uVar21;
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar22;
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar23;
  FString *pFVar24;
  byte *pbVar25;
  undefined2 uVar26;
  undefined1 *unaff_RBX;
  undefined1 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar28;
  undefined1 *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  bool in_CF;
  bool in_ZF;
  bool in_OF;
  longlong *unaff_retaddr;
  char cVar27;
  
  bVar17 = param_2->TypeIndex;
  pbVar25 = (byte *)(ulonglong)bVar17;
  cVar27 = (char)((ulonglong)param_2 >> 8);
  uVar26 = SUB82(param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar17) {
  case 0:
    pTVar22 = param_1->ValueB;
    if ((pTVar22->TypeIndex != '\0') &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    return (int)param_2->_padding_ == (int)pTVar22->_padding_;
  case 1:
    pTVar22 = param_1->ValueB;
    if ((pTVar22->TypeIndex != '\x01') &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    return param_2->_padding_ == pTVar22->_padding_;
  case 2:
    uVar19 = (undefined1)param_2->_padding_;
    *(undefined1 *)&param_1->ValueB = uVar19;
    return (bool)uVar19;
  case 3:
    uVar8 = (undefined4)param_2->_padding_;
    *(undefined4 *)&param_1->ValueB = uVar8;
    return SUB41(uVar8,0);
  case 4:
    uVar8 = (undefined4)param_2->_padding_;
    *(undefined4 *)&param_1->ValueB = uVar8;
    return SUB41(uVar8,0);
  case 5:
    pTVar22 = (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
              param_2->_padding_;
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_1[1].ValueB = pTVar22;
    return (bool)bVar17;
  case 6:
    pTVar23 = operator_new(0x38);
    pTVar22 = (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
    if (pTVar23 != (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0)
    {
      pTVar23->_padding_ = 0;
      pTVar23->_padding_ = 0;
      *(undefined8 *)&pTVar23->TypeIndex = 0;
      pTVar23[1]._padding_ = 0;
      pTVar23[1]._padding_ = 0;
      *(undefined8 *)&pTVar23[1].TypeIndex = 0;
      pTVar23[2]._padding_ = 0;
      pTVar22 = pTVar23;
    }
    param_1->ValueB = pTVar22;
    if ((param_2->_padding_ == 0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("StoragePtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                            ,0x4f,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    puVar28 = (undefined4 *)param_2->_padding_;
    uVar12 = *(undefined8 *)(puVar28 + 4);
    lVar13 = *(longlong *)(puVar28 + 6);
    uVar8 = *puVar28;
    uVar9 = puVar28[1];
    uVar10 = puVar28[2];
    uVar11 = puVar28[3];
    lVar14 = *(longlong *)(puVar28 + 8);
    uVar15 = *(undefined8 *)(puVar28 + 10);
    lVar6 = *(longlong *)(puVar28 + 0xc);
    if ((param_1->ValueB ==
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("StoragePtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                            ,0x55,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    pTVar22 = param_1->ValueB;
    *(undefined4 *)&pTVar22->_padding_ = uVar8;
    *(undefined4 *)((longlong)&pTVar22->_padding_ + 4) = uVar9;
    *(undefined4 *)&pTVar22->_padding_ = uVar10;
    *(undefined4 *)((longlong)&pTVar22->_padding_ + 4) = uVar11;
    *(undefined8 *)&pTVar22->TypeIndex = uVar12;
    pTVar22[1]._padding_ = lVar13;
    pTVar22[1]._padding_ = lVar14;
    *(undefined8 *)&pTVar22[1].TypeIndex = uVar15;
    pTVar22[2]._padding_ = lVar6;
    return SUB81(param_1,0);
  case 7:
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
    pUVar5 = (UObjectBase *)param_2->_padding_;
    if (pUVar5 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar5);
      param_1->ValueB =
           (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)pUVar5;
      bVar17 = extraout_AL_01;
    }
    return (bool)bVar17;
  case 8:
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
    pUVar5 = (UObjectBase *)param_2->_padding_;
    if (pUVar5 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar5);
      param_1->ValueB =
           (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)pUVar5;
      bVar17 = extraout_AL_00;
    }
    return (bool)bVar17;
  case 9:
    pTVar23 = operator_new(0x10);
    pTVar22 = (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
    if (pTVar23 != (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0)
    {
      pTVar23->_padding_ = 0;
      pTVar23->_padding_ = 0;
      pTVar22 = pTVar23;
    }
    param_1->ValueB = pTVar22;
    if ((param_2->_padding_ == 0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("StoragePtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                            ,0x4f,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    pFVar24 = (FString *)param_2->_padding_;
    if ((param_1->ValueB ==
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("StoragePtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                            ,0x55,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    pFVar24 = FString::operator=((FString *)param_1->ValueB,pFVar24);
    return SUB81(pFVar24,0);
  case 10:
    pTVar22 = operator_new(0x40);
    if (pTVar22 != (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0)
    {
      pTVar22->_padding_ = 0;
      pTVar22->_padding_ = 0;
      *(undefined8 *)&pTVar22->TypeIndex = 0;
      pTVar22[1]._padding_ = 0;
      pTVar22[1]._padding_ = 0;
      *(undefined8 *)&pTVar22[1].TypeIndex = 0;
      pTVar22[2]._padding_ = 0;
      pTVar22[2]._padding_ = 0;
    }
    param_1->ValueB = pTVar22;
    if ((param_2->_padding_ == 0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("StoragePtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                            ,0x4f,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    puVar28 = (undefined4 *)param_2->_padding_;
    uVar12 = *(undefined8 *)(puVar28 + 4);
    lVar6 = *(longlong *)(puVar28 + 6);
    uVar8 = *puVar28;
    uVar9 = puVar28[1];
    uVar10 = puVar28[2];
    uVar11 = puVar28[3];
    lVar13 = *(longlong *)(puVar28 + 8);
    uVar15 = *(undefined8 *)(puVar28 + 10);
    lVar14 = *(longlong *)(puVar28 + 0xc);
    lVar16 = *(longlong *)(puVar28 + 0xe);
    if ((param_1->ValueB ==
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("StoragePtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                            ,0x55,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    pTVar22 = param_1->ValueB;
    *(undefined4 *)&pTVar22->_padding_ = uVar8;
    *(undefined4 *)((longlong)&pTVar22->_padding_ + 4) = uVar9;
    *(undefined4 *)&pTVar22->_padding_ = uVar10;
    *(undefined4 *)((longlong)&pTVar22->_padding_ + 4) = uVar11;
    *(undefined8 *)&pTVar22->TypeIndex = uVar12;
    pTVar22[1]._padding_ = lVar6;
    pTVar22[1]._padding_ = lVar13;
    *(undefined8 *)&pTVar22[1].TypeIndex = uVar15;
    pTVar22[2]._padding_ = lVar14;
    pTVar22[2]._padding_ = lVar16;
    return SUB81(pTVar22,0);
  case 0xb:
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
    pUVar5 = (UObjectBase *)param_2->_padding_;
    if (pUVar5 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar5);
      param_1->ValueB =
           (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)pUVar5;
      bVar17 = extraout_AL;
    }
    return (bool)bVar17;
  case 0xc:
    uVar19 = (undefined1)param_2->_padding_;
    *(undefined1 *)&param_1->ValueB = uVar19;
    return (bool)uVar19;
  case 0xd:
    uVar8 = (undefined4)param_2->_padding_;
    *(undefined4 *)&param_1->ValueB = uVar8;
    return SUB41(uVar8,0);
  case 0xe:
    uVar8 = (undefined4)param_2->_padding_;
    *(undefined4 *)&param_1->ValueB = uVar8;
    return SUB41(uVar8,0);
  case 0xf:
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_1[1].ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_2->_padding_ = 0;
    param_2->_padding_ = 0;
    return false;
  case 0x10:
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_1[1].ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_2->_padding_ = 0;
    param_2->_padding_ = 0;
    return false;
  case 0x11:
    param_1->ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_1[1].ValueB =
         (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
         param_2->_padding_;
    param_2->_padding_ = 0;
    param_2->_padding_ = 0;
    return false;
  case 0x12:
    return (bool)bVar17;
  case 0x13:
    return (bool)bVar17;
  case 0x14:
    return (bool)bVar17;
  case 0x15:
    return (bool)bVar17;
  case 0x16:
    operator_delete(param_1->ValueB,0x38);
    return (bool)extraout_AL_03;
  case 0x17:
    if ((UObject *)param_1->ValueB != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->ValueB);
      param_1->ValueB =
           (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
      bVar17 = extraout_AL_07;
    }
    return (bool)bVar17;
  case 0x18:
    if ((UObject *)param_1->ValueB != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->ValueB);
      param_1->ValueB =
           (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
      bVar17 = extraout_AL_06;
    }
    return (bool)bVar17;
  case 0x19:
    pTVar22 = param_1->ValueB;
    if (pTVar22 == (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0)
    {
      return (bool)bVar17;
    }
    if ((void *)pTVar22->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pTVar22->_padding_);
    }
    operator_delete(pTVar22,0x10);
    return (bool)extraout_AL_04;
  case 0x1a:
    operator_delete(param_1->ValueB,0x40);
    return (bool)extraout_AL_02;
  case 0x1b:
    if ((UObject *)param_1->ValueB != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->ValueB);
      param_1->ValueB =
           (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
      bVar17 = extraout_AL_05;
    }
    return (bool)bVar17;
  case 0x1c:
    bVar17 = param_2->TypeIndex;
    if ((1 < (ulonglong)bVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar17])(param_2);
    *(undefined4 *)&param_2->_padding_ = 0;
    param_2->TypeIndex = '\0';
    UE::Mutable::Private::operator>>((FInputArchive *)param_1,(uint *)param_2);
    return (bool)extraout_AL_08;
  case 0x1d:
    bVar17 = param_2->TypeIndex;
    if ((1 < (ulonglong)bVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar19 = (*pcVar7)();
      return (bool)uVar19;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar17])(param_2);
    param_2->TypeIndex = '\x01';
    param_2->_padding_ = 0;
    param_2->_padding_ = 0;
    UE::Mutable::Private::operator>><UE::Mutable::Private::FImage>
              ((FInputArchive *)param_1,(TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)param_2
              );
    return (bool)extraout_AL_09;
  case 0x1e:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar26);
    pcVar1 = (char *)((longlong)pbVar25 * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar27;
    *(char *)&param_1->ValueB = *(char *)&param_1->ValueB + (char)((ulonglong)param_1 >> 8);
    out(unaff_RSI[1],uVar26);
    *unaff_RBP = *unaff_RBP;
    *pbVar25 = *pbVar25 & bVar17;
    *pbVar25 = *pbVar25;
    *unaff_RBX = *unaff_RBX;
    *unaff_RDI = *unaff_RDI;
    puVar2 = (undefined1 *)((longlong)&FiberData + (longlong)pbVar25 * 2);
    *puVar2 = *puVar2;
    puVar2 = (undefined1 *)((longlong)pbVar25 * 2 + 0x75);
    *puVar2 = *puVar2;
    *(char *)&param_2->_padding_ = (char)param_2->_padding_ + cVar27;
    uVar21 = *(int *)pbVar25 * 0x67006e;
    *(byte *)(ulonglong)uVar21 = *(byte *)(ulonglong)uVar21 & (byte)uVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
    bVar4 = unaff_R15[in_R10 * 2 + 0x6f];
    if ((byte)unaff_RBX < bVar4) {
      uVar19 = in(uVar26);
      *unaff_RDI = uVar19;
      out(*unaff_RSI,uVar26);
      unaff_RSI = unaff_RSI + 1;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar28 = (undefined4 *)(unaff_RSI + 1);
    out(*unaff_RSI,uVar26);
    lVar6 = (longlong)*(int *)(longlong)((int)puVar28 + 0x65) * 0x756f535c;
    if ((int)lVar6 != lVar6) {
      *(char *)&param_2->_padding_ = (char)param_2->_padding_ + cVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> **)
     (*unaff_retaddr + -8) = param_2;
    if ((byte)unaff_RBX == bVar4) {
      pbVar25 = (byte *)0x0;
    }
    else {
      *pbVar25 = *pbVar25 + bVar17;
    }
    cVar20 = (char)pbVar25;
    *pbVar25 = *pbVar25 + cVar20;
    *pbVar25 = *pbVar25 + cVar20;
    pcVar1 = unaff_RBX + 0x6f;
    *pcVar1 = *pcVar1 + cVar20;
    if (*pcVar1 == '\0') {
      uVar19 = in(uVar26);
      *unaff_RDI = uVar19;
      unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
      uVar19 = in(uVar26);
      unaff_RDI[1] = uVar19;
      uVar19 = in(uVar26);
      unaff_RDI[2] = uVar19;
      out(*puVar28,uVar26);
      puVar28 = (undefined4 *)(unaff_RSI + 9);
      out(*(undefined4 *)(unaff_RSI + 5),uVar26);
    }
    out(*(undefined1 *)puVar28,uVar26);
    *(char *)((longlong)puVar28 + 1) = *(char *)((longlong)puVar28 + 1) + cVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*unaff_RSI,uVar26);
  if (!in_CF) {
    unaff_retaddr[-1] = (longlong)unaff_RBX;
    if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar3 = unaff_RSI + 2;
  out(unaff_RSI[1],uVar26);
  uVar19 = in(uVar26);
  *unaff_RDI = uVar19;
  if (in_OF) {
    *pbVar25 = *pbVar25 & bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar25 = *pbVar25 + bVar17;
  *pbVar25 = *pbVar25 + bVar17;
  *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// FImage_const_,1>_>_const_&> @ 14aa91e30

void __cdecl
UE::Core::Private::VisitApplyEncoded<1,0,`UE::Mutable::Private::
operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>'::__l2::
<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>_const__>
          (<lambda_1> *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  UE::Mutable::Private::operator<<<UE::Mutable::Private::FImage>
            (param_1->Ar,(TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91e40

void __cdecl
UE::Core::Private::VisitApplyEncoded<1,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  UE::Mutable::Private::operator<<(param_1->Ar,(int *)param_2);
  return;
}

// VisitApplyEncoded<1,0,`UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>'::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&> @ 14aa91e50

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::Mutable::Private::operator__<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return param_2->_padding_ == pTVar1->_padding_;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91eb0

void __cdecl
UE::Core::Private::VisitApplyEncoded<2,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  UE::Mutable::Private::operator<<(param_1->Ar,(float *)param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91ec0

void __cdecl
UE::Core::Private::VisitApplyEncoded<3,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  UE::Mutable::Private::operator<<(param_1->Ar,(TVector4<float> *)param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91ed0

void __cdecl
UE::Core::Private::VisitApplyEncoded<4,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  FOutputArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = param_1->Ar;
  if (*(longlong *)param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Mutable::Private::operator<<<UE::Mutable::Private::FProjector>(pFVar1,*(FProjector **)param_2)
  ;
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91f30

void __cdecl
UE::Core::Private::VisitApplyEncoded<5,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91f40

void __cdecl
UE::Core::Private::VisitApplyEncoded<6,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91f50

void __cdecl
UE::Core::Private::VisitApplyEncoded<7,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  FOutputArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = param_1->Ar;
  if (*(longlong *)param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Mutable::Private::operator<<(pFVar1,*(FString **)param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa91fb0

void __cdecl
UE::Core::Private::VisitApplyEncoded<8,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  FOutputArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = param_1->Ar;
  if (*(longlong *)param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StoragePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ParametersPrivate.h"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Mutable::Private::operator<<(pFVar1,*(TMatrix<float> **)param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa92010

void __cdecl
UE::Core::Private::VisitApplyEncoded<9,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  return;
}

// FImage_const_,1>_>_const_&> @ 14aa92020

void __cdecl
UE::Core::Private::VisitApplyEncoded<0,0,`UE::Mutable::Private::
operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>'::__l2::
<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>_const__>
          (<lambda_1> *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  UE::Mutable::Private::operator<<(param_1->Ar,(uint *)param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa92030

void __cdecl
UE::Core::Private::VisitApplyEncoded<0,0,`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::<lambda_1>,TVariant<bool,int,float,UE::
Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (<lambda_1> *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  UE::Mutable::Private::operator<<(param_1->Ar,(bool *)param_2);
  return;
}

// VisitApplyEncoded<0,0,`UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>'::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&> @ 14aa92040

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::Mutable::Private::operator__<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_::__l2::<lambda_1>,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&>
          (<lambda_1> *param_1,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_2)

{
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar1 = param_1->ValueB;
  if (pTVar1->TypeIndex != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (int)param_2->_padding_ == (int)pTVar1->_padding_;
}

// FImage_const_,1>_>_const_&> @ 14aa920a0

void __cdecl
UE::Core::Private::VisitImpl<`UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::
Private::FImage_const_,1>_>'::__l2::<lambda_1>,0,1,0,TVariant<unsigned_int,TSharedPtr<UE::Mutable::
Private::FImage_const__1>_>_const__>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00014aa920b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`void___cdecl_UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(UE::Mutable::Private::FOutputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>,0,1,0,TVariant<unsigned_int,class_TSharedPtr<class_UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64>(unsigned___int64,`void___cdecl_UE::Mutable::Private::operator<<<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(UE::Mutable::Private::FOutputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_const_&> @ 14aa920c0

void __cdecl
UE::Core::Private::VisitImpl<`UE::Mutable::Private::operator<<<bool,int,float,UE::Math::
TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>'::__l2::
<lambda_1>,0,1,2,3,4,5,6,7,8,9,0,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::
Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_const__>
          (ulong64 param_1,<lambda_1> *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00014aa920d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*switchD_14aa91dff::switchdataD_152295830[param_1])(param_2,param_5);
  return;
}

// VisitImpl<`UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>'::__l2::<lambda_1>,0,1,0,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&> @ 14aa920e0

bool __cdecl
UE::Core::Private::
VisitImpl<_UE::Mutable::Private::operator__<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_::__l2::<lambda_1>,0,1,0,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014aa920f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`bool___cdecl_UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>,0,1,0,TVariant<unsigned_int,class_TSharedPtr<class_UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64>(unsigned___int64,`bool___cdecl_UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'
            ::__l2::Invokers[param_1])(param_2,param_5);
  return bVar1;
}

// ~TFunction_OwnedObject<`UE::Mutable::Private::FImageExternalLoadTask::Prepare'::__l2::<lambda_1>,0,0> @ 14aa93460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::FImageExternalLoadTask::Prepare'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Mutable::Private::FImageExternalLoadTask::Prepare_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::FImageExternalLoadTask::Prepare'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::__l2::<lambda_1>,0,0> @ 14aa93480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Mutable::Private::FMeshExternalLoadTask::Prepare_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::__l7::<lambda_1>,0,0> @ 14aa934a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::__l7::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare_::__l7::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::`7'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa934ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::__l28::<lambda_1>,0,0> @ 14aa934e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::__l28::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare_::__l28::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::`28'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014aa9350a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// `default_constructor_closure' @ 14aab88d0

void __thiscall
TSharedPtr<UE::Mutable::Private::FImage_const_,1>::_default_constructor_closure_
          (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *this)

{
  this->Object = (FImage *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return;
}

// `scalar_deleting_destructor' @ 14aab88e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l9::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8950

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Mutable::Private::CodeRunner::Run'::__l122::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab89c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Mutable::Private::CodeRunner::LaunchIssuedTask'::__l13::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8a30

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::Mutable::Private::CodeRunner::Run'[::O]::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8aa0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Any<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l9::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8ae0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::CodeRunner::Run'::__l122::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8b20

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::CodeRunner::LaunchIssuedTask'::__l13::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8b60

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Mutable::Private::CodeRunner::Run'[::O]::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<UE::Mutable::Private::FImage,1>_(__cdecl*)(UE::Mutable::Private::FImage_const_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TSharedPtr<UE::Mutable::Private::FImage,1>_(__cdecl*)(UE::Mutable::Private::FImage_const_*),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VFImage_Private_Mutable_UE___00__PEBVFImage_Private_Mutable_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedRef<UE::Mutable::Private::FImage,1>_(__cdecl*)(int,int,int,enum_UE::Mutable::Private::EImageFormat,enum_UE::Mutable::Private::EInitializationType),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TSharedRef_VFImage_Private_Mutable_UE___00__HHHW4EImageFormat_Private_Mutable_UE__W4EInitializationType_345__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<UE::Mutable::Private::FImage,1>_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(TSharedPtr<UE::Mutable::Private::FImage,1>_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAV__TSharedPtr_VFImage_Private_Mutable_UE___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::FImageExternalLoadTask::Prepare'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::FImageExternalLoadTask::Prepare'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::FMeshExternalLoadTask::Prepare'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::__l7::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::`7'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
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
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::__l28::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::`28'::<lambda_1>,0,0>
        ::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
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
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8dc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageComposeTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageComposeTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8e00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Mutable::Private::FImageExternalLoadTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageExternalLoadTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8e40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageInvertTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageInvertTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8e80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageLayerColourTask,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageLayerColourTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8ec0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageLayerTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageLayerTask,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8f00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageMipmapTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageMipmapTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8f40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImagePixelFormatTask,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImagePixelFormatTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8f80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageResizeRelTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageResizeRelTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab8fc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageResizeTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageResizeTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9000

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageSaturateTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageSaturateTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9040

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FImageSwizzleTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FImageSwizzleTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9080

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FLayout,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FLayout,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab90c0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Mutable::Private::CodeRunner::FLoadImageRomsTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::CodeRunner::FLoadImageRomsTask,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9100

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Mutable::Private::CodeRunner::FLoadMeshRomTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::CodeRunner::FLoadMeshRomTask,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9140

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMeshExternalLoadTask,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FMeshExternalLoadTask,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9180

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FModel,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FModel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab91c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FParameters,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Mutable::Private::FParameters,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9200

void * __thiscall
UE::Mutable::Private::FImage::_scalar_deleting_destructor_(FImage *this,uint param_1)

{
  UObject *pUVar1;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar2;
  
  FVar2 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar2 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
             )&this->DataStorage;
  }
  DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
            ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
              *)FVar2,(this->DataStorage).Buffers.ArrayNum);
  FVar2 = (this->DataStorage).Buffers.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  pUVar1 = (this->Texture).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Texture).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7FResource_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9290

void * __thiscall
UE::Mutable::Private::FImageComposeTask::_scalar_deleting_destructor_
          (FImageComposeTask *this,uint param_1)

{
  ~FImageComposeTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab92d0

void * __thiscall
UE::Mutable::Private::FImageExternalLoadTask::_scalar_deleting_destructor_
          (FImageExternalLoadTask *this,uint param_1)

{
  ~FImageExternalLoadTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9310

void * __thiscall
UE::Mutable::Private::FImageInvertTask::_scalar_deleting_destructor_
          (FImageInvertTask *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar3 = (undefined8 *)this->_padding_;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9380

void * __thiscall
UE::Mutable::Private::FImageLayerColourTask::_scalar_deleting_destructor_
          (FImageLayerColourTask *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Mask).SharedReferenceCount.ReferenceController);
  *(undefined ***)this = &___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar3 = *(undefined8 **)&this->field_0x18;
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
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9400

void * __thiscall
UE::Mutable::Private::FImageLayerTask::_scalar_deleting_destructor_
          (FImageLayerTask *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Mask).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Blended).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar3 = (undefined8 *)this->_padding_;
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
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9480

void * __thiscall
UE::Mutable::Private::FImageMipmapTask::_scalar_deleting_destructor_
          (FImageMipmapTask *this,uint param_1)

{
  ~FImageMipmapTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab94c0

void * __thiscall
UE::Mutable::Private::FImagePixelFormatTask::_scalar_deleting_destructor_
          (FImagePixelFormatTask *this,uint param_1)

{
  ~FImagePixelFormatTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9500

void * __thiscall
UE::Mutable::Private::FImageResizeRelTask::_scalar_deleting_destructor_
          (FImageResizeRelTask *this,uint param_1)

{
  ~FImageResizeRelTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9540

void * __thiscall
UE::Mutable::Private::FImageResizeTask::_scalar_deleting_destructor_
          (FImageResizeTask *this,uint param_1)

{
  ~FImageResizeTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9580

void * __thiscall
UE::Mutable::Private::FImageSaturateTask::_scalar_deleting_destructor_
          (FImageSaturateTask *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar3 = (undefined8 *)this->_padding_;
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab95f0

void * __thiscall
UE::Mutable::Private::FImageSwizzleTask::_scalar_deleting_destructor_
          (FImageSwizzleTask *this,uint param_1)

{
  ~FImageSwizzleTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9630

void * __thiscall
UE::Mutable::Private::FInputArchive::_scalar_deleting_destructor_(FInputArchive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
  DestructItems<TSharedPtr<void,1>,int>
            ((TSharedPtr<void,1> *)(this->History).AllocatorInstance.Data,(this->History).ArrayNum);
  pFVar1 = (this->History).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9690

void * __thiscall
UE::Mutable::Private::FInputStream::_scalar_deleting_destructor_(FInputStream *this,uint param_1)

{
  *this = (FInputStream)&___7FInputStream_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab96d0

void * __thiscall
UE::Mutable::Private::CodeRunner::FIssuedTask::_scalar_deleting_destructor_
          (FIssuedTask *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  pFVar3 = (this->Event).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9740

void * __thiscall
UE::Mutable::Private::FLayout::_scalar_deleting_destructor_(FLayout *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
             (this->Masks).AllocatorInstance.Data,(this->Masks).ArrayNum);
  pFVar1 = (this->Masks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FResource_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab97b0

void * __thiscall
UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::_scalar_deleting_destructor_
          (FLoadImageRomsTask *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  
  pFVar3 = (this->RomIndices).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9820

/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */

void * __thiscall
UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::_scalar_deleting_destructor_
          (FLoadMeshRomTask *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  undefined8 *puVar4;
  
  FVar3 = (this->RomIndices).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  this->_padding_ = (longlong)&___7FIssuedTask_CodeRunner_Private_Mutable_UE__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9890

void * __thiscall
UE::Mutable::Private::FMeshExternalLoadTask::_scalar_deleting_destructor_
          (FMeshExternalLoadTask *this,uint param_1)

{
  ~FMeshExternalLoadTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab98d0

void * __thiscall
UE::Mutable::Private::FOutputModelStream::_scalar_deleting_destructor_
          (FOutputModelStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOutputStream_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9910

void * __thiscall
UE::Mutable::Private::FOutputStream::_scalar_deleting_destructor_(FOutputStream *this,uint param_1)

{
  *this = (FOutputStream)&___7FOutputStream_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14aab9950

void * __thiscall
UE::Mutable::Private::String::_scalar_deleting_destructor_(String *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FResource_Private_Mutable_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// IMPLEMENT_MODULE_MutableRuntime @ 14aafdd00

void __cdecl IMPLEMENT_MODULE_MutableRuntime(void)

{
  return;
}

// CVarEnableGlobalMemoryTracking'' @ 150421b10

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingConsoleFlags::
CVarEnableGlobalMemoryTracking__(void)

{
  UE::Mutable::Private::FMemoryTrackingConsoleFlags::CVarEnableGlobalMemoryTracking._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &UE::Mutable::Private::FMemoryTrackingConsoleFlags::CVarEnableGlobalMemoryTracking);
  return;
}

// CmdDumpMutableGlobalMemoryAbsoluteCounter'' @ 150421b30

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdDumpMutableGlobalMemoryAbsoluteCounter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &UE::Mutable::Private::FMemoryTrackingCommands::
              CmdDumpMutableGlobalMemoryAbsoluteCounter);
  return;
}

// CmdDumpMutableGlobalMemoryCounter'' @ 150421b50

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdDumpMutableGlobalMemoryCounter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &UE::Mutable::Private::FMemoryTrackingCommands::CmdDumpMutableGlobalMemoryCounter);
  return;
}

// CmdRestoreMutableGlobalMemoryCounter'' @ 150421b70

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdRestoreMutableGlobalMemoryCounter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &UE::Mutable::Private::FMemoryTrackingCommands::CmdRestoreMutableGlobalMemoryCounter);
  return;
}

// CmdZeroMutableGlobalMemoryCounter'' @ 150421b90

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FMemoryTrackingCommands::
CmdZeroMutableGlobalMemoryCounter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &UE::Mutable::Private::FMemoryTrackingCommands::CmdZeroMutableGlobalMemoryCounter);
  return;
}

// Mutex'' @ 150421bb0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Mutable::Private::FGlobalMemoryCounter::Mutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150421bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&UE::Mutable::Private::FGlobalMemoryCounter::Mutex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCodeRunnerForceInline'' @ 150421bd0

void __cdecl _dynamic_atexit_destructor_for__CVarCodeRunnerForceInline__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCodeRunnerForceInline);
  return;
}

// `dynamic_atexit_destructor_for_'LogMuscleActivationConstraint'' @ 150421bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMuscleActivationConstraint__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMuscleActivationConstraint);
  return;
}

// `dynamic_atexit_destructor_for_'LogMutableCore'' @ 150421c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMutableCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMutableCore);
  return;
}

// `dynamic_atexit_destructor_for_'None'' @ 150421c30

void __cdecl
`UE::Mutable::Private::FModel::GetStateName'::__l2::_dynamic_atexit_destructor_for__None__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::None.Data.AllocatorInstance.Data;
  if (::None.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::None.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NullString'' @ 150421c50

void __cdecl
`UE::Mutable::Private::FMesh::GetTag'::__l14::_dynamic_atexit_destructor_for__NullString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NullString.Data.AllocatorInstance.Data;
  if (NullString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NullString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_ClosedTasks'' @ 150421c70

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_ClosedTasks__
          (void)

{
  if ((__GTraceCounterMutableRuntime_ClosedTasks.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_ClosedTasks.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_IssuedTasks'' @ 150421c90

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_IssuedTasks__
          (void)

{
  if ((__GTraceCounterMutableRuntime_IssuedTasks.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_IssuedTasks.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_IssuedTasksOnHold'' @ 150421cb0

void __cdecl
UE::Mutable::Private::
_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_IssuedTasksOnHold__(void)

{
  if ((__GTraceCounterMutableRuntime_IssuedTasksOnHold.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_IssuedTasksOnHold.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMutableRuntime_OpenTask'' @ 150421cd0

void __cdecl
UE::Mutable::Private::_dynamic_atexit_destructor_for____GTraceCounterMutableRuntime_OpenTask__(void)

{
  if ((__GTraceCounterMutableRuntime_OpenTask.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMutableRuntime_OpenTask.CounterName);
    return;
  }
  return;
}

