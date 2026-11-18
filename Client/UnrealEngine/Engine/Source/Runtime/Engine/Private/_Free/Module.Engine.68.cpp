// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 428

// CVarAsyncUpdateStreamingStateEnabled'' @ 14115f060

void __cdecl
`dynamic_initializer_for_'UWorldPartitionStreamingPolicy::CVarAsyncUpdateStreamingStateEnabled__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartitionStreamingPolicy::CVarAsyncUpdateStreamingStateEnabled,
             L"wp.Runtime.UpdateStreaming.EnableAsyncUpdate",
             &UWorldPartitionStreamingPolicy::IsAsyncUpdateStreamingStateEnabled,
             L"Set to enable asynchronous World Partition UpdateStreamingState.",0);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionStreamingPolicy::
         CVarAsyncUpdateStreamingStateEnabled__);
  return;
}

// CVarDebugDisplaySpeedUnit'' @ 14115f0b0

void __cdecl
`dynamic_initializer_for_'FWorldPartitionStreamingSource::CVarDebugDisplaySpeedUnit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FWorldPartitionStreamingSource::CVarDebugDisplaySpeedUnit,
             L"wp.Runtime.DebugDisplaySpeedUnit",
             &FWorldPartitionStreamingSource::DebugDisplaySpeedUnit,
             L"Unit used for debug display to show speeds (0=cm/s, 1=m/s, 2=km/h, 3=mi/h), defaults to mi/h."
             ,0);
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionStreamingSource::CVarDebugDisplaySpeedUnit__
        );
  return;
}

// CVarForceUpdateFrameCount'' @ 14115f100

void __cdecl
`dynamic_initializer_for_'UWorldPartitionStreamingPolicy::CVarForceUpdateFrameCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartitionStreamingPolicy::CVarForceUpdateFrameCount,
             L"wp.Runtime.UpdateStreaming.ForceUpdateFrameCount",
             &UWorldPartitionStreamingPolicy::ForceUpdateFrameCount,
             L"Frequency (in frames) at which world partition streaming update will be executed regardless if no changes are detected."
             ,0);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionStreamingPolicy::CVarForceUpdateFrameCount__
        );
  return;
}

// CVarLocationQuantization'' @ 14115f150

void __cdecl
`dynamic_initializer_for_'FWorldPartitionStreamingSource::CVarLocationQuantization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FWorldPartitionStreamingSource::CVarLocationQuantization,
             L"wp.Runtime.UpdateStreaming.LocationQuantization",
             &FWorldPartitionStreamingSource::LocationQuantization,
             L"Distance (in Unreal units) used to quantize the streaming sources location to determine if a world partition streaming update is necessary."
             ,0);
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionStreamingSource::CVarLocationQuantization__)
  ;
  return;
}

// CVarRotationQuantization'' @ 14115f1a0

void __cdecl
`dynamic_initializer_for_'FWorldPartitionStreamingSource::CVarRotationQuantization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FWorldPartitionStreamingSource::CVarRotationQuantization,
             L"wp.Runtime.UpdateStreaming.RotationQuantization",
             &FWorldPartitionStreamingSource::RotationQuantization,
             L"Angle (in degrees) used to quantize the streaming sources rotation to determine if a world partition streaming update is necessary."
             ,0);
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionStreamingSource::CVarRotationQuantization__)
  ;
  return;
}

// CVarUpdateOptimEnabled'' @ 14115f1f0

void __cdecl
`dynamic_initializer_for_'UWorldPartitionStreamingPolicy::CVarUpdateOptimEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&UWorldPartitionStreamingPolicy::CVarUpdateOptimEnabled,
             L"wp.Runtime.UpdateStreaming.EnableOptimization",
             &UWorldPartitionStreamingPolicy::IsUpdateOptimEnabled,
             L"Set to 1 to enable an optimization that skips world partition streaming update\nif nothing relevant changed since last update."
             ,0);
  atexit(`dynamic_atexit_destructor_for_'UWorldPartitionStreamingPolicy::CVarUpdateOptimEnabled__);
  return;
}

// DebugCellNameFilter'' @ 14115f240

void __cdecl `dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugCellNameFilter__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugCellNameFilter__);
  return;
}

// DebugDataLayerFilter'' @ 14115f260

void __cdecl `dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugDataLayerFilter__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugDataLayerFilter__);
  return;
}

// DebugFilterByCellNameCommand'' @ 14115f280

void __cdecl
`dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugFilterByCellNameCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FWorldPartitionDebugHelper::DebugFilterByCellNameCommand,
             L"wp.Runtime.DebugFilterByCellName",
             L"Filter debug diplay of world partition streaming by full or partial cell name. Args [cell name]"
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
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugFilterByCellNameCommand__)
  ;
  return;
}

// DebugFilterByDataLayerCommand'' @ 14115f3b0

void __cdecl
`dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugFilterByDataLayerCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FWorldPartitionDebugHelper::DebugFilterByDataLayerCommand,
             L"wp.Runtime.DebugFilterByDataLayer",
             L"Filter debug diplay of world partition streaming by data layer. Args [datalayer labels]"
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
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugFilterByDataLayerCommand__
        );
  return;
}

// DebugFilterByRuntimeHashGridNameCommand'' @ 14115f4e0

void __cdecl
`dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugFilterByRuntimeHashGridNameCommand__
          (void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FWorldPartitionDebugHelper::DebugFilterByRuntimeHashGridNameCommand,
             L"wp.Runtime.DebugFilterByRuntimeHashGridName",
             L"Filter debug diplay of world partition streaming by grid name. Args [grid names]",
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
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::
         DebugFilterByRuntimeHashGridNameCommand__);
  return;
}

// DebugFilterByStreamingStatusCommand'' @ 14115f610

void __cdecl
`dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugFilterByStreamingStatusCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FWorldPartitionDebugHelper::DebugFilterByStreamingStatusCommand,
             L"wp.Runtime.DebugFilterByStreamingStatus",
             L"Filter debug diplay of world partition streaming by streaming status. Args [streaming status]"
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
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::
         DebugFilterByStreamingStatusCommand__);
  return;
}

// DebugRuntimeHashFilter'' @ 14115f740

void __cdecl `dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugRuntimeHashFilter__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugRuntimeHashFilter__);
  return;
}

// DebugStreamingStatusFilter'' @ 14115f760

void __cdecl
`dynamic_initializer_for_'FWorldPartitionDebugHelper::DebugStreamingStatusFilter__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugStreamingStatusFilter__);
  return;
}

// DrawContentBundlesCommand'' @ 14115f780

void __cdecl `dynamic_initializer_for_'FWorldPartitionDebugHelper::DrawContentBundlesCommand__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FWorldPartitionDebugHelper::DrawContentBundlesCommand,L"wp.Runtime.DrawContentBundles"
             ,&FWorldPartitionDebugHelper::bCanDrawContentBundles,
             L"Enable to draw debug display of content bundle.",0);
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DrawContentBundlesCommand__);
  return;
}

// NAME_CellTransformerIgnoreActor'' @ 14115f7d0

void __cdecl
`dynamic_initializer_for_'UWorldPartitionRuntimeCellTransformer::NAME_CellTransformerIgnoreActor__
          (void)

{
  ::FName::FName(&UWorldPartitionRuntimeCellTransformer::NAME_CellTransformerIgnoreActor,
                 L"CellTransformer_IgnoreActor");
  return;
}

// OverriddenLoadingRanges'' @ 14115f7f0

void __cdecl `dynamic_initializer_for_'FSpatialHashStreamingGrid::OverriddenLoadingRanges__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpatialHashStreamingGrid::OverriddenLoadingRanges__);
  return;
}

// OverrideLoadingRangeCommand'' @ 14115f810

void __cdecl
`dynamic_initializer_for_'FSpatialHashStreamingGrid::OverrideLoadingRangeCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FSpatialHashStreamingGrid::<lambda_30>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pwVar3 = L"";
  if (GOverrideRuntimeSpatialHashLoadingRangeName.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)GOverrideRuntimeSpatialHashLoadingRangeName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FSpatialHashStreamingGrid::OverrideLoadingRangeCommand,pwVar3,
             L"Sets runtime loading range. Args -grid=[index] -range=[override_loading_range]",
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
  atexit(`dynamic_atexit_destructor_for_'FSpatialHashStreamingGrid::OverrideLoadingRangeCommand__);
  return;
}

// ShowRuntimeSpatialHashCellStreamingPriorityModeCommand'' @ 14115f950

void __cdecl
`dynamic_initializer_for_'FWorldPartitionDebugHelper::
ShowRuntimeSpatialHashCellStreamingPriorityModeCommand__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityModeCommand,
             L"wp.Runtime.ShowRuntimeSpatialHashCellStreamingPriority",
             &FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode,
             L"Enable to show a heatmap of the runtime spatial hash grid cells based on their priority (0=disabled, 1=heatmap, 2=grayscale."
             ,0);
  atexit(`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::
         ShowRuntimeSpatialHashCellStreamingPriorityModeCommand__);
  return;
}

// `dynamic_initializer_for_'CVarBlockOnSlowStreaming'' @ 14115f9a0

void __cdecl _dynamic_initializer_for__CVarBlockOnSlowStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlockOnSlowStreaming,L"wp.Runtime.BlockOnSlowStreaming",&GBlockOnSlowStreaming,
             L"Set if streaming needs to block when to slow to catchup.",0);
  atexit(_dynamic_atexit_destructor_for__CVarBlockOnSlowStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarBlockOnSlowStreamingRatio'' @ 14115f9f0

void __cdecl _dynamic_initializer_for__CVarBlockOnSlowStreamingRatio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlockOnSlowStreamingRatio,L"wp.Runtime.BlockOnSlowStreamingRatio",
             &GBlockOnSlowStreamingRatio,
             L"Ratio of DistanceToCell / LoadingRange to use to determine if World Partition streaming needs to block"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBlockOnSlowStreamingRatio__);
  return;
}

// `dynamic_initializer_for_'CVarBlockOnSlowStreamingWarningFactor'' @ 14115fa40

void __cdecl _dynamic_initializer_for__CVarBlockOnSlowStreamingWarningFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBlockOnSlowStreamingWarningFactor,L"wp.Runtime.BlockOnSlowStreamingWarningFactor",
             &GBlockOnSlowStreamingWarningFactor,
             L"Factor of wp.Runtime.BlockOnSlowStreamingRatio we want to start notifying the user",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarBlockOnSlowStreamingWarningFactor__);
  return;
}

// `dynamic_initializer_for_'CVarDisplayStreamingPerformanceForNonBlockingStreaming'' @ 14115fa90

void __cdecl
_dynamic_initializer_for__CVarDisplayStreamingPerformanceForNonBlockingStreaming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisplayStreamingPerformanceForNonBlockingStreaming,
             L"wp.Runtime.DisplayStreamingPerformanceForNonBlockingStreaming",
             &GDisplayStreamingPerformanceForNonBlockingStreaming,
             L"Display streaming performance updates for non blocking streaming",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisplayStreamingPerformanceForNonBlockingStreaming__);
  return;
}

// `dynamic_initializer_for_'CVarFilterRuntimeSpatialHashGridLevel'' @ 14115fae0

void __cdecl _dynamic_initializer_for__CVarFilterRuntimeSpatialHashGridLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFilterRuntimeSpatialHashGridLevel,L"wp.Runtime.FilterRuntimeSpatialHashGridLevel",
             &GFilterRuntimeSpatialHashGridLevel,
             L"Used to choose filter a single world partition runtime hash grid level.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFilterRuntimeSpatialHashGridLevel__);
  return;
}

// `dynamic_initializer_for_'CVarForceRuntimeSpatialHashZCulling'' @ 14115fb30

void __cdecl _dynamic_initializer_for__CVarForceRuntimeSpatialHashZCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceRuntimeSpatialHashZCulling,L"wp.Runtime.ForceRuntimeSpatialHashZCulling",
             &GForceRuntimeSpatialHashZCulling,
             L"Used to force the behavior of the runtime hash cells Z culling. Set to 0 to force off, to 1 to force on and any other value to respect the runtime hash setting."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceRuntimeSpatialHashZCulling__);
  return;
}

// `dynamic_initializer_for_'CVarRecordReplayStreamingSources'' @ 14115fb80

void __cdecl _dynamic_initializer_for__CVarRecordReplayStreamingSources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRecordReplayStreamingSources,L"wp.Runtime.RecordReplayStreamingSources",
             &GRecordReplayStreamingSources,
             L"Set to 1 to record streaming sources when recording replay.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRecordReplayStreamingSources__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance'' @ 14115fbd0

void __cdecl
_dynamic_initializer_for__CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance,
             L"wp.Runtime.RuntimeSpatialHashCellToSourceAngleContributionToCellImportance",
             &GRuntimeSpatialHashCellToSourceAngleContributionToCellImportance,
             L"Value between 0 and 1 that modulates the contribution of the angle between streaming source-to-cell vector and source-forward vector to the cell importance. The closest to 0, the less the angle will contribute to the cell importance."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance__
        );
  return;
}

// `dynamic_initializer_for_'CVarRuntimeSpatialHashSortUsingCellExtent'' @ 14115fc20

void __cdecl _dynamic_initializer_for__CVarRuntimeSpatialHashSortUsingCellExtent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRuntimeSpatialHashSortUsingCellExtent,
             L"wp.Runtime.RuntimeSpatialHashSortUsingCellExtent",
             &GRuntimeSpatialHashSortUsingCellExtent,
             L"Set to 1 to use cell extent instead of cell grid level when sorting cells by importance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeSpatialHashSortUsingCellExtent__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeSpatialHashSortUsingCellPriority'' @ 14115fc70

void __cdecl _dynamic_initializer_for__CVarRuntimeSpatialHashSortUsingCellPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRuntimeSpatialHashSortUsingCellPriority,
             L"wp.Runtime.RuntimeSpatialHashSortUsingCellPriority",
             &GRuntimeSpatialHashSortUsingCellPriority,
             L"Set to 1 to use cell priority before distance to/angle from source as part of the sorting criterias when sorting cells by importance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeSpatialHashSortUsingCellPriority__);
  return;
}

// `dynamic_initializer_for_'CVarServerDisallowStreamingOutDataLayers'' @ 14115fcc0

void __cdecl _dynamic_initializer_for__CVarServerDisallowStreamingOutDataLayers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarServerDisallowStreamingOutDataLayers,
             L"wp.Runtime.ServerDisallowStreamingOutDataLayers",
             &GServerDisallowStreamingOutDataLayersString,
             L"Comma separated list of data layer names that aren\'t allowed to be unloaded or deactivated on the server"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarServerDisallowStreamingOutDataLayers__);
  return;
}

// `dynamic_initializer_for_'CVarShowRuntimeSpatialHashGridLevel'' @ 14115fd10

void __cdecl _dynamic_initializer_for__CVarShowRuntimeSpatialHashGridLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowRuntimeSpatialHashGridLevel,L"wp.Runtime.ShowRuntimeSpatialHashGridLevel",
             &GShowRuntimeSpatialHashGridLevel,
             L"Used to choose which grid level to display when showing world partition runtime hash."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShowRuntimeSpatialHashGridLevel__);
  return;
}

// `dynamic_initializer_for_'CVarShowRuntimeSpatialHashGridLevelCount'' @ 14115fd60

void __cdecl _dynamic_initializer_for__CVarShowRuntimeSpatialHashGridLevelCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShowRuntimeSpatialHashGridLevelCount,
             L"wp.Runtime.ShowRuntimeSpatialHashGridLevelCount",
             &GShowRuntimeSpatialHashGridLevelCount,
             L"Used to choose how many grid levels to display when showing world partition runtime hash."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShowRuntimeSpatialHashGridLevelCount__);
  return;
}

// `dynamic_initializer_for_'CVarSlowStreamingRatio'' @ 14115fdb0

void __cdecl _dynamic_initializer_for__CVarSlowStreamingRatio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlowStreamingRatio,L"wp.Runtime.SlowStreamingRatio",&GSlowStreamingRatio,
             L"Ratio of DistanceToCell / LoadingRange to use to determine if World Partition streaming is considered to be slow"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlowStreamingRatio__);
  return;
}

// `dynamic_initializer_for_'CVarSlowStreamingWarningFactor'' @ 14115fe00

void __cdecl _dynamic_initializer_for__CVarSlowStreamingWarningFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlowStreamingWarningFactor,L"wp.Runtime.SlowStreamingWarningFactor",
             &GSlowStreamingWarningFactor,
             L"Factor of wp.Runtime.SlowStreamingRatio we want to start notifying the user",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlowStreamingWarningFactor__);
  return;
}

// `dynamic_initializer_for_'CVarUseReplayStreamingSources'' @ 14115fe50

void __cdecl _dynamic_initializer_for__CVarUseReplayStreamingSources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseReplayStreamingSources,L"wp.Runtime.UseReplayStreamingSources",
             &GUseReplayStreamingSources,
             L"Set to 1 to use the recorded streaming sources when playing replay.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseReplayStreamingSources__);
  return;
}

// `dynamic_initializer_for_'GOverrideRuntimeSpatialHashLoadingRangeName'' @ 14115fea0

void __cdecl _dynamic_initializer_for__GOverrideRuntimeSpatialHashLoadingRangeName__(void)

{
  FString::FString(&GOverrideRuntimeSpatialHashLoadingRangeName,
                   L"wp.Runtime.OverrideRuntimeSpatialHashLoadingRange");
  atexit(_dynamic_atexit_destructor_for__GOverrideRuntimeSpatialHashLoadingRangeName__);
  return;
}

// `dynamic_initializer_for_'GServerDisallowStreamingOutDataLayersString'' @ 14115fed0

void __cdecl _dynamic_initializer_for__GServerDisallowStreamingOutDataLayersString__(void)

{
  atexit(_dynamic_atexit_destructor_for__GServerDisallowStreamingOutDataLayersString__);
  return;
}

