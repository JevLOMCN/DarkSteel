// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 185

// OnNaniteSettingsChanged'' @ 141160640

void __cdecl `dynamic_initializer_for_'AWorldSettings::OnNaniteSettingsChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'AWorldSettings::OnNaniteSettingsChanged__);
  return;
}

// OnWorldPartitionSubsystemDeinitialized'' @ 141160660

void __cdecl
`dynamic_initializer_for_'UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::
         OnWorldPartitionSubsystemDeinitialized__);
  return;
}

// OnWorldPartitionSubsystemInitialized'' @ 141160680

void __cdecl
`dynamic_initializer_for_'UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::
         OnWorldPartitionSubsystemInitialized__);
  return;
}

// OverriddenLoadingRanges'' @ 1411606a0

void __cdecl `dynamic_initializer_for_'UWorldPartitionSubsystem::OverriddenLoadingRanges__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::OverriddenLoadingRanges__);
  return;
}

// OverrideLoadingRangeCommand'' @ 1411606c0

void __cdecl `dynamic_initializer_for_'UWorldPartitionSubsystem::OverrideLoadingRangeCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UWorldPartitionSubsystem::<lambda_36>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UWorldPartitionSubsystem::OverrideLoadingRangeCommand,GOverrideLoadingRangeCommandName
             ,L"Sets runtime loading range. Args -grid=[Name] -range=[Range]",
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
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::OverrideLoadingRangeCommand__);
  return;
}

// `dynamic_initializer_for_'CMaxLoadingStreamingCells'' @ 1411607f0

void __cdecl _dynamic_initializer_for__CMaxLoadingStreamingCells__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CMaxLoadingStreamingCells,L"wp.Runtime.MaxLoadingStreamingCells",
             &GMaxLoadingStreamingCells,
             L"Used to limit the number of concurrent loading world partition streaming cells.",0);
  atexit(_dynamic_atexit_destructor_for__CMaxLoadingStreamingCells__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDataLayers'' @ 141160840

void __cdecl _dynamic_initializer_for__CVarDrawDataLayers__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_32>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawDataLayers,L"wp.Runtime.ToggleDrawDataLayers",
             L"Toggles debug display of active data layers.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawDataLayers__);
  return;
}

// `dynamic_initializer_for_'CVarDrawDataLayersLoadTime'' @ 141160970

void __cdecl _dynamic_initializer_for__CVarDrawDataLayersLoadTime__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_33>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawDataLayersLoadTime,L"wp.Runtime.ToggleDrawDataLayersLoadTime",
             L"Toggles debug display of active data layers load time.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawDataLayersLoadTime__);
  return;
}

// `dynamic_initializer_for_'CVarDrawRuntimeCellsDetails'' @ 141160aa0

void __cdecl _dynamic_initializer_for__CVarDrawRuntimeCellsDetails__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_31>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawRuntimeCellsDetails,L"wp.Runtime.ToggleDrawRuntimeCellsDetails",
             L"Toggles debug display of world partition runtime streaming cells.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawRuntimeCellsDetails__);
  return;
}

// `dynamic_initializer_for_'CVarDrawRuntimeHash2D'' @ 141160bd0

void __cdecl _dynamic_initializer_for__CVarDrawRuntimeHash2D__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawRuntimeHash2D,L"wp.Runtime.ToggleDrawRuntimeHash2D",
             L"Toggles 2D debug display of world partition runtime hash.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawRuntimeHash2D__);
  return;
}

// `dynamic_initializer_for_'CVarDrawRuntimeHash2DScaleFactor'' @ 141160d00

void __cdecl _dynamic_initializer_for__CVarDrawRuntimeHash2DScaleFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDrawRuntimeHash2DScaleFactor,L"wp.Runtime.DrawRuntimeHash2DScaleFactor",
             &GDrawRuntimeHash2DScaleFactor,
             L"Allows to reduce the size on screen of the 2D debug display of world partition runtime hash (value must be between 0.1 and 1)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDrawRuntimeHash2DScaleFactor__);
  return;
}

// `dynamic_initializer_for_'CVarDrawRuntimeHash3D'' @ 141160d50

void __cdecl _dynamic_initializer_for__CVarDrawRuntimeHash3D__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawRuntimeHash3D,L"wp.Runtime.ToggleDrawRuntimeHash3D",
             L"Toggles 3D debug display of world partition runtime hash.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawRuntimeHash3D__);
  return;
}

// `dynamic_initializer_for_'CVarDrawStreamingPerfs'' @ 141160e80

void __cdecl _dynamic_initializer_for__CVarDrawStreamingPerfs__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_29>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawStreamingPerfs,L"wp.Runtime.ToggleDrawStreamingPerfs",
             L"Toggles debug display of world partition streaming perfs.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawStreamingPerfs__);
  return;
}

// `dynamic_initializer_for_'CVarDrawStreamingSources'' @ 141160fb0

void __cdecl _dynamic_initializer_for__CVarDrawStreamingSources__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawStreamingSources,L"wp.Runtime.ToggleDrawStreamingSources",
             L"Toggles debug display of world partition streaming sources.",
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawStreamingSources__);
  return;
}

// `dynamic_initializer_for_'CVarDrawWorldPartitionIndex'' @ 1411610e0

void __cdecl _dynamic_initializer_for__CVarDrawWorldPartitionIndex__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDrawWorldPartitionIndex,L"wp.Runtime.DrawWorldPartitionIndex",
             L"Sets the index of the wanted partitioned world to display debug draw.\nSets < 0 to display debug draw all registered partitioned worlds.\n"
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
  atexit(_dynamic_atexit_destructor_for__CVarDrawWorldPartitionIndex__);
  return;
}

// `dynamic_initializer_for_'CVarGDrawLegends'' @ 141161210

void __cdecl _dynamic_initializer_for__CVarGDrawLegends__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_30>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarGDrawLegends,L"wp.Runtime.ToggleDrawLegends",
             L"Toggles debug display of world partition legends.",
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
  atexit(_dynamic_atexit_destructor_for__CVarGDrawLegends__);
  return;
}

// `dynamic_initializer_for_'CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP'' @ 141161340

void __cdecl
_dynamic_initializer_for__CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP,
             L"wp.Runtime.LevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP",
             &GLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP,
             L"Force a GC update when there\'s more than the number of specified pending purge levels."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP__
        );
  return;
}

// `dynamic_initializer_for_'CVarServerStreamingSourceMinimumExtraAngle'' @ 141161390

void __cdecl _dynamic_initializer_for__CVarServerStreamingSourceMinimumExtraAngle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarServerStreamingSourceMinimumExtraAngle,
             L"wp.Runtime.ServerStreamingSourceMinimumExtraAngle",
             &GServerStreamingSourceMinimumExtraAngle,
             L"Minimum value added to the angle of the streaming source shape sector used by the server (in degree)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarServerStreamingSourceMinimumExtraAngle__);
  return;
}

// `dynamic_initializer_for_'CVarServerStreamingSourceMinimumExtraRadius'' @ 1411613e0

void __cdecl _dynamic_initializer_for__CVarServerStreamingSourceMinimumExtraRadius__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarServerStreamingSourceMinimumExtraRadius,
             L"wp.Runtime.ServerStreamingSourceMinimumExtraRadius",
             &GServerStreamingSourceMinimumExtraRadius,
             L"Minimum value added to the radius of the streaming sources used by the server (in Unreal unit)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarServerStreamingSourceMinimumExtraRadius__);
  return;
}

// `dynamic_initializer_for_'CVarUdateStreamingStateTimeLimit'' @ 141161430

void __cdecl _dynamic_initializer_for__CVarUdateStreamingStateTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUdateStreamingStateTimeLimit,L"wp.Runtime.UpdateStreamingStateTimeLimit",
             &GUpdateStreamingStateTimeLimit,
             L"Maximum amount of time to spend doing World Partition UpdateStreamingState (ms per frame)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUdateStreamingStateTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarUpdateStreamingSources'' @ 141161480

void __cdecl _dynamic_initializer_for__CVarUpdateStreamingSources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUpdateStreamingSources,L"wp.Runtime.UpdateStreamingSources",
             &GUpdateStreamingSources,
             L"Set to 0 to stop updating (freeze) world partition streaming sources.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUpdateStreamingSources__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper241'' @ 1411614d0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper241__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_37>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper241,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper242'' @ 141161530

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper242__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_38>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper242,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper243'' @ 141161590

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper243__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_39>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper243,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'GDumpStreamingSourcesCmd'' @ 1411615f0

void __cdecl _dynamic_initializer_for__GDumpStreamingSourcesCmd__(void)

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
    puVar3[3] = <lambda_34>::<lambda_invoker_cdecl>;
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
                     (IConsoleManager::Singleton,L"wp.Runtime.DumpStreamingSources",
                      L"Dumps active streaming sources to the log",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpStreamingSourcesCmd,pIVar5);
  GDumpStreamingSourcesCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpStreamingSourcesCmd__);
  return;
}

