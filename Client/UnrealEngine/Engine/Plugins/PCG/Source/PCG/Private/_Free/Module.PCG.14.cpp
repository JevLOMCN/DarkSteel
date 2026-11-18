// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 554

// NoPin'' @ 1411ad390

void __cdecl `dynamic_initializer_for_'FPCGGraphTaskInput::NoPin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__);
  return;
}

// PositionCurve'' @ 1411ad3b0

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1411ad3d0

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1411ad3f0

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1411ad410

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'CVarDebugDrawTexturePrimingBounds'' @ 1411ad430

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarDebugDrawTexturePrimingBounds__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDebugDrawTexturePrimingBounds,
             L"pcg.VirtualTexturePriming.DebugDrawTexturePrimingBounds",local_res8,
             L"Draws debug boxes to indicate regions where PCG is requesting virtual texture priming."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugDrawTexturePrimingBounds__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDebugOverlay'' @ 1411ad480

void __cdecl PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarEnableDebugOverlay__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableDebugOverlay,L"pcg.RuntimeGeneration.EnableDebugOverlay",local_res8,
             L"Display screen overlay with runtime generation statistics.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDebugOverlay__);
  return;
}

// `dynamic_initializer_for_'CVarEnableVirtualTexturePriming'' @ 1411ad4d0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarEnableVirtualTexturePriming__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableVirtualTexturePriming,L"pcg.VirtualTexturePriming.Enable",local_res8,
             L"Enable priming of virtual textures for PCG Components which request it.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableVirtualTexturePriming__);
  return;
}

// `dynamic_initializer_for_'CVarEnableWorldStreamingQueries'' @ 1411ad520

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarEnableWorldStreamingQueries__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableWorldStreamingQueries,L"pcg.RuntimeGeneration.EnableWorldStreamingQueries",
             local_res8,
             L"Checks that the world is streamed in before triggering generation of local (partitioned) components."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableWorldStreamingQueries__);
  return;
}

// `dynamic_initializer_for_'CVarForceLandscapeCacheToNeverSerialize'' @ 1411ad570

void __cdecl
PCGWorldActor::_dynamic_initializer_for__CVarForceLandscapeCacheToNeverSerialize__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarForceLandscapeCacheToNeverSerialize,L"pcg.ForceLandscapeCacheNeverSerialized",
             local_res8,L"Changes the landscape serialization mode to Never Serialize on load.",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceLandscapeCacheToNeverSerialize__);
  return;
}

// `dynamic_initializer_for_'CVarForceReleaseResourcesOnGenerate'' @ 1411ad5c0

void __cdecl _dynamic_initializer_for__CVarForceReleaseResourcesOnGenerate__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarForceReleaseResourcesOnGenerate,L"pcg.ForceReleaseResourcesOnGenerate",local_res8,
             L"Purges all tracked generated resources on generate",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceReleaseResourcesOnGenerate__);
  return;
}

// `dynamic_initializer_for_'CVarFramesBeforeFirstGenerate'' @ 1411ad610

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarFramesBeforeFirstGenerate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFramesBeforeFirstGenerate,L"pcg.RuntimeGeneration.FramesBeforeFirstGenerate",
             local_res8,
             L"Waits this many engine ticks before allowing runtime gen to schedule generation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFramesBeforeFirstGenerate__);
  return;
}

// `dynamic_initializer_for_'CVarHideActorsFromOutliner'' @ 1411ad660

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarHideActorsFromOutliner__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  bool local_res8 [8];
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHideActorsFromOutliner,L"pcg.RuntimeGeneration.HideActorsFromOutliner",local_res8,
             L"Hides partition actors from Scene Outliner.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarHideActorsFromOutliner__);
  return;
}

// `dynamic_initializer_for_'CVarMaxPositionDeltaGridProportion'' @ 1411ad7a0

void __cdecl
PCGRuntimeGenChangeDetection::_dynamic_initializer_for__CVarMaxPositionDeltaGridProportion__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.1;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarMaxPositionDeltaGridProportion,
             L"pcg.RuntimeGeneration.ChangeDetection.MaxPositionDeltaGridProportion",local_res8,
             L"For partitioned components that have one or more grid, use this proportion of the smallest grid as the maximum generation source position delta before triggering a rescan of cells."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxPositionDeltaGridProportion__);
  return;
}

// `dynamic_initializer_for_'CVarMaxPositionDeltaUnbounded'' @ 1411ad7f0

void __cdecl
PCGRuntimeGenChangeDetection::_dynamic_initializer_for__CVarMaxPositionDeltaUnbounded__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 100.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarMaxPositionDeltaUnbounded,
             L"pcg.RuntimeGeneration.ChangeDetection.MaxPositionDeltaUnbounded",local_res8,
             L"The maximum generation source position delta for unbounded generation (cm).",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxPositionDeltaUnbounded__);
  return;
}

// `dynamic_initializer_for_'CVarNumGeneratingComponentsAtSameTime'' @ 1411ad840

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarNumGeneratingComponentsAtSameTime__
          (void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNumGeneratingComponentsAtSameTime,L"pcg.RuntimeGeneration.NumGeneratingComponents"
             ,local_res8,
             L"Defines the maximum number of runtime components that can generate at the same time."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNumGeneratingComponentsAtSameTime__);
  return;
}

// `dynamic_initializer_for_'CVarPCGQuality'' @ 1411ad890

void __cdecl PCGSubsystemConsole::_dynamic_initializer_for__CVarPCGQuality__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  int local_res8 [2];
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPCGQuality,L"pcg.Quality",local_res8,
             L"Selects the quality permutation of PCG which impacts Runtime Quality Branch/Select nodes.\n 0: Low\n 1: Medium\n 2: High\n 3: Epic\n 4: Cinematic\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
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
  atexit(_dynamic_atexit_destructor_for__CVarPCGQuality__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeGenerationBasePoolSize'' @ 1411ad9d0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarRuntimeGenerationBasePoolSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRuntimeGenerationBasePoolSize,L"pcg.RuntimeGeneration.BasePoolSize",local_res8,
             L"Defines the base PartitionActor pool size for the RuntimeGeneration system. Cannot be less than 1."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeGenerationBasePoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeGenerationEnable'' @ 1411ada20

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarRuntimeGenerationEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRuntimeGenerationEnable,L"pcg.RuntimeGeneration.Enable",local_res8,
             L"Enable the RuntimeGeneration system.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnable__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeGenerationEnableChangeDetection'' @ 1411ada70

void __cdecl
PCGRuntimeGenSchedulerHelpers::
_dynamic_initializer_for__CVarRuntimeGenerationEnableChangeDetection__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRuntimeGenerationEnableChangeDetection,
             L"pcg.RuntimeGeneration.EnableChangeDetection",local_res8,
             L"Skips execution of scheduling loop if generation sources and other world state have not changed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnableChangeDetection__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeGenerationEnableDebugging'' @ 1411adac0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarRuntimeGenerationEnableDebugging__
          (void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRuntimeGenerationEnableDebugging,L"pcg.RuntimeGeneration.EnableDebugging",
             local_res8,L"Enable verbose debug logging for the RuntimeGeneration system.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnableDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeGenerationEnablePooling'' @ 1411adb10

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarRuntimeGenerationEnablePooling__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRuntimeGenerationEnablePooling,L"pcg.RuntimeGeneration.EnablePooling",local_res8,
             L"Enable PartitionActor pooling for the RuntimeGeneration system.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnablePooling__);
  return;
}

// `dynamic_initializer_for_'CVarRuntimeGenerationRadiusMultiplier'' @ 1411adb60

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CVarRuntimeGenerationRadiusMultiplier__
          (void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRuntimeGenerationRadiusMultiplier,L"pcg.RuntimeGeneration.GlobalRadiusMultiplier",
             local_res8,L"Global multiplier for generation radius of all runtime gen components.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarRuntimeGenerationRadiusMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarServerRuntimeGenerationMode'' @ 1411adbb0

void __cdecl PCGGenSourceManager::_dynamic_initializer_for__CVarServerRuntimeGenerationMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarServerRuntimeGenerationMode,L"pcg.RuntimeGeneration.Server.Mode",local_res8,
             L"Enable the RuntimeGeneration system on servers. (0 disabled, 1 local generation sources only (listen server), 2 all generation sources"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarServerRuntimeGenerationMode__);
  return;
}

// `dynamic_initializer_for_'CVarWarnOverridePinsCollideWithInputPins'' @ 1411adc00

void __cdecl PCGSettings::_dynamic_initializer_for__CVarWarnOverridePinsCollideWithInputPins__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarWarnOverridePinsCollideWithInputPins,L"pcg.Graph.WarnPinNameCollisions",local_res8
             ,
             L"Enables warnings when there are name collision between pin names and overrides/user parameters."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWarnOverridePinsCollideWithInputPins__);
  return;
}

// `dynamic_initializer_for_'CommandFlushActorPool'' @ 1411adc50

void __cdecl PCGRuntimeGenSchedulerHelpers::_dynamic_initializer_for__CommandFlushActorPool__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CommandFlushActorPool,L"pcg.RuntimeGeneration.FlushActorPool",
             L"Flushes all pooled actors and regenerates all components.",
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
  atexit(_dynamic_atexit_destructor_for__CommandFlushActorPool__);
  return;
}

// `dynamic_initializer_for_'CommandFlushCache'' @ 1411add80

void __cdecl PCGSubsystemConsole::_dynamic_initializer_for__CommandFlushCache__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CommandFlushCache,L"pcg.FlushCache",
             L"Clears the PCG results cache and compiled graph cache.",
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
  atexit(_dynamic_atexit_destructor_for__CommandFlushCache__);
  return;
}

// `dynamic_initializer_for_'CommandRefreshRuntimeGen'' @ 1411adeb0

void __cdecl PCGSubsystemConsole::_dynamic_initializer_for__CommandRefreshRuntimeGen__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CommandRefreshRuntimeGen,L"pcg.RuntimeGeneration.Refresh",
             L"Cleans up and re-generates all GenerateAtRuntime PCG components, including their partition actors."
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
  atexit(_dynamic_atexit_destructor_for__CommandRefreshRuntimeGen__);
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1411adfe0

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1411ae000

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'ControlPointDomainName'' @ 1411ae020

void __cdecl PCGSplineData::_dynamic_initializer_for__ControlPointDomainName__(void)

{
  ::FName::FName(&ControlPointDomainName,"ControlPoints");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1411ae040

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Data__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Data");
  Data.DebugName = *pFVar1;
  Data.Flag = Data;
  Data.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DataDomainName'' @ 1411ae080

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1411ae0a0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Default__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Default");
  Default.DebugName = *pFVar1;
  Default.Flag = Default;
  Default.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1411ae0e0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1411ae100

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1411ae120

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1411ae140

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411ae160

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1411ae180

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1411ae1a0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1411ae1c0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1411ae1e0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1411ae200

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1411ae220

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1411ae240

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Elements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Elements");
  Elements.DebugName = *pFVar1;
  Elements.Flag = Elements;
  Elements.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411ae280

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411ae2a0

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1411ae2c0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1411ae2e0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1411ae300

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Invalid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Invalid");
  Invalid.DebugName = *pFVar1;
  Invalid.Flag = Invalid;
  Invalid.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_PCG'' @ 1411ae340

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_PCG__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_PCG,L"PCG",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 1411ae390

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1411ae3b0

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1411ae3d0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1411ae3f0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LogPCG'' @ 1411ae410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPCG__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPCG,L"LogPCG",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPCG__);
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1411ae450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1411ae490

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1411ae4b0

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1411ae4d0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPCG'' @ 1411ae4f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantPCG__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PCG";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PCG",3);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FPCGModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1411ae540

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1411ae560

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1411ae580

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1411ae5a0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1411ae5c0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1411ae5e0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1411ae600

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PooledPartitionActorName'' @ 1411ae620

void __cdecl
PCGRuntimeGenSchedulerConstants::_dynamic_initializer_for__PooledPartitionActorName__(void)

{
  ::FString::FString(&PooledPartitionActorName,L"PCGRuntimePartitionGridActor_POOLED");
  atexit(_dynamic_atexit_destructor_for__PooledPartitionActorName__);
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1411ae650

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1411ae670

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1411ae690

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1411ae6b0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1411ae6d0

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1411ae6f0

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'UserParameterTagData'' @ 1411ae710

void __cdecl PCGBaseSubgraphConstants::_dynamic_initializer_for__UserParameterTagData__(void)

{
  ::FString::FString(&UserParameterTagData,L"PCGUserParametersTagData");
  atexit(_dynamic_atexit_destructor_for__UserParameterTagData__);
  return;
}

// `dynamic_initializer_for_'VertexDomainName'' @ 1411ae740

void __cdecl PCGPolygon2DData::_dynamic_initializer_for__VertexDomainName__(void)

{
  ::FName::FName(&VertexDomainName,"Vertices");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h__Script_PCG_1651384143'' @ 1411ae760

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h__Script_PCG_1651384143__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h__Script_PCG_Statics
             ::ClassInfo,9,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h__Script_PCG_1754149788'' @ 1411ae7a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h__Script_PCG_1754149788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h__Script_PCG_1672834415'' @ 1411ae7e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h__Script_PCG_1672834415__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGParamData_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h__Script_PCG_2013369927'' @ 1411ae830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h__Script_PCG_2013369927__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h__Script_PCG_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h__Script_PCG_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPointArray_h__Script_PCG_4127460623'' @ 1411ae880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPointArray_h__Script_PCG_4127460623__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPointArray_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPoint_h__Script_PCG_35431896'' @ 1411ae8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPoint_h__Script_PCG_35431896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPoint_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPoint_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h__Script_PCG_1525225607'' @ 1411ae910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h__Script_PCG_1525225607__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h__Script_PCG_2941980173'' @ 1411ae950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h__Script_PCG_2941980173__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h__Script_PCG_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h__Script_PCG_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h__Script_PCG_660154'' @ 1411ae9a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h__Script_PCG_660154__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSubgraph_h__Script_PCG_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGVolume_h__Script_PCG_1887204397'' @ 1411ae9e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGVolume_h__Script_PCG_1887204397__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGVolume_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h__Script_PCG_3483931911'' @ 1411aea20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h__Script_PCG_3483931911__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h__Script_PCG_1655832830'' @ 1411aea60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h__Script_PCG_1655832830__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h__Script_PCG_2893280133'' @ 1411aeaa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h__Script_PCG_2893280133__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourcePlayer_h__Script_PCG_989320306'' @ 1411aeae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourcePlayer_h__Script_PCG_989320306__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourcePlayer_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h__Script_PCG_3927562898'' @ 1411aeb20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h__Script_PCG_3927562898__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_PCGRuntimeGenScheduler_h__Script_PCG_2581857384'' @ 1411aeb60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_PCGRuntimeGenScheduler_h__Script_PCG_2581857384__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_PCGRuntimeGenScheduler_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h__Script_PCG_797801834'' @ 1411aeba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h__Script_PCG_797801834__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h__Script_PCG_585894181'' @ 1411aebf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h__Script_PCG_585894181__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_SpatialAlgo_PCGOctreeQueries_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h__Script_PCG_1539618399'' @ 1411aec30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h__Script_PCG_1539618399__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_IPCGBaseSubsystem_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h__Script_PCG_86445756'' @ 1411aec70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h__Script_PCG_86445756__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGEngineSubsystem_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h__Script_PCG_756820240'' @ 1411aecb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h__Script_PCG_756820240__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Subsystems_PCGSubsystem_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UPCGParamData @ 149f1a750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGParamData(void)

{
  if (Z_Registration_Info_UClass_UPCGParamData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGParamData.OuterSingleton,
               &Z_Construct_UClass_UPCGParamData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGParamData.OuterSingleton;
}

// NewStructOps @ 149f1a790

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoParam,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoParam>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoParam>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoParam>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGParamData_FindMetadataKey @ 149f1a910

UFunction * __cdecl Z_Construct_UFunction_UPCGParamData_FindMetadataKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGOctreeQueries @ 149f1a950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGOctreeQueries(void)

{
  if (Z_Registration_Info_UClass_UPCGOctreeQueries.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGOctreeQueries.OuterSingleton,
               &Z_Construct_UClass_UPCGOctreeQueries_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGOctreeQueries.OuterSingleton;
}

// NewProp_bInDiscardCenter_SetBit @ 149f1aa40

void __cdecl
Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPoint_Statics::NewProp_bInDiscardCenter_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bOutFound_SetBit @ 149f1aa50

void __cdecl
Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPoint_Statics::NewProp_bOutFound_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey @ 149f1aab0

UFunction * __cdecl Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPoint @ 149f1abf0

UFunction * __cdecl Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGParamData_K2_FilterParamsByKey @ 149f1ac30

UFunction * __cdecl Z_Construct_UFunction_UPCGParamData_K2_FilterParamsByKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGParamData_K2_FilterParamsByKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutFound_SetBit @ 149f1ac70

void __cdecl
Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPointFromOtherPoint_Statics::
NewProp_bOutFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UPCGParamData_K2_FilterParamsByName @ 149f1ac80

UFunction * __cdecl Z_Construct_UFunction_UPCGParamData_K2_FilterParamsByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGParamData_K2_FilterParamsByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPointFromOtherPoint @ 149f1acc0

UFunction * __cdecl Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPointFromOtherPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGOctreeQueries_GetClosestPointFromOtherPoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasCachedLastSelector_SetBit @ 149f1ad00

void __cdecl
Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bOutFound_SetBit @ 149f1ad60

void __cdecl
Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPoint_Statics::NewProp_bOutFound_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPoint @ 149f1aef0

UFunction * __cdecl Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPoint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOutFound_SetBit @ 149f1aff0

void __cdecl
Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPointFromOtherPoint_Statics::
NewProp_bOutFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPointFromOtherPoint @ 149f1b000

UFunction * __cdecl Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPointFromOtherPoint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGOctreeQueries_GetFarthestPointFromOtherPoint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGOctreeQueries_GetPointsInsideBounds @ 149f1b050

UFunction * __cdecl Z_Construct_UFunction_UPCGOctreeQueries_GetPointsInsideBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGOctreeQueries_GetPointsInsideBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGOctreeQueries_GetPointsInsideSphere @ 149f1b090

UFunction * __cdecl Z_Construct_UFunction_UPCGOctreeQueries_GetPointsInsideSphere(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGOctreeQueries_GetPointsInsideSphere_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149f1b0d0

void * __cdecl Z_Construct_UScriptStruct_FPCGPointArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPointArray,&UE::CoreUObject::Private::Construct<FPCGPointArray>,&UE::CoreUObject::Private::ConstructForTests<FPCGPointArray>,&UE::CoreUObject::Private::Destruct<FPCGPointArray>,&UE::CoreUObject::Private::SerializeArchive<FPCGPointArray>,&UE::CoreUObject::Private::Copy<FPCGPointArray>,&UE::CoreUObject::Private::Identical<FPCGPointArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGBlueprintPinHelpers @ 149f1b1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBlueprintPinHelpers(void)

{
  if (Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.OuterSingleton,
               &Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.OuterSingleton;
}

// Z_Construct_UClass_UPCGPin @ 149f1b210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPin(void)

{
  if (Z_Registration_Info_UClass_UPCGPin.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPin.OuterSingleton,
               &Z_Construct_UClass_UPCGPin_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPin.OuterSingleton;
}

// Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers @ 149f1b250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers(void)

{
  if (Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.OuterSingleton,
               &Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPinStatus @ 149f1b290

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPinStatus(void)

{
  if (Z_Registration_Info_UEnum_EPCGPinStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPinStatus.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPinStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPinStatus.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPinUsage @ 149f1b2d0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPinUsage(void)

{
  if (Z_Registration_Info_UEnum_EPCGPinUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPinUsage.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPinUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPinUsage.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGPinProperties @ 149f1b310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPinProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPinProperties.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPinProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPinProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPinProperties.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGPinProperties.InnerSingleton;
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

// EPCGPinUsage_StaticEnum @ 149f1b390

UEnum * __cdecl EPCGPinUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPinUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPinUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPinUsage,(UObject *)pUVar1,L"EPCGPinUsage");
  }
  return Z_Registration_Info_UEnum_EPCGPinUsage.OuterSingleton;
}

// EPCGPinStatus_StaticEnum @ 149f1b3d0

UEnum * __cdecl EPCGPinStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPinStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPinStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPinStatus,(UObject *)pUVar1,L"EPCGPinStatus");
  }
  return Z_Registration_Info_UEnum_EPCGPinStatus.OuterSingleton;
}

// NewProp_bAllowMultipleData_SetBit @ 149f1b410

void __cdecl
Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bInvisiblePin_SetBit @ 149f1b420

void __cdecl
Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bInvisiblePin_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewProp_bAllowMultipleConnections_SetBit @ 149f1b430

void __cdecl
Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  return;
}

// NewStructOps @ 149f1b440

void * __cdecl Z_Construct_UScriptStruct_FPCGPinProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPinProperties,&UE::CoreUObject::Private::Construct<FPCGPinProperties>,&UE::CoreUObject::Private::ConstructForTests<FPCGPinProperties>,&UE::CoreUObject::Private::Destruct<FPCGPinProperties>,&UE::CoreUObject::Private::PostSerialize<FPCGPinProperties>,&UE::CoreUObject::Private::Copy<FPCGPinProperties>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGPinProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EPCGTypeConversion_StaticEnum @ 149f1b480

UEnum * __cdecl EPCGTypeConversion_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTypeConversion,(UObject *)pUVar1,
                       L"EPCGTypeConversion");
  }
  return Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton;
}

// NewProp_bAllowMultipleData_SetBit @ 149f1b4c0

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::
NewProp_bAllowMultipleData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bAllowMultipleConnections_SetBit @ 149f1b4d0

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::
NewProp_bAllowMultipleConnections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bIsAdvancedPin_SetBit @ 149f1b4e0

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::
NewProp_bIsAdvancedPin_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty @ 149f1b5b0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintPinHelpers_BreakPinProperty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGBlueprintPinHelpers_GetCorrespondingDataType @ 149f1b5f0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintPinHelpers_GetCorrespondingDataType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintPinHelpers_GetCorrespondingDataType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1b630

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsExactlySameType_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsExactlySameType @ 149f1b640

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsExactlySameType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsExactlySameType_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1b6a0

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsOfType_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsOfType @ 149f1b6e0

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsOfType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintPinHelpers_IsOfType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowMultipleData_SetBit @ 149f1b850

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::
NewProp_bAllowMultipleData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bAllowMultipleConnections_SetBit @ 149f1b860

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::
NewProp_bAllowMultipleConnections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bIsAdvancedPin_SetBit @ 149f1b870

void __cdecl
Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::NewProp_bIsAdvancedPin_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UClass_UPCGSettingsInterface_NoRegister @ 149f1b890

UClass * __cdecl Z_Construct_UClass_UPCGSettingsInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsInterface",
               &Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton,
               UPCGSettingsInterface::StaticRegisterNativesUPCGSettingsInterface,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSettingsInterface>,
               InternalVTableHelperCtorCaller<UPCGSettingsInterface>,local_res8,
               UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInterface.InnerSingleton;
}

// Z_Construct_UClass_UPCGSettings_NoRegister @ 149f1b950

UClass * __cdecl Z_Construct_UClass_UPCGSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettings",&Z_Registration_Info_UClass_UPCGSettings.InnerSingleton
               ,UPCGSettings::StaticRegisterNativesUPCGSettings,200,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGSettings>,
               InternalVTableHelperCtorCaller<UPCGSettings>,local_res8,
               UPCGSettingsInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettings.InnerSingleton;
}

// Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty @ 149f1ba50

UFunction * __cdecl Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGBlueprintPinHelpers_MakePinProperty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGNode @ 149f1ba90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGNode(void)

{
  if (Z_Registration_Info_UClass_UPCGNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGNode.OuterSingleton,
               &Z_Construct_UClass_UPCGNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGNode.OuterSingleton;
}

// Z_Construct_UFunction_UPCGNode_AddEdgeTo @ 149f1bad0

UFunction * __cdecl Z_Construct_UFunction_UPCGNode_AddEdgeTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGNode_AddEdgeTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGNode_GetGraph @ 149f1bb10

UFunction * __cdecl Z_Construct_UFunction_UPCGNode_GetGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGNode_GetGraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGNode_GetSettings @ 149f1bb50

UFunction * __cdecl Z_Construct_UFunction_UPCGNode_GetSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGNode_GetSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1bb90

void __cdecl
Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UPCGNode_RemoveEdgeTo @ 149f1bba0

UFunction * __cdecl Z_Construct_UFunction_UPCGNode_RemoveEdgeTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGNode_RemoveEdgeTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPin_GetTooltip @ 149f1bc60

UFunction * __cdecl Z_Construct_UFunction_UPCGPin_GetTooltip(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPin_GetTooltip_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1bca0

void __cdecl
Z_Construct_UFunction_UPCGPin_IsConnected_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGPin_IsConnected @ 149f1bcb0

UFunction * __cdecl Z_Construct_UFunction_UPCGPin_IsConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPin_IsConnected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1bcf0

void __cdecl
Z_Construct_UFunction_UPCGPin_IsOutputPin_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGPin_IsOutputPin @ 149f1bd00

UFunction * __cdecl Z_Construct_UFunction_UPCGPin_IsOutputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPin_IsOutputPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPin_SetTooltip @ 149f1bd40

UFunction * __cdecl Z_Construct_UFunction_UPCGPin_SetTooltip(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGPin_SetTooltip_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1bd80

void __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_AllowsMultipleConnections_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_AllowsMultipleConnections @ 149f1bde0

UFunction * __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_AllowsMultipleConnections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_AllowsMultipleConnections_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1be30

void __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsAdvancedPin_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsAdvancedPin @ 149f1be40

UFunction * __cdecl Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsAdvancedPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsAdvancedPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1be80

void __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsNormalPin_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsNormalPin @ 149f1be90

UFunction * __cdecl Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsNormalPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsNormalPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149f1bed0

void __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsRequiredPin_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsRequiredPin @ 149f1bee0

UFunction * __cdecl Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsRequiredPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_IsRequiredPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAdvancedPin @ 149f1bf20

UFunction * __cdecl Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAdvancedPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAdvancedPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowMultipleConnections_SetBit @ 149f1bf60

void __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAllowMultipleConnections_Statics::
NewProp_bAllowMultipleConnections_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAllowMultipleConnections @ 149f1c5e0

UFunction * __cdecl
Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAllowMultipleConnections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetAllowMultipleConnections_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149f1c620

void * __thiscall FPCGModule::_scalar_deleting_destructor_(FPCGModule *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ExecuteNextTicks).AllocatorInstance.Data,
             (this->ExecuteNextTicks).ArrayNum);
  pFVar3 = (this->ExecuteNextTicks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ExecuteNextTickLock);
  pTVar4 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  FPCGDataTypeRegistry::~FPCGDataTypeRegistry(&this->DataTypeRegistry);
  *(undefined4 *)&(this->AttributeAccessorFactory).AccessorMethods.field_0x48 = 0;
  pvVar5 = *(void **)&(this->AttributeAccessorFactory).AccessorMethods.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPCGData>_const_,FPCGAttributeAccessorMethods>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributeAccessorFactory);
  DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
            ((TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
              *)(this->GetDataFunctionRegistry).ComponentParsingFunctions.AllocatorInstance.Data,
             (this->GetDataFunctionRegistry).ComponentParsingFunctions.ArrayNum);
  pFVar3 = (this->GetDataFunctionRegistry).ComponentParsingFunctions.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
            ((TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
              *)(this->GetDataFunctionRegistry).ActorParsingFunctions.AllocatorInstance.Data,
             (this->GetDataFunctionRegistry).ActorParsingFunctions.ArrayNum);
  pFVar3 = (this->GetDataFunctionRegistry).ActorParsingFunctions.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f1c920

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetNormalPin @ 149f1c950

UFunction * __cdecl Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetNormalPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetNormalPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetRequiredPin @ 149f1cba0

UFunction * __cdecl Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetRequiredPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGPinPropertiesBlueprintHelpers_SetRequiredPin_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149f1cc30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f1ce80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UPCGGenSourceComponent @ 149f1cf70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGenSourceComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGGenSourceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGenSourceComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGGenSourceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGGenSourceEditorCamera @ 149f1d120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGenSourceEditorCamera(void)

{
  if (Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.OuterSingleton,
               &Z_Construct_UClass_UPCGGenSourceEditorCamera_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.OuterSingleton;
}

// Z_Construct_UClass_UPCGGenSourcePlayer @ 149f1d270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGenSourcePlayer(void)

{
  if (Z_Registration_Info_UClass_UPCGGenSourcePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGenSourcePlayer.OuterSingleton,
               &Z_Construct_UClass_UPCGGenSourcePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGenSourcePlayer.OuterSingleton;
}

// `scalar_deleting_destructor' @ 149f1d340

void * __thiscall
FPCGDataTypeInfoSettings::_scalar_deleting_destructor_(FPCGDataTypeInfoSettings *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UPCGSettingsWithDynamicInputs @ 149f1d4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSettingsWithDynamicInputs(void)

{
  if (Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.OuterSingleton,
               &Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.OuterSingleton;
}

// Z_Construct_UClass_UPCGGenSourceWPStreamingSource @ 149f1d520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGenSourceWPStreamingSource(void)

{
  if (Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.OuterSingleton,
               &Z_Construct_UClass_UPCGGenSourceWPStreamingSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.OuterSingleton;
}

// Z_Construct_UClass_UPCGBaseSubgraphNode @ 149f1d5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBaseSubgraphNode(void)

{
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBaseSubgraphNode.OuterSingleton,
               &Z_Construct_UClass_UPCGBaseSubgraphNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphNode.OuterSingleton;
}

// Z_Construct_UClass_UPCGBaseSubgraphSettings @ 149f1d670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBaseSubgraphSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGBaseSubgraphSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGSubgraphNode @ 149f1d710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSubgraphNode(void)

{
  if (Z_Registration_Info_UClass_UPCGSubgraphNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSubgraphNode.OuterSingleton,
               &Z_Construct_UClass_UPCGSubgraphNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphNode.OuterSingleton;
}

// Z_Construct_UClass_UPCGSubgraphSettings @ 149f1d750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSubgraphSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSubgraphSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSubgraphSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSubgraphSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphSettings.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 149f1d900

void __cdecl
Z_Construct_UFunction_UPCGSubgraphSettings_SubgraphAssetFilter_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSubgraphSettings_SubgraphAssetFilter @ 149f1d910

UFunction * __cdecl Z_Construct_UFunction_UPCGSubgraphSettings_SubgraphAssetFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSubgraphSettings_SubgraphAssetFilter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGBaseSubsystem @ 149f1d950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGBaseSubsystem(void)

{
  if (Z_Registration_Info_UClass_UPCGBaseSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGBaseSubsystem.OuterSingleton,
               &Z_Construct_UClass_UPCGBaseSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedActors @ 149f1dae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedActors(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedActors.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedActors.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedActors_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedActors.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedComponent @ 149f1db20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedComponentBase @ 149f1db60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponentBase(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedComponentBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedComponentBase.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedComponentBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentBase.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedComponentDefaultList @ 149f1dba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponentDefaultList(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedComponentDefaultList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedComponentList @ 149f1dbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponentList(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedComponentList.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedComponentList.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedComponentList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentList.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedISKMComponent @ 149f1dc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedISKMComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedISKMComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedISKMComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedISKMComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedISKMComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedISMComponent @ 149f1dc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedISMComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedISMComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedISMComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedISMComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedISMComponent.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedResource @ 149f1dca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedResource(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedResource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedResource.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedResource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedResource.OuterSingleton;
}

// Z_Construct_UClass_UPCGManagedSplineMeshComponent @ 149f1dce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGManagedSplineMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UPCGManagedSplineMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.OuterSingleton;
}

// NewProp_bIsMarkedUnused_SetBit @ 149f1dd20

void __cdecl
Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bSupportsReset_SetBit @ 149f1de40

void __cdecl
Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_bSupportsReset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UScriptStruct_FPCGPoint @ 149f1e340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPoint.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPoint.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPoint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPoint.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGPoint.InnerSingleton;
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

// EPCGPointProperties_StaticEnum @ 149f1e3c0

UEnum * __cdecl EPCGPointProperties_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointProperties,(UObject *)pUVar1,
                       L"EPCGPointProperties");
  }
  return Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton;
}

// Z_Construct_UFunction_UPCGManagedComponent_SetGeneratedComponentFromBP @ 149f1e400

UFunction * __cdecl Z_Construct_UFunction_UPCGManagedComponent_SetGeneratedComponentFromBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGManagedComponent_SetGeneratedComponentFromBP_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149f1e440

void * __cdecl Z_Construct_UScriptStruct_FPCGPoint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPoint,&UE::CoreUObject::Private::Construct<FPCGPoint>,&UE::CoreUObject::Private::ConstructForTests<FPCGPoint>,&UE::CoreUObject::Private::Destruct<FPCGPoint>,&UE::CoreUObject::Private::SerializeSlot<FPCGPoint>,&UE::CoreUObject::Private::Copy<FPCGPoint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGSettings @ 149f1e480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGSettingsInstance @ 149f1e4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSettingsInstance(void)

{
  if (Z_Registration_Info_UClass_UPCGSettingsInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSettingsInstance.OuterSingleton,
               &Z_Construct_UClass_UPCGSettingsInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInstance.OuterSingleton;
}

// Z_Construct_UClass_UPCGSettingsInterface @ 149f1e500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSettingsInterface(void)

{
  if (Z_Registration_Info_UClass_UPCGSettingsInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSettingsInterface.OuterSingleton,
               &Z_Construct_UClass_UPCGSettingsInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInterface.OuterSingleton;
}

// Z_Construct_UClass_UPCGTrivialSettings @ 149f1e540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGTrivialSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGTrivialSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGTrivialSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGTrivialSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGTrivialSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGPropertyAliases @ 149f1e580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPropertyAliases(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPCGPropertyAliases.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGSettingsOverridableParam @ 149f1e600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGSettingsOverridableParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.InnerSingleton;
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

// EPCGSettingsExecutionMode_StaticEnum @ 149f1e680

UEnum * __cdecl EPCGSettingsExecutionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode,(UObject *)pUVar1,
                       L"EPCGSettingsExecutionMode");
  }
  return Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton;
}

// EPCGSettingsType_StaticEnum @ 149f1e6c0

UEnum * __cdecl EPCGSettingsType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSettingsType,(UObject *)pUVar1,L"EPCGSettingsType")
    ;
  }
  return Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton;
}

// NewStructOps @ 149f1e700

void * __cdecl Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPropertyAliases,&UE::CoreUObject::Private::Construct<FPCGPropertyAliases>,&UE::CoreUObject::Private::ConstructForTests<FPCGPropertyAliases>,&UE::CoreUObject::Private::Destruct<FPCGPropertyAliases>,&UE::CoreUObject::Private::Copy<FPCGPropertyAliases>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasNameClash_SetBit @ 149f1e800

void __cdecl
Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bSupportsGPU_SetBit @ 149f1e810

void __cdecl
Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bSupportsGPU_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bRequiresGPUReadback_SetBit @ 149f1e820

void __cdecl
Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bRequiresGPUReadback_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewStructOps @ 149f1e830

void * __cdecl Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGSettingsOverridableParam,&UE::CoreUObject::Private::Construct<FPCGSettingsOverridableParam>,&UE::CoreUObject::Private::ConstructForTests<FPCGSettingsOverridableParam>,&UE::CoreUObject::Private::Destruct<FPCGSettingsOverridableParam>,&UE::CoreUObject::Private::Copy<FPCGSettingsOverridableParam>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPCGManagedComponentList_SetGeneratedComponentsFromBP @ 149f1e870

UFunction * __cdecl
Z_Construct_UFunction_UPCGManagedComponentList_SetGeneratedComponentsFromBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGManagedComponentList_SetGeneratedComponentsFromBP_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149f1ebb0

void * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGDataTypeInfoSettings,&UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSettings>,&UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSettings>,&UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSettings>,&UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasDescriptor_SetBit @ 149f1ebf0

void __cdecl
Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bHasRootLocation_SetBit @ 149f1ec00

void __cdecl
Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasRootLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x300) = 1;
  return;
}

// Z_Construct_UClass_APCGVolume @ 149f1ec10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APCGVolume(void)

{
  if (Z_Registration_Info_UClass_APCGVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APCGVolume.OuterSingleton,
               &Z_Construct_UClass_APCGVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APCGVolume.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 149f1ed10

void __cdecl
Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bDebug_SetBit @ 149f1ed20

void __cdecl Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bHasDescriptor_SetBit @ 149f1ed30

void __cdecl
Z_Construct_UClass_UPCGManagedISKMComponent_Statics::NewProp_bHasDescriptor_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bHasRootLocation_SetBit @ 149f1ed40

void __cdecl
Z_Construct_UClass_UPCGManagedISKMComponent_Statics::NewProp_bHasRootLocation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSettings_BP_GetTypeUnionOfIncidentEdges @ 149f1ed50

UFunction * __cdecl Z_Construct_UFunction_UPCGSettings_BP_GetTypeUnionOfIncidentEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSettings_BP_GetTypeUnionOfIncidentEdges_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSettings_GetTypeUnionIDOfIncidentEdges @ 149f1ee50

UFunction * __cdecl Z_Construct_UFunction_UPCGSettings_GetTypeUnionIDOfIncidentEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSettings_GetTypeUnionIDOfIncidentEdges_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGEngineSubsystem @ 149f1ee90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGEngineSubsystem(void)

{
  if (Z_Registration_Info_UClass_UPCGEngineSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGEngineSubsystem.OuterSingleton,
               &Z_Construct_UClass_UPCGEngineSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGEngineSubsystem.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 149f1eed0

void __cdecl
Z_Construct_UFunction_UPCGSettings_UseSeed_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPCGSettings_UseSeed @ 149f1efa0

UFunction * __cdecl Z_Construct_UFunction_UPCGSettings_UseSeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UPCGSettings_UseSeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExecutionDependencyRequired_SetBit @ 149f1efe0

void __cdecl
Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExecutionDependencyRequired_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewProp_bUseSeed_SetBit @ 149f1eff0

void __cdecl Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bExecuteOnGPU_SetBit @ 149f1f000

void __cdecl Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExecuteOnGPU_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  return;
}

// NewProp_bDumpCookedHLSL_SetBit @ 149f1f010

void __cdecl Z_Construct_UClass_UPCGSettings_Statics::NewProp_bDumpCookedHLSL_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xba) = 1;
  return;
}

// NewProp_bDumpDataDescriptions_SetBit @ 149f1f020

void __cdecl
Z_Construct_UClass_UPCGSettings_Statics::NewProp_bDumpDataDescriptions_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbb) = 1;
  return;
}

// NewProp_bPrintShaderDebugValues_SetBit @ 149f1f030

void __cdecl
Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPrintShaderDebugValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// Z_Construct_UClass_UPCGNode_NoRegister @ 149f1f040

UClass * __cdecl Z_Construct_UClass_UPCGNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNode",&Z_Registration_Info_UClass_UPCGNode.InnerSingleton,
               UPCGNode::StaticRegisterNativesUPCGNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGNode>,InternalVTableHelperCtorCaller<UPCGNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNode.InnerSingleton;
}

// Z_Construct_UClass_APCGWorldActor @ 149f1f130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APCGWorldActor(void)

{
  if (Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton,
               &Z_Construct_UClass_APCGWorldActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton;
}

// Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection @ 149f1f2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection(void)

{
  if (Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.OuterSingleton,
               &Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSchedulingPolicyNetworkMode @ 149f1f3e0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSchedulingPolicyNetworkMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSchedulingPolicyNetworkMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.InnerSingleton;
}

// EPCGSchedulingPolicyNetworkMode_StaticEnum @ 149f1f450

UEnum * __cdecl EPCGSchedulingPolicyNetworkMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSchedulingPolicyNetworkMode,(UObject *)pUVar1,
                       L"EPCGSchedulingPolicyNetworkMode");
  }
  return Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 149f1f4c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_APCGWorldActor_BP_GetPCGGridSize @ 149f1f4f0

UFunction * __cdecl Z_Construct_UFunction_APCGWorldActor_BP_GetPCGGridSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APCGWorldActor_BP_GetPCGGridSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149f1f530

void * __thiscall
FPCGGetDataFunctionRegistry::_scalar_deleting_destructor_
          (FPCGGetDataFunctionRegistry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
            ((TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
              *)(this->ComponentParsingFunctions).AllocatorInstance.Data,
             (this->ComponentParsingFunctions).ArrayNum);
  pFVar1 = (this->ComponentParsingFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
            ((TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
              *)(this->ActorParsingFunctions).AllocatorInstance.Data,
             (this->ActorParsingFunctions).ArrayNum);
  pFVar1 = (this->ActorParsingFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_UPCGSubsystem @ 149f1f5a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGSubsystem(void)

{
  if (Z_Registration_Info_UClass_UPCGSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGSubsystem.OuterSingleton,
               &Z_Construct_UClass_UPCGSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGSubsystem.OuterSingleton;
}

// NewProp_bTreatPlayerControllersAsGenerationSources_SetBit @ 149f1f5e0

void __cdecl
Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bTreatPlayerControllersAsGenerationSources_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 1;
  return;
}

// NewProp_bEnableWorldPartitionGenerationSources_SetBit @ 149f1f5f0

void __cdecl
Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bEnableWorldPartitionGenerationSources_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d1) = 1;
  return;
}

// Z_Construct_UFunction_UPCGSchedulingPolicyDistanceAndDirection_GetDistanceWeight_DEPRECATED @ 149f1f600

UFunction * __cdecl
Z_Construct_UFunction_UPCGSchedulingPolicyDistanceAndDirection_GetDistanceWeight_DEPRECATED(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSchedulingPolicyDistanceAndDirection_GetDistanceWeight_DEPRECATED_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGSchedulingPolicyDistanceAndDirection_SetDistanceWeight_DEPRECATED @ 149f1f860

UFunction * __cdecl
Z_Construct_UFunction_UPCGSchedulingPolicyDistanceAndDirection_SetDistanceWeight_DEPRECATED(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGSchedulingPolicyDistanceAndDirection_SetDistanceWeight_DEPRECATED_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149f1f8a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bUseDistance_SetBit @ 149f1f8d0

void __cdecl
Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics::NewProp_bUseDistance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bUseDirection_SetBit @ 149f1f8e0

void __cdecl
Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics::NewProp_bUseDirection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bUseFrustumCulling_SetBit @ 149f1f8f0

void __cdecl
Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics::
NewProp_bUseFrustumCulling_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UClass_UPCGParamData_NoRegister @ 149f1f900

UClass * __cdecl Z_Construct_UClass_UPCGParamData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGParamData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGParamData",
               &Z_Registration_Info_UClass_UPCGParamData.InnerSingleton,
               UPCGParamData::StaticRegisterNativesUPCGParamData,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGParamData>,
               InternalVTableHelperCtorCaller<UPCGParamData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGParamData.InnerSingleton;
}

// `scalar_deleting_destructor' @ 149f1fcb0

void * __thiscall
FPCGDataTypeInfoParam::_scalar_deleting_destructor_(FPCGDataTypeInfoParam *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UPCGPin_NoRegister @ 149f1fda0

UClass * __cdecl Z_Construct_UClass_UPCGPin_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPin",&Z_Registration_Info_UClass_UPCGPin.InnerSingleton,
               UPCGPin::StaticRegisterNativesUPCGPin,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGPin>,InternalVTableHelperCtorCaller<UPCGPin>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPin.InnerSingleton;
}

// NewStructOps @ 149f1fe90

void * __cdecl Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGVirtualTexturePrimingInfo,&UE::CoreUObject::Private::Construct<FPCGVirtualTexturePrimingInfo>,&UE::CoreUObject::Private::ConstructForTests<FPCGVirtualTexturePrimingInfo>,&UE::CoreUObject::Private::Destruct<FPCGVirtualTexturePrimingInfo>,&UE::CoreUObject::Private::Copy<FPCGVirtualTexturePrimingInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// TTransform<double>,0> @ 149f202f0

void __cdecl
operator<<<UE::Math::TTransform<double>_0>
          (FStructuredArchiveSlot param_1,TTransform<double> *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  UE::Math::operator<<(pFVar1,param_2);
  return;
}

// TVector4<double>,0> @ 149f20320

void __cdecl
operator<<<UE::Math::TVector4<double>_0>(FStructuredArchiveSlot param_1,TVector4<double> *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  UE::Math::operator<<(pFVar1,param_2);
  return;
}

// CastChecked<APCGPartitionActor,AActor> @ 149f20d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APCGPartitionActor * __cdecl CastChecked<APCGPartitionActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<APCGPartitionActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APCGPartitionActor *)param_1;
  }
  pFVar3 = GetTypeName<APCGPartitionActor>(&local_28);
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

// CastChecked<APCGPartitionActor,AActor> @ 149f20e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APCGPartitionActor * __cdecl CastChecked<APCGPartitionActor,AActor>(AActor *param_1,Type param_2)

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
      return (APCGPartitionActor *)0x0;
    }
    pFVar3 = GetTypeName<APCGPartitionActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APCGPartitionActor *)param_1;
  }
  pFVar3 = GetTypeName<APCGPartitionActor>(&local_28);
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