// `dynamic_initializer_for_'LogWorldPartition'' @ 14115fef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWorldPartition__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWorldPartition,L"LogWorldPartition",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWorldPartition__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo'' @ 14115ff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo ==
      (FThreadSafeStaticStat<FStat_STAT_WorldPartitionAppendStreamingSourceInfo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WorldPartitionAppendStreamingSourceInfo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WorldPartitionAppendStreamingSourceInfo,
               *pFVar1,L"Append Streaming Source Info","STATGROUP_WorldPartition","STATCAT_Advanced"
               ,L"World Partition",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h__Script_Engine_1975092053'' @ 14115ffc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h__Script_Engine_1975092053__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h__Script_Engine_4046666069'' @ 141160000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h__Script_Engine_4046666069__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h__Script_Engine_3307372100'' @ 141160050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h__Script_Engine_3307372100__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorSpatialHash_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h__Script_Engine_1444933029'' @ 141160090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h__Script_Engine_1444933029__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h__Script_Engine_2097825336'' @ 1411600d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h__Script_Engine_2097825336__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h__Script_Engine_2756861290'' @ 141160110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h__Script_Engine_2756861290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h__Script_Engine_3433792279'' @ 141160150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h__Script_Engine_3433792279__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h__Script_Engine_832825938'' @ 141160190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h__Script_Engine_832825938__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionPropertyOverride_h__Script_Engine_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h__Script_Engine_4037374028'' @ 1411601e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h__Script_Engine_4037374028__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h__Script_Engine_978997499'' @ 141160220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h__Script_Engine_978997499__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellDataSpatialHash_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h__Script_Engine_4068449891'' @ 141160260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h__Script_Engine_4068449891__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h__Script_Engine_3623069328'' @ 1411602a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h__Script_Engine_3623069328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h__Script_Engine_2905182530'' @ 1411602e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h__Script_Engine_2905182530__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerISM_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h__Script_Engine_3129022851'' @ 141160320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h__Script_Engine_3129022851__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformerLog_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h__Script_Engine_2572280668'' @ 141160360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h__Script_Engine_2572280668__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellTransformer_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h__Script_Engine_39321386'' @ 1411603a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h__Script_Engine_39321386__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h__Script_Engine_4213051347'' @ 1411603f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h__Script_Engine_4213051347__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeContainerResolving_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h__Script_Engine_1358815099'' @ 141160430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h__Script_Engine_1358815099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h__Script_Engine_1228642998'' @ 141160480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h__Script_Engine_1228642998__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h__Script_Engine_2294125553'' @ 1411604c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h__Script_Engine_2294125553__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h__Script_Engine_4251506942'' @ 141160500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h__Script_Engine_4251506942__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h__Script_Engine_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h__Script_Engine_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h__Script_Engine_3189584143'' @ 141160550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h__Script_Engine_3189584143__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h__Script_Engine_1064486643'' @ 1411605a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h__Script_Engine_1064486643__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h__Script_Engine_1944138616'' @ 1411605f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h__Script_Engine_1944138616__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_NoRegister @ 148aa6100

UClass * __cdecl Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionPropertyOverridePolicy",
               &Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton,
               UWorldPartitionPropertyOverridePolicy::
               StaticRegisterNativesUWorldPartitionPropertyOverridePolicy,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionPropertyOverridePolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverridePolicy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy @ 148aa62b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionStreamingPolicy @ 148aa62f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionStreamingPolicy(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver @ 148aa6330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerResolver.InnerSingleton;
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

// Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase @ 148aa6a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase(void)

{
  if (Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton,
               &Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeHash @ 148aa6ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeHash(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance @ 148aa6b10

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance(void)

{
  if (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData @ 148aa6b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellStreamingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellStreamingData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellStreamingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellStreamingData.InnerSingleton;
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

// EWorldPartitionStreamingPerformance_StaticEnum @ 148aa6bd0

UEnum * __cdecl EWorldPartitionStreamingPerformance_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance,
                       (UObject *)pUVar1,L"EWorldPartitionStreamingPerformance");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton;
}

// NewStructOps @ 148aa6c10

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeCellStreamingData,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeCellStreamingData>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeCellStreamingData>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeCellStreamingData>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeCellStreamingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AWorldPartitionAutoInstancedActor @ 148aa6d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionAutoInstancedActor(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionAutoInstancedActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM @ 148aa6dd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionSettings @ 148aa6e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionSettings(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionSettings.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses @ 148aa6e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses.InnerSingleton;
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

// NewStructOps @ 148aa6ed0

void * __cdecl
Z_Construct_UScriptStruct_FHLODLayerTypeUnsupportedActorClasses_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODLayerTypeUnsupportedActorClasses,&UE::CoreUObject::Private::Construct<FHLODLayerTypeUnsupportedActorClasses>,&UE::CoreUObject::Private::ConstructForTests<FHLODLayerTypeUnsupportedActorClasses>,&UE::CoreUObject::Private::Destruct<FHLODLayerTypeUnsupportedActorClasses>,&UE::CoreUObject::Private::Copy<FHLODLayerTypeUnsupportedActorClasses>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNewMapsEnableWorldPartition_SetBit @ 148aa6f50

void __cdecl
Z_Construct_UClass_UWorldPartitionSettings_Statics::NewProp_bNewMapsEnableWorldPartition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UClass_ASpatialHashRuntimeGridInfo @ 148aa6f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASpatialHashRuntimeGridInfo(void)

{
  if (Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton,
               &Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.OuterSingleton;
}

// NewProp_bNewMapsEnableWorldPartitionStreaming_SetBit @ 148aa6fa0

void __cdecl
Z_Construct_UClass_UWorldPartitionSettings_Statics::
NewProp_bNewMapsEnableWorldPartitionStreaming_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject @ 148aa6fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject(void)

{
  if (Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton
               ,&Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash @ 148aa6ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid @ 148aa7030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpatialHashRuntimeGrid.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpatialHashRuntimeGrid.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpatialHashRuntimeGrid.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpatialHashRuntimeGrid.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSpatialHashSettings @ 148aa70b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpatialHashSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpatialHashSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpatialHashSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpatialHashSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSpatialHashSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSpatialHashStreamingGrid @ 148aa7130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpatialHashStreamingGrid(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGrid.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell @ 148aa71b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLayerCell.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLayerCell.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLayerCell.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLayerCell.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel @ 148aa7230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLevel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLevel.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLevel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpatialHashStreamingGridLevel.InnerSingleton;
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

// EWorldPartitionCVarProjectDefaultOverride_StaticEnum @ 148aa72b0

UEnum * __cdecl EWorldPartitionCVarProjectDefaultOverride_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride,
                       (UObject *)pUVar1,L"EWorldPartitionCVarProjectDefaultOverride");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton;
}

// NewProp_bShouldEDLPackagesInheritWorldChunkAssignmentsDuringCook_SetBit @ 148aa72f0

void __cdecl
Z_Construct_UClass_UWorldPartitionSettings_Statics::
NewProp_bShouldEDLPackagesInheritWorldChunkAssignmentsDuringCook_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// NewProp_bUseAlignedGridLevels_SetBit @ 148aa7300

void __cdecl
Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewProp_bUseAlignedGridLevels_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSnapNonAlignedGridLevelsToLowerLevels_SetBit @ 148aa7310

void __cdecl
Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::
NewProp_bSnapNonAlignedGridLevelsToLowerLevels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 148aa7320

void * __cdecl Z_Construct_UScriptStruct_FSpatialHashSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpatialHashSettings,&UE::CoreUObject::Private::Construct<FSpatialHashSettings>,&UE::CoreUObject::Private::ConstructForTests<FSpatialHashSettings>,&UE::CoreUObject::Private::Destruct<FSpatialHashSettings>,&UE::CoreUObject::Private::Copy<FSpatialHashSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa7360

void * __cdecl
Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpatialHashStreamingGridLayerCell,&UE::CoreUObject::Private::Construct<FSpatialHashStreamingGridLayerCell>,&UE::CoreUObject::Private::ConstructForTests<FSpatialHashStreamingGridLayerCell>,&UE::CoreUObject::Private::Destruct<FSpatialHashStreamingGridLayerCell>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FActivatedCells @ 148aa73a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActivatedCells(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActivatedCells.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActivatedCells.InnerSingleton,
               &Z_Construct_UScriptStruct_FActivatedCells_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActivatedCells.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActivatedCells.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState @ 148aa7420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState @ 148aa74a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.
           InnerSingleton;
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

// NewStructOps @ 148aa7520

void * __cdecl Z_Construct_UScriptStruct_FActivatedCells_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActivatedCells,&UE::CoreUObject::Private::Construct<FActivatedCells>,&UE::CoreUObject::Private::ConstructForTests<FActivatedCells>,&UE::CoreUObject::Private::Destruct<FActivatedCells>,&UE::CoreUObject::Private::Copy<FActivatedCells>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa7560

void * __cdecl Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpatialHashStreamingGridLevel,&UE::CoreUObject::Private::Construct<FSpatialHashStreamingGridLevel>,&UE::CoreUObject::Private::ConstructForTests<FSpatialHashStreamingGridLevel>,&UE::CoreUObject::Private::Destruct<FSpatialHashStreamingGridLevel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bBlockOnSlowStreaming_SetBit @ 148aa7660

void __cdecl
Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bBlockOnSlowStreaming_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bClientOnlyVisible_SetBit @ 148aa7670

void __cdecl
Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewProp_bClientOnlyVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewStructOps @ 148aa7680

void * __cdecl Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpatialHashStreamingGrid,&UE::CoreUObject::Private::Construct<FSpatialHashStreamingGrid>,&UE::CoreUObject::Private::ConstructForTests<FSpatialHashStreamingGrid>,&UE::CoreUObject::Private::Destruct<FSpatialHashStreamingGrid>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa76c0

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionUpdateStreamingTargetState,&UE::CoreUObject::Private::Construct<FWorldPartitionUpdateStreamingTargetState>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionUpdateStreamingTargetState>,&UE::CoreUObject::Private::Destruct<FWorldPartitionUpdateStreamingTargetState>,&UE::CoreUObject::Private::Copy<FWorldPartitionUpdateStreamingTargetState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog @ 148aa7700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.OuterSingleton;
}

// NewStructOps @ 148aa7740

void * __cdecl Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpatialHashRuntimeGrid,&UE::CoreUObject::Private::Construct<FSpatialHashRuntimeGrid>,&UE::CoreUObject::Private::ConstructForTests<FSpatialHashRuntimeGrid>,&UE::CoreUObject::Private::Destruct<FSpatialHashRuntimeGrid>,&UE::CoreUObject::Private::Copy<FSpatialHashRuntimeGrid>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer @ 148aa7780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance @ 148aa7800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerInstance.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainerInstance.InnerSingleton;
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

// NewStructOps @ 148aa7880

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeContainerInstance,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeContainerInstance>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeContainerInstance>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeContainerInstance>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeContainerInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa78c0

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingCurrentState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionUpdateStreamingCurrentState,&UE::CoreUObject::Private::Construct<FWorldPartitionUpdateStreamingCurrentState>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionUpdateStreamingCurrentState>,&UE::CoreUObject::Private::Destruct<FWorldPartitionUpdateStreamingCurrentState>,&UE::CoreUObject::Private::Copy<FWorldPartitionUpdateStreamingCurrentState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister @ 148aa7940

UClass * __cdecl Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeSpatialHashExternalStreamingObject",
               &Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton
               ,URuntimeSpatialHashExternalStreamingObject::
                StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject,0x1d8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeSpatialHashExternalStreamingObject>,
               InternalVTableHelperCtorCaller<URuntimeSpatialHashExternalStreamingObject>,local_res8
               ,URuntimeHashExternalStreamingObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton;
}

// NewStructOps @ 148aa7a80

void * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeContainer,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeContainer>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeContainer>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeContainer>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic @ 148aa7ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.OuterSingleton;
}

// NewProp_bCurrentBlockOnSlowStreaming_SetBit @ 148aa7b00

void __cdecl
Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::
NewProp_bCurrentBlockOnSlowStreaming_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x131) = 1;
  return;
}

// NewProp_bShouldBeAlwaysLoaded_SetBit @ 148aa7b10

void __cdecl
Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::
NewProp_bShouldBeAlwaysLoaded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f8) = 1;
  return;
}

// NewProp_bShouldMergeStreamingSourceInfo_SetBit @ 148aa7b20

void __cdecl
Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::
NewProp_bShouldMergeStreamingSourceInfo_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c8) = 1;
  return;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister @ 148aa7b30

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellData",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton,
               UWorldPartitionRuntimeCellData::StaticRegisterNativesUWorldPartitionRuntimeCellData,
               0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellData>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionReplay @ 148aa7c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionReplay(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionReplay.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionReplay.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionReplay_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionReplay.OuterSingleton;
}

// NewStructOps @ 148aa7c90

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainerResolver_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeContainerResolver,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeContainerResolver>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeContainerResolver>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeContainerResolver>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeContainerResolver>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableZCulling_SetBit @ 148aa7ce0

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics::NewProp_bEnableZCulling_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister @ 148aa7cf0

UClass * __cdecl Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeHashExternalStreamingObjectBase",
               &Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton,
               URuntimeHashExternalStreamingObjectBase::
               StaticRegisterNativesURuntimeHashExternalStreamingObjectBase,0x1c8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeHashExternalStreamingObjectBase>,
               InternalVTableHelperCtorCaller<URuntimeHashExternalStreamingObjectBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister @ 148aa7da0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton,
               UWorldPartitionRuntimeHash::StaticRegisterNativesUWorldPartitionRuntimeHash,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHash>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister @ 148aa7ea0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeLevelStreamingCell",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton,
               UWorldPartitionRuntimeLevelStreamingCell::
               StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeLevelStreamingCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeLevelStreamingCell>,local_res8,
               UWorldPartitionRuntimeCell::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton;
}

// `scalar_deleting_destructor' @ 148aa8320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FSpatialHashStreamingGrid::<lambda_30>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FSpatialHashStreamingGrid::<lambda_30>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister @ 148aa8360

UClass * __cdecl Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionLevelStreamingDynamic",
               &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton,
               UWorldPartitionLevelStreamingDynamic::
               StaticRegisterNativesUWorldPartitionLevelStreamingDynamic,0x230,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionLevelStreamingDynamic>,
               InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingDynamic>,local_res8,
               ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.InnerSingleton;
}

// NewProp_bUseGridLoadingRange_SetBit @ 148aa8670

void __cdecl
Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bUseGridLoadingRange_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsSector_SetBit @ 148aa8680

void __cdecl
Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bIsSector_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 148aa8690

void * __cdecl Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamingSourceShape,&UE::CoreUObject::Private::Construct<FStreamingSourceShape>,&UE::CoreUObject::Private::ConstructForTests<FStreamingSourceShape>,&UE::CoreUObject::Private::Destruct<FStreamingSourceShape>,&UE::CoreUObject::Private::Copy<FStreamingSourceShape>,&UE::CoreUObject::Private::GetStructTypeHash<FStreamingSourceShape>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EStreamingSourceTargetBehavior_StaticEnum @ 148aa86d0

UEnum * __cdecl EStreamingSourceTargetBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior,(UObject *)pUVar1,
                       L"EStreamingSourceTargetBehavior");
  }
  return Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton;
}

// EStreamingSourceTargetState_StaticEnum @ 148aa8710

UEnum * __cdecl EStreamingSourceTargetState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourceTargetState,(UObject *)pUVar1,
                       L"EStreamingSourceTargetState");
  }
  return Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton;
}

// NewProp_bUseGridLoadingRange_SetBit @ 148aa8750

void __cdecl
Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::
NewProp_bUseGridLoadingRange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bDataLayersOnly_SetBit @ 148aa8760

void __cdecl
Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::
NewProp_bDataLayersOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bSpatialQuery_SetBit @ 148aa8770

void __cdecl
Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bSpatialQuery_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 148aa8780

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionStreamingQuerySource,&UE::CoreUObject::Private::Construct<FWorldPartitionStreamingQuerySource>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionStreamingQuerySource>,&UE::CoreUObject::Private::Destruct<FWorldPartitionStreamingQuerySource>,&UE::CoreUObject::Private::Copy<FWorldPartitionStreamingQuerySource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EStreamingSourcePriority_StaticEnum @ 148aa87c0

UEnum * __cdecl EStreamingSourcePriority_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourcePriority,(UObject *)pUVar1,
                       L"EStreamingSourcePriority");
  }
  return Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell @ 148aa8800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton;
}

// Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden @ 148aa8840

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown @ 148aa8880

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWorldPartitionMiniMap @ 148aa88c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionMiniMap(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionMiniMap_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister @ 148aa8990

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCell",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton,
               UWorldPartitionRuntimeCell::StaticRegisterNativesUWorldPartitionRuntimeCell,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCell>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionMiniMapVolume @ 148aa8b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionMiniMapVolume(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCell @ 148aa8bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCell(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton;
}

// NewStructOps @ 148aa8c60

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeCellPropertyOverride,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeCellPropertyOverride>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeCellPropertyOverride>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeCellPropertyOverride>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeCellPropertyOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionPropertyOverride @ 148aa8ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionPropertyOverride(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionPropertyOverride_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy @ 148aa8ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionPropertyOverridePolicy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverridePolicy.OuterSingleton;
}

// NewStructOps @ 148aa8d20

void * __cdecl Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubObjectPropertyOverride,&UE::CoreUObject::Private::Construct<FSubObjectPropertyOverride>,&UE::CoreUObject::Private::ConstructForTests<FSubObjectPropertyOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa8d60

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeCellObjectMapping,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeCellObjectMapping>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeCellObjectMapping>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeCellObjectMapping>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeCellObjectMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa8da0

void * __cdecl Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyOverrideReferenceTable,&UE::CoreUObject::Private::Construct<FPropertyOverrideReferenceTable>,&UE::CoreUObject::Private::ConstructForTests<FPropertyOverrideReferenceTable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa8e60

void * __cdecl Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorPropertyOverride,&UE::CoreUObject::Private::Construct<FActorPropertyOverride>,&UE::CoreUObject::Private::ConstructForTests<FActorPropertyOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// EWorldPartitionRuntimeCellState_StaticEnum @ 148aa8ea0

UEnum * __cdecl EWorldPartitionRuntimeCellState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState,(UObject *)pUVar1,
                       L"EWorldPartitionRuntimeCellState");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton;
}

// NewStructOps @ 148aa8ee0

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeCellDebugInfo,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeCellDebugInfo>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeCellDebugInfo>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeCellDebugInfo>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeCellDebugInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148aa8f20

void * __cdecl Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FContainerPropertyOverride,&UE::CoreUObject::Private::Construct<FContainerPropertyOverride>,&UE::CoreUObject::Private::ConstructForTests<FContainerPropertyOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsAlwaysLoaded_SetBit @ 148aa8f90

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bIsSpatiallyLoaded_SetBit @ 148aa8fd0

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsSpatiallyLoaded_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bClientOnlyVisible_SetBit @ 148aa8fe0

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bIsHLOD_SetBit @ 148aa8ff0

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// NewProp_bIsCustomHLODPlaceholderCell_SetBit @ 148aa9000

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsCustomHLODPlaceholderCell_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  return;
}

// NewProp_bBlockOnSlowLoading_SetBit @ 148aa9020

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148aa9330

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellData @ 148aa9360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellData(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148aa9590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aa97b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aa9ab0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aa9b00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FWorldPartitionDebugHelper::<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aa9b30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148aa9d80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy,`FSpatialHashStreamingGrid::<lambda_30>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash @ 148aaa270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister @ 148aaa2b0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorHash",
               &Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton,
               UWorldPartitionEditorHash::StaticRegisterNativesUWorldPartitionEditorHash,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionEditorHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorHash>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorHash.InnerSingleton;
}

// NewStructOps @ 148aaa4f0

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionRuntimeSpatialHashGridPreviewer,&UE::CoreUObject::Private::Construct<FWorldPartitionRuntimeSpatialHashGridPreviewer>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionRuntimeSpatialHashGridPreviewer>,&UE::CoreUObject::Private::Destruct<FWorldPartitionRuntimeSpatialHashGridPreviewer>,&UE::CoreUObject::Private::Copy<FWorldPartitionRuntimeSpatialHashGridPreviewer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionEditorHash @ 148aaa530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorHash(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionEditorHash_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionCell @ 148aaa6e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionCell(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionCell_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings @ 148aaa720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.
                OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton;
}

// NewStructOps @ 148aaa760

void * __cdecl Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionPerWorldSettings,&UE::CoreUObject::Private::Construct<FWorldPartitionPerWorldSettings>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionPerWorldSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer @ 148aaaa00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings @ 148aaaa40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.
                OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 148aaacc0

void __cdecl
Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UClass_UWorldPartitionEditorSpatialHash @ 148aaacd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorSpatialHash(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionEditorSpatialHash_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.OuterSingleton;
}

// operator<<<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_> @ 148aaafd0

FArchive * __cdecl
operator<<<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FWorldPartitionReplayStreamingSource *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x160);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FWorldPartitionReplayStreamingSource,int>
                ((FWorldPartitionReplayStreamingSource *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x160,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xba2f)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FWorldPartitionReplayStreamingSource *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x160))
              ;
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x160,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FWorldPartitionReplayStreamingSource *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x160);
              DefaultConstructItems<FWorldPartitionReplayStreamingSource,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_> @ 148aaafe0

TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>
* __thiscall
TPairInitializer<UE::Math::TIntVector3<__int64>_const_&,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&>
::
operator<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_TTuple<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined8 uVar5;
  
  puVar3 = *(undefined8 **)this;
  puVar1 = &__return_storage_ptr__->field_0x18;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  uVar5 = puVar3[1];
  *(undefined8 *)__return_storage_ptr__ = *puVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = puVar3[2];
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar4 + 1);
  _Src = (void *)*puVar4;
  *(int *)&__return_storage_ptr__->field_0x20 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x24);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x48);
  }
  return __return_storage_ptr__;
}

// AddLambda<`FSpatialHashStreamingGrid::<lambda_30>::operator()'::__l5::<lambda_1>_> @ 148aab090

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
::AddLambda<_FSpatialHashStreamingGrid::<lambda_30>::operator()_::__l5::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy,`FSpatialHashStreamingGrid::<lambda_30>::operator()'::`5'::<lambda_1>_>
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

// CastChecked<AWorldPartitionReplay,AActor> @ 148aab8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionReplay * __cdecl
CastChecked<AWorldPartitionReplay,AActor>(AActor *param_1,Type param_2)

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
      return (AWorldPartitionReplay *)0x0;
    }
    pFVar3 = GetTypeName<AWorldPartitionReplay>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AWorldPartitionReplay::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AWorldPartitionReplay *)param_1;
  }
  pFVar3 = GetTypeName<AWorldPartitionReplay>(&local_28);
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

// CastChecked<URuntimeSpatialHashExternalStreamingObject,URuntimeHashExternalStreamingObjectBase> @ 148aab9c0

URuntimeSpatialHashExternalStreamingObject * __cdecl
CastChecked<URuntimeSpatialHashExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
          (URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
    pFVar3 = GetTypeName<URuntimeSpatialHashExternalStreamingObject>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = URuntimeSpatialHashExternalStreamingObject::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (URuntimeSpatialHashExternalStreamingObject *)param_1;
  }
  pFVar3 = GetTypeName<URuntimeSpatialHashExternalStreamingObject>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<URuntimeHashExternalStreamingObjectBase>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWorldPartitionRuntimeCellDataSpatialHash,UWorldPartitionRuntimeCellData> @ 148aaba80

UWorldPartitionRuntimeCellDataSpatialHash * __cdecl
CastChecked<UWorldPartitionRuntimeCellDataSpatialHash,UWorldPartitionRuntimeCellData>
          (TObjectPtr<UWorldPartitionRuntimeCellData> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UWorldPartitionRuntimeCellDataSpatialHash *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UWorldPartitionRuntimeCellData *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UWorldPartitionRuntimeCellDataSpatialHash *)0x0;
  }
  else {
    pUVar2 = UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UWorldPartitionRuntimeCellDataSpatialHash *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UWorldPartitionRuntimeCellDataSpatialHash *)0x0)) {
      pFVar3 = GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UWorldPartitionRuntimeCellData>
                         (&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UWorldPartitionRuntimeLevelStreamingCell,UWorldPartitionRuntimeCell> @ 148aabb40

UWorldPartitionRuntimeLevelStreamingCell * __cdecl
CastChecked<UWorldPartitionRuntimeLevelStreamingCell,UWorldPartitionRuntimeCell>
          (UWorldPartitionRuntimeCell *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UWorldPartitionRuntimeCell *)0x0) {
    pFVar3 = GetTypeName<UWorldPartitionRuntimeLevelStreamingCell>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UWorldPartitionRuntimeLevelStreamingCell *)param_1;
  }
  pFVar3 = GetTypeName<UWorldPartitionRuntimeLevelStreamingCell>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UWorldPartitionRuntimeCell>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<UWorldPartitionRuntimeCell_const_*,TObjectPtr<UWorldPartitionRuntimeCell_const_>,int> @ 148aabc00