// `dynamic_initializer_for_'GDumpWorldPartitionsCmd'' @ 141161790

void __cdecl _dynamic_initializer_for__GDumpWorldPartitionsCmd__(void)

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
    puVar3[3] = <lambda_35>::<lambda_invoker_cdecl>;
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
                     (IConsoleManager::Singleton,L"wp.Runtime.DumpWorldPartitions",
                      L"Dumps active world partitions to the log",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpWorldPartitionsCmd,pIVar5);
  GDumpWorldPartitionsCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpWorldPartitionsCmd__);
  return;
}

// `dynamic_initializer_for_'GRegisterWorldSettingCustomVersion'' @ 141161930

void __cdecl _dynamic_initializer_for__GRegisterWorldSettingCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FWorldSettingCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"WorldSettingVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterWorldSettingCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogWorldSettings'' @ 141161970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWorldSettings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWorldSettings,L"LogWorldSettings",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWorldSettings__);
  return;
}

// `dynamic_initializer_for_'NAME_WorldPartitionRuntimeHash'' @ 1411619b0

void __cdecl _dynamic_initializer_for__NAME_WorldPartitionRuntimeHash__(void)

{
  FName::FName(&NAME_WorldPartitionRuntimeHash,"WorldPartitionRuntimeHash");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WorldPartitionUpdateStreamingState'' @ 1411619d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WorldPartitionUpdateStreamingState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WorldPartitionUpdateStreamingState ==
      (FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingState>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WorldPartitionUpdateStreamingState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WorldPartitionUpdateStreamingState,*pFVar1
               ,L"Update Streaming State","STATGROUP_WorldPartition","STATCAT_Advanced",
               L"World Partition",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal'' @ 141161a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal ==
      (FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingStateExternal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WorldPartitionUpdateStreamingStateExternal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal
               ,*pFVar1,L"Update Streaming State (External)","STATGROUP_WorldPartition",
               "STATCAT_Advanced",L"World Partition",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h__Script_Engine_1802704411'' @ 141161af0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h__Script_Engine_1802704411__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SubstrateMaterialShared_h__Script_Engine_1544141252'' @ 141161b40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SubstrateMaterialShared_h__Script_Engine_1544141252__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Rendering_SubstrateMaterialShared_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h__Script_Engine_180277286'' @ 141161b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h__Script_Engine_180277286__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h__Script_Engine_1504027896'' @ 141161bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h__Script_Engine_1504027896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_WorldPartition'' @ 141161c10

void __cdecl _dynamic_initializer_for___GCsvCategory_WorldPartition__(void)

{
  FString::operator=(&_GCsvCategory_WorldPartition.Name,L"WorldPartition");
  _GCsvCategory_WorldPartition.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_WorldPartition.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_WorldPartition__);
  return;
}

// `scalar_deleting_destructor' @ 148ae25c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ae27f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_26>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ae2a20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_27>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ae2c50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_28>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ae2e80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_29>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_29>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ae3200

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_30>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_30>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ae3490

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_31>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_31>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UWorldPartitionSubsystem @ 148ae34c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionSubsystem(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148ae3550

void __cdecl
Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 148ae3710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_32>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_32>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted @ 148ae3740

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148ae3980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_33>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_33>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bExactState_SetBit @ 148ae39b0

void __cdecl
Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::
NewProp_bExactState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148ae39c0

void __cdecl
Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted @ 148ae39d0

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148ae3c00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UWorldPartitionSubsystem::<lambda_36>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UWorldPartitionSubsystem::<lambda_36>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume @ 148ae3eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume(void)

{
  if (Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton,
               &Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton;
}

// Z_Construct_UClass_AWorldSettings @ 148ae3ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldSettings(void)

{
  if (Z_Registration_Info_UClass_AWorldSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldSettings.OuterSingleton,
               &Z_Construct_UClass_AWorldSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldSettings.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EVisibilityAggressiveness @ 148ae3f30

UEnum * __cdecl Z_Construct_UEnum_Engine_EVisibilityAggressiveness(void)

{
  if (Z_Registration_Info_UEnum_EVisibilityAggressiveness.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVisibilityAggressiveness.InnerSingleton,
               &Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVisibilityAggressiveness.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EVolumeLightingMethod @ 148ae3f70

UEnum * __cdecl Z_Construct_UEnum_Engine_EVolumeLightingMethod(void)

{
  if (Z_Registration_Info_UEnum_EVolumeLightingMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVolumeLightingMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVolumeLightingMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBroadphaseSettings @ 148ae3fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBroadphaseSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBroadphaseSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBroadphaseSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBroadphaseSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FBroadphaseSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNaniteSettings @ 148ae4030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNaniteSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNaniteSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNaniteSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNaniteSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNaniteSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNaniteSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetViewer @ 148ae40b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetViewer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetViewer.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetViewer.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetViewer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetViewer.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetViewer.InnerSingleton;
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

// EVisibilityAggressiveness_StaticEnum @ 148ae4130

UEnum * __cdecl EVisibilityAggressiveness_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityAggressiveness,(UObject *)pUVar1,
                       L"EVisibilityAggressiveness");
  }
  return Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton;
}

// EVolumeLightingMethod_StaticEnum @ 148ae4170

UEnum * __cdecl EVolumeLightingMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVolumeLightingMethod,(UObject *)pUVar1,
                       L"EVolumeLightingMethod");
  }
  return Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton;
}

// NewProp_bUseAmbientOcclusion_SetBit @ 148ae41b0

void __cdecl
Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 1;
  return;
}

// NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit @ 148ae41c0

void __cdecl
Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::
NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 2;
  return;
}

// NewProp_bVisualizeMaterialDiffuse_SetBit @ 148ae41d0

void __cdecl
Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::
NewProp_bVisualizeMaterialDiffuse_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 4;
  return;
}

// NewProp_bVisualizeAmbientOcclusion_SetBit @ 148ae41e0

void __cdecl
Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::
NewProp_bVisualizeAmbientOcclusion_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 8;
  return;
}

// NewProp_bCompressLightmaps_SetBit @ 148ae41f0

void __cdecl
Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 0x10;
  return;
}

// NewProp_bWorldPartition_SetBit @ 148ae4200

void __cdecl
Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bWorldPartition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 148ae4210

void * __cdecl Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x54;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLightmassWorldInfoSettings,&UE::CoreUObject::Private::Construct<FLightmassWorldInfoSettings>,&UE::CoreUObject::Private::ConstructForTests<FLightmassWorldInfoSettings>,&UE::CoreUObject::Private::Destruct<FLightmassWorldInfoSettings>,&UE::CoreUObject::Private::Copy<FLightmassWorldInfoSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148ae4250

void * __cdecl Z_Construct_UScriptStruct_FNetViewer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetViewer,&UE::CoreUObject::Private::Construct<FNetViewer>,&UE::CoreUObject::Private::ConstructForTests<FNetViewer>,&UE::CoreUObject::Private::Destruct<FNetViewer>,&UE::CoreUObject::Private::Copy<FNetViewer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowMaskedMaterials_SetBit @ 148ae4290

void __cdecl
Z_Construct_UScriptStruct_FNaniteSettings_Statics::NewProp_bAllowMaskedMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 148ae42a0

void * __cdecl Z_Construct_UScriptStruct_FNaniteSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNaniteSettings,&UE::CoreUObject::Private::Construct<FNaniteSettings>,&UE::CoreUObject::Private::ConstructForTests<FNaniteSettings>,&UE::CoreUObject::Private::Destruct<FNaniteSettings>,&UE::CoreUObject::Private::Copy<FNaniteSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseMBPOnClient_SetBit @ 148ae42e0

void __cdecl
Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bUseMBPOnServer_SetBit @ 148ae42f0

void __cdecl
Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bUseMBPOuterBounds_SetBit @ 148ae4300

void __cdecl
Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 148ae4310

void * __cdecl Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBroadphaseSettings,&UE::CoreUObject::Private::Construct<FBroadphaseSettings>,&UE::CoreUObject::Private::ConstructForTests<FBroadphaseSettings>,&UE::CoreUObject::Private::Destruct<FBroadphaseSettings>,&UE::CoreUObject::Private::Copy<FBroadphaseSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AWorldSettings_OnRep_NaniteSettings @ 148ae4570