// CastChecked<UPCGSubsystem,UObject> @ 149f20f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __cdecl CastChecked<UPCGSubsystem,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGSubsystem::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPCGSubsystem *)param_1;
  }
  pFVar3 = GetTypeName<UPCGSubsystem>(&local_28);
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

// ConstructItems<TSoftObjectPtr<UActorComponent>,TSoftObjectPtr<UActorComponent>,int> @ 149f20fe0

void __cdecl
ConstructItems<TSoftObjectPtr<UActorComponent>,TSoftObjectPtr<UActorComponent>,int>
          (void *param_1,TSoftObjectPtr<UActorComponent> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(undefined8 *)(lVar1 + (longlong)param_2) = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(lVar1 + 8 + (longlong)param_2),
                 (FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int> @ 149f21170

void __cdecl
DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
          (TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int> @ 149f211c0

void __cdecl
DestructItems<TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>,int>
          (TTuple<TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>,unsigned___int64>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGBaseSubgraphSettings>'::__l2::<lambda_1>_> @ 149f238a0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBaseSubgraphSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f238e3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGBaseSubgraphSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149f238e3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSubgraphSettings>'::__l2::<lambda_1>_> @ 149f23930

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubgraphSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f23973:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGSubgraphSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149f23973;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`UPCGSettings::HasOverridableParam'::__l2::<lambda_1>_> @ 149f239c0

FPCGSettingsOverridableParam * __thiscall
TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UPCGSettings::HasOverridableParam_::__l2::<lambda_1>_>
          (TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPCGSettingsOverridableParam *pFVar5;
  FPCGSettingsOverridableParam *pFVar6;
  
  pFVar5 = (FPCGSettingsOverridableParam *)(this->AllocatorInstance).Data;
  pFVar6 = pFVar5 + this->ArrayNum;
  do {
    if (pFVar5 == pFVar6) {
      return (FPCGSettingsOverridableParam *)0x0;
    }
    iVar1 = (pFVar5->PropertiesNames).ArrayNum;
    if (iVar1 != 0) {
      uVar4 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar4 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGSettingsOverridableParam *)(*pcVar2)();
        return pFVar5;
      }
      if (*(FName *)((pFVar5->PropertiesNames).AllocatorInstance.Data +
                    (longlong)(pFVar5->PropertiesNames).ArrayNum * 8 + -8) == param_1.InParamName) {
        return pFVar5;
      }
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// FindByPredicate<`UPCGSubgraphSettings::IsSubgraphOverridden'::__l2::<lambda_1>_> @ 149f23a90

FPCGSettingsOverridableParam * __thiscall
TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UPCGSubgraphSettings::IsSubgraphOverridden_::__l2::<lambda_1>_>
          (TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPCGSettingsOverridableParam *pFVar5;
  FPCGSettingsOverridableParam *pFVar6;
  
  pFVar5 = (FPCGSettingsOverridableParam *)(this->AllocatorInstance).Data;
  pFVar6 = pFVar5 + this->ArrayNum;
  do {
    if (pFVar5 == pFVar6) {
      return (FPCGSettingsOverridableParam *)0x0;
    }
    iVar1 = (pFVar5->PropertiesNames).ArrayNum;
    if (iVar1 != 0) {
      uVar4 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar4 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGSettingsOverridableParam *)(*pcVar2)();
        return pFVar5;
      }
      if (*(FName *)((pFVar5->PropertiesNames).AllocatorInstance.Data +
                    (longlong)(pFVar5->PropertiesNames).ArrayNum * 8 + -8) == param_1.PropertyName)
      {
        return pFVar5;
      }
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGOctreeQueries::GetPointIndexInSphereUnderCondition<`UPCGOctreeQueries::GetClosestPointFromOtherPoint'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f23b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  bool bVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  UPCGPointData *pUVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 *this_00;
  uint uVar33;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  byte bVar36;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar47;
  uint uVar48;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar49;
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar51;
  uint uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined4 uVar57;
  uint uVar58;
  undefined4 uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  uint uVar68;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  FScriptContainerElement *local_130;
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined4 uStack_fc;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  undefined7 extraout_var;
  uint uVar37;
  
  lVar34 = (longlong)(int)param_1;
  uVar39 = ~param_1 >> 0x1f;
  uVar24 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar24 = uVar39;
  }
  local_140 = uVar39;
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar34 * 8 + 4) != 0) {
    uVar24 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar39;
    }
    local_138 = lVar34;
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar33 = _UNK_15061cc8c;
    uVar27 = _UNK_15061cc88;
    uVar39 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_130 = (this->TreeElements).AllocatorInstance.Data + lVar34 * 0x410;
    local_144 = *(uint *)(local_130 + 0x408);
    uVar32 = (ulonglong)(int)local_144;
    pFVar35 = *(FScriptContainerElement **)(local_130 + 0x400);
    if (*(FScriptContainerElement **)(local_130 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar35 = local_130;
    }
    pFVar38 = pFVar35 + uVar32 * 0x40;
    while( true ) {
      uVar30 = (uint)uVar32;
      pFVar28 = local_130;
      if (*(uint *)(local_130 + 0x408) != uVar30) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar22 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar30 = (uint)this_00;
        pFVar28 = (FScriptContainerElement *)CONCAT71(extraout_var,bVar22);
      }
      lVar34 = local_138;
      uVar26 = local_140;
      if (pFVar35 == pFVar38) break;
      dVar65 = *(double *)(pFVar35 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar9 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar34 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar33,SUB84(dVar9,0) & uVar27))
      ;
      auVar6._8_4_ = (int)lVar34;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar35 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar39,
                                       SUB84(dVar65,0) & uVar24));
      auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
      uVar30 = movmskpd(uVar30,auVar6);
      dVar65 = *(double *)(pFVar35 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar9 = *(double *)(pFVar35 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar34 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar35 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar33,SUB84(dVar9,0) & uVar27))
      ;
      auVar7._8_4_ = (int)lVar34;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar35 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar39,
                                       SUB84(dVar65,0) & uVar24));
      auVar7._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
      iVar25 = movmskpd((int)pFVar28,auVar7);
      if (((uVar30 & 0x3fffffff) == 0 && iVar25 == 0) &&
         (cVar23 = (**(code **)(**(longlong **)param_4 + 0x480))(*(longlong **)param_4,pFVar35),
         cVar23 != '\0')) {
        plVar3 = *(longlong **)(param_4 + 8);
        if (plVar3 == (longlong *)0x0) {
          lVar34 = (**(code **)(**(longlong **)param_4 + 0x590))
                             (*(longlong **)param_4,*(uint *)pFVar35);
          local_110 = *(undefined1 (*) [16])(lVar34 + 0x20);
          uVar57 = local_110._0_4_;
          uVar59 = local_110._4_4_;
          uVar51 = *(undefined4 *)(lVar34 + 0x30);
          uVar53 = *(undefined4 *)(lVar34 + 0x34);
          auVar67._0_8_ = local_110._8_8_;
          auVar67._8_4_ = local_110._8_4_;
          auVar67._12_4_ = local_110._12_4_;
          local_100 = uVar51;
          uStack_fc = uVar53;
        }
        else {
          uVar30 = *(uint *)pFVar35;
          uVar26 = 0;
          if ((int)uVar30 < (int)plVar3[1]) {
            uVar26 = ~uVar30 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_128 = *(undefined1 (*) [16])((longlong)(int)uVar30 * 0xd0 + 0x20 + *plVar3);
          uVar57 = local_128._0_4_;
          uVar59 = local_128._4_4_;
          puVar1 = (undefined4 *)((longlong)(int)uVar30 * 0xd0 + 0x30 + *plVar3);
          uVar51 = *puVar1;
          uVar53 = puVar1[1];
          auVar12._4_8_ = unaff_XMM7_Qb;
          auVar12._0_4_ = uVar59;
          auVar66._0_8_ = auVar12._0_8_ << 0x20;
          auVar66._8_4_ = local_128._8_4_;
          auVar66._12_4_ = local_128._12_4_;
          auVar67._8_8_ = local_128._8_8_;
          auVar67._0_8_ = auVar66._8_8_;
          local_118 = uVar51;
          uStack_114 = uVar53;
        }
        pdVar4 = *(double **)(param_4 + 0x10);
        unaff_XMM7_Qb = auVar67._8_8_;
        dVar64 = auVar67._0_8_ - pdVar4[1];
        dVar9 = (double)CONCAT44(uVar59,uVar57) - *pdVar4;
        dVar65 = (double)CONCAT44(uVar53,uVar51) - pdVar4[2];
        dVar65 = dVar64 * dVar64 + dVar9 * dVar9 + dVar65 * dVar65;
        if (dVar65 < *(double *)(param_4 + 0x18) || dVar65 == *(double *)(param_4 + 0x18)) {
          uVar30 = *(uint *)pFVar35;
          dVar9 = **(double **)(param_4 + 0x20);
          pUVar29 = CastChecked<UPCGPointData,UPCGBasePointData_const_>
                              (*(UPCGBasePointData **)param_4);
          if (dVar65 <= dVar9) {
            uVar26 = 0;
            if ((int)uVar30 < (pUVar29->Points).ArrayNum) {
              uVar26 = ~uVar30 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(FScriptContainerElement **)(param_4 + 0x30) !=
                (pUVar29->Points).AllocatorInstance.Data + (longlong)(int)uVar30 * 0xd0) {
              **(double **)(param_4 + 0x20) = dVar65;
              **(uint **)(param_4 + 0x28) = uVar30;
            }
          }
        }
      }
      pFVar35 = pFVar35 + 0x40;
      uVar32 = (ulonglong)local_144;
    }
    iVar25 = (this->TreeNodes).ArrayNum;
    uVar24 = 0;
    if ((int)param_1 < iVar25) {
      uVar24 = local_140;
    }
    if (uVar24 == 0) {
      iVar25 = 0x506106c8;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar38 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar38 + lVar34 * 8) != -1) {
      dVar64 = (param_3->Center).field0_0x0._s_0.Z;
      dVar49 = (param_3->Center).field0_0x0._s_0.W;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar15 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar16 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar65 = param_2->ChildCenterOffset;
      dVar9 = param_2->ChildExtent;
      dVar17 = (param_3->Center).field0_0x0._s_0.X;
      dVar18 = (param_3->Center).field0_0x0._s_0.Y;
      auVar41._8_4_ = SUB84(dVar65,0);
      auVar41._0_8_ = dVar65;
      uVar57 = (undefined4)((ulonglong)dVar65 >> 0x20);
      auVar41._12_4_ = uVar57;
      auVar42._8_8_ =
           -(ulonglong)
            ((auVar41._8_8_ + dVar14) - dVar9 < (param_3->Extent).field0_0x0._s_0.W + dVar49);
      auVar42._0_8_ =
           -(ulonglong)((dVar65 + dVar13) - dVar9 < (param_3->Extent).field0_0x0._s_0.Z + dVar64);
      uVar33 = movmskpd((int)pFVar35,auVar42);
      auVar43._8_4_ = SUB84(dVar65,0);
      auVar43._0_8_ = dVar65;
      auVar43._12_4_ = uVar57;
      auVar44._8_8_ =
           -(ulonglong)
            ((auVar43._8_8_ + dVar16) - dVar9 < (param_3->Extent).field0_0x0._s_0.Y + dVar18);
      auVar44._0_8_ =
           -(ulonglong)((dVar65 + dVar15) - dVar9 < (param_3->Extent).field0_0x0._s_0.X + dVar17);
      uVar39 = movmskpd((int)pFVar38,auVar44);
      lVar40 = -(ulonglong)
                (dVar49 - (param_3->Extent).field0_0x0._s_0.W <= (dVar14 - dVar65) + dVar9);
      auVar10._8_4_ = (int)lVar40;
      auVar10._0_8_ =
           -(ulonglong)(dVar64 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar13 - dVar65) + dVar9);
      auVar10._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      iVar25 = movmskpd(iVar25,auVar10);
      lVar40 = -(ulonglong)
                (dVar18 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar16 - dVar65) + dVar9);
      auVar11._8_4_ = (int)lVar40;
      auVar11._0_8_ =
           -(ulonglong)(dVar17 - (param_3->Extent).field0_0x0._s_0.X <= (dVar15 - dVar65) + dVar9);
      auVar11._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar27 = movmskpd(uVar39,auVar11);
      uVar24 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar24 = uVar26;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = _UNK_15074415c;
      uVar26 = _UNK_150744158;
      uVar30 = _UNK_150744154;
      uVar24 = ___xmm_00000008000000040000000200000001;
      dVar9 = __real_3ff1000000000000;
      fVar20 = _UNK_15068954c;
      fVar19 = _UNK_150689548;
      dVar65 = __real_3fe0000000000000;
      uVar68 = (uint)__xmm_80000000000000008000000000000000;
      uVar32 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar34 * 8);
      uVar37 = 0;
      do {
        uVar31 = (~uVar37 & 7) << 3 | uVar37 & 7;
        if ((uVar31 & ((uVar33 & 1) << 2 | uVar39 & 7 | (iVar25 << 2 | uVar27) << 3)) == uVar31) {
          uVar58 = SUB84(param_2->ChildCenterOffset,0);
          uVar60 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar61 = SUB84(param_2->ChildCenterOffset,0) ^ uVar68;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar32;
          dVar64 = (double)(float)-(uint)((uVar37 & uVar24) == uVar24);
          dVar49 = (double)(float)-(uint)((uVar37 & uVar30) == uVar30);
          uVar31 = SUB84(dVar64,0);
          uVar47 = (uint)((ulonglong)dVar64 >> 0x20);
          uVar48 = SUB84(dVar49,0);
          uVar50 = (uint)((ulonglong)dVar49 >> 0x20);
          auVar45._0_4_ = ~uVar31 & uVar61;
          auVar45._4_4_ = ~uVar47 & uVar62;
          auVar45._8_4_ = ~uVar48 & uVar61;
          auVar45._12_4_ = ~uVar50 & uVar62;
          dVar64 = (double)(float)-(uint)((uVar37 & uVar26) == uVar26);
          uVar52 = SUB84(dVar64,0);
          uVar54 = (uint)((ulonglong)dVar64 >> 0x20);
          dVar64 = (double)(float)-(uint)((uVar37 & uVar21) == uVar21);
          uVar55 = SUB84(dVar64,0);
          uVar56 = (uint)((ulonglong)dVar64 >> 0x20);
          auVar63._0_4_ = uVar31 & uVar58;
          auVar63._4_4_ = uVar47 & uVar60;
          auVar63._8_4_ = uVar48 & uVar58;
          auVar63._12_4_ = uVar50 & uVar60;
          local_f8._s_0.X = SUB168(auVar63 | auVar45,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar45,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar46._0_4_ = uVar52 & uVar58;
          auVar46._4_4_ = uVar54 & uVar60;
          auVar46._8_4_ = uVar55 & uVar58;
          auVar46._12_4_ = uVar56 & uVar60;
          auVar8._4_4_ = ~uVar54 & uVar62;
          auVar8._0_4_ = ~uVar52 & uVar61;
          auVar8._8_4_ = ~uVar55 & uVar61;
          auVar8._12_4_ = ~uVar56 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar46 | auVar8,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar19;
          local_f8._s_0.W =
               (SUB168(auVar46 | auVar8,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar20;
          dVar64 = (double)fVar20 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_c8._8_4_ = SUB84(dVar64,0);
          local_c8._0_8_ = (double)fVar19 * local_b0;
          local_c8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
          local_b8 = local_b0 * dVar65 * dVar9;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar37 + iVar2,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar36 = (char)uVar37 + 1;
        uVar37 = (uint)bVar36;
      } while ((char)bVar36 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGOctreeQueries::GetPointIndexInSphereUnderCondition<`UPCGOctreeQueries::GetClosestPointIndex'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f241d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  double *pdVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined7 extraout_var;
  int iVar27;
  uint uVar28;
  longlong *plVar29;
  undefined1 *this_00;
  uint uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  byte bVar33;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  double dVar39;
  uint uVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  double dVar48;
  uint uVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar50;
  uint uVar51;
  undefined4 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined4 uVar56;
  uint uVar57;
  undefined4 uVar58;
  uint uVar59;
  uint uVar60;
  double dVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar34;
  
  lVar31 = (longlong)(int)param_1;
  uVar36 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar36;
  }
  local_140 = uVar36;
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8 + 4) != 0) {
    uVar22 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar22 = uVar36;
    }
    local_138 = lVar31;
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar30 = _UNK_15061cc8c;
    uVar25 = _UNK_15061cc88;
    uVar36 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar2 = __real_3e45798ee2308c3a;
    plVar29 = (longlong *)(lVar31 * 0x410);
    pFVar35 = (this->TreeElements).AllocatorInstance.Data + (longlong)plVar29;
    local_144 = *(uint *)(pFVar35 + 0x408);
    uVar26 = (ulonglong)(int)local_144;
    pFVar32 = *(FScriptContainerElement **)(pFVar35 + 0x400);
    if (*(FScriptContainerElement **)(pFVar35 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar32 = pFVar35;
    }
    pFVar37 = pFVar32 + uVar26 * 0x40;
    while( true ) {
      uVar56 = SUB84(plVar29,0);
      uVar23 = (uint)uVar26;
      if (*(uint *)(pFVar35 + 0x408) != uVar23) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar20 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar56 = SUB84(this_00,0);
        uVar23 = (uint)CONCAT71(extraout_var,bVar20);
      }
      lVar31 = local_138;
      uVar24 = local_140;
      if (pFVar32 == pFVar37) break;
      dVar61 = *(double *)(pFVar32 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar39 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar30,SUB84(dVar39,0) & uVar25
                                ));
      auVar7._8_4_ = (int)lVar31;
      auVar7._0_8_ = -(ulonglong)
                      (*(double *)(pFVar32 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar27 = movmskpd(uVar56,auVar7);
      dVar61 = *(double *)(pFVar32 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar39 = *(double *)(pFVar32 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar32 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar30,SUB84(dVar39,0) & uVar25
                                ));
      auVar8._8_4_ = (int)lVar31;
      auVar8._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar32 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar8._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar8);
      uVar23 = iVar27 << 2 | uVar23;
      plVar29 = (longlong *)(ulonglong)uVar23;
      if (uVar23 == 0) {
        plVar29 = *(longlong **)param_4;
        cVar21 = (**(code **)(*plVar29 + 0x480))(plVar29,pFVar32);
        if (cVar21 != '\0') {
          plVar4 = *(longlong **)(param_4 + 8);
          if (plVar4 == (longlong *)0x0) {
            plVar29 = *(longlong **)param_4;
            lVar31 = (**(code **)(*plVar29 + 0x590))(plVar29,*(uint *)pFVar32);
            uVar56 = *(undefined4 *)(lVar31 + 0x20);
            uVar58 = *(undefined4 *)(lVar31 + 0x24);
            uVar50 = *(undefined4 *)(lVar31 + 0x28);
            uVar52 = *(undefined4 *)(lVar31 + 0x2c);
            dVar61 = *(double *)(lVar31 + 0x30);
            local_118 = uVar56;
            uStack_114 = uVar58;
            uStack_110 = uVar50;
            uStack_10c = uVar52;
            local_108 = dVar61;
          }
          else {
            uVar23 = *(uint *)pFVar32;
            uVar24 = 0;
            if ((int)uVar23 < (int)plVar4[1]) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar29 = (longlong *)((longlong)(int)uVar23 * 0xd0);
            puVar1 = (undefined4 *)((longlong)plVar29 + *plVar4 + 0x20);
            uVar56 = *puVar1;
            uVar58 = puVar1[1];
            uVar50 = puVar1[2];
            uVar52 = puVar1[3];
            dVar61 = *(double *)((longlong)plVar29 + *plVar4 + 0x30);
            local_130 = uVar56;
            uStack_12c = uVar58;
            uStack_128 = uVar50;
            uStack_124 = uVar52;
            local_120 = dVar61;
          }
          pdVar5 = *(double **)(param_4 + 0x10);
          dVar39 = (double)CONCAT44(uVar52,uVar50) - pdVar5[1];
          dVar48 = (double)CONCAT44(uVar58,uVar56) - *pdVar5;
          dVar61 = dVar39 * dVar39 + dVar48 * dVar48 + (dVar61 - pdVar5[2]) * (dVar61 - pdVar5[2]);
          if (dVar61 < *(double *)(param_4 + 0x18) || dVar61 == *(double *)(param_4 + 0x18)) {
            pdVar5 = *(double **)(param_4 + 0x20);
            uVar23 = *(uint *)pFVar32;
            plVar29 = (longlong *)(ulonglong)uVar23;
            if ((dVar61 < *pdVar5 || dVar61 == *pdVar5) &&
               ((param_4[0x30] == (<lambda_1>)0x0 || (dVar2 < dVar61)))) {
              *pdVar5 = dVar61;
              **(uint **)(param_4 + 0x28) = uVar23;
            }
          }
        }
      }
      uVar26 = (ulonglong)local_144;
      pFVar32 = pFVar32 + 0x40;
    }
    iVar27 = (this->TreeNodes).ArrayNum;
    uVar22 = 0;
    if ((int)param_1 < iVar27) {
      uVar22 = local_140;
    }
    if (uVar22 == 0) {
      iVar27 = 0x506106c8;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar35 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar35 + lVar31 * 8) != -1) {
      dVar39 = (param_3->Center).field0_0x0._s_0.Z;
      dVar48 = (param_3->Center).field0_0x0._s_0.W;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar2 = param_2->ChildCenterOffset;
      dVar61 = param_2->ChildExtent;
      dVar15 = (param_3->Center).field0_0x0._s_0.X;
      dVar16 = (param_3->Center).field0_0x0._s_0.Y;
      auVar40._8_4_ = SUB84(dVar2,0);
      auVar40._0_8_ = dVar2;
      uVar56 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar40._12_4_ = uVar56;
      auVar41._8_8_ =
           -(ulonglong)
            ((auVar40._8_8_ + dVar12) - dVar61 < (param_3->Extent).field0_0x0._s_0.W + dVar48);
      auVar41._0_8_ =
           -(ulonglong)((dVar2 + dVar11) - dVar61 < (param_3->Extent).field0_0x0._s_0.Z + dVar39);
      uVar30 = movmskpd((int)pFVar32,auVar41);
      auVar42._8_4_ = SUB84(dVar2,0);
      auVar42._0_8_ = dVar2;
      auVar42._12_4_ = uVar56;
      auVar43._8_8_ =
           -(ulonglong)
            ((auVar42._8_8_ + dVar14) - dVar61 < (param_3->Extent).field0_0x0._s_0.Y + dVar16);
      auVar43._0_8_ =
           -(ulonglong)((dVar2 + dVar13) - dVar61 < (param_3->Extent).field0_0x0._s_0.X + dVar15);
      uVar36 = movmskpd((int)pFVar35,auVar43);
      auVar64._8_8_ =
           -(ulonglong)(dVar48 - (param_3->Extent).field0_0x0._s_0.W <= (dVar12 - dVar2) + dVar61);
      auVar64._0_8_ =
           -(ulonglong)(dVar39 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar11 - dVar2) + dVar61);
      iVar27 = movmskpd(iVar27,auVar64);
      lVar38 = -(ulonglong)
                (dVar16 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar14 - dVar2) + dVar61);
      auVar10._8_4_ = (int)lVar38;
      auVar10._0_8_ =
           -(ulonglong)(dVar15 - (param_3->Extent).field0_0x0._s_0.X <= (dVar13 - dVar2) + dVar61);
      auVar10._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar25 = movmskpd(uVar36,auVar10);
      uVar22 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = _UNK_15074415c;
      uVar24 = _UNK_150744158;
      uVar23 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar61 = __real_3ff1000000000000;
      fVar18 = _UNK_15068954c;
      fVar17 = _UNK_150689548;
      dVar2 = __real_3fe0000000000000;
      uVar65 = (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar3 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8);
      uVar34 = 0;
      do {
        uVar28 = (~uVar34 & 7) << 3 | uVar34 & 7;
        if ((uVar28 & ((uVar30 & 1) << 2 | uVar36 & 7 | (iVar27 << 2 | uVar25) << 3)) == uVar28) {
          uVar57 = SUB84(param_2->ChildCenterOffset,0);
          uVar59 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar60 = SUB84(param_2->ChildCenterOffset,0) ^ uVar65;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar26;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar22) == uVar22);
          dVar48 = (double)(float)-(uint)((uVar34 & uVar23) == uVar23);
          uVar28 = SUB84(dVar39,0);
          uVar46 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar47 = SUB84(dVar48,0);
          uVar49 = (uint)((ulonglong)dVar48 >> 0x20);
          auVar44._0_4_ = ~uVar28 & uVar60;
          auVar44._4_4_ = ~uVar46 & uVar62;
          auVar44._8_4_ = ~uVar47 & uVar60;
          auVar44._12_4_ = ~uVar49 & uVar62;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar24) == uVar24);
          uVar51 = SUB84(dVar39,0);
          uVar53 = (uint)((ulonglong)dVar39 >> 0x20);
          dVar39 = (double)(float)-(uint)((uVar34 & uVar19) == uVar19);
          uVar54 = SUB84(dVar39,0);
          uVar55 = (uint)((ulonglong)dVar39 >> 0x20);
          auVar63._0_4_ = uVar28 & uVar57;
          auVar63._4_4_ = uVar46 & uVar59;
          auVar63._8_4_ = uVar47 & uVar57;
          auVar63._12_4_ = uVar49 & uVar59;
          local_f8._s_0.X = SUB168(auVar63 | auVar44,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar44,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar45._0_4_ = uVar51 & uVar57;
          auVar45._4_4_ = uVar53 & uVar59;
          auVar45._8_4_ = uVar54 & uVar57;
          auVar45._12_4_ = uVar55 & uVar59;
          auVar9._4_4_ = ~uVar53 & uVar62;
          auVar9._0_4_ = ~uVar51 & uVar60;
          auVar9._8_4_ = ~uVar54 & uVar60;
          auVar9._12_4_ = ~uVar55 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar45 | auVar9,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar17;
          local_f8._s_0.W =
               (SUB168(auVar45 | auVar9,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar18;
          local_c8._0_8_ = (double)fVar17 * local_b0;
          local_c8._8_8_ = (double)fVar18 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_b8 = local_b0 * dVar2 * dVar61;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar34 + iVar3,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar33 = (char)uVar34 + 1;
        uVar34 = (uint)bVar33;
      } while ((char)bVar33 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGOctreeQueries::GetPointIndexInSphereUnderCondition<`UPCGOctreeQueries::GetClosestPointIndexFromOtherPointIndex'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f247c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndexFromOtherPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined7 extraout_var;
  int iVar27;
  uint uVar28;
  longlong *plVar29;
  undefined1 *this_00;
  uint uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  byte bVar33;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  double dVar39;
  uint uVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  double dVar48;
  uint uVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar50;
  uint uVar51;
  undefined4 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined4 uVar56;
  uint uVar57;
  undefined4 uVar58;
  uint uVar59;
  uint uVar60;
  double dVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar34;
  
  lVar31 = (longlong)(int)param_1;
  uVar36 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar36;
  }
  local_140 = uVar36;
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8 + 4) != 0) {
    uVar22 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar22 = uVar36;
    }
    local_138 = lVar31;
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = _UNK_15061cc8c;
    uVar25 = _UNK_15061cc88;
    uVar36 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    plVar29 = (longlong *)(lVar31 * 0x410);
    pFVar35 = (this->TreeElements).AllocatorInstance.Data + (longlong)plVar29;
    local_144 = *(uint *)(pFVar35 + 0x408);
    uVar26 = (ulonglong)(int)local_144;
    pFVar32 = *(FScriptContainerElement **)(pFVar35 + 0x400);
    if (*(FScriptContainerElement **)(pFVar35 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar32 = pFVar35;
    }
    pFVar37 = pFVar32 + uVar26 * 0x40;
    while( true ) {
      uVar56 = SUB84(plVar29,0);
      uVar23 = (uint)uVar26;
      if (*(uint *)(pFVar35 + 0x408) != uVar23) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar20 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar56 = SUB84(this_00,0);
        uVar23 = (uint)CONCAT71(extraout_var,bVar20);
      }
      lVar31 = local_138;
      uVar24 = local_140;
      if (pFVar32 == pFVar37) break;
      dVar61 = *(double *)(pFVar32 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar9 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar30,SUB84(dVar9,0) & uVar25))
      ;
      auVar6._8_4_ = (int)lVar31;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar32 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar6._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar27 = movmskpd(uVar56,auVar6);
      dVar61 = *(double *)(pFVar32 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar9 = *(double *)(pFVar32 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar32 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar30,SUB84(dVar9,0) & uVar25))
      ;
      auVar7._8_4_ = (int)lVar31;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar32 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar7);
      uVar23 = iVar27 << 2 | uVar23;
      plVar29 = (longlong *)(ulonglong)uVar23;
      if (uVar23 == 0) {
        plVar29 = *(longlong **)param_4;
        cVar21 = (**(code **)(*plVar29 + 0x480))(plVar29,pFVar32);
        if (cVar21 != '\0') {
          plVar3 = *(longlong **)(param_4 + 8);
          if (plVar3 == (longlong *)0x0) {
            plVar29 = *(longlong **)param_4;
            lVar31 = (**(code **)(*plVar29 + 0x590))(plVar29,*(uint *)pFVar32);
            uVar56 = *(undefined4 *)(lVar31 + 0x20);
            uVar58 = *(undefined4 *)(lVar31 + 0x24);
            uVar50 = *(undefined4 *)(lVar31 + 0x28);
            uVar52 = *(undefined4 *)(lVar31 + 0x2c);
            dVar61 = *(double *)(lVar31 + 0x30);
            local_118 = uVar56;
            uStack_114 = uVar58;
            uStack_110 = uVar50;
            uStack_10c = uVar52;
            local_108 = dVar61;
          }
          else {
            uVar23 = *(uint *)pFVar32;
            uVar24 = 0;
            if ((int)uVar23 < (int)plVar3[1]) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar29 = (longlong *)((longlong)(int)uVar23 * 0xd0);
            puVar1 = (undefined4 *)((longlong)plVar29 + *plVar3 + 0x20);
            uVar56 = *puVar1;
            uVar58 = puVar1[1];
            uVar50 = puVar1[2];
            uVar52 = puVar1[3];
            dVar61 = *(double *)((longlong)plVar29 + *plVar3 + 0x30);
            local_130 = uVar56;
            uStack_12c = uVar58;
            uStack_128 = uVar50;
            uStack_124 = uVar52;
            local_120 = dVar61;
          }
          pdVar4 = *(double **)(param_4 + 0x10);
          dVar9 = (double)CONCAT44(uVar52,uVar50) - pdVar4[1];
          dVar39 = (double)CONCAT44(uVar58,uVar56) - *pdVar4;
          dVar61 = dVar9 * dVar9 + dVar39 * dVar39 + (dVar61 - pdVar4[2]) * (dVar61 - pdVar4[2]);
          if (dVar61 < *(double *)(param_4 + 0x18) || dVar61 == *(double *)(param_4 + 0x18)) {
            pdVar4 = *(double **)(param_4 + 0x20);
            uVar23 = *(uint *)pFVar32;
            plVar29 = (longlong *)(ulonglong)uVar23;
            if ((dVar61 < *pdVar4 || dVar61 == *pdVar4) && (uVar23 != *(uint *)(param_4 + 0x30))) {
              *pdVar4 = dVar61;
              **(uint **)(param_4 + 0x28) = uVar23;
            }
          }
        }
      }
      uVar26 = (ulonglong)local_144;
      pFVar32 = pFVar32 + 0x40;
    }
    iVar27 = (this->TreeNodes).ArrayNum;
    uVar22 = 0;
    if ((int)param_1 < iVar27) {
      uVar22 = local_140;
    }
    if (uVar22 == 0) {
      iVar27 = 0x506106c8;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar35 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar35 + lVar31 * 8) != -1) {
      dVar39 = (param_3->Center).field0_0x0._s_0.Z;
      dVar48 = (param_3->Center).field0_0x0._s_0.W;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar61 = param_2->ChildCenterOffset;
      dVar9 = param_2->ChildExtent;
      auVar40._8_4_ = SUB84(dVar61,0);
      auVar40._0_8_ = dVar61;
      uVar56 = (undefined4)((ulonglong)dVar61 >> 0x20);
      auVar40._12_4_ = uVar56;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar15 = (param_3->Center).field0_0x0._s_0.X;
      dVar16 = (param_3->Center).field0_0x0._s_0.Y;
      auVar41._8_8_ =
           -(ulonglong)
            ((auVar40._8_8_ + dVar12) - dVar9 < (param_3->Extent).field0_0x0._s_0.W + dVar48);
      auVar41._0_8_ =
           -(ulonglong)((dVar61 + dVar11) - dVar9 < (param_3->Extent).field0_0x0._s_0.Z + dVar39);
      uVar30 = movmskpd((int)pFVar32,auVar41);
      auVar42._8_4_ = SUB84(dVar61,0);
      auVar42._0_8_ = dVar61;
      auVar42._12_4_ = uVar56;
      auVar43._8_8_ =
           -(ulonglong)
            ((auVar42._8_8_ + dVar14) - dVar9 < (param_3->Extent).field0_0x0._s_0.Y + dVar16);
      auVar43._0_8_ =
           -(ulonglong)((dVar61 + dVar13) - dVar9 < (param_3->Extent).field0_0x0._s_0.X + dVar15);
      uVar36 = movmskpd((int)pFVar35,auVar43);
      auVar64._8_8_ =
           -(ulonglong)(dVar48 - (param_3->Extent).field0_0x0._s_0.W <= (dVar12 - dVar61) + dVar9);
      auVar64._0_8_ =
           -(ulonglong)(dVar39 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar11 - dVar61) + dVar9);
      iVar27 = movmskpd(iVar27,auVar64);
      lVar38 = -(ulonglong)
                (dVar16 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar14 - dVar61) + dVar9);
      auVar10._8_4_ = (int)lVar38;
      auVar10._0_8_ =
           -(ulonglong)(dVar15 - (param_3->Extent).field0_0x0._s_0.X <= (dVar13 - dVar61) + dVar9);
      auVar10._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar25 = movmskpd(uVar36,auVar10);
      uVar22 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = _UNK_15074415c;
      uVar24 = _UNK_150744158;
      uVar23 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar9 = __real_3ff1000000000000;
      fVar18 = _UNK_15068954c;
      fVar17 = _UNK_150689548;
      dVar61 = __real_3fe0000000000000;
      uVar65 = (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8);
      uVar34 = 0;
      do {
        uVar28 = (~uVar34 & 7) << 3 | uVar34 & 7;
        if ((uVar28 & ((uVar30 & 1) << 2 | uVar36 & 7 | (iVar27 << 2 | uVar25) << 3)) == uVar28) {
          uVar57 = SUB84(param_2->ChildCenterOffset,0);
          uVar59 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar60 = SUB84(param_2->ChildCenterOffset,0) ^ uVar65;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar26;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar22) == uVar22);
          dVar48 = (double)(float)-(uint)((uVar34 & uVar23) == uVar23);
          uVar28 = SUB84(dVar39,0);
          uVar46 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar47 = SUB84(dVar48,0);
          uVar49 = (uint)((ulonglong)dVar48 >> 0x20);
          auVar44._0_4_ = ~uVar28 & uVar60;
          auVar44._4_4_ = ~uVar46 & uVar62;
          auVar44._8_4_ = ~uVar47 & uVar60;
          auVar44._12_4_ = ~uVar49 & uVar62;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar24) == uVar24);
          uVar51 = SUB84(dVar39,0);
          uVar53 = (uint)((ulonglong)dVar39 >> 0x20);
          dVar39 = (double)(float)-(uint)((uVar34 & uVar19) == uVar19);
          uVar54 = SUB84(dVar39,0);
          uVar55 = (uint)((ulonglong)dVar39 >> 0x20);
          auVar63._0_4_ = uVar28 & uVar57;
          auVar63._4_4_ = uVar46 & uVar59;
          auVar63._8_4_ = uVar47 & uVar57;
          auVar63._12_4_ = uVar49 & uVar59;
          local_f8._s_0.X = SUB168(auVar63 | auVar44,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar44,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar45._0_4_ = uVar51 & uVar57;
          auVar45._4_4_ = uVar53 & uVar59;
          auVar45._8_4_ = uVar54 & uVar57;
          auVar45._12_4_ = uVar55 & uVar59;
          auVar8._4_4_ = ~uVar53 & uVar62;
          auVar8._0_4_ = ~uVar51 & uVar60;
          auVar8._8_4_ = ~uVar54 & uVar60;
          auVar8._12_4_ = ~uVar55 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar45 | auVar8,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar17;
          local_f8._s_0.W =
               (SUB168(auVar45 | auVar8,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar18;
          local_c8._0_8_ = (double)fVar17 * local_b0;
          local_c8._8_8_ = (double)fVar18 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_b8 = local_b0 * dVar61 * dVar9;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndexFromOtherPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar34 + iVar2,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar33 = (char)uVar34 + 1;
        uVar34 = (uint)bVar33;
      } while ((char)bVar33 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGOctreeQueries::GetPointIndexInSphereUnderCondition<`UPCGOctreeQueries::GetFarthestPointFromOtherPoint'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f24da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  bool bVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  UPCGPointData *pUVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 *this_00;
  uint uVar33;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  byte bVar36;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar47;
  uint uVar48;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar49;
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar51;
  uint uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined4 uVar57;
  uint uVar58;
  undefined4 uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  uint uVar68;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  FScriptContainerElement *local_130;
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined4 uStack_fc;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  undefined7 extraout_var;
  uint uVar37;
  
  lVar34 = (longlong)(int)param_1;
  uVar39 = ~param_1 >> 0x1f;
  uVar24 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar24 = uVar39;
  }
  local_140 = uVar39;
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar34 * 8 + 4) != 0) {
    uVar24 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar39;
    }
    local_138 = lVar34;
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar33 = _UNK_15061cc8c;
    uVar27 = _UNK_15061cc88;
    uVar39 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_130 = (this->TreeElements).AllocatorInstance.Data + lVar34 * 0x410;
    local_144 = *(uint *)(local_130 + 0x408);
    uVar32 = (ulonglong)(int)local_144;
    pFVar35 = *(FScriptContainerElement **)(local_130 + 0x400);
    if (*(FScriptContainerElement **)(local_130 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar35 = local_130;
    }
    pFVar38 = pFVar35 + uVar32 * 0x40;
    while( true ) {
      uVar30 = (uint)uVar32;
      pFVar28 = local_130;
      if (*(uint *)(local_130 + 0x408) != uVar30) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar22 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar30 = (uint)this_00;
        pFVar28 = (FScriptContainerElement *)CONCAT71(extraout_var,bVar22);
      }
      lVar34 = local_138;
      uVar26 = local_140;
      if (pFVar35 == pFVar38) break;
      dVar65 = *(double *)(pFVar35 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar9 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar34 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar33,SUB84(dVar9,0) & uVar27))
      ;
      auVar6._8_4_ = (int)lVar34;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar35 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar39,
                                       SUB84(dVar65,0) & uVar24));
      auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
      uVar30 = movmskpd(uVar30,auVar6);
      dVar65 = *(double *)(pFVar35 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar9 = *(double *)(pFVar35 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar34 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar35 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar33,SUB84(dVar9,0) & uVar27))
      ;
      auVar7._8_4_ = (int)lVar34;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar35 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar39,
                                       SUB84(dVar65,0) & uVar24));
      auVar7._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
      iVar25 = movmskpd((int)pFVar28,auVar7);
      if (((uVar30 & 0x3fffffff) == 0 && iVar25 == 0) &&
         (cVar23 = (**(code **)(**(longlong **)param_4 + 0x480))(*(longlong **)param_4,pFVar35),
         cVar23 != '\0')) {
        plVar3 = *(longlong **)(param_4 + 8);
        if (plVar3 == (longlong *)0x0) {
          lVar34 = (**(code **)(**(longlong **)param_4 + 0x590))
                             (*(longlong **)param_4,*(uint *)pFVar35);
          local_110 = *(undefined1 (*) [16])(lVar34 + 0x20);
          uVar57 = local_110._0_4_;
          uVar59 = local_110._4_4_;
          uVar51 = *(undefined4 *)(lVar34 + 0x30);
          uVar53 = *(undefined4 *)(lVar34 + 0x34);
          auVar67._0_8_ = local_110._8_8_;
          auVar67._8_4_ = local_110._8_4_;
          auVar67._12_4_ = local_110._12_4_;
          local_100 = uVar51;
          uStack_fc = uVar53;
        }
        else {
          uVar30 = *(uint *)pFVar35;
          uVar26 = 0;
          if ((int)uVar30 < (int)plVar3[1]) {
            uVar26 = ~uVar30 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_128 = *(undefined1 (*) [16])((longlong)(int)uVar30 * 0xd0 + 0x20 + *plVar3);
          uVar57 = local_128._0_4_;
          uVar59 = local_128._4_4_;
          puVar1 = (undefined4 *)((longlong)(int)uVar30 * 0xd0 + 0x30 + *plVar3);
          uVar51 = *puVar1;
          uVar53 = puVar1[1];
          auVar12._4_8_ = unaff_XMM7_Qb;
          auVar12._0_4_ = uVar59;
          auVar66._0_8_ = auVar12._0_8_ << 0x20;
          auVar66._8_4_ = local_128._8_4_;
          auVar66._12_4_ = local_128._12_4_;
          auVar67._8_8_ = local_128._8_8_;
          auVar67._0_8_ = auVar66._8_8_;
          local_118 = uVar51;
          uStack_114 = uVar53;
        }
        pdVar4 = *(double **)(param_4 + 0x10);
        unaff_XMM7_Qb = auVar67._8_8_;
        dVar64 = auVar67._0_8_ - pdVar4[1];
        dVar9 = (double)CONCAT44(uVar59,uVar57) - *pdVar4;
        dVar65 = (double)CONCAT44(uVar53,uVar51) - pdVar4[2];
        dVar65 = dVar64 * dVar64 + dVar9 * dVar9 + dVar65 * dVar65;
        if (dVar65 < *(double *)(param_4 + 0x18) || dVar65 == *(double *)(param_4 + 0x18)) {
          uVar30 = *(uint *)pFVar35;
          dVar9 = **(double **)(param_4 + 0x20);
          pUVar29 = CastChecked<UPCGPointData,UPCGBasePointData_const_>
                              (*(UPCGBasePointData **)param_4);
          if (dVar9 <= dVar65) {
            uVar26 = 0;
            if ((int)uVar30 < (pUVar29->Points).ArrayNum) {
              uVar26 = ~uVar30 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(FScriptContainerElement **)(param_4 + 0x30) !=
                (pUVar29->Points).AllocatorInstance.Data + (longlong)(int)uVar30 * 0xd0) {
              **(double **)(param_4 + 0x20) = dVar65;
              **(uint **)(param_4 + 0x28) = uVar30;
            }
          }
        }
      }
      pFVar35 = pFVar35 + 0x40;
      uVar32 = (ulonglong)local_144;
    }
    iVar25 = (this->TreeNodes).ArrayNum;
    uVar24 = 0;
    if ((int)param_1 < iVar25) {
      uVar24 = local_140;
    }
    if (uVar24 == 0) {
      iVar25 = 0x506106c8;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar38 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar38 + lVar34 * 8) != -1) {
      dVar64 = (param_3->Center).field0_0x0._s_0.Z;
      dVar49 = (param_3->Center).field0_0x0._s_0.W;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar15 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar16 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar65 = param_2->ChildCenterOffset;
      dVar9 = param_2->ChildExtent;
      dVar17 = (param_3->Center).field0_0x0._s_0.X;
      dVar18 = (param_3->Center).field0_0x0._s_0.Y;
      auVar41._8_4_ = SUB84(dVar65,0);
      auVar41._0_8_ = dVar65;
      uVar57 = (undefined4)((ulonglong)dVar65 >> 0x20);
      auVar41._12_4_ = uVar57;
      auVar42._8_8_ =
           -(ulonglong)
            ((auVar41._8_8_ + dVar14) - dVar9 < (param_3->Extent).field0_0x0._s_0.W + dVar49);
      auVar42._0_8_ =
           -(ulonglong)((dVar65 + dVar13) - dVar9 < (param_3->Extent).field0_0x0._s_0.Z + dVar64);
      uVar33 = movmskpd((int)pFVar35,auVar42);
      auVar43._8_4_ = SUB84(dVar65,0);
      auVar43._0_8_ = dVar65;
      auVar43._12_4_ = uVar57;
      auVar44._8_8_ =
           -(ulonglong)
            ((auVar43._8_8_ + dVar16) - dVar9 < (param_3->Extent).field0_0x0._s_0.Y + dVar18);
      auVar44._0_8_ =
           -(ulonglong)((dVar65 + dVar15) - dVar9 < (param_3->Extent).field0_0x0._s_0.X + dVar17);
      uVar39 = movmskpd((int)pFVar38,auVar44);
      lVar40 = -(ulonglong)
                (dVar49 - (param_3->Extent).field0_0x0._s_0.W <= (dVar14 - dVar65) + dVar9);
      auVar10._8_4_ = (int)lVar40;
      auVar10._0_8_ =
           -(ulonglong)(dVar64 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar13 - dVar65) + dVar9);
      auVar10._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      iVar25 = movmskpd(iVar25,auVar10);
      lVar40 = -(ulonglong)
                (dVar18 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar16 - dVar65) + dVar9);
      auVar11._8_4_ = (int)lVar40;
      auVar11._0_8_ =
           -(ulonglong)(dVar17 - (param_3->Extent).field0_0x0._s_0.X <= (dVar15 - dVar65) + dVar9);
      auVar11._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar27 = movmskpd(uVar39,auVar11);
      uVar24 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar24 = uVar26;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = _UNK_15074415c;
      uVar26 = _UNK_150744158;
      uVar30 = _UNK_150744154;
      uVar24 = ___xmm_00000008000000040000000200000001;
      dVar9 = __real_3ff1000000000000;
      fVar20 = _UNK_15068954c;
      fVar19 = _UNK_150689548;
      dVar65 = __real_3fe0000000000000;
      uVar68 = (uint)__xmm_80000000000000008000000000000000;
      uVar32 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar34 * 8);
      uVar37 = 0;
      do {
        uVar31 = (~uVar37 & 7) << 3 | uVar37 & 7;
        if ((uVar31 & ((uVar33 & 1) << 2 | uVar39 & 7 | (iVar25 << 2 | uVar27) << 3)) == uVar31) {
          uVar58 = SUB84(param_2->ChildCenterOffset,0);
          uVar60 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar61 = SUB84(param_2->ChildCenterOffset,0) ^ uVar68;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar32;
          dVar64 = (double)(float)-(uint)((uVar37 & uVar24) == uVar24);
          dVar49 = (double)(float)-(uint)((uVar37 & uVar30) == uVar30);
          uVar31 = SUB84(dVar64,0);
          uVar47 = (uint)((ulonglong)dVar64 >> 0x20);
          uVar48 = SUB84(dVar49,0);
          uVar50 = (uint)((ulonglong)dVar49 >> 0x20);
          auVar45._0_4_ = ~uVar31 & uVar61;
          auVar45._4_4_ = ~uVar47 & uVar62;
          auVar45._8_4_ = ~uVar48 & uVar61;
          auVar45._12_4_ = ~uVar50 & uVar62;
          dVar64 = (double)(float)-(uint)((uVar37 & uVar26) == uVar26);
          uVar52 = SUB84(dVar64,0);
          uVar54 = (uint)((ulonglong)dVar64 >> 0x20);
          dVar64 = (double)(float)-(uint)((uVar37 & uVar21) == uVar21);
          uVar55 = SUB84(dVar64,0);
          uVar56 = (uint)((ulonglong)dVar64 >> 0x20);
          auVar63._0_4_ = uVar31 & uVar58;
          auVar63._4_4_ = uVar47 & uVar60;
          auVar63._8_4_ = uVar48 & uVar58;
          auVar63._12_4_ = uVar50 & uVar60;
          local_f8._s_0.X = SUB168(auVar63 | auVar45,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar45,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar46._0_4_ = uVar52 & uVar58;
          auVar46._4_4_ = uVar54 & uVar60;
          auVar46._8_4_ = uVar55 & uVar58;
          auVar46._12_4_ = uVar56 & uVar60;
          auVar8._4_4_ = ~uVar54 & uVar62;
          auVar8._0_4_ = ~uVar52 & uVar61;
          auVar8._8_4_ = ~uVar55 & uVar61;
          auVar8._12_4_ = ~uVar56 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar46 | auVar8,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar19;
          local_f8._s_0.W =
               (SUB168(auVar46 | auVar8,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar20;
          dVar64 = (double)fVar20 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_c8._8_4_ = SUB84(dVar64,0);
          local_c8._0_8_ = (double)fVar19 * local_b0;
          local_c8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
          local_b8 = local_b0 * dVar65 * dVar9;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar37 + iVar2,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar36 = (char)uVar37 + 1;
        uVar37 = (uint)bVar36;
      } while ((char)bVar36 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGOctreeQueries::GetPointIndexInSphereUnderCondition<`UPCGOctreeQueries::GetFarthestPointIndex'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f25410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined7 extraout_var;
  int iVar27;
  uint uVar28;
  longlong *plVar29;
  undefined1 *this_00;
  uint uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  byte bVar33;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  double dVar39;
  uint uVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  double dVar48;
  uint uVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar50;
  uint uVar51;
  undefined4 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined4 uVar56;
  uint uVar57;
  undefined4 uVar58;
  uint uVar59;
  uint uVar60;
  double dVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar34;
  
  lVar31 = (longlong)(int)param_1;
  uVar36 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar36;
  }
  local_140 = uVar36;
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8 + 4) != 0) {
    uVar22 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar22 = uVar36;
    }
    local_138 = lVar31;
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = _UNK_15061cc8c;
    uVar25 = _UNK_15061cc88;
    uVar36 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    plVar29 = (longlong *)(lVar31 * 0x410);
    pFVar35 = (this->TreeElements).AllocatorInstance.Data + (longlong)plVar29;
    local_144 = *(uint *)(pFVar35 + 0x408);
    uVar26 = (ulonglong)(int)local_144;
    pFVar32 = *(FScriptContainerElement **)(pFVar35 + 0x400);
    if (*(FScriptContainerElement **)(pFVar35 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar32 = pFVar35;
    }
    pFVar37 = pFVar32 + uVar26 * 0x40;
    while( true ) {
      uVar56 = SUB84(plVar29,0);
      uVar23 = (uint)uVar26;
      if (*(uint *)(pFVar35 + 0x408) != uVar23) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar20 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar56 = SUB84(this_00,0);
        uVar23 = (uint)CONCAT71(extraout_var,bVar20);
      }
      lVar31 = local_138;
      uVar24 = local_140;
      if (pFVar32 == pFVar37) break;
      dVar61 = *(double *)(pFVar32 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar9 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar30,SUB84(dVar9,0) & uVar25))
      ;
      auVar6._8_4_ = (int)lVar31;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar32 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar6._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar27 = movmskpd(uVar56,auVar6);
      dVar61 = *(double *)(pFVar32 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar9 = *(double *)(pFVar32 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar32 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar30,SUB84(dVar9,0) & uVar25))
      ;
      auVar7._8_4_ = (int)lVar31;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar32 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar7);
      uVar23 = iVar27 << 2 | uVar23;
      plVar29 = (longlong *)(ulonglong)uVar23;
      if (uVar23 == 0) {
        plVar29 = *(longlong **)param_4;
        cVar21 = (**(code **)(*plVar29 + 0x480))(plVar29,pFVar32);
        if (cVar21 != '\0') {
          plVar3 = *(longlong **)(param_4 + 8);
          if (plVar3 == (longlong *)0x0) {
            plVar29 = *(longlong **)param_4;
            lVar31 = (**(code **)(*plVar29 + 0x590))(plVar29,*(uint *)pFVar32);
            uVar56 = *(undefined4 *)(lVar31 + 0x20);
            uVar58 = *(undefined4 *)(lVar31 + 0x24);
            uVar50 = *(undefined4 *)(lVar31 + 0x28);
            uVar52 = *(undefined4 *)(lVar31 + 0x2c);
            dVar61 = *(double *)(lVar31 + 0x30);
            local_118 = uVar56;
            uStack_114 = uVar58;
            uStack_110 = uVar50;
            uStack_10c = uVar52;
            local_108 = dVar61;
          }
          else {
            uVar23 = *(uint *)pFVar32;
            uVar24 = 0;
            if ((int)uVar23 < (int)plVar3[1]) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar29 = (longlong *)((longlong)(int)uVar23 * 0xd0);
            puVar1 = (undefined4 *)((longlong)plVar29 + *plVar3 + 0x20);
            uVar56 = *puVar1;
            uVar58 = puVar1[1];
            uVar50 = puVar1[2];
            uVar52 = puVar1[3];
            dVar61 = *(double *)((longlong)plVar29 + *plVar3 + 0x30);
            local_130 = uVar56;
            uStack_12c = uVar58;
            uStack_128 = uVar50;
            uStack_124 = uVar52;
            local_120 = dVar61;
          }
          pdVar4 = *(double **)(param_4 + 0x10);
          dVar9 = (double)CONCAT44(uVar52,uVar50) - pdVar4[1];
          dVar39 = (double)CONCAT44(uVar58,uVar56) - *pdVar4;
          dVar61 = dVar9 * dVar9 + dVar39 * dVar39 + (dVar61 - pdVar4[2]) * (dVar61 - pdVar4[2]);
          if (dVar61 < *(double *)(param_4 + 0x18) || dVar61 == *(double *)(param_4 + 0x18)) {
            uVar23 = *(uint *)pFVar32;
            plVar29 = (longlong *)(ulonglong)uVar23;
            if (**(double **)(param_4 + 0x20) <= dVar61) {
              **(double **)(param_4 + 0x20) = dVar61;
              **(uint **)(param_4 + 0x28) = uVar23;
            }
          }
        }
      }
      uVar26 = (ulonglong)local_144;
      pFVar32 = pFVar32 + 0x40;
    }
    iVar27 = (this->TreeNodes).ArrayNum;
    uVar22 = 0;
    if ((int)param_1 < iVar27) {
      uVar22 = local_140;
    }
    if (uVar22 == 0) {
      iVar27 = 0x506106c8;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar35 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar35 + lVar31 * 8) != -1) {
      dVar39 = (param_3->Center).field0_0x0._s_0.Z;
      dVar48 = (param_3->Center).field0_0x0._s_0.W;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar61 = param_2->ChildCenterOffset;
      dVar9 = param_2->ChildExtent;
      auVar40._8_4_ = SUB84(dVar61,0);
      auVar40._0_8_ = dVar61;
      uVar56 = (undefined4)((ulonglong)dVar61 >> 0x20);
      auVar40._12_4_ = uVar56;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar15 = (param_3->Center).field0_0x0._s_0.X;
      dVar16 = (param_3->Center).field0_0x0._s_0.Y;
      auVar41._8_8_ =
           -(ulonglong)
            ((auVar40._8_8_ + dVar12) - dVar9 < (param_3->Extent).field0_0x0._s_0.W + dVar48);
      auVar41._0_8_ =
           -(ulonglong)((dVar61 + dVar11) - dVar9 < (param_3->Extent).field0_0x0._s_0.Z + dVar39);
      uVar30 = movmskpd((int)pFVar32,auVar41);
      auVar42._8_4_ = SUB84(dVar61,0);
      auVar42._0_8_ = dVar61;
      auVar42._12_4_ = uVar56;
      auVar43._8_8_ =
           -(ulonglong)
            ((auVar42._8_8_ + dVar14) - dVar9 < (param_3->Extent).field0_0x0._s_0.Y + dVar16);
      auVar43._0_8_ =
           -(ulonglong)((dVar61 + dVar13) - dVar9 < (param_3->Extent).field0_0x0._s_0.X + dVar15);
      uVar36 = movmskpd((int)pFVar35,auVar43);
      auVar64._8_8_ =
           -(ulonglong)(dVar48 - (param_3->Extent).field0_0x0._s_0.W <= (dVar12 - dVar61) + dVar9);
      auVar64._0_8_ =
           -(ulonglong)(dVar39 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar11 - dVar61) + dVar9);
      iVar27 = movmskpd(iVar27,auVar64);
      lVar38 = -(ulonglong)
                (dVar16 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar14 - dVar61) + dVar9);
      auVar10._8_4_ = (int)lVar38;
      auVar10._0_8_ =
           -(ulonglong)(dVar15 - (param_3->Extent).field0_0x0._s_0.X <= (dVar13 - dVar61) + dVar9);
      auVar10._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar25 = movmskpd(uVar36,auVar10);
      uVar22 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = _UNK_15074415c;
      uVar24 = _UNK_150744158;
      uVar23 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar9 = __real_3ff1000000000000;
      fVar18 = _UNK_15068954c;
      fVar17 = _UNK_150689548;
      dVar61 = __real_3fe0000000000000;
      uVar65 = (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8);
      uVar34 = 0;
      do {
        uVar28 = (~uVar34 & 7) << 3 | uVar34 & 7;
        if ((uVar28 & ((uVar30 & 1) << 2 | uVar36 & 7 | (iVar27 << 2 | uVar25) << 3)) == uVar28) {
          uVar57 = SUB84(param_2->ChildCenterOffset,0);
          uVar59 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar60 = SUB84(param_2->ChildCenterOffset,0) ^ uVar65;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar26;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar22) == uVar22);
          dVar48 = (double)(float)-(uint)((uVar34 & uVar23) == uVar23);
          uVar28 = SUB84(dVar39,0);
          uVar46 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar47 = SUB84(dVar48,0);
          uVar49 = (uint)((ulonglong)dVar48 >> 0x20);
          auVar44._0_4_ = ~uVar28 & uVar60;
          auVar44._4_4_ = ~uVar46 & uVar62;
          auVar44._8_4_ = ~uVar47 & uVar60;
          auVar44._12_4_ = ~uVar49 & uVar62;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar24) == uVar24);
          uVar51 = SUB84(dVar39,0);
          uVar53 = (uint)((ulonglong)dVar39 >> 0x20);
          dVar39 = (double)(float)-(uint)((uVar34 & uVar19) == uVar19);
          uVar54 = SUB84(dVar39,0);
          uVar55 = (uint)((ulonglong)dVar39 >> 0x20);
          auVar63._0_4_ = uVar28 & uVar57;
          auVar63._4_4_ = uVar46 & uVar59;
          auVar63._8_4_ = uVar47 & uVar57;
          auVar63._12_4_ = uVar49 & uVar59;
          local_f8._s_0.X = SUB168(auVar63 | auVar44,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar44,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar45._0_4_ = uVar51 & uVar57;
          auVar45._4_4_ = uVar53 & uVar59;
          auVar45._8_4_ = uVar54 & uVar57;
          auVar45._12_4_ = uVar55 & uVar59;
          auVar8._4_4_ = ~uVar53 & uVar62;
          auVar8._0_4_ = ~uVar51 & uVar60;
          auVar8._8_4_ = ~uVar54 & uVar60;
          auVar8._12_4_ = ~uVar55 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar45 | auVar8,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar17;
          local_f8._s_0.W =
               (SUB168(auVar45 | auVar8,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar18;
          local_c8._0_8_ = (double)fVar17 * local_b0;
          local_c8._8_8_ = (double)fVar18 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_b8 = local_b0 * dVar61 * dVar9;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar34 + iVar2,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar33 = (char)uVar34 + 1;
        uVar34 = (uint)bVar33;
      } while ((char)bVar33 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGOctreeQueries::GetPointIndexInSphereUnderCondition<`UPCGOctreeQueries::GetFarthestPointIndexFromOtherPointIndex'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f259e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndexFromOtherPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined7 extraout_var;
  int iVar27;
  uint uVar28;
  longlong *plVar29;
  undefined1 *this_00;
  uint uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  byte bVar33;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  double dVar39;
  uint uVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  double dVar48;
  uint uVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar50;
  uint uVar51;
  undefined4 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined4 uVar56;
  uint uVar57;
  undefined4 uVar58;
  uint uVar59;
  uint uVar60;
  double dVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar34;
  
  lVar31 = (longlong)(int)param_1;
  uVar36 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar36;
  }
  local_140 = uVar36;
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8 + 4) != 0) {
    uVar22 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar22 = uVar36;
    }
    local_138 = lVar31;
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = _UNK_15061cc8c;
    uVar25 = _UNK_15061cc88;
    uVar36 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    plVar29 = (longlong *)(lVar31 * 0x410);
    pFVar35 = (this->TreeElements).AllocatorInstance.Data + (longlong)plVar29;
    local_144 = *(uint *)(pFVar35 + 0x408);
    uVar26 = (ulonglong)(int)local_144;
    pFVar32 = *(FScriptContainerElement **)(pFVar35 + 0x400);
    if (*(FScriptContainerElement **)(pFVar35 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar32 = pFVar35;
    }
    pFVar37 = pFVar32 + uVar26 * 0x40;
    while( true ) {
      uVar56 = SUB84(plVar29,0);
      uVar23 = (uint)uVar26;
      if (*(uint *)(pFVar35 + 0x408) != uVar23) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar20 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar56 = SUB84(this_00,0);
        uVar23 = (uint)CONCAT71(extraout_var,bVar20);
      }
      lVar31 = local_138;
      uVar24 = local_140;
      if (pFVar32 == pFVar37) break;
      dVar61 = *(double *)(pFVar32 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar9 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar30,SUB84(dVar9,0) & uVar25))
      ;
      auVar6._8_4_ = (int)lVar31;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar32 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar6._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar27 = movmskpd(uVar56,auVar6);
      dVar61 = *(double *)(pFVar32 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar9 = *(double *)(pFVar32 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar31 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar32 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar30,SUB84(dVar9,0) & uVar25))
      ;
      auVar7._8_4_ = (int)lVar31;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar32 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar36,
                                       SUB84(dVar61,0) & uVar22));
      auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar7);
      uVar23 = iVar27 << 2 | uVar23;
      plVar29 = (longlong *)(ulonglong)uVar23;
      if (uVar23 == 0) {
        plVar29 = *(longlong **)param_4;
        cVar21 = (**(code **)(*plVar29 + 0x480))(plVar29,pFVar32);
        if (cVar21 != '\0') {
          plVar3 = *(longlong **)(param_4 + 8);
          if (plVar3 == (longlong *)0x0) {
            plVar29 = *(longlong **)param_4;
            lVar31 = (**(code **)(*plVar29 + 0x590))(plVar29,*(uint *)pFVar32);
            uVar56 = *(undefined4 *)(lVar31 + 0x20);
            uVar58 = *(undefined4 *)(lVar31 + 0x24);
            uVar50 = *(undefined4 *)(lVar31 + 0x28);
            uVar52 = *(undefined4 *)(lVar31 + 0x2c);
            dVar61 = *(double *)(lVar31 + 0x30);
            local_118 = uVar56;
            uStack_114 = uVar58;
            uStack_110 = uVar50;
            uStack_10c = uVar52;
            local_108 = dVar61;
          }
          else {
            uVar23 = *(uint *)pFVar32;
            uVar24 = 0;
            if ((int)uVar23 < (int)plVar3[1]) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar29 = (longlong *)((longlong)(int)uVar23 * 0xd0);
            puVar1 = (undefined4 *)((longlong)plVar29 + *plVar3 + 0x20);
            uVar56 = *puVar1;
            uVar58 = puVar1[1];
            uVar50 = puVar1[2];
            uVar52 = puVar1[3];
            dVar61 = *(double *)((longlong)plVar29 + *plVar3 + 0x30);
            local_130 = uVar56;
            uStack_12c = uVar58;
            uStack_128 = uVar50;
            uStack_124 = uVar52;
            local_120 = dVar61;
          }
          pdVar4 = *(double **)(param_4 + 0x10);
          dVar9 = (double)CONCAT44(uVar52,uVar50) - pdVar4[1];
          dVar39 = (double)CONCAT44(uVar58,uVar56) - *pdVar4;
          dVar61 = dVar9 * dVar9 + dVar39 * dVar39 + (dVar61 - pdVar4[2]) * (dVar61 - pdVar4[2]);
          if (dVar61 < *(double *)(param_4 + 0x18) || dVar61 == *(double *)(param_4 + 0x18)) {
            uVar23 = *(uint *)pFVar32;
            plVar29 = (longlong *)(ulonglong)uVar23;
            if ((**(double **)(param_4 + 0x20) <= dVar61) && (uVar23 != *(uint *)(param_4 + 0x30)))
            {
              **(double **)(param_4 + 0x20) = dVar61;
              **(uint **)(param_4 + 0x28) = uVar23;
            }
          }
        }
      }
      uVar26 = (ulonglong)local_144;
      pFVar32 = pFVar32 + 0x40;
    }
    iVar27 = (this->TreeNodes).ArrayNum;
    uVar22 = 0;
    if ((int)param_1 < iVar27) {
      uVar22 = local_140;
    }
    if (uVar22 == 0) {
      iVar27 = 0x506106c8;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar35 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar35 + lVar31 * 8) != -1) {
      dVar39 = (param_3->Center).field0_0x0._s_0.Z;
      dVar48 = (param_3->Center).field0_0x0._s_0.W;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar61 = param_2->ChildCenterOffset;
      dVar9 = param_2->ChildExtent;
      auVar40._8_4_ = SUB84(dVar61,0);
      auVar40._0_8_ = dVar61;
      uVar56 = (undefined4)((ulonglong)dVar61 >> 0x20);
      auVar40._12_4_ = uVar56;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar15 = (param_3->Center).field0_0x0._s_0.X;
      dVar16 = (param_3->Center).field0_0x0._s_0.Y;
      auVar41._8_8_ =
           -(ulonglong)
            ((auVar40._8_8_ + dVar12) - dVar9 < (param_3->Extent).field0_0x0._s_0.W + dVar48);
      auVar41._0_8_ =
           -(ulonglong)((dVar61 + dVar11) - dVar9 < (param_3->Extent).field0_0x0._s_0.Z + dVar39);
      uVar30 = movmskpd((int)pFVar32,auVar41);
      auVar42._8_4_ = SUB84(dVar61,0);
      auVar42._0_8_ = dVar61;
      auVar42._12_4_ = uVar56;
      auVar43._8_8_ =
           -(ulonglong)
            ((auVar42._8_8_ + dVar14) - dVar9 < (param_3->Extent).field0_0x0._s_0.Y + dVar16);
      auVar43._0_8_ =
           -(ulonglong)((dVar61 + dVar13) - dVar9 < (param_3->Extent).field0_0x0._s_0.X + dVar15);
      uVar36 = movmskpd((int)pFVar35,auVar43);
      auVar64._8_8_ =
           -(ulonglong)(dVar48 - (param_3->Extent).field0_0x0._s_0.W <= (dVar12 - dVar61) + dVar9);
      auVar64._0_8_ =
           -(ulonglong)(dVar39 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar11 - dVar61) + dVar9);
      iVar27 = movmskpd(iVar27,auVar64);
      lVar38 = -(ulonglong)
                (dVar16 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar14 - dVar61) + dVar9);
      auVar10._8_4_ = (int)lVar38;
      auVar10._0_8_ =
           -(ulonglong)(dVar15 - (param_3->Extent).field0_0x0._s_0.X <= (dVar13 - dVar61) + dVar9);
      auVar10._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar25 = movmskpd(uVar36,auVar10);
      uVar22 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = _UNK_15074415c;
      uVar24 = _UNK_150744158;
      uVar23 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar9 = __real_3ff1000000000000;
      fVar18 = _UNK_15068954c;
      fVar17 = _UNK_150689548;
      dVar61 = __real_3fe0000000000000;
      uVar65 = (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar31 * 8);
      uVar34 = 0;
      do {
        uVar28 = (~uVar34 & 7) << 3 | uVar34 & 7;
        if ((uVar28 & ((uVar30 & 1) << 2 | uVar36 & 7 | (iVar27 << 2 | uVar25) << 3)) == uVar28) {
          uVar57 = SUB84(param_2->ChildCenterOffset,0);
          uVar59 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar60 = SUB84(param_2->ChildCenterOffset,0) ^ uVar65;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar26;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar22) == uVar22);
          dVar48 = (double)(float)-(uint)((uVar34 & uVar23) == uVar23);
          uVar28 = SUB84(dVar39,0);
          uVar46 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar47 = SUB84(dVar48,0);
          uVar49 = (uint)((ulonglong)dVar48 >> 0x20);
          auVar44._0_4_ = ~uVar28 & uVar60;
          auVar44._4_4_ = ~uVar46 & uVar62;
          auVar44._8_4_ = ~uVar47 & uVar60;
          auVar44._12_4_ = ~uVar49 & uVar62;
          dVar39 = (double)(float)-(uint)((uVar34 & uVar24) == uVar24);
          uVar51 = SUB84(dVar39,0);
          uVar53 = (uint)((ulonglong)dVar39 >> 0x20);
          dVar39 = (double)(float)-(uint)((uVar34 & uVar19) == uVar19);
          uVar54 = SUB84(dVar39,0);
          uVar55 = (uint)((ulonglong)dVar39 >> 0x20);
          auVar63._0_4_ = uVar28 & uVar57;
          auVar63._4_4_ = uVar46 & uVar59;
          auVar63._8_4_ = uVar47 & uVar57;
          auVar63._12_4_ = uVar49 & uVar59;
          local_f8._s_0.X = SUB168(auVar63 | auVar44,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar44,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar45._0_4_ = uVar51 & uVar57;
          auVar45._4_4_ = uVar53 & uVar59;
          auVar45._8_4_ = uVar54 & uVar57;
          auVar45._12_4_ = uVar55 & uVar59;
          auVar8._4_4_ = ~uVar53 & uVar62;
          auVar8._0_4_ = ~uVar51 & uVar60;
          auVar8._8_4_ = ~uVar54 & uVar60;
          auVar8._12_4_ = ~uVar55 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar45 | auVar8,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar17;
          local_f8._s_0.W =
               (SUB168(auVar45 | auVar8,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar18;
          local_c8._0_8_ = (double)fVar17 * local_b0;
          local_c8._8_8_ = (double)fVar18 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_b8 = local_b0 * dVar61 * dVar9;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndexFromOtherPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar34 + iVar2,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar33 = (char)uVar34 + 1;
        uVar34 = (uint)bVar33;
      } while ((char)bVar33 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`UPCGOctreeQueries::GetPointsInsideSphere'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 149f25fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_UPCGOctreeQueries::GetPointsInsideSphere_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined7 extraout_var;
  FScriptContainerElement *extraout_RAX;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  undefined1 *this_00;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  byte bVar35;
  FPointRef *pFVar37;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  longlong lVar40;
  longlong lVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  double dVar50;
  uint uVar51;
  double dVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  undefined1 local_res8 [8];
  uint local_res10;
  FOctreeNodeContext *local_res18;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  FScriptContainerElement *pFVar27;
  uint uVar36;
  
  uVar38 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar38;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((uVar22 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8 + 4) != 0) {
    iVar30 = (this->TreeElements).ArrayNum;
    pcVar32 = (char *)(longlong)iVar30;
    uVar22 = 0;
    if ((int)param_1 < iVar30) {
      uVar22 = uVar38;
    }
    if (uVar22 == 0) {
      pcVar32 = "(Index >= 0) & (Index < ArrayNum)";
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar33 = _UNK_15061cc8c;
    uVar26 = _UNK_15061cc88;
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar39 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x410;
    iVar30 = *(int *)(pFVar39 + 0x408);
    pFVar27 = *(FScriptContainerElement **)(pFVar39 + 0x400);
    if (*(FScriptContainerElement **)(pFVar39 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar27 = pFVar39;
    }
    pFVar37 = (FPointRef *)(pFVar27 + (longlong)iVar30 * 0x40);
    pFVar34 = pFVar27 + 0x20;
    while( true ) {
      uVar23 = SUB84(pFVar27,0);
      uVar28 = SUB84(pcVar32,0);
      if (*(int *)(pFVar39 + 0x408) != iVar30) {
        this_00 = local_res8;
        local_res8[0] = 0;
        bVar21 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar28 = SUB84(this_00,0);
        uVar23 = (undefined4)CONCAT71(extraout_var,bVar21);
      }
      uVar24 = local_res10;
      if ((FPointRef *)(pFVar34 + -0x20) == pFVar37) break;
      dVar50 = *(double *)(pFVar34 + -8) - (param_3->Center).field0_0x0._s_0.Z;
      dVar52 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar40 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar33,SUB84(dVar52,0) & uVar26
                                ));
      auVar6._8_4_ = (int)lVar40;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar34 + 0x10) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar25,
                                       SUB84(dVar50,0) & uVar22));
      auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      iVar29 = movmskpd(uVar28,auVar6);
      dVar50 = *(double *)(pFVar34 + -0x18) - (param_3->Center).field0_0x0._s_0.X;
      dVar52 = *(double *)(pFVar34 + -0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar40 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar34 + 8) <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar33,SUB84(dVar52,0) & uVar26
                                ));
      auVar7._8_4_ = (int)lVar40;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)pFVar34 <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar25,
                                       SUB84(dVar50,0) & uVar22));
      auVar7._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar24 = movmskpd(uVar23,auVar7);
      pFVar27 = (FScriptContainerElement *)(ulonglong)uVar24;
      uVar24 = iVar29 << 2 | uVar24;
      pcVar32 = (char *)(ulonglong)uVar24;
      if (uVar24 == 0) {
        pcVar32 = (char *)param_4;
        `UPCGOctreeQueries::
        ForEachPointInsideSphere<`UPCGOctreeQueries::GetPointsInsideSphere'::__l2::<lambda_1>_>'::
        __l2::<lambda_1>::operator()(param_4,(FPointRef *)(pFVar34 + -0x20));
        pFVar27 = extraout_RAX;
      }
      pFVar34 = pFVar34 + 0x40;
    }
    iVar30 = (this->TreeNodes).ArrayNum;
    lVar40 = (longlong)(int)local_res10;
    uVar22 = 0;
    if ((int)local_res10 < iVar30) {
      uVar22 = uVar38;
    }
    if (uVar22 == 0) {
      iVar30 = 0x506106c8;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar27 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar27 + lVar40 * 8) != -1) {
      dVar5 = (param_3->Center).field0_0x0._s_0.Z;
      dVar10 = (param_3->Center).field0_0x0._s_0.W;
      dVar11 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar12 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar50 = local_res18->ChildCenterOffset;
      dVar52 = local_res18->ChildExtent;
      dVar13 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar14 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar15 = (param_3->Center).field0_0x0._s_0.X;
      dVar16 = (param_3->Center).field0_0x0._s_0.Y;
      lVar41 = -(ulonglong)
                ((dVar50 + dVar12) - dVar52 < (param_3->Extent).field0_0x0._s_0.W + dVar10);
      auVar2._8_4_ = (int)lVar41;
      auVar2._0_8_ = -(ulonglong)
                      ((dVar50 + dVar11) - dVar52 < (param_3->Extent).field0_0x0._s_0.Z + dVar5);
      auVar2._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar33 = movmskpd((int)pFVar34,auVar2);
      lVar41 = -(ulonglong)
                ((dVar50 + dVar14) - dVar52 < (param_3->Extent).field0_0x0._s_0.Y + dVar16);
      auVar3._8_4_ = (int)lVar41;
      auVar3._0_8_ = -(ulonglong)
                      ((dVar50 + dVar13) - dVar52 < (param_3->Extent).field0_0x0._s_0.X + dVar15);
      auVar3._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar25 = movmskpd((int)pFVar27,auVar3);
      auVar57._8_8_ =
           -(ulonglong)(dVar10 - (param_3->Extent).field0_0x0._s_0.W <= (dVar12 - dVar50) + dVar52);
      auVar57._0_8_ =
           -(ulonglong)(dVar5 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar11 - dVar50) + dVar52);
      iVar30 = movmskpd(iVar30,auVar57);
      lVar41 = -(ulonglong)
                (dVar16 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar14 - dVar50) + dVar52);
      auVar9._8_4_ = (int)lVar41;
      auVar9._0_8_ = -(ulonglong)
                      (dVar15 - (param_3->Extent).field0_0x0._s_0.X <= (dVar13 - dVar50) + dVar52);
      auVar9._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar26 = movmskpd(uVar25,auVar9);
      uVar22 = 0;
      if ((int)uVar24 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar38;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar20 = _UNK_15074415c;
      uVar24 = _UNK_150744158;
      uVar38 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar52 = __real_3ff1000000000000;
      fVar19 = _UNK_15068954c;
      fVar18 = _UNK_150689548;
      dVar50 = __real_3fe0000000000000;
      uVar36 = 0;
      uVar58 = (uint)__xmm_80000000000000008000000000000000;
      uVar17 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar29 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar40 * 8);
      do {
        uVar31 = (~uVar36 & 7) << 3 | uVar36 & 7;
        if ((uVar31 & ((uVar33 & 1) << 2 | uVar25 & 7 | (iVar30 << 2 | uVar26) << 3)) == uVar31) {
          uVar53 = SUB84(local_res18->ChildCenterOffset,0) ^ uVar58;
          uVar54 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20) ^ (uint)uVar17;
          dVar5 = (double)(float)-(uint)((uVar36 & uVar22) == uVar22);
          uVar31 = SUB84(dVar5,0);
          uVar42 = (uint)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)(float)-(uint)((uVar36 & uVar38) == uVar38);
          uVar43 = SUB84(dVar5,0);
          uVar44 = (uint)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)(float)-(uint)((uVar36 & uVar24) == uVar24);
          uVar45 = SUB84(dVar5,0);
          uVar46 = (uint)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)(float)-(uint)((uVar36 & uVar20) == uVar20);
          uVar47 = SUB84(dVar5,0);
          uVar48 = (uint)((ulonglong)dVar5 >> 0x20);
          uVar49 = SUB84(local_res18->ChildCenterOffset,0);
          auVar56._0_4_ = uVar31 & uVar49;
          uVar51 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20);
          auVar56._4_4_ = uVar42 & uVar51;
          auVar56._8_4_ = uVar43 & uVar49;
          auVar56._12_4_ = uVar44 & uVar51;
          auVar4._4_4_ = ~uVar42 & uVar54;
          auVar4._0_4_ = ~uVar31 & uVar53;
          auVar4._8_4_ = ~uVar43 & uVar53;
          auVar4._12_4_ = ~uVar44 & uVar54;
          local_f8._s_0.X =
               SUB168(auVar56 | auVar4,0) + (local_res18->Bounds).Center.field0_0x0._s_0.X;
          local_f8._s_0.Y =
               SUB168(auVar56 | auVar4,8) + (local_res18->Bounds).Center.field0_0x0._s_0.Y;
          auVar55._0_4_ = uVar45 & uVar49;
          auVar55._4_4_ = uVar46 & uVar51;
          auVar55._8_4_ = uVar47 & uVar49;
          auVar55._12_4_ = uVar48 & uVar51;
          auVar8._4_4_ = ~uVar46 & uVar54;
          auVar8._0_4_ = ~uVar45 & uVar53;
          auVar8._8_4_ = ~uVar47 & uVar53;
          auVar8._12_4_ = ~uVar48 & uVar54;
          local_b0 = local_res18->ChildExtent;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          dVar5 = local_b0 * (double)fVar19;
          local_f8._16_8_ =
               (SUB168(auVar55 | auVar8,0) + (local_res18->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar18;
          local_f8._24_8_ =
               (SUB168(auVar55 | auVar8,8) + (local_res18->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar19;
          local_c8._8_4_ = SUB84(dVar5,0);
          local_c8._0_8_ = local_b0 * (double)fVar18;
          local_c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_b8 = local_b0 * dVar50 * dVar52;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_UPCGOctreeQueries::GetPointsInsideSphere_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                    (this,uVar36 + iVar29,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar35 = (char)uVar36 + 1;
        uVar36 = (uint)bVar35;
      } while ((char)bVar35 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::ForEachPointInsideSphere<`PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_3>_>'::__l2::<lambda_1>_> @ 149f26470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_3>_>_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  bool bVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 *this_00;
  uint uVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  byte bVar35;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  longlong lVar39;
  double dVar40;
  uint uVar48;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar47;
  double dVar49;
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar51;
  uint uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined4 uVar57;
  uint uVar58;
  undefined4 uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar63 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  uint uVar66;
  undefined1 local_148 [4];
  uint local_144;
  uint local_140;
  longlong local_138;
  FScriptContainerElement *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  undefined7 extraout_var;
  uint uVar36;
  
  lVar33 = (longlong)(int)param_1;
  uVar38 = ~param_1 >> 0x1f;
  uVar24 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar24 = uVar38;
  }
  local_140 = uVar38;
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar33 * 8 + 4) != 0) {
    uVar24 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar24 = uVar38;
    }
    local_138 = lVar33;
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar32 = _UNK_15061cc8c;
    uVar27 = _UNK_15061cc88;
    uVar38 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_130 = (this->TreeElements).AllocatorInstance.Data + lVar33 * 0x410;
    local_144 = *(uint *)(local_130 + 0x408);
    uVar31 = (ulonglong)(int)local_144;
    pFVar34 = *(FScriptContainerElement **)(local_130 + 0x400);
    if (*(FScriptContainerElement **)(local_130 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar34 = local_130;
    }
    pFVar37 = pFVar34 + uVar31 * 0x40;
    while( true ) {
      uVar29 = (uint)uVar31;
      pFVar28 = local_130;
      if (*(uint *)(local_130 + 0x408) != uVar29) {
        this_00 = local_148;
        local_148[0] = 0;
        bVar22 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar29 = (uint)this_00;
        pFVar28 = (FScriptContainerElement *)CONCAT71(extraout_var,bVar22);
      }
      lVar33 = local_138;
      uVar26 = local_140;
      if (pFVar34 == pFVar37) break;
      dVar9 = *(double *)(pFVar34 + 0x18) - (param_3->Center).field0_0x0._s_0.Z;
      dVar10 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar33 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar32,SUB84(dVar10,0) & uVar27
                                ));
      auVar6._8_4_ = (int)lVar33;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar34 + 0x30) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar38,
                                       SUB84(dVar9,0) & uVar24));
      auVar6._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      uVar29 = movmskpd(uVar29,auVar6);
      dVar9 = *(double *)(pFVar34 + 8) - (param_3->Center).field0_0x0._s_0.X;
      dVar10 = *(double *)(pFVar34 + 0x10) - (param_3->Center).field0_0x0._s_0.Y;
      lVar33 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.Y + *(double *)(pFVar34 + 0x28) <
                (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar32,SUB84(dVar10,0) & uVar27
                                ));
      auVar7._8_4_ = (int)lVar33;
      auVar7._0_8_ = -(ulonglong)
                      ((param_3->Extent).field0_0x0._s_0.X + *(double *)(pFVar34 + 0x20) <
                      (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar38,
                                       SUB84(dVar9,0) & uVar24));
      auVar7._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      iVar25 = movmskpd((int)pFVar28,auVar7);
      if (((uVar29 & 0x3fffffff) == 0 && iVar25 == 0) &&
         (cVar23 = (**(code **)(**(longlong **)param_4 + 0x480))(*(longlong **)param_4,pFVar34),
         cVar23 != '\0')) {
        plVar3 = *(longlong **)(param_4 + 8);
        if (plVar3 == (longlong *)0x0) {
          lVar33 = (**(code **)(**(longlong **)param_4 + 0x590))
                             (*(longlong **)param_4,*(uint *)pFVar34);
          uVar57 = *(undefined4 *)(lVar33 + 0x20);
          uVar59 = *(undefined4 *)(lVar33 + 0x24);
          uVar64 = *(undefined4 *)(lVar33 + 0x28);
          uVar65 = *(undefined4 *)(lVar33 + 0x2c);
          uVar51 = *(undefined4 *)(lVar33 + 0x30);
          uVar53 = *(undefined4 *)(lVar33 + 0x34);
          local_110 = uVar57;
          uStack_10c = uVar59;
          uStack_108 = uVar64;
          uStack_104 = uVar65;
          local_100 = uVar51;
          uStack_fc = uVar53;
        }
        else {
          uVar29 = *(uint *)pFVar34;
          uVar26 = 0;
          if ((int)uVar29 < (int)plVar3[1]) {
            uVar26 = ~uVar29 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar1 = (undefined4 *)((longlong)(int)uVar29 * 0xd0 + 0x20 + *plVar3);
          uVar57 = *puVar1;
          uVar59 = puVar1[1];
          uVar64 = puVar1[2];
          uVar65 = puVar1[3];
          puVar1 = (undefined4 *)((longlong)(int)uVar29 * 0xd0 + 0x30 + *plVar3);
          uVar51 = *puVar1;
          uVar53 = puVar1[1];
          local_128 = uVar57;
          uStack_124 = uVar59;
          uStack_120 = uVar64;
          uStack_11c = uVar65;
          local_118 = uVar51;
          uStack_114 = uVar53;
        }
        pdVar4 = *(double **)(param_4 + 0x10);
        dVar40 = (double)CONCAT44(uVar65,uVar64) - pdVar4[1];
        dVar10 = (double)CONCAT44(uVar59,uVar57) - *pdVar4;
        dVar9 = (double)CONCAT44(uVar53,uVar51) - pdVar4[2];
        dVar9 = dVar40 * dVar40 + dVar10 * dVar10 + dVar9 * dVar9;
        if (dVar9 < *(double *)(param_4 + 0x18) || dVar9 == *(double *)(param_4 + 0x18)) {
          uVar29 = *(uint *)pFVar34;
          plVar3 = *(longlong **)(param_4 + 0x20);
          uVar26 = 0;
          if ((int)uVar29 < (int)plVar3[1]) {
            uVar26 = ~uVar29 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_2>::operator()
                    (*(void **)(param_4 + 0x28),
                     (FPCGPoint *)((longlong)(int)uVar29 * 0xd0 + *plVar3),dVar9);
        }
      }
      pFVar34 = pFVar34 + 0x40;
      uVar31 = (ulonglong)local_144;
    }
    iVar25 = (this->TreeNodes).ArrayNum;
    uVar24 = 0;
    if ((int)param_1 < iVar25) {
      uVar24 = local_140;
    }
    if (uVar24 == 0) {
      iVar25 = 0x506106c8;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar37 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar37 + lVar33 * 8) != -1) {
      dVar40 = (param_3->Center).field0_0x0._s_0.Z;
      dVar49 = (param_3->Center).field0_0x0._s_0.W;
      dVar13 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar14 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar15 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar16 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar9 = param_2->ChildCenterOffset;
      dVar10 = param_2->ChildExtent;
      dVar17 = (param_3->Center).field0_0x0._s_0.X;
      dVar18 = (param_3->Center).field0_0x0._s_0.Y;
      auVar41._8_4_ = SUB84(dVar9,0);
      auVar41._0_8_ = dVar9;
      uVar57 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar41._12_4_ = uVar57;
      auVar42._8_8_ =
           -(ulonglong)
            ((auVar41._8_8_ + dVar14) - dVar10 < (param_3->Extent).field0_0x0._s_0.W + dVar49);
      auVar42._0_8_ =
           -(ulonglong)((dVar9 + dVar13) - dVar10 < (param_3->Extent).field0_0x0._s_0.Z + dVar40);
      uVar32 = movmskpd((int)pFVar34,auVar42);
      auVar43._8_4_ = SUB84(dVar9,0);
      auVar43._0_8_ = dVar9;
      auVar43._12_4_ = uVar57;
      auVar44._8_8_ =
           -(ulonglong)
            ((auVar43._8_8_ + dVar16) - dVar10 < (param_3->Extent).field0_0x0._s_0.Y + dVar18);
      auVar44._0_8_ =
           -(ulonglong)((dVar9 + dVar15) - dVar10 < (param_3->Extent).field0_0x0._s_0.X + dVar17);
      uVar38 = movmskpd((int)pFVar37,auVar44);
      lVar39 = -(ulonglong)
                (dVar49 - (param_3->Extent).field0_0x0._s_0.W <= (dVar14 - dVar9) + dVar10);
      auVar11._8_4_ = (int)lVar39;
      auVar11._0_8_ =
           -(ulonglong)(dVar40 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar13 - dVar9) + dVar10);
      auVar11._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
      iVar25 = movmskpd(iVar25,auVar11);
      lVar39 = -(ulonglong)
                (dVar18 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar16 - dVar9) + dVar10);
      auVar12._8_4_ = (int)lVar39;
      auVar12._0_8_ =
           -(ulonglong)(dVar17 - (param_3->Extent).field0_0x0._s_0.X <= (dVar15 - dVar9) + dVar10);
      auVar12._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
      uVar27 = movmskpd(uVar38,auVar12);
      uVar24 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar24 = uVar26;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = _UNK_15074415c;
      uVar26 = _UNK_150744158;
      uVar29 = _UNK_150744154;
      uVar24 = ___xmm_00000008000000040000000200000001;
      dVar10 = __real_3ff1000000000000;
      fVar20 = _UNK_15068954c;
      fVar19 = _UNK_150689548;
      dVar9 = __real_3fe0000000000000;
      uVar66 = (uint)__xmm_80000000000000008000000000000000;
      uVar31 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar2 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar33 * 8);
      uVar36 = 0;
      do {
        uVar30 = (~uVar36 & 7) << 3 | uVar36 & 7;
        if ((uVar30 & ((uVar32 & 1) << 2 | uVar38 & 7 | (iVar25 << 2 | uVar27) << 3)) == uVar30) {
          uVar58 = SUB84(param_2->ChildCenterOffset,0);
          uVar60 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          uVar61 = SUB84(param_2->ChildCenterOffset,0) ^ uVar66;
          uVar62 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar31;
          dVar40 = (double)(float)-(uint)((uVar36 & uVar24) == uVar24);
          dVar49 = (double)(float)-(uint)((uVar36 & uVar29) == uVar29);
          uVar30 = SUB84(dVar40,0);
          uVar47 = (uint)((ulonglong)dVar40 >> 0x20);
          uVar48 = SUB84(dVar49,0);
          uVar50 = (uint)((ulonglong)dVar49 >> 0x20);
          auVar45._0_4_ = ~uVar30 & uVar61;
          auVar45._4_4_ = ~uVar47 & uVar62;
          auVar45._8_4_ = ~uVar48 & uVar61;
          auVar45._12_4_ = ~uVar50 & uVar62;
          dVar40 = (double)(float)-(uint)((uVar36 & uVar26) == uVar26);
          uVar52 = SUB84(dVar40,0);
          uVar54 = (uint)((ulonglong)dVar40 >> 0x20);
          dVar40 = (double)(float)-(uint)((uVar36 & uVar21) == uVar21);
          uVar55 = SUB84(dVar40,0);
          uVar56 = (uint)((ulonglong)dVar40 >> 0x20);
          auVar63._0_4_ = uVar30 & uVar58;
          auVar63._4_4_ = uVar47 & uVar60;
          auVar63._8_4_ = uVar48 & uVar58;
          auVar63._12_4_ = uVar50 & uVar60;
          local_f8._s_0.X = SUB168(auVar63 | auVar45,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar63 | auVar45,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar46._0_4_ = uVar52 & uVar58;
          auVar46._4_4_ = uVar54 & uVar60;
          auVar46._8_4_ = uVar55 & uVar58;
          auVar46._12_4_ = uVar56 & uVar60;
          auVar8._4_4_ = ~uVar54 & uVar62;
          auVar8._0_4_ = ~uVar52 & uVar61;
          auVar8._8_4_ = ~uVar55 & uVar61;
          auVar8._12_4_ = ~uVar56 & uVar62;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar46 | auVar8,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar19;
          local_f8._s_0.W =
               (SUB168(auVar46 | auVar8,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar20;
          dVar40 = (double)fVar20 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_c8._8_4_ = SUB84(dVar40,0);
          local_c8._0_8_ = (double)fVar19 * local_b0;
          local_c8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          local_b8 = local_b0 * dVar9 * dVar10;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_3>_>_::__l2::<lambda_1>_>
                    (this,uVar36 + iVar2,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar35 = (char)uVar36 + 1;
        uVar36 = (uint)bVar35;
      } while ((char)bVar35 < '\b');
    }
  }
  return;
}

// FindElementsWithBoundsTestInternal<`UPCGOctreeQueries::GetPointsInsideBounds'::__l2::<lambda_1>_> @ 149f26ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::GetPointsInsideBounds_::__l2::<lambda_1>_>
          (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this,uint param_1
          ,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  int iVar1;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong uVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  undefined1 *this_00;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  byte bVar35;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  double dVar39;
  uint uVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar47;
  double dVar49;
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  double dVar56;
  double dVar57;
  uint uVar58;
  uint uVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar63;
  undefined1 local_118 [4];
  uint local_114;
  uint local_110;
  FScriptContainerElement *local_108;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar36;
  
  uVar23 = 0;
  uVar30 = ~param_1 >> 0x1f;
  uVar20 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar20 = uVar30;
  }
  local_110 = uVar30;
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8 + 4) != 0) {
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar23 = (ulonglong)uVar30;
    }
    if ((int)uVar23 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar23 = CONCAT71(extraout_var,bVar19);
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar31 = _UNK_15061cc8c;
    uVar22 = _UNK_15061cc88;
    uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar37 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x410;
    local_114 = *(uint *)(pFVar37 + 0x408);
    uVar28 = (ulonglong)(int)local_114;
    pFVar27 = *(FScriptContainerElement **)(pFVar37 + 0x400);
    if (*(FScriptContainerElement **)(pFVar37 + 0x400) == (FScriptContainerElement *)0x0) {
      pFVar27 = pFVar37;
    }
    pFVar32 = pFVar27 + uVar28 * 0x40;
    pFVar33 = pFVar27 + 0x20;
    pFVar34 = pFVar27;
    local_108 = pFVar32;
    while( true ) {
      uVar60 = (undefined4)uVar23;
      uVar24 = SUB84(pFVar27,0);
      if (*(int *)(pFVar37 + 0x408) != (int)uVar28) {
        this_00 = local_118;
        local_118[0] = 0;
        bVar19 = `TCheckedPointerIterator<PCGPointOctree::FPointRef_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar24 = SUB84(this_00,0);
        uVar60 = (undefined4)CONCAT71(extraout_var_00,bVar19);
      }
      if (pFVar34 == pFVar32) break;
      dVar56 = *(double *)(pFVar33 + -8) - (param_3->Center).field0_0x0._s_0.Z;
      dVar57 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar38 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar31,SUB84(dVar57,0) & uVar22
                                ));
      auVar5._8_4_ = (int)lVar38;
      auVar5._0_8_ = -(ulonglong)
                      (*(double *)(pFVar33 + 0x10) + (param_3->Extent).field0_0x0._s_0.Z <
                      (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar30,
                                       SUB84(dVar56,0) & uVar20));
      auVar5._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      iVar25 = movmskpd(uVar24,auVar5);
      dVar56 = *(double *)(pFVar33 + -0x18) - (param_3->Center).field0_0x0._s_0.X;
      dVar57 = *(double *)(pFVar33 + -0x10) - (param_3->Center).field0_0x0._s_0.Y;
      auVar40._8_8_ =
           -(ulonglong)
            (*(double *)(pFVar33 + 8) + (param_3->Extent).field0_0x0._s_0.Y <
            (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar31,SUB84(dVar57,0) & uVar22));
      auVar40._0_8_ =
           -(ulonglong)
            (*(double *)pFVar33 + (param_3->Extent).field0_0x0._s_0.X <
            (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar30,SUB84(dVar56,0) & uVar20));
      uVar21 = movmskpd(uVar60,auVar40);
      uVar23 = (ulonglong)uVar21;
      uVar21 = iVar25 << 2 | uVar21;
      pFVar27 = (FScriptContainerElement *)(ulonglong)uVar21;
      if (uVar21 == 0) {
        iVar25 = *(int *)pFVar34;
        pFVar32 = local_108;
        if (-1 < iVar25) {
          pTVar2 = param_4->Points;
          iVar1 = pTVar2->ArrayNum;
          pFVar27 = (FScriptContainerElement *)(longlong)iVar1;
          if (iVar25 < iVar1) {
            pTVar3 = param_4->Result;
            if ((iVar25 < 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar27 = (pTVar3->AllocatorInstance).Data;
            pFVar32 = (pTVar2->AllocatorInstance).Data + (longlong)iVar25 * 0xd0;
            if (((pFVar27 <= pFVar32) && (pFVar32 < pFVar27 + (longlong)pTVar3->ArrayMax * 0xd0)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar25 = pTVar3->ArrayNum;
            if (iVar25 == pTVar3->ArrayMax) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10d0,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pFVar27 = (FScriptContainerElement *)(ulonglong)(iVar25 + 1U);
            uVar23 = (ulonglong)iVar25;
            pTVar3->ArrayNum = iVar25 + 1U;
            uVar14 = *(undefined8 *)(pFVar32 + 8);
            pFVar29 = (pTVar3->AllocatorInstance).Data + uVar23 * 0xd0;
            *(undefined8 *)pFVar29 = *(undefined8 *)pFVar32;
            *(undefined8 *)(pFVar29 + 8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x18);
            *(undefined8 *)(pFVar29 + 0x10) = *(undefined8 *)(pFVar32 + 0x10);
            *(undefined8 *)(pFVar29 + 0x18) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x28);
            *(undefined8 *)(pFVar29 + 0x20) = *(undefined8 *)(pFVar32 + 0x20);
            *(undefined8 *)(pFVar29 + 0x28) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x38);
            *(undefined8 *)(pFVar29 + 0x30) = *(undefined8 *)(pFVar32 + 0x30);
            *(undefined8 *)(pFVar29 + 0x38) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x48);
            *(undefined8 *)(pFVar29 + 0x40) = *(undefined8 *)(pFVar32 + 0x40);
            *(undefined8 *)(pFVar29 + 0x48) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x58);
            *(undefined8 *)(pFVar29 + 0x50) = *(undefined8 *)(pFVar32 + 0x50);
            *(undefined8 *)(pFVar29 + 0x58) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x68);
            *(undefined8 *)(pFVar29 + 0x60) = *(undefined8 *)(pFVar32 + 0x60);
            *(undefined8 *)(pFVar29 + 0x68) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x78);
            *(undefined8 *)(pFVar29 + 0x70) = *(undefined8 *)(pFVar32 + 0x70);
            *(undefined8 *)(pFVar29 + 0x78) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x88);
            *(undefined8 *)(pFVar29 + 0x80) = *(undefined8 *)(pFVar32 + 0x80);
            *(undefined8 *)(pFVar29 + 0x88) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0x98);
            *(undefined8 *)(pFVar29 + 0x90) = *(undefined8 *)(pFVar32 + 0x90);
            *(undefined8 *)(pFVar29 + 0x98) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0xa8);
            *(undefined8 *)(pFVar29 + 0xa0) = *(undefined8 *)(pFVar32 + 0xa0);
            *(undefined8 *)(pFVar29 + 0xa8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 0xb8);
            *(undefined8 *)(pFVar29 + 0xb0) = *(undefined8 *)(pFVar32 + 0xb0);
            *(undefined8 *)(pFVar29 + 0xb8) = uVar14;
            uVar14 = *(undefined8 *)(pFVar32 + 200);
            *(undefined8 *)(pFVar29 + 0xc0) = *(undefined8 *)(pFVar32 + 0xc0);
            *(undefined8 *)(pFVar29 + 200) = uVar14;
            pFVar32 = local_108;
          }
        }
      }
      uVar28 = (ulonglong)local_114;
      pFVar34 = pFVar34 + 0x40;
      pFVar33 = pFVar33 + 0x40;
    }
    iVar25 = (this->TreeNodes).ArrayNum;
    uVar20 = 0;
    if ((int)param_1 < iVar25) {
      uVar20 = local_110;
    }
    if (uVar20 == 0) {
      iVar25 = 0x506106c8;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar27 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar27 + (longlong)(int)param_1 * 8) != -1) {
      dVar39 = (param_3->Center).field0_0x0._s_0.Z;
      dVar49 = (param_3->Center).field0_0x0._s_0.W;
      dVar8 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar9 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar56 = param_2->ChildCenterOffset;
      dVar57 = param_2->ChildExtent;
      auVar41._8_4_ = SUB84(dVar56,0);
      auVar41._0_8_ = dVar56;
      uVar60 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar41._12_4_ = uVar60;
      dVar10 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar12 = (param_3->Center).field0_0x0._s_0.X;
      dVar13 = (param_3->Center).field0_0x0._s_0.Y;
      auVar42._8_8_ =
           -(ulonglong)
            ((auVar41._8_8_ + dVar9) - dVar57 < (param_3->Extent).field0_0x0._s_0.W + dVar49);
      auVar42._0_8_ =
           -(ulonglong)((dVar56 + dVar8) - dVar57 < (param_3->Extent).field0_0x0._s_0.Z + dVar39);
      uVar31 = movmskpd((int)pFVar32,auVar42);
      auVar43._8_4_ = SUB84(dVar56,0);
      auVar43._0_8_ = dVar56;
      auVar43._12_4_ = uVar60;
      auVar44._8_8_ =
           -(ulonglong)
            ((auVar43._8_8_ + dVar11) - dVar57 < (param_3->Extent).field0_0x0._s_0.Y + dVar13);
      auVar44._0_8_ =
           -(ulonglong)((dVar56 + dVar10) - dVar57 < (param_3->Extent).field0_0x0._s_0.X + dVar12);
      uVar30 = movmskpd((int)pFVar27,auVar44);
      auVar62._8_8_ =
           -(ulonglong)(dVar49 - (param_3->Extent).field0_0x0._s_0.W <= (dVar9 - dVar56) + dVar57);
      auVar62._0_8_ =
           -(ulonglong)(dVar39 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar8 - dVar56) + dVar57);
      iVar25 = movmskpd(iVar25,auVar62);
      lVar38 = -(ulonglong)
                (dVar13 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar11 - dVar56) + dVar57);
      auVar7._8_4_ = (int)lVar38;
      auVar7._0_8_ = -(ulonglong)
                      (dVar12 - (param_3->Extent).field0_0x0._s_0.X <= (dVar10 - dVar56) + dVar57);
      auVar7._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar22 = movmskpd(uVar30,auVar7);
      uVar20 = 0;
      if ((int)param_1 < (this->TreeNodes).ArrayNum) {
        uVar20 = ~param_1 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = _UNK_15074415c;
      uVar17 = _UNK_150744158;
      uVar21 = _UNK_150744154;
      uVar20 = ___xmm_00000008000000040000000200000001;
      dVar57 = __real_3ff1000000000000;
      fVar16 = _UNK_15068954c;
      fVar15 = _UNK_150689548;
      dVar56 = __real_3fe0000000000000;
      uVar36 = 0;
      uVar63 = (uint)__xmm_80000000000000008000000000000000;
      uVar23 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar1 = *(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
      do {
        uVar26 = (~uVar36 & 7) << 3 | uVar36 & 7;
        if ((uVar26 & ((uVar31 & 1) << 2 | uVar30 & 7 | (iVar25 << 2 | uVar22) << 3)) == uVar26) {
          uVar58 = SUB84(param_2->ChildCenterOffset,0) ^ uVar63;
          uVar59 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^ (uint)uVar23;
          dVar39 = (double)(float)-(uint)((uVar36 & uVar20) == uVar20);
          dVar49 = (double)(float)-(uint)((uVar36 & uVar21) == uVar21);
          uVar26 = SUB84(dVar39,0);
          uVar47 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar48 = SUB84(dVar49,0);
          uVar50 = (uint)((ulonglong)dVar49 >> 0x20);
          auVar45._0_4_ = ~uVar26 & uVar58;
          auVar45._4_4_ = ~uVar47 & uVar59;
          auVar45._8_4_ = ~uVar48 & uVar58;
          auVar45._12_4_ = ~uVar50 & uVar59;
          dVar39 = (double)(float)-(uint)((uVar36 & uVar17) == uVar17);
          uVar51 = SUB84(dVar39,0);
          uVar52 = (uint)((ulonglong)dVar39 >> 0x20);
          dVar39 = (double)(float)-(uint)((uVar36 & uVar18) == uVar18);
          uVar53 = SUB84(dVar39,0);
          uVar54 = (uint)((ulonglong)dVar39 >> 0x20);
          uVar55 = SUB84(param_2->ChildCenterOffset,0);
          auVar61._0_4_ = uVar26 & uVar55;
          uVar26 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
          auVar61._4_4_ = uVar47 & uVar26;
          auVar61._8_4_ = uVar48 & uVar55;
          auVar61._12_4_ = uVar50 & uVar26;
          local_f8._s_0.X = SUB168(auVar61 | auVar45,0) + (param_2->Bounds).Center.field0_0x0._s_0.X
          ;
          local_f8._s_0.Y = SUB168(auVar61 | auVar45,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y
          ;
          auVar46._0_4_ = uVar51 & uVar55;
          auVar46._4_4_ = uVar52 & uVar26;
          auVar46._8_4_ = uVar53 & uVar55;
          auVar46._12_4_ = uVar54 & uVar26;
          auVar6._4_4_ = ~uVar52 & uVar59;
          auVar6._0_4_ = ~uVar51 & uVar58;
          auVar6._8_4_ = ~uVar53 & uVar58;
          auVar6._12_4_ = ~uVar54 & uVar59;
          local_b0 = param_2->ChildExtent;
          local_f8._s_0.Z =
               (SUB168(auVar46 | auVar6,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar15;
          local_f8._s_0.W =
               (SUB168(auVar46 | auVar6,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar16;
          local_c8._0_8_ = (double)fVar15 * local_b0;
          local_c8._8_8_ = (double)fVar16 * local_b0;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          local_b8 = local_b0 * dVar56 * dVar57;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::GetPointsInsideBounds_::__l2::<lambda_1>_>
                    (this,uVar36 + iVar1,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar35 = (char)uVar36 + 1;
        uVar36 = (uint)bVar35;
      } while ((char)bVar35 < '\b');
    }
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,1,1,`AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 149f277b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_149f278d3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149f278d3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_149f2796d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_149f2796d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_149f27a70;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_149f27a70:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      `AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,1,0,`AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 149f27ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_149f27de6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_149f27de6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149f27e6d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_149f27e6d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149f27f71;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_149f27f71:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UActorComponent *)0x0) {
      `AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,0,1,`AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 149f27ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_149f280e3;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149f280e3:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_149f28190;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_149f28190:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_149f282a0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_149f282a0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,0,0,`AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 149f28530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_149f2860e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_149f2860e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_149f2869f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_149f2869f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_149f287b0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_149f287b0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetInputSettings<UPCGBaseSubgraphSettings> @ 149f289a0

UPCGBaseSubgraphSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGBaseSubgraphSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  UPCGSettingsInterface *pUVar2;
  bool bVar3;
  longlong lVar4;
  UPCGSettings *pUVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 local_res8;
  
  if (((param_1 != (UPCGNode *)0x0) &&
      (pUVar2 = (param_1->SettingsInterface).field0_0x0.DebugPtr,
      pUVar2 != (UPCGSettingsInterface *)0x0)) &&
     (lVar4 = (**(code **)(pUVar2->_padding_ + 0x388))(), lVar4 != 0)) {
    pUVar2 = (param_1->SettingsInterface).field0_0x0.DebugPtr;
    pUVar5 = (UPCGSettings *)0x0;
    if (pUVar2 != (UPCGSettingsInterface *)0x0) {
      pUVar5 = (UPCGSettings *)(**(code **)(pUVar2->_padding_ + 0x388))();
    }
    pUVar5 = FPCGDataCollection::GetSettings(param_2,pUVar5);
    if (pUVar5 != (UPCGSettings *)0x0) {
      pUVar6 = UPCGBaseSubgraphSettings::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return (UPCGBaseSubgraphSettings *)pUVar5;
      }
    }
    return (UPCGBaseSubgraphSettings *)0x0;
  }
  pFVar7 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBaseSubgraphSettings>_::__l2::<lambda_1>_>
                     (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
  if (pFVar7 != (FObjectPtr_u_0 *)0x0) {
    local_res8 = (FObjectPtr_u_0)pFVar7->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBaseSubgraphSettings *)local_res8.Handle == (UPCGBaseSubgraphSettings *)0x0) {
        return (UPCGBaseSubgraphSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGBaseSubgraphSettings *)local_res8.Handle != (UPCGBaseSubgraphSettings *)0x0) {
      pUVar6 = UPCGBaseSubgraphSettings::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      if (bVar3) {
        return (UPCGBaseSubgraphSettings *)local_res8.Handle;
      }
    }
  }
  return (UPCGBaseSubgraphSettings *)0x0;
}

// GetInputSettings<UPCGSubgraphSettings> @ 149f28c00

UPCGSubgraphSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSubgraphSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  UPCGSettingsInterface *pUVar2;
  bool bVar3;
  longlong lVar4;
  UPCGSettings *pUVar5;
  UPCGSubgraphSettings *pUVar6;
  UClass *pUVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res8;
  
  if (((param_1 != (UPCGNode *)0x0) &&
      (pUVar2 = (param_1->SettingsInterface).field0_0x0.DebugPtr,
      pUVar2 != (UPCGSettingsInterface *)0x0)) &&
     (lVar4 = (**(code **)(pUVar2->_padding_ + 0x388))(), lVar4 != 0)) {
    pUVar2 = (param_1->SettingsInterface).field0_0x0.DebugPtr;
    pUVar5 = (UPCGSettings *)0x0;
    if (pUVar2 != (UPCGSettingsInterface *)0x0) {
      pUVar5 = (UPCGSettings *)(**(code **)(pUVar2->_padding_ + 0x388))();
    }
    pUVar6 = (UPCGSubgraphSettings *)FPCGDataCollection::GetSettings(param_2,pUVar5);
    if (pUVar6 != (UPCGSubgraphSettings *)0x0) {
      pUVar7 = UPCGSubgraphSettings::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        return pUVar6;
      }
    }
    return (UPCGSubgraphSettings *)0x0;
  }
  pFVar8 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubgraphSettings>_::__l2::<lambda_1>_>
                     (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
  if (pFVar8 != (FObjectPtr_u_0 *)0x0) {
    local_res8 = (FObjectPtr_u_0)pFVar8->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSubgraphSettings *)local_res8.Handle == (UPCGSubgraphSettings *)0x0) {
        return (UPCGSubgraphSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGSubgraphSettings *)local_res8.Handle != (UPCGSubgraphSettings *)0x0) {
      pUVar7 = UPCGSubgraphSettings::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar7);
      if (bVar3) {
        return (UPCGSubgraphSettings *)local_res8.Handle;
      }
    }
  }
  return (UPCGSubgraphSettings *)0x0;
}

// GetTypeName<APCGPartitionActor> @ 149f29830

FString * __cdecl GetTypeName<APCGPartitionActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPCGSubsystem> @ 149f29870

FString * __cdecl GetTypeName<UPCGSubsystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UPCGSubsystem::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HashCombine<unsigned_int,unsigned_int,unsigned_int> @ 149f298b0

uint __cdecl
HashCombine<unsigned_int,unsigned_int,unsigned_int>
          (uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_3 - param_4 ^ param_4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar1) - param_4 ^ uVar1 << 8;
  uVar2 = (param_4 - uVar3) - uVar1 ^ uVar3 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 10;
  uVar3 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xf;
  uVar2 = param_2 - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar2 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
  uVar1 = param_1 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar1) - uVar2 ^ uVar1 << 8;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 << 10;
  return (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xf;
}

// HeapPop<`PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>_> @ 149f29a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
HeapPop<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
          (TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *this,
          int *param_1,<lambda_1> *param_2,EAllowShrinking param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<int> FVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar4 != (ForElementType<int>)0x0) {
    FVar7 = FVar4;
  }
  *param_1 = *(int *)FVar7;
  if ((this->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar4 != (ForElementType<int>)0x0) {
    FVar7 = FVar4;
  }
  iVar11 = this->ArrayNum + -1;
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    memmove((void *)FVar7,(void *)((longlong)FVar7 + (longlong)(this->ArrayNum - iVar11) * 4),
            (longlong)iVar11 << 2);
  }
  iVar11 = this->ArrayNum + -1;
  this->ArrayNum = iVar11;
  if (param_3 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&this->AllocatorInstance,iVar11,&this->ArrayMax);
  }
  FVar4 = (this->AllocatorInstance).SecondaryData;
  iVar11 = this->ArrayNum;
  if (FVar4 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)FVar4;
  }
  if (1 < iVar11) {
    do {
      iVar10 = iVar9 * 2;
      iVar8 = iVar10 + 1;
      if (iVar10 + 2 < iVar11) {
        bVar6 = `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
                          (param_2,*(int *)((longlong)this + (longlong)iVar8 * 4),
                           *(int *)((uchar *)((longlong)this + 8) + (longlong)iVar10 * 4));
        if (bVar6) {
          iVar8 = iVar10;
        }
        iVar8 = iVar8 + 1;
      }
      puVar1 = (undefined4 *)((longlong)this + (longlong)iVar9 * 4);
      puVar2 = (undefined4 *)((longlong)this + (longlong)iVar8 * 4);
      bVar6 = `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
                        (param_2,*(int *)((longlong)this + (longlong)iVar8 * 4),
                         *(int *)((longlong)this + (longlong)iVar9 * 4));
      if (!bVar6) {
        return;
      }
      uVar3 = *puVar1;
      *puVar1 = *puVar2;
      *puVar2 = uVar3;
      iVar9 = iVar8;
    } while (iVar8 * 2 + 1 < iVar11);
  }
  return;
}