void __cdecl
ConstructItems<UWorldPartitionRuntimeCell_const_*,TObjectPtr<UWorldPartitionRuntimeCell_const_>,int>
          (void *param_1,TObjectPtr<UWorldPartitionRuntimeCell_const_> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UWorldPartitionRuntimeCell_const_>,TObjectPtr<UWorldPartitionRuntimeCell_const_>,int> @ 148aabc30

void __cdecl
ConstructItems<TObjectPtr<UWorldPartitionRuntimeCell_const_>,TObjectPtr<UWorldPartitionRuntimeCell_const_>,int>
          (void *param_1,TObjectPtr<UWorldPartitionRuntimeCell_const_> *param_2,int param_3)

{
  TObjectPtr<UWorldPartitionRuntimeCell_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UWorldPartitionRuntimeCell *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWorldPartitionReplayStreamingSource,FWorldPartitionReplayStreamingSource,int> @ 148aabc90

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<FWorldPartitionReplayStreamingSource,FWorldPartitionReplayStreamingSource,int>
          (void *param_1,FWorldPartitionReplayStreamingSource *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
                ((FWorldPartitionStreamingSource *)(lVar1 + (longlong)param_2),
                 (FWorldPartitionStreamingSource *)param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWorldPartitionStreamingSource,FWorldPartitionStreamingSource,int> @ 148aabce0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<FWorldPartitionStreamingSource,FWorldPartitionStreamingSource,int>
          (void *param_1,FWorldPartitionStreamingSource *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  TVector<double> *pTVar6;
  
  if (param_3 != 0) {
    pdVar5 = (double *)((longlong)param_1 + 8);
    pTVar6 = &param_2->Location;
    do {
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar6) =
           *(undefined8 *)((longlong)(pTVar6 + -1) + 0x10);
      dVar3 = (pTVar6->field0_0x0)._s_0.Y;
      *pdVar5 = (pTVar6->field0_0x0)._s_0.X;
      pdVar5[1] = dVar3;
      pdVar5[2] = (pTVar6->field0_0x0)._s_0.Z;
      dVar3 = ((TRotator<double> *)(pTVar6 + 1))->Yaw;
      pdVar5[3] = ((TRotator<double> *)(pTVar6 + 1))->Pitch;
      pdVar5[4] = dVar3;
      pdVar5[5] = ((TRotator<double> *)(pTVar6 + 1))->Roll;
      *(EStreamingSourceTargetState *)(pdVar5 + 6) = *(EStreamingSourceTargetState *)(pTVar6 + 2);
      *(bool *)((longlong)pdVar5 + 0x31) = *(bool *)((longlong)(pTVar6 + 2) + 1);
      *(EStreamingSourcePriority *)((longlong)pdVar5 + 0x32) =
           *(EStreamingSourcePriority *)((longlong)(pTVar6 + 2) + 2);
      dVar3 = *(double *)((longlong)(pTVar6 + 2) + 0x10);
      pdVar5[7] = (((TVector<double> *)((longlong)(pTVar6 + 2) + 8))->field0_0x0)._s_0.X;
      pdVar5[8] = dVar3;
      pdVar5[9] = *(double *)(pTVar6 + 3);
      *(undefined1 *)(pdVar5 + 10) = *(undefined1 *)((longlong)(pTVar6 + 3) + 8);
      *(undefined4 *)((longlong)pdVar5 + 0x54) = *(undefined4 *)((longlong)(pTVar6 + 3) + 0xc);
      *(undefined1 *)(pdVar5 + 0xb) = *(undefined1 *)((longlong)(pTVar6 + 3) + 0x10);
      *(undefined8 *)
       &((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pdVar5 + 0xc))->Elements = 0;
      pdVar5[0xd] = 0.0;
      pdVar5[0x10] = 0.0;
      *(undefined4 *)(pdVar5 + 0x11) = 0;
      *(undefined4 *)((longlong)pdVar5 + 0x8c) = 0x80;
      *(undefined4 *)(pdVar5 + 0x12) = 0xffffffff;
      *(undefined4 *)((longlong)pdVar5 + 0x94) = 0;
      pdVar5[0x14] = 0.0;
      *(undefined4 *)(pdVar5 + 0x15) = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pdVar5 + 0xc),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pTVar6 + 4));
      pdVar5[0x17] = 0.0;
      *(undefined8 *)
       &((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
        (pdVar5 + 0x16))->Elements = 0;
      pdVar5[0x1a] = 0.0;
      *(undefined4 *)(pdVar5 + 0x1b) = 0;
      *(undefined4 *)((longlong)pdVar5 + 0xdc) = 0x80;
      *(undefined4 *)(pdVar5 + 0x1c) = 0xffffffff;
      *(undefined4 *)((longlong)pdVar5 + 0xe4) = 0;
      pdVar5[0x1e] = 0.0;
      *(undefined4 *)(pdVar5 + 0x1f) = 0;
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::operator=
                ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                 (pdVar5 + 0x16),
                 (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                 ((longlong)(pTVar6 + 7) + 8));
      pFVar1 = (ForAnyElementType *)(pdVar5 + 0x20);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(pTVar6 + 0xb);
      _Src = *(void **)((ForElementType<FSetElementId> *)(pTVar6 + 10) + 2);
      *(int *)(pdVar5 + 0x21) = iVar2;
      if (iVar2 == 0) {
        *(int *)((longlong)pdVar5 + 0x10c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)pdVar5 + 0x10c));
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x48);
      }
      *(undefined1 *)(pdVar5 + 0x22) = *(undefined1 *)((longlong)(pTVar6 + 0xb) + 8);
      *(undefined1 *)((longlong)pdVar5 + 0x111) = *(undefined1 *)((longlong)(pTVar6 + 0xb) + 9);
      *(undefined1 *)((longlong)pdVar5 + 0x112) = *(undefined1 *)((longlong)(pTVar6 + 0xb) + 10);
      *(undefined4 *)((longlong)pdVar5 + 0x114) = *(undefined4 *)((longlong)(pTVar6 + 0xb) + 0xc);
      *(undefined4 *)(pdVar5 + 0x23) = *(undefined4 *)((longlong)(pTVar6 + 0xb) + 0x10);
      dVar3 = pTVar6[0xc].field0_0x0._s_0.Y;
      pdVar5[0x24] = pTVar6[0xc].field0_0x0._s_0.X;
      pdVar5[0x25] = dVar3;
      pdVar5[0x26] = pTVar6[0xc].field0_0x0._s_0.Z;
      dVar3 = ((TRotator<double> *)(pTVar6 + 0xd))->Yaw;
      pdVar5[0x27] = ((TRotator<double> *)(pTVar6 + 0xd))->Pitch;
      pdVar5[0x28] = dVar3;
      pdVar5[0x29] = ((TRotator<double> *)(pTVar6 + 0xd))->Roll;
      *(float *)(pdVar5 + 0x2a) = *(float *)(pTVar6 + 0xe);
      pfVar4 = (float *)(pTVar6 + 0xe);
      pTVar6 = (TVector<double> *)((longlong)(pTVar6 + 0xe) + 0x10);
      *(float *)((longlong)pdVar5 + 0x154) = pfVar4[1];
      pdVar5 = pdVar5 + 0x2c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSubclassOf<AActor>,TSubclassOf<AActor>,int> @ 148aabf70

void __cdecl
ConstructItems<TSubclassOf<AActor>,TSubclassOf<AActor>,int>
          (void *param_1,TSubclassOf<AActor> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FSpatialHashStreamingGrid,int> @ 148aabfd0

void __cdecl DefaultConstructItems<FSpatialHashStreamingGrid,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      puVar1[8] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[7] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      *(undefined1 *)(puVar1 + 0xf) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar1 + 0x11) = 0x101;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSpatialHashStreamingGridLayerCell,int> @ 148aac070

void __cdecl
DefaultConstructItems<FSpatialHashStreamingGridLayerCell,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSpatialHashStreamingGridLevel,int> @ 148aac0a0

void __cdecl DefaultConstructItems<FSpatialHashStreamingGridLevel,int>(void *param_1,int param_2)

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
      *(undefined4 *)(lVar1 + 0x2c) = 0;
      *(undefined4 *)(lVar1 + 0x30) = 0x80;
      *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 0;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWorldPartitionReplayStreamingSource,int> @ 148aac0f0

void __cdecl
DefaultConstructItems<FWorldPartitionReplayStreamingSource,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  double *pdVar3;
  
  if (param_2 != 0) {
    pdVar3 = (double *)((longlong)param_1 + 8);
    do {
      pdVar3[-1] = 0.0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *pdVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar3[1] = (double)uVar1;
      pdVar3[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      pdVar3[3] = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      pdVar3[4] = dVar2;
      pdVar3[5] = UE::Math::TRotator<double>::ZeroRotator.Roll;
      *(undefined2 *)(pdVar3 + 6) = 1;
      *(undefined1 *)((longlong)pdVar3 + 0x32) = 0x80;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar3[7] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar3[8] = (double)uVar1;
      pdVar3[9] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined4 *)((longlong)pdVar3 + 0x54) = 0;
      pdVar3[0xc] = 0.0;
      pdVar3[0xd] = 0.0;
      pdVar3[0x10] = 0.0;
      *(undefined1 *)(pdVar3 + 10) = 0;
      *(undefined1 *)(pdVar3 + 0xb) = 0;
      *(undefined4 *)(pdVar3 + 0x11) = 0;
      *(undefined4 *)((longlong)pdVar3 + 0x8c) = 0x80;
      *(undefined4 *)(pdVar3 + 0x12) = 0xffffffff;
      *(undefined4 *)((longlong)pdVar3 + 0x94) = 0;
      pdVar3[0x14] = 0.0;
      *(undefined4 *)(pdVar3 + 0x15) = 0;
      pdVar3[0x16] = 0.0;
      pdVar3[0x17] = 0.0;
      pdVar3[0x1a] = 0.0;
      *(undefined4 *)(pdVar3 + 0x1b) = 0;
      *(undefined4 *)((longlong)pdVar3 + 0xdc) = 0x80;
      *(undefined4 *)(pdVar3 + 0x1c) = 0xffffffff;
      *(undefined4 *)((longlong)pdVar3 + 0xe4) = 0;
      pdVar3[0x1e] = 0.0;
      *(undefined4 *)(pdVar3 + 0x1f) = 0;
      pdVar3[0x20] = 0.0;
      pdVar3[0x21] = 0.0;
      *(undefined2 *)(pdVar3 + 0x22) = 0;
      *(undefined1 *)((longlong)pdVar3 + 0x112) = 0;
      *(undefined8 *)((longlong)pdVar3 + 0x114) = 0;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar3[0x24] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar3[0x25] = (double)uVar1;
      pdVar3[0x26] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      pdVar3[0x27] = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      pdVar3[0x28] = dVar2;
      pdVar3[0x29] = UE::Math::TRotator<double>::ZeroRotator.Roll;
      pdVar3[0x2a] = 0.0;
      param_2 = param_2 + -1;
      pdVar3 = pdVar3 + 0x2c;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_>,int> @ 148aac260

void __cdecl
DestructItems<TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_>,int>
          (TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x20;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSquare2DGridHelper::FGridLevel,int> @ 148aac2a0

void __cdecl DestructItems<FSquare2DGridHelper::FGridLevel,int>(FGridLevel *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->CellsMapping).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSpatialHashStreamingGrid,int> @ 148aac310

void __cdecl
DestructItems<FSpatialHashStreamingGrid,int>(FSpatialHashStreamingGrid *param_1,int param_2)

{
  FSquare2DGridHelper *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<FSpatialHashStreamingGridLevel,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->InjectedGridLevels;
    do {
      pFVar1 = *(FSquare2DGridHelper **)((FSpatialHashSettings *)(pTVar3 + -1) + 4);
      if (pFVar1 != (FSquare2DGridHelper *)0x0) {
        DestructItems<FSquare2DGridHelper::FGridLevel,int>
                  ((FGridLevel *)(pFVar1->Levels).AllocatorInstance.Data,(pFVar1->Levels).ArrayNum);
        pFVar2 = (pFVar1->Levels).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        operator_delete(pFVar1,0x68);
      }
      DestructItems<FSpatialHashStreamingGridLevel,int>
                ((FSpatialHashStreamingGridLevel *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum
                );
      pFVar2 = (pTVar3->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<FSpatialHashStreamingGridLevel,int>
                ((FSpatialHashStreamingGridLevel *)pTVar3[-6].AllocatorInstance.Data,
                 pTVar3[-6].ArrayNum);
      pFVar2 = pTVar3[-6].AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pTVar3 = pTVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSpatialHashStreamingGridLayerCell,int> @ 148aac3c0

void __cdecl
DestructItems<FSpatialHashStreamingGridLayerCell,int>
          (FSpatialHashStreamingGridLayerCell *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->GridCells).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSpatialHashStreamingGridLevel,int> @ 148aac400

void __cdecl
DestructItems<FSpatialHashStreamingGridLevel,int>
          (FSpatialHashStreamingGridLevel *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->LayerCellsMapping).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      DestructItems<FSpatialHashStreamingGridLayerCell,int>
                ((FSpatialHashStreamingGridLayerCell *)puVar1[-10],*(int *)(puVar1 + -9));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWorldPartitionReplaySample,int> @ 148aac480

void __cdecl
DestructItems<FWorldPartitionReplaySample,int>(FWorldPartitionReplaySample *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->StreamingSources;
    do {
      DestructItems<FWorldPartitionReplayStreamingSource,int>
                ((FWorldPartitionReplayStreamingSource *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FWorldPartitionReplaySample *)(pTVar2 + -1))->StreamingSourceNameIndices).
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

// DestructItems<FWorldPartitionReplayStreamingSource,int> @ 148aac4e0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FWorldPartitionReplayStreamingSource,int>
          (FWorldPartitionReplayStreamingSource *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FWorldPartitionStreamingSource::~FWorldPartitionStreamingSource
              ((FWorldPartitionStreamingSource *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// Emplace<UE::Math::TIntVector3<__int64>_const_&,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&> @ 148aac740

TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
* __thiscall
TMapBase<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
::
Emplace<UE::Math::TIntVector3<__int64>_const_&,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&>
          (void *this,TIntVector3<__int64> *param_1,
          TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int local_res8 [2];
  TIntVector3<__int64> *local_28;
  TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
  *local_20;
  FSparseArrayAllocationInfo local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0x30);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_18,iVar4);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    TPairInitializer<UE::Math::TIntVector3<__int64>_const_&,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&>
    ::
    operator<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_TTuple<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = FCrc::MemCrc_DEPRECATED(local_18.Pointer,0x18,0);
  bVar3 = TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar3) {
    TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)this + 0x18 + (longlong)local_res8[0] * 0x30);
}

// GetFullNameForCastLogError<UWorldPartitionRuntimeCell> @ 148aae120

FString * __cdecl
GetFullNameForCastLogError<UWorldPartitionRuntimeCell>
          (FString *__return_storage_ptr__,UWorldPartitionRuntimeCell *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<AWorldPartitionReplay> @ 148aae150

FString * __cdecl GetTypeName<AWorldPartitionReplay>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AWorldPartitionReplay::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<URuntimeSpatialHashExternalStreamingObject> @ 148aae190

FString * __cdecl
GetTypeName<URuntimeSpatialHashExternalStreamingObject>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = URuntimeSpatialHashExternalStreamingObject::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash> @ 148aae1d0

FString * __cdecl
GetTypeName<UWorldPartitionRuntimeCellDataSpatialHash>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWorldPartitionRuntimeLevelStreamingCell> @ 148aae210

FString * __cdecl
GetTypeName<UWorldPartitionRuntimeLevelStreamingCell>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FSpatialHashStreamingGrid_const_*,int,FIdentityFunctor,TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,`UWorldPartitionRuntimeSpatialHash::Draw2D'::__l2::<lambda_1>_>_> @ 148aae250

void __cdecl
AlgoImpl::
HeapSortInternal<FSpatialHashStreamingGrid_const_*,int,FIdentityFunctor,TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,_UWorldPartitionRuntimeSpatialHash::Draw2D_::__l2::<lambda_1>_>_>
          (FSpatialHashStreamingGrid **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,_private:_virtual_bool___cdecl_UWorldPartitionRuntimeSpatialHash::Draw2D(FWorldPartitionDraw2DContext_&)const_::_2_::<lambda_1>_>
          param_4)

{
  float *pfVar1;
  float fVar2;
  FSpatialHashStreamingGrid *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
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
  iVar11 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_148aae340:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar8 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            pFVar3 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar3;
            iVar11 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar11 * 2;
                iVar10 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (param_1[(longlong)iVar6 + 2]->LoadingRange <= param_1[iVar10]->LoadingRange &&
                      param_1[iVar10]->LoadingRange != param_1[(longlong)iVar6 + 2]->LoadingRange) {
                    iVar10 = iVar6;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar3 = param_1[iVar11];
                fVar2 = param_1[iVar10]->LoadingRange;
                pfVar1 = &pFVar3->LoadingRange;
                if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
                param_1[iVar11] = param_1[iVar10];
                param_1[iVar10] = pFVar3;
                iVar11 = iVar10;
              } while (iVar10 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2]->LoadingRange <= param_1[iVar9]->LoadingRange &&
          param_1[iVar9]->LoadingRange != param_1[(longlong)iVar7 + 2]->LoadingRange) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar3 = param_1[iVar6];
    fVar2 = param_1[iVar9]->LoadingRange;
    pfVar1 = &pFVar3->LoadingRange;
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto LAB_148aae340;
    param_1[iVar6] = param_1[iVar9];
    param_1[iVar9] = pFVar3;
    iVar7 = iVar9 * 2 + 1;
    iVar6 = iVar9;
  } while( true );
}

// HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority'::__l15::<lambda_1>_> @ 148aae410

void __cdecl
AlgoImpl::
HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority_::__l15::<lambda_1>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  UWorldPartitionRuntimeCellData *pUVar1;
  UWorldPartitionRuntimeCell *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
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
  iVar7 = iVar5 * 2 + 1;
  iVar11 = iVar7;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_148aae53d:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            pUVar2 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pUVar2;
            if (1 < iVar7) {
              do {
                iVar8 = iVar11 * 2;
                iVar5 = iVar8 + 1;
                if (iVar8 + 2 < iVar7) {
                  pUVar1 = (param_1[(longlong)iVar8 + 2]->RuntimeCellData).field0_0x0.DebugPtr;
                  iVar9 = (**(code **)(pUVar1->_padding_ + 0x2e0))
                                    (pUVar1,(param_1[iVar5]->RuntimeCellData).field0_0x0.DebugPtr);
                  if (iVar9 < 0) {
                    iVar5 = iVar8;
                  }
                  iVar5 = iVar5 + 1;
                }
                pUVar1 = (param_1[iVar11]->RuntimeCellData).field0_0x0.DebugPtr;
                iVar8 = (**(code **)(pUVar1->_padding_ + 0x2e0))
                                  (pUVar1,(param_1[iVar5]->RuntimeCellData).field0_0x0.DebugPtr);
                if (-1 < iVar8) break;
                pUVar2 = param_1[iVar11];
                param_1[iVar11] = param_1[iVar5];
                param_1[iVar5] = pUVar2;
                iVar11 = iVar5;
              } while (iVar5 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar8 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar8 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      pUVar1 = (param_1[(longlong)iVar7 + 2]->RuntimeCellData).field0_0x0.DebugPtr;
      iVar6 = (**(code **)(pUVar1->_padding_ + 0x2e0))
                        (pUVar1,(param_1[iVar9]->RuntimeCellData).field0_0x0.DebugPtr);
      if (iVar6 < 0) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    pUVar1 = (param_1[iVar5]->RuntimeCellData).field0_0x0.DebugPtr;
    iVar7 = (**(code **)(pUVar1->_padding_ + 0x2e0))
                      (pUVar1,(param_1[iVar9]->RuntimeCellData).field0_0x0.DebugPtr);
    if (-1 < iVar7) goto LAB_148aae53d;
    pUVar2 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar9];
    iVar7 = iVar9 * 2 + 1;
    param_1[iVar9] = pUVar2;
    iVar5 = iVar9;
  } while( true );
}

// HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>_> @ 148aae650

void __cdecl
AlgoImpl::
HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::GetIntersectingCells_::__l2::<lambda_2>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_2> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FWorldPartitionQueryCache *local_res20;
  
  local_res20 = param_4.QueryCache;
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
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_148aae75c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pUVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>::
                          operator()(&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>::
                        operator()(&local_res20,param_1[iVar7],param_1[iVar4]);
                if (!bVar3) break;
                pUVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_148aae75c;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pUVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<ASpatialHashRuntimeGridInfo> @ 148aae840

void __cdecl InternalConstructor<ASpatialHashRuntimeGridInfo>(FObjectInitializer *param_1)

{
  AInfo *this;
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  this = (AInfo *)param_1->Obj;
  if (this != (AInfo *)0x0) {
    pFVar2 = FName::FName(&local_res8,L"Sprite");
    FVar1 = *pFVar2;
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7ASpatialHashRuntimeGridInfo__6B_;
  }
  return;
}

// InternalConstructor<AWorldPartitionAutoInstancedActor> @ 148aae8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionAutoInstancedActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWorldPartitionAutoInstancedActor__6B_;
  }
  return;
}

// InternalConstructor<AWorldPartitionMiniMap> @ 148aae8f0

void __cdecl InternalConstructor<AWorldPartitionMiniMap>(FObjectInitializer *param_1)

{
  AInfo *this;
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  this = (AInfo *)param_1->Obj;
  if (this != (AInfo *)0x0) {
    pFVar2 = FName::FName(&local_res8,L"Sprite");
    FVar1 = *pFVar2;
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7AWorldPartitionMiniMap__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x31 = 0;
    *(undefined2 *)&this[1].field_0x35 = 0;
    this[1].field_0x37 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    *(undefined4 *)&this[1].field_0x90 = 0;
    *(undefined4 *)&this[1].field_0x94 = 0x80;
    *(undefined4 *)&this[1].field_0x98 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x9c = 0;
    *(undefined8 *)&this[1].field_0xa8 = 0;
    *(undefined4 *)&this[1].field_0xb0 = 0;
    *(undefined4 *)&this[1].field_0xb8 = 0x32;
    *(undefined4 *)&this[1].field_0xbc = 0x19000;
    this[1].field_0xc0 = 0;
    *(undefined8 *)&this[1].field_0xc4 = 5;
  }
  return;
}

// InternalConstructor<AWorldPartitionMiniMapVolume> @ 148aaea20

void __cdecl InternalConstructor<AWorldPartitionMiniMapVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    pFVar2 = FName::FName(&local_res8,L"Sprite");
    FVar1 = *pFVar2;
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AWorldPartitionMiniMapVolume__6B_;
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
  }
  return;
}

// InternalConstructor<AWorldPartitionReplay> @ 148aaeab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionReplay>(FObjectInitializer *param_1)

{
  uint uVar1;
  AActor *this;
  FName FVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->bAlwaysRelevant = '\x01';
    this->bReplicates = '\x01';
    this->_padding_ = (longlong)&___7AWorldPartitionReplay__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
    uVar1 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
    this->bReplayRewindable = '\x01';
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = uVar1;
    this->NetDriverName = FVar2;
  }
  return;
}

// InternalConstructor<URuntimeHashExternalStreamingObjectBase> @ 148aaeb40

void __cdecl
InternalConstructor<URuntimeHashExternalStreamingObjectBase>(FObjectInitializer *param_1)

{
  if ((URuntimeHashExternalStreamingObjectBase *)param_1->Obj !=
      (URuntimeHashExternalStreamingObjectBase *)0x0) {
    URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
              ((URuntimeHashExternalStreamingObjectBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URuntimeSpatialHashExternalStreamingObject> @ 148aaeb60

void __cdecl
InternalConstructor<URuntimeSpatialHashExternalStreamingObject>(FObjectInitializer *param_1)

{
  URuntimeHashExternalStreamingObjectBase *this;
  
  this = (URuntimeHashExternalStreamingObjectBase *)param_1->Obj;
  if (this != (URuntimeHashExternalStreamingObjectBase *)0x0) {
    URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase(this,param_1);
    this->_padding_ =
         (longlong)&URuntimeSpatialHashExternalStreamingObject::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &URuntimeSpatialHashExternalStreamingObject::
          _vftable__for__IWorldPartitionCookPackageObject__;
    this->_padding_ =
         (longlong)
         &URuntimeSpatialHashExternalStreamingObject::_vftable__for__IDataLayerInstanceProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWorldPartitionCell> @ 148aaebc0

void __cdecl InternalConstructor<UWorldPartitionCell>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionCell__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionEditorHash> @ 148aaebf0

void __cdecl InternalConstructor<UWorldPartitionEditorHash>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionEditorHash__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionEditorPerProjectUserSettings> @ 148aaec20

void __cdecl
InternalConstructor<UWorldPartitionEditorPerProjectUserSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionEditorPerProjectUserSettings__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionEditorSpatialHash> @ 148aaec50

void __cdecl InternalConstructor<UWorldPartitionEditorSpatialHash>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionEditorSpatialHash__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionLevelStreamingDynamic> @ 148aaec80

void __cdecl InternalConstructor<UWorldPartitionLevelStreamingDynamic>(FObjectInitializer *param_1)

{
  ULevelStreamingDynamic *this;
  
  this = (ULevelStreamingDynamic *)param_1->Obj;
  if (this != (ULevelStreamingDynamic *)0x0) {
    ULevelStreamingDynamic::ULevelStreamingDynamic(this,param_1);
    *(undefined2 *)&this->field_0x1f8 = 0;
    *(undefined ***)this = &___7UWorldPartitionLevelStreamingDynamic__6B_;
    *(undefined8 *)&this->field_0x1fc = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x20,0);
    return;
  }
  return;
}

// InternalConstructor<UWorldPartitionLevelStreamingPolicy> @ 148aaecf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UWorldPartitionLevelStreamingPolicy>(FObjectInitializer *param_1)

{
  UWorldPartitionStreamingPolicy *this;
  FWorldPartitionUpdateStreamingCurrentState *pFVar1;
  
  this = (UWorldPartitionStreamingPolicy *)param_1->Obj;
  if (this != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingPolicy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CurrentState.StreamingSources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].CurrentState.StreamingSources.ArrayNum = 0;
    this[1].CurrentState.StreamingSources.ArrayMax = 0x80;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.Elements = 0xffffffff;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.Elements.field_0x4 = 0;
    *(undefined8 *)&this[1].CurrentState.LoadedCells.Elements.field_0x10 = 0;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.Elements.field_0x18 = 0;
    *(undefined8 *)&this[1].CurrentState.LoadedCells.Elements.field_0x20 = 0;
    *(undefined8 *)&this[1].CurrentState.LoadedCells.Elements.field_0x28 = 0;
    this[1].CurrentState.LoadedCells.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    this[1].CurrentState.LoadedCells.HashSize = 0;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.field_0x4c = 0x80;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.Cells.Elements = 0xffffffff;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x4 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x10 = 0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x18 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x20 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x28 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x30 = 0;
    pFVar1 = &this[1].CurrentState;
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[0] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[1] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[2] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[3] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash._padding_ = 0;
    this[1].CurrentState.ActivatedCells.Cells.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x8 =
         0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x10 =
         0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x14 =
         0x80;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x18 =
         0xffffffff;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x1c =
         0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x28 =
         0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x30 =
         0;
  }
  return;
}

// InternalConstructor<UWorldPartitionPropertyOverride> @ 148aaee10

void __cdecl InternalConstructor<UWorldPartitionPropertyOverride>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWorldPartitionPropertyOverride__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionPropertyOverridePolicy> @ 148aaee40

void __cdecl InternalConstructor<UWorldPartitionPropertyOverridePolicy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UWorldPartitionPropertyOverridePolicy__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCell> @ 148aaee70

void __cdecl InternalConstructor<UWorldPartitionRuntimeCell>(FObjectInitializer *param_1)

{
  if ((UWorldPartitionRuntimeCell *)param_1->Obj != (UWorldPartitionRuntimeCell *)0x0) {
    UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell
              ((UWorldPartitionRuntimeCell *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellData> @ 148aaee90

void __cdecl InternalConstructor<UWorldPartitionRuntimeCellData>(FObjectInitializer *param_1)

{
  if ((UWorldPartitionRuntimeCellData *)param_1->Obj != (UWorldPartitionRuntimeCellData *)0x0) {
    UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData
              ((UWorldPartitionRuntimeCellData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellDataSpatialHash> @ 148aaeeb0

void __cdecl
InternalConstructor<UWorldPartitionRuntimeCellDataSpatialHash>(FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCellData *this;
  
  this = (UWorldPartitionRuntimeCellData *)param_1->Obj;
  if (this != (UWorldPartitionRuntimeCellData *)0x0) {
    UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataSpatialHash__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1].CachedMinSourcePriority = '\0';
    this[1].bCachedWasRequestedByBlockingSource = false;
    *(undefined6 *)&this[1].field_0x2a = 0;
    this[1].CachedMinSquareDistanceToBlockingSource = 0.0;
    *(undefined8 *)&this[1].CachedMinBlockOnSlowStreamingRatio = 0;
    this[1].CachedMinSquareDistanceToSource = 0.0;
    *(undefined8 *)&this[1].CachedMinSlowStreamingRatio = 0;
    this[1].CachedMinSpatialSortingPriority = 0.0;
    *(undefined8 *)&this[1].CachedSourceInfoEpoch = 0x7fefffffffffffff;
    this[1].ContentBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
    this[1].ContentBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
    this[1].ContentBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellTransformer> @ 148aaef40

void __cdecl InternalConstructor<UWorldPartitionRuntimeCellTransformer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformer__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellTransformerISM> @ 148aaef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
InternalConstructor<UWorldPartitionRuntimeCellTransformerISM>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *pUVar1;
  FActorPrimitiveColorHandler *this_00;
  FText *pFVar2;
  FText *pFVar3;
  FName *pFVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_e8 [32];
  FName local_a8;
  FText local_a0;
  FText local_90;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerISM__6B_;
    if (((*(uint *)&this->field_0x8 & 0x10) != 0) && ((*(uint *)&this->field_0x8 >> 0x1a & 1) == 0))
    {
      pUVar1 = UWorldPartitionRuntimeCellTransformerISM::GetPrivateStaticClass();
      if (*(UClass **)&this->field_0x10 == pUVar1) {
        this_00 = FActorPrimitiveColorHandler::Get();
        pFVar2 = FText::FText(&local_90);
        local_38 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_20 = (undefined ***)0x0;
        local_30 = FActorPrimitiveColorHandler::<lambda_29>::<lambda_invoker_cdecl>;
        local_50 = (undefined ***)0x0;
        local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                      Call;
        local_68 = &
                   ___7__TFunction_OwnedObject_P6A_AUFLinearColor__PEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_60 = `UWorldPartitionRuntimeCellTransformerISM::
                   UWorldPartitionRuntimeCellTransformerISM'::__l5::<lambda_1>::
                   <lambda_invoker_cdecl>;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),FLinearColor,UPrimitiveComponent_const_*>
                      ::Call;
        pFVar3 = FText::AsLocalizable_Advanced_LocText
                           (&local_a0,L"WorldPartition",L"CellTransformerISM",
                            L"Cell Transformer ISM");
        pFVar4 = FName::FName(&local_a8,L"CellTransformerISM");
        FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
                  (this_00,*pFVar4,pFVar3,false,
                   (TFunction<FLinearColor___cdecl(UPrimitiveComponent_const_*)> *)local_78,
                   (TFunction<void___cdecl(void)> *)local_48,pFVar2);
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
        if (local_78[0] != (code *)0x0) {
          pppuVar5 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar5 = local_50;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if (local_48[0] != (code *)0x0) {
          pppuVar5 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar5 = local_20;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if (local_90.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellTransformerLog> @ 148aaf180

void __cdecl
InternalConstructor<UWorldPartitionRuntimeCellTransformerLog>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerLog__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeCellTransformerSettings> @ 148aaf1c0

void __cdecl
InternalConstructor<UWorldPartitionRuntimeCellTransformerSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerSettings__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeHash> @ 148aaf1f0

void __cdecl InternalConstructor<UWorldPartitionRuntimeHash>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionRuntimeHash__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeLevelStreamingCell> @ 148aaf250

void __cdecl
InternalConstructor<UWorldPartitionRuntimeLevelStreamingCell>(FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCell *this;
  
  this = (UWorldPartitionRuntimeCell *)param_1->Obj;
  if (this != (UWorldPartitionRuntimeCell *)0x0) {
    UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell(this,param_1);
    this->_padding_ = (longlong)&UWorldPartitionRuntimeLevelStreamingCell::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWorldPartitionRuntimeLevelStreamingCell::_vftable__for__IWorldPartitionCell__;
    this->_padding_ =
         (longlong)
         &UWorldPartitionRuntimeLevelStreamingCell::
          _vftable__for__IWorldPartitionCookPackageObject__;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWorldPartitionRuntimeSpatialHash> @ 148aaf2a0

void __cdecl InternalConstructor<UWorldPartitionRuntimeSpatialHash>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined ***)this = &___7UWorldPartitionRuntimeSpatialHash__6B_;
    *(undefined2 *)&this[3].field_0x1 = 0x101;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    this[5].field_0x18 = 1;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    *(undefined4 *)&this[6].field_0x24 = 0x80;
    *(undefined4 *)(this + 7) = 0xffffffff;
    *(undefined4 *)&this[7].field_0x4 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined4 *)&this[7].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UWorldPartitionSettings> @ 148aaf3a0

void __cdecl InternalConstructor<UWorldPartitionSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UWorldPartitionSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].CategoryName.ComparisonIndex = 0;
    this[2].CategoryName.Number = 0;
    this[2].SectionName.ComparisonIndex.Value = 0;
    *(undefined1 *)&this[3]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UWorldPartitionStreamingPolicy> @ 148aaf430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UWorldPartitionStreamingPolicy>(FObjectInitializer *param_1)

{
  if ((UWorldPartitionStreamingPolicy *)param_1->Obj != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy
              ((UWorldPartitionStreamingPolicy *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ASpatialHashRuntimeGridInfo> @ 148aaf450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ASpatialHashRuntimeGridInfo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASpatialHashRuntimeGridInfo::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7ASpatialHashRuntimeGridInfo__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionAutoInstancedActor> @ 148aaf500

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
InternalVTableHelperCtorCaller<AWorldPartitionAutoInstancedActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionAutoInstancedActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWorldPartitionAutoInstancedActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionMiniMap> @ 148aaf5b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWorldPartitionMiniMap>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionMiniMap::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7AWorldPartitionMiniMap__6B_;
    this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    *(undefined4 *)&this[1].field_0x90 = 0;
    *(undefined4 *)&this[1].field_0x94 = 0x80;
    *(undefined4 *)&this[1].field_0x98 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x9c = 0;
    *(undefined8 *)&this[1].field_0xa8 = 0;
    *(undefined4 *)&this[1].field_0xb0 = 0;
    *(undefined4 *)&this[1].field_0xc8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionMiniMapVolume> @ 148aaf6c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AWorldPartitionMiniMapVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionMiniMapVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7AWorldPartitionMiniMapVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionReplay> @ 148aaf770

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

UObject * __cdecl InternalVTableHelperCtorCaller<AWorldPartitionReplay>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionReplay::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWorldPartitionReplay__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimeHashExternalStreamingObjectBase> @ 148aaf840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URuntimeHashExternalStreamingObjectBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URuntimeHashExternalStreamingObjectBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimeHashExternalStreamingObjectBase::GetPrivateStaticClass();
  pUVar3 = (URuntimeHashExternalStreamingObjectBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (URuntimeHashExternalStreamingObjectBase *)0x0) {
    pUVar3 = URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URuntimeSpatialHashExternalStreamingObject> @ 148aaf8e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URuntimeSpatialHashExternalStreamingObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URuntimeHashExternalStreamingObjectBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URuntimeSpatialHashExternalStreamingObject::GetPrivateStaticClass();
  this = (URuntimeHashExternalStreamingObjectBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URuntimeHashExternalStreamingObjectBase *)0x0) {
    URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase(this,param_1);
    this->_padding_ =
         (longlong)&URuntimeSpatialHashExternalStreamingObject::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &URuntimeSpatialHashExternalStreamingObject::
          _vftable__for__IWorldPartitionCookPackageObject__;
    this->_padding_ =
         (longlong)
         &URuntimeSpatialHashExternalStreamingObject::_vftable__for__IDataLayerInstanceProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionCell> @ 148aaf9b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartitionCell>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionCell::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionCell__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionEditorHash> @ 148aafa60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartitionEditorHash>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionEditorHash::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionEditorHash__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionEditorPerProjectUserSettings> @ 148aafb10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionEditorPerProjectUserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionEditorPerProjectUserSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionEditorPerProjectUserSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionEditorSpatialHash> @ 148aafbc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionEditorSpatialHash>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionEditorSpatialHash::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionEditorSpatialHash__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingDynamic> @ 148aafc70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingDynamic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULevelStreamingDynamic *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionLevelStreamingDynamic::GetPrivateStaticClass();
  this = (ULevelStreamingDynamic *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULevelStreamingDynamic *)0x0) {
    ULevelStreamingDynamic::ULevelStreamingDynamic(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionLevelStreamingDynamic__6B_;
    *(undefined8 *)&this->field_0x1fc = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x20,0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingPolicy> @ 148aafd50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingPolicy>(FVTableHelper *param_1)

{
  FWorldPartitionUpdateStreamingCurrentState *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UWorldPartitionStreamingPolicy *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UWorldPartitionLevelStreamingPolicy::GetPrivateStaticClass();
  this = (UWorldPartitionStreamingPolicy *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldPartitionStreamingPolicy *)0x0) {
    UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy(this,param_1);
    this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingPolicy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CurrentState.StreamingSources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].CurrentState.StreamingSources.ArrayNum = 0;
    this[1].CurrentState.StreamingSources.ArrayMax = 0x80;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.Elements = 0xffffffff;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.Elements.field_0x4 = 0;
    *(undefined8 *)&this[1].CurrentState.LoadedCells.Elements.field_0x10 = 0;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.Elements.field_0x18 = 0;
    *(undefined8 *)&this[1].CurrentState.LoadedCells.Elements.field_0x20 = 0;
    *(undefined8 *)&this[1].CurrentState.LoadedCells.Elements.field_0x28 = 0;
    this[1].CurrentState.LoadedCells.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    this[1].CurrentState.LoadedCells.HashSize = 0;
    *(undefined4 *)&this[1].CurrentState.LoadedCells.field_0x4c = 0x80;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.Cells.Elements = 0xffffffff;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x4 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x10 = 0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x18 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x20 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x28 = 0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.Cells.Elements.field_0x30 = 0;
    pFVar1 = &this[1].CurrentState;
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[0] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[1] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[2] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash.InlineData[3] = '\0';
    (pFVar1->ActivatedCells).Cells.Hash._padding_ = 0;
    this[1].CurrentState.ActivatedCells.Cells.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x8 =
         0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x10 =
         0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x14 =
         0x80;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x18 =
         0xffffffff;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x1c =
         0;
    *(undefined8 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x28 =
         0;
    *(undefined4 *)&this[1].CurrentState.ActivatedCells.PendingAddToWorldCells.Elements.field_0x30 =
         0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverride> @ 148aafef0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverride>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionPropertyOverride::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionPropertyOverride__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverridePolicy> @ 148aaffa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverridePolicy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionPropertyOverridePolicy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionPropertyOverridePolicy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCell> @ 148ab0050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCell>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCell::GetPrivateStaticClass();
  pUVar3 = (UWorldPartitionRuntimeCell *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWorldPartitionRuntimeCell *)0x0) {
    pUVar3 = UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellData> @ 148ab00f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeCellData__6B_;
    pUVar1[3].field_0x18 = 0;
    pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataSpatialHash> @ 148ab01c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataSpatialHash>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellDataSpatialHash::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[3].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeCellDataSpatialHash__6B_;
    pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformer> @ 148ab02c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellTransformer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeCellTransformer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerISM> @ 148ab0370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerISM>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellTransformerISM::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeCellTransformerISM__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerLog> @ 148ab0420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerLog>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellTransformerLog::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeCellTransformerLog__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerSettings> @ 148ab04d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerSettings>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeCellTransformerSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeCellTransformerSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHash> @ 148ab0580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartitionRuntimeHash>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeHash::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeHash__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeLevelStreamingCell> @ 148ab0660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeLevelStreamingCell>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionRuntimeCell *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeLevelStreamingCell::GetPrivateStaticClass();
  this = (UWorldPartitionRuntimeCell *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldPartitionRuntimeCell *)0x0) {
    UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell(this,param_1);
    this->_padding_ = (longlong)&UWorldPartitionRuntimeLevelStreamingCell::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWorldPartitionRuntimeLevelStreamingCell::_vftable__for__IWorldPartitionCell__;
    this->_padding_ =
         (longlong)
         &UWorldPartitionRuntimeLevelStreamingCell::
          _vftable__for__IWorldPartitionCookPackageObject__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionRuntimeSpatialHash> @ 148ab0730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionRuntimeSpatialHash>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionRuntimeSpatialHash::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined ***)pUVar1 = &___7UWorldPartitionRuntimeSpatialHash__6B_;
    *(undefined2 *)&pUVar1[3].field_0x1 = 0x101;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)&pUVar1[6].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 7) = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x4 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined4 *)&pUVar1[7].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionSettings> @ 148ab08a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldPartitionSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UWorldPartitionSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].CategoryName.ComparisonIndex = 0;
    this[2].CategoryName.Number = 0;
    this[2].SectionName.ComparisonIndex.Value = 0;
    *(undefined1 *)&this[3]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionStreamingPolicy> @ 148ab09a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionStreamingPolicy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionStreamingPolicy *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionStreamingPolicy::GetPrivateStaticClass();
  pUVar3 = (UWorldPartitionStreamingPolicy *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWorldPartitionStreamingPolicy *)0x0) {
    pUVar3 = UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FSpatialHashStreamingGrid_const_*,int,FIdentityFunctor,TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,`UWorldPartitionRuntimeSpatialHash::Draw2D'::__l2::<lambda_1>_>_> @ 148ab0a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSpatialHashStreamingGrid_const_*,int,FIdentityFunctor,TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,_UWorldPartitionRuntimeSpatialHash::Draw2D_::__l2::<lambda_1>_>_>
          (FSpatialHashStreamingGrid **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,_private:_virtual_bool___cdecl_UWorldPartitionRuntimeSpatialHash::Draw2D(FWorldPartitionDraw2DContext_&)const_::_2_::<lambda_1>_>
          param_4)

{
  float *pfVar1;
  FSpatialHashStreamingGrid **ppFVar2;
  int iVar3;
  FSpatialHashStreamingGrid **ppFVar4;
  FSpatialHashStreamingGrid **ppFVar5;
  FSpatialHashStreamingGrid ***pppFVar6;
  FSpatialHashStreamingGrid **ppFVar7;
  FSpatialHashStreamingGrid **ppFVar8;
  FSpatialHashStreamingGrid **ppFVar9;
  FSpatialHashStreamingGrid *pFVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  FSpatialHashStreamingGrid **local_338;
  FSpatialHashStreamingGrid **local_328;
  FSpatialHashStreamingGrid **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar11;
    memset(local_310,0,0x2e8);
    pppFVar6 = &local_328;
    do {
      ppFVar8 = pppFVar6[1];
      ppFVar4 = *pppFVar6;
      ppFVar2 = pppFVar6[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar2;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_148ab0af0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar5 = ppFVar8 + 1;
          pFVar10 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar10;
          ppFVar4 = ppFVar9;
LAB_148ab0b20:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000148ab0b29;
          goto LAB_148ab0b40;
        }
        if (ppFVar9 < ppFVar8) {
          ppFVar2 = ppFVar9 + 1;
          do {
            ppFVar4 = ppFVar9;
            if (ppFVar2 <= ppFVar8) {
              ppFVar5 = ppFVar2;
              if (0x1f < ((longlong)ppFVar8 + (8 - (longlong)ppFVar2) & 0xfffffffffffffff8U)) {
                do {
                  fVar11 = (*ppFVar5)->LoadingRange;
                  pfVar1 = &(*ppFVar4)->LoadingRange;
                  pFVar10 = *ppFVar4;
                  if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
                    ppFVar4 = ppFVar5;
                    pFVar10 = *ppFVar5;
                  }
                  if (pFVar10->LoadingRange < ppFVar5[1]->LoadingRange) {
                    ppFVar4 = ppFVar5 + 1;
                  }
                  fVar11 = ppFVar5[2]->LoadingRange;
                  pfVar1 = &(*ppFVar4)->LoadingRange;
                  pFVar10 = *ppFVar4;
                  if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
                    ppFVar4 = ppFVar5 + 2;
                    pFVar10 = ppFVar5[2];
                  }
                  if (pFVar10->LoadingRange < ppFVar5[3]->LoadingRange) {
                    ppFVar4 = ppFVar5 + 3;
                  }
                  ppFVar5 = ppFVar5 + 4;
                } while (ppFVar5 <= ppFVar8 + -3);
              }
              for (; ppFVar5 <= ppFVar8; ppFVar5 = ppFVar5 + 1) {
                if ((*ppFVar4)->LoadingRange < (*ppFVar5)->LoadingRange) {
                  ppFVar4 = ppFVar5;
                }
              }
            }
            pFVar10 = *ppFVar4;
            ppFVar5 = ppFVar8 + -1;
            *ppFVar4 = *ppFVar8;
            *ppFVar8 = pFVar10;
            ppFVar8 = ppFVar5;
          } while (ppFVar9 < ppFVar5);
        }
        goto LAB_148ab0c03;
      }
LAB_148ab0bf2:
      local_338 = ppFVar2;
      HeapSortInternal<FSpatialHashStreamingGrid_const_*,int,FIdentityFunctor,TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,_UWorldPartitionRuntimeSpatialHash::Draw2D_::__l2::<lambda_1>_>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_148ab0c03:
      pppFVar6 = pppFVar6 + -3;
    } while (&local_328 <= pppFVar6);
  }
  return;
code_r0x000148ab0b29:
  if ((*ppFVar4)->LoadingRange < (*ppFVar9)->LoadingRange ||
      (*ppFVar4)->LoadingRange == (*ppFVar9)->LoadingRange) goto LAB_148ab0b20;
LAB_148ab0b40:
  do {
    ppFVar7 = ppFVar5;
    ppFVar5 = ppFVar7 + -1;
    if (ppFVar5 <= ppFVar9) break;
  } while ((*ppFVar9)->LoadingRange < (*ppFVar5)->LoadingRange ||
           (*ppFVar9)->LoadingRange == (*ppFVar5)->LoadingRange);
  if (ppFVar4 <= ppFVar5) {
    pFVar10 = *ppFVar4;
    *ppFVar4 = *ppFVar5;
    *ppFVar5 = pFVar10;
    goto LAB_148ab0b20;
  }
  pFVar10 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar5;
  *ppFVar5 = pFVar10;
  if ((longlong)((longlong)ppFVar5 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar6 = ppFVar4;
      pppFVar6[1] = ppFVar8;
      *(int *)(pppFVar6 + 2) = (int)local_338;
      pppFVar6 = pppFVar6 + 3;
    }
    if (ppFVar5 <= ppFVar9 + 1) goto LAB_148ab0c03;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar5) {
      *pppFVar6 = ppFVar9;
      pppFVar6[1] = ppFVar7 + -2;
      *(int *)(pppFVar6 + 2) = (int)local_338;
      pppFVar6 = pppFVar6 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_148ab0c03;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_148ab0bf2;
  goto LAB_148ab0af0;
}

// IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority'::__l15::<lambda_1>_> @ 148ab0d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority_::__l15::<lambda_1>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  UWorldPartitionRuntimeCellData *pUVar2;
  int iVar3;
  UWorldPartitionRuntimeCell **ppUVar4;
  UWorldPartitionRuntimeCell **ppUVar5;
  UWorldPartitionRuntimeCell ***pppUVar6;
  int iVar7;
  UWorldPartitionRuntimeCell **ppUVar8;
  UWorldPartitionRuntimeCell **ppUVar9;
  UWorldPartitionRuntimeCell **ppUVar10;
  float fVar11;
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
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppUVar6 = &local_348;
    do {
      ppUVar4 = pppUVar6[1];
      ppUVar5 = *pppUVar6;
      local_358 = pppUVar6[2];
      iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar5 >> 3) + 1;
      ppUVar10 = ppUVar5;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148ab0e00:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar8 = ppUVar4 + 1;
          pUVar1 = ppUVar10[iVar3 >> 1];
          ppUVar10[iVar3 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar1;
          ppUVar5 = ppUVar10;
LAB_148ab0e30:
          ppUVar5 = ppUVar5 + 1;
          if (ppUVar5 <= ppUVar4) goto code_r0x000148ab0e39;
          goto LAB_148ab0e60;
        }
        for (; ppUVar8 = ppUVar10, ppUVar5 = ppUVar10, ppUVar10 < ppUVar4; ppUVar4 = ppUVar4 + -1) {
          while (ppUVar9 = ppUVar8, ppUVar5 = ppUVar5 + 1, ppUVar5 <= ppUVar4) {
            pUVar2 = ((*ppUVar9)->RuntimeCellData).field0_0x0.DebugPtr;
            iVar7 = (**(code **)(pUVar2->_padding_ + 0x2e0))
                              (pUVar2,((*ppUVar5)->RuntimeCellData).field0_0x0.DebugPtr);
            ppUVar8 = ppUVar5;
            if (-1 < iVar7) {
              ppUVar8 = ppUVar9;
            }
          }
          pUVar1 = *ppUVar9;
          *ppUVar9 = *ppUVar4;
          *ppUVar4 = pUVar1;
        }
        goto LAB_148ab0f3d;
      }
LAB_148ab0f2b:
      HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority_::__l15::<lambda_1>_>
                (ppUVar5,iVar3,param_3,param_4);
LAB_148ab0f3d:
      pppUVar6 = pppUVar6 + -3;
    } while (&local_348 <= pppUVar6);
  }
  return;
code_r0x000148ab0e39:
  pUVar2 = ((*ppUVar10)->RuntimeCellData).field0_0x0.DebugPtr;
  iVar3 = (**(code **)(pUVar2->_padding_ + 0x2e0))
                    (pUVar2,((*ppUVar5)->RuntimeCellData).field0_0x0.DebugPtr);
  if (-1 < iVar3) goto LAB_148ab0e30;
LAB_148ab0e60:
  do {
    ppUVar9 = ppUVar8;
    ppUVar8 = ppUVar9 + -1;
    if (ppUVar8 <= ppUVar10) break;
    pUVar2 = ((*ppUVar8)->RuntimeCellData).field0_0x0.DebugPtr;
    iVar3 = (**(code **)(pUVar2->_padding_ + 0x2e0))
                      (pUVar2,((*ppUVar10)->RuntimeCellData).field0_0x0.DebugPtr);
  } while (-1 < iVar3);
  if (ppUVar5 <= ppUVar8) {
    pUVar1 = *ppUVar5;
    *ppUVar5 = *ppUVar8;
    *ppUVar8 = pUVar1;
    goto LAB_148ab0e30;
  }
  pUVar1 = *ppUVar10;
  iVar7 = iVar7 + -1;
  *ppUVar10 = *ppUVar8;
  *ppUVar8 = pUVar1;
  if ((longlong)((longlong)ppUVar8 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar4 - (longlong)ppUVar5 & 0xfffffffffffffff8U)) {
    if (ppUVar5 < ppUVar4) {
      *pppUVar6 = ppUVar5;
      pppUVar6[1] = ppUVar4;
      *(int *)(pppUVar6 + 2) = iVar7;
      pppUVar6 = pppUVar6 + 3;
    }
    if (ppUVar8 <= ppUVar10 + 1) goto LAB_148ab0f3d;
    ppUVar4 = ppUVar9 + -2;
    ppUVar5 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar8) {
      *pppUVar6 = ppUVar10;
      pppUVar6[1] = ppUVar9 + -2;
      *(int *)(pppUVar6 + 2) = iVar7;
      pppUVar6 = pppUVar6 + 3;
    }
    if (ppUVar4 <= ppUVar5) goto LAB_148ab0f3d;
  }
  iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar5 >> 3) + 1;
  ppUVar10 = ppUVar5;
  if (iVar7 == 0) goto LAB_148ab0f2b;
  goto LAB_148ab0e00;
}

// IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,`UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>_> @ 148ab1010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::GetIntersectingCells_::__l2::<lambda_2>_>
          (UWorldPartitionRuntimeCell **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_2> param_4)

{
  UWorldPartitionRuntimeCell *pUVar1;
  UWorldPartitionRuntimeCell *pUVar2;
  UWorldPartitionRuntimeCellData *pUVar3;
  UWorldPartitionRuntimeCell **ppUVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  FName *pFVar13;
  FName *pFVar14;
  UWorldPartitionRuntimeCell **ppUVar15;
  UWorldPartitionRuntimeCell **ppUVar16;
  UWorldPartitionRuntimeCell ***pppUVar17;
  UWorldPartitionRuntimeCell **ppUVar18;
  UWorldPartitionRuntimeCell **ppUVar19;
  float fVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_418 [32];
  FIdentityFunctor local_3f8;
  int local_3f4;
  UWorldPartitionRuntimeCell **local_3f0;
  UWorldPartitionRuntimeCell ***local_3e8;
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [24];
  UWorldPartitionRuntimeCell **local_3a0;
  UWorldPartitionRuntimeCell **local_398;
  UWorldPartitionRuntimeCell **local_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  if (param_2 < 2) {
    return;
  }
  local_98 = __security_cookie.value ^ (ulonglong)auStack_418;
  local_390 = param_1 + (longlong)param_2 + -1;
  local_3f8 = param_3;
  local_398 = param_1;
  fVar20 = logf((float)param_2 * (float)param_2);
  local_388 = (undefined4)(longlong)fVar20;
  memset(local_380,0,0x2e8);
  dVar8 = __real_7fefffffffffffff;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_3e45798ee2308c3a;
  pppUVar17 = &local_398;
  uVar24 = SUB84(__real_7fefffffffffffff,0);
  uVar25 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
LAB_148ab10f0:
  local_3a0 = pppUVar17[2];
  iVar11 = (int)((longlong)pppUVar17[1] - (longlong)*pppUVar17 >> 3);
  ppUVar15 = pppUVar17[1];
  ppUVar4 = *pppUVar17;
  local_3e8 = pppUVar17;
  local_3f4 = (int)local_3a0;
  while (iVar10 = iVar11 + 1, local_3f0 = ppUVar15, local_3f4 != 0) {
    if (iVar10 < 9) goto joined_r0x000148ab1450;
    if (iVar10 < 0) {
      iVar10 = iVar11 + 2;
    }
    ppUVar18 = ppUVar15 + 1;
    pUVar1 = ppUVar4[iVar10 >> 1];
    ppUVar4[iVar10 >> 1] = *ppUVar4;
    *ppUVar4 = pUVar1;
    ppUVar16 = ppUVar4;
LAB_148ab1160:
    do {
      ppUVar16 = ppUVar16 + 1;
      if (ppUVar15 < ppUVar16) break;
      pUVar1 = *ppUVar4;
      pUVar2 = *ppUVar16;
      pUVar3 = (pUVar1->RuntimeCellData).field0_0x0.DebugPtr;
      iVar11 = (**(code **)(pUVar3->_padding_ + 0x2e0))
                         (pUVar3,(pUVar2->RuntimeCellData).field0_0x0.DebugPtr);
      if (iVar11 == 0) {
        pdVar12 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                  ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                          *)param_4.QueryCache,pUVar2);
        uVar22 = uVar24;
        uVar23 = uVar25;
        if (pdVar12 != (double *)0x0) {
          uVar22 = SUB84(*pdVar12,0);
          uVar23 = (int)((ulonglong)*pdVar12 >> 0x20);
        }
        pdVar12 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                  ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                          *)param_4.QueryCache,pUVar1);
        dVar21 = dVar8;
        if (pdVar12 != (double *)0x0) {
          dVar21 = *pdVar12;
        }
        dVar21 = dVar21 - (double)CONCAT44(uVar23,uVar22);
        if ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar7,SUB84(dVar21,0) & uVar6) <=
            dVar5) {
          pFVar13 = (FName *)(**(code **)(pUVar1->_padding_ + 0x60))(&pUVar1->_padding_,local_3e0);
          pFVar14 = (FName *)(**(code **)(pUVar2->_padding_ + 0x60))(&pUVar2->_padding_,local_3d8);
          iVar11 = ::FName::Compare(pFVar13,pFVar14);
          goto LAB_148ab1209;
        }
        bVar9 = dVar21 < 0.0;
      }
      else {
LAB_148ab1209:
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
    } while (bVar9 == false);
    do {
      ppUVar19 = ppUVar18;
      ppUVar18 = ppUVar19 + -1;
      if (ppUVar18 <= ppUVar4) break;
      pUVar1 = *ppUVar18;
      pUVar2 = *ppUVar4;
      pUVar3 = (pUVar1->RuntimeCellData).field0_0x0.DebugPtr;
      iVar11 = (**(code **)(pUVar3->_padding_ + 0x2e0))
                         (pUVar3,(pUVar2->RuntimeCellData).field0_0x0.DebugPtr);
      if (iVar11 == 0) {
        pdVar12 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                  ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                          *)param_4.QueryCache,pUVar2);
        uVar22 = uVar24;
        uVar23 = uVar25;
        if (pdVar12 != (double *)0x0) {
          uVar22 = SUB84(*pdVar12,0);
          uVar23 = (int)((ulonglong)*pdVar12 >> 0x20);
        }
        pdVar12 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                  ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                          *)param_4.QueryCache,pUVar1);
        dVar21 = dVar8;
        if (pdVar12 != (double *)0x0) {
          dVar21 = *pdVar12;
        }
        dVar21 = dVar21 - (double)CONCAT44(uVar23,uVar22);
        if ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar7,SUB84(dVar21,0) & uVar6) <=
            dVar5) {
          pFVar13 = (FName *)(**(code **)(pUVar1->_padding_ + 0x60))(&pUVar1->_padding_,local_3d0);
          pFVar14 = (FName *)(**(code **)(pUVar2->_padding_ + 0x60))(&pUVar2->_padding_,local_3c8);
          iVar11 = ::FName::Compare(pFVar13,pFVar14);
          goto LAB_148ab12d3;
        }
        bVar9 = dVar21 < 0.0;
      }
      else {
LAB_148ab12d3:
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
    } while (bVar9 == false);
    if (ppUVar16 <= ppUVar18) {
      pUVar1 = *ppUVar16;
      *ppUVar16 = *ppUVar18;
      *ppUVar18 = pUVar1;
      goto LAB_148ab1160;
    }
    pUVar1 = *ppUVar4;
    *ppUVar4 = *ppUVar18;
    local_3f4 = local_3f4 + -1;
    *ppUVar18 = pUVar1;
    param_3 = local_3f8;
    if ((longlong)((longlong)ppUVar18 + (-8 - (longlong)ppUVar4) & 0xfffffffffffffff8U) <
        (longlong)((longlong)ppUVar15 - (longlong)ppUVar16 & 0xfffffffffffffff8U)) {
      if (ppUVar16 < local_3f0) {
        *pppUVar17 = ppUVar16;
        pppUVar17[1] = local_3f0;
        *(int *)(pppUVar17 + 2) = local_3f4;
        pppUVar17 = pppUVar17 + 3;
        local_3e8 = pppUVar17;
      }
      if (ppUVar18 <= ppUVar4 + 1) goto LAB_148ab13be;
      local_3f0 = ppUVar19 + -2;
      ppUVar16 = ppUVar4;
    }
    else {
      if (ppUVar4 + 1 < ppUVar18) {
        *pppUVar17 = ppUVar4;
        pppUVar17[1] = ppUVar19 + -2;
        *(int *)(pppUVar17 + 2) = local_3f4;
        pppUVar17 = pppUVar17 + 3;
        local_3e8 = pppUVar17;
      }
      if (local_3f0 <= ppUVar16) goto LAB_148ab13be;
    }
    iVar11 = (int)((longlong)local_3f0 - (longlong)ppUVar16 >> 3);
    ppUVar15 = local_3f0;
    ppUVar4 = ppUVar16;
  }
  HeapSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::GetIntersectingCells_::__l2::<lambda_2>_>
            (ppUVar4,iVar10,param_3,param_4);
  goto LAB_148ab13be;
joined_r0x000148ab1450:
  for (; ppUVar16 = ppUVar4, ppUVar18 = ppUVar4, ppUVar4 < ppUVar15; ppUVar15 = ppUVar15 + -1) {
    while (ppUVar19 = ppUVar16, ppUVar18 = ppUVar18 + 1, ppUVar18 <= ppUVar15) {
      pUVar1 = *ppUVar19;
      pUVar2 = *ppUVar18;
      pUVar3 = (pUVar1->RuntimeCellData).field0_0x0.DebugPtr;
      iVar11 = (**(code **)(pUVar3->_padding_ + 0x2e0))
                         (pUVar3,(pUVar2->RuntimeCellData).field0_0x0.DebugPtr);
      if (iVar11 == 0) {
        pdVar12 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                  ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                          *)param_4.QueryCache,pUVar2);
        uVar22 = uVar24;
        uVar23 = uVar25;
        if (pdVar12 != (double *)0x0) {
          uVar22 = SUB84(*pdVar12,0);
          uVar23 = (int)((ulonglong)*pdVar12 >> 0x20);
        }
        pdVar12 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                  ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                          *)param_4.QueryCache,pUVar1);
        dVar21 = dVar8;
        if (pdVar12 != (double *)0x0) {
          dVar21 = *pdVar12;
        }
        dVar21 = dVar21 - (double)CONCAT44(uVar23,uVar22);
        if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar7,
                                     SUB84(dVar21,0) & uVar6)) {
          bVar9 = dVar21 < 0.0;
        }
        else {
          pFVar13 = (FName *)(**(code **)(pUVar1->_padding_ + 0x60))(&pUVar1->_padding_,local_3c0);
          pFVar14 = (FName *)(**(code **)(pUVar2->_padding_ + 0x60))(&pUVar2->_padding_,local_3b8);
          iVar11 = ::FName::Compare(pFVar13,pFVar14);
          bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
        }
      }
      else {
        bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
      }
      ppUVar16 = ppUVar18;
      if (bVar9 == false) {
        ppUVar16 = ppUVar19;
      }
    }
    pUVar1 = *ppUVar19;
    *ppUVar19 = *ppUVar15;
    *ppUVar15 = pUVar1;
    pppUVar17 = local_3e8;
    param_3 = local_3f8;
  }