UFunction * __cdecl Z_Construct_UFunction_AWorldSettings_OnRep_NaniteSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldSettings_OnRep_NaniteSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148ae45b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy,`UWorldPartitionSubsystem::<lambda_36>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ @ 148ae45e0

UFunction * __cdecl Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPrecomputeVisibility_SetBit @ 148ae4620

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 1;
  return;
}

// NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit @ 148ae4630

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 2;
  return;
}

// NewProp_bEnableWorldBoundsChecks_SetBit @ 148ae4640

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 4;
  return;
}

// NewProp_bEnableNavigationSystem_SetBit @ 148ae4650

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 8;
  return;
}

// NewProp_bEnableAISystem_SetBit @ 148ae4660

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 0x10;
  return;
}

// NewProp_bEnableWorldComposition_SetBit @ 148ae4670

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 0x20;
  return;
}

// NewProp_bUseClientSideLevelStreamingVolumes_SetBit @ 148ae4680

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 0x40;
  return;
}

// NewProp_bEnableWorldOriginRebasing_SetBit @ 148ae4690

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cd) = *(byte *)((longlong)param_1 + 0x2cd) | 0x80;
  return;
}

// NewProp_bWorldGravitySet_SetBit @ 148ae46a0

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 1;
  return;
}

// NewProp_bGlobalGravitySet_SetBit @ 148ae46b0

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 2;
  return;
}

// NewProp_bMinimizeBSPSections_SetBit @ 148ae46c0

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 4;
  return;
}

// NewProp_bForceNoPrecomputedLighting_SetBit @ 148ae46d0

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 8;
  return;
}

// NewProp_bForceVolumetricLightmapsOnly_SetBit @ 148ae46e0

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceVolumetricLightmapsOnly_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 0x10;
  return;
}

// NewProp_bHighPriorityLoading_SetBit @ 148ae46f0

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 0x20;
  return;
}

// NewProp_bHighPriorityLoadingLocal_SetBit @ 148ae4700

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 0x40;
  return;
}

// NewProp_bOverrideDefaultBroadphaseSettings_SetBit @ 148ae4710

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2ce) = *(byte *)((longlong)param_1 + 0x2ce) | 0x80;
  return;
}

// NewProp_bGenerateSingleClusterForLevel_SetBit @ 148ae4720

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cf) = *(byte *)((longlong)param_1 + 0x2cf) | 1;
  return;
}

// NewProp_bAllowTimeDilation_SetBit @ 148ae4730

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bAllowTimeDilation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cf) = *(byte *)((longlong)param_1 + 0x2cf) | 2;
  return;
}

// NewProp_bReuseAddressAndPort_SetBit @ 148ae4740

void __cdecl
Z_Construct_UClass_AWorldSettings_Statics::NewProp_bReuseAddressAndPort_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cf) = *(byte *)((longlong)param_1 + 0x2cf) | 4;
  return;
}

// ESubstrateBsdfFeature_StaticEnum @ 148ae4750

UEnum * __cdecl ESubstrateBsdfFeature_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubstrateBsdfFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubstrateBsdfFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubstrateBsdfFeature,(UObject *)pUVar1,
                       L"ESubstrateBsdfFeature");
  }
  return Z_Registration_Info_UEnum_ESubstrateBsdfFeature.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 148ae49d0

void __cdecl <lambda_34>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  <lambda_34> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// <lambda_invoker_cdecl> @ 148ae49f0

void __cdecl <lambda_35>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  <lambda_35> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// <lambda_invoker_cdecl> @ 148ae4a10

void __cdecl <lambda_37>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FSubstrateMaterialCompilationOutput::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 148ae4a30

void __cdecl <lambda_38>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FSubstrateOperator::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 148ae4a50

void __cdecl <lambda_39>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FSubstrateRegisteredSharedLocalBasis::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// AddLambda<`UWorldPartitionSubsystem::<lambda_36>::operator()'::__l5::<lambda_1>_> @ 148ae4bb0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
::AddLambda<_UWorldPartitionSubsystem::<lambda_36>::operator()_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorldPartitionSubsystem__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy,`UWorldPartitionSubsystem::<lambda_36>::operator()'::`5'::<lambda_1>_>
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

// CastChecked<AParticleEventManager,AActor> @ 148ae5b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AParticleEventManager * __cdecl
CastChecked<AParticleEventManager,AActor>(AActor *param_1,Type param_2)

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
      return (AParticleEventManager *)0x0;
    }
    pFVar3 = GetTypeName<AParticleEventManager>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_AParticleEventManager_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AParticleEventManager *)param_1;
  }
  pFVar3 = GetTypeName<AParticleEventManager>(&local_28);
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

// ConstructItems<TObjectPtr<UWorldPartition>,TObjectPtr<UWorldPartition>,int> @ 148ae5c60

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
ConstructItems<TObjectPtr<UWorldPartition>,TObjectPtr<UWorldPartition>,int>
          (void *param_1,TObjectPtr<UWorldPartition> *param_2,int param_3)

{
  TObjectPtr<UWorldPartition> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UWorldPartition>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UWorldPartition>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UWorldPartition *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UWorldPartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FWorldPartitionDraw2DContext,int> @ 148ae5cc0

void __cdecl DefaultConstructItems<FWorldPartitionDraw2DContext,int>(void *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TVector2<double>_u_0 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  TVector2<double>_u_0 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xd0);
    do {
      piVar3[-10] = 0;
      piVar3[-9] = 0;
      piVar1 = piVar3 + -3;
      piVar2 = piVar3 + 1;
      piVar3[-8] = 0;
      piVar3[-7] = 0;
      piVar3[-6] = 0;
      piVar3[-5] = 0;
      piVar3[-4] = 0;
      *piVar1 = 0;
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      *piVar3 = 0;
      *piVar2 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0x400,(ForAnyElementType *)(piVar3 + -10),0,piVar3 + -7);
      if (*piVar1 < 0x400) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0x400,(ForAnyElementType *)(piVar3 + -6),piVar3[-4],piVar1);
      }
      if (*piVar2 < 0x80) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0x80,(ForAnyElementType *)(piVar3 + -2),*piVar3,piVar2);
      }
      local_48 = 0;
      local_20 = 0;
      local_68._s_0.X = 0.0;
      local_68._s_0.Y = 0.0;
      local_58 = 0;
      uStack_50 = 0;
      local_40._s_0.X = 0.0;
      local_40._s_0.Y = 0.0;
      local_30 = 0;
      uStack_28 = 0;
      FWorldPartitionDraw2DContext::Initialize
                ((FWorldPartitionDraw2DContext *)(piVar3 + -0x34),(TBox2<double> *)&local_40._s_0,
                 (TBox2<double> *)&local_68._s_0);
      piVar3 = piVar3 + 0x36;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWorldPartitionCanvasMultiLineTextItem,int> @ 148ae5e60

void __cdecl
DestructItems<FWorldPartitionCanvasMultiLineTextItem,int>
          (FWorldPartitionCanvasMultiLineTextItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TTuple<FString,FLinearColor>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->MultiLineText;
    do {
      DestructItems<TTuple<FString,FLinearColor>,int>
                ((TTuple<FString,FLinearColor> *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWorldPartitionDraw2DContext,int> @ 148ae5eb0

void __cdecl
DestructItems<FWorldPartitionDraw2DContext,int>(FWorldPartitionDraw2DContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWorldPartitionCanvasMultiLineTextItem,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->CanvasItems).MultiLineTexts;
    do {
      DestructItems<FWorldPartitionCanvasMultiLineTextItem,int>
                ((FWorldPartitionCanvasMultiLineTextItem *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FWorldPartitionCanvasBoxItem,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FWorldPartitionCanvasItems *)(pTVar2 + -2))->Lines).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FWorldPartitionCanvasMultiLineTextItem,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 0xd) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindOrLoadObject<UClass> @ 148ae6f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl ConstructorHelpersInternal::FindOrLoadObject<UClass>(FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  size_t sVar3;
  FUObjectItem *this;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar5 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
  pFVar6 = pFVar1;
  if (pFVar5 != pFVar1) {
    do {
      if (*(short *)pFVar6 == 0x2e) {
        if ((int)((longlong)pFVar6 - (longlong)pFVar1 >> 1) != -1) goto LAB_148ae6fe6;
        break;
      }
      pFVar6 = pFVar6 + 2;
    } while (pFVar6 != pFVar5);
    do {
      if (pFVar5 == pFVar1) goto LAB_148ae6fe6;
      pFVar5 = pFVar5 + -2;
    } while (*(short *)pFVar5 != 0x2f);
    iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 1);
    if (iVar4 != -1) {
      ::FString::RightChop(param_1,(FString *)&local_28,iVar4 + 1);
      ::FString::AppendChar(param_1,L'.');
      iVar4 = local_28.Size + -1;
      if (local_28.Size == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(param_1,local_28.DataPtr,iVar4);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
LAB_148ae6fe6:
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  local_18.DataPtr = (wchar_t *)0x0;
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  if ((param_1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_148ae702c;
  }
  sVar3 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar3;
LAB_148ae702c:
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  pUVar2 = (UClass *)
           StaticLoadObject(pUVar2,(UObject *)0x0,&local_28,&local_18,param_2,(UPackageMap *)0x0,
                            true,(FLinkerInstancingContext *)0x0);
  if (pUVar2 != (UClass *)0x0) {
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  return pUVar2;
}

// GetTypeName<AParticleEventManager> @ 148ae70b0

FString * __cdecl GetTypeName<AParticleEventManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_AParticleEventManager_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l41::<lambda_3>_> @ 148ae70f0

void __cdecl
AlgoImpl::
HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_3>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_3> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
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
  iVar6 = iVar4 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_148ae71f5:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pUVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  iVar8 = UWorldPartitionRuntimeCell::SortCompare
                                    (param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (iVar8 < 0) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                iVar7 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar9],param_1[iVar4]);
                if (-1 < iVar7) break;
                pUVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      iVar5 = UWorldPartitionRuntimeCell::SortCompare(param_1[(longlong)iVar6 + 2],param_1[iVar8]);
      if (iVar5 < 0) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar6 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar4],param_1[iVar8]);
    if (-1 < iVar6) goto LAB_148ae71f5;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = pUVar1;
    iVar4 = iVar8;
  } while( true );
}

// HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l41::<lambda_4>_> @ 148ae72e0

void __cdecl
AlgoImpl::
HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_4>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_4> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
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
  iVar6 = iVar4 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_148ae73e5:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pUVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  iVar8 = UWorldPartitionRuntimeCell::SortCompare
                                    (param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (iVar8 < 0) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                iVar7 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar9],param_1[iVar4]);
                if (-1 < iVar7) break;
                pUVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      iVar5 = UWorldPartitionRuntimeCell::SortCompare(param_1[(longlong)iVar6 + 2],param_1[iVar8]);
      if (iVar5 < 0) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar6 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar4],param_1[iVar8]);
    if (-1 < iVar6) goto LAB_148ae73e5;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = pUVar1;
    iVar4 = iVar8;
  } while( true );
}

// HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l77::<lambda_5>_> @ 148ae74d0

void __cdecl
AlgoImpl::
HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_5>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_5> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
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
  iVar6 = iVar4 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_148ae75d5:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pUVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  iVar8 = UWorldPartitionRuntimeCell::SortCompare
                                    (param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (iVar8 < 0) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                iVar7 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar9],param_1[iVar4]);
                if (-1 < iVar7) break;
                pUVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      iVar5 = UWorldPartitionRuntimeCell::SortCompare(param_1[(longlong)iVar6 + 2],param_1[iVar8]);
      if (iVar5 < 0) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar6 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar4],param_1[iVar8]);
    if (-1 < iVar6) goto LAB_148ae75d5;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = pUVar1;
    iVar4 = iVar8;
  } while( true );
}

// HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l77::<lambda_6>_> @ 148ae76c0

void __cdecl
AlgoImpl::
HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_6>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_6> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
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
  iVar6 = iVar4 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_148ae77c5:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pUVar1;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  iVar8 = UWorldPartitionRuntimeCell::SortCompare
                                    (param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (iVar8 < 0) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                iVar7 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar9],param_1[iVar4]);
                if (-1 < iVar7) break;
                pUVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      iVar5 = UWorldPartitionRuntimeCell::SortCompare(param_1[(longlong)iVar6 + 2],param_1[iVar8]);
      if (iVar5 < 0) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar6 = UWorldPartitionRuntimeCell::SortCompare(param_1[iVar4],param_1[iVar8]);
    if (-1 < iVar6) goto LAB_148ae77c5;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = pUVar1;
    iVar4 = iVar8;
  } while( true );
}

// InternalConstructor<ADEPRECATED_WorldPartitionVolume> @ 148ae78b0

void __cdecl InternalConstructor<ADEPRECATED_WorldPartitionVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ADEPRECATED_WorldPartitionVolume__6B_;
  }
  return;
}

// InternalConstructor<AWorldSettings> @ 148ae78e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldSettings>(FObjectInitializer *param_1)

{
  if ((AWorldSettings *)param_1->Obj != (AWorldSettings *)0x0) {
    AWorldSettings::AWorldSettings((AWorldSettings *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWorldPartitionSubsystem> @ 148ae7900

void __cdecl InternalConstructor<UWorldPartitionSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this == (UTickableWorldSubsystem *)0x0) {
    return;
  }
  UTickableWorldSubsystem::UTickableWorldSubsystem(this);
  this->_padding_ = (longlong)&UWorldPartitionSubsystem::_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&UWorldPartitionSubsystem::_vftable__for__FTickableGameObject__;
  this[1]._padding_ = (longlong)&___7UWorldPartitionSubsystem__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1].bInitialized = 0;
  *(undefined4 *)&this[1].field_0x44 = 0x80;
  *(undefined4 *)&this[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
  this[2]._padding_ = 0;
  *(undefined4 *)&this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  *(undefined8 *)&this[2].bInitialized = 0;
  *(undefined4 *)&this[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[3]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
  this[3]._padding_ = 0;
  *(undefined4 *)&this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4]._padding_ = 0;
  *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[4]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4]._padding_ = 0;
  this[4]._padding_ = 0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4].bInitialized = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 2;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  this[6]._padding_ = 0;
  *(undefined4 *)&this[6]._padding_ = 0;
  *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[6]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
  this[6]._padding_ = 0;
  *(undefined4 *)&this[6]._padding_ = 0;
  *(undefined8 *)&this[6].bInitialized = 0;
  this[7]._padding_ = 0;
  this[7]._padding_ = 0;
  *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0;
  *(undefined4 *)&this[7]._padding_ = 0;
  *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[7]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
  this[7]._padding_ = 0;
  *(undefined4 *)&this[7].bInitialized = 0;
  *(undefined4 *)&this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[8]._padding_ = 0;
  this[9]._padding_ = 0;
  *(undefined4 *)&this[9]._padding_ = 0;
  *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[9]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[9]._padding_ + 4) = 0;
  this[9]._padding_ = 0;
  *(undefined4 *)&this[9]._padding_ = 0;
  this[9]._padding_ = 0;
  this[9]._padding_ = 0;
  this[10]._padding_ = 0;
  *(undefined4 *)&this[10]._padding_ = 0;
  *(undefined4 *)((longlong)&this[10]._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this[10]._padding_ + 4) = 0;
  *(undefined4 *)&this[10]._padding_ = 0xffffffff;
  this[10]._padding_ = 0;
  *(undefined4 *)&this[10]._padding_ = 0;
  *(undefined1 *)&this[10]._padding_ = 0;
  return;
}