// HeapPush<`PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>_> @ 149f29c30

int __thiscall
TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
HeapPush<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
          (TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *this,
          int *param_1,<lambda_1> *param_2)

{
  int *piVar1;
  int *piVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ForElementType<int> FVar8;
  
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= param_1) {
    FVar8 = (ForElementType<int>)this;
    if (FVar3 != (ForElementType<int>)0x0) {
      FVar8 = FVar3;
    }
    if ((param_1 < (int *)((longlong)FVar8 + (longlong)this->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar8 = FVar3;
  }
  *(int *)((longlong)FVar8 + (longlong)iVar6 * 4) = *param_1;
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar6 = this->ArrayNum + -1;
  if (FVar3 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
  }
  if (0 < iVar6) {
    do {
      piVar1 = (int *)((longlong)this + (longlong)iVar6 * 4);
      iVar7 = (iVar6 + -1) / 2;
      piVar2 = (int *)((longlong)this + (longlong)iVar7 * 4);
      bVar5 = `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
                        (param_2,*piVar1,*(int *)((longlong)this + (longlong)iVar7 * 4));
      if (!bVar5) {
        return iVar6;
      }
      iVar6 = *piVar1;
      *piVar1 = *piVar2;
      *piVar2 = iVar6;
      iVar6 = iVar7;
    } while (0 < iVar7);
    return iVar7;
  }
  return iVar6;
}

// HeapRemoveAt<`PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>_> @ 149f29da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
HeapRemoveAt<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
          (TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *this,int param_1
          ,<lambda_1> *param_2,EAllowShrinking param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  ForElementType<int> FVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForElementType<int> FVar14;
  
  uVar12 = 0;
  if (param_1 + 1 <= this->ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar6 = (this->AllocatorInstance).SecondaryData;
  FVar14 = (ForElementType<int>)this;
  if (FVar6 != (ForElementType<int>)0x0) {
    FVar14 = FVar6;
  }
  iVar13 = this->ArrayNum + ~param_1;
  if (1 < iVar13) {
    iVar13 = 1;
  }
  if (iVar13 != 0) {
    memmove((void *)((longlong)FVar14 + (longlong)param_1 * 4),
            (void *)((longlong)FVar14 + (longlong)(this->ArrayNum - iVar13) * 4),
            (longlong)iVar13 << 2);
  }
  iVar13 = this->ArrayNum + -1;
  this->ArrayNum = iVar13;
  if (param_3 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&this->AllocatorInstance,iVar13,&this->ArrayMax);
  }
  FVar6 = (this->AllocatorInstance).SecondaryData;
  iVar13 = this->ArrayNum;
  iVar9 = param_1;
  FVar14 = (ForElementType<int>)this;
  if (FVar6 != (ForElementType<int>)0x0) {
    FVar14 = FVar6;
  }
  while (iVar9 * 2 + 1 < iVar13) {
    iVar8 = iVar9 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < iVar13) {
      bVar10 = `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
                         (param_2,*(int *)((longlong)FVar14 + (longlong)iVar11 * 4),
                          *(int *)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar8 * 4));
      if (bVar10) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    puVar1 = (undefined4 *)((longlong)FVar14 + (longlong)iVar9 * 4);
    puVar2 = (undefined4 *)((longlong)FVar14 + (longlong)iVar11 * 4);
    bVar10 = `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
                       (param_2,*(int *)((longlong)FVar14 + (longlong)iVar11 * 4),
                        *(int *)((longlong)FVar14 + (longlong)iVar9 * 4));
    if (!bVar10) break;
    uVar5 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar5;
    iVar9 = iVar11;
  }
  FVar6 = (this->AllocatorInstance).SecondaryData;
  uVar12 = this->ArrayNum - 1;
  if (param_1 < (int)uVar12) {
    uVar12 = param_1;
  }
  if (FVar6 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)FVar6;
  }
  while( true ) {
    if ((int)uVar12 < 1) {
      return;
    }
    piVar3 = (int *)((longlong)this + (ulonglong)uVar12 * 4);
    uVar12 = (int)(uVar12 - 1) / 2;
    piVar4 = (int *)((longlong)this + (longlong)(int)uVar12 * 4);
    bVar10 = `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
                       (param_2,*piVar3,*(int *)((longlong)this + (longlong)(int)uVar12 * 4));
    if (!bVar10) break;
    iVar13 = *piVar3;
    *piVar3 = *piVar4;
    *piVar4 = iVar13;
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<`FPCGRuntimeGenScheduler::Tick'::__l43::<lambda_1>_>_>_>_> @ 149f29fb0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_FPCGRuntimeGenScheduler::Tick_::__l43::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>_>_>
          param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar24 = iVar16;
  iVar25 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_149f2a0f3:
      if (iVar25 == 0) {
        iVar16 = param_2 + -1;
        lVar17 = (longlong)iVar16;
        if (0 < iVar16) {
          pTVar22 = param_1 + lVar17;
          do {
            uVar7 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            TVar8 = param_1->_s_1;
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            param_1->_s_1 = pTVar22->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar7;
            uVar7 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar7;
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x30);
            pTVar22->_s_1 = TVar8;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8) = uVar9;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x10) = uVar10;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x18) = uVar11;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x20) = uVar12;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x28) = uVar13;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x30) = uVar5;
            iVar24 = 0;
            if (1 < iVar16) {
              do {
                iVar25 = iVar24 * 2;
                iVar15 = iVar25 + 1;
                if (iVar25 + 2 < iVar16) {
                  dVar4 = *(double *)((longlong)iVar25 * 0x38 + 0x98 + (longlong)param_1);
                  pdVar1 = (double *)((longlong)iVar15 * 0x38 + 0x28 + (longlong)param_1);
                  if (*pdVar1 <= dVar4 && dVar4 != *pdVar1) {
                    iVar15 = iVar25;
                  }
                  iVar15 = iVar15 + 1;
                }
                lVar18 = (longlong)iVar24;
                lVar20 = lVar18 * 0x38;
                lVar19 = (longlong)iVar15;
                lVar21 = lVar19 * 0x38;
                if (*(double *)(lVar20 + 0x28 + (longlong)param_1) <=
                    *(double *)(lVar21 + 0x28 + (longlong)param_1)) break;
                uVar7 = *(undefined8 *)(param_1[lVar19].ElementData.Pad + 8);
                uVar5 = *(undefined8 *)(lVar20 + 0x30 + (longlong)param_1);
                TVar8 = param_1[lVar18]._s_1;
                uVar9 = *(undefined8 *)(param_1[lVar18].ElementData.Pad + 8);
                puVar2 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
                uVar10 = *puVar2;
                uVar11 = puVar2[1];
                puVar2 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
                uVar12 = *puVar2;
                uVar13 = puVar2[1];
                param_1[lVar18]._s_1 = param_1[lVar19]._s_1;
                *(undefined8 *)((longlong)param_1[lVar18].ElementData.Pad + 8) = uVar7;
                puVar2 = (undefined8 *)(lVar21 + 0x10 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar2 = (undefined8 *)(lVar21 + 0x20 + (longlong)param_1);
                uVar7 = puVar2[1];
                puVar3 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                *(undefined8 *)(lVar20 + 0x30 + (longlong)param_1) =
                     *(undefined8 *)(lVar21 + 0x30 + (longlong)param_1);
                param_1[lVar19]._s_1 = TVar8;
                *(undefined8 *)((longlong)param_1[lVar19].ElementData.Pad + 8) = uVar9;
                puVar2 = (undefined8 *)(lVar21 + 0x10 + (longlong)param_1);
                *puVar2 = uVar10;
                puVar2[1] = uVar11;
                puVar2 = (undefined8 *)(lVar21 + 0x20 + (longlong)param_1);
                *puVar2 = uVar12;
                puVar2[1] = uVar13;
                *(undefined8 *)(lVar21 + 0x30 + (longlong)param_1) = uVar5;
                iVar24 = iVar15;
              } while (iVar15 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar17 = lVar17 + -1;
            pTVar22 = pTVar22 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar15 = iVar25 + -1;
      iVar16 = iVar24 + -2;
      iVar24 = iVar16;
      iVar25 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar23 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      dVar4 = *(double *)((longlong)iVar16 * 0x38 + 0x98 + (longlong)param_1);
      pdVar1 = (double *)((longlong)iVar23 * 0x38 + 0x28 + (longlong)param_1);
      if (*pdVar1 <= dVar4 && dVar4 != *pdVar1) {
        iVar23 = iVar16;
      }
      iVar23 = iVar23 + 1;
    }
    lVar17 = (longlong)iVar15;
    lVar19 = lVar17 * 0x38;
    lVar18 = (longlong)iVar23;
    lVar20 = lVar18 * 0x38;
    if (*(double *)(lVar19 + 0x28 + (longlong)param_1) <=
        *(double *)(lVar20 + 0x28 + (longlong)param_1)) goto LAB_149f2a0f3;
    uVar7 = *(undefined8 *)(param_1[lVar18].ElementData.Pad + 8);
    iVar16 = iVar23 * 2 + 1;
    uVar5 = *(undefined8 *)(lVar19 + 0x30 + (longlong)param_1);
    TVar8 = param_1[lVar17]._s_1;
    uVar9 = *(undefined8 *)(param_1[lVar17].ElementData.Pad + 8);
    puVar2 = (undefined8 *)(lVar19 + 0x10 + (longlong)param_1);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar19 + 0x20 + (longlong)param_1);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    param_1[lVar17]._s_1 = param_1[lVar18]._s_1;
    *(undefined8 *)((longlong)param_1[lVar17].ElementData.Pad + 8) = uVar7;
    puVar2 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar19 + 0x10 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar19 + 0x20 + (longlong)param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    *(undefined8 *)(lVar19 + 0x30 + (longlong)param_1) =
         *(undefined8 *)(lVar20 + 0x30 + (longlong)param_1);
    param_1[lVar18]._s_1 = TVar8;
    *(undefined8 *)((longlong)param_1[lVar18].ElementData.Pad + 8) = uVar9;
    puVar2 = (undefined8 *)(lVar20 + 0x10 + (longlong)param_1);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar20 + 0x20 + (longlong)param_1);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    *(undefined8 *)(lVar20 + 0x30 + (longlong)param_1) = uVar5;
    iVar15 = iVar23;
  } while( true );
}