LAB_148ab13be:
  pppUVar17 = pppUVar17 + -3;
  if (pppUVar17 < &local_398) {
    return;
  }
  goto LAB_148ab10f0;
}

// Launch<`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::__l14::<lambda_1>_> @ 148ab1570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_UWorldPartitionStreamingPolicy::OnStreamingStateUpdated_::__l14::<lambda_1>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FMutex *this_00;
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  FTaskBase *pFVar7;
  atomic<unsigned___int64> aVar8;
  FTaskBase *this_01;
  bool local_res8 [8];
  
  if (((this->Pimpl).Reference != (FTaskBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x77,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = FMemory::Malloc(0x3c0,0x40);
  this_01 = (FTaskBase *)0x0;
  if (pFVar7 != (FTaskBase *)0x0) {
    pFVar7->Pipe = (FPipe *)0x0;
    pFVar7->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    pFVar7->RefCount = (atomic<unsigned_int>)0x2;
    pFVar7->NumLocks = (atomic<unsigned_int>)0x1;
    (pFVar7->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
    pFVar7->TaskTriggered = (atomic<bool>)0x0;
    pFVar7->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    aVar8 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    pFVar7->TraceId = aVar8;
    this_00 = &(pFVar7->Prerequisites).Mutex;
    (pFVar7->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (pFVar7->Prerequisites).Prerequisites.ArrayNum = 0;
    (pFVar7->Prerequisites).Prerequisites.ArrayMax = 1;
    this_00->State = (atomic<unsigned_char>)0x1;
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xe800000000000020;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x30 = 0;
    (pFVar7->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (pFVar7->Subsequents).Subsequents.ArrayNum = 0;
    (pFVar7->Subsequents).Subsequents.ArrayMax = 1;
    (pFVar7->Subsequents).bIsClosed = (atomic<bool>)0x0;
    (pFVar7->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    pFVar7->_padding_ =
         (longlong)
         &TExecutableTaskBase<`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::`14'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init(pFVar7,param_1,param_3,param_4,param_5);
    UWorldPartitionStreamingPolicy::FUpdateStreamingStateParams::FUpdateStreamingStateParams
              ((FUpdateStreamingStateParams *)&pFVar7[1]._padding_,&param_2->InputParams);
    *(UWorldPartitionStreamingPolicy **)&pFVar7[4].StateChangeEvent = param_2->__this;
    pFVar7->_padding_ =
         (longlong)
         &TExecutableTask<`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::`14'::<lambda_1>_>
          ::_vftable_;
    this_01 = pFVar7;
  }
  pFVar7 = (this->Pimpl).Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  (this->Pimpl).Reference = this_01;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar6 = TranslatePriority((ETaskPriority)
                              ((ulonglong)*(undefined8 *)&(this_01->LowLevelTask).field_0x38 >> 0x3b
                              ) & (Inherit|Default),this_01->ExtendedPriority);
    TaskTrace::Launched((ulong64)this_01->TraceId,
                        (wchar_t *)
                        (*(ulonglong *)&(this_01->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff),
                        true,TVar6,0x3c0);
  }
  local_res8[0] = true;
  FTaskBase::TryUnlock(this_01,local_res8);
  return;
}

// LocalDrawBox<`FSpatialHashStreamingGrid::Draw2D'::__l2::<lambda_1>_> @ 148ab17a0

void __thiscall
FWorldPartitionDraw2DContext::LocalDrawBox<_FSpatialHashStreamingGrid::Draw2D_::__l2::<lambda_1>_>
          (FWorldPartitionDraw2DContext *this,TBox2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,FLinearColor *param_4,float param_5,<lambda_1> param_6)

{
  double dVar1;
  <lambda_1> <Var2;
  undefined1 local_res18 [8];
  undefined1 local_78 [16];
  TVector2<double> local_68;
  TVector2<double> local_58;
  TVector2<double> local_48;
  TVector2<double> local_38 [2];
  
  <Var2.InWorldToScreen = param_6.InWorldToScreen;
  local_res18[0] = 1;
  (**(code **)param_6.InWorldToScreen)
            (local_38,*(undefined8 *)&(param_6.InWorldToScreen)->field_0x8,param_2,local_res18);
  param_6.InWorldToScreen._0_1_ = 1;
  local_78._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_78._0_8_ = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  (**(code **)<Var2.InWorldToScreen)
            (&local_68,*(undefined8 *)&(<Var2.InWorldToScreen)->field_0x8,local_78,&param_6);
  param_6.InWorldToScreen._0_1_ = 1;
  dVar1 = (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  local_78._8_4_ = SUB84(dVar1,0);
  local_78._0_8_ = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  (**(code **)<Var2.InWorldToScreen)
            (&local_58,*(undefined8 *)&(<Var2.InWorldToScreen)->field_0x8,local_78,&param_6);
  local_78._8_8_ = (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  local_78._0_8_ = (param_2->field0_0x0)._s_0.X;
  param_6.InWorldToScreen._0_1_ = 1;
  (**(code **)<Var2.InWorldToScreen)
            (&local_48,*(undefined8 *)&(<Var2.InWorldToScreen)->field_0x8,local_78,&param_6);
  PushDrawSegment(this,param_1,local_38,&local_68,param_4,param_5);
  PushDrawSegment(this,param_1,&local_68,&local_58,param_4,param_5);
  PushDrawSegment(this,param_1,&local_58,&local_48,param_4,param_5);
  PushDrawSegment(this,param_1,local_38,&local_48,param_4,param_5);
  return;
}

// LocalDrawTile<`FSpatialHashStreamingGrid::Draw2D'::__l2::<lambda_1>_> @ 148ab1920

void __thiscall
FWorldPartitionDraw2DContext::LocalDrawTile<_FSpatialHashStreamingGrid::Draw2D_::__l2::<lambda_1>_>
          (FWorldPartitionDraw2DContext *this,TBox2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,FLinearColor *param_4,<lambda_1> param_5)

{
  double dVar1;
  <lambda_1> <Var2;
  undefined1 local_res18 [8];
  undefined1 local_68 [16];
  TVector2<double> local_58;
  TVector2<double> local_48;
  TVector2<double> local_38;
  TVector2<double> local_28;
  
  <Var2.InWorldToScreen = param_5.InWorldToScreen;
  local_res18[0] = 1;
  (**(code **)param_5.InWorldToScreen)
            (&local_28,*(undefined8 *)&(param_5.InWorldToScreen)->field_0x8,param_2,local_res18);
  param_5.InWorldToScreen._0_1_ = 1;
  local_68._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_68._0_8_ = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  (**(code **)<Var2.InWorldToScreen)
            (&local_38,*(undefined8 *)&(<Var2.InWorldToScreen)->field_0x8,local_68,&param_5);
  param_5.InWorldToScreen._0_1_ = 1;
  dVar1 = (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  local_68._8_4_ = SUB84(dVar1,0);
  local_68._0_8_ = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  local_68._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  (**(code **)<Var2.InWorldToScreen)
            (&local_48,*(undefined8 *)&(<Var2.InWorldToScreen)->field_0x8,local_68,&param_5);
  local_68._8_8_ = (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  local_68._0_8_ = (param_2->field0_0x0)._s_0.X;
  param_5.InWorldToScreen._0_1_ = 1;
  (**(code **)<Var2.InWorldToScreen)
            (&local_58,*(undefined8 *)&(<Var2.InWorldToScreen)->field_0x8,local_68,&param_5);
  PushDrawTile(this,param_1,&local_28,&local_38,&local_48,&local_58,param_4);
  return;
}

// NewObject<URuntimeHashExternalStreamingObjectBase> @ 148ab1b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URuntimeHashExternalStreamingObjectBase * __cdecl
NewObject<URuntimeHashExternalStreamingObjectBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  URuntimeHashExternalStreamingObjectBase *pUVar2;
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
  pUVar1 = URuntimeHashExternalStreamingObjectBase::StaticClass();
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
  pUVar2 = (URuntimeHashExternalStreamingObjectBase *)
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

// NewObject<UWorldPartitionLevelStreamingDynamic> @ 148ab1c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldPartitionLevelStreamingDynamic * __cdecl
NewObject<UWorldPartitionLevelStreamingDynamic>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UWorldPartitionLevelStreamingDynamic *pUVar2;
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
  pUVar1 = UWorldPartitionLevelStreamingDynamic::StaticClass();
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
  pUVar2 = (UWorldPartitionLevelStreamingDynamic *)
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

// NewObject<UWorldPartitionRuntimeCell> @ 148ab1d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldPartitionRuntimeCell * __cdecl
NewObject<UWorldPartitionRuntimeCell>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UWorldPartitionRuntimeCell *pUVar2;
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
  pUVar1 = UWorldPartitionRuntimeCell::StaticClass();
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
  pUVar2 = (UWorldPartitionRuntimeCell *)
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

// NewObject<UWorldPartitionRuntimeCellData> @ 148ab1e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWorldPartitionRuntimeCellData * __cdecl
NewObject<UWorldPartitionRuntimeCellData>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UWorldPartitionRuntimeCellData *pUVar2;
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
  pUVar1 = UWorldPartitionRuntimeCellData::StaticClass();
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
  pUVar2 = (UWorldPartitionRuntimeCellData *)
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

// NoneOf<TArray<FName,TSizedDefaultAllocator<32>_>,`UWorldPartitionRuntimeCell::HasAnyDataLayer'::__l2::<lambda_1>_> @ 148ab1f40

bool __cdecl
Algo::
NoneOf<TArray<FName,TSizedDefaultAllocator<32>_>,_UWorldPartitionRuntimeCell::HasAnyDataLayer_::__l2::<lambda_1>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
    if (*(int *)&((param_2.InDataLayers)->Elements).field_0x8 !=
        *(int *)&((param_2.InDataLayers)->Elements).field_0x34) {
      FVar4 = ((param_2.InDataLayers)->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&(param_2.InDataLayers)->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar4;
      }
      iVar6 = *(int *)((longlong)FVar7 +
                      (ulonglong)
                      ((param_2.InDataLayers)->HashSize - 1U &
                      (int)((ulonglong)lVar3 >> 0x20) + uVar5) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&(param_2.InDataLayers)->Elements + (longlong)iVar6 * 0x10)
              == lVar3) {
            return false;
          }
          iVar6 = *(int *)(*(longlong *)&(param_2.InDataLayers)->Elements + 8 +
                          (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return true;
}

// NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,`FWorldPartitionDebugHelper::<lambda_26>::operator()'::__l2::<lambda_2>_> @ 148ab2010

bool __cdecl
Algo::
NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,_FWorldPartitionDebugHelper::<lambda_26>::operator()_::__l2::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_2> param_2)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) {
      return true;
    }
    iVar3 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(&local_res18,iVar3,*(wchar_t **)pFVar4,FNAME_Add);
    if (*pFVar2 == (FName)0x0) break;
    pFVar4 = pFVar4 + 0x10;
  }
  return false;
}

// StaticEnum<enum_EStreamingSourcePriority> @ 148ab2d20

UEnum * __cdecl StaticEnum<enum_EStreamingSourcePriority>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourcePriority,(UObject *)pUVar1,
                       L"EStreamingSourcePriority");
  }
  return Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton;
}

// StaticEnum<enum_EStreamingSourceTargetBehavior> @ 148ab2d60

UEnum * __cdecl StaticEnum<enum_EStreamingSourceTargetBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior,(UObject *)pUVar1,
                       L"EStreamingSourceTargetBehavior");
  }
  return Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton;
}

// StaticEnum<enum_EStreamingSourceTargetState> @ 148ab2da0

UEnum * __cdecl StaticEnum<enum_EStreamingSourceTargetState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourceTargetState,(UObject *)pUVar1,
                       L"EStreamingSourceTargetState");
  }
  return Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton;
}