// InternalVTableHelperCtorCaller<ADEPRECATED_WorldPartitionVolume> @ 148ae7f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ADEPRECATED_WorldPartitionVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADEPRECATED_WorldPartitionVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ADEPRECATED_WorldPartitionVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldSettings> @ 148ae7fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWorldSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldSettings::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined ***)this = &AWorldSettings::_vftable__for__AInfo__;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined ***)(this + 1) = &AWorldSettings::_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x28,0);
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x90 = 0;
    *(undefined8 *)&this[1].field_0x98 = 0;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined8 *)&this[1].field_0xa8 = 0;
    this[1].field_0xe0 = 1;
    this[1].field_0xe8 = 1;
    *(undefined8 *)&this[1].field_0xf0 = 0;
    *(undefined8 *)&this[1].field_0xf8 = 0;
    *(undefined4 *)&this[1].field_0x100 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x104 = 0x40000000;
    FInteriorSettings::FInteriorSettings((FInteriorSettings *)&this[1].field_0x108);
    *(undefined2 *)&this[1].field_0x160 = 0;
    this[1].field_0x162 = 0;
    *(undefined8 *)&this[1].field_0x168 = 0;
    *(undefined8 *)&this[1].field_0x170 = 0;
    *(undefined8 *)&this[1].field_0x178 = 0;
    *(undefined8 *)&this[1].field_0x180 = 0;
    *(undefined8 *)&this[1].field_0x188 = 0;
    *(undefined8 *)&this[1].field_0x190 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    this[1].field_0x198 = 0;
    *(undefined4 *)&this[1].field_0x199 = 0;
    *(undefined2 *)&this[1].field_0x19d = 0;
    this[1].field_0x19f = 0;
    *(undefined8 *)&this[1].field_0x1a0 = 0;
    *(undefined8 *)&this[1].field_0x1a8 = 0;
    *(undefined8 *)&this[1].field_0x1b0 = 0;
    *(undefined8 *)&this[1].field_0x1b8 = 0;
    *(undefined8 *)&this[1].field_0x1c0 = 0;
    *(undefined8 *)&this[1].field_0x1c8 = 0;
    this[1].field_0x1d0 = 0;
    *(undefined4 *)&this[1].field_0x1d1 = 0;
    *(undefined2 *)&this[1].field_0x1d5 = 0;
    this[1].field_0x1d7 = 0;
    *(undefined4 *)&this[1].field_0x1d8 = 2;
    *(undefined8 *)&this[1].field_0x1e0 = 0;
    *(undefined8 *)&this[1].field_0x1e8 = 0;
    *(undefined8 *)&this[1].field_0x1f0 = 0;
    *(undefined8 *)&this[1].field_0x1f8 = 0;
    *(undefined8 *)&this[1].field_0x200 = 0;
    *(undefined8 *)&this[1].field_0x210 = 0;
    *(undefined8 *)&this[1].field_0x218 = 0;
    *(undefined8 *)&this[1].field_0x220 = 0;
    *(undefined8 *)&this[1].field_0x228 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionSubsystem> @ 148ae7fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartitionSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionSubsystem *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionSubsystem::GetPrivateStaticClass();
  pUVar3 = (UWorldPartitionSubsystem *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWorldPartitionSubsystem *)0x0) {
    pUVar3 = UWorldPartitionSubsystem::UWorldPartitionSubsystem(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l41::<lambda_3>_> @ 148ae8070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_3>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_3> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  int iVar2;
  UWorldPartitionRuntimeCell **ppUVar3;
  UWorldPartitionRuntimeCell **ppUVar4;
  UWorldPartitionRuntimeCell ***pppUVar5;
  int iVar6;
  UWorldPartitionRuntimeCell **ppUVar7;
  UWorldPartitionRuntimeCell **ppUVar8;
  UWorldPartitionRuntimeCell **ppUVar9;
  float fVar10;
  undefined1 auStack_388 [48];
  UWorldPartitionRuntimeCell **local_358;
  UWorldPartitionRuntimeCell **local_348;
  UWorldPartitionRuntimeCell **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    pppUVar5 = &local_348;
    do {
      ppUVar3 = pppUVar5[1];
      ppUVar4 = *pppUVar5;
      local_358 = pppUVar5[2];
      iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
      ppUVar9 = ppUVar4;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148ae8130:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppUVar7 = ppUVar3 + 1;
          pUVar1 = ppUVar9[iVar2 >> 1];
          ppUVar9[iVar2 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar1;
          ppUVar4 = ppUVar9;
LAB_148ae8160:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar3) goto code_r0x000148ae8169;
          goto LAB_148ae8180;
        }
        for (; ppUVar7 = ppUVar9, ppUVar4 = ppUVar9, ppUVar9 < ppUVar3; ppUVar3 = ppUVar3 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar4 = ppUVar4 + 1, ppUVar4 <= ppUVar3) {
            iVar6 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar8,*ppUVar4);
            ppUVar7 = ppUVar4;
            if (-1 < iVar6) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar1 = *ppUVar8;
          *ppUVar8 = *ppUVar3;
          *ppUVar3 = pUVar1;
        }
        goto LAB_148ae824b;
      }
LAB_148ae8239:
      HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_3>_>
                (ppUVar4,iVar2,param_3,param_4);
LAB_148ae824b:
      pppUVar5 = pppUVar5 + -3;
    } while (&local_348 <= pppUVar5);
  }
  return;
code_r0x000148ae8169:
  iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar9,*ppUVar4);
  if (-1 < iVar2) goto LAB_148ae8160;
LAB_148ae8180:
  do {
    ppUVar8 = ppUVar7;
    ppUVar7 = ppUVar8 + -1;
    if (ppUVar7 <= ppUVar9) break;
    iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar7,*ppUVar9);
  } while (-1 < iVar2);
  if (ppUVar4 <= ppUVar7) {
    pUVar1 = *ppUVar4;
    *ppUVar4 = *ppUVar7;
    *ppUVar7 = pUVar1;
    goto LAB_148ae8160;
  }
  pUVar1 = *ppUVar9;
  iVar6 = iVar6 + -1;
  *ppUVar9 = *ppUVar7;
  *ppUVar7 = pUVar1;
  if ((longlong)((longlong)ppUVar7 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar3 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar3) {
      *pppUVar5 = ppUVar4;
      pppUVar5[1] = ppUVar3;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar7 <= ppUVar9 + 1) goto LAB_148ae824b;
    ppUVar3 = ppUVar8 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar7) {
      *pppUVar5 = ppUVar9;
      pppUVar5[1] = ppUVar8 + -2;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar3 <= ppUVar4) goto LAB_148ae824b;
  }
  iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if (iVar6 == 0) goto LAB_148ae8239;
  goto LAB_148ae8130;
}

// IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l41::<lambda_4>_> @ 148ae8310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_4>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_4> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  int iVar2;
  UWorldPartitionRuntimeCell **ppUVar3;
  UWorldPartitionRuntimeCell **ppUVar4;
  UWorldPartitionRuntimeCell ***pppUVar5;
  int iVar6;
  UWorldPartitionRuntimeCell **ppUVar7;
  UWorldPartitionRuntimeCell **ppUVar8;
  UWorldPartitionRuntimeCell **ppUVar9;
  float fVar10;
  undefined1 auStack_388 [48];
  UWorldPartitionRuntimeCell **local_358;
  UWorldPartitionRuntimeCell **local_348;
  UWorldPartitionRuntimeCell **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    pppUVar5 = &local_348;
    do {
      ppUVar3 = pppUVar5[1];
      ppUVar4 = *pppUVar5;
      local_358 = pppUVar5[2];
      iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
      ppUVar9 = ppUVar4;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148ae83d0:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppUVar7 = ppUVar3 + 1;
          pUVar1 = ppUVar9[iVar2 >> 1];
          ppUVar9[iVar2 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar1;
          ppUVar4 = ppUVar9;
LAB_148ae8400:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar3) goto code_r0x000148ae8409;
          goto LAB_148ae8420;
        }
        for (; ppUVar7 = ppUVar9, ppUVar4 = ppUVar9, ppUVar9 < ppUVar3; ppUVar3 = ppUVar3 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar4 = ppUVar4 + 1, ppUVar4 <= ppUVar3) {
            iVar6 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar8,*ppUVar4);
            ppUVar7 = ppUVar4;
            if (-1 < iVar6) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar1 = *ppUVar8;
          *ppUVar8 = *ppUVar3;
          *ppUVar3 = pUVar1;
        }
        goto LAB_148ae84eb;
      }
LAB_148ae84d9:
      HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_4>_>
                (ppUVar4,iVar2,param_3,param_4);
LAB_148ae84eb:
      pppUVar5 = pppUVar5 + -3;
    } while (&local_348 <= pppUVar5);
  }
  return;
code_r0x000148ae8409:
  iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar9,*ppUVar4);
  if (-1 < iVar2) goto LAB_148ae8400;
LAB_148ae8420:
  do {
    ppUVar8 = ppUVar7;
    ppUVar7 = ppUVar8 + -1;
    if (ppUVar7 <= ppUVar9) break;
    iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar7,*ppUVar9);
  } while (-1 < iVar2);
  if (ppUVar4 <= ppUVar7) {
    pUVar1 = *ppUVar4;
    *ppUVar4 = *ppUVar7;
    *ppUVar7 = pUVar1;
    goto LAB_148ae8400;
  }
  pUVar1 = *ppUVar9;
  iVar6 = iVar6 + -1;
  *ppUVar9 = *ppUVar7;
  *ppUVar7 = pUVar1;
  if ((longlong)((longlong)ppUVar7 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar3 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar3) {
      *pppUVar5 = ppUVar4;
      pppUVar5[1] = ppUVar3;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar7 <= ppUVar9 + 1) goto LAB_148ae84eb;
    ppUVar3 = ppUVar8 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar7) {
      *pppUVar5 = ppUVar9;
      pppUVar5[1] = ppUVar8 + -2;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar3 <= ppUVar4) goto LAB_148ae84eb;
  }
  iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if (iVar6 == 0) goto LAB_148ae84d9;
  goto LAB_148ae83d0;
}

// IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l77::<lambda_5>_> @ 148ae85b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_5>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_5> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  int iVar2;
  UWorldPartitionRuntimeCell **ppUVar3;
  UWorldPartitionRuntimeCell **ppUVar4;
  UWorldPartitionRuntimeCell ***pppUVar5;
  int iVar6;
  UWorldPartitionRuntimeCell **ppUVar7;
  UWorldPartitionRuntimeCell **ppUVar8;
  UWorldPartitionRuntimeCell **ppUVar9;
  float fVar10;
  undefined1 auStack_388 [48];
  UWorldPartitionRuntimeCell **local_358;
  UWorldPartitionRuntimeCell **local_348;
  UWorldPartitionRuntimeCell **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    pppUVar5 = &local_348;
    do {
      ppUVar3 = pppUVar5[1];
      ppUVar4 = *pppUVar5;
      local_358 = pppUVar5[2];
      iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
      ppUVar9 = ppUVar4;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148ae8670:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppUVar7 = ppUVar3 + 1;
          pUVar1 = ppUVar9[iVar2 >> 1];
          ppUVar9[iVar2 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar1;
          ppUVar4 = ppUVar9;
LAB_148ae86a0:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar3) goto code_r0x000148ae86a9;
          goto LAB_148ae86c0;
        }
        for (; ppUVar7 = ppUVar9, ppUVar4 = ppUVar9, ppUVar9 < ppUVar3; ppUVar3 = ppUVar3 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar4 = ppUVar4 + 1, ppUVar4 <= ppUVar3) {
            iVar6 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar8,*ppUVar4);
            ppUVar7 = ppUVar4;
            if (-1 < iVar6) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar1 = *ppUVar8;
          *ppUVar8 = *ppUVar3;
          *ppUVar3 = pUVar1;
        }
        goto LAB_148ae878b;
      }