// InternalConstructor<APCGVolume> @ 149f2a250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<APCGVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  FName FVar1;
  UPrimitiveComponent *this_00;
  bool bVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7APCGVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    pFVar3 = FName::FName(&local_res8,L"PCG Component");
    FVar1 = *pFVar3;
    pUVar4 = Z_Construct_UClass_UPCGComponent_NoRegister();
    pUVar5 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)(this + 1) = pUVar5;
    bVar2 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,true);
    if ((bVar2) &&
       (this_00 = *(UPrimitiveComponent **)&this->field_0x2d8, this_00 != (UPrimitiveComponent *)0x0
       )) {
      (**(code **)(*(longlong *)this_00 + 0x790))(this_00);
      (**(code **)(*(longlong *)this_00 + 0x9f8))(this_00);
      UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
    }
  }
  return;
}

// InternalConstructor<APCGWorldActor> @ 149f2a340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APCGWorldActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7APCGWorldActor__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x6400;
    pFVar2 = FName::FName(&local_res8,L"LandscapeCache");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UPCGLandscapeCache_NoRegister();
    pUVar4 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UPCGBaseSubgraphNode> @ 149f2a400

void __cdecl InternalConstructor<UPCGBaseSubgraphNode>(FObjectInitializer *param_1)

{
  UPCGNode *this;
  
  this = (UPCGNode *)param_1->Obj;
  if (this != (UPCGNode *)0x0) {
    UPCGNode::UPCGNode(this,param_1);
    this->_padding_ = (longlong)&___7UPCGBaseSubgraphNode__6B_;
  }
  return;
}