// StaticEnum<enum_EWorldPartitionCVarProjectDefaultOverride> @ 148ab2de0

UEnum * __cdecl StaticEnum<enum_EWorldPartitionCVarProjectDefaultOverride>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride,
                       (UObject *)pUVar1,L"EWorldPartitionCVarProjectDefaultOverride");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.OuterSingleton;
}

// StaticEnum<enum_EWorldPartitionRuntimeCellState> @ 148ab2e20

UEnum * __cdecl StaticEnum<enum_EWorldPartitionRuntimeCellState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState,(UObject *)pUVar1,
                       L"EWorldPartitionRuntimeCellState");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton;
}

// StaticEnum<enum_EWorldPartitionStreamingPerformance> @ 148ab2e60

UEnum * __cdecl StaticEnum<enum_EWorldPartitionStreamingPerformance>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance,
                       (UObject *)pUVar1,L"EWorldPartitionStreamingPerformance");
  }
  return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton;
}

// get<1,TTuple<FName,FWorldPartitionRuntimeContainer>_const_&> @ 148ab31a0

FWorldPartitionRuntimeContainer * __cdecl
get<1,TTuple<FName,FWorldPartitionRuntimeContainer>_const_&>
          (TTuple<FName,FWorldPartitionRuntimeContainer> *param_1)