LAB_148ae8779:
      HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_5>_>
                (ppUVar4,iVar2,param_3,param_4);
LAB_148ae878b:
      pppUVar5 = pppUVar5 + -3;
    } while (&local_348 <= pppUVar5);
  }
  return;
code_r0x000148ae86a9:
  iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar9,*ppUVar4);
  if (-1 < iVar2) goto LAB_148ae86a0;
LAB_148ae86c0:
  do {
    ppUVar8 = ppUVar7;
    ppUVar7 = ppUVar8 + -1;
    if (ppUVar7 <= ppUVar9) break;
    iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar7,*ppUVar9);
  } while (-1 < iVar2);
  if (ppUVar4 <= ppUVar7) {
    pUVar1 = *ppUVar4;
    *ppUVar4 = *ppUVar7;
    *ppUVar7 = pUVar1;
    goto LAB_148ae86a0;
  }
  pUVar1 = *ppUVar9;
  iVar6 = iVar6 + -1;
  *ppUVar9 = *ppUVar7;
  *ppUVar7 = pUVar1;
  if ((longlong)((longlong)ppUVar7 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar3 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar3) {
      *pppUVar5 = ppUVar4;
      pppUVar5[1] = ppUVar3;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar7 <= ppUVar9 + 1) goto LAB_148ae878b;
    ppUVar3 = ppUVar8 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar7) {
      *pppUVar5 = ppUVar9;
      pppUVar5[1] = ppUVar8 + -2;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar3 <= ppUVar4) goto LAB_148ae878b;
  }
  iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if (iVar6 == 0) goto LAB_148ae8779;
  goto LAB_148ae8670;
}

// IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l77::<lambda_6>_> @ 148ae8850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_6>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_6> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  int iVar2;
  UWorldPartitionRuntimeCell **ppUVar3;
  UWorldPartitionRuntimeCell **ppUVar4;
  UWorldPartitionRuntimeCell ***pppUVar5;
  int iVar6;
  UWorldPartitionRuntimeCell **ppUVar7;
  UWorldPartitionRuntimeCell **ppUVar8;
  UWorldPartitionRuntimeCell **ppUVar9;
  float fVar10;
  undefined1 auStack_388 [48];
  UWorldPartitionRuntimeCell **local_358;
  UWorldPartitionRuntimeCell **local_348;
  UWorldPartitionRuntimeCell **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    pppUVar5 = &local_348;
    do {
      ppUVar3 = pppUVar5[1];
      ppUVar4 = *pppUVar5;
      local_358 = pppUVar5[2];
      iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
      ppUVar9 = ppUVar4;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148ae8910:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppUVar7 = ppUVar3 + 1;
          pUVar1 = ppUVar9[iVar2 >> 1];
          ppUVar9[iVar2 >> 1] = *ppUVar9;
          *ppUVar9 = pUVar1;
          ppUVar4 = ppUVar9;
LAB_148ae8940:
          ppUVar4 = ppUVar4 + 1;
          if (ppUVar4 <= ppUVar3) goto code_r0x000148ae8949;
          goto LAB_148ae8960;
        }
        for (; ppUVar7 = ppUVar9, ppUVar4 = ppUVar9, ppUVar9 < ppUVar3; ppUVar3 = ppUVar3 + -1) {
          while (ppUVar8 = ppUVar7, ppUVar4 = ppUVar4 + 1, ppUVar4 <= ppUVar3) {
            iVar6 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar8,*ppUVar4);
            ppUVar7 = ppUVar4;
            if (-1 < iVar6) {
              ppUVar7 = ppUVar8;
            }
          }
          pUVar1 = *ppUVar8;
          *ppUVar8 = *ppUVar3;
          *ppUVar3 = pUVar1;
        }
        goto LAB_148ae8a2b;
      }
LAB_148ae8a19:
      HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_6>_>
                (ppUVar4,iVar2,param_3,param_4);
LAB_148ae8a2b:
      pppUVar5 = pppUVar5 + -3;
    } while (&local_348 <= pppUVar5);
  }
  return;
code_r0x000148ae8949:
  iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar9,*ppUVar4);
  if (-1 < iVar2) goto LAB_148ae8940;
LAB_148ae8960:
  do {
    ppUVar8 = ppUVar7;
    ppUVar7 = ppUVar8 + -1;
    if (ppUVar7 <= ppUVar9) break;
    iVar2 = UWorldPartitionRuntimeCell::SortCompare(*ppUVar7,*ppUVar9);
  } while (-1 < iVar2);
  if (ppUVar4 <= ppUVar7) {
    pUVar1 = *ppUVar4;
    *ppUVar4 = *ppUVar7;
    *ppUVar7 = pUVar1;
    goto LAB_148ae8940;
  }
  pUVar1 = *ppUVar9;
  iVar6 = iVar6 + -1;
  *ppUVar9 = *ppUVar7;
  *ppUVar7 = pUVar1;
  if ((longlong)((longlong)ppUVar7 + (-8 - (longlong)ppUVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar3 - (longlong)ppUVar4 & 0xfffffffffffffff8U)) {
    if (ppUVar4 < ppUVar3) {
      *pppUVar5 = ppUVar4;
      pppUVar5[1] = ppUVar3;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar7 <= ppUVar9 + 1) goto LAB_148ae8a2b;
    ppUVar3 = ppUVar8 + -2;
    ppUVar4 = ppUVar9;
  }
  else {
    if (ppUVar9 + 1 < ppUVar7) {
      *pppUVar5 = ppUVar9;
      pppUVar5[1] = ppUVar8 + -2;
      *(int *)(pppUVar5 + 2) = iVar6;
      pppUVar5 = pppUVar5 + 3;
    }
    if (ppUVar3 <= ppUVar4) goto LAB_148ae8a2b;
  }
  iVar2 = (int)((longlong)ppUVar3 - (longlong)ppUVar4 >> 3) + 1;
  ppUVar9 = ppUVar4;
  if (iVar6 == 0) goto LAB_148ae8a19;
  goto LAB_148ae8910;
}

// IsObjectPtrEqual<UNavigationSystemConfig,UNavigationSystemConfig_*,0> @ 148ae8af0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNavigationSystemConfig,UNavigationSystemConfig_*,0>
          (TObjectPtr<UNavigationSystemConfig> *param_1,UNavigationSystemConfig **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNavigationSystemConfig *)0x0) {
    return *param_2 == (UNavigationSystemConfig *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UWorldPartition,UWorldPartition_*,0> @ 148ae8b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UWorldPartition,UWorldPartition_*,0>
          (TObjectPtr<UWorldPartition> *param_1,UWorldPartition **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UWorldPartition *)0x0) {
    return *param_2 == (UWorldPartition *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UBookmarkBase> @ 148ae8b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBookmarkBase * __cdecl
NewObject<UBookmarkBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UBookmarkBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UBookmarkBase *)pUVar2;
}

// NewObject<UNavigationSystemConfig> @ 148ae8c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavigationSystemConfig * __cdecl
NewObject<UNavigationSystemConfig>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UNavigationSystemConfig *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UNavigationSystemConfig *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_ESubstrateBsdfFeature> @ 148ae9060

UEnum * __cdecl StaticEnum<enum_ESubstrateBsdfFeature>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESubstrateBsdfFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESubstrateBsdfFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESubstrateBsdfFeature,(UObject *)pUVar1,
                       L"ESubstrateBsdfFeature");
  }
  return Z_Registration_Info_UEnum_ESubstrateBsdfFeature.OuterSingleton;
}

// StaticEnum<enum_EVisibilityAggressiveness> @ 148ae90a0

UEnum * __cdecl StaticEnum<enum_EVisibilityAggressiveness>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityAggressiveness,(UObject *)pUVar1,
                       L"EVisibilityAggressiveness");
  }
  return Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton;
}

// StaticEnum<enum_EVolumeLightingMethod> @ 148ae90e0

UEnum * __cdecl StaticEnum<enum_EVolumeLightingMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EVolumeLightingMethod,(UObject *)pUVar1,
                       L"EVolumeLightingMethod");
  }
  return Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton;
}