// InternalConstructor<UPCGBaseSubgraphSettings> @ 149f2a430

void __cdecl InternalConstructor<UPCGBaseSubgraphSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGBaseSubgraphSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGBaseSubsystem> @ 149f2a460

void __cdecl InternalConstructor<UPCGBaseSubsystem>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UPCGBaseSubsystem__6B_;
  }
  return;
}

// InternalConstructor<UPCGBlueprintPinHelpers> @ 149f2a490

void __cdecl InternalConstructor<UPCGBlueprintPinHelpers>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPCGBlueprintPinHelpers__6B_;
  }
  return;
}

// InternalConstructor<UPCGEngineSubsystem> @ 149f2a4c0

void __cdecl InternalConstructor<UPCGEngineSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)(this + 1) = &___7IPCGBaseSubsystem__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this[1].field_0x18,NewObject);
    *(undefined ***)this = &UPCGEngineSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) = &UPCGEngineSubsystem::_vftable__for__IPCGBaseSubsystem__;
    *(undefined ***)&this[1].field_0x18 = &UPCGEngineSubsystem::_vftable__for__FTickableGameObject__
    ;
  }
  return;
}

// InternalConstructor<UPCGGenSourceComponent> @ 149f2a530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGGenSourceComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UPCGGenSourceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPCGGenSourceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPCGGenSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UPCGGenSourceComponent__6B_;
  }
  return;
}

// InternalConstructor<UPCGGenSourceEditorCamera> @ 149f2a590

void __cdecl InternalConstructor<UPCGGenSourceEditorCamera>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UPCGGenSourceEditorCamera::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UPCGGenSourceEditorCamera::_vftable__for__IPCGGenSourceBase__;
  }
  return;
}

// InternalConstructor<UPCGGenSourcePlayer> @ 149f2a5d0

void __cdecl InternalConstructor<UPCGGenSourcePlayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UPCGGenSourcePlayer::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UPCGGenSourcePlayer::_vftable__for__IPCGGenSourceBase__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[0xe].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UPCGGenSourceWPStreamingSource> @ 149f2a620

void __cdecl InternalConstructor<UPCGGenSourceWPStreamingSource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UPCGGenSourceWPStreamingSource::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UPCGGenSourceWPStreamingSource::_vftable__for__IPCGGenSourceBase__
    ;
  }
  return;
}

// InternalConstructor<UPCGManagedActors> @ 149f2a660

void __cdecl InternalConstructor<UPCGManagedActors>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x10 = 1;
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UPCGManagedActors__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UPCGManagedComponent> @ 149f2a6e0

void __cdecl InternalConstructor<UPCGManagedComponent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    return;
  }
  return;
}

// InternalConstructor<UPCGManagedComponentBase> @ 149f2a740

void __cdecl InternalConstructor<UPCGManagedComponentBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UPCGManagedComponentBase__6B_;
    this[1].field_0x4 = 0;
    this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPCGManagedComponentDefaultList> @ 149f2a780

void __cdecl InternalConstructor<UPCGManagedComponentDefaultList>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UPCGManagedComponentDefaultList__6B_;
  }
  return;
}

// InternalConstructor<UPCGManagedComponentList> @ 149f2a7d0

void __cdecl InternalConstructor<UPCGManagedComponentList>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UPCGManagedComponentList__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UPCGManagedISKMComponent> @ 149f2a820

void __cdecl InternalConstructor<UPCGManagedISKMComponent>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    *(undefined ***)this = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    this[2].field_0x10 = 0;
    *(undefined ***)this = &___7UPCGManagedISKMComponent__6B_;
    FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
              ((FSkinnedMeshComponentDescriptor *)&this[2].field_0x18);
    *(undefined1 *)(this + 6) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[6].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[6].field_0x10 = uVar1;
    *(double *)&this[6].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[6].field_0x20 = 0;
    this[6].field_0x24 = 0;
  }
  return;
}

// InternalConstructor<UPCGManagedISMComponent> @ 149f2a8e0

void __cdecl InternalConstructor<UPCGManagedISMComponent>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    *(undefined ***)this = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    this[2].field_0x10 = 0;
    *(undefined ***)this = &___7UPCGManagedISMComponent__6B_;
    FISMComponentDescriptor::FISMComponentDescriptor((FISMComponentDescriptor *)&this[2].field_0x20)
    ;
    this[0x13].field_0x8 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[0x13].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[0x13].field_0x18 = uVar1;
    *(double *)&this[0x13].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)(this + 0x14) = 0;
    this[0x14].field_0x4 = 0;
    *(undefined4 *)&this[0x14].field_0x8 = 0;
    this[0x14].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UPCGManagedResource> @ 149f2a9a0

void __cdecl InternalConstructor<UPCGManagedResource>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UPCGManagedResource__6B_;
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
  }
  return;
}

// InternalConstructor<UPCGManagedSplineMeshComponent> @ 149f2a9e0

void __cdecl InternalConstructor<UPCGManagedSplineMeshComponent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 0;
    *(undefined ***)this = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    *(undefined ***)this = &___7UPCGManagedSplineMeshComponent__6B_;
    FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor
              ((FSplineMeshComponentDescriptor *)&this[2].field_0x10);
    FPCGSplineMeshParams::FPCGSplineMeshParams((FPCGSplineMeshParams *)&this[0xf].field_0x10);
    *(undefined4 *)&this[0x15].field_0x8 = 0;
    this[0x15].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UPCGNode> @ 149f2aa70

void __cdecl InternalConstructor<UPCGNode>(FObjectInitializer *param_1)

{
  if ((UPCGNode *)param_1->Obj != (UPCGNode *)0x0) {
    UPCGNode::UPCGNode((UPCGNode *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGOctreeQueries> @ 149f2aa90

void __cdecl InternalConstructor<UPCGOctreeQueries>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPCGOctreeQueries__6B_;
  }
  return;
}

// InternalConstructor<UPCGParamData> @ 149f2aac0

void __cdecl InternalConstructor<UPCGParamData>(FObjectInitializer *param_1)

{
  UPCGData *this;
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UPCGMetadata *pUVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FPCGMetadataDomainID *pFVar8;
  bool bVar9;
  FName local_res8;
  ForAnyElementType local_48;
  uint local_40;
  int local_3c;
  FPCGMetadataDomainID local_38 [2];
  EPCGMetadataDomainFlag local_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int iStack_14;
  FName FStack_10;
  
  this = (UPCGData *)param_1->Obj;
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGParamData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].UID = 0;
    *(undefined4 *)((longlong)&this[1].UID + 4) = 0x80;
    this[1].Crc.Value = 0xffffffff;
    *(undefined4 *)&this[1].Crc.bValid = 0;
    this[1].bIsFullDataCrc = false;
    this[1].Usage = (atomic<unsigned_char>)0x0;
    this[1]._padding_ = 0;
    this[1].CollectionRefCount = (atomic<int>)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2]._padding_);
    pFVar3 = FName::FName(&local_res8,L"Metadata");
    FVar1 = *pFVar3;
    pUVar4 = Z_Construct_UClass_UPCGMetadata_NoRegister();
    pUVar5 = (UPCGMetadata *)
             FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGMetadata *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->Metadata).field0_0x0.DebugPtr = pUVar5;
    local_18 = PCGMetadataDomainID::Elements.Flag;
    uStack_17 = PCGMetadataDomainID::Elements._1_2_;
    uStack_15 = PCGMetadataDomainID::Elements._3_1_;
    iStack_14 = PCGMetadataDomainID::Elements.CustomFlag;
    FStack_10 = PCGMetadataDomainID::Elements.DebugName;
    local_38[0] = PCGMetadataDomainID::Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,2,0,&local_48,2,&local_3c);
    uVar2 = local_40;
    *(undefined8 *)local_48.Data = local_38[0]._0_8_;
    *(FName *)(local_48.Data + 8) = local_38[0].DebugName;
    local_48.Data[0x10] = (FScriptContainerElement)local_18;
    *(int3 *)(local_48.Data + 0x11) = (int3)(CONCAT13(uStack_15,CONCAT21(uStack_17,local_18)) >> 8);
    *(int *)(local_48.Data + 0x14) = iStack_14;
    *(FName *)(local_48.Data + 0x18) = FStack_10;
    uVar6 = (ulonglong)(int)local_40;
    pFVar8 = (FPCGMetadataDomainID *)(local_48.Data + uVar6 * 0x10);
    FVar7.Data = local_48.Data;
    while( true ) {
      if ((uint)uVar6 != uVar2) {
        `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if ((FPCGMetadataDomainID *)FVar7.Data == pFVar8) break;
      if ((((FPCGMetadataDomainID *)FVar7.Data)->Flag == PCGMetadataDomainID::Elements.Flag) &&
         (((FPCGMetadataDomainID *)FVar7.Data)->CustomFlag ==
          PCGMetadataDomainID::Elements.CustomFlag)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      local_38[0] = *(FPCGMetadataDomainID *)FVar7.Data;
      UPCGMetadata::SetupDomain((this->Metadata).field0_0x0.DebugPtr,local_38,bVar9);
      uVar6 = (ulonglong)local_40;
      FVar7.Data = FVar7.Data + 0x10;
    }
    if ((FPCGMetadataDomainID *)local_48.Data != (FPCGMetadataDomainID *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// InternalConstructor<UPCGPin> @ 149f2ace0

void __cdecl InternalConstructor<UPCGPin>(FObjectInitializer *param_1)

{
  UObjectBase *this;
  
  this = (UObjectBase *)param_1->Obj;
  if (this != (UObjectBase *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    this->_padding_ = (longlong)&___7UPCGPin__6B_;
    this[1]._padding_ = 0;
    this[1].ObjectFlags = RF_NoFlags;
    this[1].InternalIndex = 0;
    this[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr = (UClass *)0x0;
    this[1].NamePrivate.Name = (FName)0x0;
    FPCGPinProperties::FPCGPinProperties((FPCGPinProperties *)&this[1].OuterPrivate);
    *(undefined1 *)&this[3]._padding_ = 0;
    UObjectBase::AtomicallySetFlags(this,RF_Transactional);
    return;
  }
  return;
}

// InternalConstructor<UPCGPinPropertiesBlueprintHelpers> @ 149f2ad40

void __cdecl InternalConstructor<UPCGPinPropertiesBlueprintHelpers>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UPCGPinPropertiesBlueprintHelpers__6B_;
  }
  return;
}

// InternalConstructor<UPCGSchedulingPolicyDistanceAndDirection> @ 149f2ad70

void __cdecl
InternalConstructor<UPCGSchedulingPolicyDistanceAndDirection>(FObjectInitializer *param_1)

{
  UPCGSchedulingPolicyBase *this;
  
  this = (UPCGSchedulingPolicyBase *)param_1->Obj;
  if (this != (UPCGSchedulingPolicyBase *)0x0) {
    UPCGSchedulingPolicyBase::UPCGSchedulingPolicyBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UPCGSchedulingPolicyDistanceAndDirection__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f99999a;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 2;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  }
  return;
}

// InternalConstructor<UPCGSettings> @ 149f2add0

void __cdecl InternalConstructor<UPCGSettings>(FObjectInitializer *param_1)

{
  if ((UPCGSettings *)param_1->Obj != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings((UPCGSettings *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPCGSettingsInstance> @ 149f2adf0

void __cdecl InternalConstructor<UPCGSettingsInstance>(FObjectInitializer *param_1)

{
  UPCGData *this;
  
  this = (UPCGData *)param_1->Obj;
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGSettingsInstance__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGSettingsInterface> @ 149f2ae30

void __cdecl InternalConstructor<UPCGSettingsInterface>(FObjectInitializer *param_1)

{
  UPCGData *this;
  
  this = (UPCGData *)param_1->Obj;
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  }
  return;
}

// InternalConstructor<UPCGSettingsWithDynamicInputs> @ 149f2ae70

void __cdecl InternalConstructor<UPCGSettingsWithDynamicInputs>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSettingsWithDynamicInputs__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPCGSubgraphNode> @ 149f2aeb0

void __cdecl InternalConstructor<UPCGSubgraphNode>(FObjectInitializer *param_1)

{
  UPCGNode *this;
  
  this = (UPCGNode *)param_1->Obj;
  if (this != (UPCGNode *)0x0) {
    UPCGNode::UPCGNode(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSubgraphNode__6B_;
  }
  return;
}

// InternalConstructor<UPCGSubgraphSettings> @ 149f2aee0

void __cdecl InternalConstructor<UPCGSubgraphSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSubgraphSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"PCGSubgraphInstance");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UPCGGraphInstance_NoRegister();
    pUVar4 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UPCGSubsystem> @ 149f2afa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UPCGSubsystem>(FObjectInitializer *param_1)

{
  UPCGSubsystem *this;
  FPCGActorAndComponentMapping *this_00;
  FPCGActorAndComponentMapping *pFVar1;
  
  this = (UPCGSubsystem *)param_1->Obj;
  if (this != (UPCGSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
    pFVar1 = (FPCGActorAndComponentMapping *)0x0;
    this->_padding_ = (longlong)&UPCGSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = 0;
    this->_padding_ = (longlong)&UPCGSubsystem::_vftable__for__FTickableGameObject__;
    this->_padding_ = (longlong)&___7UPCGSubsystem__6B_;
    this->_padding_ = 0;
    this->PCGWorldActor = (APCGWorldActor *)0x0;
    this->RuntimeGenScheduler = (FPCGRuntimeGenScheduler *)0x0;
    this->bHasTickedOnce = false;
    this_00 = operator_new(0x2e0);
    if (this_00 != (FPCGActorAndComponentMapping *)0x0) {
      pFVar1 = FPCGActorAndComponentMapping::FPCGActorAndComponentMapping(this_00,this);
    }
    (this->ActorAndComponentMapping).Ptr = pFVar1;
    (this->BeginTickActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BeginTickActions).ArrayNum = 0;
    (this->BeginTickActions).ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PCGWorldActorLock,4000);
  }
  return;
}

// InternalConstructor<UPCGTrivialSettings> @ 149f2b050

void __cdecl InternalConstructor<UPCGTrivialSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar1);
    this->_padding_ = (longlong)&___7UPCGTrivialSettings__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<APCGVolume> @ 149f2c8f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APCGVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APCGVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7APCGVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APCGWorldActor> @ 149f2c9b0

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

UObject * __cdecl InternalVTableHelperCtorCaller<APCGWorldActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APCGWorldActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7APCGWorldActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGBaseSubgraphNode> @ 149f2ca70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGBaseSubgraphNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBaseSubgraphNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGBaseSubgraphNode__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGBaseSubgraphSettings> @ 149f2cb50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGBaseSubgraphSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBaseSubgraphSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGBaseSubgraphSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGBaseSubsystem> @ 149f2cc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGBaseSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBaseSubsystem::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGBaseSubsystem__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGBlueprintPinHelpers> @ 149f2ccb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGBlueprintPinHelpers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGBlueprintPinHelpers::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGBlueprintPinHelpers__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGEngineSubsystem> @ 149f2cd60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGEngineSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  UEngineSubsystem *pUVar3;
  
  pUVar3 = (UEngineSubsystem *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGEngineSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) = &___7IPCGBaseSubsystem__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this[1].field_0x18,NewObject);
    *(undefined ***)this = &UPCGEngineSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) = &UPCGEngineSubsystem::_vftable__for__IPCGBaseSubsystem__;
    *(undefined ***)&this[1].field_0x18 = &UPCGEngineSubsystem::_vftable__for__FTickableGameObject__
    ;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGGenSourceComponent> @ 149f2ce40

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

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGenSourceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGenSourceComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UPCGGenSourceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPCGGenSourceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UPCGGenSourceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UPCGGenSourceComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGenSourceEditorCamera> @ 149f2cf10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGenSourceEditorCamera>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGenSourceEditorCamera::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UPCGGenSourceEditorCamera::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UPCGGenSourceEditorCamera::_vftable__for__IPCGGenSourceBase__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGenSourcePlayer> @ 149f2cfd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGenSourcePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGenSourcePlayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UPCGGenSourcePlayer::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UPCGGenSourcePlayer::_vftable__for__IPCGGenSourceBase__;
    pUVar1[0xe].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGenSourceWPStreamingSource> @ 149f2d090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGGenSourceWPStreamingSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGenSourceWPStreamingSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UPCGGenSourceWPStreamingSource::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UPCGGenSourceWPStreamingSource::_vftable__for__IPCGGenSourceBase__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedActors> @ 149f2d150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedActors>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedActors::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedActors__6B_;
    pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x10 = 1;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedComponent> @ 149f2d250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedComponent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar1 + 2),0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedComponentBase> @ 149f2d330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedComponentBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedComponentBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedComponentBase__6B_;
    pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedComponentDefaultList> @ 149f2d3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGManagedComponentDefaultList>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedComponentDefaultList::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedComponentDefaultList__6B_;
    pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedComponentList> @ 149f2d4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedComponentList>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedComponentList::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedComponentList__6B_;
    pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedISKMComponent> @ 149f2d570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedISKMComponent>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGManagedISKMComponent::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined4 *)(pUVar2 + 1) = 0;
    pUVar2[1].field_0x4 = 0;
    *(undefined ***)pUVar2 = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(pUVar2 + 2) = 0;
    *(undefined8 *)&pUVar2[2].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0;
    pUVar2[1].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
    *(undefined8 *)&pUVar2[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar2 + 2),0);
    pUVar2[2].field_0x10 = 0;
    *(undefined ***)pUVar2 = &___7UPCGManagedISKMComponent__6B_;
    FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
              ((FSkinnedMeshComponentDescriptor *)&pUVar2[2].field_0x18);
    *(undefined1 *)(pUVar2 + 6) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[6].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[6].field_0x10 = uVar1;
    *(double *)&pUVar2[6].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&pUVar2[6].field_0x20 = 0;
    pUVar2[6].field_0x24 = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedISMComponent> @ 149f2d690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedISMComponent>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UPCGManagedISMComponent::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined4 *)(pUVar2 + 1) = 0;
    pUVar2[1].field_0x4 = 0;
    *(undefined ***)pUVar2 = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(pUVar2 + 2) = 0;
    *(undefined8 *)&pUVar2[2].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x10 = 0;
    pUVar2[1].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
    *(undefined8 *)&pUVar2[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar2 + 2),0);
    pUVar2[2].field_0x10 = 0;
    *(undefined ***)pUVar2 = &___7UPCGManagedISMComponent__6B_;
    FISMComponentDescriptor::FISMComponentDescriptor
              ((FISMComponentDescriptor *)&pUVar2[2].field_0x20);
    pUVar2[0x13].field_0x8 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar2[0x13].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[0x13].field_0x18 = uVar1;
    *(double *)&pUVar2[0x13].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)(pUVar2 + 0x14) = 0;
    pUVar2[0x14].field_0x4 = 0;
    *(undefined4 *)&pUVar2[0x14].field_0x8 = 0;
    pUVar2[0x14].field_0xc = 0;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedResource> @ 149f2d7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGManagedResource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedResource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedResource__6B_;
    *(undefined4 *)(pUVar1 + 1) = 0;
    pUVar1[1].field_0x4 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGManagedSplineMeshComponent> @ 149f2d880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGManagedSplineMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGManagedSplineMeshComponent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    pUVar1[1].field_0x4 = 0;
    *(undefined ***)pUVar1 = &___7UPCGManagedComponent__6B_;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar1 + 2),0);
    *(undefined ***)pUVar1 = &___7UPCGManagedSplineMeshComponent__6B_;
    FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor
              ((FSplineMeshComponentDescriptor *)&pUVar1[2].field_0x10);
    FPCGSplineMeshParams::FPCGSplineMeshParams((FPCGSplineMeshParams *)&pUVar1[0xf].field_0x10);
    *(undefined4 *)&pUVar1[0x15].field_0x8 = 0;
    pUVar1[0x15].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGNode> @ 149f2d990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGNode__6B_;
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
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGOctreeQueries> @ 149f2da70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGOctreeQueries>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGOctreeQueries::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGOctreeQueries__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGParamData> @ 149f2db20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGParamData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGParamData::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    this->_padding_ = (longlong)&___7UPCGParamData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].UID = 0;
    *(undefined4 *)((longlong)&this[1].UID + 4) = 0x80;
    this[1].Crc.Value = 0xffffffff;
    *(undefined4 *)&this[1].Crc.bValid = 0;
    this[1].bIsFullDataCrc = false;
    this[1].Usage = (atomic<unsigned_char>)0x0;
    this[1]._padding_ = 0;
    this[1].CollectionRefCount = (atomic<int>)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[2]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPin> @ 149f2dc10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGPin>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPin::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGPin__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FPCGPinProperties::FPCGPinProperties((FPCGPinProperties *)&pUVar1[1].field_0x20);
    *(undefined1 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPinPropertiesBlueprintHelpers> @ 149f2dce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGPinPropertiesBlueprintHelpers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPinPropertiesBlueprintHelpers::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPCGPinPropertiesBlueprintHelpers__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSchedulingPolicyDistanceAndDirection> @ 149f2dd90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSchedulingPolicyDistanceAndDirection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSchedulingPolicyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSchedulingPolicyDistanceAndDirection::GetPrivateStaticClass();
  this = (UPCGSchedulingPolicyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSchedulingPolicyBase *)0x0) {
    UPCGSchedulingPolicyBase::UPCGSchedulingPolicyBase(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7UPCGSchedulingPolicyDistanceAndDirection__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f99999a;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 2;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSettings> @ 149f2de70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSettings::GetPrivateStaticClass();
  pUVar3 = (UPCGSettings *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSettings::UPCGSettings(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSettingsInstance> @ 149f2df10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSettingsInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSettingsInstance::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGSettingsInstance__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSettingsInterface> @ 149f2dfd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSettingsInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSettingsInterface::GetPrivateStaticClass();
  this = (UPCGData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGData *)0x0) {
    UPCGData::UPCGData(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSettingsWithDynamicInputs> @ 149f2e080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGSettingsWithDynamicInputs>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSettingsWithDynamicInputs::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSettingsWithDynamicInputs__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSubgraphNode> @ 149f2e140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSubgraphNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSubgraphNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UPCGSubgraphNode__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSubgraphSettings> @ 149f2e220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSubgraphSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSubgraphSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGSubgraphSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGSubsystem> @ 149f2e2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPCGSubsystem::_vftable__for__UWorldSubsystem__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPCGSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&___7UPCGSubsystem__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bInitialized = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 2),4000);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGTrivialSettings> @ 149f2e3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGTrivialSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGTrivialSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGTrivialSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<`FPCGRuntimeGenScheduler::Tick'::__l43::<lambda_1>_>_>_>_> @ 149f2e490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_FPCGRuntimeGenScheduler::Tick_::__l43::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> **ppTVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppTVar17 = &local_338;
    do {
      pTVar13 = ppTVar17[1];
      pTVar12 = *ppTVar17;
      pTVar1 = ppTVar17[2];
      local_348._0_4_ = (int)pTVar1;
      iVar11 = (int)(((longlong)pTVar13 - (longlong)pTVar12) / 0x38) + 1;
      pTVar16 = pTVar12;
      if ((int)local_348 != 0) {
LAB_149f2e560:
        if (8 < iVar11) {
          uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar10 = pTVar13 + 1;
          pTVar12 = pTVar16 + iVar11 / 2;
          TVar4 = pTVar12->_s_1;
          uVar5 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
          uVar7 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18);
          uVar8 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x20);
          uVar9 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x28);
          uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x30);
          pTVar12->_s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x28) = uVar3;
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x30);
          pTVar16->_s_1 = TVar4;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x30) = uVar2;
          pTVar12 = pTVar16;