{
  return (FWorldPartitionRuntimeContainer *)&param_1->field_0x8;
}

// get<0,TTuple<FName,FWorldPartitionRuntimeContainer>_const_&> @ 148ab31b0

FName * __cdecl
get<0,TTuple<FName,FWorldPartitionRuntimeContainer>_const_&>
          (TTuple<FName,FWorldPartitionRuntimeContainer> *param_1)

{
  return (FName *)param_1;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 148ab6850

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,this,0,(int *)((longlong)this + 0xc));
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

// operator<< @ 148ab8300

FArchive * __cdecl operator<<(FArchive *param_1,FWorldPartitionReplaySample *param_2)

{
  AWorldPartitionReplay *pAVar1;
  undefined8 uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FArchive *pFVar8;
  FName *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  FName local_res10;
  FString local_48;
  
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->StreamingSourceNameIndices);
  TArrayPrivateFriend::Serialize<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->StreamingSources);
  if ((param_1->field_0x28 & 1) == 0) {
    return param_1;
  }
  if (((param_2->StreamingSourceNameIndices).ArrayNum != (param_2->StreamingSources).ArrayNum) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ReplaySample.StreamingSourceNameIndices.Num() == ReplaySample.StreamingSources.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                         ,0x3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FArchive *)(*pcVar4)();
    return pFVar8;
  }
  uVar12 = 0;
  if (0 < (param_2->StreamingSources).ArrayNum) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar11 = ~uVar12 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar12 < (param_2->StreamingSourceNameIndices).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
      uVar6 = *(uint *)((param_2->StreamingSourceNameIndices).AllocatorInstance.Data + lVar13);
      if (((int)uVar6 < 0) ||
         (pAVar1 = param_2->Replay, (pAVar1->StreamingSourceNames).ArrayNum <= (int)uVar6)) {
        FString::PrintfImpl(&local_48,L"Source {%i}");
        iVar10 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        pFVar9 = FName::FName(&local_res10,iVar10,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                              FNAME_Add);
        FVar3 = *pFVar9;
        uVar6 = 0;
        if ((int)uVar12 < (param_2->StreamingSources).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        *(FName *)((param_2->StreamingSources).AllocatorInstance.Data + lVar14) = FVar3;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar7 = 0;
        if ((int)uVar6 < (pAVar1->StreamingSourceNames).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        uVar2 = *(undefined8 *)
                 ((pAVar1->StreamingSourceNames).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
        uVar6 = 0;
        if ((int)uVar12 < (param_2->StreamingSources).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        *(undefined8 *)((param_2->StreamingSources).AllocatorInstance.Data + lVar14) = uVar2;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
      lVar14 = lVar14 + 0x160;
    } while ((int)uVar12 < (param_2->StreamingSources).ArrayNum);
  }
  return param_1;
}

// operator<< @ 148ab85a0

FArchive * __cdecl operator<<(FArchive *param_1,FWorldPartitionReplayStreamingSource *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  uint local_res8 [2];
  
  UE::Math::operator<<(param_1,(TVector<double> *)&param_2->field_0x8);
  UE::Math::operator<<(param_1,(TRotator<double> *)&param_2->field_0x20);
  puVar1 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x38,1);
  }
  else {
    param_2->field_0x38 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(param_2->field_0x39 != '\0');
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      param_2->field_0x39 = local_res8[0] != 0;
    }
  }
  else {
    param_2->field_0x39 = *piVar2 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x3a,1);
  }
  else {
    param_2->field_0x3a = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  UE::Math::operator<<(param_1,(TVector<double> *)&param_2->field_0x40);
  return param_1;
}

// operator() @ 148ab87b0

void __thiscall
```FSpatialHashStreamingGrid::GetCells'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this,UWorldPartitionRuntimeCell *param_1)

{
  double dVar1;
  TSet<TTuple<UWorldPartitionRuntimeCell_const_*,double>,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  TPairInitializer<UWorldPartitionRuntimeCell_const_*_const_&,double_const_&> local_res8;
  UWorldPartitionRuntimeCell *local_res18;
  double local_res20;
  UWorldPartitionRuntimeCell **local_88;
  double *local_80;
  undefined1 local_78 [24];
  double local_60;
  UWorldPartitionRuntimeCell **local_58;
  double local_50;
  TRangeBound<double> local_48 [2];
  
  local_res8.Value = (double *)param_1;
  if (**(char **)this != '\0') {
    lVar3 = (**(code **)(param_1->_padding_ + 0x50))(&param_1->_padding_);
    local_88 = (UWorldPartitionRuntimeCell **)CONCAT71(local_88._1_7_,'\x01');
    local_78[0] = '\x01';
    dVar1 = *(double *)(lVar3 + 0x28);
    local_58 = local_88;
    lVar3 = (**(code **)(param_1->_padding_ + 0x50))(&param_1->_padding_);
    local_88 = (UWorldPartitionRuntimeCell **)CONCAT71(local_88._1_7_,'\x01');
    local_50 = *(double *)(lVar3 + 0x10);
    local_48[0]._0_8_ = local_78._0_8_;
    local_78[0] = '\x01';
    dVar6 = *(double *)(*(longlong *)((longlong)this + 8) + 0x10);
    local_60 = *(double *)(*(longlong *)((longlong)this + 8) + 0x18);
    local_78._8_8_ = dVar6 - local_60;
    local_60 = local_60 + dVar6;
    local_78._16_8_ = local_88;
    local_48[0].Value = dVar1;
    bVar2 = TRange<double>::Overlaps((TRange<double> *)&local_58,(TRange<double> *)local_78);
    if (!bVar2) {
      return;
    }
  }
  bVar2 = `FSpatialHashStreamingGrid::GetCells'::__l2::<lambda_1>::operator()
                    (*(void **)((longlong)this + 0x10),param_1,
                     *(FWorldPartitionStreamingQuerySource **)((longlong)this + 0x18));
  if (bVar2) {
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
              (*(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x20),(UWorldPartitionRuntimeCell **)&local_res8,
               (bool *)&local_res8.Value);
    this_00 = (TSet<TTuple<UWorldPartitionRuntimeCell_const_*,double>,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>,FDefaultSetAllocator>
               *)**(undefined8 **)((longlong)this + 0x28);
    if (this_00 !=
        (TSet<TTuple<UWorldPartitionRuntimeCell_const_*,double>,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>,FDefaultSetAllocator>
         *)0x0) {
      pdVar5 = *(double **)((longlong)this + 8);
      local_res18 = param_1;
      pdVar4 = (double *)(**(code **)(param_1->_padding_ + 0x50))();
      dVar6 = (*pdVar4 + pdVar4[3]) * __real_3fe0000000000000 - *pdVar5;
      dVar1 = (pdVar4[4] + pdVar4[1]) * __real_3fe0000000000000 - pdVar5[1];
      dVar1 = dVar1 * dVar1 + dVar6 * dVar6;
      local_res20 = dVar1;
      pdVar5 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
               ::Find((TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
                       *)this_00,local_res18);
      if (pdVar5 == (double *)0x0) {
        local_88 = &local_res18;
        local_80 = &local_res20;
        TSet<TTuple<UWorldPartitionRuntimeCell_const_*,double>,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UWorldPartitionRuntimeCell_const_*_const_&,double_const_&>_>
                  (this_00,&local_res8,(bool *)&local_88);
      }
      else {
        dVar6 = *pdVar5;
        if (dVar1 <= *pdVar5) {
          dVar6 = dVar1;
        }
        *pdVar5 = dVar6;
      }
    }
  }
  return;
}

// operator() @ 148ab8990