// operator() @ 148aeb0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall <lambda_34>::operator()(<lambda_34> *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWorldSubsystem *this_00;
  UWorld *pUVar6;
  FWorldPartitionStreamingSource *this_01;
  FWorldPartitionStreamingSource *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  FString local_78;
  FString local_68;
  undefined1 local_58 [16];
  int local_48;
  undefined4 uStack_44;
  FScriptContainerElement *local_40;
  int *piStack_38;
  undefined8 local_30;
  
  pFVar8 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  local_58._8_8_ = &(GEngine->WorldList).Array.ArrayNum;
  local_48 = *(int *)local_58._8_8_;
  pFVar1 = pFVar8 + (longlong)local_48 * 8;
  local_30 = CONCAT44(uStack_44,local_48);
  local_58._0_8_ = pFVar8;
  local_40 = pFVar8;
  piStack_38 = (int *)local_58._8_8_;
  do {
    if (*piStack_38 != (int)local_30) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar6 = *(UWorld **)(*(longlong *)pFVar8 + 0x2c0);
    if ((pUVar6 != (UWorld *)0x0) && (bVar3 = UWorld::IsGameWorld(pUVar6), bVar3)) {
      pUVar4 = UWorldPartitionSubsystem::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UClass *)0x0) goto LAB_148aeb17e;