LAB_149f2e5d0:
          pTVar14 = pTVar12;
          pTVar12 = pTVar14 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x000149f2e5d9;
          goto LAB_149f2e5e7;
        }
        if (pTVar16 < pTVar13) {
          pTVar1 = pTVar16 + 1;
          do {
            pTVar12 = pTVar16;
            if (pTVar1 <= pTVar13) {
              pTVar10 = pTVar1;
              if (0xdf < (ulonglong)((longlong)pTVar13 + (0x38 - (longlong)pTVar1))) {
                do {
                  if (*(double *)((pTVar10->ElementData).Pad + 0x28) <
                      *(double *)((pTVar12->ElementData).Pad + 0x28)) {
                    pTVar12 = pTVar10;
                  }
                  if (*(double *)((longlong)pTVar10 + 0x60) <
                      *(double *)((pTVar12->ElementData).Pad + 0x28)) {
                    pTVar12 = pTVar10 + 1;
                  }
                  if (*(double *)((longlong)pTVar10 + 0x98) <
                      *(double *)((pTVar12->ElementData).Pad + 0x28)) {
                    pTVar12 = pTVar10 + 2;
                  }
                  if (*(double *)((longlong)pTVar10 + 0xd0) <
                      *(double *)((pTVar12->ElementData).Pad + 0x28)) {
                    pTVar12 = pTVar10 + 3;
                  }
                  pTVar10 = pTVar10 + 4;
                } while (pTVar10 <= pTVar13 + -3);
              }
              for (; pTVar10 <= pTVar13; pTVar10 = pTVar10 + 1) {
                if (*(double *)((pTVar10->ElementData).Pad + 0x28) <
                    *(double *)((pTVar12->ElementData).Pad + 0x28)) {
                  pTVar12 = pTVar10;
                }
              }
            }
            TVar4 = pTVar12->_s_1;
            uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
            pTVar10 = pTVar13 + -1;
            uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x30);
            uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
            uVar7 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
            uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x28);
            pTVar12->_s_1 = pTVar13->_s_1;
            *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar7;
            uVar7 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) =
                 *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar7;
            uVar7 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) =
                 *(undefined8 *)((pTVar13->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x28) = uVar7;
            *(undefined8 *)((pTVar12->ElementData).Pad + 0x30) =
                 *(undefined8 *)((pTVar13->ElementData).Pad + 0x30);
            pTVar13->_s_1 = TVar4;
            *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar3;
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x20) = uVar8;
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x28) = uVar9;
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x30) = uVar2;
            pTVar13 = pTVar10;
          } while (pTVar16 < pTVar10);
        }
        goto LAB_149f2e760;
      }
LAB_149f2e751:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_FPCGRuntimeGenScheduler::Tick_::__l43::<lambda_1>_>_>_>_>
                (pTVar12,iVar11,param_3,param_4);
LAB_149f2e760:
      ppTVar17 = ppTVar17 + -3;
    } while (&local_338 <= ppTVar17);
  }
  return;
code_r0x000149f2e5d9:
  if (*(double *)((pTVar16->ElementData).Pad + 0x28) <= *(double *)((longlong)pTVar14 + 0x60))
  goto LAB_149f2e5d0;
LAB_149f2e5e7:
  do {
    pTVar15 = pTVar10;
    pTVar10 = pTVar15 + -1;
    if (pTVar10 <= pTVar16) break;
  } while (*(double *)((longlong)pTVar15 + -0x10) <= *(double *)((pTVar16->ElementData).Pad + 0x28))
  ;
  uVar2 = *(undefined8 *)((longlong)pTVar15 + -0x30);
  if (pTVar12 <= pTVar10) {
    TVar4 = pTVar12->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar14 + 0x40);
    uVar6 = *(undefined8 *)((longlong)pTVar14 + 0x48);
    uVar7 = *(undefined8 *)((longlong)pTVar14 + 0x50);
    uVar8 = *(undefined8 *)((longlong)pTVar14 + 0x58);
    uVar9 = *(undefined8 *)((longlong)pTVar14 + 0x60);
    uVar3 = *(undefined8 *)((longlong)pTVar14 + 0x68);
    pTVar12->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar14 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar15 + -0x20);
    *(undefined8 *)((longlong)pTVar14 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -0x28);
    *(undefined8 *)((longlong)pTVar14 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar14 + 0x58) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar14 + 0x60) = uVar2;
    *(undefined8 *)((longlong)pTVar14 + 0x68) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar15 + -0x30) = uVar5;
    *(undefined8 *)((longlong)pTVar15 + -0x28) = uVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar3;
    goto LAB_149f2e5d0;
  }
  TVar4 = pTVar16->_s_1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar6 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
  uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x30);
  pTVar16->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x28);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar2;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar15 + -0x30) = uVar5;
  *(undefined8 *)((longlong)pTVar15 + -0x28) = uVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar3;
  if (((longlong)pTVar10 + (-0x38 - (longlong)pTVar16)) / 0x38 <
      ((longlong)pTVar13 - (longlong)pTVar12) / 0x38) {
    if (pTVar12 < pTVar13) {
      *ppTVar17 = pTVar12;
      ppTVar17[1] = pTVar13;
      *(int *)(ppTVar17 + 2) = (int)local_348;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar10 <= pTVar16 + 1) goto LAB_149f2e760;
    pTVar13 = pTVar15 + -2;
    pTVar12 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar10) {
      *ppTVar17 = pTVar16;
      ppTVar17[1] = pTVar15 + -2;
      *(int *)(ppTVar17 + 2) = (int)local_348;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_149f2e760;
  }
  iVar11 = (int)(((longlong)pTVar13 - (longlong)pTVar12) / 0x38) + 1;
  pTVar16 = pTVar12;
  if ((int)local_348 == 0) goto LAB_149f2e751;
  goto LAB_149f2e560;
}

// IsObjectPtrEqual<UObject_const_,UScriptStruct_*,0> @ 149f2e8c0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject_const_,UScriptStruct_*,0>
          (TObjectPtr<UObject_const_> *param_1,UScriptStruct **param_2)

{
  if ((UScriptStruct *)(param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (UScriptStruct *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPCGEdge,UPCGEdge_const_*,0> @ 149f2e8e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGEdge,UPCGEdge_const_*,0>
          (TObjectPtr<UPCGEdge> *param_1,UPCGEdge **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGEdge *)0x0) {
    return *param_2 == (UPCGEdge *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UPCGNode,UPCGNode_const_*,0> @ 149f2e900

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGNode,UPCGNode_const_*,0>
          (TObjectPtr<UPCGNode> *param_1,UPCGNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGNode *)0x0) {
    return *param_2 == (UPCGNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>_> @ 149f2eb20

TMutableView<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>_> __cdecl
MutableView<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *in_RDX;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)in_RDX;
  iVar2 = *(int *)(in_RDX + 8);
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(in_RDX + 8) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  (param_1->AllocatorInstance).Data = in_RDX;
  return (TMutableView<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>_>)
         (TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// NewObject<UPCGEdge> @ 149f2eb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGEdge * __cdecl NewObject<UPCGEdge>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGEdge *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGEdge_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGEdge *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGGenSourcePlayer> @ 149f2ec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGGenSourcePlayer * __cdecl NewObject<UPCGGenSourcePlayer>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGGenSourcePlayer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGGenSourcePlayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGGenSourcePlayer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGGenSourceWPStreamingSource> @ 149f2ecc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGGenSourceWPStreamingSource * __cdecl NewObject<UPCGGenSourceWPStreamingSource>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGGenSourceWPStreamingSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGGenSourceWPStreamingSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGGenSourceWPStreamingSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGNode> @ 149f2ed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGNode * __cdecl NewObject<UPCGNode>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGNode *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGSubgraphNode> @ 149f2ee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGSubgraphNode * __cdecl NewObject<UPCGSubgraphNode>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGSubgraphNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGSubgraphNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGSubgraphNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPCGUserParametersData> @ 149f2eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGUserParametersData * __cdecl NewObject<UPCGUserParametersData>(UObject *param_1)

{
  UClass *pUVar1;
  UPCGUserParametersData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGUserParametersData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NoneOf<TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>,`UPCGManagedActors::IsManaging'::__l2::<lambda_1>_> @ 149f2ef40

bool __cdecl
Algo::
NoneOf<TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>,_UPCGManagedActors::IsManaging_::__l2::<lambda_1>_>
          (TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  this = (TPersistentObjectPtr<FSoftObjectPath> *)(param_1->AllocatorInstance).Data;
  pTVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSoftObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pTVar1) break;
    pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    if (pUVar4 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar5->_padding_)) && (pUVar4 == param_2.InObject)) {
        return false;
      }
    }
    this = this + 1;
  }
  return true;
}

// NoneOf<TArrayView<TSoftObjectPtr<UActorComponent>,int>,`UPCGManagedComponentBase::IsManaging'::__l2::<lambda_1>_> @ 149f2eff0

bool __cdecl
Algo::
NoneOf<TArrayView<TSoftObjectPtr<UActorComponent>,int>,_UPCGManagedComponentBase::IsManaging_::__l2::<lambda_1>_>
          (TArrayView<TSoftObjectPtr<UActorComponent>,int> *param_1,<lambda_1> param_2)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  
  this = (TPersistentObjectPtr<FSoftObjectPath> *)param_1->DataPtr;
  pTVar1 = this + param_1->ArrayNum;
  do {
    if (this == pTVar1) {
      return true;
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if (((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar4->_padding_)) && (pUVar3 == param_2.InObject)) {
        return false;
      }
    }
    this = this + 1;
  } while( true );
}

// Reverse<FPCGPoint> @ 149f301a0

void __cdecl AlgoImpl::Reverse<FPCGPoint>(FPCGPoint *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long64 lVar24;
  double dVar25;
  longlong lVar26;
  long64 lVar27;
  undefined4 uVar28;
  int iVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  int iVar33;
  FPCGPoint *pFVar34;
  longlong lVar35;
  
  lVar35 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar34 = param_1 + (param_2 + -1);
    do {
      dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[0];
      dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
      dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
      dVar4 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
      dVar5 = (param_1->Transform).Translation.XY.m128d_f64[0];
      dVar6 = (param_1->Transform).Translation.XY.m128d_f64[1];
      dVar7 = (param_1->Transform).Translation.ZW.m128d_f64[0];
      dVar8 = (param_1->Transform).Translation.ZW.m128d_f64[1];
      dVar9 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
      dVar10 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
      dVar11 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
      dVar12 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
      fVar30 = param_1->Density;
      uVar31 = *(undefined4 *)&param_1->field_0x64;
      dVar13 = (param_1->BoundsMin).field0_0x0._s_0.X;
      dVar14 = (param_1->BoundsMin).field0_0x0._s_0.Y;
      dVar15 = (param_1->BoundsMin).field0_0x0._s_0.Z;
      dVar16 = (param_1->BoundsMax).field0_0x0._s_0.X;
      dVar17 = (param_1->BoundsMax).field0_0x0._s_0.Y;
      dVar18 = (param_1->BoundsMax).field0_0x0._s_0.Z;
      lVar19 = param_1->_padding_;
      dVar20 = (param_1->Color).field0_0x0._s_0.X;
      dVar21 = (param_1->Color).field0_0x0._s_0.Y;
      dVar22 = (param_1->Color).field0_0x0._s_0.Z;
      dVar23 = (param_1->Color).field0_0x0._s_0.W;
      fVar32 = param_1->Steepness;
      iVar33 = param_1->Seed;
      lVar24 = param_1->MetadataEntry;
      dVar25 = (pFVar34->Transform).Rotation.XY.m128d_f64[1];
      (param_1->Transform).Rotation.XY.m128d_f64[0] = (pFVar34->Transform).Rotation.XY.m128d_f64[0];
      (param_1->Transform).Rotation.XY.m128d_f64[1] = dVar25;
      dVar25 = (pFVar34->Transform).Rotation.ZW.m128d_f64[1];
      (param_1->Transform).Rotation.ZW.m128d_f64[0] = (pFVar34->Transform).Rotation.ZW.m128d_f64[0];
      (param_1->Transform).Rotation.ZW.m128d_f64[1] = dVar25;
      dVar25 = (pFVar34->Transform).Translation.XY.m128d_f64[1];
      (param_1->Transform).Translation.XY.m128d_f64[0] =
           (pFVar34->Transform).Translation.XY.m128d_f64[0];
      (param_1->Transform).Translation.XY.m128d_f64[1] = dVar25;
      dVar25 = (pFVar34->Transform).Translation.ZW.m128d_f64[1];
      (param_1->Transform).Translation.ZW.m128d_f64[0] =
           (pFVar34->Transform).Translation.ZW.m128d_f64[0];
      (param_1->Transform).Translation.ZW.m128d_f64[1] = dVar25;
      dVar25 = (pFVar34->Transform).Scale3D.XY.m128d_f64[1];
      (param_1->Transform).Scale3D.XY.m128d_f64[0] = (pFVar34->Transform).Scale3D.XY.m128d_f64[0];
      (param_1->Transform).Scale3D.XY.m128d_f64[1] = dVar25;
      dVar25 = (pFVar34->Transform).Scale3D.ZW.m128d_f64[1];
      (param_1->Transform).Scale3D.ZW.m128d_f64[0] = (pFVar34->Transform).Scale3D.ZW.m128d_f64[0];
      (param_1->Transform).Scale3D.ZW.m128d_f64[1] = dVar25;
      uVar28 = *(undefined4 *)&pFVar34->field_0x64;
      dVar25 = (pFVar34->BoundsMin).field0_0x0._s_0.X;
      param_1->Density = pFVar34->Density;
      *(undefined4 *)&param_1->field_0x64 = uVar28;
      (param_1->BoundsMin).field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar34->BoundsMin).field0_0x0._s_0.Z;
      (param_1->BoundsMin).field0_0x0._s_0.Y = (pFVar34->BoundsMin).field0_0x0._s_0.Y;
      (param_1->BoundsMin).field0_0x0._s_0.Z = dVar25;
      dVar25 = (pFVar34->BoundsMax).field0_0x0._s_0.Y;
      (param_1->BoundsMax).field0_0x0._s_0.X = (pFVar34->BoundsMax).field0_0x0._s_0.X;
      (param_1->BoundsMax).field0_0x0._s_0.Y = dVar25;
      lVar26 = pFVar34->_padding_;
      (param_1->BoundsMax).field0_0x0._s_0.Z = (pFVar34->BoundsMax).field0_0x0._s_0.Z;
      param_1->_padding_ = lVar26;
      dVar25 = (pFVar34->Color).field0_0x0._s_0.Y;
      (param_1->Color).field0_0x0._s_0.X = (pFVar34->Color).field0_0x0._s_0.X;
      (param_1->Color).field0_0x0._s_0.Y = dVar25;
      dVar25 = (pFVar34->Color).field0_0x0._s_0.W;
      (param_1->Color).field0_0x0._s_0.Z = (pFVar34->Color).field0_0x0._s_0.Z;
      (param_1->Color).field0_0x0._s_0.W = dVar25;
      iVar29 = pFVar34->Seed;
      lVar27 = pFVar34->MetadataEntry;
      param_1->Steepness = pFVar34->Steepness;
      param_1->Seed = iVar29;
      param_1->MetadataEntry = lVar27;
      (pFVar34->Transform).Rotation.XY.m128d_f64[0] = dVar1;
      (pFVar34->Transform).Rotation.XY.m128d_f64[1] = dVar2;
      (pFVar34->Transform).Rotation.ZW.m128d_f64[0] = dVar3;
      (pFVar34->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
      (pFVar34->Transform).Translation.XY.m128d_f64[0] = dVar5;
      (pFVar34->Transform).Translation.XY.m128d_f64[1] = dVar6;
      (pFVar34->Transform).Translation.ZW.m128d_f64[0] = dVar7;
      (pFVar34->Transform).Translation.ZW.m128d_f64[1] = dVar8;
      (pFVar34->Transform).Scale3D.XY.m128d_f64[0] = dVar9;
      (pFVar34->Transform).Scale3D.XY.m128d_f64[1] = dVar10;
      (pFVar34->Transform).Scale3D.ZW.m128d_f64[0] = dVar11;
      (pFVar34->Transform).Scale3D.ZW.m128d_f64[1] = dVar12;
      pFVar34->Density = fVar30;
      *(undefined4 *)&pFVar34->field_0x64 = uVar31;
      (pFVar34->BoundsMin).field0_0x0._s_0.X = dVar13;
      (pFVar34->BoundsMin).field0_0x0._s_0.Y = dVar14;
      (pFVar34->BoundsMin).field0_0x0._s_0.Z = dVar15;
      (pFVar34->BoundsMax).field0_0x0._s_0.X = dVar16;
      (pFVar34->BoundsMax).field0_0x0._s_0.Y = dVar17;
      (pFVar34->BoundsMax).field0_0x0._s_0.Z = dVar18;
      pFVar34->_padding_ = lVar19;
      (pFVar34->Color).field0_0x0._s_0.X = dVar20;
      (pFVar34->Color).field0_0x0._s_0.Y = dVar21;
      (pFVar34->Color).field0_0x0._s_0.Z = dVar22;
      (pFVar34->Color).field0_0x0._s_0.W = dVar23;
      param_1 = param_1 + 1;
      pFVar34->Steepness = fVar32;
      pFVar34->Seed = iVar33;
      pFVar34->MetadataEntry = lVar24;
      lVar35 = lVar35 + -1;
      pFVar34 = pFVar34 + -1;
    } while (lVar35 != 0);
  }
  return;
}

// Sort<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<`FPCGRuntimeGenScheduler::Tick'::__l43::<lambda_1>_>_> @ 149f303a0

void __thiscall
TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_FPCGRuntimeGenScheduler::Tick_::__l43::<lambda_1>_>_>
          (TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,double>,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_FPCGRuntimeGenScheduler::Tick_::__l43::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FPCGRuntimeGenScheduler::FGridGenerationKey,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGRuntimeGenScheduler::FGridGenerationKey,double,0>_>::FValueComparisonClass<_public:_void___cdecl_FPCGRuntimeGenScheduler::Tick(APCGWorldActor_*,double)_::_43_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StaticEnum<enum_EPCGPinStatus> @ 149f30430

UEnum * __cdecl StaticEnum<enum_EPCGPinStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPinStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPinStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPinStatus,(UObject *)pUVar1,L"EPCGPinStatus");
  }
  return Z_Registration_Info_UEnum_EPCGPinStatus.OuterSingleton;
}

// StaticEnum<enum_EPCGPinUsage> @ 149f30470

UEnum * __cdecl StaticEnum<enum_EPCGPinUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPinUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPinUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPinUsage,(UObject *)pUVar1,L"EPCGPinUsage");
  }
  return Z_Registration_Info_UEnum_EPCGPinUsage.OuterSingleton;
}

// StaticEnum<enum_EPCGPointProperties> @ 149f304b0

UEnum * __cdecl StaticEnum<enum_EPCGPointProperties>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointProperties,(UObject *)pUVar1,
                       L"EPCGPointProperties");
  }
  return Z_Registration_Info_UEnum_EPCGPointProperties.OuterSingleton;
}

// StaticEnum<enum_EPCGSchedulingPolicyNetworkMode> @ 149f304f0

UEnum * __cdecl StaticEnum<enum_EPCGSchedulingPolicyNetworkMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSchedulingPolicyNetworkMode,(UObject *)pUVar1,
                       L"EPCGSchedulingPolicyNetworkMode");
  }
  return Z_Registration_Info_UEnum_EPCGSchedulingPolicyNetworkMode.OuterSingleton;
}

// StaticEnum<enum_EPCGSettingsExecutionMode> @ 149f30530

UEnum * __cdecl StaticEnum<enum_EPCGSettingsExecutionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode,(UObject *)pUVar1,
                       L"EPCGSettingsExecutionMode");
  }
  return Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton;
}

// StaticEnum<enum_EPCGSettingsType> @ 149f30570

UEnum * __cdecl StaticEnum<enum_EPCGSettingsType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSettingsType,(UObject *)pUVar1,L"EPCGSettingsType")
    ;
  }
  return Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton;
}

// StaticEnum<enum_EPCGTypeConversion> @ 149f305b0

UEnum * __cdecl StaticEnum<enum_EPCGTypeConversion>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTypeConversion,(UObject *)pUVar1,
                       L"EPCGTypeConversion");
  }
  return Z_Registration_Info_UEnum_EPCGTypeConversion.OuterSingleton;
}

// Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,`UPCGNode::InputPinProperties'::__l2::<lambda_1>_> @ 149f305f0