void __thiscall
``UWorldPartitionRuntimeSpatialHash::UnregisterWorldAssetStreaming'::__l5::<lambda_1>::operator()'::
__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  FName FVar1;
  code *pcVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FString *pFVar4;
  wchar_t *pwVar5;
  EUniqueObjectNameOptions local_res10 [2];
  FName local_res18 [2];
  undefined4 uVar6;
  FString local_18;
  
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
  FVar1.Number = *(uint *)&param_1->field_0x14;
  local_res10[0] = *(EUniqueObjectNameOptions *)CONCAT44(extraout_var,FVar3.Value);
  local_res10[1] = 0;
  uVar6 = 0;
  MakeUniqueObjectName((UObject *)local_res18,*(UClass **)&param_1->field_0x20,FVar1,local_res10[0])
  ;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x170);
  pFVar4 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(param_1,pwVar5,0,0x34,uVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148ab8a30

void __thiscall
``FSpatialHashStreamingGrid::GetCells'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,TIntVector3<__int64> *param_1)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
  *pTVar9;
  char local_res18 [8];
  code **local_res20;
  code *local_78;
  undefined8 *local_70;
  code *local_68;
  code ***local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  FSpatialHashStreamingGrid *local_20;
  
  local_res18[0] = '\0';
  if ((GFilterRuntimeSpatialHashGridLevel == -1) ||
     ((longlong)GFilterRuntimeSpatialHashGridLevel == (param_1->field0_0x0)._s_0.Z)) {
    local_58 = *(undefined8 *)((longlong)this + 8);
    local_20 = *(FSpatialHashStreamingGrid **)this;
    local_50 = *(undefined8 *)((longlong)this + 0x10);
    local_48 = *(undefined8 *)((longlong)this + 0x18);
    local_40 = *(undefined8 *)((longlong)this + 0x20);
    local_38 = *(undefined8 *)((longlong)this + 0x28);
    local_30 = *(undefined8 *)((longlong)this + 0x30);
    local_28 = local_res18;
    local_70 = &local_58;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<```FSpatialHashStreamingGrid::GetCells'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_const_*>
               ::Call;
    local_res20 = &local_78;
    local_60 = &local_res20;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FSpatialHashStreamingGrid::ForEachRuntimeCell'::__l2::<lambda_1>,void,FSpatialHashStreamingGridLayerCell_const_*>
               ::Call;
    FSpatialHashStreamingGrid::ForEachLayerCell
              (local_20,param_1,
               (TFunctionRef<void___cdecl(FSpatialHashStreamingGridLayerCell_const_*)> *)&local_68);
    if (local_res18[0] != '\0') {
      this_00 = *(longlong **)((longlong)this + 0x38);
      uVar6 = FCrc::MemCrc_DEPRECATED(param_1,0x18,0);
      iVar7 = TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<UE::Math::TIntVector3<__int64>_>(this_00,uVar6,param_1);
      if ((iVar7 == -1) || (lVar8 = (longlong)iVar7 * 0x30 + *this_00, lVar8 == 0)) {
        pTVar9 = TMapBase<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
                 ::EmplaceByHash<UE::Math::TIntVector3<__int64>_const_&>(this_00,uVar6,param_1);
      }
      else {
        pTVar9 = (TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
                  *)(lVar8 + 0x18);
      }
      pFVar1 = *(FScriptContainerElement **)((longlong)this + 0x40);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)pTVar9->ArrayMax * 0x48)) {
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
      iVar7 = pTVar9->ArrayNum;
      if (iVar7 == pTVar9->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      lVar8 = (longlong)iVar7;
      pTVar9->ArrayNum = iVar7 + 1;
      uVar4 = *(undefined8 *)(pFVar1 + 8);
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar8 * 0x48) = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar1 + 0x18);
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x10) = *(undefined8 *)(pFVar1 + 0x10);
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x10 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar1 + 0x28);
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x20) = *(undefined8 *)(pFVar1 + 0x20);
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x20 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pFVar1 + 0x38);
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x30) = *(undefined8 *)(pFVar1 + 0x30);
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x30 + 8) = uVar4;
      *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x40) = *(undefined8 *)(pFVar1 + 0x40);
    }
  }
  return;
}

// operator() @ 148aba1a0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
```FSpatialHashStreamingGrid::GetCells'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()'::__l5::<lambda_1>::operator()(void *this,UWorldPartitionRuntimeCell *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  EDataLayerRuntimeState EVar5;
  longlong lVar6;
  FWorldPartitionStreamingSource *pFVar7;
  undefined7 uStack_97;
  undefined7 uStack_87;
  undefined7 uStack_77;
  undefined7 uStack_67;
  TRange<double> local_58;
  TRange<double> local_38;
  
  if (**(char **)this != '\0') {
    lVar6 = (**(code **)(param_1->_padding_ + 0x50))(&param_1->_padding_);
    dVar1 = *(double *)(lVar6 + 0x28);
    local_38.LowerBound._1_7_ = uStack_97;
    local_38.LowerBound.Type.Value = '\x01';
    lVar6 = (**(code **)(param_1->_padding_ + 0x50))(&param_1->_padding_);
    local_38.LowerBound.Value = *(double *)(lVar6 + 0x10);
    local_38.UpperBound._1_7_ = uStack_87;
    local_38.UpperBound.Type.Value = '\x01';
    dVar2 = *(double *)(*(longlong *)((longlong)this + 8) + 0x10);
    local_58.UpperBound.Value = *(double *)(*(longlong *)((longlong)this + 8) + 0x18);
    local_58.LowerBound._1_7_ = uStack_77;
    local_58.LowerBound.Type.Value = '\x01';
    local_58.LowerBound.Value = dVar2 - local_58.UpperBound.Value;
    local_58.UpperBound.Value = local_58.UpperBound.Value + dVar2;
    local_58.UpperBound._1_7_ = uStack_67;
    local_58.UpperBound.Type.Value = '\x01';
    local_38.UpperBound.Value = dVar1;
    bVar4 = TRange<double>::Overlaps(&local_38,&local_58);
    if (!bVar4) {
      return;
    }
  }
  EVar5 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                    (param_1,*(FWorldPartitionStreamingContext **)((longlong)this + 0x10));
  if (EVar5 != Unloaded) {
    if (EVar5 == Loaded) {
      pFVar7 = *(FWorldPartitionStreamingSource **)((longlong)this + 0x20);
    }
    else {
      if (EVar5 != Activated) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                           ,0x1ba,L"");
        if (!bVar4) {
          return;
        }
code_r0x000148aba32c:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = *(FWorldPartitionStreamingSource **)((longlong)this + 0x20);
      if (pFVar7->TargetState != Loaded) {
        if (pFVar7->TargetState == Activated) {
          UWorldPartitionRuntimeHash::FStreamingSourceCells::AddCell
                    (*(FStreamingSourceCells **)((longlong)this + 0x28),param_1,pFVar7,
                     *(FSphericalSector **)((longlong)this + 8),
                     *(FWorldPartitionStreamingContext **)((longlong)this + 0x10));
          if ((*(char *)(*(longlong *)((longlong)this + 0x38) + 0x90) == '\0') &&
             (*(char *)(*(longlong *)((longlong)this + 0x38) + 0x91) != '\0')) {
            **(undefined1 **)((longlong)this + 0x30) = 1;
            return;
          }
          **(undefined1 **)((longlong)this + 0x30) = 0;
          return;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                           ,0x1b4,L"");
        if (!bVar4) {
          return;
        }
        goto code_r0x000148aba32c;
      }
    }
    UWorldPartitionRuntimeHash::FStreamingSourceCells::AddCell
              (*(FStreamingSourceCells **)((longlong)this + 0x18),param_1,pFVar7,
               *(FSphericalSector **)((longlong)this + 8),
               *(FWorldPartitionStreamingContext **)((longlong)this + 0x10));
  }
  return;
}

// operator() @ 148abb7e0

void __thiscall
``FSpatialHashStreamingGrid::GetCells'::__l9::<lambda_2>::operator()'::__l9::<lambda_1>::operator()
          (void *this,TIntVector3<__int64> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1->field0_0x0)._s_0.Z < (longlong)**(int **)this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntersectingCoords.Z >= ParentLevelIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                       ,0x1dd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((longlong)this + 8);
  uVar4 = FCrc::MemCrc_DEPRECATED(param_1,0x18,0);
  iVar5 = TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TIntVector3<__int64>_>(pvVar1,uVar4,param_1);
  if (iVar5 == -1) {
    pvVar1 = *(void **)((longlong)this + 0x10);
    uVar4 = FCrc::MemCrc_DEPRECATED(param_1,0x18,0);
    iVar5 = TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<UE::Math::TIntVector3<__int64>_>(pvVar1,uVar4,param_1);
    if (iVar5 == -1) {
      TMapBase<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
      ::
      Emplace<UE::Math::TIntVector3<__int64>_const_&,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&>
                (*(void **)((longlong)this + 0x10),param_1,
                 (TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
                  *)(*(longlong *)((longlong)this + 0x18) + 0x18));
      **(undefined1 **)((longlong)this + 0x20) = 1;
    }
  }
  return;
}

// operator() @ 148abb8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FWorldPartitionDebugHelper::<lambda_26>::operator()'::__l12::<lambda_1>::operator()
          (void *this,UWorldPartition *param_1)