LAB_148aeb1ac:
        pUVar4 = (UClass *)0x0;
      }
      else {
        if (pUVar4 == (UClass *)0x0) goto LAB_148aeb1ac;
        UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_148aeb17e:
        pUVar5 = UWorldPartitionSubsystem::StaticClass();
        if (pUVar5 == (UClass *)0x0) goto LAB_148aeb1ac;
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_148aeb1ac;
      }
      this_00 = (UWorldSubsystem *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&pUVar6->SubsystemCollection,pUVar4);
      if ((this_00 != (UWorldSubsystem *)0x0) && (0 < (int)this_00[7]._padding_)) {
        pUVar6 = UWorldSubsystem::GetWorld(this_00);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_78,(UObject *)0x0);
        FOutputDevice::LogfImpl(param_1,L"Streaming Sources for %s:");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        iVar2 = (int)this_00[7]._padding_;
        this_01 = (FWorldPartitionStreamingSource *)this_00[7]._padding_;
        pFVar7 = this_01 + iVar2;
        while( true ) {
          if ((int)this_00[7]._padding_ != iVar2) {
            `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res18);
          }
          if (this_01 == pFVar7) break;
          FWorldPartitionStreamingSource::ToString(this_01,(FString *)local_58);
          ::FName::ToString(&this_01->Name,&local_68);
          FOutputDevice::LogfImpl(param_1,L"  - %s: %s");
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_58._0_8_);
          }
          this_01 = this_01 + 1;
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// operator() @ 148aeb300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall <lambda_35>::operator()(<lambda_35> *this,FOutputDevice *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWorldSubsystem *this_00;
  UWorld *pUVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  FString **local_88;
  FScriptContainerElement *local_80;
  FString *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  FScriptContainerElement *local_50;
  int *piStack_48;
  undefined8 local_40;
  
  pFVar11 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  local_68._8_8_ = &(GEngine->WorldList).Array.ArrayNum;
  local_58 = *(int *)local_68._8_8_;
  local_80 = pFVar11 + (longlong)local_58 * 8;
  local_40 = CONCAT44(uStack_54,local_58);
  local_68._0_8_ = pFVar11;
  local_50 = pFVar11;
  piStack_48 = (int *)local_68._8_8_;
  do {
    pFVar3 = local_80;
    if (*piStack_48 != (int)local_40) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar11 == pFVar3) {
      return;
    }
    pUVar7 = *(UWorld **)(*(longlong *)pFVar11 + 0x2c0);
    if ((pUVar7 != (UWorld *)0x0) && (bVar4 = UWorld::IsGameWorld(pUVar7), bVar4)) {
      pUVar5 = UWorldPartitionSubsystem::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UClass *)0x0) goto LAB_148aeb3ce;
LAB_148aeb3fc:
        pUVar5 = (UClass *)0x0;
      }
      else {
        if (pUVar5 == (UClass *)0x0) goto LAB_148aeb3fc;
        UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_148aeb3ce:
        pUVar6 = UWorldPartitionSubsystem::StaticClass();
        if (pUVar6 == (UClass *)0x0) goto LAB_148aeb3fc;
        iVar2 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_148aeb3fc;
      }
      this_00 = (UWorldSubsystem *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&pUVar7->SubsystemCollection,pUVar5);
      if ((this_00 != (UWorldSubsystem *)0x0) && (0 < (int)this_00[1]._padding_)) {
        pUVar7 = UWorldSubsystem::GetWorld(this_00);
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)pUVar7,(FString *)local_68,(UObject *)0x0);
        FOutputDevice::LogfImpl(param_1,L"Registered World Partitions for %s:");
        if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        puVar9 = (undefined8 *)this_00[1]._padding_;
        local_88 = &local_78;
        local_78 = (FString *)0x0;
        iVar2 = (int)this_00[1]._padding_;
        local_70 = 0;
        puVar1 = puVar9 + iVar2;
        while( true ) {
          if ((int)this_00[1]._padding_ != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<UWorldPartition>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (puVar9 == puVar1) break;
          `UWorldPartitionSubsystem::DumpWorldPartitions'::__l5::<lambda_1>::operator()
                    (&local_88,(UWorldPartition *)*puVar9);
          puVar9 = puVar9 + 1;
        }
        AlgoImpl::
        IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                  (local_78,(int)local_70,local_res18[0],(TLess<void> *)local_res20);
        iVar2 = (int)local_70;
        pFVar8 = local_78 + (int)local_70;
        pFVar10 = local_78;
        while( true ) {
          if ((int)local_70 != iVar2) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar10 == pFVar8) break;
          FOutputDevice::LogfImpl(param_1,L"  - %s");
          pFVar10 = pFVar10 + 1;
        }
        DestructItems<FString,int>(local_78,(int)local_70);
        if (local_78 != (FString *)0x0) {
          FMemory::Free(local_78);
        }
      }
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// `vector_deleting_destructor'`adjustor{704}' @ 148aebcf8

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl AWorldSettings::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AWorldSettings::_vector_deleting_destructor__adjustor_704__(AWorldSettings *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AWorldSettings *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 148aebd0c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionSubsystem::_vector_deleting_destructor__adjustor_56__
          (UWorldPartitionSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWorldPartitionSubsystem *)
                      &this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.
                       field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 148aebd1c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionSubsystem::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionSubsystem::_vector_deleting_destructor__adjustor_72__
          (UWorldPartitionSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWorldPartitionSubsystem *)
                      &this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.
                       field_0x10,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148aebd30

void * __thiscall
ConstructorHelpers::FObjectFinder<UClass>::_scalar_deleting_destructor_
          (FObjectFinder<UClass> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebd80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebdb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebde0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebe10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingTargetState,enum_ELevelStreamingTargetState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebe40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWorldPartitionSubsystem,void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebe70

void * __thiscall
ADEPRECATED_WorldPartitionVolume::_scalar_deleting_destructor_
          (ADEPRECATED_WorldPartitionVolume *this,uint param_1)

{
  *(undefined ***)this = &___7ADEPRECATED_WorldPartitionVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall AWorldSettings::_scalar_deleting_destructor_(AWorldSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->BookmarkArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReplicationViewers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseNavmeshDataLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AISystemClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aebfb0

void * __thiscall
UWorldPartitionSubsystem::_scalar_deleting_destructor_(UWorldPartitionSubsystem *this,uint param_1)

{
  ~UWorldPartitionSubsystem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeSubstrateMaterialShared @ 148aef860

void __cdecl EmptyLinkFunctionForGeneratedCodeSubstrateMaterialShared(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionSubsystem @ 148aef870

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionVolume @ 148aef880

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldSettings @ 148aef890

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldSettings(void)

{
  return;
}

// GetTentDistribution @ 148af1bc0

FTentDistribution * __cdecl
GetTentDistribution(FTentDistribution *__return_storage_ptr__,FSkyAtmosphereDynamicState *param_1)

{
  __return_storage_ptr__->TipAltitude = param_1->OtherTentDistributionTipAltitude;
  __return_storage_ptr__->TipValue = param_1->OtherTentDistributionTipValue;
  __return_storage_ptr__->Width = param_1->OtherTentDistributionWidth;
  return __return_storage_ptr__;
}

// GetTentDistribution @ 148af1be0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTentDistribution * __cdecl
GetTentDistribution(FTentDistribution *__return_storage_ptr__,USkyAtmosphereComponent *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->OtherTentDistribution).Width;
  fVar2 = (param_1->OtherTentDistribution).TipValue;
  __return_storage_ptr__->TipAltitude = (param_1->OtherTentDistribution).TipAltitude;
  __return_storage_ptr__->TipValue = fVar2;
  __return_storage_ptr__->Width = fVar1;
  return __return_storage_ptr__;
}

// ToString @ 148af71c0

wchar_t * __cdecl ToString(ESubstrateTileType param_1)

{
  switch(param_1) {
  case ESimple:
    return L"Simple";
  case ESingle:
    return L"Single";
  case EComplex:
    return L"Complex";
  case EComplexSpecial:
    return L"ComplexSpecial";
  case EOpaqueRoughRefraction:
    return L"Opaque/RoughRefraction";
  case EOpaqueRoughRefractionSSSWithout:
    return L"Opaque/RoughRefraction/SSSWithout";
  case EDecalSimple:
    return L"Decal/Simple";
  case EDecalSingle:
    return L"Decal/Single";
  case EDecalComplex:
    return L"Decal/Complex";
  default:
    return L"Unknown";
  }
}

// Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_NoRegister @ 148af9af0

UClass * __cdecl Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionVolume",
               &Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton,
               ADEPRECATED_WorldPartitionVolume::
               StaticRegisterNativesADEPRECATED_WorldPartitionVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADEPRECATED_WorldPartitionVolume>,
               InternalVTableHelperCtorCaller<ADEPRECATED_WorldPartitionVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.InnerSingleton;
}

// Z_Construct_UClass_AWorldSettings_NoRegister @ 148af9bb0

UClass * __cdecl Z_Construct_UClass_AWorldSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldSettings",
               &Z_Registration_Info_UClass_AWorldSettings.InnerSingleton,
               AWorldSettings::StaticRegisterNativesAWorldSettings,0x4f0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"game",
               InternalConstructor<AWorldSettings>,InternalVTableHelperCtorCaller<AWorldSettings>,
               local_res8,AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldSettings.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister @ 148af9c70

UClass * __cdecl Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton,
               UWorldPartitionSubsystem::StaticRegisterNativesUWorldPartitionSubsystem,0x310,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESubstrateBsdfFeature @ 148af9d30

UEnum * __cdecl Z_Construct_UEnum_Engine_ESubstrateBsdfFeature(void)

{
  if (Z_Registration_Info_UEnum_ESubstrateBsdfFeature.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESubstrateBsdfFeature.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESubstrateBsdfFeature_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESubstrateBsdfFeature.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLightmassWorldInfoSettings @ 148af9d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLightmassWorldInfoSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLightmassWorldInfoSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLightmassWorldInfoSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLightmassWorldInfoSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLightmassWorldInfoSettings.InnerSingleton;
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

// OnNaniteSettingsChanged'' @ 1504096b0

void __cdecl `dynamic_atexit_destructor_for_'AWorldSettings::OnNaniteSettingsChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             AWorldSettings::OnNaniteSettingsChanged._8_8_,
             AWorldSettings::OnNaniteSettingsChanged._16_4_);
  if (AWorldSettings::OnNaniteSettingsChanged._8_8_ != 0) {
    FMemory::Free((void *)AWorldSettings::OnNaniteSettingsChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AWorldSettings::OnNaniteSettingsChanged);
  return;
}

// OnWorldPartitionSubsystemDeinitialized'' @ 1504096f0

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized._8_8_,
             UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized._16_4_);
  if (UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized._8_8_ != 0) {
    FMemory::Free((void *)UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UWorldPartitionSubsystem::OnWorldPartitionSubsystemDeinitialized);
  return;
}

// OnWorldPartitionSubsystemInitialized'' @ 150409730

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized._8_8_,
             UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized._16_4_);
  if (UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized._8_8_ != 0) {
    FMemory::Free((void *)UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UWorldPartitionSubsystem::OnWorldPartitionSubsystemInitialized);
  return;
}

// OverriddenLoadingRanges'' @ 150409770

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::OverriddenLoadingRanges__(void)

{
  UWorldPartitionSubsystem::OverriddenLoadingRanges._72_4_ = 0;
  if (UWorldPartitionSubsystem::OverriddenLoadingRanges._64_8_ != 0) {
    FMemory::Free((void *)UWorldPartitionSubsystem::OverriddenLoadingRanges._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UWorldPartitionSubsystem::OverriddenLoadingRanges);
  return;
}

// OverrideLoadingRangeCommand'' @ 1504097b0

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionSubsystem::OverrideLoadingRangeCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartitionSubsystem::OverrideLoadingRangeCommand);
  return;
}

// `dynamic_atexit_destructor_for_'CMaxLoadingStreamingCells'' @ 1504097d0

void __cdecl _dynamic_atexit_destructor_for__CMaxLoadingStreamingCells__(void)

{
  CMaxLoadingStreamingCells._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CMaxLoadingStreamingCells);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDataLayers'' @ 1504097f0

void __cdecl _dynamic_atexit_destructor_for__CVarDrawDataLayers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDataLayers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawDataLayersLoadTime'' @ 150409810

void __cdecl _dynamic_atexit_destructor_for__CVarDrawDataLayersLoadTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawDataLayersLoadTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawRuntimeCellsDetails'' @ 150409830

void __cdecl _dynamic_atexit_destructor_for__CVarDrawRuntimeCellsDetails__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawRuntimeCellsDetails);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawRuntimeHash2D'' @ 150409850

void __cdecl _dynamic_atexit_destructor_for__CVarDrawRuntimeHash2D__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawRuntimeHash2D);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawRuntimeHash2DScaleFactor'' @ 150409870

void __cdecl _dynamic_atexit_destructor_for__CVarDrawRuntimeHash2DScaleFactor__(void)

{
  CVarDrawRuntimeHash2DScaleFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawRuntimeHash2DScaleFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawRuntimeHash3D'' @ 150409890

void __cdecl _dynamic_atexit_destructor_for__CVarDrawRuntimeHash3D__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawRuntimeHash3D);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawStreamingPerfs'' @ 1504098b0

void __cdecl _dynamic_atexit_destructor_for__CVarDrawStreamingPerfs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawStreamingPerfs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawStreamingSources'' @ 1504098d0

void __cdecl _dynamic_atexit_destructor_for__CVarDrawStreamingSources__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawStreamingSources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDrawWorldPartitionIndex'' @ 1504098f0

void __cdecl _dynamic_atexit_destructor_for__CVarDrawWorldPartitionIndex__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDrawWorldPartitionIndex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGDrawLegends'' @ 150409910

void __cdecl _dynamic_atexit_destructor_for__CVarGDrawLegends__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGDrawLegends);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP'' @ 150409930

void __cdecl
_dynamic_atexit_destructor_for__CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP__
          (void)

{
  CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarGLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP);
  return;
}

// `dynamic_atexit_destructor_for_'CVarServerStreamingSourceMinimumExtraAngle'' @ 150409950

void __cdecl _dynamic_atexit_destructor_for__CVarServerStreamingSourceMinimumExtraAngle__(void)

{
  CVarServerStreamingSourceMinimumExtraAngle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarServerStreamingSourceMinimumExtraAngle);
  return;
}

// `dynamic_atexit_destructor_for_'CVarServerStreamingSourceMinimumExtraRadius'' @ 150409970

void __cdecl _dynamic_atexit_destructor_for__CVarServerStreamingSourceMinimumExtraRadius__(void)

{
  CVarServerStreamingSourceMinimumExtraRadius._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarServerStreamingSourceMinimumExtraRadius);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUdateStreamingStateTimeLimit'' @ 150409990

void __cdecl _dynamic_atexit_destructor_for__CVarUdateStreamingStateTimeLimit__(void)

{
  CVarUdateStreamingStateTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUdateStreamingStateTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUpdateStreamingSources'' @ 1504099b0

void __cdecl _dynamic_atexit_destructor_for__CVarUpdateStreamingSources__(void)

{
  CVarUpdateStreamingSources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUpdateStreamingSources);
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1504099d0

void __cdecl
`AWorldSettings::AWorldSettings'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  ::ConstructorStatics.DmgType_Environmental_Object._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&::ConstructorStatics);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpStreamingSourcesCmd'' @ 1504099f0

void __cdecl _dynamic_atexit_destructor_for__GDumpStreamingSourcesCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpStreamingSourcesCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpWorldPartitionsCmd'' @ 150409a10

void __cdecl _dynamic_atexit_destructor_for__GDumpWorldPartitionsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpWorldPartitionsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterWorldSettingCustomVersion'' @ 150409a30

void __cdecl _dynamic_atexit_destructor_for__GRegisterWorldSettingCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterWorldSettingCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogWorldSettings'' @ 150409a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWorldSettings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWorldSettings);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_WorldPartition'' @ 150409a70

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_WorldPartition__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_WorldPartition.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_WorldPartition.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_WorldPartition.Name.Data.AllocatorInstance.Data !=
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