/* WARNING: Removing unreachable block (ram,0x000149f30777) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGNode::InputPinProperties_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_58;
  FScriptContainerElement local_50;
  FPCGDataTypeIdentifier local_48;
  FScriptContainerElement local_30;
  FScriptContainerElement local_2f;
  FScriptContainerElement local_2e;
  FScriptContainerElement local_2d;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    local_58 = *(undefined8 *)(lVar3 + 0x48);
    local_50 = *(FScriptContainerElement *)(lVar3 + 0x50);
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
              (&local_48,(FPCGDataTypeIdentifier *)(lVar3 + 0x58));
    local_30 = *(FScriptContainerElement *)(lVar3 + 0x70);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_2f = *(FScriptContainerElement *)(lVar3 + 0x71);
    local_2e = *(FScriptContainerElement *)(lVar3 + 0x72);
    local_2d = *(FScriptContainerElement *)(lVar3 + 0x73);
    if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)param_2->ArrayMax * 0x30)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
    *(undefined8 *)pFVar7 = local_58;
    *(undefined8 *)(pFVar7 + 0x10) = 0;
    pFVar7[8] = local_50;
    *(FScriptContainerElement **)(pFVar7 + 0x10) = local_48.Ids.AllocatorInstance.Data;
    local_48.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 0x18) = local_48.Ids.ArrayNum;
    *(int *)(pFVar7 + 0x1c) = local_48.Ids.ArrayMax;
    local_48.Ids.ArrayNum = 0;
    local_48.Ids.ArrayMax = 0;
    *(int *)(pFVar7 + 0x20) = local_48.CustomSubtype;
    pFVar7[0x28] = local_30;
    pFVar7[0x29] = local_2f;
    pFVar7[0x2a] = local_2e;
    pFVar7[0x2b] = local_2d;
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,`UPCGNode::OutputPinProperties'::__l2::<lambda_1>_> @ 149f307b0

/* WARNING: Removing unreachable block (ram,0x000149f30937) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGNode::OutputPinProperties_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_58;
  FScriptContainerElement local_50;
  FPCGDataTypeIdentifier local_48;
  FScriptContainerElement local_30;
  FScriptContainerElement local_2f;
  FScriptContainerElement local_2e;
  FScriptContainerElement local_2d;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    local_58 = *(undefined8 *)(lVar3 + 0x48);
    local_50 = *(FScriptContainerElement *)(lVar3 + 0x50);
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
              (&local_48,(FPCGDataTypeIdentifier *)(lVar3 + 0x58));
    local_30 = *(FScriptContainerElement *)(lVar3 + 0x70);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_2f = *(FScriptContainerElement *)(lVar3 + 0x71);
    local_2e = *(FScriptContainerElement *)(lVar3 + 0x72);
    local_2d = *(FScriptContainerElement *)(lVar3 + 0x73);
    if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)param_2->ArrayMax * 0x30)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
    *(undefined8 *)pFVar7 = local_58;
    *(undefined8 *)(pFVar7 + 0x10) = 0;
    pFVar7[8] = local_50;
    *(FScriptContainerElement **)(pFVar7 + 0x10) = local_48.Ids.AllocatorInstance.Data;
    local_48.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 0x18) = local_48.Ids.ArrayNum;
    *(int *)(pFVar7 + 0x1c) = local_48.Ids.ArrayMax;
    local_48.Ids.ArrayNum = 0;
    local_48.Ids.ArrayMax = 0;
    *(int *)(pFVar7 + 0x20) = local_48.CustomSubtype;
    pFVar7[0x28] = local_30;
    pFVar7[0x29] = local_2f;
    pFVar7[0x2a] = local_2e;
    pFVar7[0x2b] = local_2d;
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// Transform<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TArray<FName,TSizedDefaultAllocator<32>_>_&,`FPCGSubgraphContext::InitializeUserParametersStruct'::__l25::<lambda_1>_> @ 149f30970

void __cdecl
Algo::
Transform<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,TArray<FName,TSizedDefaultAllocator<32>_>_&,_FPCGSubgraphContext::InitializeUserParametersStruct_::__l25::<lambda_1>_>
          (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  FName *pFVar5;
  code *pcVar6;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  FPropertyBagPropertyDesc *pFVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  FName local_b8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FGuid local_48;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_149f30a1f;
      uVar15 = puVar14[lVar11 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_80 = (int)lVar11;
    iStack_94 = local_80 + -1 + local_90;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_149f30a1f:
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_94;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_94;
  TStack_70.BaseBitIndex = local_90;
  uStack_50 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar15 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149f30b30;
      uVar15 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_7c = (int)lVar11;
    uVar15 = local_7c + -1 + uVar16;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_149f30b30:
  while( true ) {
    pTVar7 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      return;
    }
    puVar2 = (undefined8 *)
             (*(longlong *)&pTVar7->Elements + (longlong)TStack_70.CurrentBitIndex * 0x18);
    local_48._0_8_ = *puVar2;
    local_48._8_8_ = puVar2[1];
    pFVar10 = UPropertyBag::FindPropertyDescByID(param_3.OriginalBag,&local_48);
    if (pFVar10 == (FPropertyBagPropertyDesc *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6759709290413425217>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                         ,0x241,"Desc");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
    }
    else {
      local_b8 = pFVar10->Name;
    }
    pFVar5 = (FName *)(param_2->AllocatorInstance).Data;
    if (((pFVar5 <= &local_b8) && (&local_b8 < pFVar5 + param_2->ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_b8;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ~TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,0,1> @ 149f337e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_UPCGSubsystem::ScheduleCleanup_::__l2::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::`2'::<lambda_2>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,0,0> @ 149f33800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UPCGSubsystem::ScheduleComponent_::__l35::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::`35'::<lambda_2>,0,0>::_vftable_;
  return;
}

// operator== @ 149f35ae0

bool __cdecl operator==(FPCGPointArray *param_1,FPCGPointArray *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  bVar4 = FPCGPointArrayProperty<UE::Math::TTransform<double>_>::operator==
                    (&param_1->Transform,&param_2->Transform);
  if ((((((bVar4) &&
         (bVar4 = FPCGPointArrayProperty<float>::operator==(&param_1->Density,&param_2->Density),
         bVar4)) &&
        (bVar4 = FPCGPointArrayProperty<UE::Math::TVector<double>_>::operator==
                           (&param_1->BoundsMin,&param_2->BoundsMin), bVar4)) &&
       ((bVar4 = FPCGPointArrayProperty<UE::Math::TVector<double>_>::operator==
                           (&param_1->BoundsMax,&param_2->BoundsMax), bVar4 &&
        (bVar4 = FPCGPointArrayProperty<UE::Math::TVector4<double>_>::operator==
                           (&param_1->Color,&param_2->Color), bVar4)))) &&
      ((bVar4 = FPCGPointArrayProperty<float>::operator==(&param_1->Steepness,&param_2->Steepness),
       bVar4 && (((param_1->Seed).NumValues == (param_2->Seed).NumValues &&
                 (iVar1 = (param_1->Seed).Values.ArrayNum, iVar1 == (param_2->Seed).Values.ArrayNum)
                 ))))) && ((param_1->Seed).Value == (param_2->Seed).Value)) {
    uVar7 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (param_2->Seed).Values.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (param_2->Seed).Values.AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Seed).Values.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(int *)((param_1->Seed).Values.AllocatorInstance.Data + lVar8 * 4) !=
            *(int *)(pFVar2 + lVar8 * 4)) {
          return false;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar7 < (param_1->Seed).Values.ArrayNum);
    }
    if ((((param_1->MetadataEntry).NumValues == (param_2->MetadataEntry).NumValues) &&
        (iVar1 = (param_1->MetadataEntry).Values.ArrayNum,
        iVar1 == (param_2->MetadataEntry).Values.ArrayNum)) &&
       ((param_1->MetadataEntry).Value == (param_2->MetadataEntry).Value)) {
      uVar7 = 0;
      if (0 < iVar1) {
        lVar8 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar7 < (param_2->MetadataEntry).Values.ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (param_2->MetadataEntry).Values.AllocatorInstance.Data;
          uVar6 = 0;
          if ((int)uVar7 < (param_1->MetadataEntry).Values.ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(longlong *)((param_1->MetadataEntry).Values.AllocatorInstance.Data + lVar8 * 8) !=
              *(longlong *)(pFVar2 + lVar8 * 8)) {
            return false;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 1;
        } while ((int)uVar7 < (param_1->MetadataEntry).Values.ArrayNum);
      }
      if ((param_1->NumPoints == param_2->NumPoints) &&
         (param_1->bInitializedValues == param_2->bInitializedValues)) {
        return true;
      }
    }
  }
  return false;
}

// operator() @ 149f364c0

double __thiscall
``PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,FPCGPoint *param_1,FPCGPoint *param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  if (1 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8)) {
    return 0.0;
  }
  local_38 = (param_2->Transform).Translation.XY.m128d_f64[0];
  dStack_30 = (param_2->Transform).Translation.XY.m128d_f64[1];
  local_28 = (param_2->Transform).Translation.ZW.m128d_f64[0];
  local_20 = (param_1->Transform).Translation.XY.m128d_f64[0];
  dStack_18 = (param_1->Transform).Translation.XY.m128d_f64[1];
  local_10 = (param_1->Transform).Translation.ZW.m128d_f64[0];
  lVar1 = *(longlong *)((longlong)this + 8);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x40));
  pcVar2 = *(code **)(lVar1 + 0x40);
  plVar5 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x68);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  dVar3 = (double)(*pcVar2)(uVar4,&local_20,&local_38);
  return dVar3 * *(double *)(*(longlong *)this + 8);
}

// operator() @ 149f395c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall PCGSubsystemConsole::<lambda_33>::operator()(<lambda_33> *this)

{
  code *pcVar1;
  bool bVar2;
  UPCGSubsystem *pUVar3;
  
  pUVar3 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (((pUVar3 != (UPCGSubsystem *)0x0) && (pUVar3->_padding_ != 0)) && (pUVar3->_padding_ != -0x78)
     ) {
    FPCGGraphCache::ClearCache((FPCGGraphCache *)(pUVar3->_padding_ + 0x260));
    if (pUVar3->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FPCGGraphCompiler::ClearCache((FPCGGraphCompiler *)(pUVar3->_padding_ + 0x78));
    return;
  }
  return;
}

// operator() @ 149f39640

void __thiscall
``UPCGNode::UpdatePins'::__l2::<lambda_2>::operator()'::__l29::<lambda_3>::operator()
          (void *this,TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  longlong lVar4;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<unsigned_int> FVar7;
  ForAnyElementType *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  
  uVar21 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar21) {
    lVar20 = (longlong)(int)uVar21 * 8;
    do {
      plVar2 = *(longlong **)this;
      uVar14 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar3 + (int)plVar2[1]) {
        plVar15 = plVar3;
        do {
          if (*plVar15 == *(longlong *)((param_1->AllocatorInstance).Data + lVar20)) {
            uVar14 = (uint)((longlong)plVar15 - (longlong)plVar3 >> 3);
            if (-1 < (int)uVar14) {
              if (!param_2) goto LAB_149f39922;
              plVar2 = *(longlong **)this;
              this_00 = *(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          **)((longlong)this + 8);
              uVar11 = 0;
              if ((int)uVar14 < (int)plVar2[1]) {
                uVar11 = ~uVar14 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar4 = *(longlong *)(*(longlong *)(*plVar2 + (longlong)(int)uVar14 * 8) + 0x48);
              if ((this_00->Data).ArrayNum == this_00->NumFreeIndices) goto LAB_149f39922;
              uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
              pTVar5 = *(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         **)&this_00[1].Data.ArrayNum;
              pTVar13 = this_00 + 1;
              if (pTVar5 != (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)0x0) {
                pTVar13 = pTVar5;
              }
              uVar11 = *(uint *)((pTVar13->AllocationFlags).AllocatorInstance.InlineData +
                                ((longlong)
                                 *(int *)this_00[1].AllocationFlags.AllocatorInstance.InlineData -
                                 1U & (longlong)(int)((int)((ulonglong)lVar4 >> 0x20) + uVar11)) * 4
                                + -0x10);
              if (uVar11 == 0xffffffff) goto LAB_149f39922;
              pFVar6 = (this_00->Data).AllocatorInstance.Data;
              goto LAB_149f39800;
            }
            break;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar3 + (int)plVar2[1]);
      }
LAB_149f39a21:
      lVar20 = lVar20 + -8;
      uVar21 = uVar21 - 1;
    } while (-1 < (int)uVar21);
  }
  return;
LAB_149f39800:
  lVar16 = (longlong)(int)uVar11 * 0x10;
  if (*(longlong *)(pFVar6 + lVar16) != lVar4) goto code_r0x000149f39811;
  if (((int)uVar11 < 0) || ((this_00->AllocationFlags).NumBits <= (int)uVar11)) {
LAB_149f3987e:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Elements.IsValidIndex(ElementIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if (((this_00->AllocationFlags).NumBits <= (int)uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar7 = (this_00->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<unsigned_int>)&this_00->AllocationFlags;
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar7;
    }
    uVar19 = uVar11;
    if ((int)uVar11 < 0) {
      uVar19 = uVar11 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0
       ) goto LAB_149f3987e;
  }
  pTVar5 = *(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             **)&this_00[1].Data.ArrayNum;
  pFVar6 = (this_00->Data).AllocatorInstance.Data;
  pTVar13 = this_00 + 1;
  if (pTVar5 != (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
    pTVar13 = pTVar5;
  }
  pFVar18 = (FScriptContainerElement *)
            ((pTVar13->AllocationFlags).AllocatorInstance.InlineData +
            (longlong)*(int *)(pFVar6 + lVar16 + 0xc) * 4 + -0x10);
  while( true ) {
    uVar19 = *(uint *)pFVar18;
    if ((uVar19 == 0xffffffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar19 == uVar11) break;
    pFVar18 = (this_00->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10 + 8;
  }
  *(int *)pFVar18 = *(int *)(pFVar6 + lVar16 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_00,uVar11,1);
LAB_149f39922:
  plVar2 = *(longlong **)this;
  uVar19 = ~uVar14 >> 0x1f;
  bVar1 = **(byte **)((longlong)this + 0x10);
  uVar11 = 0;
  if ((int)uVar14 < (int)plVar2[1]) {
    uVar11 = uVar19;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UPCGPin::BreakAllEdges
                     (*(UPCGPin **)(*plVar2 + (longlong)(int)uVar14 * 8),
                      *(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> **)
                       ((longlong)this + 0x18));
  **(byte **)((longlong)this + 0x10) = bVar10 | bVar1;
  pFVar8 = *(ForAnyElementType **)this;
  uVar11 = 0;
  if ((int)uVar14 < *(int *)&pFVar8[1].Data) {
    uVar11 = uVar19;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = *(int *)&pFVar8[1].Data + ~uVar14;
  if (iVar12 != 0) {
    memmove(pFVar8->Data + (longlong)(int)uVar14 * 8,pFVar8->Data + (longlong)(int)uVar14 * 8 + 8,
            (longlong)iVar12 << 3);
  }
  *(int *)&pFVar8[1].Data = *(int *)&pFVar8[1].Data + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,pFVar8,*(int *)&pFVar8[1].Data,(int *)((longlong)&pFVar8[1].Data + 4));
  goto LAB_149f39a21;
code_r0x000149f39811:
  uVar11 = *(uint *)(pFVar6 + lVar16 + 8);
  if (uVar11 == 0xffffffff) goto LAB_149f39922;
  goto LAB_149f39800;
}

// `vector_deleting_destructor'`adjustor{48}' @ 149f39bb4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGEngineSubsystem::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPCGEngineSubsystem::_vector_deleting_destructor__adjustor_48__
          (UPCGEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGEngineSubsystem *)&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 149f39bc4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGEngineSubsystem::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UPCGEngineSubsystem::_vector_deleting_destructor__adjustor_72__
          (UPCGEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGEngineSubsystem *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149f39bd4

/* [thunk]:private: virtual void * __ptr64 __cdecl UPCGGenSourceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGGenSourceComponent::_vector_deleting_destructor__adjustor_40__
          (UPCGGenSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGGenSourceComponent *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 149f39be4

/* [thunk]:private: virtual void * __ptr64 __cdecl UPCGGenSourceComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UPCGGenSourceComponent::_vector_deleting_destructor__adjustor_192__
          (UPCGGenSourceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGGenSourceComponent *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149f39bf8

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGGenSourceEditorCamera::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGGenSourceEditorCamera::_vector_deleting_destructor__adjustor_40__
          (UPCGGenSourceEditorCamera *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGGenSourceEditorCamera *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149f39c08

/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGGenSourcePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGGenSourcePlayer::_vector_deleting_destructor__adjustor_40__
          (UPCGGenSourcePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPCGGenSourcePlayer *)
                      &this[-1].ViewFrustum.TypedValue.PermutedPlanes.AllocatorInstance.field_0x108,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149f39c18

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGGenSourceWPStreamingSource::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPCGGenSourceWPStreamingSource::_vector_deleting_destructor__adjustor_40__
          (UPCGGenSourceWPStreamingSource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPCGGenSourceWPStreamingSource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 149f39c28

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPCGSubsystem::_vector_deleting_destructor__adjustor_56__(UPCGSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGSubsystem *)&this[-1].BeginTickActions,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 149f39c38

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UPCGSubsystem::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UPCGSubsystem::_vector_deleting_destructor__adjustor_72__(UPCGSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPCGSubsystem *)&this[-1].bHasTickedOnce,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 149f39c50

void * __thiscall
FPCGCustomPointAccessor<UE::Math::TQuat<double>_>::_scalar_deleting_destructor_
          (FPCGCustomPointAccessor<UE::Math::TQuat<double>_> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Setter != 0) {
    plVar1 = *(longlong **)&(this->Setter).field_0x28;
    plVar2 = (longlong *)&(this->Setter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Getter != 0) {
    plVar1 = *(longlong **)&(this->Getter).field_0x28;
    plVar2 = (longlong *)&(this->Getter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39cc0

void * __thiscall
FPCGCustomPointAccessor<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (FPCGCustomPointAccessor<UE::Math::TVector<double>_> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Setter != 0) {
    plVar1 = *(longlong **)&(this->Setter).field_0x28;
    plVar2 = (longlong *)&(this->Setter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Getter != 0) {
    plVar1 = *(longlong **)&(this->Getter).field_0x28;
    plVar2 = (longlong *)&(this->Getter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39d30

void * __thiscall
IPCGAttributeAccessorT<FPCGCustomPointAccessor<UE::Math::TQuat<double>_>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGCustomPointAccessor<UE::Math::TQuat<double>_>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39d60

void * __thiscall
IPCGAttributeAccessorT<FPCGCustomPointAccessor<UE::Math::TVector<double>_>_>::
_scalar_deleting_destructor_
          (IPCGAttributeAccessorT<FPCGCustomPointAccessor<UE::Math::TVector<double>_>_> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39d90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPCGModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39dc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPCGModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39df0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPCGRuntimeGenScheduler,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39e20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39e60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::`2'::<lambda_2>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::`35'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39f20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGraphExecutor,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPCGGraphExecutor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39f60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGSubgraphElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGSubgraphElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f39fa0

void * __thiscall APCGVolume::_scalar_deleting_destructor_(APCGVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APCGVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall APCGWorldActor::_scalar_deleting_destructor_(APCGWorldActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APCGWorldActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a060

void * __thiscall
FPCGInputForwardingElement::_scalar_deleting_destructor_
          (FPCGInputForwardingElement *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Input).DataCrcs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->Input).TaggedData.AllocatorInstance.Data,
             (this->Input).TaggedData.ArrayNum);
  pFVar1 = (this->Input).TaggedData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a0c0

void * __thiscall
FPCGSettingsObjectCrc::_scalar_deleting_destructor_(FPCGSettingsObjectCrc *this,uint param_1)

{
  FArchiveObjectCrc32::~FArchiveObjectCrc32((FArchiveObjectCrc32 *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a100

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
FPCGSubgraphContext::_scalar_deleting_destructor_(FPCGSubgraphContext *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  (this->ReferencedObjects).HashSize = 0;
  FVar1 = (this->ReferencedObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UPCGData_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UPCGData_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedObjects).Elements);
  FInstancedStruct::Reset(&this->GraphInstanceParametersOverride);
  pFVar2 = (this->SubgraphTaskIds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a190

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
IPCGBaseSubsystem::_scalar_deleting_destructor_(IPCGBaseSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPCGBaseSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphExecutor).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a1e0

void * __thiscall
IPCGGenSourceBase::_scalar_deleting_destructor_(IPCGGenSourceBase *this,uint param_1)

{
  *this = (IPCGGenSourceBase)&___7IPCGGenSourceBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a220

void * __thiscall
UPCGBaseSubgraphNode::_scalar_deleting_destructor_(UPCGBaseSubgraphNode *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGBaseSubgraphNode__6B_;
  UPCGNode::~UPCGNode((UPCGNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a280

void * __thiscall
UPCGBaseSubgraphSettings::_scalar_deleting_destructor_(UPCGBaseSubgraphSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGBaseSubgraphSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a2e0

void * __thiscall
UPCGBaseSubsystem::_scalar_deleting_destructor_(UPCGBaseSubsystem *this,uint param_1)

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

// `scalar_deleting_destructor' @ 149f3a340

void * __thiscall
UPCGBlueprintPinHelpers::_scalar_deleting_destructor_(UPCGBlueprintPinHelpers *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGBlueprintPinHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a3a0

void * __thiscall
UPCGEngineSubsystem::_scalar_deleting_destructor_(UPCGEngineSubsystem *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UEngineSubsystem__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IPCGBaseSubsystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->field_0x48);
  *(undefined ***)&this->field_0x30 = &___7IPCGBaseSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x40);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a440

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
UPCGGenSourceComponent::_scalar_deleting_destructor_(UPCGGenSourceComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc0 = &___7IPCGGenSourceBase__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a4d0

void * __thiscall
UPCGGenSourceEditorCamera::_scalar_deleting_destructor_
          (UPCGGenSourceEditorCamera *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IPCGGenSourceBase__6B_;
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

// `scalar_deleting_destructor' @ 149f3a540

void * __thiscall
UPCGGenSourcePlayer::_scalar_deleting_destructor_(UPCGGenSourcePlayer *this,uint param_1)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGenSourceBase__;
  if ((this->ViewFrustum).bIsSet != false) {
    FVar1 = (this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar1 = (this->ViewFrustum).TypedValue.Planes.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
  }
  this->_padding_ = (longlong)&___7IPCGGenSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a5f0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UPCGGenSourceWPStreamingSource::_scalar_deleting_destructor_
          (UPCGGenSourceWPStreamingSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPCGGenSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a660

void * __thiscall
UPCGManagedActors::_scalar_deleting_destructor_(UPCGManagedActors *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPCGManagedActors__6B_;
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->GeneratedActorsArray).AllocatorInstance.Data,
             (this->GeneratedActorsArray).ArrayNum);
  pFVar1 = (this->GeneratedActorsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->GeneratedActors).HashSize = 0;
  FVar2 = (this->GeneratedActors).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GeneratedActors).Elements);
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a730

void * __thiscall
UPCGManagedComponent::_scalar_deleting_destructor_(UPCGManagedComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  pvVar1 = *(void **)&(this->GeneratedComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a7b0

void * __thiscall
UPCGManagedComponentBase::_scalar_deleting_destructor_(UPCGManagedComponentBase *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a810

void * __thiscall
UPCGManagedComponentDefaultList::_scalar_deleting_destructor_
          (UPCGManagedComponentDefaultList *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGManagedComponentList__6B_;
  DestructItems<TSoftObjectPtr<UActorComponent>,int>
            (*(TSoftObjectPtr<UActorComponent> **)&this->field_0x38,*(int *)&this->field_0x40);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  *(undefined ***)this = &___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a8a0

void * __thiscall
UPCGManagedComponentList::_scalar_deleting_destructor_(UPCGManagedComponentList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGManagedComponentList__6B_;
  DestructItems<TSoftObjectPtr<UActorComponent>,int>
            ((TSoftObjectPtr<UActorComponent> *)(this->GeneratedComponents).AllocatorInstance.Data,
             (this->GeneratedComponents).ArrayNum);
  pFVar1 = (this->GeneratedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a930

void * __thiscall
UPCGManagedISKMComponent::_scalar_deleting_destructor_(UPCGManagedISKMComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGManagedISKMComponent__6B_;
  FSkinnedMeshComponentDescriptor::~FSkinnedMeshComponentDescriptor(&this->Descriptor);
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3a9c0

void * __thiscall
UPCGManagedISMComponent::_scalar_deleting_destructor_(UPCGManagedISMComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGManagedISMComponent__6B_;
  FISMComponentDescriptor::~FISMComponentDescriptor(&this->Descriptor);
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3aa50

void * __thiscall
UPCGManagedResource::_scalar_deleting_destructor_(UPCGManagedResource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3aab0

void * __thiscall
UPCGManagedSplineMeshComponent::_scalar_deleting_destructor_
          (UPCGManagedSplineMeshComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGManagedSplineMeshComponent__6B_;
  FSplineMeshComponentDescriptor::~FSplineMeshComponentDescriptor(&this->Descriptor);
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3ab40

void * __thiscall UPCGNode::_scalar_deleting_destructor_(UPCGNode *this,uint param_1)

{
  ~UPCGNode(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3aba0

void * __thiscall
UPCGOctreeQueries::_scalar_deleting_destructor_(UPCGOctreeQueries *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGOctreeQueries__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3ac00

void * __thiscall UPCGParamData::_scalar_deleting_destructor_(UPCGParamData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGParamData__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CachedLastSelector).field_0x28,
             *(int *)&(this->CachedLastSelector).field_0x30);
  pvVar1 = *(void **)&(this->CachedLastSelector).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameMap);
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3acc0

void * __thiscall UPCGPin::_scalar_deleting_destructor_(UPCGPin *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGPin__6B_;
  pFVar1 = (this->Properties).AllowedTypes.Ids.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3ad40

void * __thiscall
UPCGPinPropertiesBlueprintHelpers::_scalar_deleting_destructor_
          (UPCGPinPropertiesBlueprintHelpers *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGPinPropertiesBlueprintHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3ada0

void * __thiscall
UPCGSchedulingPolicyDistanceAndDirection::_scalar_deleting_destructor_
          (UPCGSchedulingPolicyDistanceAndDirection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyDistanceAndDirection__6B_;
  UPCGSchedulingPolicyBase::~UPCGSchedulingPolicyBase((UPCGSchedulingPolicyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3ae00

void * __thiscall UPCGSettings::_scalar_deleting_destructor_(UPCGSettings *this,uint param_1)

{
  ~UPCGSettings(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3ae60

void * __thiscall
UPCGSettingsInstance::_scalar_deleting_destructor_(UPCGSettingsInstance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3aec0

void * __thiscall
UPCGSettingsInterface::_scalar_deleting_destructor_(UPCGSettingsInterface *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGSettingsInterface__6B_;
  UPCGData::~UPCGData((UPCGData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3af20

void * __thiscall
UPCGSettingsWithDynamicInputs::_scalar_deleting_destructor_
          (UPCGSettingsWithDynamicInputs *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSettingsWithDynamicInputs__6B_;
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->DynamicInputPinProperties).AllocatorInstance.Data,
             (this->DynamicInputPinProperties).ArrayNum);
  pFVar1 = (this->DynamicInputPinProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3afb0

void * __thiscall
UPCGSubgraphNode::_scalar_deleting_destructor_(UPCGSubgraphNode *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGBaseSubgraphNode__6B_;
  UPCGNode::~UPCGNode((UPCGNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3b010

void * __thiscall
UPCGSubgraphSettings::_scalar_deleting_destructor_(UPCGSubgraphSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGBaseSubgraphSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3b070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall UPCGSubsystem::_scalar_deleting_destructor_(UPCGSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UPCGSubsystem__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PCGWorldActorLock);
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->BeginTickActions).AllocatorInstance.Data,
             (this->BeginTickActions).ArrayNum);
  pFVar1 = (this->BeginTickActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FPCGActorAndComponentMapping>::operator()
            ((TDefaultDelete<FPCGActorAndComponentMapping> *)&this->ActorAndComponentMapping,
             (this->ActorAndComponentMapping).Ptr);
  this->_padding_ = (longlong)&___7IPCGBaseSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149f3b140

void * __thiscall
UPCGTrivialSettings::_scalar_deleting_destructor_(UPCGTrivialSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGTrivialSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeIPCGBaseSubsystem @ 149f42370

void __cdecl EmptyLinkFunctionForGeneratedCodeIPCGBaseSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGEngineSubsystem @ 149f42380

void __cdecl EmptyLinkFunctionForGeneratedCodePCGEngineSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGenSourceComponent @ 149f42390

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGenSourceComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGenSourceEditorCamera @ 149f423a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGenSourceEditorCamera(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGenSourcePlayer @ 149f423b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGenSourcePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGenSourceWPStreamingSource @ 149f423c0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGenSourceWPStreamingSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGManagedResource @ 149f423d0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGManagedResource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGNode @ 149f423e0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGOctreeQueries @ 149f423f0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGOctreeQueries(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGParamData @ 149f42400

void __cdecl EmptyLinkFunctionForGeneratedCodePCGParamData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPin @ 149f42410

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPin(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPoint @ 149f42420

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPoint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPointArray @ 149f42430

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPointArray(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGRuntimeGenScheduler @ 149f42440

void __cdecl EmptyLinkFunctionForGeneratedCodePCGRuntimeGenScheduler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSchedulingPolicyDistanceAndDirection @ 149f42450

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSchedulingPolicyDistanceAndDirection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSettings @ 149f42460

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSettingsWithDynamicInputs @ 149f42470

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSettingsWithDynamicInputs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSubgraph @ 149f42480

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSubgraph(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSubsystem @ 149f42490

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGVolume @ 149f424a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGWorldActor @ 149f424b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGWorldActor(void)

{
  return;
}

// GetEdgeCoordinate @ 149f49890

TVector2<double> * __cdecl
PCGSpatialAlgo::MarchingSquaresAlgo::GetEdgeCoordinate
          (TVector2<double> *__return_storage_ptr__,int param_1,int param_2,Edge param_3,
          double *param_4,TFunctionRef<double___cdecl(int,int)> *param_5,bool param_6)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined3 in_stack_00000039;
  int local_e8 [2];
  int local_e0 [2];
  int local_d8 [2];
  int local_d0 [2];
  int local_c8 [2];
  int local_c0 [2];
  int local_b8 [2];
  int local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  int local_98 [24];
  
  dVar1 = __real_3fe0000000000000;
  dVar2 = __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)param_2;
  if (param_6) {
    uVar13 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar12 = 0;
    if (param_3 == Id_0) {
      local_b0[0] = param_2;
      local_a8[0] = param_1;
      uVar9 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_a8,local_b0);
      local_a0[0] = param_2 + 1;
      piVar8 = local_a0;
      piVar7 = local_98;
      local_98[0] = param_1;
LAB_149f49a4d:
      uVar6 = *(undefined8 *)&param_5->field_0x8;
      pcVar5 = *(code **)param_5;
LAB_149f49a54:
      uVar13 = (undefined4)uVar9;
      uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = (*pcVar5)(uVar6,piVar7,piVar8);
      uVar11 = (undefined4)uVar9;
      uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    else {
      if (param_3 == Id_1) {
        local_d0[0] = param_2 + 1;
        local_c8[0] = param_1;
        uVar9 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_c8,local_d0);
        uVar6 = *(undefined8 *)&param_5->field_0x8;
        local_b8[0] = param_1 + 1;
        piVar8 = local_c0;
        pcVar5 = *(code **)param_5;
        piVar7 = local_b8;
        local_c0[0] = param_2 + 1;
        goto LAB_149f49a54;
      }
      if (param_3 == Id_2) {
        local_res8[0] = param_2;
        local_e8[0] = param_1 + 1;
        uVar9 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_e8,local_res8);
        uVar6 = *(undefined8 *)&param_5->field_0x8;
        local_e0[0] = param_2 + 1;
        piVar8 = local_e0;
        pcVar5 = *(code **)param_5;
        piVar7 = local_d8;
        local_d8[0] = param_1 + 1;
        goto LAB_149f49a54;
      }
      if (param_3 == Id_3) {
        local_res20[0] = param_1;
        _param_6 = param_2;
        uVar9 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_res20,&param_6);
        local_res18[0] = param_1 + 1;
        piVar8 = local_res10;
        piVar7 = local_res18;
        local_res10[0] = param_2;
        goto LAB_149f49a4d;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                         ,0xe1,L"");
      if (bVar3) {
        pcVar5 = (code *)swi(3);
        pTVar4 = (TVector2<double> *)(*pcVar5)();
        return pTVar4;
      }
    }
    dVar10 = (double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar12,uVar11);
    if ((__real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (((dVar1 = (*param_4 - (double)CONCAT44(uVar14,uVar13)) /
                  ((double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar14,uVar13)), dVar1 < 0.0
         || (dVar2 < dVar1)) &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ratio >= 0.0 && Ratio <= 1.0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                            ,0xec,L""), bVar3)))) {
      pcVar5 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar5)();
      return pTVar4;
    }
  }
  if (param_3 == Id_0) {
LAB_149f49b52:
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar1 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
  }
  else {
    if (param_3 == Id_1) {
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (__return_storage_ptr__->field0_0x0)._s_0.Y + dVar2;
    }
    else {
      if (param_3 == Id_2) {
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (__return_storage_ptr__->field0_0x0)._s_0.X + dVar2;
        goto LAB_149f49b52;
      }
      if (param_3 != Id_3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                           ,0xff,L"");
        if (!bVar3) {
          return __return_storage_ptr__;
        }
        pcVar5 = (code *)swi(3);
        pTVar4 = (TVector2<double> *)(*pcVar5)();
        return pTVar4;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar1 + (__return_storage_ptr__->field0_0x0)._s_0.X;
  }
  return __return_storage_ptr__;
}

// GetEdgeId @ 149f49ba0

Edge __cdecl PCGSpatialAlgo::MarchingSquaresAlgo::GetEdgeId(uchar param_1,Edge param_2)

{
  code *pcVar1;
  bool bVar2;
  Edge EVar3;
  
  switch(param_1) {
  case '\x01':
  case '\x0e':
    EVar3 = Id_2;
    if (param_2 == Id_2) {
      EVar3 = Id_3;
    }
    return EVar3;
  case '\x02':
  case '\r':
    EVar3 = Id_1;
    if (param_2 == Id_1) {
      EVar3 = Id_2;
    }
    return EVar3;
  case '\x03':
  case '\f':
    EVar3 = Id_1;
    if (param_2 == Id_1) {
      EVar3 = Id_3;
    }
    return EVar3;
  case '\x04':
  case '\v':
    return (param_2 == Id_0) + Id_0;
  case '\x05':
    break;
  case '\x06':
  case '\t':
    EVar3 = Id_0;
    if (param_2 == Id_0) {
      EVar3 = Id_2;
    }
    return EVar3;
  case '\a':
  case '\b':
    EVar3 = Id_3;
    if (param_2 == Id_3) {
      EVar3 = Id_0;
    }
    return EVar3;
  case '\n':
    if (param_2 != Id_0) {
      if (param_2 == Id_1) {
        return Id_0;
      }
      if (param_2 == Id_2) {
        return Id_3;
      }
      if (param_2 == Id_3) {
        return Id_2;
      }
    }
    return Id_1;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Invalid;
  }
  if (param_2 != Id_0) {
    if (param_2 == Id_1) {
      return Id_2;
    }
    if (param_2 == Id_2) {
      return Id_1;
    }
    if (param_2 == Id_3) {
      return Id_0;
    }
  }
  return Id_3;
}

// GetNextEdge @ 149f4b370

Edge __cdecl PCGSpatialAlgo::MarchingSquaresAlgo::GetNextEdge(Edge param_1)

{
  code *pcVar1;
  bool bVar2;
  Edge EVar3;
  
  if (param_1 == Id_0) {
    return Id_2;
  }
  if (param_1 == Id_1) {
    return Id_3;
  }
  if (param_1 == Id_2) {
    return Id_0;
  }
  if (param_1 != Id_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Invalid;
  }
  return Id_1;
}

// GetStartingEdges @ 149f4edd0

TTuple<PCGSpatialAlgo::MarchingSquaresAlgo::Edge,PCGSpatialAlgo::MarchingSquaresAlgo::Edge> __cdecl
PCGSpatialAlgo::MarchingSquaresAlgo::GetStartingEdges(uchar param_1,Edge param_2)

{
  code *pcVar1;
  Edge EVar2;
  Edge EVar3;
  TTuple<PCGSpatialAlgo::MarchingSquaresAlgo::Edge,PCGSpatialAlgo::MarchingSquaresAlgo::Edge> TVar4;
  undefined7 in_register_00000009;
  Edge *pEVar5;
  Edge EVar6;
  ulonglong in_R8;
  bool bVar7;
  
  pEVar5 = (Edge *)CONCAT71(in_register_00000009,param_1);
  TVar4 = SUB82(pEVar5,0);
  if (param_2 == (Id_2|Id_0)) {
    EVar2 = Id_3;
    if ((in_R8 & 1) == 0) {
      EVar2 = Id_1;
    }
    *pEVar5 = EVar2;
    EVar2 = Id_0;
    if ((in_R8 & 1) == 0) {
      EVar2 = Id_2;
    }
    pEVar5[1] = EVar2;
    return TVar4;
  }
  if (param_2 != (Id_3|Id_1)) {
    switch(param_2) {
    case Id_0:
    case Id_3|Id_2|Id_1:
      EVar2 = Id_2;
      break;
    case Id_1:
    case Id_1|Id_0:
    case Id_3|Id_1:
    case Id_3|Id_2:
    case Id_3|Id_2|Id_0:
      EVar2 = Id_1;
      break;
    case Id_2:
    case Id_2|Id_1:
    case Id_3|Id_0:
    case Id_3|Id_1|Id_0:
      EVar2 = Id_0;
      break;
    case Id_2|Id_0:
    case Id_2|Id_1|Id_0:
    case Id_3:
      EVar2 = Id_3;
      break;
    default:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                         ,0xa1,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TTuple<PCGSpatialAlgo::MarchingSquaresAlgo::Edge,PCGSpatialAlgo::MarchingSquaresAlgo::Edge>
                 )(*pcVar1)();
        return TVar4;
      }
      EVar2 = Invalid;
    }
    EVar3 = GetEdgeId(param_2,EVar2);
    EVar6 = EVar2;
    if (param_2 < Id_3) {
      EVar6 = EVar3;
      EVar3 = EVar2;
    }
    *pEVar5 = EVar6;
    pEVar5[1] = EVar3;
    return TVar4;
  }
  bVar7 = (in_R8 & 1) == 0;
  EVar2 = Id_0;
  if (bVar7) {
    EVar2 = Id_2;
  }
  *pEVar5 = EVar2;
  EVar2 = Id_1;
  if (bVar7) {
    EVar2 = Id_3;
  }
  pEVar5[1] = EVar2;
  return TVar4;
}

// GetTypeHash @ 149f4f7d0

uint __cdecl GetTypeHash(FGridGenerationKey *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->OriginalComponent).ObjectKey.ObjectSerialNumber;
  bVar1 = param_1->bUse2DGrid;
  uVar2 = param_1->GridSize;
  uVar6 = (param_1->OriginalComponent).ObjectKey.ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar5 = (uVar4 - uVar6) - uVar3 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar4 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  uVar4 = FCrc::MemCrc_DEPRECATED(&param_1->GridCoords,0xc,0);
  uVar4 = HashCombine<unsigned_int,unsigned_int,unsigned_int>
                    (uVar4,uVar2,(uint)bVar1,(uVar5 - uVar3) - uVar6 ^ uVar3 >> 0xf);
  return uVar4;
}

// GetTypeHash @ 149f4f8a0

uint __cdecl GetTypeHash(FPCGPartitionActorRecord *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1->GridSize;
  uVar1 = CityHash64((char *)param_1,0x10);
  uVar4 = (int)uVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar3 = FCrc::MemCrc_DEPRECATED(&param_1->GridCoords,0xc,0);
  uVar4 = ((uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 149f4f9f0

uint __cdecl GetTypeHash(FPCGPinProperties *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FVar1 = param_1->Label;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = GetTypeHash(&param_1->AllowedTypes);
  uVar5 = (FVar1.Number + uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar6 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar5 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar2 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  iVar4 = uVar2 - param_1->bAllowMultipleConnections;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (param_1->bAllowMultipleConnections - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - param_1->bAllowMultipleData;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (param_1->bAllowMultipleData - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - param_1->Usage;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (param_1->Usage - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - param_1->PinStatus;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (param_1->PinStatus - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - param_1->bInvisiblePin;
  uVar5 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar3 = (param_1->bInvisiblePin - uVar5) - iVar4 ^ uVar5 >> 0xd;
  uVar2 = (iVar4 - uVar3) - uVar5 ^ uVar3 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
}

// LogErrorOnGraph @ 149f52dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::LogErrorOnGraph(FText *param_1,FPCGContext *param_2)

{
  FString local_28;
  FString local_18;
  
  if (param_2 == (FPCGContext *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      FText::ToString(param_1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(param_1);
    FPCGContext::GetTaskName(param_2,&local_18);
    FPCGContext::GetExecutionSourceName(param_2,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// LogWarningOnGraph @ 149f52ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl PCGLog::LogWarningOnGraph(FText *param_1,FPCGContext *param_2)

{
  FString local_28;
  FString local_18;
  
  if (param_2 == (FPCGContext *)0x0) {
    if (2 < (byte)LogPCG._0_1_) {
      FText::ToString(param_1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else if (2 < (byte)LogPCG._0_1_) {
    FText::ToString(param_1);
    FPCGContext::GetTaskName(param_2,&local_18);
    FPCGContext::GetExecutionSourceName(param_2,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Marching @ 149f52ff0

void __cdecl
PCGSpatialAlgo::MarchingSquaresAlgo::Marching(MarchingArgs *param_1,int param_2,Edge param_3)

{
  TMap<int,PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
  *this;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TMap<int,PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
  *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  Edge EVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  Edge *pEVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  TFunctionRef<double___cdecl(int,int)> local_48;
  TVector2<double> local_38;
  
  this = param_1->Candidates;
  if ((param_1->CurrentLine == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0
      ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Args.CurrentLine",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                               ,0x124,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  do {
    pTVar1 = param_1->Types;
    uVar9 = 0;
    if (param_2 < pTVar1->ArrayNum) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = GetEdgeId((uchar)(pTVar1->AllocatorInstance).Data[param_2],param_3);
    pTVar2 = param_1->CurrentLine;
    iVar13 = (param_1->IndexParams).CellCountY + -1;
    iVar15 = param_2 / iVar13;
    iVar13 = param_2 % iVar13;
    local_48._0_8_ = *(undefined8 *)&param_1->ValueQuery;
    local_48._8_8_ = *(undefined8 *)&(param_1->ValueQuery).field_0x8;
    pFVar11 = (FScriptContainerElement *)
              GetEdgeCoordinate(&local_38,iVar15,iVar13,EVar8,&param_1->Isovalue,&local_48,
                                param_1->bUseLinearInterpolation);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = pTVar2->ArrayNum;
    if (iVar10 == pTVar2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar10 + 1;
    uVar6 = *(undefined8 *)(pFVar11 + 8);
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar3 = *(undefined8 *)pFVar11;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
      puVar14 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar14 = *(undefined1 **)&this->field_0x40;
      }
      iVar10 = *(int *)(puVar14 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_2) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*(longlong *)this + (longlong)iVar10 * 0x10) == param_2) goto LAB_149f531f9;
          iVar10 = *(int *)(*(longlong *)this + 8 + (longlong)iVar10 * 0x10);
        } while (iVar10 != -1);
      }
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Candidates.Contains(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                       ,0x116,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_149f531f9:
    pEVar12 = TMapBase<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
              ::FindChecked(this,param_2);
    *pEVar12 = *pEVar12 & ~EVar8;
    pEVar12 = TMapBase<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
              ::FindChecked(this,param_2);
    if (*pEVar12 == 0) {
      TSet<TTuple<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge>,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>,FDefaultSetAllocator>
      ::Remove(this,param_2);
    }
    if (EVar8 == Id_0) {
      iVar15 = iVar15 + -1;
    }
    else if (EVar8 == Id_1) {
      iVar13 = iVar13 + 1;
    }
    else if (EVar8 == Id_2) {
      iVar15 = iVar15 + 1;
    }
    else {
      if (EVar8 != Id_3) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                           ,0x45,L"");
        if (!bVar7) {
          return;
        }
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = iVar13 + -1;
    }
    if (iVar15 < 0) {
      return;
    }
    if ((param_1->IndexParams).CellCountX + -1 <= iVar15) {
      return;
    }
    if (iVar13 < 0) {
      return;
    }
    iVar10 = (param_1->IndexParams).CellCountY + -1;
    if (iVar10 <= iVar13) {
      return;
    }
    param_2 = iVar10 * iVar15 + iVar13;
    if (param_2 == 0xffffffff) {
      return;
    }
    pTVar4 = param_1->Candidates;
    if (*(int *)&pTVar4->field_0x8 == *(int *)&pTVar4->field_0x34) {
      return;
    }
    puVar14 = &pTVar4->field_0x38;
    if (*(undefined1 **)&pTVar4->field_0x40 != (undefined1 *)0x0) {
      puVar14 = *(undefined1 **)&pTVar4->field_0x40;
    }
    iVar13 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & param_2) * 4);
    if (iVar13 == -1) {
      return;
    }
    while (*(uint *)(*(longlong *)pTVar4 + (longlong)iVar13 * 0x10) != param_2) {
      iVar13 = *(int *)(*(longlong *)pTVar4 + 8 + (longlong)iVar13 * 0x10);
      if (iVar13 == -1) {
        return;
      }
    }
    if (EVar8 == Id_0) {
      param_3 = Id_2;
    }
    else if (EVar8 == Id_1) {
      param_3 = Id_3;
    }
    else if (EVar8 == Id_2) {
      param_3 = Id_0;
    }
    else if (EVar8 == Id_3) {
      param_3 = Id_1;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                         ,99,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_3 = Invalid;
    }
    pEVar12 = TMapBase<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
              ::FindChecked(param_1->Candidates,param_2);
    if ((*pEVar12 & param_3) == 0) {
      return;
    }
    if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
      puVar14 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar14 = *(undefined1 **)&this->field_0x40;
      }
      iVar13 = *(int *)(puVar14 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_2) * 4);
      if (iVar13 != -1) {
        do {
          if (*(uint *)(*(longlong *)this + (longlong)iVar13 * 0x10) == param_2) goto LAB_149f533b9;
          iVar13 = *(int *)(*(longlong *)this + 8 + (longlong)iVar13 * 0x10);
        } while (iVar13 != -1);
      }
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Candidates.Contains(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                       ,0x116,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_149f533b9:
    pEVar12 = TMapBase<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
              ::FindChecked(this,param_2);
    *pEVar12 = *pEVar12 & ~param_3;
    pEVar12 = TMapBase<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
              ::FindChecked(this,param_2);
    if (*pEVar12 == 0) {
      TSet<TTuple<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge>,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>,FDefaultSetAllocator>
      ::Remove(this,param_2);
    }
    pTVar4 = param_1->Candidates;
    if (*(int *)&pTVar4->field_0x8 == *(int *)&pTVar4->field_0x34) {
      return;
    }
    puVar14 = &pTVar4->field_0x38;
    if (*(undefined1 **)&pTVar4->field_0x40 != (undefined1 *)0x0) {
      puVar14 = *(undefined1 **)&pTVar4->field_0x40;
    }
    iVar13 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & param_2) * 4);
    if (iVar13 == -1) {
      return;
    }
    while (*(uint *)(*(longlong *)pTVar4 + (longlong)iVar13 * 0x10) != param_2) {
      iVar13 = *(int *)(*(longlong *)pTVar4 + 8 + (longlong)iVar13 * 0x10);
      if (iVar13 == -1) {
        return;
      }
    }
  } while( true );
}

// MarchingSquares @ 149f53490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> * __cdecl
PCGSpatialAlgo::MarchingSquares
          (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,int param_1,int param_2,double param_3,
          TFunctionRef<double___cdecl(int,int)> *param_4,bool param_5)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  TFunctionRef<double___cdecl(int,int)> *pTVar10;
  ulonglong uVar11;
  bool bVar12;
  Edge EVar13;
  Edge EVar14;
  uint uVar15;
  TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *pTVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  uint uVar21;
  TPairInitializer<int_const_&,PCGSpatialAlgo::MarchingSquaresAlgo::Edge_&&> *pTVar22;
  FScriptContainerElement *pFVar23;
  undefined1 *puVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  Edge **ppEVar29;
  int iVar30;
  int iVar31;
  Edge EVar32;
  bool bVar33;
  undefined1 auStackY_288 [32];
  ForAnyElementType local_230;
  undefined8 local_228;
  Edge local_220 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_218;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_200;
  uint local_1f0;
  int local_1ec;
  uint local_1e8;
  TFunctionRef<double___cdecl(int,int)> *local_1e0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1d8;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  FScriptContainerElement local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FScriptContainerElement local_1a0;
  int local_198 [2];
  int local_190 [2];
  int local_188 [2];
  int local_180 [2];
  int local_178 [2];
  int local_170 [2];
  int local_168 [2];
  int local_160 [2];
  int local_158;
  int local_154;
  int local_150;
  longlong local_148;
  TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  undefined1 local_128 [8];
  Edge *local_120;
  Edge *local_118;
  Edge *local_110;
  Edge *local_108;
  MarchingArgs local_f8;
  undefined1 local_b8 [32];
  undefined1 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1e0 = param_4;
  if ((param_1 < 1) || (param_2 < 1)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar25 = param_1 + -1;
  iVar26 = param_2 + -1;
  iVar30 = 0;
  uVar15 = iVar25 * iVar26;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  local_1ec = iVar26;
  local_158 = iVar25;
  local_154 = param_1;
  local_150 = param_2;
  local_140 = __return_storage_ptr__;
  if ((int)uVar15 < 1) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15,&local_1d8.AllocatorInstance,&local_1d8.ArrayNum,&local_1d8.ArrayMax);
  }
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId359,"FPCGMarchingSquares::GatheringCandidates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
               ,0x167);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId359);
  }
  if (0 < iVar25) {
    lVar18 = (longlong)param_2 + -1;
    local_1e8 = 0;
    local_148 = 0;
    iVar31 = iVar30;
    local_138 = lVar18;
    do {
      iVar9 = local_1ec;
      lVar27 = local_148;
      uVar15 = local_1e8;
      if (0 < iVar26) {
        do {
          uVar20 = 0;
          if ((int)uVar15 < local_1d8.ArrayNum) {
            uVar20 = ~uVar15 >> 0x1f;
          }
          local_1f0 = uVar15;
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_>
                       *)(*pcVar3)();
            return pTVar16;
          }
          FVar17.Data = local_1d8.AllocatorInstance.Data;
          local_198[0] = iVar30 + uVar15;
          local_1d8.AllocatorInstance.Data[lVar27] = (FScriptContainerElement)0x0;
          local_190[0] = iVar31;
          dVar4 = (double)(**(code **)local_1e0)
                                    (*(undefined8 *)&local_1e0->field_0x8,local_190,local_198);
          if (param_3 <= dVar4) {
            FVar17.Data[lVar27] = (FScriptContainerElement)((byte)FVar17.Data[lVar27] | 8);
          }
          iVar25 = iVar30 + 1 + uVar15;
          local_188[0] = iVar25;
          local_180[0] = iVar31;
          dVar4 = (double)(**(code **)local_1e0)
                                    (*(undefined8 *)&local_1e0->field_0x8,local_180,local_188);
          if (param_3 <= dVar4) {
            FVar17.Data[lVar27] = (FScriptContainerElement)((byte)FVar17.Data[lVar27] | 4);
          }
          local_178[0] = iVar25;
          local_170[0] = iVar31 + 1;
          dVar4 = (double)(**(code **)local_1e0)
                                    (*(undefined8 *)&local_1e0->field_0x8,local_170,local_178);
          if (param_3 <= dVar4) {
            FVar17.Data[lVar27] = (FScriptContainerElement)((byte)FVar17.Data[lVar27] | 2);
          }
          local_168[0] = iVar30 + uVar15;
          local_160[0] = iVar31 + 1;
          dVar4 = (double)(**(code **)local_1e0)
                                    (*(undefined8 *)&local_1e0->field_0x8,local_160,local_168);
          if (param_3 <= dVar4) {
            FVar17.Data[lVar27] = (FScriptContainerElement)((byte)FVar17.Data[lVar27] | 1);
          }
          FVar1 = FVar17.Data[lVar27];
          if ((FVar1 != (FScriptContainerElement)0x0) && (FVar1 != (FScriptContainerElement)0xf)) {
            if ((FVar1 == (FScriptContainerElement)0x5) || (FVar1 == (FScriptContainerElement)0xa))
            {
              local_110 = (Edge *)&local_1f0;
              local_220[1] = 0xf;
              ppEVar29 = &local_110;
              local_108 = local_220 + 1;
              pTVar22 = (TPairInitializer<int_const_&,PCGSpatialAlgo::MarchingSquaresAlgo::Edge_&&>
                         *)(local_128 + 4);
            }
            else {
              switch(FVar1) {
              case (FScriptContainerElement)0x1:
              case (FScriptContainerElement)0xe:
                EVar32 = Id_2;
                break;
              case (FScriptContainerElement)0x2:
              case (FScriptContainerElement)0x3:
              case (FScriptContainerElement)0xa:
              case (FScriptContainerElement)0xc:
              case (FScriptContainerElement)0xd:
                EVar32 = Id_1;
                break;
              case (FScriptContainerElement)0x4:
              case (FScriptContainerElement)0x6:
              case (FScriptContainerElement)0x9:
              case (FScriptContainerElement)0xb:
                EVar32 = Id_0;
                break;
              case (FScriptContainerElement)0x5:
              case (FScriptContainerElement)0x7:
              case (FScriptContainerElement)0x8:
                EVar32 = Id_3;
                break;
              default:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                                    ,0xa1,L"");
                if (bVar12) {
                  pcVar3 = (code *)swi(3);
                  pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_>
                             *)(*pcVar3)();
                  return pTVar16;
                }
                EVar32 = Invalid;
                EVar13 = MarchingSquaresAlgo::GetEdgeId((uchar)FVar17.Data[lVar27],Invalid);
                goto LAB_149f537ce;
              }
              EVar13 = MarchingSquaresAlgo::GetEdgeId((uchar)FVar17.Data[lVar27],EVar32);
              if (EVar13 == Invalid) {
LAB_149f537ce:
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FirstEdge != Edge::Invalid && SecondEdge != Edge::Invalid",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                                    ,0x189,L"");
                if (bVar12) {
                  pcVar3 = (code *)swi(3);
                  pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_>
                             *)(*pcVar3)();
                  return pTVar16;
                }
              }
              local_120 = (Edge *)&local_1f0;
              local_220[0] = EVar32 | EVar13;
              ppEVar29 = &local_120;
              local_118 = local_220;
              pTVar22 = (TPairInitializer<int_const_&,PCGSpatialAlgo::MarchingSquaresAlgo::Edge_&&>
                         *)local_128;
            }
            TSet<TTuple<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge>,TDefaultMapHashableKeyFuncs<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<int_const_&,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge_&&>_>
                      (local_b8,pTVar22,(bool *)ppEVar29);
          }
          uVar15 = uVar15 + 1;
          lVar18 = local_138;
          lVar27 = lVar27 + 1;
          iVar25 = local_158;
          iVar26 = iVar9;
        } while ((int)(iVar30 + uVar15) < iVar9);
      }
      local_1e8 = local_1e8 + iVar26;
      local_148 = local_148 + lVar18;
      iVar31 = iVar31 + 1;
      iVar30 = iVar30 - iVar26;
      __return_storage_ptr__ = local_140;
    } while (iVar31 < iVar25);
  }
  FVar17.Data = (FScriptContainerElement *)0x0;
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId405,"FPCGMarchingSquares::ReconnectTheDots",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
               ,0x195);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId405);
  }
  pTVar10 = local_1e0;
  local_228._0_4_ = 0;
  local_230.Data = (FScriptContainerElement *)0x0;
  uVar15 = 0;
  local_228 = 0;
  if (local_b8._8_4_ != local_84) {
LAB_149f53920:
    if (local_84 == 0) {
      iVar25 = local_b8._8_4_ + -1;
    }
    else {
      puVar24 = local_b8 + 0x10;
      if (local_98 != (undefined1 *)0x0) {
        puVar24 = local_98;
      }
      pFVar28 = FVar17.Data;
      pFVar23 = FVar17.Data;
      if (local_90 + 0x1fU >> 5 != 0) {
LAB_149f53960:
        uVar20 = *(uint *)(puVar24 + (longlong)pFVar28 * 4);
        if (uVar20 == 0) goto code_r0x000149f53968;
        local_130 = 0;
        if (uVar20 != 0) {
          for (; (uVar20 >> local_130 & 1) == 0; local_130 = local_130 + 1) {
          }
        }
        iVar25 = 0x20;
        if (uVar20 != 0) {
          iVar25 = local_130;
        }
        iVar25 = iVar25 + (int)pFVar23 * 0x20;
        if (local_90 <= iVar25) goto LAB_149f5398d;
        goto LAB_149f53992;
      }
LAB_149f5398d:
      iVar25 = -1;
    }
LAB_149f53992:
    pFVar28 = FVar17.Data;
    if (iVar25 != -1) {
      pFVar28 = (FScriptContainerElement *)((longlong)iVar25 * 0x10 + local_b8._0_8_);
    }
    uVar20 = *(uint *)pFVar28;
    if (local_84 == 0) {
      iVar25 = local_b8._8_4_ + -1;
    }
    else {
      puVar24 = local_b8 + 0x10;
      if (local_98 != (undefined1 *)0x0) {
        puVar24 = local_98;
      }
      pFVar28 = FVar17.Data;
      pFVar23 = FVar17.Data;
      if (local_90 + 0x1fU >> 5 != 0) {
LAB_149f539e0:
        uVar21 = *(uint *)(puVar24 + (longlong)pFVar28 * 4);
        if (uVar21 == 0) goto code_r0x000149f539e8;
        local_12c = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> local_12c & 1) == 0; local_12c = local_12c + 1) {
          }
        }
        iVar25 = 0x20;
        if (uVar21 != 0) {
          iVar25 = local_12c;
        }
        iVar25 = iVar25 + (int)pFVar23 * 0x20;
        if (local_90 <= iVar25) goto LAB_149f53a0d;
        goto LAB_149f53a12;
      }
LAB_149f53a0d:
      iVar25 = -1;
    }
LAB_149f53a12:
    pFVar28 = FVar17.Data;
    if (iVar25 != -1) {
      pFVar28 = (FScriptContainerElement *)((longlong)iVar25 * 0x10 + local_b8._0_8_);
    }
    FVar1 = pFVar28[4];
    if ((FVar1 == (FScriptContainerElement)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!!StartingEdgeMask",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                            ,0x19c,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar16;
    }
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar21 = uVar15;
    if ((int)uVar20 < local_1d8.ArrayNum) {
      uVar21 = ~uVar20 >> 0x1f;
    }
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar16;
    }
    FVar2 = local_1d8.AllocatorInstance.Data[(int)uVar20];
    if (FVar2 == (FScriptContainerElement)0x5) {
      bVar12 = ((byte)FVar1 & 1) == 0;
      EVar13 = Id_0;
      if (bVar12) {
        EVar13 = Id_2;
      }
      EVar32 = Id_3;
      if (bVar12) {
        EVar32 = Id_1;
      }
    }
    else if (FVar2 == (FScriptContainerElement)0xa) {
      EVar13 = Id_1;
      if (((byte)FVar1 & 1) == 0) {
        EVar13 = Id_3;
      }
      EVar32 = Id_0;
      if (((byte)FVar1 & 1) == 0) {
        EVar32 = Id_2;
      }
    }
    else {
      switch(FVar2) {
      case (FScriptContainerElement)0x1:
      case (FScriptContainerElement)0xe:
        EVar13 = Id_2;
        break;
      case (FScriptContainerElement)0x2:
      case (FScriptContainerElement)0x3:
      case (FScriptContainerElement)0xa:
      case (FScriptContainerElement)0xc:
      case (FScriptContainerElement)0xd:
        EVar13 = Id_1;
        break;
      case (FScriptContainerElement)0x4:
      case (FScriptContainerElement)0x6:
      case (FScriptContainerElement)0x9:
      case (FScriptContainerElement)0xb:
        EVar13 = Id_0;
        break;
      case (FScriptContainerElement)0x5:
      case (FScriptContainerElement)0x7:
      case (FScriptContainerElement)0x8:
        EVar13 = Id_3;
        break;
      default:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGMarchingSquares.cpp"
                            ,0xa1,L"");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar16;
        }
        EVar13 = Invalid;
      }
      EVar14 = MarchingSquaresAlgo::GetEdgeId((uchar)FVar2,EVar13);
      EVar32 = EVar14;
      if (7 < (byte)FVar2) {
        EVar32 = EVar13;
        EVar13 = EVar14;
      }
    }
    local_f8.Types = &local_1d8;
    local_f8.Candidates =
         (TMap<int,PCGSpatialAlgo::MarchingSquaresAlgo::Edge,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,PCGSpatialAlgo::MarchingSquaresAlgo::Edge,0>_>
          *)local_b8;
    local_f8.bUseLinearInterpolation = param_5;
    local_f8.IndexParams.CellCountX = local_154;
    local_f8.IndexParams.CellCountY = local_150;
    local_f8.ValueQuery._0_8_ = *(undefined8 *)pTVar10;
    local_f8.ValueQuery._8_8_ = *(undefined8 *)&pTVar10->field_0x8;
    local_f8.CurrentLine = &local_200;
    local_f8.Isovalue = param_3;
    MarchingSquaresAlgo::Marching(&local_f8,uVar20,EVar32);
    if (local_b8._8_4_ != local_84) {
      puVar24 = local_b8 + 0x38;
      if (local_78 != (undefined1 *)0x0) {
        puVar24 = local_78;
      }
      for (iVar25 = *(int *)(puVar24 + (ulonglong)(local_70 - 1U & uVar20) * 4); iVar25 != -1;
          iVar25 = *(int *)(local_b8._0_8_ + 8 + (longlong)iVar25 * 0x10)) {
        if (*(uint *)(local_b8._0_8_ + (longlong)iVar25 * 0x10) == uVar20) {
          puVar24 = local_b8 + 0x38;
          if (local_78 != (undefined1 *)0x0) {
            puVar24 = local_78;
          }
          iVar25 = *(int *)(puVar24 + (ulonglong)(local_70 - 1U & uVar20) * 4);
          goto joined_r0x000149f53d5d;
        }
      }
    }
    goto LAB_149f53c69;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_149f54086:
  (__return_storage_ptr__->AllocatorInstance).Data = FVar17.Data;
  __return_storage_ptr__->ArrayNum = (int)local_228;
  __return_storage_ptr__->ArrayMax = uVar15;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228 = 0;
  DestructItems<PCGSpatialAlgo::FPCGMarchingSquareResult,int>((FPCGMarchingSquareResult *)0x0,0);
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_PCGSpatialAlgo::MarchingSquaresAlgo::Edge>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_b8);
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
code_r0x000149f53968:
  uVar20 = (int)pFVar23 + 1;
  pFVar28 = pFVar28 + 1;
  pFVar23 = (FScriptContainerElement *)(ulonglong)uVar20;
  if ((int)(local_90 + 0x1fU >> 5) <= (int)uVar20) goto LAB_149f5398d;
  goto LAB_149f53960;
code_r0x000149f539e8:
  uVar21 = (int)pFVar23 + 1;
  pFVar28 = pFVar28 + 1;
  pFVar23 = (FScriptContainerElement *)(ulonglong)uVar21;
  if ((int)(local_90 + 0x1fU >> 5) <= (int)uVar21) goto LAB_149f53a0d;
  goto LAB_149f539e0;
joined_r0x000149f53d5d:
  pFVar28 = FVar17.Data;
  if (iVar25 == -1) goto LAB_149f53d7e;
  if (*(uint *)(local_b8._0_8_ + (longlong)iVar25 * 0x10) == uVar20) {
    if ((iVar25 != -1) &&
       (pFVar28 = (FScriptContainerElement *)((longlong)iVar25 * 0x10 + local_b8._0_8_),
       pFVar28 != (FScriptContainerElement *)0x0)) goto LAB_149f53da4;
    goto LAB_149f53d7e;
  }
  iVar25 = *(int *)(local_b8._0_8_ + 8 + (longlong)iVar25 * 0x10);
  goto joined_r0x000149f53d5d;
LAB_149f53d7e:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
              (*pcVar3)();
    return pTVar16;
  }
LAB_149f53da4:
  if (((byte)pFVar28[4] & EVar32) == 0) {
LAB_149f53c69:
    local_1b0.Data = local_200.AllocatorInstance.Data;
    uVar8._0_4_ = local_200.ArrayNum;
    uVar8._4_4_ = local_200.ArrayMax;
    local_1a8._0_4_ = local_200.ArrayNum;
    local_1a8._4_4_ = local_200.ArrayMax;
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    local_1a0 = (FScriptContainerElement)0x1;
    uVar11 = uVar8;
    if (((local_230.Data <= (FScriptContainerElement *)&local_1b0) &&
        (uVar11 = local_1a8,
        (FScriptContainerElement *)&local_1b0 <
        local_230.Data + (longlong)(int)local_228._4_4_ * 0x18)) &&
       (local_1a8 = uVar8,
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar11 = local_1a8, bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar16;
    }
    local_1a8 = uVar11;
    lVar18 = (longlong)(int)local_228;
    if ((int)local_228 == local_228._4_4_) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_230,(int *)((longlong)&local_228 + 4));
      local_228 = CONCAT44(local_228._4_4_,iVar25 + 1);
      pFVar28 = local_230.Data + (longlong)iVar25 * 0x18;
    }
    else {
      local_228 = CONCAT44(local_228._4_4_,(int)local_228 + 1);
      pFVar28 = local_230.Data + lVar18 * 0x18;
    }
    *(FScriptContainerElement **)pFVar28 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)pFVar28 = local_1b0.Data;
    local_1b0.Data = (void *)0x0;
    *(undefined4 *)(pFVar28 + 8) = (undefined4)local_1a8;
    *(int *)(pFVar28 + 0xc) = local_1a8._4_4_;
    local_1a8 = 0;
    pFVar28[0x10] = local_1a0;
    if ((*(int *)(pFVar28 + 8) < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar16;
    }
    *(int *)(pFVar28 + 8) = *(int *)(pFVar28 + 8) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)pFVar28,*(int *)(pFVar28 + 8),(int *)(pFVar28 + 0xc));
    FVar19.Data = local_1b0.Data;
  }
  else {
    local_f8.CurrentLine = &local_218;
    MarchingSquaresAlgo::Marching(&local_f8,uVar20,EVar13);
    lVar18 = (longlong)(local_218.ArrayNum / 2);
    if (0 < local_218.ArrayNum / 2) {
      pFVar28 = local_218.AllocatorInstance.Data + (longlong)(local_218.ArrayNum + -1) * 0x10;
      FVar19.Data = local_218.AllocatorInstance.Data;
      do {
        uVar5 = *(undefined8 *)(pFVar28 + 8);
        uVar6 = *(undefined8 *)FVar19.Data;
        uVar7 = *(undefined8 *)(FVar19.Data + 8);
        *(undefined8 *)FVar19.Data = *(undefined8 *)pFVar28;
        *(undefined8 *)(FVar19.Data + 8) = uVar5;
        FVar19.Data = FVar19.Data + 0x10;
        *(undefined8 *)pFVar28 = uVar6;
        *(undefined8 *)(pFVar28 + 8) = uVar7;
        lVar18 = lVar18 + -1;
        pFVar28 = pFVar28 + -0x10;
      } while (lVar18 != 0);
    }
    lVar18 = (longlong)local_200.ArrayNum;
    if (local_200.ArrayNum != 0) {
      iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,local_200.ArrayNum,&local_218.AllocatorInstance,&local_218.ArrayNum
                          ,&local_218.ArrayMax);
      memmove(local_218.AllocatorInstance.Data + (longlong)iVar25 * 0x10,
              local_200.AllocatorInstance.Data,lVar18 << 4);
      local_200._8_8_ = local_200._8_8_ & 0xffffffff00000000;
    }
    local_1c8 = local_218.AllocatorInstance.Data;
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0 = CONCAT44(local_218.ArrayMax,local_218.ArrayNum);
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    local_1b8 = (FScriptContainerElement)0x0;
    if (((local_230.Data <= (FScriptContainerElement *)&local_1c8) &&
        ((FScriptContainerElement *)&local_1c8 <
         local_230.Data + (longlong)(int)local_228._4_4_ * 0x18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TArray<PCGSpatialAlgo::FPCGMarchingSquareResult,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar16;
    }
    lVar18 = (longlong)(int)local_228;
    if ((int)local_228 == local_228._4_4_) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_230,(int *)((longlong)&local_228 + 4));
      local_228 = CONCAT44(local_228._4_4_,iVar25 + 1);
      pFVar28 = local_230.Data + (longlong)iVar25 * 0x18;
    }
    else {
      local_228 = CONCAT44(local_228._4_4_,(int)local_228 + 1);
      pFVar28 = local_230.Data + lVar18 * 0x18;
    }
    *(undefined8 *)pFVar28 = 0;
    *(FScriptContainerElement **)pFVar28 = local_1c8;
    local_1c8 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar28 + 8) = (undefined4)local_1c0;
    *(undefined4 *)(pFVar28 + 0xc) = local_1c0._4_4_;
    local_1c0 = 0;
    pFVar28[0x10] = local_1b8;
    FVar19.Data = (void *)0x0;
  }
  if (FVar19.Data != (void *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_b8._8_4_ == local_84) goto code_r0x000149f5406b;
  goto LAB_149f53920;
code_r0x000149f5406b:
  FVar17.Data = local_230.Data;
  __return_storage_ptr__ = local_140;
  uVar15 = local_228._4_4_;
  goto LAB_149f54086;
}

// RemoveAdvancedAndInvisibleOnConnectedPins @ 149f5d1c0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl
PCGSubgraphSettings::RemoveAdvancedAndInvisibleOnConnectedPins
          (UPCGGraph *param_1,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  TObjectPtr<UPCGNode> TVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  byte local_res18;
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [3];
  uint local_44;
  
  uVar8 = (ulonglong)param_3;
  TVar4.field0_0x0 = (TObjectPtr<UPCGNode>_u_0)(&param_1->InputNode)[uVar8 ^ 1].field0_0x0.DebugPtr;
  local_res18 = param_3;
  if (TVar4.field0_0x0 == (UPCGNode *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubgraphNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                       ,0x1a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_44 = param_2->ArrayNum;
  uVar7 = (ulonglong)(int)local_44;
  pFVar13 = (param_2->AllocatorInstance).Data;
  pFVar12 = pFVar13 + uVar7 * 0x30;
LAB_149f5d230:
  if (param_2->ArrayNum != (int)uVar7) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (pFVar13 == pFVar12) {
    return;
  }
  if ((char)uVar8 == '\0') {
    plVar10 = *(longlong **)((longlong)TVar4.field0_0x0 + 0x68);
    iVar3 = *(int *)((longlong)TVar4.field0_0x0 + 0x70);
    plVar1 = plVar10 + iVar3;
    while( true ) {
      if (*(int *)((longlong)TVar4.field0_0x0 + 0x70) != iVar3) {
        local_48 = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_48);
      }
      if (plVar10 == plVar1) goto LAB_149f5d2d4;
      lVar9 = *plVar10;
      if (*(longlong *)(lVar9 + 0x48) == *(longlong *)pFVar13) break;
      plVar10 = plVar10 + 1;
    }
  }
  else {
    plVar10 = *(longlong **)((longlong)TVar4.field0_0x0 + 0x78);
    iVar3 = *(int *)((longlong)TVar4.field0_0x0 + 0x80);
    plVar1 = plVar10 + iVar3;
    while( true ) {
      if (*(int *)((longlong)TVar4.field0_0x0 + 0x80) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (plVar10 == plVar1) goto LAB_149f5d2d4;
      lVar9 = *plVar10;
      if (*(longlong *)(lVar9 + 0x48) == *(longlong *)pFVar13) break;
      plVar10 = plVar10 + 1;
    }
  }
  goto LAB_149f5d2d6;
LAB_149f5d2d4:
  lVar9 = 0;
LAB_149f5d2d6:
  if (lVar9 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6759709290413424671>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                       ,0x1f,"Pin");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar13[0x2a] = (FScriptContainerElement)0x0;
    puVar11 = *(undefined8 **)(lVar9 + 0x38);
    iVar3 = *(int *)(lVar9 + 0x40);
    puVar2 = puVar11 + iVar3;
    while( true ) {
      if (*(int *)(lVar9 + 0x40) != iVar3) {
        local_47[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_47);
      }
      if (puVar11 == puVar2) goto LAB_149f5d36d;
      bVar6 = UPCGEdge::IsValid((UPCGEdge *)*puVar11);
      if (bVar6) break;
      puVar11 = puVar11 + 1;
    }
    if ((pFVar13[0x29] == (FScriptContainerElement)0x2) ||
       (pFVar13[0x29] == (FScriptContainerElement)0x3)) {
      pFVar13[0x29] = (FScriptContainerElement)0x0;
    }
  }
LAB_149f5d36d:
  uVar8 = (ulonglong)local_res18;
  pFVar13 = pFVar13 + 0x30;
  uVar7 = (ulonglong)local_44;
  goto LAB_149f5d230;
}

// Z_Construct_UClass_APCGVolume_NoRegister @ 149f6dd20

UClass * __cdecl Z_Construct_UClass_APCGVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolume",&Z_Registration_Info_UClass_APCGVolume.InnerSingleton,
               APCGVolume::StaticRegisterNativesAPCGVolume,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APCGVolume>,
               InternalVTableHelperCtorCaller<APCGVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGVolume.InnerSingleton;
}

// Z_Construct_UClass_APCGWorldActor_NoRegister @ 149f6dde0

UClass * __cdecl Z_Construct_UClass_APCGWorldActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldActor",
               &Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton,
               APCGWorldActor::StaticRegisterNativesAPCGWorldActor,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APCGWorldActor>,InternalVTableHelperCtorCaller<APCGWorldActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton;
}

// Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister @ 149f6dea0

UClass * __cdecl Z_Construct_UClass_UPCGBaseSubgraphNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubgraphNode",
               &Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton,
               UPCGBaseSubgraphNode::StaticRegisterNativesUPCGBaseSubgraphNode,0x88,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBaseSubgraphNode>,
               InternalVTableHelperCtorCaller<UPCGBaseSubgraphNode>,local_res8,UPCGNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton;
}

// Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister @ 149f6df60

UClass * __cdecl Z_Construct_UClass_UPCGBaseSubgraphSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubgraphSettings",
               &Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton,
               UPCGBaseSubgraphSettings::StaticRegisterNativesUPCGBaseSubgraphSettings,200,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBaseSubgraphSettings>,
               InternalVTableHelperCtorCaller<UPCGBaseSubgraphSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGBaseSubsystem_NoRegister @ 149f6e020

UClass * __cdecl Z_Construct_UClass_UPCGBaseSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubsystem",
               &Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton,
               UPCGBaseSubsystem::StaticRegisterNativesUPCGBaseSubsystem,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBaseSubsystem>,
               InternalVTableHelperCtorCaller<UPCGBaseSubsystem>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister @ 149f6e0e0

UClass * __cdecl Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPinHelpers",
               &Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton,
               UPCGBlueprintPinHelpers::StaticRegisterNativesUPCGBlueprintPinHelpers,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGBlueprintPinHelpers>
               ,InternalVTableHelperCtorCaller<UPCGBlueprintPinHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton;
}

// Z_Construct_UClass_UPCGEngineSubsystem_NoRegister @ 149f6e1a0

UClass * __cdecl Z_Construct_UClass_UPCGEngineSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEngineSubsystem",
               &Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton,
               UPCGEngineSubsystem::StaticRegisterNativesUPCGEngineSubsystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGEngineSubsystem>,
               InternalVTableHelperCtorCaller<UPCGEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEngineSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UPCGGenSourceComponent_NoRegister @ 149f6e260

UClass * __cdecl Z_Construct_UClass_UPCGGenSourceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceComponent",
               &Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton,
               UPCGGenSourceComponent::StaticRegisterNativesUPCGGenSourceComponent,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGenSourceComponent>,
               InternalVTableHelperCtorCaller<UPCGGenSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGGenSourceEditorCamera_NoRegister @ 149f6e320

UClass * __cdecl Z_Construct_UClass_UPCGGenSourceEditorCamera_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceEditorCamera",
               &Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton,
               UPCGGenSourceEditorCamera::StaticRegisterNativesUPCGGenSourceEditorCamera,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGenSourceEditorCamera>,
               InternalVTableHelperCtorCaller<UPCGGenSourceEditorCamera>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton;
}

// Z_Construct_UClass_UPCGGenSourcePlayer_NoRegister @ 149f6e3d0

UClass * __cdecl Z_Construct_UClass_UPCGGenSourcePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourcePlayer",
               &Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton,
               UPCGGenSourcePlayer::StaticRegisterNativesUPCGGenSourcePlayer,0x250,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenSourcePlayer>,
               InternalVTableHelperCtorCaller<UPCGGenSourcePlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton;
}

// Z_Construct_UClass_UPCGGenSourceWPStreamingSource_NoRegister @ 149f6e480

UClass * __cdecl Z_Construct_UClass_UPCGGenSourceWPStreamingSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceWPStreamingSource",
               &Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton,
               UPCGGenSourceWPStreamingSource::StaticRegisterNativesUPCGGenSourceWPStreamingSource,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGenSourceWPStreamingSource>,
               InternalVTableHelperCtorCaller<UPCGGenSourceWPStreamingSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedActors_NoRegister @ 149f6e530

UClass * __cdecl Z_Construct_UClass_UPCGManagedActors_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedActors",
               &Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton,
               UPCGManagedActors::StaticRegisterNativesUPCGManagedActors,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedActors>,
               InternalVTableHelperCtorCaller<UPCGManagedActors>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedActors.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedComponentBase_NoRegister @ 149f6e5f0

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponentBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentBase",
               &Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton,
               UPCGManagedComponentBase::StaticRegisterNativesUPCGManagedComponentBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGManagedComponentBase>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentBase>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentBase.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister @ 149f6e6b0

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentDefaultList",
               &Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton,
               UPCGManagedComponentDefaultList::StaticRegisterNativesUPCGManagedComponentDefaultList
               ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGManagedComponentDefaultList>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentDefaultList>,local_res8,
               UPCGManagedComponentList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedComponentList_NoRegister @ 149f6e770

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponentList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentList",
               &Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton,
               UPCGManagedComponentList::StaticRegisterNativesUPCGManagedComponentList,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGManagedComponentList>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentList>,local_res8,
               UPCGManagedComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentList.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedComponent_NoRegister @ 149f6e830

UClass * __cdecl Z_Construct_UClass_UPCGManagedComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponent",
               &Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton,
               UPCGManagedComponent::StaticRegisterNativesUPCGManagedComponent,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedComponent>,local_res8,
               UPCGManagedComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister @ 149f6e8f0

UClass * __cdecl Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedISKMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedISKMComponent",
               &Z_Registration_Info_UClass_UPCGManagedISKMComponent.InnerSingleton,
               UPCGManagedISKMComponent::StaticRegisterNativesUPCGManagedISKMComponent,0x118,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGManagedISKMComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedISKMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedISKMComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedISMComponent_NoRegister @ 149f6e9b0

UClass * __cdecl Z_Construct_UClass_UPCGManagedISMComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedISMComponent",
               &Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton,
               UPCGManagedISMComponent::StaticRegisterNativesUPCGManagedISMComponent,0x330,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedISMComponent>
               ,InternalVTableHelperCtorCaller<UPCGManagedISMComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedISMComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedResource_NoRegister @ 149f6ea70

UClass * __cdecl Z_Construct_UClass_UPCGManagedResource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedResource",
               &Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton,
               UPCGManagedResource::StaticRegisterNativesUPCGManagedResource,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedResource>,
               InternalVTableHelperCtorCaller<UPCGManagedResource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton;
}

// Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister @ 149f6eb20

UClass * __cdecl Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedSplineMeshComponent",
               &Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton,
               UPCGManagedSplineMeshComponent::StaticRegisterNativesUPCGManagedSplineMeshComponent,
               0x358,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGManagedSplineMeshComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedSplineMeshComponent>,local_res8,
               UPCGManagedComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedSplineMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UPCGOctreeQueries_NoRegister @ 149f6ebe0

UClass * __cdecl Z_Construct_UClass_UPCGOctreeQueries_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOctreeQueries",
               &Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton,
               UPCGOctreeQueries::StaticRegisterNativesUPCGOctreeQueries,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGOctreeQueries>,
               InternalVTableHelperCtorCaller<UPCGOctreeQueries>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton;
}

// Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_NoRegister @ 149f6eca0

UClass * __cdecl Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPinPropertiesBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton,
               UPCGPinPropertiesBlueprintHelpers::
               StaticRegisterNativesUPCGPinPropertiesBlueprintHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPinPropertiesBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGPinPropertiesBlueprintHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton;
}

// Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_NoRegister @ 149f6ed60

UClass * __cdecl Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSchedulingPolicyDistanceAndDirection",
               &Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton,
               UPCGSchedulingPolicyDistanceAndDirection::
               StaticRegisterNativesUPCGSchedulingPolicyDistanceAndDirection,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSchedulingPolicyDistanceAndDirection>,
               InternalVTableHelperCtorCaller<UPCGSchedulingPolicyDistanceAndDirection>,local_res8,
               UPCGSchedulingPolicyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSchedulingPolicyDistanceAndDirection.InnerSingleton;
}

// Z_Construct_UClass_UPCGSettingsInstance_NoRegister @ 149f6ee20

UClass * __cdecl Z_Construct_UClass_UPCGSettingsInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsInstance",
               &Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton,
               UPCGSettingsInstance::StaticRegisterNativesUPCGSettingsInstance,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGSettingsInstance>,
               InternalVTableHelperCtorCaller<UPCGSettingsInstance>,local_res8,
               UPCGSettingsInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsInstance.InnerSingleton;
}

// Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister @ 149f6eee0

UClass * __cdecl Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsWithDynamicInputs",
               &Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton,
               UPCGSettingsWithDynamicInputs::StaticRegisterNativesUPCGSettingsWithDynamicInputs,
               0xd8,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSettingsWithDynamicInputs>,
               InternalVTableHelperCtorCaller<UPCGSettingsWithDynamicInputs>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton;
}

// Z_Construct_UClass_UPCGSubgraphNode_NoRegister @ 149f6efa0

UClass * __cdecl Z_Construct_UClass_UPCGSubgraphNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubgraphNode",
               &Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton,
               UPCGSubgraphNode::StaticRegisterNativesUPCGSubgraphNode,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubgraphNode>,
               InternalVTableHelperCtorCaller<UPCGSubgraphNode>,local_res8,
               UPCGBaseSubgraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton;
}

// Z_Construct_UClass_UPCGSubgraphSettings_NoRegister @ 149f6f060

UClass * __cdecl Z_Construct_UClass_UPCGSubgraphSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubgraphSettings",
               &Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton,
               UPCGSubgraphSettings::StaticRegisterNativesUPCGSubgraphSettings,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubgraphSettings>,
               InternalVTableHelperCtorCaller<UPCGSubgraphSettings>,local_res8,
               UPCGBaseSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGSubsystem_NoRegister @ 149f6f120

UClass * __cdecl Z_Construct_UClass_UPCGSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGSubsystem::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubsystem",
               &Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton,
               UPCGSubsystem::StaticRegisterNativesUPCGSubsystem,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubsystem>,
               InternalVTableHelperCtorCaller<UPCGSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UPCGTrivialSettings_NoRegister @ 149f6f1e0

UClass * __cdecl Z_Construct_UClass_UPCGTrivialSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTrivialSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTrivialSettings",
               &Z_Registration_Info_UClass_UPCGTrivialSettings.InnerSingleton,
               UPCGTrivialSettings::StaticRegisterNativesUPCGTrivialSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTrivialSettings>,
               InternalVTableHelperCtorCaller<UPCGTrivialSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTrivialSettings.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPointProperties @ 149f6f2a0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPointProperties(void)

{
  if (Z_Registration_Info_UEnum_EPCGPointProperties.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPointProperties.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPointProperties_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPointProperties.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode @ 149f6f2e0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGSettingsType @ 149f6f320

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGSettingsType(void)

{
  if (Z_Registration_Info_UEnum_EPCGSettingsType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGSettingsType.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGSettingsType.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGTypeConversion @ 149f6f360

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGTypeConversion(void)

{
  if (Z_Registration_Info_UEnum_EPCGTypeConversion.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGTypeConversion.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGTypeConversion_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGTypeConversion.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGDataTypeInfoParam @ 149f6f3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoParam(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoParam_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings @ 149f6f420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGPointArray @ 149f6f4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPointArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPointArray.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPointArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPointArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPointArray.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGPointArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo @ 149f6f520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.InnerSingleton;
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

// IMPLEMENT_MODULE_PCG @ 149f72c50

void __cdecl IMPLEMENT_MODULE_PCG(void)

{
  return;
}

// NoPin'' @ 1504190b0

void __cdecl `dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data;
  if ((FPCGGraphTaskInput::NoPin.bIsSet) &&
     (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    if (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
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
  return;
}

// PositionCurve'' @ 1504190d0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
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

// RotationCurve'' @ 1504190f0

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
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

// ScaleCurve'' @ 150419110

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
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

// `dynamic_atexit_destructor_for_'CVarDebugDrawTexturePrimingBounds'' @ 150419130

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarDebugDrawTexturePrimingBounds__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugDrawTexturePrimingBounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDebugOverlay'' @ 150419150

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarEnableDebugOverlay__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableDebugOverlay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableVirtualTexturePriming'' @ 150419170

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarEnableVirtualTexturePriming__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableVirtualTexturePriming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableWorldStreamingQueries'' @ 150419190

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarEnableWorldStreamingQueries__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableWorldStreamingQueries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceLandscapeCacheToNeverSerialize'' @ 1504191b0

void __cdecl
PCGWorldActor::_dynamic_atexit_destructor_for__CVarForceLandscapeCacheToNeverSerialize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceLandscapeCacheToNeverSerialize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceReleaseResourcesOnGenerate'' @ 1504191d0

void __cdecl _dynamic_atexit_destructor_for__CVarForceReleaseResourcesOnGenerate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceReleaseResourcesOnGenerate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFramesBeforeFirstGenerate'' @ 1504191f0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarFramesBeforeFirstGenerate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFramesBeforeFirstGenerate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHideActorsFromOutliner'' @ 150419210

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarHideActorsFromOutliner__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHideActorsFromOutliner);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxPositionDeltaGridProportion'' @ 150419230

void __cdecl
PCGRuntimeGenChangeDetection::_dynamic_atexit_destructor_for__CVarMaxPositionDeltaGridProportion__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxPositionDeltaGridProportion)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxPositionDeltaUnbounded'' @ 150419250

void __cdecl
PCGRuntimeGenChangeDetection::_dynamic_atexit_destructor_for__CVarMaxPositionDeltaUnbounded__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxPositionDeltaUnbounded);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumGeneratingComponentsAtSameTime'' @ 150419270

void __cdecl
PCGRuntimeGenSchedulerHelpers::
_dynamic_atexit_destructor_for__CVarNumGeneratingComponentsAtSameTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNumGeneratingComponentsAtSameTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPCGQuality'' @ 150419290

void __cdecl PCGSubsystemConsole::_dynamic_atexit_destructor_for__CVarPCGQuality__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPCGQuality);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeGenerationBasePoolSize'' @ 1504192b0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarRuntimeGenerationBasePoolSize__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRuntimeGenerationBasePoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeGenerationEnable'' @ 1504192d0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRuntimeGenerationEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeGenerationEnableChangeDetection'' @ 1504192f0

void __cdecl
PCGRuntimeGenSchedulerHelpers::
_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnableChangeDetection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRuntimeGenerationEnableChangeDetection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeGenerationEnableDebugging'' @ 150419310

void __cdecl
PCGRuntimeGenSchedulerHelpers::
_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnableDebugging__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRuntimeGenerationEnableDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeGenerationEnablePooling'' @ 150419330

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CVarRuntimeGenerationEnablePooling__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRuntimeGenerationEnablePooling)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarRuntimeGenerationRadiusMultiplier'' @ 150419350

void __cdecl
PCGRuntimeGenSchedulerHelpers::
_dynamic_atexit_destructor_for__CVarRuntimeGenerationRadiusMultiplier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRuntimeGenerationRadiusMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarServerRuntimeGenerationMode'' @ 150419370

void __cdecl
PCGGenSourceManager::_dynamic_atexit_destructor_for__CVarServerRuntimeGenerationMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarServerRuntimeGenerationMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWarnOverridePinsCollideWithInputPins'' @ 150419390

void __cdecl
PCGSettings::_dynamic_atexit_destructor_for__CVarWarnOverridePinsCollideWithInputPins__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWarnOverridePinsCollideWithInputPins);
  return;
}

// `dynamic_atexit_destructor_for_'CommandFlushActorPool'' @ 1504193b0

void __cdecl
PCGRuntimeGenSchedulerHelpers::_dynamic_atexit_destructor_for__CommandFlushActorPool__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CommandFlushActorPool);
  return;
}

// `dynamic_atexit_destructor_for_'CommandFlushCache'' @ 1504193d0

void __cdecl PCGSubsystemConsole::_dynamic_atexit_destructor_for__CommandFlushCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CommandFlushCache);
  return;
}

// `dynamic_atexit_destructor_for_'CommandRefreshRuntimeGen'' @ 1504193f0

void __cdecl PCGSubsystemConsole::_dynamic_atexit_destructor_for__CommandRefreshRuntimeGen__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CommandRefreshRuntimeGen);
  return;
}

// `dynamic_atexit_destructor_for_'LogPCG'' @ 150419410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPCG__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPCG);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 150419430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

// `dynamic_atexit_destructor_for_'PooledPartitionActorName'' @ 150419450

void __cdecl
PCGRuntimeGenSchedulerConstants::_dynamic_atexit_destructor_for__PooledPartitionActorName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PooledPartitionActorName.Data.AllocatorInstance.Data;
  if (PooledPartitionActorName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PooledPartitionActorName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UserParameterTagData'' @ 150419470

void __cdecl PCGBaseSubgraphConstants::_dynamic_atexit_destructor_for__UserParameterTagData__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UserParameterTagData.Data.AllocatorInstance.Data;
  if (UserParameterTagData.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UserParameterTagData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