{
  FScriptContainerElement *pFVar1;
  UDataLayerManager *this_00;
  bool *pbVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined1 local_28 [8];
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> local_20;
  
  this_00 = UWorldPartition::GetDataLayerManager(param_1);
  if (this_00 != (UDataLayerManager *)0x0) {
    UDataLayerManager::ConvertArgsToDataLayers
              (this_00,&local_20,*(TArray<FString,TSizedDefaultAllocator<32>_> **)this);
    iVar3 = local_20.ArrayNum;
    pFVar1 = local_20.AllocatorInstance.Data + (longlong)iVar3 * 8;
    FVar4.Data = local_20.AllocatorInstance.Data;
    while( true ) {
      if (local_20.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UDataLayerInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar4.Data == pFVar1) break;
      pbVar2 = (bool *)(**(code **)(**(longlong **)FVar4.Data + 800))
                                 (*(longlong **)FVar4.Data,local_28);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (&FWorldPartitionDebugHelper::DebugDataLayerFilter,&local_res20,pbVar2);
      FVar4.Data = FVar4.Data + 8;
    }
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
  }
  return true;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148abe170

/* [thunk]:public: virtual void * __ptr64 __cdecl URuntimeHashExternalStreamingObjectBase::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URuntimeHashExternalStreamingObjectBase::_vector_deleting_destructor__adjustor_40__
          (URuntimeHashExternalStreamingObjectBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URuntimeHashExternalStreamingObjectBase *)&this[-1].DataLayerInstances.Hash,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 148abe180

/* [thunk]:public: virtual void * __ptr64 __cdecl URuntimeHashExternalStreamingObjectBase::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
URuntimeHashExternalStreamingObjectBase::_vector_deleting_destructor__adjustor_48__
          (URuntimeHashExternalStreamingObjectBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URuntimeHashExternalStreamingObjectBase *)
                      &this[-1].DataLayerInstances.Elements.field_0x30,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148abe190

/* [thunk]:public: virtual void * __ptr64 __cdecl
   URuntimeSpatialHashExternalStreamingObject::`vector deleting destructor'`adjustor{40}' (unsigned
   int) __ptr64 */

void * __thiscall
URuntimeSpatialHashExternalStreamingObject::_vector_deleting_destructor__adjustor_40__
          (URuntimeSpatialHashExternalStreamingObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URuntimeSpatialHashExternalStreamingObject *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 148abe1a0

/* [thunk]:public: virtual void * __ptr64 __cdecl
   URuntimeSpatialHashExternalStreamingObject::`vector deleting destructor'`adjustor{48}' (unsigned
   int) __ptr64 */

void * __thiscall
URuntimeSpatialHashExternalStreamingObject::_vector_deleting_destructor__adjustor_48__
          (URuntimeSpatialHashExternalStreamingObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URuntimeSpatialHashExternalStreamingObject *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148abe1b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionRuntimeCell::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionRuntimeCell::_vector_deleting_destructor__adjustor_40__
          (UWorldPartitionRuntimeCell *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWorldPartitionRuntimeCell *)&this[-1].CellGuid.D,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 148abe1c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionRuntimeCell::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionRuntimeCell::_vector_deleting_destructor__adjustor_48__
          (UWorldPartitionRuntimeCell *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWorldPartitionRuntimeCell *)&this[-1].CellGuid.B,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148abe1d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionRuntimeLevelStreamingCell::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::_vector_deleting_destructor__adjustor_40__
          (UWorldPartitionRuntimeLevelStreamingCell *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWorldPartitionRuntimeLevelStreamingCell *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 148abe1e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionRuntimeLevelStreamingCell::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::_vector_deleting_destructor__adjustor_48__
          (UWorldPartitionRuntimeLevelStreamingCell *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWorldPartitionRuntimeLevelStreamingCell *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148abe1f0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::__l14::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe250

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::__l14::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe290

void * __thiscall
ASpatialHashRuntimeGridInfo::_scalar_deleting_destructor_
          (ASpatialHashRuntimeGridInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ASpatialHashRuntimeGridInfo__6B_;
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe2f0

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
AWorldPartitionAutoInstancedActor::_scalar_deleting_destructor_
          (AWorldPartitionAutoInstancedActor *this,uint param_1)

{
  *(undefined ***)this = &___7AWorldPartitionAutoInstancedActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe350

void * __thiscall
AWorldPartitionMiniMap::_scalar_deleting_destructor_(AWorldPartitionMiniMap *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7AWorldPartitionMiniMap__6B_;
  (this->ExcludedDataLayers).HashSize = 0;
  FVar1 = (this->ExcludedDataLayers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerAsset>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerAsset>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedDataLayers).Elements);
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe3f0

void * __thiscall
AWorldPartitionMiniMapVolume::_scalar_deleting_destructor_
          (AWorldPartitionMiniMapVolume *this,uint param_1)

{
  *(undefined ***)this = &___7AWorldPartitionMiniMapVolume__6B_;
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

// `scalar_deleting_destructor' @ 148abe450

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
AWorldPartitionReplay::_scalar_deleting_destructor_(AWorldPartitionReplay *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWorldPartitionReplay__6B_;
  DestructItems<FWorldPartitionReplaySample,int>
            ((FWorldPartitionReplaySample *)(this->ReplaySamples).AllocatorInstance.Data,
             (this->ReplaySamples).ArrayNum);
  pFVar1 = (this->ReplaySamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamingSourceNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe4f0

void * __thiscall
IWorldPartitionCell::_scalar_deleting_destructor_(IWorldPartitionCell *this,uint param_1)

{
  *this = (IWorldPartitionCell)&___7IWorldPartitionCell__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe530

void * __thiscall
IWorldPartitionCookPackageObject::_scalar_deleting_destructor_
          (IWorldPartitionCookPackageObject *this,uint param_1)

{
  *this = (IWorldPartitionCookPackageObject)&___7IWorldPartitionCookPackageObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe570

void * __thiscall
URuntimeHashExternalStreamingObjectBase::_scalar_deleting_destructor_
          (URuntimeHashExternalStreamingObjectBase *this,uint param_1)

{
  ~URuntimeHashExternalStreamingObjectBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe5d0

void * __thiscall
URuntimeSpatialHashExternalStreamingObject::_scalar_deleting_destructor_
          (URuntimeSpatialHashExternalStreamingObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  DestructItems<FSpatialHashStreamingGrid,int>
            ((FSpatialHashStreamingGrid *)(this->StreamingGrids).AllocatorInstance.Data,
             (this->StreamingGrids).ArrayNum);
  pFVar1 = (this->StreamingGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe670

void * __thiscall
UWorldPartitionCell::_scalar_deleting_destructor_(UWorldPartitionCell *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe6d0

void * __thiscall
UWorldPartitionEditorHash::_scalar_deleting_destructor_
          (UWorldPartitionEditorHash *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionEditorHash__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe730

void * __thiscall
UWorldPartitionEditorPerProjectUserSettings::_scalar_deleting_destructor_
          (UWorldPartitionEditorPerProjectUserSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionEditorPerProjectUserSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe790

void * __thiscall
UWorldPartitionEditorSpatialHash::_scalar_deleting_destructor_
          (UWorldPartitionEditorSpatialHash *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionEditorHash__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe7f0

void * __thiscall
UWorldPartitionLevelStreamingDynamic::_scalar_deleting_destructor_
          (UWorldPartitionLevelStreamingDynamic *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingDynamic__6B_;
  pvVar1 = *(void **)&(this->OuterWorldPartition).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  ULevelStreamingDynamic::~ULevelStreamingDynamic((ULevelStreamingDynamic *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UWorldPartitionLevelStreamingPolicy::_scalar_deleting_destructor_
          (UWorldPartitionLevelStreamingPolicy *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionLevelStreamingPolicy__6B_;
  *(undefined4 *)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubObjectsToExternalStreamingObjectsRemapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubObjectsToExternalStreamingObjectsRemapping);
  pFVar2 = (this->ExternalStreamingObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContainerResolver).Containers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainerResolver);
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubObjectsToCellRemapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubObjectsToCellRemapping);
  UWorldPartitionStreamingPolicy::~UWorldPartitionStreamingPolicy
            ((UWorldPartitionStreamingPolicy *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x568);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abe970

void * __thiscall
UWorldPartitionRuntimeCell::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCell *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCell__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  pFVar1 = (this->DataLayers).DataLayers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IWorldPartitionCookPackageObject__6B_;
  this->_padding_ = (longlong)&___7IWorldPartitionCell__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abea10

void * __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellDataSpatialHash *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataSpatialHash__6B_;
  pFVar1 = (this->CachedInstersectingShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSourceSquaredDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSourcePriorityWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abeac0

void * __thiscall
UWorldPartitionRuntimeCellTransformer::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellTransformer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellTransformer__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abeb20

void * __thiscall
UWorldPartitionRuntimeCellTransformerISM::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellTransformerISM *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformer__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abeb80

void * __thiscall
UWorldPartitionRuntimeCellTransformerLog::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellTransformerLog *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformer__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abebe0

void * __thiscall
UWorldPartitionRuntimeCellTransformerSettings::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeCellTransformerSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionRuntimeCellTransformerSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abec40

void * __thiscall
UWorldPartitionRuntimeHash::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeHash *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHash__6B_;
  (this->InjectedExternalStreamingObjects).HashSize = 0;
  FVar1 = (this->InjectedExternalStreamingObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InjectedExternalStreamingObjects).Elements);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abecd0

void * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeLevelStreamingCell *this,uint param_1)

{
  this->_padding_ = (longlong)&UWorldPartitionRuntimeCell::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UWorldPartitionRuntimeCell::_vftable__for__IWorldPartitionCell__;
  this->_padding_ =
       (longlong)&UWorldPartitionRuntimeCell::_vftable__for__IWorldPartitionCookPackageObject__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IWorldPartitionCookPackageObject__6B_;
  this->_padding_ = (longlong)&___7IWorldPartitionCell__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abed70

void * __thiscall
UWorldPartitionRuntimeSpatialHash::_scalar_deleting_destructor_
          (UWorldPartitionRuntimeSpatialHash *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeSpatialHash__6B_;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldAssetStreamingObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldAssetStreamingObjects);
  *(undefined4 *)&(this->NameToGridMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameToGridMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSpatialHashStreamingGrid_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSpatialHashStreamingGrid_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSpatialHashStreamingGrid_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToGridMapping);
  DestructItems<FSpatialHashStreamingGrid,int>
            ((FSpatialHashStreamingGrid *)(this->StreamingGrids).AllocatorInstance.Data,
             (this->StreamingGrids).ArrayNum);
  pFVar2 = (this->StreamingGrids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHash__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abee80

void * __thiscall
UWorldPartitionSettings::_scalar_deleting_destructor_(UWorldPartitionSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionSettings__6B_;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EHLODLayerType,FHLODLayerTypeUnsupportedActorClasses>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EHLODLayerType,FHLODLayerTypeUnsupportedActorClasses>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UnsupportedActorClassesPerHLODLayerType);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148abef20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UWorldPartitionStreamingPolicy::_scalar_deleting_destructor_
          (UWorldPartitionStreamingPolicy *this,uint param_1)

{
  ~UWorldPartitionStreamingPolicy(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorHash @ 148ac9700

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorPerProjectUserSettings @ 148ac9710

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorPerProjectUserSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorSpatialHash @ 148ac9720

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorSpatialHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingDynamic @ 148ac9730

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingDynamic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingPolicy @ 148ac9740

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingPolicy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMap @ 148ac9750

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMap(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMapVolume @ 148ac9760

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMapVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionPropertyOverride @ 148ac9770

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionPropertyOverride(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionReplay @ 148ac9780

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionReplay(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCell @ 148ac9790

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCell(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellData @ 148ac97a0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellDataSpatialHash @ 148ac97b0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellDataSpatialHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellInterface @ 148ac97c0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformer @ 148ac97d0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformerISM @ 148ac97e0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformerISM(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformerLog @ 148ac97f0

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellTransformerLog(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeContainerResolving @ 148ac9800

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeContainerResolving(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHash @ 148ac9810

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeLevelStreamingCell @ 148ac9820

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeLevelStreamingCell(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHash @ 148ac9830

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHashGridPreviewer @ 148ac9840

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHashGridPreviewer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionSettings @ 148ac9850

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingPolicy @ 148ac9860

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingPolicy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingSource @ 148ac9870

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingSource(void)

{
  return;
}

// EnumToString @ 148ac9880

wchar_t * __cdecl EnumToString(EWorldPartitionStreamingPerformance param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Good) {
    return L"Good";
  }
  if (param_1 == Slow) {
    return L"Slow";
  }
  if (param_1 == Critical) {
    return L"Critical";
  }
  if (param_1 != Immediate) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7206290042707247038>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x42,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Unknown";
  }
  return L"Immediate";
}

// GetTypeHash @ 148ad1c50

uint __cdecl GetTypeHash(FStreamingSourceShape *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  
  bVar1 = param_1->bUseGridLoadingRange;
  uVar6 = (uint)bVar1 * 0x40 + (int)param_1->LoadingRangeScale + (byte)(bVar1 >> 2) + 0x9e3779b9 ^
          (uint)bVar1;
  uVar6 = uVar6 * 0x40 + (int)param_1->Radius + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  uVar2 = *(undefined8 *)&(param_1->Location).field0_0x0;
  uVar6 = (uVar6 >> 2) + param_1->bIsSector + 0x9e3779b9 + uVar6 * 0x40 ^ uVar6;
  uVar6 = uVar6 * 0x40 + (int)param_1->SectorAngle + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  uVar3 = *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + 8);
  uVar6 = uVar6 * 0x40 + (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20) * 0x17 +
          (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + 0x10);
  uVar6 = uVar6 * 0x40 + (int)uVar3 + (int)((ulonglong)uVar3 >> 0x20) * 0x17 +
          (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  dVar4 = (param_1->Rotation).Pitch;
  uVar6 = uVar6 * 0x40 + (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20) * 0x17 +
          (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  dVar5 = (param_1->Rotation).Yaw;
  uVar6 = uVar6 * 0x40 + SUB84(dVar4,0) + (int)((ulonglong)dVar4 >> 0x20) * 0x17 +
          (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  dVar4 = (param_1->Rotation).Roll;
  uVar6 = uVar6 * 0x40 + SUB84(dVar5,0) + (int)((ulonglong)dVar5 >> 0x20) * 0x17 +
          (uVar6 >> 2) + 0x9e3779b9 ^ uVar6;
  return (uVar6 >> 2) + 0x9e3779b9 +
         uVar6 * 0x40 + SUB84(dVar4,0) + (int)((ulonglong)dVar4 >> 0x20) * 0x17 ^ uVar6;
}

// Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister @ 148ae0d90

UClass * __cdecl Z_Construct_UClass_ASpatialHashRuntimeGridInfo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpatialHashRuntimeGridInfo",
               &Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton,
               ASpatialHashRuntimeGridInfo::StaticRegisterNativesASpatialHashRuntimeGridInfo,0x2c8,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpatialHashRuntimeGridInfo>,
               InternalVTableHelperCtorCaller<ASpatialHashRuntimeGridInfo>,local_res8,
               AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionAutoInstancedActor_NoRegister @ 148ae0e50

UClass * __cdecl Z_Construct_UClass_AWorldPartitionAutoInstancedActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionAutoInstancedActor",
               &Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton,
               AWorldPartitionAutoInstancedActor::
               StaticRegisterNativesAWorldPartitionAutoInstancedActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionAutoInstancedActor>,
               InternalVTableHelperCtorCaller<AWorldPartitionAutoInstancedActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionAutoInstancedActor.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionMiniMapVolume_NoRegister @ 148ae0f10

UClass * __cdecl Z_Construct_UClass_AWorldPartitionMiniMapVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionMiniMapVolume",
               &Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton,
               AWorldPartitionMiniMapVolume::StaticRegisterNativesAWorldPartitionMiniMapVolume,0x2f8
               ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionMiniMapVolume>,
               InternalVTableHelperCtorCaller<AWorldPartitionMiniMapVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionMiniMap_NoRegister @ 148ae0fd0

UClass * __cdecl Z_Construct_UClass_AWorldPartitionMiniMap_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionMiniMap",
               &Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton,
               AWorldPartitionMiniMap::StaticRegisterNativesAWorldPartitionMiniMap,0x390,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionMiniMap>,
               InternalVTableHelperCtorCaller<AWorldPartitionMiniMap>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionReplay_NoRegister @ 148ae1090

UClass * __cdecl Z_Construct_UClass_AWorldPartitionReplay_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionReplay",
               &Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton,
               AWorldPartitionReplay::StaticRegisterNativesAWorldPartitionReplay,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionReplay>,
               InternalVTableHelperCtorCaller<AWorldPartitionReplay>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionReplay.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionCell_NoRegister @ 148ae1150

UClass * __cdecl Z_Construct_UClass_UWorldPartitionCell_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCell",
               &Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton,
               UWorldPartitionCell::StaticRegisterNativesUWorldPartitionCell,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionCell>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister @ 148ae1210

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorPerProjectUserSettings",
               &Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.
                InnerSingleton,
               UWorldPartitionEditorPerProjectUserSettings::
               StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UWorldPartitionEditorPerProjectUserSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorPerProjectUserSettings>,
               aFStackX_8,UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister @ 148ae1220

UClass * __cdecl Z_Construct_UClass_UWorldPartitionEditorSpatialHash_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton,
               UWorldPartitionEditorSpatialHash::
               StaticRegisterNativesUWorldPartitionEditorSpatialHash,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionEditorSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorSpatialHash>,local_res8,
               UWorldPartitionEditorHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorSpatialHash.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister @ 148ae12e0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionLevelStreamingPolicy",
               &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton,
               UWorldPartitionLevelStreamingPolicy::
               StaticRegisterNativesUWorldPartitionLevelStreamingPolicy,0x568,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionLevelStreamingPolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionLevelStreamingPolicy>,local_res8,
               UWorldPartitionStreamingPolicy::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionPropertyOverride_NoRegister @ 148ae13a0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionPropertyOverride_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionPropertyOverride",
               &Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton,
               UWorldPartitionPropertyOverride::StaticRegisterNativesUWorldPartitionPropertyOverride
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionPropertyOverride>,
               InternalVTableHelperCtorCaller<UWorldPartitionPropertyOverride>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionPropertyOverride.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister @ 148ae1450

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellDataSpatialHash_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellDataSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton,
               UWorldPartitionRuntimeCellDataSpatialHash::
               StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellDataSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataSpatialHash>,local_res8,
               UWorldPartitionRuntimeCellData::StaticClass,UWorldPartitionRuntimeCell::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_NoRegister @ 148ae1510

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerISM_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerISM",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton,
               UWorldPartitionRuntimeCellTransformerISM::
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerISM,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerISM>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerISM>,local_res8,
               UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerISM.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister @ 148ae15d0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerLog_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerLog",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton,
               UWorldPartitionRuntimeCellTransformerLog::
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerLog,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerLog>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerLog>,local_res8,
               UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerLog.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_NoRegister @ 148ae1690

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformerSettings",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.
                InnerSingleton,
               UWorldPartitionRuntimeCellTransformerSettings::
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformerSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformerSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformerSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformerSettings.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister @ 148ae1740

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeCellTransformer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellTransformer",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton,
               UWorldPartitionRuntimeCellTransformer::
               StaticRegisterNativesUWorldPartitionRuntimeCellTransformer,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellTransformer>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellTransformer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellTransformer.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister @ 148ae17f0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton,
               UWorldPartitionRuntimeSpatialHash::
               StaticRegisterNativesUWorldPartitionRuntimeSpatialHash,0x138,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeSpatialHash>,local_res8,
               UWorldPartitionRuntimeHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionSettings_NoRegister @ 148ae18b0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionSettings",
               &Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton,
               UWorldPartitionSettings::StaticRegisterNativesUWorldPartitionSettings,0xb0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister @ 148ae1970

UClass * __cdecl Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStreamingPolicy",
               &Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton,
               UWorldPartitionStreamingPolicy::StaticRegisterNativesUWorldPartitionStreamingPolicy,
               0x450,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionStreamingPolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionStreamingPolicy>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EStreamingSourcePriority @ 148ae1a30

UEnum * __cdecl Z_Construct_UEnum_Engine_EStreamingSourcePriority(void)

{
  if (Z_Registration_Info_UEnum_EStreamingSourcePriority.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamingSourcePriority.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamingSourcePriority.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior @ 148ae1a70

UEnum * __cdecl Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior(void)

{
  if (Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EStreamingSourceTargetState @ 148ae1ab0

UEnum * __cdecl Z_Construct_UEnum_Engine_EStreamingSourceTargetState(void)

{
  if (Z_Registration_Info_UEnum_EStreamingSourceTargetState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamingSourceTargetState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamingSourceTargetState.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride @ 148ae1af0

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride(void)

{
  if (Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldPartitionCVarProjectDefaultOverride_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EWorldPartitionCVarProjectDefaultOverride.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState @ 148ae1b30

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState(void)

{
  if (Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorPropertyOverride @ 148ae1b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorPropertyOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorPropertyOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorPropertyOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorPropertyOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorPropertyOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorPropertyOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FContainerPropertyOverride @ 148ae1bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FContainerPropertyOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FContainerPropertyOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FContainerPropertyOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FContainerPropertyOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FContainerPropertyOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FContainerPropertyOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable @ 148ae1c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyOverrideReferenceTable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyOverrideReferenceTable.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyOverrideReferenceTable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyOverrideReferenceTable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyOverrideReferenceTable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStreamingSourceShape @ 148ae1cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamingSourceShape(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamingSourceShape.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamingSourceShape.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamingSourceShape.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FStreamingSourceShape.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSubObjectPropertyOverride @ 148ae1d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubObjectPropertyOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubObjectPropertyOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubObjectPropertyOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubObjectPropertyOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubObjectPropertyOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubObjectPropertyOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings @ 148ae1df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionPerWorldSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionPerWorldSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionPerWorldSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionPerWorldSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo @ 148ae1e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo.InnerSingleton
               ,&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping @ 148ae1ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride @ 148ae1f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeCellPropertyOverride.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer @ 148ae1ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource @ 148ae2070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.InnerSingleton
               ,&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.InnerSingleton;
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

// CVarAsyncUpdateStreamingStateEnabled'' @ 150409110

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionStreamingPolicy::
CVarAsyncUpdateStreamingStateEnabled__(void)

{
  UWorldPartitionStreamingPolicy::CVarAsyncUpdateStreamingStateEnabled._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &UWorldPartitionStreamingPolicy::CVarAsyncUpdateStreamingStateEnabled);
  return;
}

// CVarDebugDisplaySpeedUnit'' @ 150409130

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionStreamingSource::CVarDebugDisplaySpeedUnit__(void)

{
  FWorldPartitionStreamingSource::CVarDebugDisplaySpeedUnit._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionStreamingSource::CVarDebugDisplaySpeedUnit);
  return;
}

// CVarForceUpdateFrameCount'' @ 150409150

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionStreamingPolicy::CVarForceUpdateFrameCount__(void)

{
  UWorldPartitionStreamingPolicy::CVarForceUpdateFrameCount._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartitionStreamingPolicy::CVarForceUpdateFrameCount);
  return;
}

// CVarLocationQuantization'' @ 150409170

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionStreamingSource::CVarLocationQuantization__(void)

{
  FWorldPartitionStreamingSource::CVarLocationQuantization._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionStreamingSource::CVarLocationQuantization);
  return;
}

// CVarRotationQuantization'' @ 150409190

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionStreamingSource::CVarRotationQuantization__(void)

{
  FWorldPartitionStreamingSource::CVarRotationQuantization._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionStreamingSource::CVarRotationQuantization);
  return;
}

// CVarUpdateOptimEnabled'' @ 1504091b0

void __cdecl
`dynamic_atexit_destructor_for_'UWorldPartitionStreamingPolicy::CVarUpdateOptimEnabled__(void)

{
  UWorldPartitionStreamingPolicy::CVarUpdateOptimEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UWorldPartitionStreamingPolicy::CVarUpdateOptimEnabled);
  return;
}

// DebugCellNameFilter'' @ 1504091d0

void __cdecl `dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugCellNameFilter__(void)

{
  DestructItems<FString,int>
            ((FString *)FWorldPartitionDebugHelper::DebugCellNameFilter.AllocatorInstance.Data,
             FWorldPartitionDebugHelper::DebugCellNameFilter.ArrayNum);
  if (FWorldPartitionDebugHelper::DebugCellNameFilter.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FWorldPartitionDebugHelper::DebugCellNameFilter.AllocatorInstance.Data);
    return;
  }
  return;
}

// DebugDataLayerFilter'' @ 150409210

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugDataLayerFilter__(void)

{
  FWorldPartitionDebugHelper::DebugDataLayerFilter.HashSize = 0;
  if (FWorldPartitionDebugHelper::DebugDataLayerFilter.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FWorldPartitionDebugHelper::DebugDataLayerFilter.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FWorldPartitionDebugHelper::DebugDataLayerFilter.Elements);
  return;
}

// DebugFilterByCellNameCommand'' @ 150409250

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugFilterByCellNameCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionDebugHelper::DebugFilterByCellNameCommand);
  return;
}

// DebugFilterByDataLayerCommand'' @ 150409270

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugFilterByDataLayerCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionDebugHelper::DebugFilterByDataLayerCommand);
  return;
}

// DebugFilterByRuntimeHashGridNameCommand'' @ 150409290

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::
DebugFilterByRuntimeHashGridNameCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &FWorldPartitionDebugHelper::DebugFilterByRuntimeHashGridNameCommand);
  return;
}

// DebugFilterByStreamingStatusCommand'' @ 1504092b0

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugFilterByStreamingStatusCommand__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionDebugHelper::DebugFilterByStreamingStatusCommand)
  ;
  return;
}

// DebugRuntimeHashFilter'' @ 1504092d0

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugRuntimeHashFilter__(void)

{
  FWorldPartitionDebugHelper::DebugRuntimeHashFilter.HashSize = 0;
  if (FWorldPartitionDebugHelper::DebugRuntimeHashFilter.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FWorldPartitionDebugHelper::DebugRuntimeHashFilter.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FWorldPartitionDebugHelper::DebugRuntimeHashFilter.Elements);
  return;
}

// DebugStreamingStatusFilter'' @ 150409310

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DebugStreamingStatusFilter__(void)

{
  FWorldPartitionDebugHelper::DebugStreamingStatusFilter.HashSize = 0;
  if (FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FWorldPartitionDebugHelper::DebugStreamingStatusFilter.Hash.SecondaryData)
    ;
  }
  TSparseArray<TSparseSetElement<enum_EStreamingStatus>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EStreamingStatus>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FWorldPartitionDebugHelper::DebugStreamingStatusFilter);
  return;
}

// DrawContentBundlesCommand'' @ 150409350

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::DrawContentBundlesCommand__(void)

{
  FWorldPartitionDebugHelper::DrawContentBundlesCommand._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FWorldPartitionDebugHelper::DrawContentBundlesCommand);
  return;
}

// OverriddenLoadingRanges'' @ 150409370

void __cdecl
`dynamic_atexit_destructor_for_'FSpatialHashStreamingGrid::OverriddenLoadingRanges__(void)

{
  FSpatialHashStreamingGrid::OverriddenLoadingRanges._72_4_ = 0;
  if (FSpatialHashStreamingGrid::OverriddenLoadingRanges._64_8_ != 0) {
    FMemory::Free((void *)FSpatialHashStreamingGrid::OverriddenLoadingRanges._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSpatialHashStreamingGrid::OverriddenLoadingRanges);
  return;
}

// OverrideLoadingRangeCommand'' @ 1504093b0

void __cdecl
`dynamic_atexit_destructor_for_'FSpatialHashStreamingGrid::OverrideLoadingRangeCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FSpatialHashStreamingGrid::OverrideLoadingRangeCommand);
  return;
}

// ShowRuntimeSpatialHashCellStreamingPriorityModeCommand'' @ 1504093d0

void __cdecl
`dynamic_atexit_destructor_for_'FWorldPartitionDebugHelper::
ShowRuntimeSpatialHashCellStreamingPriorityModeCommand__(void)

{
  FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityModeCommand._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityModeCommand);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlockOnSlowStreaming'' @ 1504093f0

void __cdecl _dynamic_atexit_destructor_for__CVarBlockOnSlowStreaming__(void)

{
  CVarBlockOnSlowStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlockOnSlowStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlockOnSlowStreamingRatio'' @ 150409410

void __cdecl _dynamic_atexit_destructor_for__CVarBlockOnSlowStreamingRatio__(void)

{
  CVarBlockOnSlowStreamingRatio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBlockOnSlowStreamingRatio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBlockOnSlowStreamingWarningFactor'' @ 150409430

void __cdecl _dynamic_atexit_destructor_for__CVarBlockOnSlowStreamingWarningFactor__(void)

{
  CVarBlockOnSlowStreamingWarningFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBlockOnSlowStreamingWarningFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisplayStreamingPerformanceForNonBlockingStreaming'' @ 150409450

void __cdecl
_dynamic_atexit_destructor_for__CVarDisplayStreamingPerformanceForNonBlockingStreaming__(void)

{
  CVarDisplayStreamingPerformanceForNonBlockingStreaming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDisplayStreamingPerformanceForNonBlockingStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFilterRuntimeSpatialHashGridLevel'' @ 150409470

void __cdecl _dynamic_atexit_destructor_for__CVarFilterRuntimeSpatialHashGridLevel__(void)

{
  CVarFilterRuntimeSpatialHashGridLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFilterRuntimeSpatialHashGridLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceRuntimeSpatialHashZCulling'' @ 150409490

void __cdecl _dynamic_atexit_destructor_for__CVarForceRuntimeSpatialHashZCulling__(void)

{
  CVarForceRuntimeSpatialHashZCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceRuntimeSpatialHashZCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordReplayStreamingSources'' @ 1504094b0

void __cdecl _dynamic_atexit_destructor_for__CVarRecordReplayStreamingSources__(void)

{
  CVarRecordReplayStreamingSources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecordReplayStreamingSources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance'' @ 1504094d0

void __cdecl
_dynamic_atexit_destructor_for__CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance__
          (void)

{
  CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarRuntimeSpatialHashCellToSourceAngleContributionToCellImportance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeSpatialHashSortUsingCellExtent'' @ 1504094f0

void __cdecl _dynamic_atexit_destructor_for__CVarRuntimeSpatialHashSortUsingCellExtent__(void)

{
  CVarRuntimeSpatialHashSortUsingCellExtent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRuntimeSpatialHashSortUsingCellExtent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeSpatialHashSortUsingCellPriority'' @ 150409510

void __cdecl _dynamic_atexit_destructor_for__CVarRuntimeSpatialHashSortUsingCellPriority__(void)

{
  CVarRuntimeSpatialHashSortUsingCellPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRuntimeSpatialHashSortUsingCellPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarServerDisallowStreamingOutDataLayers'' @ 150409530

void __cdecl _dynamic_atexit_destructor_for__CVarServerDisallowStreamingOutDataLayers__(void)

{
  CVarServerDisallowStreamingOutDataLayers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarServerDisallowStreamingOutDataLayers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowRuntimeSpatialHashGridLevel'' @ 150409550

void __cdecl _dynamic_atexit_destructor_for__CVarShowRuntimeSpatialHashGridLevel__(void)

{
  CVarShowRuntimeSpatialHashGridLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowRuntimeSpatialHashGridLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowRuntimeSpatialHashGridLevelCount'' @ 150409570

void __cdecl _dynamic_atexit_destructor_for__CVarShowRuntimeSpatialHashGridLevelCount__(void)

{
  CVarShowRuntimeSpatialHashGridLevelCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShowRuntimeSpatialHashGridLevelCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlowStreamingRatio'' @ 150409590

void __cdecl _dynamic_atexit_destructor_for__CVarSlowStreamingRatio__(void)

{
  CVarSlowStreamingRatio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlowStreamingRatio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlowStreamingWarningFactor'' @ 1504095b0

void __cdecl _dynamic_atexit_destructor_for__CVarSlowStreamingWarningFactor__(void)

{
  CVarSlowStreamingWarningFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlowStreamingWarningFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseReplayStreamingSources'' @ 1504095d0

void __cdecl _dynamic_atexit_destructor_for__CVarUseReplayStreamingSources__(void)

{
  CVarUseReplayStreamingSources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseReplayStreamingSources);
  return;
}

// `dynamic_atexit_destructor_for_'Colors'' @ 1504095f0

void __cdecl
`UWorldPartitionRuntimeLevelStreamingCell::GetDebugColor'::__l8::
_dynamic_atexit_destructor_for__Colors__(void)

{
  ForElementType<FLinearColor> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = Colors.AllocatorInstance.SecondaryData;
  if (Colors.AllocatorInstance.SecondaryData == (ForElementType<FLinearColor>)0x0) {
    return;
  }
  if (Colors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 150409610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UDataLayerManager::GetDataLayerInstances<FName>'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _EmptyArray;
  if (_EmptyArray == (void *)0x0) {
    return;
  }
  if (_EmptyArray != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyArray'' @ 150409630

void __cdecl
`FDataLayerInstanceNames::GetNonExternalDataLayers'::__l2::
_dynamic_atexit_destructor_for__EmptyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
               ::__l2::EmptyArray.AllocatorInstance.Data;
  if (`public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
      ::__l2::EmptyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_class_TArrayView<FName_const_,int>___cdecl_FDataLayerInstanceNames::GetNonExternalDataLayers(void)const___ptr64'
      ::__l2::EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GOverrideRuntimeSpatialHashLoadingRangeName'' @ 150409650

void __cdecl _dynamic_atexit_destructor_for__GOverrideRuntimeSpatialHashLoadingRangeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GOverrideRuntimeSpatialHashLoadingRangeName.Data.AllocatorInstance.Data;
  if (GOverrideRuntimeSpatialHashLoadingRangeName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GOverrideRuntimeSpatialHashLoadingRangeName.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'GServerDisallowStreamingOutDataLayersString'' @ 150409670

void __cdecl _dynamic_atexit_destructor_for__GServerDisallowStreamingOutDataLayersString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GServerDisallowStreamingOutDataLayersString.Data.AllocatorInstance.Data;
  if (GServerDisallowStreamingOutDataLayersString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GServerDisallowStreamingOutDataLayersString.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'LogWorldPartition'' @ 150409690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWorldPartition__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWorldPartition);
  return;
}

// operator() @ 150536070

bool __thiscall
``UWorldPartitionRuntimeSpatialHash::GetNameToGridMapping'::__l5::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5839936091150350459>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5839936091150350459>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505360d7;
    }
  }
  bVar2 = false;
LAB_1505360d7:
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

