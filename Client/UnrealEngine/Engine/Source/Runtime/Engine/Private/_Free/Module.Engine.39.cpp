// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 557

// CVarSink'' @ 141107100

void __cdecl `dynamic_initializer_for_'ALODActor::CVarSink__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = ALODActor::OnCVarsChanged;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  ALODActor::CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  ALODActor::CVarSink.Command = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58
  ;
  ALODActor::CVarSink.Handle.Handle.ID = (FDelegateHandle)0;
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
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  ALODActor::CVarSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  atexit(`dynamic_atexit_destructor_for_'ALODActor::CVarSink__);
  return;
}

// CmdCopyLockedViews'' @ 141107290

void __cdecl `dynamic_initializer_for_'FLockedViewState::CmdCopyLockedViews__(void)

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
    puVar1[3] = FLockedViewState::CopyLockedViews;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FLockedViewState::CmdCopyLockedViews,L"r.CopyLockedViews",
             L"Copies all locked views in to a string that r.LockView will accept to reload them.",
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
  atexit(`dynamic_atexit_destructor_for_'FLockedViewState::CmdCopyLockedViews__);
  return;
}

// FeatureName'' @ 1411073d0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// HLODDistances'' @ 1411073f0

void __cdecl `dynamic_initializer_for_'ALODActor::HLODDistances__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ALODActor::HLODDistances__);
  return;
}

// LevelPackageNames'' @ 141107410

void __cdecl `dynamic_initializer_for_'FLevelStreamingGCHelper::LevelPackageNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingGCHelper::LevelPackageNames__);
  return;
}

// LevelsPendingUnload'' @ 141107430

void __cdecl `dynamic_initializer_for_'FLevelStreamingGCHelper::LevelsPendingUnload__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingGCHelper::LevelsPendingUnload__);
  return;
}

// OnCreateRenderThreadResources'' @ 141107450

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141107470

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// OnGCStreamedOutLevels'' @ 141107490

void __cdecl `dynamic_initializer_for_'FLevelStreamingGCHelper::OnGCStreamedOutLevels__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingGCHelper::OnGCStreamedOutLevels__);
  return;
}

// StaticType'' @ 1411074b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FLocalVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FLocalVertexFactory::StaticType,L"FLocalVertexFactory",
             L"/Engine/Private/LocalVertexFactory.ush",
             SupportsTriangleSorting|SupportsLumenMeshCards|SupportsGPUSkinPassThrough|
             SupportsManualVertexFetch|SupportsPSOPrecaching|SupportsLightmapBaking|
             SupportsRayTracingDynamicGeometry|SupportsRayTracing|SupportsPrimitiveIdStream|
             SupportsCachingMeshDrawCommands|SupportsPositionOnly|SupportsPrecisePrevWorldPos|
             SupportsDynamicLighting|SupportsStaticLighting|UsedWithMaterials,
             ConstructVertexFactoryParameters<FLocalVertexFactory>,
             GetVertexFactoryParametersLayout<FLocalVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FLocalVertexFactory>,
             FLocalVertexFactory::GetPSOPrecacheVertexFetchElements,
             FLocalVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FLocalVertexFactory::StaticType__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncRenderThreadUpdates'' @ 141107530

void __cdecl _dynamic_initializer_for__CVarAllowAsyncRenderThreadUpdates__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncRenderThreadUpdates,L"AllowAsyncRenderThreadUpdates",local_res8,
             L"Used to control async renderthread updates. Also gated on FApp::ShouldUseThreadingForPerformance().0: GameThread1: GameThread with ParallelFor2: Async task with ParallelFor"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncRenderThreadUpdates__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncRenderThreadUpdatesEditor'' @ 141107580

void __cdecl _dynamic_initializer_for__CVarAllowAsyncRenderThreadUpdatesEditor__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncRenderThreadUpdatesEditor,L"AllowAsyncRenderThreadUpdatesEditor",
             local_res8,L"Used to control async renderthread updates in the editor.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncRenderThreadUpdatesEditor__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncRenderThreadUpdatesEditorGameWorld'' @ 1411075d0

void __cdecl _dynamic_initializer_for__CVarAllowAsyncRenderThreadUpdatesEditorGameWorld__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncRenderThreadUpdatesEditorGameWorld,
             L"AllowAsyncRenderThreadUpdatesEditorGameWorld",local_res8,
             L"Used to control async renderthread updates in an editor game world.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncRenderThreadUpdatesEditorGameWorld__);
  return;
}

// `dynamic_initializer_for_'CVarCalcLocalPlayerCachedLODDistanceFactor'' @ 141107620

void __cdecl _dynamic_initializer_for__CVarCalcLocalPlayerCachedLODDistanceFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCalcLocalPlayerCachedLODDistanceFactor,L"r.CalcLocalPlayerCachedLODDistanceFactor"
             ,&GCalcLocalPlayerCachedLODDistanceFactor,
             L"Should we calculate a LOD Distance Factor based on the current FOV.  Should not be necessary since LOD is already based on screen size.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCalcLocalPlayerCachedLODDistanceFactor__);
  return;
}

// `dynamic_initializer_for_'CVarDetailedTickContextForCSV'' @ 141107670

void __cdecl _dynamic_initializer_for__CVarDetailedTickContextForCSV__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDetailedTickContextForCSV,L"csv.DetailedTickContext",local_res8,
             L"Gives more detailed info for Tick counts in CSV",0);
  atexit(_dynamic_atexit_destructor_for__CVarDetailedTickContextForCSV__);
  return;
}

// `dynamic_initializer_for_'CVarHLODDistanceOverride'' @ 1411076c0

void __cdecl _dynamic_initializer_for__CVarHLODDistanceOverride__(void)

{
  FString local_18;
  
  FString::FString(&local_18,"0.0");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarHLODDistanceOverride,L"r.HLOD.DistanceOverride",&local_18,
             L"If non-zero, overrides the distance that HLOD transitions will take place for all objects at the HLOD level index, formatting is as follows:\n\'r.HLOD.DistanceOverride 5000, 10000, 20000\' would result in HLOD levels 0, 1 and 2 transitioning at 5000, 1000 and 20000 respectively."
             ,0x40);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarHLODDistanceOverride__);
  return;
}

// `dynamic_initializer_for_'CVarHLODDistanceOverrideScale'' @ 141107730

void __cdecl _dynamic_initializer_for__CVarHLODDistanceOverrideScale__(void)

{
  FString local_18;
  
  FString::FString(&local_18,"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarHLODDistanceOverrideScale,L"r.HLOD.DistanceOverrideScale",&local_18,
             L"Scales the value in r.HLOD.DistanceOverride, Default off.\nThis is an optional scale intended to allow game logic to dynamically modify without impacting scalability.\n"
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarHLODDistanceOverrideScale__);
  return;
}

// `dynamic_initializer_for_'CVarHLODDitherPauseTime'' @ 1411077a0

void __cdecl _dynamic_initializer_for__CVarHLODDitherPauseTime__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarHLODDitherPauseTime,L"r.HLOD.DitherPauseTime",local_res8,
             L"HLOD dither pause time in seconds\n",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarHLODDitherPauseTime__);
  return;
}

// `dynamic_initializer_for_'CVarHLODForceDisableCastDynamicShadow'' @ 1411077f0

void __cdecl _dynamic_initializer_for__CVarHLODForceDisableCastDynamicShadow__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHLODForceDisableCastDynamicShadow,L"r.HLOD.ForceDisableCastDynamicShadow",
             local_res8,
             L"If non-zero, will set bCastDynamicShadow to false for all LODActors, regardless of the shadowing setting of their subactors."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarHLODForceDisableCastDynamicShadow__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreLVFUsageMode'' @ 141107840

void __cdecl _dynamic_initializer_for__CVarIgnoreLVFUsageMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIgnoreLVFUsageMode,L"r.Material.IgnoreLVFUsageMode",local_res8,
             L"Setting to adjust how UsedWithStaticMesh material flag is interpreted.\n",4);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreLVFUsageMode__);
  return;
}

// `dynamic_initializer_for_'CVarIncludeNonVirtualTexturedLightMaps'' @ 141107890

void __cdecl _dynamic_initializer_for__CVarIncludeNonVirtualTexturedLightMaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIncludeNonVirtualTexturedLightMaps,L"r.IncludeNonVirtualTexturedLightmaps",
             local_res8,
             L"If \'r.VirtualTexturedLightmaps\' is enabled, controls whether non-VT lightmaps are generated/saved as well.\nIncluding non-VT lightmaps will constrain lightmap atlas size, which removes some of the benefit of VT lightmaps.\n 0: Not included.\n 1: Included."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIncludeNonVirtualTexturedLightMaps__);
  return;
}

// `dynamic_initializer_for_'CVarLWIGridSize'' @ 1411078e0

void __cdecl _dynamic_initializer_for__CVarLWIGridSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLWIGridSize,L"LWI.Editor.GridSize",&LWIGridSize,
             L"Sets the size of a grid that LWI managers will be generated with.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLWIGridSize__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialCacheEnabled'' @ 141107930

void __cdecl _dynamic_initializer_for__CVarMaterialCacheEnabled__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMaterialCacheEnabled,L"r.MaterialCache.Enabled",local_res8,
             L"Enable runtime material cache",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x60
            );
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
  atexit(_dynamic_atexit_destructor_for__CVarMaterialCacheEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialCacheSupported'' @ 141107a70

void __cdecl _dynamic_initializer_for__CVarMaterialCacheSupported__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMaterialCacheSupported,L"r.MaterialCache.Support",local_res8,
             L"Enable material cache support",4);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialCacheSupported__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialCacheTileBorderWidth'' @ 141107ac0

void __cdecl _dynamic_initializer_for__CVarMaterialCacheTileBorderWidth__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaterialCacheTileBorderWidth,L"r.MaterialCache.TileBorderWidth",local_res8,
             L"Tile border width (per axis) of each tile",4);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialCacheTileBorderWidth__);
  return;
}

// `dynamic_initializer_for_'CVarMaterialCacheTileWidth'' @ 141107b10

void __cdecl _dynamic_initializer_for__CVarMaterialCacheTileWidth__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x80;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaterialCacheTileWidth,L"r.MaterialCache.TileWidth",local_res8,
             L"Tile width (per axis) of each tile",4);
  atexit(_dynamic_atexit_destructor_for__CVarMaterialCacheTileWidth__);
  return;
}

// `dynamic_initializer_for_'CVarMaximumAllowedHLODLevel'' @ 141107b60

void __cdecl _dynamic_initializer_for__CVarMaximumAllowedHLODLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaximumAllowedHLODLevel,L"r.HLOD.MaximumLevel",&GMaximumAllowedHLODLevel,
             L"How far down the LOD hierarchy to allow showing (can be used to limit quality loss and streaming texture memory usage on high scalability settings)\n-1: No maximum level (default)\n0: Prevent ever showing a HLOD cluster instead of individual meshes\n1: Allow only the first level of HLOD clusters to be shown\n2+: Allow up to the Nth level of HLOD clusters to be shown"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarMaximumAllowedHLODLevel__);
  return;
}

// `dynamic_initializer_for_'CVarRecordActorCountsToCSV'' @ 141107bb0

void __cdecl _dynamic_initializer_for__CVarRecordActorCountsToCSV__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRecordActorCountsToCSV,L"csv.RecordActorCounts",local_res8,
             L"Record actor counts by class when performing CSV capture",0);
  atexit(_dynamic_atexit_destructor_for__CVarRecordActorCountsToCSV__);
  return;
}

// `dynamic_initializer_for_'CVarRecordActorCountsToCSVThreshold'' @ 141107c00

void __cdecl _dynamic_initializer_for__CVarRecordActorCountsToCSVThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRecordActorCountsToCSVThreshold,L"csv.RecordActorCountsThreshold",local_res8,
             L"Number of instances of an native Actor class required before recording to CSV stat",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarRecordActorCountsToCSVThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarRecordTickCountsToCSV'' @ 141107c50

void __cdecl _dynamic_initializer_for__CVarRecordTickCountsToCSV__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRecordTickCountsToCSV,L"csv.RecordTickCounts",local_res8,
             L"Record tick counts by context when performing CSV capture",0);
  atexit(_dynamic_atexit_destructor_for__CVarRecordTickCountsToCSV__);
  return;
}

// `dynamic_initializer_for_'CVarTexelDebugging'' @ 141107ca0

void __cdecl _dynamic_initializer_for__CVarTexelDebugging__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTexelDebugging,L"r.TexelDebugging",local_res8,
             L"Whether T + Left mouse click in the editor selects lightmap texels for debugging Lightmass.  Lightmass must be recompiled with ALLOW_LIGHTMAP_SAMPLE_DEBUGGING enabled for this to work."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTexelDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarVTEnableLossyCompressLightmaps'' @ 141107cf0

void __cdecl _dynamic_initializer_for__CVarVTEnableLossyCompressLightmaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVTEnableLossyCompressLightmaps,L"r.VT.EnableLossyCompressLightmaps",local_res8,
             L"Enables lossy compression on virtual texture lightmaps. Lossy compression tends to have lower quality on lightmap textures, vs regular color textures."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVTEnableLossyCompressLightmaps__);
  return;
}

// `dynamic_initializer_for_'CVarViewportTest'' @ 141107d40

void __cdecl _dynamic_initializer_for__CVarViewportTest__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarViewportTest,L"r.Test.ConstrainedView",local_res8,
             L"Allows to test different viewport rectangle configuations (in game only) as they can happen when using cinematics/Editor.\n0: off(default)\n1..7: Various Configuations"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarViewportTest__);
  return;
}

// `dynamic_initializer_for_'CVarVirtualTexturedLightMaps'' @ 141107d90

void __cdecl _dynamic_initializer_for__CVarVirtualTexturedLightMaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVirtualTexturedLightMaps,L"r.VirtualTexturedLightmaps",local_res8,
             L"Controls wether to stream the lightmaps using virtual texturing.\n 0: Disabled.\n 1: Enabled."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVirtualTexturedLightMaps__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper264'' @ 141107de0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper264__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_25>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper264,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper265'' @ 141107e40

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper265__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_26>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper265,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'FLocalVertexFactoryUniformShaderParametersMetadataRegistration'' @ 141107ea0

void __cdecl
_dynamic_initializer_for__FLocalVertexFactoryUniformShaderParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FLocalVertexFactoryUniformShaderParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(
        _dynamic_atexit_destructor_for__FLocalVertexFactoryUniformShaderParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'FPrecomputedLightingUniformParametersMetadataRegistration'' @ 141107ef0

void __cdecl
_dynamic_initializer_for__FPrecomputedLightingUniformParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FPrecomputedLightingUniformParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FPrecomputedLightingUniformParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(_dynamic_atexit_destructor_for__FPrecomputedLightingUniformParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'GComponentsWithLegacyLightmaps'' @ 141107f40

void __cdecl _dynamic_initializer_for__GComponentsWithLegacyLightmaps__(void)

{
  atexit(_dynamic_atexit_destructor_for__GComponentsWithLegacyLightmaps__);
  return;
}

// `dynamic_initializer_for_'GGPUSkinPassThroughFactoryNullUniformBuffer'' @ 141107f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GGPUSkinPassThroughFactoryNullUniformBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GGPUSkinPassThroughFactoryNullUniformBuffer);
  GGPUSkinPassThroughFactoryNullUniformBuffer._0_8_ =
       &___7__TGlobalResource_VFGPUSkinPassThroughFactoryNullUniformBuffer___00__6B_;
  GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ = 0;
  GGPUSkinPassThroughFactoryNullUniformBuffer._48_8_ = 0;
  GGPUSkinPassThroughFactoryNullUniformBuffer._32_4_ = 2;
  if (GGPUSkinPassThroughFactoryNullUniformBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GGPUSkinPassThroughFactoryNullUniformBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GGPUSkinPassThroughFactoryNullUniformBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GGPUSkinPassThroughFactoryNullUniformBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GGPUSkinPassThroughFactoryNullUniformBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GGPUSkinPassThroughFactoryNullUniformBuffer,
                    (FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GGPUSkinPassThroughFactoryNullUniformBuffer__);
  return;
}

// `dynamic_initializer_for_'GHLODCmd'' @ 141108030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GHLODCmd__(void)

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
    puVar3[3] = HLODConsoleCommand;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"r.HLOD",
                      L"Single argument: 0 or 1 to Disable/Enable HLOD System\nMultiple arguments: force X where X is the HLOD level that should be forced into view"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GHLODCmd,pIVar5);
  GHLODCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GHLODCmd__);
  return;
}

// `dynamic_initializer_for_'GHLODListUnbuiltCmd'' @ 1411081d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GHLODListUnbuiltCmd__(void)

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
    puVar3[3] = ListUnbuiltHLODActors;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"r.HLOD.ListUnbuilt",
                      L"Lists all unbuilt HLOD actors in the world",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GHLODListUnbuiltCmd,pIVar5);
  GHLODListUnbuiltCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GHLODListUnbuiltCmd__);
  return;
}

// `dynamic_initializer_for_'GLevelsWithLegacyBuildData'' @ 141108370

void __cdecl _dynamic_initializer_for__GLevelsWithLegacyBuildData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLevelsWithLegacyBuildData__);
  return;
}

// `dynamic_initializer_for_'GLightComponentsWithLegacyBuildData'' @ 141108390

void __cdecl _dynamic_initializer_for__GLightComponentsWithLegacyBuildData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLightComponentsWithLegacyBuildData__);
  return;
}

// `dynamic_initializer_for_'GLightmassDebugOptions'' @ 1411083b0

void __cdecl _dynamic_initializer_for__GLightmassDebugOptions__(void)

{
  FLightmassDebugOptions::FLightmassDebugOptions(&GLightmassDebugOptions);
  return;
}

// `dynamic_initializer_for_'GLumenVisualizationData'' @ 1411083d0

void __cdecl _dynamic_initializer_for__GLumenVisualizationData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLumenVisualizationData__);
  return;
}

// `dynamic_initializer_for_'GPUStat_EndOfFrameUpdates'' @ 1411083f0

void __cdecl _dynamic_initializer_for__GPUStat_EndOfFrameUpdates__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_EndOfFrameUpdates__);
  return;
}

// `dynamic_initializer_for_'GPUStat_GPUSkinCacheRayTracingGeometry'' @ 141108410

void __cdecl _dynamic_initializer_for__GPUStat_GPUSkinCacheRayTracingGeometry__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_GPUSkinCacheRayTracingGeometry__);
  return;
}

// `dynamic_initializer_for_'GReflectionCapturesWithLegacyBuildData'' @ 141108430

void __cdecl _dynamic_initializer_for__GReflectionCapturesWithLegacyBuildData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GReflectionCapturesWithLegacyBuildData__);
  return;
}

// `dynamic_initializer_for_'GSpeedTreeWindNullUniformBuffer'' @ 141108450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GSpeedTreeWindNullUniformBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)&GSpeedTreeWindNullUniformBuffer);
  GSpeedTreeWindNullUniformBuffer._0_8_ =
       &___7__TGlobalResource_VFSpeedTreeWindNullUniformBuffer___00__6B_;
  GSpeedTreeWindNullUniformBuffer._40_8_ = 0;
  GSpeedTreeWindNullUniformBuffer._48_8_ = 0;
  GSpeedTreeWindNullUniformBuffer._32_4_ = 2;
  if (GSpeedTreeWindNullUniformBuffer._24_4_ != -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GSpeedTreeWindNullUniformBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GSpeedTreeWindNullUniformBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GSpeedTreeWindNullUniformBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GSpeedTreeWindNullUniformBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GSpeedTreeWindNullUniformBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GSpeedTreeWindNullUniformBuffer__);
  return;
}

// `dynamic_initializer_for_'LogHLOD'' @ 141108520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHLOD__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHLOD,L"LogHLOD",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHLOD__);
  return;
}

// `dynamic_initializer_for_'LogLightMap'' @ 141108560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLightMap__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLightMap,L"LogLightMap",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLightMap__);
  return;
}

// `dynamic_initializer_for_'LogLightWeightInstance'' @ 1411085a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLightWeightInstance__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLightWeightInstance,L"LogLightWeightInstance",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLightWeightInstance__);
  return;
}

// `dynamic_initializer_for_'LogMapBuildDataRegistry'' @ 1411085e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMapBuildDataRegistry__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMapBuildDataRegistry,L"LogMapBuildDataRegistry",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMapBuildDataRegistry__);
  return;
}

// `dynamic_initializer_for_'LogMaterialMerging'' @ 141108620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMaterialMerging__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMaterialMerging,L"LogMaterialMerging",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMaterialMerging__);
  return;
}

// `dynamic_initializer_for_'LogPlayerManagement'' @ 141108660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPlayerManagement__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPlayerManagement,L"LogPlayerManagement",Error,All);
  atexit(_dynamic_atexit_destructor_for__LogPlayerManagement__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ActorBeginPlay'' @ 1411086a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ActorBeginPlay__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ActorBeginPlay == (FThreadSafeStaticStat<FStat_STAT_ActorBeginPlay>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ActorBeginPlay");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActorBeginPlay,*pFVar1,L"Actor BeginPlay",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncWorkWaitTime'' @ 141108730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncWorkWaitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncWorkWaitTime == (FThreadSafeStaticStat<FStat_STAT_AsyncWorkWaitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncWorkWaitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncWorkWaitTime,*pFVar1,
               L"Async Work Wait","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CalcSceneView'' @ 1411087c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CalcSceneView__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CalcSceneView == (FThreadSafeStaticStat<FStat_STAT_CalcSceneView>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CalcSceneView");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalcSceneView,*pFVar1,L"CalcSceneView",
               "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CharacterMovement'' @ 141108850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CharacterMovement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CharacterMovement == (FThreadSafeStaticStat<FStat_STAT_CharacterMovement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CharacterMovement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CharacterMovement,*pFVar1,
               L"Char Movement Total","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EndScopedMovementUpdate'' @ 1411088e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EndScopedMovementUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EndScopedMovementUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_EndScopedMovementUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EndScopedMovementUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EndScopedMovementUpdate,*pFVar1,
               L"EndScopedMovementUpdate Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinishAsyncTraceTickTime'' @ 141108970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinishAsyncTraceTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinishAsyncTraceTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_FinishAsyncTraceTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinishAsyncTraceTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinishAsyncTraceTickTime,*pFVar1,
               L"Finish Async Trace Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCMarkTime'' @ 141108a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCMarkTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCMarkTime == (FThreadSafeStaticStat<FStat_STAT_GCMarkTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCMarkTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCMarkTime,*pFVar1,L"GC Mark Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GCSweepTime'' @ 141108a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GCSweepTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GCSweepTime == (FThreadSafeStaticStat<FStat_STAT_GCSweepTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GCSweepTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCSweepTime,*pFVar1,L"GC Sweep Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoveComponentSceneComponentTime'' @ 141108b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MoveComponentSceneComponentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoveComponentSceneComponentTime ==
      (FThreadSafeStaticStat<FStat_STAT_MoveComponentSceneComponentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MoveComponentSceneComponentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoveComponentSceneComponentTime,*pFVar1,
               L"MoveComponent(SceneComp) Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MoveComponentTime'' @ 141108bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MoveComponentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MoveComponentTime == (FThreadSafeStaticStat<FStat_STAT_MoveComponentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MoveComponentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoveComponentTime,*pFVar1,
               L"MoveComponent(Primitive) Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NavWorldTickTime'' @ 141108c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NavWorldTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NavWorldTickTime == (FThreadSafeStaticStat<FStat_STAT_NavWorldTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NavWorldTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavWorldTickTime,*pFVar1,L"Nav Tick Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetBroadcastPostTickTime'' @ 141108cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetBroadcastPostTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetBroadcastPostTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetBroadcastPostTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetBroadcastPostTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetBroadcastPostTickTime,*pFVar1,
               L"Net Post BC Tick Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetBroadcastTickTime'' @ 141108d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetBroadcastTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetBroadcastTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetBroadcastTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetBroadcastTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetBroadcastTickTime,*pFVar1,
               L"Net Broadcast Tick Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetConsiderActorsTime'' @ 141108df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetConsiderActorsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetConsiderActorsTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetConsiderActorsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetConsiderActorsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConsiderActorsTime,*pFVar1,
               L"Consider Actors Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetInitialDormantCheckTime'' @ 141108e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetInitialDormantCheckTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetInitialDormantCheckTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetInitialDormantCheckTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetInitialDormantCheckTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetInitialDormantCheckTime,*pFVar1,
               L"Inital Dormant Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetPrioritizeActorsTime'' @ 141108f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetPrioritizeActorsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetPrioritizeActorsTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetPrioritizeActorsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetPrioritizeActorsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetPrioritizeActorsTime,*pFVar1,
               L"Prioritize Actors Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetRebuildConditionalTime'' @ 141108fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetRebuildConditionalTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetRebuildConditionalTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetRebuildConditionalTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetRebuildConditionalTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetRebuildConditionalTime,*pFVar1,
               L"Rebuild Conditionals","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateActorTime'' @ 141109030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReplicateActorTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateActorTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateActorTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateActorTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateActorTime,*pFVar1,
               L"Replicate Actor Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateDynamicPropCompareTime'' @ 1411090c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReplicateDynamicPropCompareTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateDynamicPropCompareTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropCompareTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateDynamicPropCompareTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateDynamicPropCompareTime,*pFVar1
               ,L"Dynamic Property Compare Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime'' @ 141109150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendBackCompatTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateDynamicPropSendBackCompatTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateDynamicPropSendBackCompatTime,
               *pFVar1,L"Dynamic Property Send BackCompat Time","STATGROUP_Game","STATCAT_Advanced",
               L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateDynamicPropSendTime'' @ 1411091e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReplicateDynamicPropSendTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateDynamicPropSendTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropSendTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateDynamicPropSendTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateDynamicPropSendTime,*pFVar1,
               L"Dynamic Property Send Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateDynamicPropTime'' @ 141109270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReplicateDynamicPropTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateDynamicPropTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateDynamicPropTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateDynamicPropTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateDynamicPropTime,*pFVar1,
               L"Dynamic Property Rep Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReplicateStaticPropTime'' @ 141109300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReplicateStaticPropTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReplicateStaticPropTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetReplicateStaticPropTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReplicateStaticPropTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateStaticPropTime,*pFVar1,
               L"Static Property Rep Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetSerializeItemDeltaTime'' @ 141109390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetSerializeItemDeltaTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetSerializeItemDeltaTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetSerializeItemDeltaTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetSerializeItemDeltaTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeItemDeltaTime,*pFVar1,
               L"NetSerializeItemDelta Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetServerGatherPrioritizeRepActorsTime'' @ 141109420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetServerGatherPrioritizeRepActorsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetServerGatherPrioritizeRepActorsTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetServerGatherPrioritizeRepActorsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetServerGatherPrioritizeRepActorsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetServerGatherPrioritizeRepActorsTime,
               *pFVar1,L"ServerReplicateActors Gather Prioritze Time","STATGROUP_Game",
               "STATCAT_Advanced",L"Game",true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetServerRepActorsTime'' @ 1411094b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetServerRepActorsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetServerRepActorsTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetServerRepActorsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetServerRepActorsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetServerRepActorsTime,*pFVar1,
               L"ServerReplicateActors Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetSkippedDynamicProps'' @ 141109540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetSkippedDynamicProps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetSkippedDynamicProps ==
      (FThreadSafeStaticStat<FStat_STAT_NetSkippedDynamicProps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetSkippedDynamicProps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSkippedDynamicProps,*pFVar1,
               L"Skipped Dynamic Props","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetUpdateGuidToReplicatorMap'' @ 1411095d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetUpdateGuidToReplicatorMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetUpdateGuidToReplicatorMap ==
      (FThreadSafeStaticStat<FStat_STAT_NetUpdateGuidToReplicatorMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetUpdateGuidToReplicatorMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetUpdateGuidToReplicatorMap,*pFVar1,
               L"NetUpdateGuidToReplicatorMap Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetUpdateUnmappedObjectsTime'' @ 141109660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetUpdateUnmappedObjectsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetUpdateUnmappedObjectsTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetUpdateUnmappedObjectsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetUpdateUnmappedObjectsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetUpdateUnmappedObjectsTime,*pFVar1,
               L"Update Unmapped Objects Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetWorldTickTime'' @ 1411096f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetWorldTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetWorldTickTime == (FThreadSafeStaticStat<FStat_STAT_NetWorldTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetWorldTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetWorldTickTime,*pFVar1,L"Net Tick Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OnEndOfFrameUpdateDuringTick'' @ 141109780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OnEndOfFrameUpdateDuringTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OnEndOfFrameUpdateDuringTick ==
      (FThreadSafeStaticStat<FStat_STAT_OnEndOfFrameUpdateDuringTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OnEndOfFrameUpdateDuringTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OnEndOfFrameUpdateDuringTick,*pFVar1,
               L"OnEndOfFrameUpdateDuringTick","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PackageMap_SerializeObjectTime'' @ 141109810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PackageMap_SerializeObjectTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PackageMap_SerializeObjectTime ==
      (FThreadSafeStaticStat<FStat_STAT_PackageMap_SerializeObjectTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PackageMap_SerializeObjectTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PackageMap_SerializeObjectTime,*pFVar1,
               L"Net PackageMap SerializeObject","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PerformOverlapQuery'' @ 1411098a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PerformOverlapQuery__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PerformOverlapQuery == (FThreadSafeStaticStat<FStat_STAT_PerformOverlapQuery>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PerformOverlapQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PerformOverlapQuery,*pFVar1,
               L"PerformOverlapQuery Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PhysicsTime'' @ 141109930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PhysicsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PhysicsTime == (FThreadSafeStaticStat<FStat_STAT_PhysicsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PhysicsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsTime,*pFVar1,L"Async Physics Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PlayerControllerTick'' @ 1411099c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PlayerControllerTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PlayerControllerTick ==
      (FThreadSafeStaticStat<FStat_STAT_PlayerControllerTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PlayerControllerTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PlayerControllerTick,*pFVar1,
               L"PlayerController Tick","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostTickComponentLW'' @ 141109a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostTickComponentLW__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostTickComponentLW == (FThreadSafeStaticStat<FStat_STAT_PostTickComponentLW>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PostTickComponentLW");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickComponentLW,*pFVar1,
               L"Transform or RenderData","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostTickComponentRecreate'' @ 141109ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostTickComponentRecreate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostTickComponentRecreate ==
      (FThreadSafeStaticStat<FStat_STAT_PostTickComponentRecreate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PostTickComponentRecreate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickComponentRecreate,*pFVar1,
               L"Recreate","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostTickComponentUpdate'' @ 141109b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostTickComponentUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostTickComponentUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_PostTickComponentUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PostTickComponentUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickComponentUpdate,*pFVar1,
               L"Post Tick Component Update","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostTickComponentUpdateWait'' @ 141109c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostTickComponentUpdateWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostTickComponentUpdateWait ==
      (FThreadSafeStaticStat<FStat_STAT_PostTickComponentUpdateWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PostTickComponentUpdateWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickComponentUpdateWait,*pFVar1,
               L"Post Tick Component Wait","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReflectionCaptureBuildData'' @ 141109c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReflectionCaptureBuildData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReflectionCaptureBuildData ==
      (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReflectionCaptureBuildData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureBuildData,*pFVar1,
               L"Reflection Captures","STATGROUP_MapBuildData","STATCAT_Advanced",L"MapBuildData",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResetAsyncTraceTickTime'' @ 141109d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ResetAsyncTraceTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResetAsyncTraceTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_ResetAsyncTraceTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ResetAsyncTraceTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetAsyncTraceTickTime,*pFVar1,
               L"Reset Async Trace Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RuntimeMovieSceneTickTime'' @ 141109db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RuntimeMovieSceneTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RuntimeMovieSceneTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_RuntimeMovieSceneTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RuntimeMovieSceneTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RuntimeMovieSceneTickTime,*pFVar1,
               L"Runtime Movie Tick Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SpawnActorTime'' @ 141109e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SpawnActorTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SpawnActorTime == (FThreadSafeStaticStat<FStat_STAT_SpawnActorTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SpawnActorTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpawnActorTime,*pFVar1,L"SpawnActor",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StationaryLightBuildData'' @ 141109ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StationaryLightBuildData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StationaryLightBuildData ==
      (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StationaryLightBuildData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StationaryLightBuildData,*pFVar1,
               L"Stationary Light Static Shadowmap","STATGROUP_MapBuildData","STATCAT_Advanced",
               L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_DuringPhysics'' @ 141109f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_DuringPhysics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_DuringPhysics == (FThreadSafeStaticStat<FStat_STAT_TG_DuringPhysics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_DuringPhysics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_DuringPhysics,*pFVar1,
               L"Start TG_DuringPhysics","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_EndPhysics'' @ 141109ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_EndPhysics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_EndPhysics == (FThreadSafeStaticStat<FStat_STAT_TG_EndPhysics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_EndPhysics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_EndPhysics,*pFVar1,L"TG_EndPhysics",
               "STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_LastDemotable'' @ 14110a080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_LastDemotable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_LastDemotable == (FThreadSafeStaticStat<FStat_STAT_TG_LastDemotable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_LastDemotable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_LastDemotable,*pFVar1,
               L"TG_LastDemotable","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_PostPhysics'' @ 14110a110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_PostPhysics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_PostPhysics == (FThreadSafeStaticStat<FStat_STAT_TG_PostPhysics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_PostPhysics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_PostPhysics,*pFVar1,L"TG_PostPhysics",
               "STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_PostUpdateWork'' @ 14110a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_PostUpdateWork__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_PostUpdateWork == (FThreadSafeStaticStat<FStat_STAT_TG_PostUpdateWork>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_PostUpdateWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_PostUpdateWork,*pFVar1,
               L"TG_PostUpdateWork","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_PrePhysics'' @ 14110a230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_PrePhysics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_PrePhysics == (FThreadSafeStaticStat<FStat_STAT_TG_PrePhysics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_PrePhysics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_PrePhysics,*pFVar1,L"TG_PrePhysics",
               "STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true,ST_int64,true,false
               ,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_StartPhysics'' @ 14110a2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_StartPhysics__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_StartPhysics == (FThreadSafeStaticStat<FStat_STAT_TG_StartPhysics>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_StartPhysics");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_StartPhysics,*pFVar1,L"TG_StartPhysics"
               ,"STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TeleportToTime'' @ 14110a350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TeleportToTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TeleportToTime == (FThreadSafeStaticStat<FStat_STAT_TeleportToTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TeleportToTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TeleportToTime,*pFVar1,L"TeleportTo Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickTime'' @ 14110a3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickTime == (FThreadSafeStaticStat<FStat_STAT_TickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickTime,*pFVar1,L"Tick Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickableTickTime'' @ 14110a470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickableTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickableTickTime == (FThreadSafeStaticStat<FStat_STAT_TickableTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickableTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickableTickTime,*pFVar1,
               L"GT Tickable Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateCameraTime'' @ 14110a500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateCameraTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateCameraTime == (FThreadSafeStaticStat<FStat_STAT_UpdateCameraTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateCameraTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateCameraTime,*pFVar1,
               L"Update Camera Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateOverlaps'' @ 14110a590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateOverlaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateOverlaps == (FThreadSafeStaticStat<FStat_STAT_UpdateOverlaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateOverlaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateOverlaps,*pFVar1,
               L"UpdateOverlaps Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdatePhysicsVolume'' @ 14110a620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdatePhysicsVolume__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdatePhysicsVolume == (FThreadSafeStaticStat<FStat_STAT_UpdatePhysicsVolume>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdatePhysicsVolume");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysicsVolume,*pFVar1,
               L"UpdatePhysicsVolume Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VolumeStreamingChecks'' @ 14110a6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VolumeStreamingChecks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VolumeStreamingChecks ==
      (FThreadSafeStaticStat<FStat_STAT_VolumeStreamingChecks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VolumeStreamingChecks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VolumeStreamingChecks,*pFVar1,
               L"Streaming Volumes","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,false,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VolumeStreamingTickTime'' @ 14110a740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VolumeStreamingTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VolumeStreamingTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_VolumeStreamingTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VolumeStreamingTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VolumeStreamingTickTime,*pFVar1,
               L"Volume Streaming Tick","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WorldTickTime'' @ 14110a7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WorldTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WorldTickTime == (FThreadSafeStaticStat<FStat_STAT_WorldTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WorldTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WorldTickTime,*pFVar1,L"World Tick Time",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h__Script_Engine_4230400054'' @ 14110a860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h__Script_Engine_4230400054__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h__Script_Engine_3931153254'' @ 14110a8b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h__Script_Engine_3931153254__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingVolume_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h__Script_Engine_1609289452'' @ 14110a900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h__Script_Engine_1609289452__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h__Script_Engine_2436785191'' @ 14110a940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h__Script_Engine_2436785191__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h__Script_Engine_832161891'' @ 14110a980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h__Script_Engine_832161891__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h__Script_Engine_1757937264'' @ 14110a9d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h__Script_Engine_1757937264__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h__Script_Engine_3954159489'' @ 14110aa10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h__Script_Engine_3954159489__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h__Script_Engine_992087835'' @ 14110aa50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h__Script_Engine_992087835__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h__Script_Engine_3493188990'' @ 14110aa90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h__Script_Engine_3493188990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h__Script_Engine_2740950094'' @ 14110aae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h__Script_Engine_2740950094__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h__Script_Engine_2077878570'' @ 14110ab20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h__Script_Engine_2077878570__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h__Script_Engine_2110965866'' @ 14110ab60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h__Script_Engine_2110965866__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h__Script_Engine_2664653544'' @ 14110aba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h__Script_Engine_2664653544__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h__Script_Engine_1904775068'' @ 14110abe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h__Script_Engine_1904775068__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTextureTag_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h__Script_Engine_2189796219'' @ 14110ac20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h__Script_Engine_2189796219__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheVirtualTexture_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Materials_HLSLMaterialDerivativeAutogen_h__Script_Engine_1241910776'' @ 14110ac60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Materials_HLSLMaterialDerivativeAutogen_h__Script_Engine_1241910776__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Materials_HLSLMaterialDerivativeAutogen_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h__Script_Engine_3075924271'' @ 14110acb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h__Script_Engine_3075924271__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LocationVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h__Script_Engine_3238010629'' @ 14110acf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h__Script_Engine_3238010629__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_ActorCount'' @ 14110ad30

void __cdecl _dynamic_initializer_for___GCsvCategory_ActorCount__(void)

{
  FString::operator=(&_GCsvCategory_ActorCount.Name,L"ActorCount");
  _GCsvCategory_ActorCount.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_ActorCount.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_ActorCount__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Ticks'' @ 14110ad80

void __cdecl _dynamic_initializer_for___GCsvCategory_Ticks__(void)

{
  FString::operator=(&_GCsvCategory_Ticks.Name,L"Ticks");
  _GCsvCategory_Ticks.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Ticks.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Ticks__);
  return;
}

// Z_Construct_UClass_ALightmassImportanceVolume @ 147e8bf80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALightmassImportanceVolume(void)

{
  if (Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton,
               &Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147e8c250

void * __thiscall
TUniformBuffer<FSpeedTreeUniformParameters>::_scalar_deleting_destructor_
          (TUniformBuffer<FSpeedTreeUniformParameters> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TUniformBuffer_VFSpeedTreeUniformParameters____6B_;
  if (this->Contents != (uchar *)0x0) {
    FMemory::Free(this->Contents);
  }
  if (this->UniformBufferRHI != (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBufferRHI);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e8c3d0

void * __thiscall
FSpeedTreeWindNullUniformBuffer::_scalar_deleting_destructor_
          (FSpeedTreeWindNullUniformBuffer *this,uint param_1)

{
  *(undefined ***)this = &___7__TUniformBuffer_VFSpeedTreeUniformParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e8c440

void * __thiscall
TGlobalResource<FSpeedTreeWindNullUniformBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FSpeedTreeWindNullUniformBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSpeedTreeWindNullUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFSpeedTreeUniformParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UClass_ULightmassPrimitiveSettingsObject @ 147e8c4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULightmassPrimitiveSettingsObject(void)

{
  if (Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton,
               &Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147e8c6e0

void * __thiscall
TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters>::_scalar_deleting_destructor_
          (TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TUniformBuffer_VFGPUSkinPassThroughFactoryLooseParameters____6B_;
  if (this->Contents != (uchar *)0x0) {
    FMemory::Free(this->Contents);
  }
  if (this->UniformBufferRHI != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBufferRHI);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e8c7d0

void * __thiscall
FGPUSkinPassThroughFactoryNullUniformBuffer::_scalar_deleting_destructor_
          (FGPUSkinPassThroughFactoryNullUniformBuffer *this,uint param_1)

{
  *(undefined ***)this = &___7__TUniformBuffer_VFGPUSkinPassThroughFactoryLooseParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e8c840

void * __thiscall
TGlobalResource<FGPUSkinPassThroughFactoryNullUniformBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FGPUSkinPassThroughFactoryNullUniformBuffer,1> *this,uint param_1)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFGPUSkinPassThroughFactoryNullUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFGPUSkinPassThroughFactoryLooseParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e8c900

void * __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// Z_Construct_UClass_ALight @ 147e8cc10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALight(void)

{
  if (Z_Registration_Info_UClass_ALight.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALight.OuterSingleton,
               &Z_Construct_UClass_ALight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALight.OuterSingleton;
}

// Z_Construct_UFunction_ALight_GetBrightness @ 147e8cc50

UFunction * __cdecl Z_Construct_UFunction_ALight_GetBrightness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_GetBrightness_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_GetLightColor @ 147e8cc90

UFunction * __cdecl Z_Construct_UFunction_ALight_GetLightColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_GetLightColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147e8ccd0

void __cdecl
Z_Construct_UFunction_ALight_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALight_IsEnabled @ 147e8cce0

UFunction * __cdecl Z_Construct_UFunction_ALight_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_IsEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_OnRep_bEnabled @ 147e8cd20

UFunction * __cdecl Z_Construct_UFunction_ALight_OnRep_bEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_OnRep_bEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewValue_SetBit @ 147e8cd60

void __cdecl
Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALight_SetAffectTranslucentLighting @ 147e8cd70

UFunction * __cdecl Z_Construct_UFunction_ALight_SetAffectTranslucentLighting(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_SetBrightness @ 147e8cdb0

UFunction * __cdecl Z_Construct_UFunction_ALight_SetBrightness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_SetBrightness_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewValue_SetBit @ 147e8cdf0

void __cdecl
Z_Construct_UFunction_ALight_SetCastShadows_Statics::NewProp_bNewValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALight_SetCastShadows @ 147e8ce00

UFunction * __cdecl Z_Construct_UFunction_ALight_SetCastShadows(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_SetCastShadows_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSetEnabled_SetBit @ 147e8cf00

void __cdecl
Z_Construct_UFunction_ALight_SetEnabled_Statics::NewProp_bSetEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALight_SetEnabled @ 147e8cf40

UFunction * __cdecl Z_Construct_UFunction_ALight_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_SetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_SetLightColor @ 147e8d090

UFunction * __cdecl Z_Construct_UFunction_ALight_SetLightColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_SetLightColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance @ 147e8d0d0

UFunction * __cdecl Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_SetLightFunctionMaterial @ 147e8d110

UFunction * __cdecl Z_Construct_UFunction_ALight_SetLightFunctionMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_SetLightFunctionScale @ 147e8d210

UFunction * __cdecl Z_Construct_UFunction_ALight_SetLightFunctionScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALight_ToggleEnabled @ 147e8d250

UFunction * __cdecl Z_Construct_UFunction_ALight_ToggleEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALight_ToggleEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 147e8d290

void __cdecl Z_Construct_UClass_ALight_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c8) = *(uint *)((longlong)param_1 + 0x2c8) | 1;
  return;
}

// Z_Construct_UClass_ALightWeightInstanceStaticMeshManager @ 147e8d2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALightWeightInstanceStaticMeshManager(void)

{
  if (Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton,
               &Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton;
}

// Z_Construct_UClass_UMaterialCacheVirtualTexture @ 147e8d2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialCacheVirtualTexture(void)

{
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.OuterSingleton,
               &Z_Construct_UClass_UMaterialCacheVirtualTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.OuterSingleton;
}

// Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh @ 147e8d320

UFunction * __cdecl
Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALocationVolume @ 147e8d420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALocationVolume(void)

{
  if (Z_Registration_Info_UClass_ALocationVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALocationVolume.OuterSingleton,
               &Z_Construct_UClass_ALocationVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALocationVolume.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 147e8d460

void __cdecl
Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALocationVolume_IsLoaded @ 147e8d470

UFunction * __cdecl Z_Construct_UFunction_ALocationVolume_IsLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALocationVolume_IsLoaded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALocationVolume_Load @ 147e8d4b0

UFunction * __cdecl Z_Construct_UFunction_ALocationVolume_Load(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALocationVolume_Load_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALocationVolume_Unload @ 147e8d4f0

UFunction * __cdecl Z_Construct_UFunction_ALocationVolume_Unload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ALocationVolume_Unload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147e8d570

void * __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// EDerivativeStatus_StaticEnum @ 147e8d5b0

UEnum * __cdecl EDerivativeStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDerivativeStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDerivativeStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDerivativeStatus,(UObject *)pUVar1,
                       L"EDerivativeStatus");
  }
  return Z_Registration_Info_UEnum_EDerivativeStatus.OuterSingleton;
}

// Z_Construct_UClass_UMaterialCacheVirtualTextureTag @ 147e8d6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialCacheVirtualTextureTag(void)

{
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.OuterSingleton,
               &Z_Construct_UClass_UMaterialCacheVirtualTextureTag_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.OuterSingleton;
}

// Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary @ 147e8d970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.
                OuterSingleton,
               &Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance @ 147e8d9b0

UFunction * __cdecl
Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AMaterialInstanceActor @ 147e8d9f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AMaterialInstanceActor(void)

{
  if (Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton,
               &Z_Construct_UClass_AMaterialInstanceActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AMaterialInstanceActor.OuterSingleton;
}

// Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance @ 147e8da30

UFunction * __cdecl
Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EMaterialMergeType @ 147e8da70

UEnum * __cdecl Z_Construct_UEnum_Engine_EMaterialMergeType(void)

{
  if (Z_Registration_Info_UEnum_EMaterialMergeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMaterialMergeType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMaterialMergeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMaterialMergeType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETextureSizingType @ 147e8dab0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextureSizingType(void)

{
  if (Z_Registration_Info_UEnum_ETextureSizingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureSizingType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextureSizingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureSizingType.InnerSingleton;
}

// ETextureSizingType_StaticEnum @ 147e8daf0

UEnum * __cdecl ETextureSizingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSizingType,(UObject *)pUVar1,
                       L"ETextureSizingType");
  }
  return Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton;
}

// EMaterialMergeType_StaticEnum @ 147e8db30

UEnum * __cdecl EMaterialMergeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialMergeType,(UObject *)pUVar1,
                       L"EMaterialMergeType");
  }
  return Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton;
}

// NewProp_bAllowTwoSidedMaterial_SetBit @ 147e8db70

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 1;
  return;
}

// NewProp_bNormalMap_SetBit @ 147e8db80

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 2;
  return;
}

// NewProp_bTangentMap_SetBit @ 147e8db90

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 4;
  return;
}

// NewProp_bMetallicMap_SetBit @ 147e8dba0

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 8;
  return;
}

// NewProp_bRoughnessMap_SetBit @ 147e8dbb0

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x10;
  return;
}

// NewProp_bAnisotropyMap_SetBit @ 147e8dbc0

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x20;
  return;
}

// NewProp_bSpecularMap_SetBit @ 147e8dbd0

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x40;
  return;
}

// NewProp_bEmissiveMap_SetBit @ 147e8dbe0

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x80;
  return;
}

// NewProp_bOpacityMap_SetBit @ 147e8dbf0

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x43) = *(byte *)((longlong)param_1 + 0x43) | 1;
  return;
}

// NewProp_bOpacityMaskMap_SetBit @ 147e8dc00

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x43) = *(byte *)((longlong)param_1 + 0x43) | 2;
  return;
}

// NewProp_bAmbientOcclusionMap_SetBit @ 147e8dc50

void __cdecl
Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x43) = *(byte *)((longlong)param_1 + 0x43) | 4;
  return;
}

// NewStructOps @ 147e8dc60

void * __cdecl Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialProxySettings,&UE::CoreUObject::Private::Construct<FMaterialProxySettings>,&UE::CoreUObject::Private::ConstructForTests<FMaterialProxySettings>,&UE::CoreUObject::Private::Destruct<FMaterialProxySettings>,&UE::CoreUObject::Private::Copy<FMaterialProxySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ALightWeightInstanceManager @ 147e8dd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALightWeightInstanceManager(void)

{
  if (Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton,
               &Z_Construct_UClass_ALightWeightInstanceManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton;
}

// Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms @ 147e8dd70

UFunction * __cdecl Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ALODActor @ 147e8ddb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALODActor(void)

{
  if (Z_Registration_Info_UClass_ALODActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALODActor.OuterSingleton,
               &Z_Construct_UClass_ALODActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALODActor.OuterSingleton;
}

// Z_Construct_UScriptStruct_FHLODInstancingKey @ 147e8ddf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODInstancingKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODInstancingKey.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODInstancingKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODInstancingKey.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODInstancingKey.InnerSingleton;
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

// NewStructOps @ 147e8de70

void * __cdecl Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODInstancingKey,&UE::CoreUObject::Private::Construct<FHLODInstancingKey>,&UE::CoreUObject::Private::ConstructForTests<FHLODInstancingKey>,&UE::CoreUObject::Private::Destruct<FHLODInstancingKey>,&UE::CoreUObject::Private::Copy<FHLODInstancingKey>,&UE::CoreUObject::Private::GetStructTypeHash<FHLODInstancingKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed @ 147e8deb0

UFunction * __cdecl Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALODActor_OnSubActorEndPlay @ 147e8def0

UFunction * __cdecl Z_Construct_UFunction_ALODActor_OnSubActorEndPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147e8e190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147e8e1c0

void * __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// Z_Construct_UClass_ULocalPlayer @ 147e8e200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocalPlayer(void)

{
  if (Z_Registration_Info_UClass_ULocalPlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocalPlayer.OuterSingleton,
               &Z_Construct_UClass_ULocalPlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocalPlayer.OuterSingleton;
}

// NewProp_bSentSplitJoin_SetBit @ 147e8e240

void __cdecl Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd8) = *(uint *)((longlong)param_1 + 0xd8) | 1;
  return;
}

// Z_Construct_UClass_ULocalMessage @ 147e8e290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocalMessage(void)

{
  if (Z_Registration_Info_UClass_ULocalMessage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocalMessage.OuterSingleton,
               &Z_Construct_UClass_ULocalMessage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocalMessage.OuterSingleton;
}

// NewStructOps @ 147e8e2d0

void * __cdecl Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClientReceiveData,&UE::CoreUObject::Private::Construct<FClientReceiveData>,&UE::CoreUObject::Private::ConstructForTests<FClientReceiveData>,&UE::CoreUObject::Private::Destruct<FClientReceiveData>,&UE::CoreUObject::Private::Copy<FClientReceiveData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMaterialCacheVirtualTextureTag_NoRegister @ 147e8e3d0

UClass * __cdecl Z_Construct_UClass_UMaterialCacheVirtualTextureTag_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheVirtualTextureTag",
               &Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton,
               UMaterialCacheVirtualTextureTag::StaticRegisterNativesUMaterialCacheVirtualTextureTag
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialCacheVirtualTextureTag>,
               InternalVTableHelperCtorCaller<UMaterialCacheVirtualTextureTag>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTextureTag.InnerSingleton;
}

// Z_Construct_UClass_ALevelStreamingVolume @ 147e8e5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelStreamingVolume(void)

{
  if (Z_Registration_Info_UClass_ALevelStreamingVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelStreamingVolume.OuterSingleton,
               &Z_Construct_UClass_ALevelStreamingVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelStreamingVolume.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EStreamingVolumeUsage @ 147e8e630

UEnum * __cdecl Z_Construct_UEnum_Engine_EStreamingVolumeUsage(void)

{
  if (Z_Registration_Info_UEnum_EStreamingVolumeUsage.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamingVolumeUsage.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamingVolumeUsage.InnerSingleton;
}

// EStreamingVolumeUsage_StaticEnum @ 147e8e670

UEnum * __cdecl EStreamingVolumeUsage_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingVolumeUsage,(UObject *)pUVar1,
                       L"EStreamingVolumeUsage");
  }
  return Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147e8e6b0

void * __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// NewProp_bEditorPreVisOnly_SetBit @ 147e8e7d0

void __cdecl
Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x308) = *(uint *)((longlong)param_1 + 0x308) | 1;
  return;
}

// NewProp_bDisabled_SetBit @ 147e8e7e0

void __cdecl
Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x308) = *(uint *)((longlong)param_1 + 0x308) | 2;
  return;
}

// Z_Construct_UClass_ULightmappedSurfaceCollection @ 147e8e8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULightmappedSurfaceCollection(void)

{
  if (Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton,
               &Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton;
}

// Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume @ 147e8ea60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume(void)

{
  if (Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.OuterSingleton,
               &Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 147e8eb60

void __cdecl
``UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>::operator()'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FVirtualTextureProducerHandle *param_1,void *param_2)

{
  IRendererModule *pIVar1;
  longlong *plVar2;
  
  pIVar1 = GetRendererModule();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x138))(pIVar1);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,*(undefined8 *)((longlong)param_2 + 8),*(undefined4 *)((longlong)param_2 + 0x18)
             ,(longlong)param_2 + 0x1c,*(undefined8 *)((longlong)param_2 + 0x10));
  ::operator_delete(param_2,0x30);
  return;
}

// <lambda_invoker_cdecl> @ 147e8ebc0

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FLocalVertexFactoryShaderParametersBase::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147e8ebe0

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FLocalVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// operator<<<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator> @ 147e8ee80

FArchive * __cdecl
operator<<<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FPrecomputedLightVolumeData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea17be;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea17be:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147ea189b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea189b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x20);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x18) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator> @ 147e8ee90

FArchive * __cdecl
operator<<<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea1a6e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea1a6e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147ea1b4b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea1b4b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x20);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x18) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator> @ 147e8eea0

FArchive * __cdecl
operator<<<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea1d1e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea1d1e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147ea1dfb;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea1dfb:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0xd0);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0xc4) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0xc0) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator> @ 147e8eeb0

FArchive * __cdecl
operator<<<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea1fde;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea1fde:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147ea20bb;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea20bb:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x50);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x4c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x48) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator> @ 147e8eec0

FArchive * __cdecl
operator<<<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FReflectionCaptureMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea228e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea228e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147ea236b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea236b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x50);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x4c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x48) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator> @ 147e8eed0

FArchive * __cdecl
operator<<<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FGuid,FSkyAtmosphereMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_147ea253e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_147ea253e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar11;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar11;
      while (uVar14 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar11 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_147ea261b;
        uVar14 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_147ea261b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar11 < (int)uVar7) {
      do {
        pcVar9 = (char *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar11 * 0x1c);
        uVar5 = CityHash64(pcVar9,0x10);
        uVar7 = *piVar1 - 1U & (uint)uVar5;
        *(uint *)(pcVar9 + 0x18) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(pcVar9 + 0x14) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar11;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FGuid,FMeshMapBuildData> @ 147e8eee0

FArchive * __cdecl
operator<<<FGuid,FMeshMapBuildData>(FArchive *param_1,TTuple<FGuid,FMeshMapBuildData> *param_2)

{
  FLightMap *pFVar1;
  FLightMap *local_res8;
  
  operator<<(param_1,(FGuid *)param_2);
  local_res8 = *(FLightMap **)&param_2->field_0x10;
  operator<<(param_1,&local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar1 = *(FLightMap **)&param_2->field_0x10;
    if (pFVar1 != local_res8) {
      *(FLightMap **)&param_2->field_0x10 = local_res8;
      if (local_res8 != (FLightMap *)0x0) {
        FLightMap::AddRef(local_res8);
      }
      if (pFVar1 != (FLightMap *)0x0) {
        FLightMap::Release(pFVar1);
      }
    }
  }
  local_res8 = *(FLightMap **)&param_2->field_0x18;
  operator<<(param_1,(FShadowMap **)&local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar1 = *(FLightMap **)&param_2->field_0x18;
    if (pFVar1 != local_res8) {
      *(FLightMap **)&param_2->field_0x18 = local_res8;
      if (local_res8 != (FLightMap *)0x0) {
        FShadowMap::AddRef((FShadowMap *)local_res8);
      }
      if (pFVar1 != (FLightMap *)0x0) {
        FShadowMap::Release((FShadowMap *)pFVar1);
      }
    }
  }
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FGuid,TSizedDefaultAllocator<32>_> *)&param_2->field_0x20);
  TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_>::BulkSerialize
            ((TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> *)&param_2->field_0x30,
             param_1,false);
  return param_1;
}

// operator<<<FLightMapCoefficients,TSizedDefaultAllocator<32>_> @ 147e8efc0

FArchive * __cdecl
operator<<<FLightMapCoefficients,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FLightMapCoefficients,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x16);
  iVar9 = 0;
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x16,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xba2e9)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x188))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x16,0x16
                      );
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FLightMapCoefficients,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x116,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          (**(code **)(*(longlong *)param_1 + 0x188))
                    (param_1,(param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x16,0x16);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// operator<<<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> @ 147e8efd0

FArchive * __cdecl
operator<<<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
              pFVar7 = UE::Math::operator<<(param_1,(TVector2<float> *)pFVar9);
              UE::Math::operator<<(pFVar7,(TVector2<float> *)(pFVar9 + 8));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
          ;
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
              DefaultConstructItems<FPerInstanceLightmapData,int>(pFVar9,1);
              pFVar7 = UE::Math::operator<<(param_1,(TVector2<float> *)pFVar9);
              UE::Math::operator<<(pFVar7,(TVector2<float> *)(pFVar9 + 8));
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

// operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e8efe0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FGuid *pFVar9;
  uint uVar10;
  FGuid *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedLightVolumeData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar10 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e8f2ec;
        uVar10 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_147e8f2ec:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        pFVar9 = (FGuid *)((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        operator<<(param_1,pFVar9);
        operator<<(param_1,(FPrecomputedLightVolumeData **)(pFVar9 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar7 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar9 = (FGuid *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FGuid *)0x0;
        if (local_78.Pointer != (FGuid *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->C = 0xffffffff;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<(param_1,(FPrecomputedLightVolumeData **)(pFVar11 + 1));
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FGuid *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e8f370

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FGuid *pFVar9;
  uint uVar10;
  FGuid *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPrecomputedVolumetricLightmapData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar10 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e8f67c;
        uVar10 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_147e8f67c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        pFVar9 = (FGuid *)((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        operator<<(param_1,pFVar9);
        operator<<(param_1,(FPrecomputedVolumetricLightmapData **)(pFVar9 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar7 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar9 = (FGuid *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FGuid *)0x0;
        if (local_78.Pointer != (FGuid *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->C = 0xffffffff;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<(param_1,(FPrecomputedVolumetricLightmapData **)(pFVar11 + 1));
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FGuid *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e8f700

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FGuid *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  FGuid *pFVar12;
  uint *puVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0xd0,(longlong)*(int *)&param_2->field_0xc * 0xd0);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar13 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar13 = local_78.Pointer;
      }
      uVar10 = *puVar13;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e8fa8c;
        uVar10 = puVar13[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar7 < iStack_64) {
LAB_147e8fa8c:
        iStack_64 = iVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar7) {
      do {
        pFVar9 = (FGuid *)((longlong)local_50.CurrentBitIndex * 0xd0 + *(longlong *)local_58);
        operator<<(param_1,pFVar9);
        operator<<(param_1,(FLightComponentMapBuildData *)(pFVar9 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar6 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar9 = (FGuid *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xd0,0x10,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar7 * 0xd0 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0xd0 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        pFVar12 = (FGuid *)0x0;
        if (local_78.Pointer != (FGuid *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->A = 0xffffffff;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[0][1];
          *(double *)((longlong)local_78.Pointer + 0x20) =
               UE::Math::TMatrix<double>::Identity.M[0][0];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x20))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[0][3];
          *(double *)((longlong)local_78.Pointer + 0x30) =
               UE::Math::TMatrix<double>::Identity.M[0][2];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x30))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[1][1];
          *(double *)((longlong)local_78.Pointer + 0x40) =
               UE::Math::TMatrix<double>::Identity.M[1][0];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x40))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[1][3];
          *(double *)((longlong)local_78.Pointer + 0x50) =
               UE::Math::TMatrix<double>::Identity.M[1][2];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x50))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[2][1];
          *(double *)((longlong)local_78.Pointer + 0x60) =
               UE::Math::TMatrix<double>::Identity.M[2][0];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x60))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[2][3];
          *(double *)((longlong)local_78.Pointer + 0x70) =
               UE::Math::TMatrix<double>::Identity.M[2][2];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x70))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[3][1];
          *(double *)((longlong)local_78.Pointer + 0x80) =
               UE::Math::TMatrix<double>::Identity.M[3][0];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x80))->C = dVar5;
          dVar5 = UE::Math::TMatrix<double>::Identity.M[3][3];
          *(double *)((longlong)local_78.Pointer + 0x90) =
               UE::Math::TMatrix<double>::Identity.M[3][2];
          *(double *)&((FGuid *)((longlong)local_78.Pointer + 0x90))->C = dVar5;
          ((FGuid *)((longlong)local_78.Pointer + 0xa0))->C = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0xa0))->D = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0xb0))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0xb0))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0xa0))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0xa0))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0xc0))->A = 0xffffffff;
          pFVar12 = local_78.Pointer;
        }
        operator<<(param_1,pFVar12);
        operator<<(param_1,(FLightComponentMapBuildData *)(pFVar12 + 1));
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FGuid *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e8fb10

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FGuid,FMeshMapBuildData> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FGuid,FMeshMapBuildData> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x50,(longlong)*(int *)&param_2->field_0xc * 0x50);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e8fe2c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_147e8fe2c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<FGuid,FMeshMapBuildData>
                  (param_1,(TTuple<FGuid,FMeshMapBuildData> *)
                           ((longlong)local_50.CurrentBitIndex * 0x50 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FGuid,FMeshMapBuildData> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x50,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x50);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x50) = 0xffffffff;
          }
        }
        TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FGuid,FMeshMapBuildData> *)0x0;
        if (local_78.Pointer != (TTuple<FGuid,FMeshMapBuildData> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x48) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FGuid,FMeshMapBuildData>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FGuid,FMeshMapBuildData> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e8fea0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FGuid *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FGuid *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x50,(longlong)*(int *)&param_2->field_0xc * 0x50);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e901cc;
        uVar9 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_147e901cc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        pFVar8 = (FGuid *)((longlong)local_50.CurrentBitIndex * 0x50 + *(longlong *)local_58);
        operator<<(param_1,pFVar8);
        operator<<(param_1,(FReflectionCaptureMapBuildData *)(pFVar8 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FGuid,FReflectionCaptureMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar8 = (FGuid *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x50,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x50);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x50) = 0xffffffff;
          }
        }
        TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FGuid *)0x0;
        if (local_78.Pointer != (FGuid *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->C = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->D = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x20))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x20))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x20))->C = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x20))->D = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x30))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x30))->B = 0;
          *(undefined1 *)&((FGuid *)((longlong)local_78.Pointer + 0x30))->C = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x40))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x40))->B = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x40))->C = 0xffffffff;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<(param_1,(FReflectionCaptureMapBuildData *)(pFVar11 + 1));
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FGuid *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 147e90250

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  FGuid *pFVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  FGuid *pFVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FSkyAtmosphereMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x1c,(longlong)*(int *)&param_2->field_0xc * 0x1c);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_147e9053c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_147e9053c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<(param_1,(FGuid *)((longlong)local_50.CurrentBitIndex * 0x1c +
                                    *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar12 = (FGuid *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1c,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)((longlong)iVar6 * 0x1c + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x1c + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar8 = (FGuid *)0x0;
        if (local_78.Pointer != (FGuid *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined1 *)&((FGuid *)((longlong)local_78.Pointer + 0x10))->A = 0;
          ((FGuid *)((longlong)local_78.Pointer + 0x10))->B = 0xffffffff;
          pFVar8 = local_78.Pointer;
        }
        operator<<(param_1,pFVar8);
        uVar11 = (int)pFVar12 + 1;
        pFVar12 = (FGuid *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FFloat16,TSizedDefaultAllocator<32>_> @ 147e905b0

FArchive * __cdecl
operator<<<FFloat16,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 2,(longlong)param_2->ArrayMax * 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum * 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CastChecked<ALODActor,AActor> @ 147e90a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALODActor * __cdecl CastChecked<ALODActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ALODActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ALODActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALODActor *)param_1;
  }
  pFVar3 = GetTypeName<ALODActor>(&local_28);
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

// CastChecked<ALightWeightInstanceManager,AActor> @ 147e90b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALightWeightInstanceManager * __cdecl
CastChecked<ALightWeightInstanceManager,AActor>(AActor *param_1,Type param_2)

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
      return (ALightWeightInstanceManager *)0x0;
    }
    pFVar3 = GetTypeName<ALightWeightInstanceManager>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ALightWeightInstanceManager::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALightWeightInstanceManager *)param_1;
  }
  pFVar3 = GetTypeName<ALightWeightInstanceManager>(&local_28);
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

// CastChecked<ALightWeightInstanceManager,UObject> @ 147e90bf0

ALightWeightInstanceManager * __cdecl
CastChecked<ALightWeightInstanceManager,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ALightWeightInstanceManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ALightWeightInstanceManager::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ALightWeightInstanceManager *)param_1;
  }
  pFVar3 = GetTypeName<ALightWeightInstanceManager>(&local_28);
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

// CastChecked<UDirectionalLightComponent,ULightComponent> @ 147e90cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UDirectionalLightComponent * __cdecl
CastChecked<UDirectionalLightComponent,ULightComponent>(ULightComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (ULightComponent *)0x0) {
    pFVar3 = GetTypeName<UDirectionalLightComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UDirectionalLightComponent *)param_1;
  }
  pFVar3 = GetTypeName<UDirectionalLightComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<ULightComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULocalPlayer,UObject> @ 147e90d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __cdecl CastChecked<ULocalPlayer,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULocalPlayer>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ULocalPlayer::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULocalPlayer *)param_1;
  }
  pFVar3 = GetTypeName<ULocalPlayer>(&local_28);
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

// CastChecked<ULocalPlayerSubsystem,USubsystem> @ 147e90e30

ULocalPlayerSubsystem * __cdecl CastChecked<ULocalPlayerSubsystem,USubsystem>(USubsystem *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USubsystem *)0x0) {
    pFVar3 = GetTypeName<ULocalPlayerSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ULocalPlayerSubsystem *)param_1;
  }
  pFVar3 = GetTypeName<ULocalPlayerSubsystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USubsystem>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UPointLightComponent,ULightComponent> @ 147e90ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UPointLightComponent * __cdecl
CastChecked<UPointLightComponent,ULightComponent>(ULightComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (ULightComponent *)0x0) {
    pFVar3 = GetTypeName<UPointLightComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UPointLightComponent *)param_1;
  }
  pFVar3 = GetTypeName<UPointLightComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<ULightComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UActorComponent>,TObjectPtr<UActorComponent>,int> @ 147e90fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<UActorComponent>,TObjectPtr<UActorComponent>,int>
          (void *param_1,TObjectPtr<UActorComponent> *param_2,int param_3)

{
  TObjectPtr<UActorComponent> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UActorComponent>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UActorComponent>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UActorComponent *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UActorComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructVertexFactoryParameters<FLocalVertexFactory> @ 147e91010

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FLocalVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FLocalVertexFactoryShaderParameters *this;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    break;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    return (FVertexFactoryShaderParameters *)0x0;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x113,L"");
    if (!bVar2) {
      return (FVertexFactoryShaderParameters *)0x0;
    }
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVertexFactoryShaderParameters *)(*pcVar1)();
    return pFVar3;
  }
  this = operator_new(0x14);
  if (this != (FLocalVertexFactoryShaderParameters *)0x0) {
    this->field_0xb = 0;
    *(undefined8 *)&this->IsGPUSkinPassThrough = 0;
    *(undefined8 *)this = 0;
    *(undefined2 *)&this->field_0x8 = 0;
    this->field_0xa = 0;
    FLocalVertexFactoryShaderParameters::Bind(this,param_2);
    return (FVertexFactoryShaderParameters *)this;
  }
  FLocalVertexFactoryShaderParameters::Bind((FLocalVertexFactoryShaderParameters *)0x0,param_2);
  return (FVertexFactoryShaderParameters *)0x0;
}

// CreateUniformBufferImmediate<FGPUSkinPassThroughFactoryLooseParameters> @ 147e91100

TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> __cdecl
CreateUniformBufferImmediate<FGPUSkinPassThroughFactoryLooseParameters>
          (FGPUSkinPassThroughFactoryLooseParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)param_1 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)(*pcVar1)();
        return TVar4;
      }
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)param_1;
}

// CreateUniformBufferImmediate<FSpeedTreeUniformParameters> @ 147e91280

TUniformBufferRef<FSpeedTreeUniformParameters> __cdecl
CreateUniformBufferImmediate<FSpeedTreeUniformParameters>
          (FSpeedTreeUniformParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FSpeedTreeUniformParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FSpeedTreeUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FSpeedTreeUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)&(param_1->WindVector).field0_0x0 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FSpeedTreeUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FSpeedTreeUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FSpeedTreeUniformParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FSpeedTreeUniformParameters>)(*pcVar1)();
        return TVar4;
      }
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FSpeedTreeUniformParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FSpeedTreeUniformParameters>)param_1;
}

// DefaultConstructItems<FLightMapCoefficients,int> @ 147e91400

void __cdecl DefaultConstructItems<FLightMapCoefficients,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FPerInstanceLightmapData,int> @ 147e91410

void __cdecl DefaultConstructItems<FPerInstanceLightmapData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FTracedTask,int> @ 147e91440

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FTracedTask,int> @ 147e91490

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLightmapResourceCluster,int> @ 147e914e0

void __cdecl DefaultConstructItems<FLightmapResourceCluster,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      FRenderResource::FRenderResource((FRenderResource *)(puVar1 + -6));
      puVar1[-6] = &___7FLightmapResourceCluster__6B_;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSceneViewStateReference,int> @ 147e91570

void __cdecl DefaultConstructItems<FSceneViewStateReference,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FSceneViewStateReference__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTickStats,int> @ 147e915f0

void __cdecl DestructItems<FTickStats,int>(FTickStats *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ObjectDetailedInfo).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ObjectPathName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FTracedTask,int> @ 147e91640

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FTracedTask,int>
          (FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FTracedTask,int> @ 147e916c0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FTracedTask,int>
          (FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVolumetricLightMapGridCell,int> @ 147e91740

void __cdecl
DestructItems<FVolumetricLightMapGridCell,int>(FVolumetricLightMapGridCell *param_1,int param_2)

{
  FBulkData *this;
  
  if (param_2 != 0) {
    this = (FBulkData *)&param_1->BulkData;
    do {
      FBulkData::~FBulkData(this);
      this = (FBulkData *)&this[2].BulkChunkId;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FQuantizedLightmapData,TDefaultDelete<FQuantizedLightmapData>_>,int> @ 147e91780

void __cdecl
DestructItems<TUniquePtr<FQuantizedLightmapData,TDefaultDelete<FQuantizedLightmapData>_>,int>
          (TUniquePtr<FQuantizedLightmapData,TDefaultDelete<FQuantizedLightmapData>_> *param_1,
          int param_2)

{
  FQuantizedLightmapData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FQuantizedLightmapData *)0x0) {
      pFVar2 = (pFVar1->LightGuids).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0xb0);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSceneViewStateReference,int> @ 147e917f0

void __cdecl
DestructItems<FSceneViewStateReference,int>(FSceneViewStateReference *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FSceneViewStateReference::~FSceneViewStateReference(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::TSTR_AcquireVT180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e93e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::CreateSceneProxy_::__l2::TSTR_AcquireVT180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::TSTR_AcquireVT180>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e93f81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e94175;
  }
LAB_147e93f81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e9405f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e9405f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e94175:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::TSTR_AcquireVT356>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e941b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::UpdateResourceWithParams_::__l2::TSTR_AcquireVT356>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::TSTR_AcquireVT356>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e94301;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e944f5;
  }
LAB_147e94301:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e943df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e943df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e944f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLocalVertexFactory::Copy'::__l2::TSTR_FLocalVertexFactoryCopyData413>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e94530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLocalVertexFactory::Copy_::__l2::TSTR_FLocalVertexFactoryCopyData413>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FLocalVertexFactory::Copy'::__l2::TSTR_FLocalVertexFactoryCopyData413>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e94681;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e94875;
  }
LAB_147e94681:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e9475f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e9475f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e94875:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e948b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>_::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e94a01;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e94bf5;
  }
LAB_147e94a01:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e94adf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e94adf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e94bf5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::TSTR_FReleaseLightmapResourceClustersCmd997>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e94c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMapBuildDataRegistry::InvalidateSurfaceLightmaps_::__l24::TSTR_FReleaseLightmapResourceClustersCmd997>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::TSTR_FReleaseLightmapResourceClustersCmd997>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e94d81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e94f75;
  }
LAB_147e94d81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e94e5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e94e5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e94f75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLightSceneProxy::SetTransmission_GameThread'::__l2::TSTR_FSetTransmissionCommand205>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e94fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLightSceneProxy::SetTransmission_GameThread_::__l2::TSTR_FSetTransmissionCommand205>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FLightSceneProxy::SetTransmission_GameThread'::__l2::TSTR_FSetTransmissionCommand205>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e95101;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e952f5;
  }
LAB_147e95101:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e951df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e951df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e952f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::TSTR_FUpdateTransmissionCommand229>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e95330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLightSceneProxy::SetLightFunctionMaterial_GameThread_::__l2::TSTR_FUpdateTransmissionCommand229>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::TSTR_FUpdateTransmissionCommand229>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e95481;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e95675;
  }
LAB_147e95481:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e9555f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e9555f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e95675:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::TSTR_GetBackbufferFormatCmd218>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e956b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::CreateRenderProxy_::__l2::TSTR_GetBackbufferFormatCmd218>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::TSTR_GetBackbufferFormatCmd218>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e95801;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e959f5;
  }
LAB_147e95801:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e958df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e958df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e959f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialCacheVirtualTexture::Flush'::__l2::TSTR_MaterialCacheFlush255>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e95a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::Flush_::__l2::TSTR_MaterialCacheFlush255>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMaterialCacheVirtualTexture::Flush'::__l2::TSTR_MaterialCacheFlush255>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e95b81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e95d75;
  }
LAB_147e95b81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e95c5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e95c5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e95d75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMaterialCacheVirtualTexture::Unregister'::__l2::TSTR_ReleaseVT288>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e95db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMaterialCacheVirtualTexture::Unregister_::__l2::TSTR_ReleaseVT288>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMaterialCacheVirtualTexture::Unregister'::__l2::TSTR_ReleaseVT288>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e95f01;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e960f5;
  }
LAB_147e95f01:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e95fdf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e95fdf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e960f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::TSTR_SetFeatureLevelAndInitialize1152>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e96130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMapBuildDataRegistry::InitializeClusterRenderingResources_::__l2::TSTR_SetFeatureLevelAndInitialize1152>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::TSTR_SetFeatureLevelAndInitialize1152>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e96281;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e96475;
  }
LAB_147e96281:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e9635f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e9635f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e96475:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UWorld::Tick'::__l2::TSTR_TickInGamePerfTrackersRT2018>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147e964b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UWorld::Tick_::__l2::TSTR_TickInGamePerfTrackersRT2018>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UWorld::Tick'::__l2::TSTR_TickInGamePerfTrackersRT2018>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147e96601;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147e967f5;
  }
LAB_147e96601:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147e966df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147e966df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147e967f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent_const_,1,1,`AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 147e96d50

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
ForEachComponent_Internal<UPrimitiveComponent_const_,1,1,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  UPrimitiveComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar12) goto LAB_147e96e73;
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
LAB_147e96e73:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_147e96f0d;
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
LAB_147e96f0d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147e97010;
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
LAB_147e97010:
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
        ForEachComponent_Internal<UPrimitiveComponent_const_,1,1,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UPrimitiveComponent_const_,1,0,`AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 147e97280

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
ForEachComponent_Internal<UPrimitiveComponent_const_,1,0,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UPrimitiveComponent *pUVar4;
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
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar10 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar6) goto LAB_147e97386;
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
LAB_147e97386:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147e9740d;
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
LAB_147e9740d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147e97511;
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
LAB_147e97511:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UPrimitiveComponent *)0x0) {
      `AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent_const_,0,1,`AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 147e97590

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
ForEachComponent_Internal<UPrimitiveComponent_const_,0,1,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar13) goto LAB_147e97683;
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
LAB_147e97683:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_147e97730;
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
LAB_147e97730:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_147e97840;
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
LAB_147e97840:
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
        ForEachComponent_Internal<UPrimitiveComponent_const_,0,1,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UPrimitiveComponent_const_,0,0,`AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 147e97ad0

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
ForEachComponent_Internal<UPrimitiveComponent_const_,0,0,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UPrimitiveComponent *pUVar6;
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
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
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
    if (bVar9) goto LAB_147e97bae;
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
LAB_147e97bae:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_147e97c3f;
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
LAB_147e97c3f:
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
      goto LAB_147e97d50;
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
LAB_147e97d50:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UInstancedStaticMeshComponent,1,1,`ALODActor::PostLoad'::__l2::<lambda_1>_> @ 147e97df0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UInstancedStaticMeshComponent,1,1,_ALODActor::PostLoad_::__l2::<lambda_1>_>
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
  UInstancedStaticMeshComponent *pUVar8;
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
  local_res18.__this = param_2.__this;
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
  pUVar14 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
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
    if (bVar12) goto LAB_147e97f13;
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
LAB_147e97f13:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_147e97fad;
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
LAB_147e97fad:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147e980b0;
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
LAB_147e980b0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.__this = local_res18.__this;
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
        ForEachComponent_Internal<UInstancedStaticMeshComponent,1,1,_ALODActor::PostLoad_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UInstancedStaticMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UInstancedStaticMeshComponent *)0x0) {
      `ALODActor::PostLoad'::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UInstancedStaticMeshComponent,1,0,`ALODActor::PostLoad'::__l2::<lambda_1>_> @ 147e98320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UInstancedStaticMeshComponent,1,0,_ALODActor::PostLoad_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UInstancedStaticMeshComponent *pUVar4;
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
  ALODActor *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.__this;
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
  pUVar10 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
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
    if (bVar6) goto LAB_147e98426;
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
LAB_147e98426:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147e984ad;
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
LAB_147e984ad:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147e985b1;
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
LAB_147e985b1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UInstancedStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UInstancedStaticMeshComponent *)0x0) {
      `ALODActor::PostLoad'::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UInstancedStaticMeshComponent,0,1,`ALODActor::PostLoad'::__l2::<lambda_1>_> @ 147e98630

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UInstancedStaticMeshComponent,0,1,_ALODActor::PostLoad_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UInstancedStaticMeshComponent *pUVar8;
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
  local_res18.__this = param_2.__this;
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
  pUVar14 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
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
    if (bVar13) goto LAB_147e98723;
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
LAB_147e98723:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_147e987d0;
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
LAB_147e987d0:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_147e988e0;
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
LAB_147e988e0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.__this = local_res18.__this;
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
        ForEachComponent_Internal<UInstancedStaticMeshComponent,0,1,_ALODActor::PostLoad_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UInstancedStaticMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UInstancedStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `ALODActor::PostLoad'::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UInstancedStaticMeshComponent,0,0,`ALODActor::PostLoad'::__l2::<lambda_1>_> @ 147e98b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UInstancedStaticMeshComponent,0,0,_ALODActor::PostLoad_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UInstancedStaticMeshComponent *pUVar6;
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
  ALODActor *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.__this;
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
  pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
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
    if (bVar9) goto LAB_147e98c4e;
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
LAB_147e98c4e:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_147e98cdf;
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
LAB_147e98cdf:
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
      goto LAB_147e98df0;
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
LAB_147e98df0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UInstancedStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UInstancedStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `ALODActor::PostLoad'::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`ALODActor::RegisterMeshComponents'::__l2::<lambda_1>_> @ 147e98e90

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
ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_147e98fb0;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e98fb0:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_147e9904f;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_147e9904f:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147e99150;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_147e99150:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    this_00 = *(UActorComponent **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (this_00->bRegistered == 0) {
        UActorComponent::RegisterComponent(this_00);
      }
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = this_00[3]._padding_, local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`ALODActor::SetComponentsMinDrawDistance'::__l2::<lambda_1>_> @ 147e993c0

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
ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  UActorComponent *this_00;
  AActor *this_01;
  code *pcVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  float local_res18;
  bool bStackX_1c;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  UObject *local_198;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined4 local_114;
  ForElementType<AActor_*> local_110;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar13 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar13 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar11->_padding_)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  pUVar11 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar11 != pUVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar4 = (int)pUVar12->_padding_;
    if (((int)pUVar11->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar12->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_147e994e7;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar10) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_147e994e7:
  local_44 = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_110.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_188 = 0;
  local_48 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_184 = 1;
  local_170 = 0;
  iStack_174 = iStack_188;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    iStack_188 = 0;
    local_170 = 0;
    while (uVar14 == 0) {
      iStack_188 = iStack_188 + 1;
      local_170 = local_170 + 0x20;
      iStack_174 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_147e9958f;
      uVar14 = puVar18[iStack_188];
    }
    uStack_184 = ~(uVar14 - 1) & uVar14;
    uVar3 = (ulonglong)uStack_184 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a8 = (int)lVar13;
    iStack_174 = local_1a8 + -1 + local_170;
    if (iVar4 < iStack_174) {
      iStack_174 = iVar4;
    }
  }
LAB_147e9958f:
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_16c = local_114;
  iStack_168 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = uVar14 & 0xffffffe0;
  uStack_178 = 0xffffffff;
  TStack_158._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_158.CurrentBitIndex = iStack_174;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_158._28_4_ = local_114;
  TStack_158.BaseBitIndex = local_170;
  uStack_138 = CONCAT44(uStack_164,iStack_168);
  local_190 = local_1a0;
  local_180 = puVar1;
  local_160 = local_1a0;
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar5) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar1;
    if (puVar6 != (undefined1 *)0x0) {
      puVar17 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      iVar15 = iVar15 + 1;
      uVar19 = uVar19 + 0x20;
      uVar14 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147e9968f;
      uVar14 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar3 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a4 = (int)lVar13;
    uVar14 = local_1a4 + -1 + uVar19;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_147e9968f:
  bStackX_1c = param_2.bInMarkRenderStateDirty;
  local_res18 = param_2.MinDrawDistance;
  do {
    pTVar9 = local_160;
    if (*(int *)&(local_160->Elements).field_0x8 - *(int *)&(local_160->Elements).field_0x34 !=
        (int)uStack_138) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_48;
    if (((TStack_158.CurrentBitIndex == uVar14) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar8))
    {
      FVar16 = (ForElementType<AActor_*>)&local_110;
      if (local_110.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_110.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_48 * 8);
      while( true ) {
        if (local_48 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar2) break;
        local_198 = *(UObject **)param_1.Class.field0_0x0;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_198);
        }
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_198,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_110.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_110.SecondaryData);
      }
      return;
    }
    this_00 = *(UActorComponent **)
               (*(longlong *)&pTVar9->Elements + (longlong)TStack_158.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      *(float *)&this_00[3]._padding_ = local_res18;
      if (bStackX_1c != false) {
        UActorComponent::MarkRenderStateDirty(this_00);
      }
      pUVar11 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar11->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar11->_padding_)) && (local_1b0 = this_00[3]._padding_, local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)&local_110;
        if (local_110.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_110.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)&local_110;
          if (local_110.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_110.SecondaryData;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_44 * 8)) {
            local_1d0 = (longlong)local_48;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)&local_110;
            if (local_110.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_110.SecondaryData;
            }
            local_1d8 = (longlong)local_44;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        if (local_48 == local_44) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_110,&local_44);
        }
        lVar13 = (longlong)local_48;
        FVar16 = (ForElementType<AActor_*>)&local_110;
        if (local_110.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_110.SecondaryData;
        }
        local_48 = local_48 + 1;
        *(longlong *)((longlong)FVar16 + lVar13 * 8) = local_1b0;
      }
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`ALODActor::UnregisterMeshComponents'::__l2::<lambda_1>_> @ 147e99920

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
ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_147e99a40;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e99a40:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_147e99adf;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_147e99adf:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147e99be0;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_147e99be0:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    this_00 = *(UActorComponent **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (this_00->bRegistered == 0) {
        this_00->bAutoRegister = '\0';
      }
      else {
        UActorComponent::UnregisterComponent(this_00);
      }
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = this_00[3]._padding_, local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`ALODActor::GetComponentsBoundingBox'::__l8::<lambda_1>_> @ 147e99e60

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
ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UObject *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar12) goto LAB_147e99f7f;
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
LAB_147e99f7f:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar4;
    }
    uVar18 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar18 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_147e9a01d;
      uVar18 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar18 - 1) & uVar18;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_147e9a01d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar21 = uVar18 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
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
    puVar19 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar21 = uVar21 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_147e9a120;
      uVar18 = *(uint *)(puVar19 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar21;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_147e9a120:
  do {
    pTVar11 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar10 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar18) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar11 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    lVar15 = *(longlong *)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (lVar15 != 0) {
      bVar12 = *param_2.bHasStaticMeshes;
      pUVar8 = *(UObject **)(lVar15 + 0x5a0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      *param_2.bHasStaticMeshes = (bool)(pUVar8 != (UObject *)0x0 | bVar12);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)(lVar15 + 600), local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
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
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`ALODActor::RegisterMeshComponents'::__l2::<lambda_1>_> @ 147e9a3b0

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
ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  pUVar8 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar8 != pUVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_147e9a4b2;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147e9a4b2:
  iVar13 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147e9a53d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147e9a53d:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar13);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar15;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147e9a641;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_147e9a641:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar12) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UActorComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_50.CurrentBitIndex * 0x10);
    if ((this_00 != (UActorComponent *)0x0) && (this_00->bRegistered == 0)) {
      UActorComponent::RegisterComponent(this_00);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`ALODActor::SetComponentsMinDrawDistance'::__l2::<lambda_1>_> @ 147e9a6d0

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
ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *this_00;
  code *pcVar4;
  float fVar5;
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
  <lambda_1> local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2;
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar6) goto LAB_147e9a7de;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147e9a7de:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147e9a86d;
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
LAB_147e9a86d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar14);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147e9a969;
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
LAB_147e9a969:
  bVar6 = local_res18.bInMarkRenderStateDirty;
  fVar5 = local_res18.MinDrawDistance;
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UActorComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_70.CurrentBitIndex * 0x10);
    if ((this_00 != (UActorComponent *)0x0) &&
       (*(float *)&this_00[3]._padding_ = fVar5, bVar6 != false)) {
      UActorComponent::MarkRenderStateDirty(this_00);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`ALODActor::UnregisterMeshComponents'::__l2::<lambda_1>_> @ 147e9aa10

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
ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  pUVar8 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar8 != pUVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_147e9ab12;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147e9ab12:
  iVar13 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147e9ab9d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147e9ab9d:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar13);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar15;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147e9aca1;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_147e9aca1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar12) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UActorComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (this_00->bRegistered == 0) {
        this_00->bAutoRegister = '\0';
      }
      else {
        UActorComponent::UnregisterComponent(this_00);
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`ALODActor::GetComponentsBoundingBox'::__l8::<lambda_1>_> @ 147e9ad30

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
ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
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
  pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar6) goto LAB_147e9ae36;
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
LAB_147e9ae36:
  iVar13 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147e9aebd;
      uVar12 = puVar16[lVar11 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_147e9aebd:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147e9afd0;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_147e9afd0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = *(longlong *)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (lVar11 != 0) {
      bVar6 = *param_2.bHasStaticMeshes;
      pUVar4 = *(UObject **)(lVar11 + 0x5a0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      *param_2.bHasStaticMeshes = (bool)(pUVar4 != (UObject *)0x0 | bVar6);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`ALODActor::RegisterMeshComponents'::__l2::<lambda_1>_> @ 147e9b070

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
ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_147e9b160;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e9b160:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_147e9b211;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_147e9b211:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147e9b320;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_147e9b320:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    this_00 = *(UActorComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) && (this_00->bRegistered == 0)) {
        UActorComponent::RegisterComponent(this_00);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = this_00[3]._padding_, local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`ALODActor::SetComponentsMinDrawDistance'::__l2::<lambda_1>_> @ 147e9b5b0

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
ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  float local_res18;
  bool bStackX_1c;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  ForElementType<AActor_*> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1b0;
  TObjectPtr<UClass>_u_0 local_1a8;
  UObject *local_1a0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  undefined4 local_11c;
  undefined1 local_118 [192];
  ForElementType<AActor_*> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1a8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_147e9b6a8;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e9b6a8:
  local_4c = 0x18;
  local_1b0 = &this->OwnedComponents;
  local_58 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_190 = 0;
  local_50 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_18c = 1;
  local_178 = 0;
  iStack_17c = iStack_190;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_190 = 0;
    local_178 = 0;
    while (uVar19 == 0) {
      iStack_190 = iStack_190 + 1;
      local_178 = local_178 + 0x20;
      iStack_17c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_190) goto LAB_147e9b751;
      uVar19 = puVar18[iStack_190];
    }
    uStack_18c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_18c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b8 = (int)lVar14;
    iStack_17c = local_1b8 + -1 + local_178;
    if (iVar4 < iStack_17c) {
      iStack_17c = iVar4;
    }
  }
LAB_147e9b751:
  uStack_174 = local_11c;
  iStack_170 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_180 = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_18c,iStack_190);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_160.CurrentBitIndex = iStack_17c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_160._28_4_ = local_11c;
  TStack_160.BaseBitIndex = local_178;
  uStack_140 = CONCAT44(uStack_16c,iStack_170);
  local_198 = local_1b0;
  local_188 = puVar3;
  local_168 = local_1b0;
  TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1b0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147e9b857;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1b4 = (int)lVar14;
    uVar19 = local_1b4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_147e9b857:
  bStackX_1c = param_2.bInMarkRenderStateDirty;
  local_res18 = param_2.MinDrawDistance;
  do {
    pTVar11 = local_168;
    if (*(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34 !=
        (int)uStack_140) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    iVar4 = local_50;
    TVar10 = local_1a8;
    if (((TStack_160.CurrentBitIndex == uVar19) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_118;
      if (local_58 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_58;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_50 * 8);
      while( true ) {
        if (local_50 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c7);
        }
        if (FVar16 == FVar1) break;
        local_1a0 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1a0);
        }
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_1a0,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_58 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_58);
      }
      return;
    }
    this_00 = *(UActorComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_160.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) && (*(float *)&this_00[3]._padding_ = local_res18, bStackX_1c != false)) {
        UActorComponent::MarkRenderStateDirty(this_00);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1c0 = this_00[3]._padding_, local_1c0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_118;
        if (local_58 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_58;
        }
        if ((ulonglong)FVar16 <= &local_1c0) {
          FVar16 = (ForElementType<AActor_*>)local_118;
          if (local_58 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_58;
          }
          if (&local_1c0 < (longlong *)((longlong)FVar16 + (longlong)local_4c * 8)) {
            local_1e0 = (longlong)local_50;
            local_1d8 = 8;
            local_1f8 = &local_1c0;
            local_1f0 = (ForElementType<AActor_*>)local_118;
            if (local_58 != (ForElementType<AActor_*>)0x0) {
              local_1f0 = local_58;
            }
            local_1e8 = (longlong)local_4c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_118,&local_4c);
        }
        lVar14 = (longlong)local_50;
        FVar16 = (ForElementType<AActor_*>)local_118;
        if (local_58 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_58;
        }
        local_50 = local_50 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1c0;
      }
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`ALODActor::UnregisterMeshComponents'::__l2::<lambda_1>_> @ 147e9bb10

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
ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_147e9bc00;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147e9bc00:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_147e9bcb1;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_147e9bcb1:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147e9bdc0;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_147e9bdc0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    this_00 = *(UActorComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        if (this_00->bRegistered == 0) {
          this_00->bAutoRegister = '\0';
        }
        else {
          UActorComponent::UnregisterComponent(this_00);
        }
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = this_00[3]._padding_, local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`ALODActor::GetComponentsBoundingBox'::__l8::<lambda_1>_> @ 147e9c050

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
ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UObject *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_147e9c13f;
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
LAB_147e9c13f:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_147e9c1f1;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_147e9c1f1:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_147e9c300;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_147e9c300:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar11 == local_1a0)) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        bVar12 = *param_2.bHasStaticMeshes;
        pUVar8 = *(UObject **)(lVar14 + 0x5a0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        *param_2.bHasStaticMeshes = (bool)(pUVar8 != (UObject *)0x0 | bVar12);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = *(longlong *)(lVar14 + 600), local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
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
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`ALODActor::RegisterMeshComponents'::__l2::<lambda_1>_> @ 147e9c5b0

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
ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_147e9c68a;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_147e9c68a:
  iVar13 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar9 = 1;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar10 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_147e9c712;
      uVar12 = puVar16[iVar13];
    }
    uVar9 = ~(uVar12 - 1) & uVar12;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar10 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_147e9c712:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar13);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar9) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar14 = puVar5;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      uVar17 = uVar17 + 0x20;
      uVar12 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar13) goto LAB_147e9c820;
      uVar12 = *(uint *)(puVar14 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (int)lVar6 + -1 + uVar17;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_147e9c820:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    this_00 = *(UActorComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (this_00->bRegistered == 0)) {
        UActorComponent::RegisterComponent(this_00);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`ALODActor::SetComponentsMinDrawDistance'::__l2::<lambda_1>_> @ 147e9c8d0

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
ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
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
  <lambda_1> local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2;
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
  pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar9) goto LAB_147e9c9b6;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_147e9c9b6:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_147e9ca3f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_147e9ca3f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar10,iVar14);
  TStack_70.CurrentBitIndex = iVar11;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
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
      goto LAB_147e9cb3a;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = (int)lVar6 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_147e9cb3a:
  bVar9 = local_res18.bInMarkRenderStateDirty;
  fVar8 = local_res18.MinDrawDistance;
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    this_00 = *(UActorComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (*(float *)&this_00[3]._padding_ = fVar8, bVar9 != false)) {
        UActorComponent::MarkRenderStateDirty(this_00);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`ALODActor::UnregisterMeshComponents'::__l2::<lambda_1>_> @ 147e9cc10

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
ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_147e9ccea;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_147e9ccea:
  iVar13 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar9 = 1;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar10 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_147e9cd72;
      uVar12 = puVar16[iVar13];
    }
    uVar9 = ~(uVar12 - 1) & uVar12;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar10 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_147e9cd72:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar13);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar9) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar14 = puVar5;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      uVar17 = uVar17 + 0x20;
      uVar12 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar13) goto LAB_147e9ce80;
      uVar12 = *(uint *)(puVar14 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (int)lVar6 + -1 + uVar17;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_147e9ce80:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    this_00 = *(UActorComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this_00 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        if (this_00->bRegistered == 0) {
          this_00->bAutoRegister = '\0';
        }
        else {
          UActorComponent::UnregisterComponent(this_00);
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`ALODActor::GetComponentsBoundingBox'::__l8::<lambda_1>_> @ 147e9cf30

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
ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  UObject *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar13 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar13) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar13 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar13 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_147e9d006;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_147e9d006:
  iVar15 = 0;
  iVar13 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  uVar9 = 1;
  iVar10 = 0;
  iVar17 = 0;
  iVar12 = 0;
  if (iVar13 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 0x20;
      iVar10 = iVar13;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iVar15) goto LAB_147e9d08f;
      uVar14 = puVar18[iVar15];
    }
    uVar9 = ~(uVar14 - 1) & uVar14;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar10 = local_res20 + -1 + iVar17;
    if (iVar13 < iVar10) {
      iVar10 = iVar13;
    }
LAB_147e9d08f:
    iVar12 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  }
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar9,iVar15);
  TStack_88.CurrentBitIndex = iVar10;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar17;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar12 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar9) {
    puVar4 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar16 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar16 = puVar4;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      iVar13 = iVar13 + 1;
      uVar19 = uVar19 + 0x20;
      uVar14 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar13) goto LAB_147e9d190;
      uVar14 = *(uint *)(puVar16 + (longlong)iVar13 * 4);
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar14 = (int)lVar6 + -1 + uVar19;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_147e9d190:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar14) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar6 = *(longlong *)
             (*(longlong *)&(this->OwnedComponents).Elements +
             (longlong)TStack_88.CurrentBitIndex * 0x10);
    if (lVar6 != 0) {
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        bVar8 = *param_2.bHasStaticMeshes;
        pUVar5 = *(UObject **)(lVar6 + 0x5a0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        *param_2.bHasStaticMeshes = (bool)(pUVar5 != (UObject *)0x0 | bVar8);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// GetFullNameForCastLogError<ULightComponent> @ 147e9d260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<ULightComponent>
          (FString *__return_storage_ptr__,ULightComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<ALODActor> @ 147e9d290

FString * __cdecl GetTypeName<ALODActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ALODActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ALightWeightInstanceManager> @ 147e9d2d0

FString * __cdecl GetTypeName<ALightWeightInstanceManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ALightWeightInstanceManager::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ULocalPlayerSubsystem> @ 147e9d310

FString * __cdecl GetTypeName<ULocalPlayerSubsystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UPointLightComponent> @ 147e9d350

FString * __cdecl GetTypeName<UPointLightComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVertexFactoryParametersElementShaderBindings<FLocalVertexFactory> @ 147e9d390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FLocalVertexFactory>
          (EShaderFrequency param_1,FVertexFactoryShaderParameters *param_2,FSceneInterface *param_3
          ,FSceneView *param_4,FMeshMaterialShader *param_5,EVertexInputStreamType param_6,
          Type param_7,FVertexFactory *param_8,FMeshBatchElement *param_9,
          FMeshDrawSingleShaderBindings *param_10,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_11)

{
  code *pcVar1;
  bool bVar2;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    FLocalVertexFactoryShaderParameters::GetElementShaderBindings
              ((FLocalVertexFactoryShaderParameters *)param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147e9d3b8_caseD_1;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x132,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
switchD_147e9d3b8_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersLayout<FLocalVertexFactory> @ 147e9d490

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FLocalVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    pFVar3 = FLocalVertexFactoryShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147e9d4ad_caseD_1;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTypeLayoutDesc *)(*pcVar1)();
      return pFVar3;
    }
switchD_147e9d4ad_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// HeapSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_> @ 147e9d520

void __cdecl
AlgoImpl::
HeapSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_>
          (FTickStats *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTickStats,FTickStats> param_4)

{
  FString *pFVar1;
  FString *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FTickStats *pFVar9;
  FTickStats *pFVar10;
  int iVar11;
  int iVar12;
  undefined3 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined3 uVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  FTickStats *pFVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  
  if (param_2 < 0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar23) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar23) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar24 = (param_2 + -2) / 2;
  iVar25 = iVar24 * 2 + 1;
  iVar29 = iVar25;
  iVar30 = iVar24;
  do {
    while (param_2 <= iVar25) {
LAB_147e9d661:
      if (iVar30 == 0) {
        iVar25 = param_2 + -1;
        lVar26 = (longlong)iVar25;
        if (0 < iVar25) {
          pFVar27 = param_1 + lVar26;
          do {
            iVar29 = (pFVar27->ObjectPathName).Data.ArrayNum;
            iVar24 = (pFVar27->ObjectPathName).Data.ArrayMax;
            iVar15 = param_1->Count;
            bVar19 = param_1->bForSummary;
            uVar20 = *(undefined3 *)&param_1->field_0x35;
            pFVar4 = (param_1->ObjectPathName).Data.AllocatorInstance.Data;
            iVar30 = (param_1->ObjectPathName).Data.ArrayNum;
            iVar28 = (param_1->ObjectPathName).Data.ArrayMax;
            pFVar5 = (param_1->ObjectDetailedInfo).Data.AllocatorInstance.Data;
            iVar11 = (param_1->ObjectDetailedInfo).Data.ArrayNum;
            iVar12 = (param_1->ObjectDetailedInfo).Data.ArrayMax;
            FVar6 = param_1->ObjectClassFName;
            iVar14 = param_1->GCIndex;
            fVar22 = param_1->TotalTime;
            (param_1->ObjectPathName).Data.AllocatorInstance.Data =
                 (pFVar27->ObjectPathName).Data.AllocatorInstance.Data;
            (param_1->ObjectPathName).Data.ArrayNum = iVar29;
            (param_1->ObjectPathName).Data.ArrayMax = iVar24;
            iVar29 = (pFVar27->ObjectDetailedInfo).Data.ArrayNum;
            iVar24 = (pFVar27->ObjectDetailedInfo).Data.ArrayMax;
            (param_1->ObjectDetailedInfo).Data.AllocatorInstance.Data =
                 (pFVar27->ObjectDetailedInfo).Data.AllocatorInstance.Data;
            (param_1->ObjectDetailedInfo).Data.ArrayNum = iVar29;
            (param_1->ObjectDetailedInfo).Data.ArrayMax = iVar24;
            iVar29 = pFVar27->GCIndex;
            fVar21 = pFVar27->TotalTime;
            param_1->ObjectClassFName = pFVar27->ObjectClassFName;
            param_1->GCIndex = iVar29;
            param_1->TotalTime = fVar21;
            bVar23 = pFVar27->bForSummary;
            uVar13 = *(undefined3 *)&pFVar27->field_0x35;
            param_1->Count = pFVar27->Count;
            param_1->bForSummary = bVar23;
            *(undefined3 *)&param_1->field_0x35 = uVar13;
            (pFVar27->ObjectPathName).Data.AllocatorInstance.Data = pFVar4;
            (pFVar27->ObjectPathName).Data.ArrayNum = iVar30;
            (pFVar27->ObjectPathName).Data.ArrayMax = iVar28;
            (pFVar27->ObjectDetailedInfo).Data.AllocatorInstance.Data = pFVar5;
            (pFVar27->ObjectDetailedInfo).Data.ArrayNum = iVar11;
            (pFVar27->ObjectDetailedInfo).Data.ArrayMax = iVar12;
            pFVar27->ObjectClassFName = FVar6;
            pFVar27->GCIndex = iVar14;
            pFVar27->TotalTime = fVar22;
            pFVar27->Count = iVar15;
            pFVar27->bForSummary = bVar19;
            *(undefined3 *)&pFVar27->field_0x35 = uVar20;
            iVar29 = 0;
            if (1 < iVar25) {
              do {
                iVar30 = iVar29 * 2;
                iVar24 = iVar30 + 1;
                if (iVar30 + 2 < iVar25) {
                  if (param_1[iVar24].TotalTime <= param_1[(longlong)iVar30 + 2].TotalTime &&
                      param_1[(longlong)iVar30 + 2].TotalTime != param_1[iVar24].TotalTime) {
                    iVar24 = iVar30;
                  }
                  iVar24 = iVar24 + 1;
                }
                if (param_1[iVar29].TotalTime < param_1[iVar24].TotalTime ||
                    param_1[iVar29].TotalTime == param_1[iVar24].TotalTime) break;
                pFVar9 = param_1 + iVar24;
                iVar30 = (pFVar9->ObjectPathName).Data.ArrayNum;
                iVar28 = (pFVar9->ObjectPathName).Data.ArrayMax;
                pFVar10 = param_1 + iVar29;
                iVar16 = pFVar10->Count;
                bVar19 = pFVar10->bForSummary;
                uVar20 = *(undefined3 *)&pFVar10->field_0x35;
                pFVar10 = param_1 + iVar29;
                pFVar4 = (pFVar10->ObjectPathName).Data.AllocatorInstance.Data;
                iVar11 = (pFVar10->ObjectPathName).Data.ArrayNum;
                iVar12 = (pFVar10->ObjectPathName).Data.ArrayMax;
                pFVar1 = &param_1[iVar29].ObjectDetailedInfo;
                pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
                iVar14 = (pFVar1->Data).ArrayNum;
                iVar15 = (pFVar1->Data).ArrayMax;
                FVar6 = param_1[iVar29].ObjectClassFName;
                uVar7 = (&param_1[iVar29].ObjectClassFName)[1];
                pFVar10 = param_1 + iVar29;
                (pFVar10->ObjectPathName).Data.AllocatorInstance.Data =
                     (pFVar9->ObjectPathName).Data.AllocatorInstance.Data;
                (pFVar10->ObjectPathName).Data.ArrayNum = iVar30;
                (pFVar10->ObjectPathName).Data.ArrayMax = iVar28;
                pFVar1 = &param_1[iVar24].ObjectDetailedInfo;
                iVar30 = (pFVar1->Data).ArrayNum;
                iVar28 = (pFVar1->Data).ArrayMax;
                pFVar2 = &param_1[iVar29].ObjectDetailedInfo;
                (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
                (pFVar2->Data).ArrayNum = iVar30;
                (pFVar2->Data).ArrayMax = iVar28;
                uVar8 = (&param_1[iVar24].ObjectClassFName)[1];
                param_1[iVar29].ObjectClassFName = param_1[iVar24].ObjectClassFName;
                (&param_1[iVar29].ObjectClassFName)[1] = (FName)uVar8;
                pFVar9 = param_1 + iVar24;
                bVar23 = pFVar9->bForSummary;
                uVar13 = *(undefined3 *)&pFVar9->field_0x35;
                pFVar10 = param_1 + iVar29;
                pFVar10->Count = pFVar9->Count;
                pFVar10->bForSummary = bVar23;
                *(undefined3 *)&pFVar10->field_0x35 = uVar13;
                pFVar9 = param_1 + iVar24;
                (pFVar9->ObjectPathName).Data.AllocatorInstance.Data = pFVar4;
                (pFVar9->ObjectPathName).Data.ArrayNum = iVar11;
                (pFVar9->ObjectPathName).Data.ArrayMax = iVar12;
                pFVar1 = &param_1[iVar24].ObjectDetailedInfo;
                (pFVar1->Data).AllocatorInstance.Data = pFVar5;
                (pFVar1->Data).ArrayNum = iVar14;
                (pFVar1->Data).ArrayMax = iVar15;
                param_1[iVar24].ObjectClassFName = FVar6;
                (&param_1[iVar24].ObjectClassFName)[1] = (FName)uVar7;
                pFVar9 = param_1 + iVar24;
                pFVar9->Count = iVar16;
                pFVar9->bForSummary = bVar19;
                *(undefined3 *)&pFVar9->field_0x35 = uVar20;
                iVar29 = iVar24;
              } while (iVar24 * 2 + 1 < iVar25);
            }
            iVar25 = iVar25 + -1;
            lVar26 = lVar26 + -1;
            pFVar27 = pFVar27 + -1;
          } while (0 < lVar26);
        }
        return;
      }
      iVar24 = iVar30 + -1;
      iVar25 = iVar29 + -2;
      iVar29 = iVar25;
      iVar30 = iVar24;
    }
    iVar25 = iVar24 * 2;
    iVar28 = iVar25 + 1;
    if (iVar25 + 2 < param_2) {
      if (param_1[iVar28].TotalTime <= param_1[(longlong)iVar25 + 2].TotalTime &&
          param_1[(longlong)iVar25 + 2].TotalTime != param_1[iVar28].TotalTime) {
        iVar28 = iVar25;
      }
      iVar28 = iVar28 + 1;
    }
    if (param_1[iVar24].TotalTime < param_1[iVar28].TotalTime ||
        param_1[iVar24].TotalTime == param_1[iVar28].TotalTime) goto LAB_147e9d661;
    pFVar27 = param_1 + iVar28;
    iVar11 = (pFVar27->ObjectPathName).Data.ArrayNum;
    iVar12 = (pFVar27->ObjectPathName).Data.ArrayMax;
    iVar25 = iVar28 * 2 + 1;
    pFVar9 = param_1 + iVar24;
    iVar18 = pFVar9->Count;
    bVar19 = pFVar9->bForSummary;
    uVar20 = *(undefined3 *)&pFVar9->field_0x35;
    pFVar9 = param_1 + iVar24;
    pFVar4 = (pFVar9->ObjectPathName).Data.AllocatorInstance.Data;
    iVar14 = (pFVar9->ObjectPathName).Data.ArrayNum;
    iVar15 = (pFVar9->ObjectPathName).Data.ArrayMax;
    pFVar1 = &param_1[iVar24].ObjectDetailedInfo;
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    iVar16 = (pFVar1->Data).ArrayNum;
    iVar17 = (pFVar1->Data).ArrayMax;
    FVar6 = param_1[iVar24].ObjectClassFName;
    uVar7 = (&param_1[iVar24].ObjectClassFName)[1];
    pFVar9 = param_1 + iVar24;
    (pFVar9->ObjectPathName).Data.AllocatorInstance.Data =
         (pFVar27->ObjectPathName).Data.AllocatorInstance.Data;
    (pFVar9->ObjectPathName).Data.ArrayNum = iVar11;
    (pFVar9->ObjectPathName).Data.ArrayMax = iVar12;
    pFVar1 = &param_1[iVar28].ObjectDetailedInfo;
    iVar11 = (pFVar1->Data).ArrayNum;
    iVar12 = (pFVar1->Data).ArrayMax;
    pFVar2 = &param_1[iVar24].ObjectDetailedInfo;
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar2->Data).ArrayNum = iVar11;
    (pFVar2->Data).ArrayMax = iVar12;
    uVar8 = (&param_1[iVar28].ObjectClassFName)[1];
    param_1[iVar24].ObjectClassFName = param_1[iVar28].ObjectClassFName;
    (&param_1[iVar24].ObjectClassFName)[1] = (FName)uVar8;
    pFVar27 = param_1 + iVar28;
    bVar23 = pFVar27->bForSummary;
    uVar13 = *(undefined3 *)&pFVar27->field_0x35;
    pFVar9 = param_1 + iVar24;
    pFVar9->Count = pFVar27->Count;
    pFVar9->bForSummary = bVar23;
    *(undefined3 *)&pFVar9->field_0x35 = uVar13;
    pFVar27 = param_1 + iVar28;
    (pFVar27->ObjectPathName).Data.AllocatorInstance.Data = pFVar4;
    (pFVar27->ObjectPathName).Data.ArrayNum = iVar14;
    (pFVar27->ObjectPathName).Data.ArrayMax = iVar15;
    pFVar1 = &param_1[iVar28].ObjectDetailedInfo;
    (pFVar1->Data).AllocatorInstance.Data = pFVar5;
    (pFVar1->Data).ArrayNum = iVar16;
    (pFVar1->Data).ArrayMax = iVar17;
    param_1[iVar28].ObjectClassFName = FVar6;
    (&param_1[iVar28].ObjectClassFName)[1] = (FName)uVar7;
    pFVar27 = param_1 + iVar28;
    pFVar27->Count = iVar18;
    pFVar27->bForSummary = bVar19;
    *(undefined3 *)&pFVar27->field_0x35 = uVar20;
    iVar24 = iVar28;
  } while( true );
}

// InternalConstructor<ALODActor> @ 147e9d7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALODActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ALODActor *this;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UStaticMeshComponent *pUVar6;
  float fVar7;
  FName local_res8;
  
  this = (ALODActor *)param_1->Obj;
  if (this != (ALODActor *)0x0) {
    AActor::AActor((AActor *)this,param_1);
    this->_padding_ = (longlong)&___7ALODActor__6B_;
    (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
    *(undefined8 *)&this->InstancedStaticMeshComponents = 0;
    *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x8 = 0;
    *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x20 = 0;
    *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x28 = 0;
    *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x2c = 0x80;
    *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x34 = 0;
    *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x40 = 0;
    *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x48 = 0;
    (this->Proxy).field0_0x0.DebugPtr = (UHLODProxy *)0x0;
    (this->Key).ComparisonIndex = 0;
    (this->Key).Number = 0;
    (this->SubActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SubActors).ArrayNum = 0;
    (this->SubActors).ArrayMax = 0;
    this->bHasActorTriedToRegisterComponents = '\0';
    this->LODDrawDistance = 5000.0;
    AActor::SetCanBeDamaged((AActor *)this,false);
    *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf3 | 3
    ;
    pFVar4 = FName::FName(&local_res8,L"StaticMeshComponent0");
    FVar3 = *pFVar4;
    pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    pUVar6 = (UStaticMeshComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UStaticMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->StaticMeshComponent).field0_0x0.DebugPtr = pUVar6;
    (**(code **)(pUVar6->_padding_ + 0x788))(pUVar6,UCollisionProfile::NoCollision_ProfileName,1);
    *(undefined1 *)((longlong)&pUVar6->_padding_ + 3) = 0;
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)pUVar6,false);
    pbVar1 = (byte *)((longlong)&pUVar6->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0x9e;
    pbVar1 = (byte *)((longlong)&pUVar6->_padding_ + 4);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)&pUVar6->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    fVar7 = ALODActor::GetLODDrawDistanceWithOverride(this);
    *(float *)&pUVar6->_padding_ = fVar7;
    this->bHasPatchedUpParent = '\0';
    this->bNeedsDrawDistanceReset = '\0';
    this->ResetDrawDistanceTime = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (this->StaticMeshComponent).field0_0x0.DebugPtr,
       pUVar6 != (UStaticMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    this->_padding_ = (longlong)(this->StaticMeshComponent).field0_0x0;
    this->bCachedIsBuilt = '\0';
    this->LastIsBuiltTime = 0.0;
    this->CachedNumHLODLevels = '\x01';
  }
  return;
}

// InternalConstructor<ALevelStreamingVolume> @ 147e9d990

void __cdecl InternalConstructor<ALevelStreamingVolume>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ALevelStreamingVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
    pbVar1 = (byte *)(*(longlong *)&this->field_0x2d8 + 0x27b);
    *pbVar1 = *pbVar1 | 4;
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
    *(undefined2 *)&this->field_0x2c5 = 0xffa5;
    this->field_0x2c4 = 0;
    this->field_0x2c7 = 0xff;
    this[1].field_0x14 = 1;
  }
  return;
}

// InternalConstructor<ALight> @ 147e9da20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl InternalConstructor<ALight>(FObjectInitializer *param_1)

{
  if ((ALight *)param_1->Obj != (ALight *)0x0) {
    ALight::ALight((ALight *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ALightWeightInstanceManager> @ 147e9da40

void __cdecl InternalConstructor<ALightWeightInstanceManager>(FObjectInitializer *param_1)

{
  if ((ALightWeightInstanceManager *)param_1->Obj != (ALightWeightInstanceManager *)0x0) {
    ALightWeightInstanceManager::ALightWeightInstanceManager
              ((ALightWeightInstanceManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ALightWeightInstanceStaticMeshManager> @ 147e9da60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<ALightWeightInstanceStaticMeshManager>(FObjectInitializer *param_1)

{
  if ((ALightWeightInstanceStaticMeshManager *)param_1->Obj !=
      (ALightWeightInstanceStaticMeshManager *)0x0) {
    ALightWeightInstanceStaticMeshManager::ALightWeightInstanceStaticMeshManager
              ((ALightWeightInstanceStaticMeshManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ALightmassCharacterIndirectDetailVolume> @ 147e9da80

void __cdecl
InternalConstructor<ALightmassCharacterIndirectDetailVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ALightmassCharacterIndirectDetailVolume__6B_;
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
    *(undefined2 *)&this->field_0x2c5 = 0x9bb9;
    this->field_0x2c4 = 0x19;
    this->field_0x2c7 = 0xff;
  }
  return;
}

// InternalConstructor<ALightmassImportanceVolume> @ 147e9daf0

void __cdecl InternalConstructor<ALightmassImportanceVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ALightmassImportanceVolume__6B_;
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
    *(undefined2 *)&this->field_0x2c5 = 0xffff;
    this->field_0x2c4 = 0x19;
    this->field_0x2c7 = 0xff;
  }
  return;
}

// InternalConstructor<ALocationVolume> @ 147e9db60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<ALocationVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &ALocationVolume::_vftable__for__AVolume__;
    *(undefined ***)(this + 1) =
         &ALocationVolume::_vftable__for__IWorldPartitionActorLoaderInterface__;
    UPrimitiveComponent::SetGenerateOverlapEvents(*(UPrimitiveComponent **)&this->field_0x2d8,false)
    ;
    AActor::SetActorEnableCollision((AActor *)this,false);
    return;
  }
  return;
}

// InternalConstructor<AMaterialInstanceActor> @ 147e9dbc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AMaterialInstanceActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AMaterialInstanceActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"SceneComp");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// InternalConstructor<ULightWeightInstanceBlueprintFunctionLibrary> @ 147e9dc70

void __cdecl
InternalConstructor<ULightWeightInstanceBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULightWeightInstanceBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<ULightmappedSurfaceCollection> @ 147e9dca0

void __cdecl InternalConstructor<ULightmappedSurfaceCollection>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULightmappedSurfaceCollection__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULightmassPrimitiveSettingsObject> @ 147e9dce0

void __cdecl InternalConstructor<ULightmassPrimitiveSettingsObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULightmassPrimitiveSettingsObject__6B_;
    *(uint *)(this + 1) = *(uint *)(this + 1) & 0xfffffff0;
    *(undefined8 *)&this[1].field_0x4 = 0x41000000;
    *(undefined4 *)&this[1].field_0xc = 0x3f800000;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
  }
  return;
}

// InternalConstructor<ULocalMessage> @ 147e9dd30

void __cdecl InternalConstructor<ULocalMessage>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULocalMessage__6B_;
  }
  return;
}

// InternalConstructor<ULocalPlayer> @ 147e9dd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<ULocalPlayer>(FObjectInitializer *param_1)

{
  UPlayer *this;
  UClass *pUVar1;
  
  this = (UPlayer *)param_1->Obj;
  if (this != (UPlayer *)0x0) {
    UPlayer::UPlayer(this,param_1);
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&ULocalPlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULocalPlayer::_vftable__for__FExec__;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PlayerController.field0_0x0.DebugPtr = (APlayerController *)0x0;
    *(undefined8 *)&this[2].ConfiguredLanSpeed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].PlayerController.field0_0x0.DebugPtr = (APlayerController *)0x0;
    this[3].CurrentNetSpeed = 2;
    this[3].ConfiguredInternetSpeed = 0;
    this[3].ConfiguredLanSpeed = 0;
    *(undefined4 *)&this[3].field_0x44 = 0xffffffff;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 2;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].PlayerController.field0_0x0.DebugPtr = (APlayerController *)0x0;
    this[4].CurrentNetSpeed = 2;
    this[4].ConfiguredInternetSpeed = 0;
    pUVar1 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
    FSubsystemCollectionBase::FSubsystemCollectionBase
              ((FSubsystemCollectionBase *)&this[4].ConfiguredLanSpeed,pUVar1);
    *(undefined ***)&this[4].ConfiguredLanSpeed =
         &___7__FObjectSubsystemCollection_VULocalPlayerSubsystem____6B_;
    FReply::FReply((FReply *)&this[7].PlayerController,false);
    pUVar1 = Z_Construct_UClass_APlayerController_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UClass **)&this[2].ConfiguredLanSpeed = pUVar1;
    *(TVector2<double>_u_0 *)&this[2]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  return;
}

// InternalConstructor<UMaterialCacheVirtualTexture> @ 147e9ded0

void __cdecl InternalConstructor<UMaterialCacheVirtualTexture>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ =
         (longlong)&UMaterialCacheVirtualTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UMaterialCacheVirtualTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UMaterialCacheVirtualTexture::_vftable__for__IInterface_AsyncCompilation__;
    this->VirtualTextureStreaming = '\0';
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 8;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 8;
  }
  return;
}

// InternalConstructor<UMaterialCacheVirtualTextureTag> @ 147e9df60

void __cdecl InternalConstructor<UMaterialCacheVirtualTextureTag>(FObjectInitializer *param_1)

{
  TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UMaterialCacheVirtualTextureTag *this;
  FScriptContainerElement *pFVar3;
  
  this = (UMaterialCacheVirtualTextureTag *)param_1->Obj;
  if (this != (UMaterialCacheVirtualTextureTag *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    pTVar1 = &this->Attributes;
    this->_padding_ = (longlong)&___7UMaterialCacheVirtualTextureTag__6B_;
    piVar2 = &(this->Attributes).ArrayMax;
    (this->TileCountMultiplier).field0_0x0._s_0.X = 1;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Attributes).ArrayNum = 0;
    *piVar2 = 0;
    (this->RuntimeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RuntimeLayers).ArrayNum = 0;
    (this->RuntimeLayers).ArrayMax = 0;
    (this->TileCountMultiplier).field0_0x0._s_0.Y = 1;
    FGuid::NewGuid(&this->Guid);
    (this->Attributes).ArrayNum = 6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,6,*piVar2,&pTVar1->AllocatorInstance,6,piVar2);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(undefined4 *)pFVar3 = DefaultMaterialCacheAttributes._0_4_;
    *(undefined2 *)(pFVar3 + 4) = DefaultMaterialCacheAttributes._4_2_;
    UMaterialCacheVirtualTextureTag::PackRuntimeLayers(this);
  }
  return;
}

// InternalVTableHelperCtorCaller<ALODActor> @ 147e9e030

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

UObject * __cdecl InternalVTableHelperCtorCaller<ALODActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALODActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALODActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick.Target = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALevelStreamingVolume> @ 147e9e150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelStreamingVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelStreamingVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ALevelStreamingVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALight> @ 147e9e210

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

UObject * __cdecl InternalVTableHelperCtorCaller<ALight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALight::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALight__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALightWeightInstanceManager> @ 147e9e2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ALightWeightInstanceManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALightWeightInstanceManager *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALightWeightInstanceManager::GetPrivateStaticClass();
  pAVar3 = (ALightWeightInstanceManager *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (ALightWeightInstanceManager *)0x0) {
    pAVar3 = ALightWeightInstanceManager::ALightWeightInstanceManager(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALightWeightInstanceStaticMeshManager> @ 147e9e370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ALightWeightInstanceStaticMeshManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALightWeightInstanceManager *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALightWeightInstanceStaticMeshManager::GetPrivateStaticClass();
  this = (ALightWeightInstanceManager *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ALightWeightInstanceManager *)0x0) {
    ALightWeightInstanceManager::ALightWeightInstanceManager(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&ALightWeightInstanceStaticMeshManager::_vftable__for__AActor__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &ALightWeightInstanceStaticMeshManager::_vftable__for__IActorInstanceManagerInterface__;
    this[1]._padding_ = (longlong)&___7ALightWeightInstanceStaticMeshManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALightmassCharacterIndirectDetailVolume> @ 147e9e4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ALightmassCharacterIndirectDetailVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALightmassCharacterIndirectDetailVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ALightmassCharacterIndirectDetailVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALightmassImportanceVolume> @ 147e9e550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALightmassImportanceVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALightmassImportanceVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ALightmassImportanceVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ALocationVolume> @ 147e9e600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALocationVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALocationVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &ALocationVolume::_vftable__for__AVolume__;
    *(undefined ***)(this + 1) =
         &ALocationVolume::_vftable__for__IWorldPartitionActorLoaderInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AMaterialInstanceActor> @ 147e9e6c0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AMaterialInstanceActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AMaterialInstanceActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AMaterialInstanceActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULightWeightInstanceBlueprintFunctionLibrary> @ 147e9e780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULightWeightInstanceBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULightWeightInstanceBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULightWeightInstanceBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULightmappedSurfaceCollection> @ 147e9e830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULightmappedSurfaceCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULightmappedSurfaceCollection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULightmappedSurfaceCollection__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULightmassPrimitiveSettingsObject> @ 147e9e8f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULightmassPrimitiveSettingsObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULightmassPrimitiveSettingsObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULightmassPrimitiveSettingsObject__6B_;
    *(uint *)(pUVar1 + 1) = *(uint *)(pUVar1 + 1) & 0xfffffff0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0x41000000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULocalMessage> @ 147e9e9c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocalMessage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocalMessage::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocalMessage__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULocalPlayer> @ 147e9ea70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocalPlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPlayer *this;
  UPlayer *pUVar3;
  
  pUVar3 = (UPlayer *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocalPlayer::GetPrivateStaticClass();
  this = (UPlayer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPlayer *)0x0) {
    UPlayer::UPlayer(this,param_1);
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&ULocalPlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&ULocalPlayer::_vftable__for__FExec__;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PlayerController.field0_0x0.DebugPtr = (APlayerController *)0x0;
    *(undefined8 *)&this[2].ConfiguredLanSpeed = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].PlayerController.field0_0x0.DebugPtr = (APlayerController *)0x0;
    this[3].CurrentNetSpeed = 2;
    this[3].ConfiguredInternetSpeed = 0;
    this[3].ConfiguredLanSpeed = 0;
    *(undefined4 *)&this[3].field_0x44 = 0xffffffff;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 2;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].PlayerController.field0_0x0.DebugPtr = (APlayerController *)0x0;
    this[4].CurrentNetSpeed = 2;
    this[4].ConfiguredInternetSpeed = 0;
    pUVar2 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
    FSubsystemCollectionBase::FSubsystemCollectionBase
              ((FSubsystemCollectionBase *)&this[4].ConfiguredLanSpeed,pUVar2);
    *(undefined ***)&this[4].ConfiguredLanSpeed =
         &___7__FObjectSubsystemCollection_VULocalPlayerSubsystem____6B_;
    FReply::FReply((FReply *)&this[7].PlayerController,false);
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UMaterialCacheVirtualTexture> @ 147e9ec10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialCacheVirtualTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialCacheVirtualTexture::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMaterialCacheVirtualTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UMaterialCacheVirtualTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UMaterialCacheVirtualTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 8;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 8;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMaterialCacheVirtualTextureTag> @ 147e9ed10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialCacheVirtualTextureTag>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialCacheVirtualTextureTag::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMaterialCacheVirtualTextureTag__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 1;
    *(undefined4 *)&pUVar1[1].field_0x14 = 1;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    FGuid::NewGuid((FGuid *)(pUVar1 + 2));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_> @ 147e9edf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_>
          (FTickStats *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTickStats,FTickStats> param_4)

{
  FTickStats *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined3 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  bool bVar19;
  undefined3 uVar20;
  FTickStats *pFVar21;
  int iVar22;
  FTickStats *pFVar23;
  FTickStats *pFVar24;
  FTickStats *pFVar25;
  FTickStats *pFVar26;
  FTickStats *pFVar27;
  FTickStats **ppFVar28;
  float fVar29;
  undefined1 auStack_378 [48];
  FTickStats *local_348;
  FTickStats *local_338;
  FTickStats *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar29 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar29;
    memset(local_320,0,0x2e8);
    ppFVar28 = &local_338;
    do {
      pFVar24 = ppFVar28[1];
      pFVar23 = *ppFVar28;
      pFVar1 = ppFVar28[2];
      local_348._0_4_ = (int)pFVar1;
      iVar22 = (int)(((longlong)pFVar24 - (longlong)pFVar23) / 0x38) + 1;
      pFVar27 = pFVar23;
      if ((int)local_348 != 0) {
LAB_147e9eec0:
        if (8 < iVar22) {
          iVar8 = (pFVar27->ObjectPathName).Data.ArrayNum;
          iVar9 = (pFVar27->ObjectPathName).Data.ArrayMax;
          pFVar21 = pFVar24 + 1;
          pFVar23 = pFVar27 + iVar22 / 2;
          pFVar2 = (pFVar23->ObjectPathName).Data.AllocatorInstance.Data;
          iVar12 = (pFVar23->ObjectPathName).Data.ArrayNum;
          iVar13 = (pFVar23->ObjectPathName).Data.ArrayMax;
          pFVar3 = (pFVar23->ObjectDetailedInfo).Data.AllocatorInstance.Data;
          iVar14 = (pFVar23->ObjectDetailedInfo).Data.ArrayNum;
          iVar15 = (pFVar23->ObjectDetailedInfo).Data.ArrayMax;
          FVar4 = pFVar23->ObjectClassFName;
          iVar16 = pFVar23->GCIndex;
          fVar17 = pFVar23->TotalTime;
          iVar18 = pFVar23->Count;
          bVar19 = pFVar23->bForSummary;
          uVar20 = *(undefined3 *)&pFVar23->field_0x35;
          (pFVar23->ObjectPathName).Data.AllocatorInstance.Data =
               (pFVar27->ObjectPathName).Data.AllocatorInstance.Data;
          (pFVar23->ObjectPathName).Data.ArrayNum = iVar8;
          (pFVar23->ObjectPathName).Data.ArrayMax = iVar9;
          iVar22 = (pFVar27->ObjectDetailedInfo).Data.ArrayNum;
          iVar8 = (pFVar27->ObjectDetailedInfo).Data.ArrayMax;
          (pFVar23->ObjectDetailedInfo).Data.AllocatorInstance.Data =
               (pFVar27->ObjectDetailedInfo).Data.AllocatorInstance.Data;
          (pFVar23->ObjectDetailedInfo).Data.ArrayNum = iVar22;
          (pFVar23->ObjectDetailedInfo).Data.ArrayMax = iVar8;
          iVar22 = pFVar27->GCIndex;
          fVar29 = pFVar27->TotalTime;
          pFVar23->ObjectClassFName = pFVar27->ObjectClassFName;
          pFVar23->GCIndex = iVar22;
          pFVar23->TotalTime = fVar29;
          bVar10 = pFVar27->bForSummary;
          uVar11 = *(undefined3 *)&pFVar27->field_0x35;
          pFVar23->Count = pFVar27->Count;
          pFVar23->bForSummary = bVar10;
          *(undefined3 *)&pFVar23->field_0x35 = uVar11;
          (pFVar27->ObjectPathName).Data.AllocatorInstance.Data = pFVar2;
          (pFVar27->ObjectPathName).Data.ArrayNum = iVar12;
          (pFVar27->ObjectPathName).Data.ArrayMax = iVar13;
          (pFVar27->ObjectDetailedInfo).Data.AllocatorInstance.Data = pFVar3;
          (pFVar27->ObjectDetailedInfo).Data.ArrayNum = iVar14;
          (pFVar27->ObjectDetailedInfo).Data.ArrayMax = iVar15;
          pFVar27->ObjectClassFName = FVar4;
          pFVar27->GCIndex = iVar16;
          pFVar27->TotalTime = fVar17;
          pFVar27->Count = iVar18;
          pFVar27->bForSummary = bVar19;
          *(undefined3 *)&pFVar27->field_0x35 = uVar20;
          pFVar23 = pFVar27;
LAB_147e9ef30:
          pFVar25 = pFVar23;
          pFVar23 = pFVar25 + 1;
          if (pFVar23 <= pFVar24) goto code_r0x000147e9ef39;
          goto LAB_147e9ef46;
        }
        if (pFVar27 < pFVar24) {
          pFVar1 = pFVar27 + 1;
          do {
            pFVar23 = pFVar27;
            if (pFVar1 <= pFVar24) {
              pFVar21 = pFVar1;
              if (0xdf < (ulonglong)((longlong)pFVar24 + (0x38 - (longlong)pFVar1))) {
                do {
                  if (pFVar21->TotalTime < pFVar23->TotalTime) {
                    pFVar23 = pFVar21;
                  }
                  if (pFVar21[1].TotalTime <= pFVar23->TotalTime &&
                      pFVar23->TotalTime != pFVar21[1].TotalTime) {
                    pFVar23 = pFVar21 + 1;
                  }
                  if (pFVar21[2].TotalTime <= pFVar23->TotalTime &&
                      pFVar23->TotalTime != pFVar21[2].TotalTime) {
                    pFVar23 = pFVar21 + 2;
                  }
                  if (pFVar21[3].TotalTime <= pFVar23->TotalTime &&
                      pFVar23->TotalTime != pFVar21[3].TotalTime) {
                    pFVar23 = pFVar21 + 3;
                  }
                  pFVar21 = pFVar21 + 4;
                } while (pFVar21 <= pFVar24 + -3);
              }
              for (; pFVar21 <= pFVar24; pFVar21 = pFVar21 + 1) {
                if (pFVar21->TotalTime < pFVar23->TotalTime) {
                  pFVar23 = pFVar21;
                }
              }
            }
            pFVar2 = (pFVar23->ObjectPathName).Data.AllocatorInstance.Data;
            iVar9 = (pFVar23->ObjectPathName).Data.ArrayNum;
            iVar12 = (pFVar23->ObjectPathName).Data.ArrayMax;
            pFVar21 = pFVar24 + -1;
            iVar16 = pFVar23->Count;
            bVar19 = pFVar23->bForSummary;
            uVar20 = *(undefined3 *)&pFVar23->field_0x35;
            pFVar3 = (pFVar23->ObjectDetailedInfo).Data.AllocatorInstance.Data;
            iVar13 = (pFVar23->ObjectDetailedInfo).Data.ArrayNum;
            iVar14 = (pFVar23->ObjectDetailedInfo).Data.ArrayMax;
            iVar22 = (pFVar24->ObjectPathName).Data.ArrayNum;
            iVar8 = (pFVar24->ObjectPathName).Data.ArrayMax;
            FVar4 = pFVar23->ObjectClassFName;
            iVar15 = pFVar23->GCIndex;
            fVar17 = pFVar23->TotalTime;
            (pFVar23->ObjectPathName).Data.AllocatorInstance.Data =
                 (pFVar24->ObjectPathName).Data.AllocatorInstance.Data;
            (pFVar23->ObjectPathName).Data.ArrayNum = iVar22;
            (pFVar23->ObjectPathName).Data.ArrayMax = iVar8;
            iVar22 = (pFVar24->ObjectDetailedInfo).Data.ArrayNum;
            iVar8 = (pFVar24->ObjectDetailedInfo).Data.ArrayMax;
            (pFVar23->ObjectDetailedInfo).Data.AllocatorInstance.Data =
                 (pFVar24->ObjectDetailedInfo).Data.AllocatorInstance.Data;
            (pFVar23->ObjectDetailedInfo).Data.ArrayNum = iVar22;
            (pFVar23->ObjectDetailedInfo).Data.ArrayMax = iVar8;
            iVar22 = pFVar24->GCIndex;
            fVar29 = pFVar24->TotalTime;
            pFVar23->ObjectClassFName = pFVar24->ObjectClassFName;
            pFVar23->GCIndex = iVar22;
            pFVar23->TotalTime = fVar29;
            bVar10 = pFVar24->bForSummary;
            uVar11 = *(undefined3 *)&pFVar24->field_0x35;
            pFVar23->Count = pFVar24->Count;
            pFVar23->bForSummary = bVar10;
            *(undefined3 *)&pFVar23->field_0x35 = uVar11;
            (pFVar24->ObjectPathName).Data.AllocatorInstance.Data = pFVar2;
            (pFVar24->ObjectPathName).Data.ArrayNum = iVar9;
            (pFVar24->ObjectPathName).Data.ArrayMax = iVar12;
            (pFVar24->ObjectDetailedInfo).Data.AllocatorInstance.Data = pFVar3;
            (pFVar24->ObjectDetailedInfo).Data.ArrayNum = iVar13;
            (pFVar24->ObjectDetailedInfo).Data.ArrayMax = iVar14;
            pFVar24->ObjectClassFName = FVar4;
            pFVar24->GCIndex = iVar15;
            pFVar24->TotalTime = fVar17;
            pFVar24->Count = iVar16;
            pFVar24->bForSummary = bVar19;
            *(undefined3 *)&pFVar24->field_0x35 = uVar20;
            pFVar24 = pFVar21;
          } while (pFVar27 < pFVar21);
        }
        goto LAB_147e9f0be;
      }
LAB_147e9f0af:
      local_348 = pFVar1;
      HeapSortInternal<FTickStats,int,FIdentityFunctor,TDereferenceWrapper<FTickStats,FTickStats>_>
                (pFVar23,iVar22,param_3,param_4);
LAB_147e9f0be:
      ppFVar28 = ppFVar28 + -3;
    } while (&local_338 <= ppFVar28);
  }
  return;
code_r0x000147e9ef39:
  if (pFVar27->TotalTime < pFVar25[1].TotalTime || pFVar27->TotalTime == pFVar25[1].TotalTime)
  goto LAB_147e9ef30;
LAB_147e9ef46:
  do {
    pFVar26 = pFVar21;
    pFVar21 = pFVar26 + -1;
    if (pFVar21 <= pFVar27) break;
  } while (pFVar26[-1].TotalTime < pFVar27->TotalTime || pFVar26[-1].TotalTime == pFVar27->TotalTime
          );
  pFVar2 = (pFVar21->ObjectPathName).Data.AllocatorInstance.Data;
  uVar5 = pFVar26[-1].ObjectPathName.Data.ArrayNum;
  uVar6 = pFVar26[-1].ObjectPathName.Data.ArrayMax;
  if (pFVar23 <= pFVar21) {
    pFVar3 = (pFVar23->ObjectPathName).Data.AllocatorInstance.Data;
    iVar9 = pFVar25[1].ObjectPathName.Data.ArrayNum;
    iVar12 = pFVar25[1].ObjectPathName.Data.ArrayMax;
    pFVar7 = pFVar25[1].ObjectDetailedInfo.Data.AllocatorInstance.Data;
    iVar13 = pFVar25[1].ObjectDetailedInfo.Data.ArrayNum;
    iVar14 = pFVar25[1].ObjectDetailedInfo.Data.ArrayMax;
    FVar4 = pFVar25[1].ObjectClassFName;
    iVar15 = pFVar25[1].GCIndex;
    fVar17 = pFVar25[1].TotalTime;
    iVar16 = pFVar25[1].Count;
    bVar19 = pFVar25[1].bForSummary;
    uVar20 = *(undefined3 *)&pFVar25[1].field_0x35;
    (pFVar23->ObjectPathName).Data.AllocatorInstance.Data = pFVar2;
    pFVar25[1].ObjectPathName.Data.ArrayNum = uVar5;
    pFVar25[1].ObjectPathName.Data.ArrayMax = uVar6;
    iVar22 = pFVar26[-1].ObjectDetailedInfo.Data.ArrayNum;
    iVar8 = pFVar26[-1].ObjectDetailedInfo.Data.ArrayMax;
    pFVar25[1].ObjectDetailedInfo.Data.AllocatorInstance.Data =
         pFVar26[-1].ObjectDetailedInfo.Data.AllocatorInstance.Data;
    pFVar25[1].ObjectDetailedInfo.Data.ArrayNum = iVar22;
    pFVar25[1].ObjectDetailedInfo.Data.ArrayMax = iVar8;
    iVar22 = pFVar26[-1].GCIndex;
    fVar29 = pFVar26[-1].TotalTime;
    pFVar25[1].ObjectClassFName = pFVar26[-1].ObjectClassFName;
    pFVar25[1].GCIndex = iVar22;
    pFVar25[1].TotalTime = fVar29;
    bVar10 = pFVar26[-1].bForSummary;
    uVar11 = *(undefined3 *)&pFVar26[-1].field_0x35;
    pFVar25[1].Count = pFVar26[-1].Count;
    pFVar25[1].bForSummary = bVar10;
    *(undefined3 *)&pFVar25[1].field_0x35 = uVar11;
    (pFVar21->ObjectPathName).Data.AllocatorInstance.Data = pFVar3;
    pFVar26[-1].ObjectPathName.Data.ArrayNum = iVar9;
    pFVar26[-1].ObjectPathName.Data.ArrayMax = iVar12;
    pFVar26[-1].ObjectDetailedInfo.Data.AllocatorInstance.Data = pFVar7;
    pFVar26[-1].ObjectDetailedInfo.Data.ArrayNum = iVar13;
    pFVar26[-1].ObjectDetailedInfo.Data.ArrayMax = iVar14;
    pFVar26[-1].ObjectClassFName = FVar4;
    pFVar26[-1].GCIndex = iVar15;
    pFVar26[-1].TotalTime = fVar17;
    pFVar26[-1].Count = iVar16;
    pFVar26[-1].bForSummary = bVar19;
    *(undefined3 *)&pFVar26[-1].field_0x35 = uVar20;
    goto LAB_147e9ef30;
  }
  pFVar3 = (pFVar27->ObjectPathName).Data.AllocatorInstance.Data;
  iVar9 = (pFVar27->ObjectPathName).Data.ArrayNum;
  iVar12 = (pFVar27->ObjectPathName).Data.ArrayMax;
  pFVar7 = (pFVar27->ObjectDetailedInfo).Data.AllocatorInstance.Data;
  iVar13 = (pFVar27->ObjectDetailedInfo).Data.ArrayNum;
  iVar14 = (pFVar27->ObjectDetailedInfo).Data.ArrayMax;
  local_348._0_4_ = (int)local_348 + -1;
  FVar4 = pFVar27->ObjectClassFName;
  iVar15 = pFVar27->GCIndex;
  fVar17 = pFVar27->TotalTime;
  iVar16 = pFVar27->Count;
  bVar19 = pFVar27->bForSummary;
  uVar20 = *(undefined3 *)&pFVar27->field_0x35;
  (pFVar27->ObjectPathName).Data.AllocatorInstance.Data = pFVar2;
  (pFVar27->ObjectPathName).Data.ArrayNum = uVar5;
  (pFVar27->ObjectPathName).Data.ArrayMax = uVar6;
  iVar22 = pFVar26[-1].ObjectDetailedInfo.Data.ArrayNum;
  iVar8 = pFVar26[-1].ObjectDetailedInfo.Data.ArrayMax;
  (pFVar27->ObjectDetailedInfo).Data.AllocatorInstance.Data =
       pFVar26[-1].ObjectDetailedInfo.Data.AllocatorInstance.Data;
  (pFVar27->ObjectDetailedInfo).Data.ArrayNum = iVar22;
  (pFVar27->ObjectDetailedInfo).Data.ArrayMax = iVar8;
  iVar22 = pFVar26[-1].GCIndex;
  fVar29 = pFVar26[-1].TotalTime;
  pFVar27->ObjectClassFName = pFVar26[-1].ObjectClassFName;
  pFVar27->GCIndex = iVar22;
  pFVar27->TotalTime = fVar29;
  bVar10 = pFVar26[-1].bForSummary;
  uVar11 = *(undefined3 *)&pFVar26[-1].field_0x35;
  pFVar27->Count = pFVar26[-1].Count;
  pFVar27->bForSummary = bVar10;
  *(undefined3 *)&pFVar27->field_0x35 = uVar11;
  (pFVar21->ObjectPathName).Data.AllocatorInstance.Data = pFVar3;
  pFVar26[-1].ObjectPathName.Data.ArrayNum = iVar9;
  pFVar26[-1].ObjectPathName.Data.ArrayMax = iVar12;
  pFVar26[-1].ObjectDetailedInfo.Data.AllocatorInstance.Data = pFVar7;
  pFVar26[-1].ObjectDetailedInfo.Data.ArrayNum = iVar13;
  pFVar26[-1].ObjectDetailedInfo.Data.ArrayMax = iVar14;
  pFVar26[-1].ObjectClassFName = FVar4;
  pFVar26[-1].GCIndex = iVar15;
  pFVar26[-1].TotalTime = fVar17;
  pFVar26[-1].Count = iVar16;
  pFVar26[-1].bForSummary = bVar19;
  *(undefined3 *)&pFVar26[-1].field_0x35 = uVar20;
  if (((longlong)pFVar21 + (-0x38 - (longlong)pFVar27)) / 0x38 <
      ((longlong)pFVar24 - (longlong)pFVar23) / 0x38) {
    if (pFVar23 < pFVar24) {
      *ppFVar28 = pFVar23;
      ppFVar28[1] = pFVar24;
      *(int *)(ppFVar28 + 2) = (int)local_348;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar21 <= pFVar27 + 1) goto LAB_147e9f0be;
    pFVar24 = pFVar26 + -2;
    pFVar23 = pFVar27;
  }
  else {
    if (pFVar27 + 1 < pFVar21) {
      *ppFVar28 = pFVar27;
      ppFVar28[1] = pFVar26 + -2;
      *(int *)(ppFVar28 + 2) = (int)local_348;
      ppFVar28 = ppFVar28 + 3;
    }
    if (pFVar24 <= pFVar23) goto LAB_147e9f0be;
  }
  iVar22 = (int)(((longlong)pFVar24 - (longlong)pFVar23) / 0x38) + 1;
  pFVar27 = pFVar23;
  if ((int)local_348 == 0) goto LAB_147e9f0af;
  goto LAB_147e9eec0;
}

// IsObjectPtrEqual<AActor,AActor_const_*,0> @ 147e9f210

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
ObjectPtr_Private::IsObjectPtrEqual<AActor,AActor_const_*,0>
          (TObjectPtr<AActor> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AActor *)0x0) {
    return *param_2 == (AActor *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<APawn,AActor_const_*,0> @ 147e9f230

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
ObjectPtr_Private::IsObjectPtrEqual<APawn,AActor_const_*,0>
          (TObjectPtr<APawn> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APawn *)0x0) {
    return (APawn *)*param_2 == (APawn *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (APawn *)*param_2;
}

// IsObjectPtrEqual<APlayerState,AActor_const_*,0> @ 147e9f250

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
ObjectPtr_Private::IsObjectPtrEqual<APlayerState,AActor_const_*,0>
          (TObjectPtr<APlayerState> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (APlayerState *)0x0) {
    return (APlayerState *)*param_2 == (APlayerState *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (APlayerState *)*param_2;
}

// IsObjectPtrEqual<UActorComponent,UActorComponent_*,0> @ 147e9f270

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
ObjectPtr_Private::IsObjectPtrEqual<UActorComponent,UActorComponent_*,0>
          (TObjectPtr<UActorComponent> *param_1,UActorComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UActorComponent *)0x0) {
    return *param_2 == (UActorComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UInstancedStaticMeshComponent,UInstancedStaticMeshComponent_*,0> @ 147e9f290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UInstancedStaticMeshComponent,UInstancedStaticMeshComponent_*,0>
          (TObjectPtr<UInstancedStaticMeshComponent> *param_1,
          UInstancedStaticMeshComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UInstancedStaticMeshComponent *)0x0) {
    return *param_2 == (UInstancedStaticMeshComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// PackMaterialCacheAttributeLayers<TSizedDefaultAllocator<32>_> @ 147e9f2b0

void __cdecl
PackMaterialCacheAttributeLayers<TSizedDefaultAllocator<32>_>
          (TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMaterialCacheLayer,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  ulonglong uVar10;
  size_t sVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  EMaterialCacheAttribute local_res18 [8];
  undefined2 local_res20 [4];
  undefined4 local_e8;
  FScriptContainerElement local_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  EMaterialCacheAttribute local_d0 [4];
  undefined2 local_cc [2];
  EMaterialCacheAttribute local_c8 [4];
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  FScriptContainerElement local_bc;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  FScriptContainerElement local_a4;
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined4 local_90;
  FScriptContainerElement local_8c;
  ForAnyElementType local_88;
  undefined8 local_80;
  uint local_78;
  TArrayView<EMaterialCacheAttribute_const_,int> local_70;
  TArrayView<EMaterialCacheAttribute_const_,int> local_60;
  TArrayView<EMaterialCacheAttribute_const_,int> local_50;
  
  local_res18[0] = BaseColor;
  local_res18[1] = Roughness;
  local_70.DataPtr = local_res18;
  local_70.ArrayNum = 2;
  bVar7 = MaterialCacheAttributeIdentityTest(param_1,&local_70);
  if (bVar7) {
    local_c0 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 2;
    local_bc = (FScriptContainerElement)0x1;
    local_res20[0] = 0x200;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,2,0,&local_b8,2,(int *)((longlong)&local_b0 + 4));
    memcpy(local_b8.Data,local_res20,2);
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_c0 = 0x1040725;
    if (((pFVar3 <= (FScriptContainerElement *)&local_c0) &&
        ((FScriptContainerElement *)&local_c0 < pFVar3 + (longlong)param_2->ArrayMax * 0x18)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar6.Data = local_b8.Data;
    param_2->ArrayNum = iVar9 + 1;
    pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x18;
    *pFVar12 = local_c0._0_1_;
    pFVar3 = pFVar12 + 8;
    pFVar12[1] = local_c0._1_1_;
    pFVar12[2] = local_c0._2_1_;
    pFVar12[3] = local_c0._3_1_;
    pFVar12[4] = local_bc;
    *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
    sVar11 = (size_t)(int)local_b0;
    *(int *)(pFVar12 + 0x10) = (int)local_b0;
    if ((int)local_b0 == 0) {
      *(int *)(pFVar12 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_b0,0,(ForAnyElementType *)pFVar3,(int)local_b0,
                 (int *)(pFVar12 + 0x14));
      memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar6.Data,sVar11);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  local_60.DataPtr = local_c8;
  local_c8[0] = Normal;
  local_c8[1] = Specular;
  local_60.ArrayNum = 3;
  local_c8[2] = 5;
  bVar7 = MaterialCacheAttributeIdentityTest(param_1,&local_60);
  if (bVar7) {
    local_a8 = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 3;
    local_a4 = (FScriptContainerElement)0x2;
    local_c4 = 0x301;
    local_c2 = 5;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,3,0,&local_a0,3,(int *)((longlong)&local_98 + 4));
    memcpy(local_a0.Data,&local_c4,3);
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_a8 = CONCAT13(local_a8._3_1_,0x40712);
    if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)param_2->ArrayMax * 0x18)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar6.Data = local_a0.Data;
    param_2->ArrayNum = iVar9 + 1;
    pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x18;
    *pFVar12 = local_a8._0_1_;
    pFVar3 = pFVar12 + 8;
    pFVar12[1] = local_a8._1_1_;
    pFVar12[2] = local_a8._2_1_;
    pFVar12[3] = local_a8._3_1_;
    pFVar12[4] = local_a4;
    *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
    sVar11 = (size_t)(int)local_98;
    *(int *)(pFVar12 + 0x10) = (int)local_98;
    if ((int)local_98 == 0) {
      *(int *)(pFVar12 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_98,0,(ForAnyElementType *)pFVar3,(int)local_98,
                 (int *)(pFVar12 + 0x14));
      memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar6.Data,sVar11);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  local_50.DataPtr = local_d0;
  local_d0[0] = Metallic;
  local_d0[1] = WorldPosition;
  local_50.ArrayNum = 2;
  bVar7 = MaterialCacheAttributeIdentityTest(param_1,&local_50);
  if (bVar7) {
    local_90 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 2;
    local_8c = (FScriptContainerElement)0x3;
    local_cc[0] = 0x604;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,2,0,&local_88,2,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,local_cc,2);
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_90 = CONCAT13(local_90._3_1_,0x40725);
    if (((pFVar3 <= (FScriptContainerElement *)&local_90) &&
        ((FScriptContainerElement *)&local_90 < pFVar3 + (longlong)param_2->ArrayMax * 0x18)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar6.Data = local_88.Data;
    param_2->ArrayNum = iVar9 + 1;
    pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x18;
    *pFVar12 = local_90._0_1_;
    pFVar3 = pFVar12 + 8;
    pFVar12[1] = local_90._1_1_;
    pFVar12[2] = local_90._2_1_;
    pFVar12[3] = local_90._3_1_;
    pFVar12[4] = local_8c;
    *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
    sVar11 = (size_t)(int)local_80;
    *(int *)(pFVar12 + 0x10) = (int)local_80;
    if ((int)local_80 == 0) {
      *(int *)(pFVar12 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_80,0,(ForAnyElementType *)pFVar3,(int)local_80,
                 (int *)(pFVar12 + 0x14));
      memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar6.Data,sVar11);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  local_78 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_78;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar12 + uVar10;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EMaterialCacheAttribute,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar3) {
      return;
    }
    FVar2 = *pFVar12;
    local_e8 = 0;
    local_e4 = (FScriptContainerElement)0x0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_e0,(int *)((longlong)&local_d8 + 4));
    local_d8 = CONCAT44(local_d8._4_4_,iVar9 + 1);
    local_e0.Data[iVar9] = FVar2;
    switch(FVar2) {
    case (FScriptContainerElement)0x0:
      local_e8 = 0x100075d;
switchD_147e9f850_caseD_0:
      uVar8 = 3;
      break;
    case (FScriptContainerElement)0x1:
      local_e8 = CONCAT22(local_e8._2_2_,0x712);
switchD_147e9f850_caseD_1:
      uVar8 = 2;
      break;
    case (FScriptContainerElement)0x2:
    case (FScriptContainerElement)0x3:
    case (FScriptContainerElement)0x4:
    case (FScriptContainerElement)0x5:
      local_e8 = CONCAT22(local_e8._2_2_,0x547);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(FVar2) {
      case (FScriptContainerElement)0x0:
      case (FScriptContainerElement)0x6:
        goto switchD_147e9f850_caseD_0;
      case (FScriptContainerElement)0x1:
        goto switchD_147e9f850_caseD_1;
      default:
        goto switchD_147e9f850_caseD_2;
      }
    case (FScriptContainerElement)0x6:
      local_e8 = CONCAT22(local_e8._2_2_,0x75d);
      uVar8 = 3;
      break;
    case (FScriptContainerElement)0x7:
      local_e8 = CONCAT22(local_e8._2_2_,0x1515);
switchD_147e9f850_caseD_2:
      uVar8 = 1;
      break;
    case (FScriptContainerElement)0x8:
      local_e8 = CONCAT22(local_e8._2_2_,0x547);
      uVar8 = 1;
      break;
    case (FScriptContainerElement)0x9:
      local_e8 = CONCAT22(local_e8._2_2_,0xd0d);
      uVar8 = 1;
      break;
    default:
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\MaterialCache\\MaterialCacheAttribute.h"
                         ,0xb1,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = 0;
    }
    pFVar4 = (param_2->AllocatorInstance).Data;
    local_e8._0_3_ = CONCAT12(uVar8,(undefined2)local_e8);
    if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)param_2->ArrayMax * 0x18)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar6.Data = local_e0.Data;
    param_2->ArrayNum = iVar9 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x18;
    *pFVar1 = local_e8._0_1_;
    pFVar4 = pFVar1 + 8;
    pFVar1[1] = local_e8._1_1_;
    pFVar1[2] = local_e8._2_1_;
    pFVar1[3] = local_e8._3_1_;
    pFVar1[4] = local_e4;
    *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
    sVar11 = (size_t)(int)local_d8;
    *(int *)(pFVar1 + 0x10) = (int)local_d8;
    if ((int)local_d8 == 0) {
      *(undefined4 *)(pFVar1 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_d8,0,(ForAnyElementType *)pFVar4,(int)local_d8,
                 (int *)(pFVar1 + 0x14));
      memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,FVar6.Data,sVar11);
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    uVar10 = (ulonglong)local_78;
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// PackMaterialCacheAttributeLayers<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 147e9fa50

void __cdecl
PackMaterialCacheAttributeLayers<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMaterialCacheLayer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  FScriptContainerElement FVar4;
  ForElementType<FMaterialCacheLayer> FVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ForElementType<FMaterialCacheLayer> FVar13;
  size_t sVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  EMaterialCacheAttribute local_res18 [8];
  undefined2 local_res20 [4];
  undefined4 local_e8;
  uchar local_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  EMaterialCacheAttribute local_d0 [4];
  undefined2 local_cc [2];
  EMaterialCacheAttribute local_c8 [4];
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  uchar local_bc;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uchar local_a4;
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uchar local_8c;
  ForAnyElementType local_88;
  undefined8 local_80;
  uint local_78;
  TArrayView<EMaterialCacheAttribute_const_,int> local_70;
  TArrayView<EMaterialCacheAttribute_const_,int> local_60;
  TArrayView<EMaterialCacheAttribute_const_,int> local_50;
  
  local_res18[0] = BaseColor;
  local_res18[1] = Roughness;
  local_70.DataPtr = local_res18;
  local_70.ArrayNum = 2;
  bVar8 = MaterialCacheAttributeIdentityTest(param_1,&local_70);
  if (bVar8) {
    local_c0 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 2;
    local_bc = '\x01';
    local_res20[0] = 0x200;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,2,0,&local_b8,2,(int *)((longlong)&local_b0 + 4));
    memcpy(local_b8.Data,local_res20,2);
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_c0 = 0x1040725;
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    if ((ulonglong)FVar13 <= &local_c0) {
      FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
      if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar13 = FVar5;
      }
      if ((&local_c0 < (undefined4 *)((longlong)FVar13 + (longlong)param_2->ArrayMax * 0x18)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                         (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar7.Data = local_b8.Data;
    param_2->ArrayNum = iVar10 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    lVar11 = (longlong)iVar10;
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    *(undefined1 *)((longlong)FVar13 + lVar11 * 0x18) = (undefined1)local_c0;
    puVar1 = (uchar *)((longlong)FVar13 + 8) + lVar11 * 0x18;
    ((uchar *)((longlong)FVar13 + 1))[lVar11 * 0x18] = local_c0._1_1_;
    ((uchar *)((longlong)FVar13 + 2))[lVar11 * 0x18] = local_c0._2_1_;
    ((uchar *)((longlong)FVar13 + 3))[lVar11 * 0x18] = local_c0._3_1_;
    ((uchar *)((longlong)FVar13 + 4))[lVar11 * 0x18] = local_bc;
    puVar3 = puVar1 + 0xc;
    *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
    sVar14 = (size_t)(int)local_b0;
    *(int *)(puVar1 + 8) = (int)local_b0;
    if ((int)local_b0 == 0) {
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_b0,0,(ForAnyElementType *)puVar1,(int)local_b0,(int *)puVar3);
      memcpy(*(FScriptContainerElement **)puVar1,FVar7.Data,sVar14);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  local_60.DataPtr = local_c8;
  local_c8[0] = Normal;
  local_c8[1] = Specular;
  local_60.ArrayNum = 3;
  local_c8[2] = 5;
  bVar8 = MaterialCacheAttributeIdentityTest(param_1,&local_60);
  if (bVar8) {
    local_a8 = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 3;
    local_a4 = '\x02';
    local_c4 = 0x301;
    local_c2 = 5;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,3,0,&local_a0,3,(int *)((longlong)&local_98 + 4));
    memcpy(local_a0.Data,&local_c4,3);
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_a8 = CONCAT13(local_a8._3_1_,0x40712);
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    if ((ulonglong)FVar13 <= &local_a8) {
      FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
      if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar13 = FVar5;
      }
      if ((&local_a8 < (undefined4 *)((longlong)FVar13 + (longlong)param_2->ArrayMax * 0x18)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                         (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar7.Data = local_a0.Data;
    param_2->ArrayNum = iVar10 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    lVar11 = (longlong)iVar10;
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    *(undefined1 *)((longlong)FVar13 + lVar11 * 0x18) = (undefined1)local_a8;
    puVar1 = (uchar *)((longlong)FVar13 + 8) + lVar11 * 0x18;
    ((uchar *)((longlong)FVar13 + 1))[lVar11 * 0x18] = local_a8._1_1_;
    ((uchar *)((longlong)FVar13 + 2))[lVar11 * 0x18] = local_a8._2_1_;
    ((uchar *)((longlong)FVar13 + 3))[lVar11 * 0x18] = local_a8._3_1_;
    ((uchar *)((longlong)FVar13 + 4))[lVar11 * 0x18] = local_a4;
    puVar3 = puVar1 + 0xc;
    *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
    sVar14 = (size_t)(int)local_98;
    *(int *)(puVar1 + 8) = (int)local_98;
    if ((int)local_98 == 0) {
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_98,0,(ForAnyElementType *)puVar1,(int)local_98,(int *)puVar3);
      memcpy(*(FScriptContainerElement **)puVar1,FVar7.Data,sVar14);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  local_50.DataPtr = local_d0;
  local_d0[0] = Metallic;
  local_d0[1] = WorldPosition;
  local_50.ArrayNum = 2;
  bVar8 = MaterialCacheAttributeIdentityTest(param_1,&local_50);
  if (bVar8) {
    local_90 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 2;
    local_8c = '\x03';
    local_cc[0] = 0x604;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,2,0,&local_88,2,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,local_cc,2);
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_90 = CONCAT13(local_90._3_1_,0x40725);
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    if ((ulonglong)FVar13 <= &local_90) {
      FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
      if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar13 = FVar5;
      }
      if ((&local_90 < (undefined4 *)((longlong)FVar13 + (longlong)param_2->ArrayMax * 0x18)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                         (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar7.Data = local_88.Data;
    param_2->ArrayNum = iVar10 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    lVar11 = (longlong)iVar10;
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    *(undefined1 *)((longlong)FVar13 + lVar11 * 0x18) = (undefined1)local_90;
    puVar1 = (uchar *)((longlong)FVar13 + 8) + lVar11 * 0x18;
    ((uchar *)((longlong)FVar13 + 1))[lVar11 * 0x18] = local_90._1_1_;
    ((uchar *)((longlong)FVar13 + 2))[lVar11 * 0x18] = local_90._2_1_;
    ((uchar *)((longlong)FVar13 + 3))[lVar11 * 0x18] = local_90._3_1_;
    ((uchar *)((longlong)FVar13 + 4))[lVar11 * 0x18] = local_8c;
    puVar3 = puVar1 + 0xc;
    *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
    sVar14 = (size_t)(int)local_80;
    *(int *)(puVar1 + 8) = (int)local_80;
    if ((int)local_80 == 0) {
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_80,0,(ForAnyElementType *)puVar1,(int)local_80,(int *)puVar3);
      memcpy(*(FScriptContainerElement **)puVar1,FVar7.Data,sVar14);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  local_78 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_78;
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar15 + uVar12;
  do {
    if (param_1->ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<enum_EMaterialCacheAttribute,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar2) {
      return;
    }
    FVar4 = *pFVar15;
    local_e8 = 0;
    local_e4 = '\0';
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&local_e0,(int *)((longlong)&local_d8 + 4));
    local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
    local_e0.Data[iVar10] = FVar4;
    switch(FVar4) {
    case (FScriptContainerElement)0x0:
      local_e8 = 0x100075d;
switchD_147ea00bf_caseD_0:
      uVar9 = 3;
      break;
    case (FScriptContainerElement)0x1:
      local_e8 = CONCAT22(local_e8._2_2_,0x712);
switchD_147ea00bf_caseD_1:
      uVar9 = 2;
      break;
    case (FScriptContainerElement)0x2:
    case (FScriptContainerElement)0x3:
    case (FScriptContainerElement)0x4:
    case (FScriptContainerElement)0x5:
      local_e8 = CONCAT22(local_e8._2_2_,0x547);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(FVar4) {
      case (FScriptContainerElement)0x0:
      case (FScriptContainerElement)0x6:
        goto switchD_147ea00bf_caseD_0;
      case (FScriptContainerElement)0x1:
        goto switchD_147ea00bf_caseD_1;
      default:
        goto switchD_147ea00bf_caseD_2;
      }
    case (FScriptContainerElement)0x6:
      local_e8 = CONCAT22(local_e8._2_2_,0x75d);
      uVar9 = 3;
      break;
    case (FScriptContainerElement)0x7:
      local_e8 = CONCAT22(local_e8._2_2_,0x1515);
switchD_147ea00bf_caseD_2:
      uVar9 = 1;
      break;
    case (FScriptContainerElement)0x8:
      local_e8 = CONCAT22(local_e8._2_2_,0x547);
      uVar9 = 1;
      break;
    case (FScriptContainerElement)0x9:
      local_e8 = CONCAT22(local_e8._2_2_,0xd0d);
      uVar9 = 1;
      break;
    default:
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\MaterialCache\\MaterialCacheAttribute.h"
                         ,0xb1,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = 0;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_e8._0_3_ = CONCAT12(uVar9,(undefined2)local_e8);
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    if ((ulonglong)FVar13 <= &local_e8) {
      FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
      if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar13 = FVar5;
      }
      if ((&local_e8 < (undefined4 *)((longlong)FVar13 + (longlong)param_2->ArrayMax * 0x18)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                         (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar7.Data = local_e0.Data;
    param_2->ArrayNum = iVar10 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    lVar11 = (longlong)iVar10;
    FVar13 = (ForElementType<FMaterialCacheLayer>)param_2;
    if (FVar5 != (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar13 = FVar5;
    }
    *(undefined1 *)((longlong)FVar13 + lVar11 * 0x18) = (undefined1)local_e8;
    puVar1 = (uchar *)((longlong)FVar13 + 8) + lVar11 * 0x18;
    ((uchar *)((longlong)FVar13 + 1))[lVar11 * 0x18] = local_e8._1_1_;
    ((uchar *)((longlong)FVar13 + 2))[lVar11 * 0x18] = local_e8._2_1_;
    ((uchar *)((longlong)FVar13 + 3))[lVar11 * 0x18] = local_e8._3_1_;
    ((uchar *)((longlong)FVar13 + 4))[lVar11 * 0x18] = local_e4;
    *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
    puVar3 = (uchar *)((longlong)FVar13 + 0x14) + lVar11 * 0x18;
    sVar14 = (size_t)(int)local_d8;
    *(int *)(puVar1 + 8) = (int)local_d8;
    if ((int)local_d8 == 0) {
      puVar3[0] = '\0';
      puVar3[1] = '\0';
      puVar3[2] = '\0';
      puVar3[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_d8,0,(ForAnyElementType *)puVar1,(int)local_d8,(int *)puVar3);
      memcpy(*(FScriptContainerElement **)puVar1,FVar7.Data,sVar14);
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    uVar12 = (ulonglong)local_78;
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*> @ 147ea0310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>
          (wchar_t *param_1,int param_2,int param_3,<lambda_3> param_4,<lambda_1> param_5,
          EParallelForFlags param_6,TArrayView<FRenderCommandList_*,int> *param_7)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ETaskTag EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar13;
  FName FVar14;
  FTaskGraphInterface *pFVar15;
  bool *pbVar16;
  int iVar17;
  ulonglong uVar18;
  FName FVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  FEndOfFrameUpdateContext *local_res20;
  undefined1 local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50;
  int local_48;
  char local_44;
  
  if (param_2 == 0) {
    return;
  }
  FVar13 = StatPtr_STAT_ParallelFor;
  local_res20 = param_4.Context;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParallelFor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar12,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar7 = false;
  bVar22 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_147ea0474:
    bVar6 = bVar22;
    bVar5 = bVar7;
    bVar7 = false;
    FVar19 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_78.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ea0474;
    local_70 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                         ,0x80,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar17 = param_7->ArrayNum;
  iVar21 = iVar10;
  if ((iVar17 != 0) && (iVar21 = iVar17, iVar10 < iVar17)) {
    iVar21 = iVar10;
  }
  if (iVar21 < 2) {
    iVar17 = 0;
    if (0 < param_2) {
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UWorld::FEndOfFrameUpdateContext::UpdateComponent_Parallel
                  (local_res20,*param_7->DataPtr,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_147ea089f;
  }
  uVar18 = 1;
  iVar17 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar20 = 6;
    iVar10 = iVar21 * 6;
    do {
      if (iVar10 <= param_2) {
        uVar3 = (longlong)(param_2 + -1 + iVar10) / (longlong)iVar10;
        uVar18 = uVar3 & 0xffffffff;
        iVar17 = (int)uVar3;
        local_84.Bits = (param_2 + -1 + iVar17) / iVar17;
        if (iVar21 <= (int)local_84.Bits) break;
      }
      iVar17 = (int)uVar18;
      iVar10 = iVar10 - iVar21;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  iVar21 = iVar21 + -1;
  EVar11 = FTaskTagScope::GetCurrentTag();
  local_88 = 6;
  if ((EVar11 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_147ea05ec;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_147ea05ec:
    local_88 = 3;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  FVar14 = (FName)TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (FVar14 == (FName)0x0) {
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    ((FColor_u_0 *)((longlong)FVar14 + 0x54))->Bits = (uint)local_84;
    *(undefined4 *)((longlong)FVar14 + 8) = 0;
    *(int *)((longlong)FVar14 + 0x80) = 0;
    *(undefined ***)FVar14 =
         &`ParallelForImpl::
          ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(FEndOfFrameUpdateContext ***)((longlong)FVar14 + 0x60) = &local_res20;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar17;
    *(TArrayView<FRenderCommandList_*,int> **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FTracedTask>_>
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)((longlong)FVar14 + 0x78) + (longlong)iVar17 * 0x48),iVar21);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)((longlong)FVar14 + 0x10));
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)((longlong)FVar14 + 0x48);
  iVar17 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)FVar14 + 0x80) <= iVar17) {
    iVar17 = -1;
  }
  if (iVar17 != -1) {
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
    local_70 = FVar14;
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
                *)&local_70,iVar17,true);
    if (local_70 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_70 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar17 == 1) && (piVar1 != (int *)0x0)) && (local_70 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_70)(local_70,1);
      }
    }
  }
  local_44 = '\0';
  local_50 = FVar14;
  local_48 = iVar21;
  bVar8 = `ParallelForImpl::
          ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
          ::__l2::FParallelExecutor::operator()(&local_50,true);
  if (!bVar8) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar8 = IsInActualRenderingThread(), !bVar8))
    {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar16 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar2 = *pbVar16;
        *pbVar16 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar16 = bVar2;
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar9 == '\0') {
        pFVar15 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar15 + 0x48))
                  (pFVar15,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_50 != (FName)0x0) {
    if (local_44 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
                  *)&local_50,local_48,true);
    }
    if (local_50 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_50 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar17 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)local_50)(local_50,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_147ea089f:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*> @ 147ea0910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>
          (wchar_t *param_1,int param_2,int param_3,<lambda_3> param_4,<lambda_6> *param_5,
          EParallelForFlags param_6,TArrayView<FRenderCommandList_*,int> *param_7)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ETaskTag EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar13;
  FName FVar14;
  FTaskGraphInterface *pFVar15;
  bool *pbVar16;
  int iVar17;
  ulonglong uVar18;
  FName FVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  FEndOfFrameUpdateContext *local_res20;
  undefined1 local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50;
  int local_48;
  char local_44;
  
  local_res20 = param_4.Context;
  if (param_2 == 0) {
    UWorld::FEndOfFrameUpdateContext::Update_GameThread
              (param_5->Context,param_5->Scene,param_5->RootRenderCommandList);
    return;
  }
  FVar13 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParallelFor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar12,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar7 = false;
  bVar22 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_147ea0aa5:
    bVar6 = bVar22;
    bVar5 = bVar7;
    bVar7 = false;
    FVar19 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_78.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ea0aa5;
    local_70 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                         ,0x80,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar17 = param_7->ArrayNum;
  iVar21 = iVar10;
  if ((iVar17 != 0) && (iVar21 = iVar17, iVar10 < iVar17)) {
    iVar21 = iVar10;
  }
  if (iVar21 < 2) {
    UWorld::FEndOfFrameUpdateContext::Update_GameThread
              (param_5->Context,param_5->Scene,param_5->RootRenderCommandList);
    iVar17 = 0;
    if (0 < param_2) {
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UWorld::FEndOfFrameUpdateContext::UpdateComponent_Parallel
                  (local_res20,*param_7->DataPtr,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_147ea0ef6;
  }
  uVar18 = 1;
  iVar17 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar20 = 6;
    iVar10 = iVar21 * 6;
    do {
      if (iVar10 <= param_2) {
        uVar3 = (longlong)(param_2 + -1 + iVar10) / (longlong)iVar10;
        uVar18 = uVar3 & 0xffffffff;
        iVar17 = (int)uVar3;
        local_84.Bits = (param_2 + -1 + iVar17) / iVar17;
        if (iVar21 <= (int)local_84.Bits) break;
      }
      iVar17 = (int)uVar18;
      iVar10 = iVar10 - iVar21;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  iVar21 = iVar21 + -1;
  EVar11 = FTaskTagScope::GetCurrentTag();
  local_88 = 6;
  if ((EVar11 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_147ea0c32;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_147ea0c32:
    local_88 = 3;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  FVar14 = (FName)TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (FVar14 == (FName)0x0) {
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    ((FColor_u_0 *)((longlong)FVar14 + 0x54))->Bits = (uint)local_84;
    *(undefined4 *)((longlong)FVar14 + 8) = 0;
    *(int *)((longlong)FVar14 + 0x80) = 0;
    *(undefined ***)FVar14 =
         &`ParallelForImpl::
          ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(FEndOfFrameUpdateContext ***)((longlong)FVar14 + 0x60) = &local_res20;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar17;
    *(TArrayView<FRenderCommandList_*,int> **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FTracedTask>_>
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)((longlong)FVar14 + 0x78) + (longlong)iVar17 * 0x48),iVar21);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)((longlong)FVar14 + 0x10));
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)((longlong)FVar14 + 0x48);
  iVar17 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)FVar14 + 0x80) <= iVar17) {
    iVar17 = -1;
  }
  if (iVar17 != -1) {
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
    local_70 = FVar14;
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
                *)&local_70,iVar17,true);
    if (local_70 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_70 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar17 == 1) && (piVar1 != (int *)0x0)) && (local_70 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_70)(local_70,1);
      }
    }
  }
  UWorld::FEndOfFrameUpdateContext::Update_GameThread
            (param_5->Context,param_5->Scene,param_5->RootRenderCommandList);
  local_44 = '\0';
  local_50 = FVar14;
  local_48 = iVar21;
  bVar8 = `ParallelForImpl::
          ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
          ::__l2::FParallelExecutor::operator()(&local_50,true);
  if (!bVar8) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar8 = IsInActualRenderingThread(), !bVar8))
    {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar16 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar2 = *pbVar16;
        *pbVar16 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar16 = bVar2;
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar9 == '\0') {
        pFVar15 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar15 + 0x48))
                  (pFVar15,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_50 != (FName)0x0) {
    if (local_44 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
                  *)&local_50,local_48,true);
    }
    if (local_50 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_50 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar17 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)local_50)(local_50,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_147ea0ef6:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FTracedTask>_> @ 147ea0f70

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_147ea1086;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_147ea1086:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FTracedTask>_> @ 147ea10a0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_147ea11b6;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_147ea11b6:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// Reverse<USkeletalMeshComponent_*> @ 147ea1660

void __cdecl
AlgoImpl::Reverse<USkeletalMeshComponent_*>(USkeletalMeshComponent **param_1,int param_2)

{
  USkeletalMeshComponent *pUVar1;
  USkeletalMeshComponent **ppUVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppUVar2 = param_1 + (param_2 + -1);
    do {
      pUVar1 = param_1[lVar3];
      param_1[lVar3] = *ppUVar2;
      lVar3 = lVar3 + 1;
      *ppUVar2 = pUVar1;
      ppUVar2 = ppUVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// StaticEnum<enum_EDerivativeStatus> @ 147ea2fe0

UEnum * __cdecl StaticEnum<enum_EDerivativeStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDerivativeStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDerivativeStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDerivativeStatus,(UObject *)pUVar1,
                       L"EDerivativeStatus");
  }
  return Z_Registration_Info_UEnum_EDerivativeStatus.OuterSingleton;
}

// StaticEnum<enum_EMaterialMergeType> @ 147ea3020

UEnum * __cdecl StaticEnum<enum_EMaterialMergeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialMergeType,(UObject *)pUVar1,
                       L"EMaterialMergeType");
  }
  return Z_Registration_Info_UEnum_EMaterialMergeType.OuterSingleton;
}

// StaticEnum<enum_EStreamingVolumeUsage> @ 147ea3060

UEnum * __cdecl StaticEnum<enum_EStreamingVolumeUsage>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingVolumeUsage,(UObject *)pUVar1,
                       L"EStreamingVolumeUsage");
  }
  return Z_Registration_Info_UEnum_EStreamingVolumeUsage.OuterSingleton;
}

// StaticEnum<enum_ETextureSizingType> @ 147ea30a0

UEnum * __cdecl StaticEnum<enum_ETextureSizingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSizingType,(UObject *)pUVar1,
                       L"ETextureSizingType");
  }
  return Z_Registration_Info_UEnum_ETextureSizingType.OuterSingleton;
}

// ~TFunction_OwnedObject<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::<lambda_1>,1,1> @ 147ea7b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE____V_FRHIBreadcrumbScope_GameThread__QEAA___QEAV__tuple_PEBV__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE__V__tuple___V_std___std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FLocalVertexFactory::Copy'::__l2::<lambda_1>,1,0> @ 147ea7bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalVertexFactory::Copy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLocalVertexFactory::Copy_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::<lambda_1>,1,0> @ 147ea7bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMaterialCacheVirtualTexture::CreateRenderProxy_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateRenderProxy'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::<lambda_1>,1,1> @ 147ea7bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMaterialCacheVirtualTexture::CreateSceneProxy_::__l2::<lambda_1>,1,1>
          (void *this)

{
  FMaterialCacheLayer *pFVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateSceneProxy'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pFVar1 = *(FMaterialCacheLayer **)((longlong)this + 0xe8);
  if (*(FMaterialCacheLayer **)((longlong)this + 0xe8) == (FMaterialCacheLayer *)0x0) {
    pFVar1 = (FMaterialCacheLayer *)((longlong)this + 0x28);
  }
  DestructItems<FMaterialCacheLayer,int>(pFVar1,*(int *)((longlong)this + 0xf0));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Flush'::__l2::<lambda_1>,1,0> @ 147ea7c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Flush'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMaterialCacheVirtualTexture::Flush_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Flush'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::<lambda_1>,1,0> @ 147ea7c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UMapBuildDataRegistry::InitializeClusterRenderingResources_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::<lambda_1>,1,0> @ 147ea7c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FLightSceneProxy::SetLightFunctionMaterial_GameThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLightSceneProxy::SetTransmission_GameThread'::__l2::<lambda_1>,1,0> @ 147ea7ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLightSceneProxy::SetTransmission_GameThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLightSceneProxy::SetTransmission_GameThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLightSceneProxy::SetTransmission_GameThread'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Unregister'::__l2::<lambda_1>,1,1> @ 147ea7cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Unregister'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UMaterialCacheVirtualTexture::Unregister_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Unregister'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>,1,1> @ 147ea7ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UMaterialCacheVirtualTexture::UpdateResourceWithParams_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::<lambda_1>,1,0> @ 147ea7d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UMapBuildDataRegistry::InvalidateSurfaceLightmaps_::__l24::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::`24'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<FLightmapResourceCluster,int>
            (*(FLightmapResourceCluster **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UWorld::Tick'::__l2::<lambda_2>,1,0> @ 147ea7d40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UWorld::Tick'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_UWorld::Tick_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`UWorld::Tick'::`2'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l39::<lambda_2>,0,0> @ 147ea7d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l39::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_ALightWeightInstanceManager::ConvertInstanceToActor_::__l39::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ALightWeightInstanceManager::ConvertInstanceToActor'::`39'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 147ea7e40

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
                 ::_vftable_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 147ea7ef0

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
                 ::_vftable_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l2::<lambda_1>_> @ 147ea7fa0

void __thiscall
ScopeExitSupport::
TScopeGuard<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l2::<lambda_1>_>::
~TScopeGuard<_ALightWeightInstanceManager::ConvertInstanceToActor_::__l2::<lambda_1>_>(void *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType *pFVar9;
  
  lVar1 = *(longlong *)this;
  pFVar9 = (ForAnyElementType *)(lVar1 + 0x378);
  pFVar2 = pFVar9->Data;
  pFVar8 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)*(int *)(lVar1 + 0x380) * 4) {
    while (*(int *)pFVar8 != *(int *)(*(longlong *)((longlong)this + 8) + 0x18)) {
      pFVar8 = pFVar8 + 4;
      if (pFVar8 == pFVar2 + (longlong)*(int *)(lVar1 + 0x380) * 4) {
        return;
      }
    }
    uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 2);
    if (uVar7 != 0xffffffff) {
      uVar6 = 0;
      if ((int)(uVar7 + 1) <= *(int *)(lVar1 + 0x380)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      iVar5 = *(int *)(lVar1 + 0x380) + ~uVar7;
      if (1 < iVar5) {
        iVar5 = 1;
      }
      if (iVar5 != 0) {
        memmove(pFVar9->Data + (longlong)(int)uVar7 * 4,
                pFVar9->Data + (longlong)(*(int *)(lVar1 + 0x380) - iVar5) * 4,(longlong)iVar5 << 2)
        ;
      }
      *(int *)(lVar1 + 0x380) = *(int *)(lVar1 + 0x380) + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,pFVar9,*(int *)(lVar1 + 0x380),(int *)(lVar1 + 900));
    }
  }
  return;
}

// operator<< @ 147ea9880

FArchive * __cdecl operator<<(FArchive *param_1,FLightMap **param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FArchive *pFVar5;
  FLightMap *pFVar6;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  if (((param_1->field_0x28 & 4) != 0) && (*param_2 != (FLightMap *)0x0)) {
    lVar4 = (**(code **)((*param_2)->_padding_ + 0x30))();
    if (lVar4 != 0) {
      local_res10[0] = 2;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res10[0] == 0) {
      *param_2 = (FLightMap *)0x0;
    }
    else {
      if (local_res10[0] == 1) {
        pFVar6 = operator_new(0x20);
        if (pFVar6 != (FLightMap *)0x0) {
          pFVar6->NumRefs = 0;
          pFVar6->_padding_ = (longlong)&___7FLightMap__6B_;
          (pFVar6->LightGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar6->LightGuids).ArrayNum = 0;
          (pFVar6->LightGuids).ArrayMax = 0;
          pFVar6->bAllowHighQualityLightMaps = true;
          AllowHighQualityLightmaps((FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
          pFVar6->bAllowHighQualityLightMaps = false;
          pFVar6->_padding_ = (longlong)&___7FLegacyLightMap1D__6B_;
          *param_2 = pFVar6;
          goto LAB_147ea9aa8;
        }
      }
      else {
        if (local_res10[0] != 2) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                             ,0xd1c,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FArchive *)(*pcVar2)();
            return pFVar5;
          }
          goto LAB_147ea9aa8;
        }
        pFVar6 = operator_new(0x120);
        if (pFVar6 != (FLightMap *)0x0) {
          pFVar6->NumRefs = 0;
          pFVar6->_padding_ = (longlong)&___7FLightMap__6B_;
          (pFVar6->LightGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar6->LightGuids).ArrayNum = 0;
          (pFVar6->LightGuids).ArrayMax = 0;
          pFVar6->bAllowHighQualityLightMaps = true;
          bVar3 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
          pFVar6->bAllowHighQualityLightMaps = bVar3;
          pFVar6->_padding_ = (longlong)&___7FLightMap2D__6B_;
          pFVar6[3]._padding_ = 0;
          *(undefined4 *)&pFVar6[3].LightGuids.AllocatorInstance.Data = 0;
          *(undefined8 *)((longlong)&pFVar6[3].LightGuids.AllocatorInstance.Data + 4) = 0x3f800000;
          *(undefined8 *)&pFVar6[3].LightGuids.ArrayMax = 0;
          *(undefined8 *)&pFVar6[3].NumRefs = 0x3f800000;
          *(undefined8 *)((longlong)&pFVar6[4]._padding_ + 4) = 0;
          *(undefined8 *)((longlong)&pFVar6[4].LightGuids.AllocatorInstance.Data + 4) = 0x3f800000;
          *(undefined8 *)&pFVar6[4].LightGuids.ArrayMax = 0;
          *(undefined8 *)&pFVar6[4].NumRefs = 0x3f800000;
          *(undefined8 *)((longlong)&pFVar6[5]._padding_ + 4) = 0;
          *(undefined8 *)((longlong)&pFVar6[5].LightGuids.AllocatorInstance.Data + 4) = 0x3f800000;
          *(undefined8 *)&pFVar6[5].LightGuids.ArrayMax = 0;
          *(undefined8 *)&pFVar6[5].NumRefs = 0x3f800000;
          *(undefined8 *)((longlong)&pFVar6[6]._padding_ + 4) = 0;
          *(undefined8 *)((longlong)&pFVar6[6].LightGuids.AllocatorInstance.Data + 4) = 0x3f800000;
          *(undefined8 *)&pFVar6[6].LightGuids.ArrayMax = 0;
          pFVar6[6].NumRefs = 0x3f800000;
          pFVar6[8]._padding_ = 0;
          *(undefined4 *)&pFVar6[8].LightGuids.AllocatorInstance.Data = 0;
          *(undefined8 *)((longlong)&pFVar6[8].LightGuids.AllocatorInstance.Data + 4) = 0x3f800000;
          pFVar6[1]._padding_ = 0;
          pFVar6[1].LightGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar6[1].LightGuids.ArrayNum = 0;
          pFVar6[1].LightGuids.ArrayMax = 0;
          pFVar6[1].bAllowHighQualityLightMaps = false;
          *(undefined3 *)&pFVar6[1].field_0x19 = 0;
          pFVar6[1].NumRefs = 0;
          pFVar6[2]._padding_ = 0;
          pFVar6[2].LightGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar6[2].LightGuids.ArrayNum = 0;
          pFVar6[2].LightGuids.ArrayMax = 0;
          *param_2 = pFVar6;
          goto LAB_147ea9aa8;
        }
      }
      *param_2 = (FLightMap *)0x0;
    }
  }
LAB_147ea9aa8:
  pFVar6 = *param_2;
  if (pFVar6 != (FLightMap *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,param_1);
    if ((param_1->field_0x28 & 1) != 0) {
      if (local_res10[0] == 1) {
        pFVar6 = *param_2;
        if (pFVar6 != (FLightMap *)0x0) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
        *param_2 = (FLightMap *)0x0;
      }
      if (*(int *)&param_1->field_0x40 < 0x131) {
        pFVar6 = *param_2;
        if (pFVar6 != (FLightMap *)0x0) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
        *param_2 = (FLightMap *)0x0;
      }
    }
  }
  return param_1;
}

// operator<< @ 147ea9b10

FArchive * __cdecl operator<<(FArchive *param_1,FLightMapCoefficients *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x16);
  return param_1;
}

// operator<< @ 147ea9b40

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FLightComponentMapBuildData *param_2)

{
  int *piVar1;
  int *piVar2;
  FName FVar3;
  uchar auVar4 [8];
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData> FVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res8;
  FStatMessage local_28;
  
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
    param_2->ShadowMapChannel = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(param_2->DepthMap).WorldToLight);
  piVar1 = &(param_2->DepthMap).ShadowMapSizeX;
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
  piVar1 = &(param_2->DepthMap).ShadowMapSizeY;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FFloat16,TSizedDefaultAllocator<32>_>
            (param_1,&(param_2->DepthMap).DepthSamples);
  if (((param_1->field_0x28 & 1) != 0) &&
     (auVar4 = (uchar  [8])((longlong)(param_2->DepthMap).DepthSamples.ArrayMax * 2),
     auVar4 != (uchar  [8])0x0)) {
    FVar6 = StatPtr_STAT_StationaryLightBuildData;
    if (StatPtr_STAT_StationaryLightBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)0x0) {
      pFVar5 = FName::FName(&local_res8,"STAT_StationaryLightBuildData");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_StationaryLightBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StationaryLightBuildData,*pFVar5
                         ,L"Stationary Light Static Shadowmap","STATGROUP_MapBuildData",
                         "STATCAT_Advanced",L"MapBuildData",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar3 = *(FName *)FVar6;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_28.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_28.StatData.Pad = auVar4;
      local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar4);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return param_1;
}

// operator<< @ 147ea9dd0

FArchive * __cdecl operator<<(FArchive *param_1,FMeshMapBuildData *param_2)

{
  FLightMap *pFVar1;
  TRefCountPtr<FLightMap> local_res8;
  
  local_res8.Reference = (param_2->LightMap).Reference;
  operator<<(param_1,&local_res8.Reference);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar1 = (param_2->LightMap).Reference;
    if (pFVar1 != local_res8.Reference) {
      (param_2->LightMap).Reference = local_res8.Reference;
      if (local_res8.Reference != (FLightMap *)0x0) {
        FLightMap::AddRef(local_res8.Reference);
      }
      if (pFVar1 != (FLightMap *)0x0) {
        FLightMap::Release(pFVar1);
      }
    }
  }
  local_res8.Reference = (FLightMap *)(param_2->ShadowMap).Reference;
  operator<<(param_1,(FShadowMap **)&local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar1 = (FLightMap *)(param_2->ShadowMap).Reference;
    if (pFVar1 != local_res8.Reference) {
      (param_2->ShadowMap).Reference = (FShadowMap *)local_res8.Reference;
      if (local_res8.Reference != (FLightMap *)0x0) {
        FShadowMap::AddRef((FShadowMap *)local_res8.Reference);
      }
      if (pFVar1 != (FLightMap *)0x0) {
        FShadowMap::Release((FShadowMap *)pFVar1);
      }
    }
  }
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->IrrelevantLights);
  TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_>::BulkSerialize
            (&param_2->PerInstanceLightmapData,param_1,false);
  return param_1;
}

// operator<< @ 147ea9ea0

FArchive * __cdecl operator<<(FArchive *param_1,FReflectionCaptureMapBuildData *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  FName *pFVar7;
  uint local_res8 [2];
  undefined8 local_res10;
  FName *local_38;
  int local_30;
  undefined4 local_2c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)&param_2->_padding_ = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_res8[0] = 0x3f800000;
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((0x15 < iVar6) &&
     (iVar6 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
     iVar6 < 0x17)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&FullHDR,L"FullHDR");
    _Init_thread_footer(&_TSS0);
  }
  if ((*(int *)(lVar5 + 0x9d4c) < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    FName::FName(&EncodedHDR,L"EncodedHDR");
    _Init_thread_footer(&_TSS1);
  }
  lVar5 = *(longlong *)&param_1->field_0x68;
  local_2c = 0;
  local_38 = (FName *)0x0;
  local_30 = 0;
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x10) != 0)) {
    (**(code **)(**(longlong **)(lVar5 + 8) + 0xe8))(*(longlong **)(lVar5 + 8),&local_38);
  }
  if (local_30 == 0) {
LAB_147eaa067:
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_2->_padding_);
  }
  else {
    for (pFVar7 = local_38; pFVar7 != local_38 + local_30; pFVar7 = pFVar7 + 1) {
      if (*pFVar7 == FullHDR) goto LAB_147eaa067;
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FMobileObjectVersion::GUID);
  if ((iVar6 < 3) ||
     (iVar6 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
     0x25 < iVar6)) {
    if (local_30 == 0) {
LAB_147eaa132:
      iVar6 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
      if (0x25 < iVar6) {
        TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_2->_padding_)
        ;
        goto LAB_147eaa100;
      }
    }
    else {
      for (pFVar7 = local_38; pFVar7 != local_38 + local_30; pFVar7 = pFVar7 + 1) {
        if (*pFVar7 == EncodedHDR) goto LAB_147eaa132;
      }
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  else {
    local_res10 = 0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res10);
  }
LAB_147eaa100:
  if ((param_1->field_0x28 & 1) != 0) {
    FReflectionCaptureMapBuildData::FinalizeLoad(param_2);
  }
  if (local_38 != (FName *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}

// operator<< @ 147eaa1e0

FArchive * __cdecl operator<<(FArchive *param_1,FSkyAtmosphereMapBuildData *param_2)

{
  return param_1;
}

// operator<< @ 147eaa1f0

FArchive * __cdecl operator<<(FArchive *param_1,FStaticShadowDepthMapData *param_2)

{
  int *piVar1;
  int *piVar2;
  
  UE::Math::operator<<(param_1,&param_2->WorldToLight);
  piVar1 = &param_2->ShadowMapSizeX;
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
  piVar1 = &param_2->ShadowMapSizeY;
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
  TArrayPrivateFriend::Serialize<FFloat16,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DepthSamples);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 147eac93c

/* [thunk]:public: virtual void * __ptr64 __cdecl ALightWeightInstanceManager::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALightWeightInstanceManager::_vector_deleting_destructor__adjustor_704__
          (ALightWeightInstanceManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALightWeightInstanceManager *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 147eac950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ALightWeightInstanceStaticMeshManager::`vector
   deleting destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ALightWeightInstanceStaticMeshManager::_vector_deleting_destructor__adjustor_704__
          (ALightWeightInstanceStaticMeshManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ALightWeightInstanceStaticMeshManager *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{904}' @ 147eac964

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ALightWeightInstanceStaticMeshManager::`vector
   deleting destructor'`adjustor{904}' (unsigned int) __ptr64 */

void * __thiscall
ALightWeightInstanceStaticMeshManager::_vector_deleting_destructor__adjustor_904__
          (ALightWeightInstanceStaticMeshManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ALightWeightInstanceStaticMeshManager *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{760}' @ 147eac978

/* [thunk]:public: virtual void * __ptr64 __cdecl ALocationVolume::`vector deleting
   destructor'`adjustor{760}' (unsigned int) __ptr64 */

void * __thiscall
ALocationVolume::_vector_deleting_destructor__adjustor_760__(ALocationVolume *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ALocationVolume *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 147eac98c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ULocalPlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULocalPlayer::_vector_deleting_destructor__adjustor_40__(ULocalPlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULocalPlayer *)&this[-1].SlateOperations.DetectDragForMouseButton.KeyDetails,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 147eac99c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMaterialCacheVirtualTexture::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UMaterialCacheVirtualTexture::_vector_deleting_destructor__adjustor_224__
          (UMaterialCacheVirtualTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMaterialCacheVirtualTexture *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 147eac9b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMaterialCacheVirtualTexture::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UMaterialCacheVirtualTexture::_vector_deleting_destructor__adjustor_232__
          (UMaterialCacheVirtualTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMaterialCacheVirtualTexture *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147eac9d0

void * __thiscall
FObjectSubsystemCollection<ULocalPlayerSubsystem>::_scalar_deleting_destructor_
          (FObjectSubsystemCollection<ULocalPlayerSubsystem> *this,uint param_1)

{
  FSubsystemCollectionBase::~FSubsystemCollectionBase((FSubsystemCollectionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eaca10

void * __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eaca50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDetailedTickStats,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDetailedTickStats,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eaca80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ALightWeightInstanceStaticMeshManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ALightWeightInstanceStaticMeshManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacab0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l62::<lambda_5>_>
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

// `scalar_deleting_destructor' @ 147eacb20

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l62::<lambda_5>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE____V_FRHIBreadcrumbScope_GameThread__QEAA___QEAV__tuple_PEBV__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE__V__tuple___V_std___std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalVertexFactory::Copy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLocalVertexFactory::Copy'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateRenderProxy'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateRenderProxy'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateSceneProxy'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FMaterialCacheLayer *pFVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::CreateSceneProxy'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pFVar1 = *(FMaterialCacheLayer **)((longlong)this + 0xe8);
  if (*(FMaterialCacheLayer **)((longlong)this + 0xe8) == (FMaterialCacheLayer *)0x0) {
    pFVar1 = (FMaterialCacheLayer *)((longlong)this + 0x28);
  }
  DestructItems<FMaterialCacheLayer,int>(pFVar1,*(int *)((longlong)this + 0xf0));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Flush'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Flush'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMapBuildDataRegistry::InitializeClusterRenderingResources'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLightSceneProxy::SetTransmission_GameThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLightSceneProxy::SetTransmission_GameThread'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Unregister'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::Unregister'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMaterialCacheVirtualTexture::UpdateResourceWithParams'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eace20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::__l24::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMapBuildDataRegistry::InvalidateSurfaceLightmaps'::`24'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<FLightmapResourceCluster,int>
            (*(FLightmapResourceCluster **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eace80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UWorld::Tick'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`UWorld::Tick'::`2'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ALightWeightInstanceManager::ConvertInstanceToActor'::__l39::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ALightWeightInstanceManager::ConvertInstanceToActor'::`39'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacf00

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLightWeightInstanceSubsystem,SharedPointerInternals::DefaultDeleter<FLightWeightInstanceSubsystem>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FLightWeightInstanceSubsystem,SharedPointerInternals::DefaultDeleter<FLightWeightInstanceSubsystem>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacf40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ALODActor::_scalar_deleting_destructor_(ALODActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ALODActor__6B_;
  pFVar1 = (this->SubActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InstancedStaticMeshComponents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstancedStaticMeshComponents);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eacff0

void * __thiscall
ALevelStreamingVolume::_scalar_deleting_destructor_(ALevelStreamingVolume *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ALevelStreamingVolume__6B_;
  pFVar1 = (this->StreamingLevelNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void * __thiscall ALight::_scalar_deleting_destructor_(ALight *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ALight__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead0d0

void * __thiscall
ALightWeightInstanceManager::_scalar_deleting_destructor_
          (ALightWeightInstanceManager *this,uint param_1)

{
  ~ALightWeightInstanceManager(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
ALightWeightInstanceStaticMeshManager::_scalar_deleting_destructor_
          (ALightWeightInstanceStaticMeshManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IActorInstanceManagerInterface__;
  this->_padding_ = (longlong)&___7ALightWeightInstanceStaticMeshManager__6B_;
  pFVar1 = (this->DataIndicesToBeDeleted).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataIndicesToRenderingIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderingIndicesToDataIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7ISMInstanceManager__6B_;
  ALightWeightInstanceManager::~ALightWeightInstanceManager((ALightWeightInstanceManager *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead200

void * __thiscall
ALightmassCharacterIndirectDetailVolume::_scalar_deleting_destructor_
          (ALightmassCharacterIndirectDetailVolume *this,uint param_1)

{
  *(undefined ***)this = &___7ALightmassCharacterIndirectDetailVolume__6B_;
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

// `scalar_deleting_destructor' @ 147ead260

void * __thiscall
ALightmassImportanceVolume::_scalar_deleting_destructor_
          (ALightmassImportanceVolume *this,uint param_1)

{
  *(undefined ***)this = &___7ALightmassImportanceVolume__6B_;
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

// `scalar_deleting_destructor' @ 147ead2c0

void * __thiscall ALocationVolume::_scalar_deleting_destructor_(ALocationVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&___7IWorldPartitionActorLoaderInterface__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead330

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
AMaterialInstanceActor::_scalar_deleting_destructor_(AMaterialInstanceActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AMaterialInstanceActor__6B_;
  pFVar1 = (this->TargetActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead3b0

void * __thiscall
FDetailedTickStats::_scalar_deleting_destructor_(FDetailedTickStats *this,uint param_1)

{
  ~FDetailedTickStats(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead3f0

void * __thiscall
FLegacyLightMap1D::_scalar_deleting_destructor_(FLegacyLightMap1D *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FLightMap__6B_;
  if (*(int *)&this->field_0x1c != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LightMap.h"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined ***)this = &___7FDeferredCleanupInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void * __thiscall
FLightSceneProxy::_scalar_deleting_destructor_(FLightSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLightSceneProxy__6B_;
  pFVar1 = (this->OwnerNameOrLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead4e0

void * __thiscall
FLightSceneProxyFixLayout::_scalar_deleting_destructor_
          (FLightSceneProxyFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead510

void * __thiscall
FLightmapResourceCluster::_scalar_deleting_destructor_(FLightmapResourceCluster *this,uint param_1)

{
  FRHIUniformBuffer *this_00;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FLightmapResourceCluster__6B_;
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocatedVT == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                       ,0xd7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  this_00 = (this->UniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead5a0

void * __thiscall
FLocalLightSceneProxy::_scalar_deleting_destructor_(FLocalLightSceneProxy *this,uint param_1)

{
  *(undefined ***)this = &___7FLightSceneProxy__6B_;
  if (*(void **)&this->field_0x240 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x240);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead600

void * __thiscall
FLocalVertexFactory::_scalar_deleting_destructor_(FLocalVertexFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FLocalVertexFactory__6B_;
  if (this->UniformBuffer != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead660

void * __thiscall
FMaterialCacheVirtualTextureResource::_scalar_deleting_destructor_
          (FMaterialCacheVirtualTextureResource *this,uint param_1)

{
  ForElementType<FMaterialCacheLayer> FVar1;
  
  FVar1 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar1 = (ForElementType<FMaterialCacheLayer>)&(this->TagLayout).Layers;
  }
  DestructItems<FMaterialCacheLayer,int>
            ((FMaterialCacheLayer *)FVar1,(this->TagLayout).Layers.ArrayNum);
  FVar1 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMaterialCacheLayer>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVirtualTexture2DResource::~FVirtualTexture2DResource((FVirtualTexture2DResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead6e0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FTracedTask,int>
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead7f0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FTracedTask,int>
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 147ead900

void * __thiscall
FStaticLightingGlobalVolumeMapping::_scalar_deleting_destructor_
          (FStaticLightingGlobalVolumeMapping *this,uint param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  puVar1 = &this[-1].field_0x10;
  *(undefined ***)puVar1 = &FStaticLightingMapping::_vftable__for__FStaticLightingMapping__;
  *(undefined ***)(puVar1 + (longlong)*(int *)(*(longlong *)&this[-1].field_0x18 + 4) + 8) =
       &FStaticLightingMapping::_vftable__for__FRefCountedObject__;
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(puVar1,0x48);
  }
  return puVar1;
}

// `scalar_deleting_destructor' @ 147ead990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FStaticLightingMapping::_scalar_deleting_destructor_(FStaticLightingMapping *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this[-1].Mesh = (FStaticLightingMesh *)&_vftable__for__FStaticLightingMapping__;
  *(undefined ***)((longlong)*(int *)&(this[-1].Owner)->field_0x4 + -0x20 + (longlong)this) =
       &_vftable__for__FRefCountedObject__;
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].Mesh,0x38);
  }
  return &this[-1].Mesh;
}

// `scalar_deleting_destructor' @ 147eada20

void * __thiscall
FStaticLightingTextureMapping::_scalar_deleting_destructor_
          (FStaticLightingTextureMapping *this,uint param_1)

{
  *(undefined ***)&this[-1].field_0x10 =
       &FStaticLightingMapping::_vftable__for__FStaticLightingMapping__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x18 + 4) + -0x30 + (longlong)this) =
       &FStaticLightingMapping::_vftable__for__FRefCountedObject__;
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x10,0x48);
  }
  return &this[-1].field_0x10;
}

// `scalar_deleting_destructor' @ 147eada70

void * __thiscall
IActorInstanceManagerInterface::_scalar_deleting_destructor_
          (IActorInstanceManagerInterface *this,uint param_1)

{
  *this = (IActorInstanceManagerInterface)&___7IActorInstanceManagerInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eadab0

void * __thiscall
ULightWeightInstanceBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (ULightWeightInstanceBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7ULightWeightInstanceBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 147eadb10

void * __thiscall
ULightmappedSurfaceCollection::_scalar_deleting_destructor_
          (ULightmappedSurfaceCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULightmappedSurfaceCollection__6B_;
  pFVar1 = (this->Surfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eadb80

void * __thiscall
ULightmassPrimitiveSettingsObject::_scalar_deleting_destructor_
          (ULightmassPrimitiveSettingsObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULightmassPrimitiveSettingsObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eadbe0

void * __thiscall ULocalMessage::_scalar_deleting_destructor_(ULocalMessage *this,uint param_1)

{
  *(undefined ***)this = &___7ULocalMessage__6B_;
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

// `scalar_deleting_destructor' @ 147eadc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall ULocalPlayer::_scalar_deleting_destructor_(ULocalPlayer *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  FReply::~FReply(&this->SlateOperations);
  FSubsystemCollectionBase::~FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlayerControllerChangedEvent).field_0x8,
             *(int *)&(this->OnPlayerControllerChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlayerControllerChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayerControllerChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlatformUserIdChangedEvent).field_0x8,
             *(int *)&(this->OnPlatformUserIdChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnPlatformUserIdChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlatformUserIdChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControllerIdChangedEvent).field_0x8,
             *(int *)&(this->OnControllerIdChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnControllerIdChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerIdChangedEvent);
  DestructItems<FSceneViewStateReference,int>
            ((FSceneViewStateReference *)(this->ViewStates).AllocatorInstance.Data,
             (this->ViewStates).ArrayNum);
  pFVar2 = (this->ViewStates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&this->CachedUniqueNetId);
  UPlayer::~UPlayer((UPlayer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eadd90

void * __thiscall
UMaterialCacheVirtualTexture::_scalar_deleting_destructor_
          (UMaterialCacheVirtualTexture *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147eade10

void * __thiscall
UMaterialCacheVirtualTextureTag::_scalar_deleting_destructor_
          (UMaterialCacheVirtualTextureTag *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialCacheVirtualTextureTag__6B_;
  DestructItems<FMaterialCacheLayer,int>
            ((FMaterialCacheLayer *)(this->RuntimeLayers).AllocatorInstance.Data,
             (this->RuntimeLayers).ArrayNum);
  pFVar1 = (this->RuntimeLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// AdjustTextureMappingSize @ 147eaeed0

int __cdecl AdjustTextureMappingSize(int param_1)

{
  if (TextureMappingMinDownsampleSize0 < param_1) {
    if (param_1 <= TextureMappingMinDownsampleSize1) {
      return (int)((float)param_1 * TextureMappingDownsampleFactor0);
    }
  }
  else if (param_1 <= TextureMappingMinDownsampleSize1) {
    if (param_1 <= TextureMappingMinDownsampleSize2) {
      return param_1;
    }
    goto LAB_147eaef20;
  }
  if (param_1 <= TextureMappingMinDownsampleSize2) {
    return (int)((float)param_1 * TextureMappingDownsampleFactor1);
  }
LAB_147eaef20:
  return (int)((float)param_1 * TextureMappingDownsampleFactor2);
}

// CreateLocalVFUniformBuffer @ 147eb6210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> __cdecl
CreateLocalVFUniformBuffer
          (FLocalVertexFactory *param_1,uint param_2,FColorVertexBuffer *param_3,int param_4,
          int param_5)

{
  byte bVar1;
  char cVar2;
  FRHIResource *this;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> TVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 in_register_0000008c;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  FRHIResource *local_res8;
  int in_stack_00000030;
  undefined1 local_68 [64];
  
  lVar11 = CONCAT44(in_register_0000008c,param_4);
  lVar9 = CONCAT44(in_register_00000014,param_2);
  uVar10 = (ulonglong)GMaxRHIShaderPlatform;
  local_68._56_8_ = (FScriptContainerElement *)0x0;
  local_68._20_4_ = SUB84(param_3,0);
  iVar13 = 0;
  pFVar12 = (FScriptContainerElement *)0x0;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar10].bContainsValidPlatformInfo == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), pFVar12 = (FScriptContainerElement *)local_68._56_8_, bVar4))
  {
    pcVar3 = (code *)swi(3);
    TVar6 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)(*pcVar3)();
    return TVar6;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar10].bSupportsManualVertexFetch == 0) {
    local_68._32_8_ = GNullColorVertexBuffer._40_8_;
    local_68._40_8_ = GNullColorVertexBuffer._40_8_;
    local_68._48_8_ = GNullColorVertexBuffer._40_8_;
    local_68._24_8_ = GNullColorVertexBuffer._40_8_;
    iVar14 = iVar13;
  }
  else {
    local_68._32_8_ = *(undefined8 *)(lVar9 + 0x1d8);
    local_68._40_8_ = GNullColorVertexBuffer._40_8_;
    if (*(FScriptContainerElement **)(lVar9 + 0x210) != (FScriptContainerElement *)0x0) {
      local_68._40_8_ = *(FScriptContainerElement **)(lVar9 + 0x210);
    }
    local_68._48_8_ = *(undefined8 *)(lVar9 + 0x1e0);
    local_68._24_8_ = *(undefined8 *)(lVar9 + 0x1e8);
    if (lVar11 == 0) {
      pFVar12 = *(FScriptContainerElement **)(lVar9 + 0x1f0);
      iVar14 = *(int *)(lVar9 + 0x1f8);
    }
    else {
      pFVar12 = *(FScriptContainerElement **)(lVar11 + 0x30);
      iVar14 = -(uint)(1 < *(uint *)(lVar11 + 0x44));
    }
  }
  bVar1 = *(byte *)(lVar9 + 0x1fd);
  cVar2 = *(char *)(lVar9 + 0x1fc);
  local_68._56_8_ = pFVar12;
  if (pFVar12 == (FScriptContainerElement *)0x0) {
    local_68._56_8_ = GNullColorVertexBuffer._40_8_;
  }
  bVar4 = RHISupportsAbsoluteVertexID((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  bVar5 = RHISupportsAbsoluteVertexID((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  local_68._12_4_ = param_5;
  if (bVar4) {
    local_68._12_4_ = iVar13;
  }
  local_68._4_4_ = ZEXT14(bVar1);
  local_68._16_4_ = in_stack_00000030;
  if (bVar5) {
    local_68._16_4_ = iVar13;
  }
  local_68._0_4_ = iVar14;
  local_68._8_4_ = (int)cVar2;
  pFVar7 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata();
  if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)(*pcVar3)();
    return TVar6;
  }
  TVar8 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)local_68,
                     (EUniformBufferUsage)(pFVar7->Layout).Reference,2);
  this = (FRHIResource *)(TVar8.Reference)->_padding_;
  param_1->_padding_ = (longlong)this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar7 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)(*pcVar3)();
      return TVar6;
    }
    if ((FName)(pFVar7->Layout).Reference != this[2].OwnerName) {
      pFVar7 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)(*pcVar3)();
        return TVar6;
      }
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)(*pcVar3)();
        return TVar6;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)param_1;
}

// CreateRegistryForLegacyMap @ 147eb6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __cdecl CreateRegistryForLegacyMap(ULevel *param_1)

{
  FName FVar1;
  FName FVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UMapBuildDataRegistry *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FName::FName(&RegistryName,L"MapBuildDataRegistry");
      _Init_thread_footer(&_TSS0);
    }
  }
  FVar1 = RegistryName;
  pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  FVar2 = RegistryName;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  RegistryName.ComparisonIndex = FVar1.ComparisonIndex.Value;
  RegistryName.Number = FVar1.Number;
  local_98._16_4_ = RegistryName.ComparisonIndex.Value;
  local_98._20_4_ = RegistryName.Number;
  RegistryName = FVar2;
  local_98._8_8_ = pUVar3;
  pUVar5 = (UMapBuildDataRegistry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UMapBuildDataRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->MapBuildData).field0_0x0.DebugPtr = pUVar5;
  return pUVar5;
}

// EmptyLinkFunctionForGeneratedCodeHLSLMaterialDerivativeAutogen @ 147eb8ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeHLSLMaterialDerivativeAutogen(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLODActor @ 147eb8ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeLODActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelStreamingVolume @ 147eb8af0

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelStreamingVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLight @ 147eb8b00

void __cdecl EmptyLinkFunctionForGeneratedCodeLight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightWeightInstanceBlueprintFunctionLibrary @ 147eb8b10

void __cdecl EmptyLinkFunctionForGeneratedCodeLightWeightInstanceBlueprintFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightWeightInstanceManager @ 147eb8b20

void __cdecl EmptyLinkFunctionForGeneratedCodeLightWeightInstanceManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightWeightInstanceStaticMeshManager @ 147eb8b30

void __cdecl EmptyLinkFunctionForGeneratedCodeLightWeightInstanceStaticMeshManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightmappedSurfaceCollection @ 147eb8b40

void __cdecl EmptyLinkFunctionForGeneratedCodeLightmappedSurfaceCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightmassCharacterIndirectDetailVolume @ 147eb8b50

void __cdecl EmptyLinkFunctionForGeneratedCodeLightmassCharacterIndirectDetailVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightmassImportanceVolume @ 147eb8b60

void __cdecl EmptyLinkFunctionForGeneratedCodeLightmassImportanceVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLightmassPrimitiveSettingsObject @ 147eb8b70

void __cdecl EmptyLinkFunctionForGeneratedCodeLightmassPrimitiveSettingsObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalMessage @ 147eb8b80

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalMessage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalPlayer @ 147eb8b90

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalPlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocationVolume @ 147eb8ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeLocationVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialCacheVirtualTexture @ 147eb8bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialCacheVirtualTexture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialCacheVirtualTextureTag @ 147eb8bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialCacheVirtualTextureTag(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialInstanceActor @ 147eb8bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialInstanceActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMaterialMerging @ 147eb8be0

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialMerging(void)

{
  return;
}

// FOnActorReady_DelegateWrapper @ 147eb9d50

FActorInstanceHandle * __cdecl
FOnActorReady_DelegateWrapper
          (FActorInstanceHandle *__return_storage_ptr__,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FActorInstanceHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  FActorInstanceHandle *pFVar3;
  UObject *this;
  UFunction *pUVar4;
  FDestructionSentinel local_68;
  FWeakObjectPtr local_48;
  FWeakObjectPtr FStack_40;
  IActorInstanceManagerInterface *local_38;
  undefined8 uStack_30;
  FActorInstanceHandle local_28;
  
  local_38 = (param_2->ManagerInterface).InterfaceInstance;
  uStack_30._0_4_ = param_2->InstanceIndex;
  uStack_30._4_1_ = param_2->ResolutionStatus;
  uStack_30._5_3_ = *(undefined3 *)&param_2->field_0x1d;
  local_28.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
  local_28.InstanceIndex = -1;
  local_28.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_28.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_28.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_28.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_48 = (param_2->ReferenceObject).WeakPtr;
  FStack_40 = (param_2->ManagerInterface).ObjectInstance.WeakPtr;
  local_28.ResolutionStatus = Invalid;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_68);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActorInstanceHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActorInstanceHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar4 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar4,&local_48);
  FActorInstanceHandle::FActorInstanceHandle(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetClusterInput @ 147ebefe0

FLightmapClusterResourceInput * __cdecl
GetClusterInput(FLightmapClusterResourceInput *__return_storage_ptr__,FMeshMapBuildData *param_1)

{
  FLightMap *pFVar1;
  ULightMapVirtualTexture2D *pUVar2;
  FShadowMap *pFVar3;
  UTexture2D *pUVar4;
  longlong lVar5;
  FShadowMap2D *this;
  UTexture2D *pUVar6;
  
  __return_storage_ptr__->LightMapTextures[0] = (UTexture2D *)0x0;
  __return_storage_ptr__->LightMapTextures[1] = (UTexture2D *)0x0;
  __return_storage_ptr__->SkyOcclusionTexture = (UTexture2D *)0x0;
  __return_storage_ptr__->AOMaterialMaskTexture = (UTexture2D *)0x0;
  __return_storage_ptr__->LightMapVirtualTextures[0] = (ULightMapVirtualTexture2D *)0x0;
  __return_storage_ptr__->LightMapVirtualTextures[1] = (ULightMapVirtualTexture2D *)0x0;
  pFVar1 = (param_1->LightMap).Reference;
  __return_storage_ptr__->ShadowMapTexture = (UTexture2D *)0x0;
  if (pFVar1 != (FLightMap *)0x0) {
    lVar5 = (**(code **)(pFVar1->_padding_ + 0x30))();
    if (lVar5 != 0) {
      pUVar6 = *(UTexture2D **)(lVar5 + 0x30);
      pUVar4 = *(UTexture2D **)(lVar5 + 0x28);
      __return_storage_ptr__->LightMapTextures[0] = *(UTexture2D **)(lVar5 + 0x20);
      __return_storage_ptr__->LightMapTextures[1] = pUVar4;
      __return_storage_ptr__->SkyOcclusionTexture = pUVar6;
      __return_storage_ptr__->AOMaterialMaskTexture = *(UTexture2D **)(lVar5 + 0x38);
      pUVar2 = *(ULightMapVirtualTexture2D **)(lVar5 + 0x50);
      __return_storage_ptr__->LightMapVirtualTextures[0] =
           *(ULightMapVirtualTexture2D **)(lVar5 + 0x48);
      __return_storage_ptr__->LightMapVirtualTextures[1] = pUVar2;
    }
  }
  pFVar3 = (param_1->ShadowMap).Reference;
  if (pFVar3 != (FShadowMap *)0x0) {
    this = (FShadowMap2D *)(**(code **)(pFVar3->_padding_ + 0x28))();
    if (this != (FShadowMap2D *)0x0) {
      pUVar6 = FShadowMap2D::GetTexture(this);
      __return_storage_ptr__->ShadowMapTexture = pUVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetComponentEndOfFrameUpdateMode @ 147ebf090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EComponentEndOfFrameUpdateMode __cdecl GetComponentEndOfFrameUpdateMode(UWorld *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  EComponentEndOfFrameUpdateMode EVar4;
  EComponentEndOfFrameUpdateMode EVar5;
  
  pTVar1 = CVarAllowAsyncRenderThreadUpdates.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_147ebf0bd;
  }
  lVar3 = 0;
LAB_147ebf0bd:
  EVar5 = *(EComponentEndOfFrameUpdateMode *)((longlong)pTVar1->ShadowedValue + lVar3);
  EVar4 = Async;
  if (EVar5 < Async) {
    EVar4 = EVar5;
  }
  EVar5 = GameThread;
  if (EVar4 != GameThread) {
    EVar5 = EVar4;
  }
  return EVar5;
}

// GetDefaultPrecomputedLightingParameters @ 147ebf3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl GetDefaultPrecomputedLightingParameters(FPrecomputedLightingUniformParameters *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TStaticArray<UE::Math::TVector4<float>,2,4294967295> *pTVar3;
  longlong lVar4;
  
  uVar2 = _UNK_15076b1f8;
  uVar1 = ___xmm_3f8000003f8000003f8000003f800000;
  pTVar3 = &param_1->LightMapAdd;
  *(undefined8 *)&(param_1->StaticShadowMapMasks).field0_0x0 =
       ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)((longlong)&(param_1->StaticShadowMapMasks).field0_0x0 + 8) = uVar2;
  *(undefined8 *)&(param_1->InvUniformPenumbraSizes).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(param_1->InvUniformPenumbraSizes).field0_0x0 + 8) = 0;
  (param_1->LightMapCoordinateScaleBias).field0_0x0._s_0.X = 1.0;
  *(undefined8 *)((longlong)&(param_1->LightMapCoordinateScaleBias).field0_0x0 + 4) = 0x3f800000;
  (param_1->LightMapCoordinateScaleBias).field0_0x0._s_0.W = 0.0;
  (param_1->ShadowMapCoordinateScaleBias).field0_0x0._s_0.X = 1.0;
  *(undefined8 *)((longlong)&(param_1->ShadowMapCoordinateScaleBias).field0_0x0 + 4) = 0x3f800000;
  (param_1->ShadowMapCoordinateScaleBias).field0_0x0._s_0.W = 0.0;
  lVar4 = 2;
  do {
    *(undefined8 *)&pTVar3[-1].Elements[0].field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&pTVar3[-1].Elements[0].field0_0x0 + 8) = uVar2;
    *(undefined8 *)&pTVar3->Elements[0].field0_0x0 = 0;
    *(undefined8 *)((longlong)&pTVar3->Elements[0].field0_0x0 + 8) = 0;
    pTVar3 = (TStaticArray<UE::Math::TVector4<float>,2,4294967295> *)(pTVar3->Elements + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined8 *)(param_1->LightmapVTPackedPageTableUniform).Elements = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedPageTableUniform).Elements[0].field_0x8 = 0;
  *(undefined8 *)((param_1->LightmapVTPackedPageTableUniform).Elements + 1) = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedPageTableUniform).Elements[1].field_0x8 = 0;
  *(undefined8 *)(param_1->LightmapVTPackedUniform).Elements = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[0].field_0x8 = 0;
  *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 1) = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[1].field_0x8 = 0;
  *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 2) = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[2].field_0x8 = 0;
  *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 3) = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[3].field_0x8 = 0;
  *(undefined8 *)((param_1->LightmapVTPackedUniform).Elements + 4) = 0;
  *(undefined8 *)&(param_1->LightmapVTPackedUniform).Elements[4].field_0x8 = 0;
  return;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147ec02a0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata
          (FLocalVertexFactoryUniformShaderParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FLocalVertexFactoryUniformShaderParameters::GetStructMetadata'::__l2::<lambda_1>::operator()
              (auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FLocalVertexFactoryUniformShaderParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,
                 L"FLocalVertexFactoryUniformShaderParameters",
                 L"FLocalVertexFactoryUniformShaderParameters",L"LocalVF",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LocalVertexFactory.h"
                 ,0x13,0x40,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FLocalVertexFactoryUniformShaderParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147ec02b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FPrecomputedLightingUniformParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FPrecomputedLightingUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()
              (auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FPrecomputedLightingUniformParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FPrecomputedLightingUniformParameters"
                 ,L"FPrecomputedLightingUniformParameters",L"PrecomputedLightingBuffer",
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LightmapUniformShaderParameters.h"
                 ,0x11,0xf0,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FPrecomputedLightingUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetLocalVFUniformShaderParameters @ 147ec1510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
GetLocalVFUniformShaderParameters
          (FLocalVertexFactoryUniformShaderParameters *param_1,FLocalVertexFactory *param_2,
          uint param_3,FColorVertexBuffer *param_4,int param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FRHIShaderResourceView *pFVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  param_1->LODLightmapDataIndex = param_3;
  uVar9 = (ulonglong)GMaxRHIShaderPlatform;
  iVar10 = 0;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].bContainsValidPlatformInfo == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ce,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar9].bSupportsManualVertexFetch == 0) {
    param_1->VertexFetch_PositionBuffer = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    param_1->VertexFetch_PreSkinPositionBuffer =
         (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    param_1->VertexFetch_PackedTangentsBuffer =
         (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    param_1->VertexFetch_TexCoordBuffer = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    iVar8 = iVar10;
  }
  else {
    param_1->VertexFetch_PositionBuffer = (FRHIShaderResourceView *)(param_2->Data)._padding_;
    pFVar3 = (param_2->Data).PreSkinPositionComponentSRV;
    pFVar7 = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      pFVar7 = pFVar3;
    }
    param_1->VertexFetch_PreSkinPositionBuffer = pFVar7;
    param_1->VertexFetch_PackedTangentsBuffer = (FRHIShaderResourceView *)(param_2->Data)._padding_;
    param_1->VertexFetch_TexCoordBuffer = (FRHIShaderResourceView *)(param_2->Data)._padding_;
    if (param_4 == (FColorVertexBuffer *)0x0) {
      param_1->VertexFetch_ColorComponentsBuffer =
           (FRHIShaderResourceView *)(param_2->Data)._padding_;
      iVar8 = (int)(param_2->Data)._padding_;
    }
    else {
      param_1->VertexFetch_ColorComponentsBuffer = (param_4->ColorComponentsSRV).Reference;
      iVar8 = -(uint)(1 < param_4->NumVertices);
    }
  }
  if (param_1->VertexFetch_ColorComponentsBuffer == (FRHIShaderResourceView *)0x0) {
    param_1->VertexFetch_ColorComponentsBuffer =
         (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
  }
  bVar1 = *(byte *)((longlong)&(param_2->Data)._padding_ + 5);
  cVar2 = *(char *)((longlong)&(param_2->Data)._padding_ + 4);
  bVar5 = RHISupportsAbsoluteVertexID((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  bVar6 = RHISupportsAbsoluteVertexID((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  (param_1->VertexFetch_Parameters).field0_0x0._s_0.X = iVar8;
  *(uint *)((longlong)&(param_1->VertexFetch_Parameters).field0_0x0 + 4) = (uint)bVar1;
  if (bVar5) {
    param_5 = iVar10;
  }
  *(int *)((longlong)&(param_1->VertexFetch_Parameters).field0_0x0 + 8) = (int)cVar2;
  (param_1->VertexFetch_Parameters).field0_0x0._s_0.W = param_5;
  if (bVar6) {
    param_6 = iVar10;
  }
  param_1->PreSkinBaseVertexIndex = param_6;
  return;
}

// GetLumenVisualizationData @ 147ec1860

FLumenVisualizationData * __cdecl GetLumenVisualizationData(void)

{
  if (!GLumenVisualizationData.bIsInitialized) {
    FLumenVisualizationData::Initialize(&GLumenVisualizationData);
    return &GLumenVisualizationData;
  }
  return &GLumenVisualizationData;
}

// GetMaterialCacheTileBorderWidth @ 147ec1a70

uint __cdecl GetMaterialCacheTileBorderWidth(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      iVar1 = (**(code **)(*(longlong *)CVarMaterialCacheTileBorderWidth._padding_ + 200))();
      Width = FVirtualTextureBuildSettings::ClampAndAlignTileBorderSize(iVar1);
      _Init_thread_footer(&_TSS0);
    }
  }
  return Width;
}

// GetMaterialCacheTileWidth @ 147ec1af0

uint __cdecl GetMaterialCacheTileWidth(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      iVar1 = (**(code **)(*(longlong *)CVarMaterialCacheTileWidth._padding_ + 200))();
      Width = FVirtualTextureBuildSettings::ClampAndAlignTileSize(iVar1);
      _Init_thread_footer(&_TSS0);
    }
  }
  return Width;
}

// GetPrecomputedLightingParameters @ 147ec3720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
GetPrecomputedLightingParameters
          (Type param_1,FPrecomputedLightingUniformParameters *param_2,FLightCacheInterface *param_3
          )

{
  byte bVar1;
  FLightmapResourceCluster *pFVar2;
  IAllocatedVirtualTexture *pIVar3;
  code *pcVar4;
  undefined8 *puVar5;
  bool bVar6;
  FShadowMapInteraction *pFVar7;
  TVector4<float>_u_0 *pTVar8;
  longlong lVar9;
  FStaticShaderPlatform FVar10;
  TAlignedElement<UE::Math::TIntVector4<unsigned_int>,16> *pTVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  TStaticArray<UE::Math::TVector4<float>,2,4294967295> *pTVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_458 [48];
  UShadowMapTexture2D *local_428;
  ULightMapVirtualTexture2D *pUStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  EShadowMapInteractionType local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  FShadowMapInteraction local_3c8;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  ULightMapTexture2D *local_308;
  ULightMapTexture2D *pUStack_300;
  ULightMapTexture2D *local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  ULightMapTexture2D *local_2a8;
  undefined8 uStack_2a0;
  ULightMapVirtualTexture2D *local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  TVector4<float>_u_0 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  FShadowMapInteraction local_188;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_458;
  if (param_1 == Num) {
    FVar10.Platform = SP_NumPlatforms;
  }
  else {
    FVar10.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  bVar6 = UseVirtualTextureLightmap(FVar10,(ITargetPlatformSettings *)0x0);
  uVar13 = 0;
  if (param_3 == (FLightCacheInterface *)0x0) {
    local_3c8.Type = SMIT_None;
    local_3c8.ShadowTexture = (UShadowMapTexture2D *)0x0;
    local_3c8.VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
    local_3c8.InvUniformPenumbraSize.field0_0x0._0_8_ = 0;
    local_3c8.InvUniformPenumbraSize.field0_0x0._8_8_ = 0;
    pFVar7 = &local_3c8;
    local_3c8.bChannelValid[0] = false;
    local_3c8.bChannelValid[1] = false;
    local_3c8.bChannelValid[2] = false;
    local_3c8.bChannelValid[3] = false;
  }
  else {
    pFVar7 = FLightCacheInterface::GetShadowMapInteraction(param_3,&local_188,param_1);
  }
  uVar21 = _UNK_15076b1f8;
  uVar20 = ___xmm_3f8000003f8000003f8000003f800000;
  local_418 = (pFVar7->CoordinateScale).field0_0x0._s_0.X;
  dStack_410 = (pFVar7->CoordinateScale).field0_0x0._s_0.Y;
  local_428 = pFVar7->ShadowTexture;
  pUStack_420 = pFVar7->VirtualTexture;
  local_3f8._0_1_ = pFVar7->bChannelValid[0];
  local_3f8._1_1_ = pFVar7->bChannelValid[1];
  local_3f8._2_1_ = pFVar7->bChannelValid[2];
  local_3f8._3_1_ = pFVar7->bChannelValid[3];
  local_3f8._4_4_ = *(undefined4 *)&pFVar7->field_0x34;
  uStack_3f0 = *(undefined8 *)&pFVar7->field_0x38;
  local_408 = (pFVar7->CoordinateBias).field0_0x0._s_0.X;
  dStack_400 = (pFVar7->CoordinateBias).field0_0x0._s_0.Y;
  local_3d8 = pFVar7->Type;
  uStack_3d4 = *(undefined4 *)&pFVar7->field_0x54;
  uStack_3d0 = *(undefined4 *)&pFVar7->field_0x58;
  uStack_3cc = *(undefined4 *)&pFVar7->field_0x5c;
  local_3e8 = *(undefined8 *)&(pFVar7->InvUniformPenumbraSize).field0_0x0;
  uStack_3e0 = *(undefined8 *)((longlong)&(pFVar7->InvUniformPenumbraSize).field0_0x0 + 8);
  if (local_3d8 == SMIT_Texture) {
    (param_2->ShadowMapCoordinateScaleBias).field0_0x0._s_0.X = (float)local_418;
    (param_2->ShadowMapCoordinateScaleBias).field0_0x0._s_0.Y = (float)dStack_410;
    (param_2->ShadowMapCoordinateScaleBias).field0_0x0._s_0.Z = (float)local_408;
    (param_2->ShadowMapCoordinateScaleBias).field0_0x0._s_0.W = (float)dStack_400;
    (param_2->StaticShadowMapMasks).field0_0x0._s_0.X = (float)(byte)(undefined1)local_3f8;
    (param_2->StaticShadowMapMasks).field0_0x0._s_0.Y = (float)(byte)local_3f8._1_1_;
    (param_2->StaticShadowMapMasks).field0_0x0._s_0.Z = (float)(byte)local_3f8._2_1_;
    (param_2->StaticShadowMapMasks).field0_0x0._s_0.W = (float)(byte)local_3f8._3_1_;
    uVar18 = local_3e8;
    uVar19 = uStack_3e0;
  }
  else {
    (param_2->ShadowMapCoordinateScaleBias).field0_0x0._s_0.X = 1.0;
    uVar18 = 0;
    uVar19 = 0;
    *(undefined8 *)((longlong)&(param_2->ShadowMapCoordinateScaleBias).field0_0x0 + 4) = 0x3f800000;
    (param_2->ShadowMapCoordinateScaleBias).field0_0x0._s_0.W = 0.0;
    local_368 = uVar20;
    uStack_360 = uVar21;
    *(undefined8 *)&(param_2->StaticShadowMapMasks).field0_0x0 = uVar20;
    *(undefined8 *)((longlong)&(param_2->StaticShadowMapMasks).field0_0x0 + 8) = uVar21;
    local_358 = 0;
    uStack_350 = 0;
  }
  *(undefined8 *)&(param_2->InvUniformPenumbraSizes).field0_0x0 = uVar18;
  *(undefined8 *)((longlong)&(param_2->InvUniformPenumbraSizes).field0_0x0 + 8) = uVar19;
  if (param_3 == (FLightCacheInterface *)0x0) {
    pTVar8 = &local_268;
    local_268._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_268._8_8_ = _UNK_150689648;
    local_258 = ___xmm_3f800000000000000000000000000000;
    uStack_250 = _UNK_150689648;
    local_248 = ___xmm_3f800000000000000000000000000000;
    uStack_240 = _UNK_150689648;
    local_238 = ___xmm_3f800000000000000000000000000000;
    uStack_230 = _UNK_150689648;
    local_228 = 0;
    uStack_220 = 0;
    local_208 = ___xmm_3f800000000000000000000000000000;
    uStack_200 = _UNK_150689648;
    local_1f8 = ___xmm_3f800000000000000000000000000000;
    uStack_1f0 = _UNK_150689648;
    local_1e8 = ___xmm_3f800000000000000000000000000000;
    uStack_1e0 = _UNK_150689648;
    local_1d8 = ___xmm_3f800000000000000000000000000000;
    uStack_1d0 = _UNK_150689648;
    local_218 = 0;
    local_1c8 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
  }
  else {
    pTVar8 = (TVector4<float>_u_0 *)
             FLightCacheInterface::GetLightMapInteraction(param_3,&local_128,param_1);
    uVar20 = ___xmm_3f8000003f8000003f8000003f800000;
    uVar21 = _UNK_15076b1f8;
  }
  local_348 = *(undefined8 *)&((TVector4<float> *)&(pTVar8->_s_0).X)->field0_0x0;
  uStack_340._0_4_ = *(float *)((longlong)pTVar8 + 8);
  uStack_340._4_4_ = *(float *)((longlong)pTVar8 + 0xc);
  local_338 = *(undefined8 *)&(&pTVar8->_s_0)[1].X;
  uStack_330._0_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar8 + 1))->Z;
  uStack_330._4_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar8 + 1))->W;
  local_328 = *(undefined8 *)&((TVector4<float> *)(pTVar8->XYZW + 8))->field0_0x0;
  uStack_320 = *(undefined8 *)(pTVar8->XYZW + 10);
  local_318 = *(undefined8 *)&((TVector4<float> *)(pTVar8->XYZW + 0xc))->field0_0x0;
  uStack_310 = *(undefined8 *)(pTVar8->XYZW + 0xe);
  local_308 = *(ULightMapTexture2D **)(pTVar8->XYZW + 0x10);
  pUStack_300 = *(ULightMapTexture2D **)(pTVar8->XYZW + 0x12);
  local_2f8 = *(ULightMapTexture2D **)(pTVar8->XYZW + 0x14);
  lStack_2f0 = *(longlong *)(pTVar8->XYZW + 0x16);
  local_2e8 = *(undefined8 *)&((TVector4<float> *)(pTVar8->XYZW + 0x18))->field0_0x0;
  uStack_2e0 = *(undefined8 *)(pTVar8->XYZW + 0x1a);
  local_2d8 = *(undefined8 *)&((TVector4<float> *)(pTVar8->XYZW + 0x1c))->field0_0x0;
  uStack_2d0 = *(undefined8 *)(pTVar8->XYZW + 0x1e);
  local_2c8 = *(undefined8 *)&((TVector4<float> *)(pTVar8->XYZW + 0x20))->field0_0x0;
  uStack_2c0 = *(undefined8 *)(pTVar8->XYZW + 0x22);
  local_2b8 = *(undefined8 *)&((TVector4<float> *)(pTVar8->XYZW + 0x24))->field0_0x0;
  uStack_2b0 = *(undefined8 *)(pTVar8->XYZW + 0x26);
  local_2a8 = *(ULightMapTexture2D **)(pTVar8->XYZW + 0x28);
  uStack_2a0 = *(undefined8 *)(pTVar8->XYZW + 0x2a);
  local_288 = (((TVector2<double> *)(pTVar8->XYZW + 0x30))->field0_0x0)._s_0.X;
  dStack_280 = *(double *)(pTVar8->XYZW + 0x32);
  local_298 = *(ULightMapVirtualTexture2D **)(pTVar8->XYZW + 0x2c);
  uStack_290 = *(undefined8 *)(pTVar8->XYZW + 0x2e);
  uVar18 = uStack_290;
  local_278 = (((TVector2<double> *)(pTVar8->XYZW + 0x34))->field0_0x0)._s_0.X;
  dStack_270 = *(double *)(pTVar8->XYZW + 0x36);
  uStack_290._0_4_ = (int)*(undefined8 *)(pTVar8->XYZW + 0x2e);
  if ((int)uStack_290 != 2) {
    (param_2->LightMapCoordinateScaleBias).field0_0x0._s_0.X = 1.0;
    *(undefined8 *)((longlong)&(param_2->LightMapCoordinateScaleBias).field0_0x0 + 4) = 0x3f800000;
    lVar9 = 2;
    (param_2->LightMapCoordinateScaleBias).field0_0x0._s_0.W = 0.0;
    pTVar14 = &param_2->LightMapAdd;
    do {
      *(undefined8 *)&pTVar14[-1].Elements[0].field0_0x0 = uVar20;
      *(undefined8 *)((longlong)&pTVar14[-1].Elements[0].field0_0x0 + 8) = uVar21;
      *(undefined8 *)&pTVar14->Elements[0].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar14->Elements[0].field0_0x0 + 8) = 0;
      pTVar14 = (TStaticArray<UE::Math::TVector4<float>,2,4294967295> *)(pTVar14->Elements + 1);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    return;
  }
  uStack_290 = uVar18;
  AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_1);
  (param_2->LightMapCoordinateScaleBias).field0_0x0._s_0.X = (float)local_288;
  (param_2->LightMapCoordinateScaleBias).field0_0x0._s_0.Y = (float)dStack_280;
  (param_2->LightMapCoordinateScaleBias).field0_0x0._s_0.Z = (float)local_278;
  (param_2->LightMapCoordinateScaleBias).field0_0x0._s_0.W = (float)dStack_270;
  uVar17 = uVar13;
  if (bVar6) {
    if ((param_3 == (FLightCacheInterface *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("LCI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightmapUniformShaderParameters.cpp"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = param_3->ResourceCluster;
    if ((pFVar2 == (FLightmapResourceCluster *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("ResourceCluster",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightmapUniformShaderParameters.cpp"
                           ,0x65,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                           ,0xdc6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pFVar2->AllocatedVT;
    if (pIVar3 != (IAllocatedVirtualTexture *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,&param_2->LightmapVTPackedPageTableUniform);
      bVar1 = (pIVar3->Description).NumTextureLayers;
      uVar17 = (ulonglong)bVar1;
      uVar16 = uVar13;
      if (bVar1 != 0) {
        do {
          (**(code **)(pIVar3->_padding_ + 0x40))
                    (pIVar3,&(param_2->LightmapVTPackedUniform).Elements[0].field_0x0 + uVar16,
                     uVar13);
          uVar15 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar15;
          uVar16 = uVar16 + 0x10;
        } while (uVar15 < bVar1);
      }
    }
    if (4 < (uint)uVar17) goto LAB_147ec3b3d;
  }
  else {
    *(undefined8 *)(param_2->LightmapVTPackedPageTableUniform).Elements = 0;
    *(undefined8 *)&(param_2->LightmapVTPackedPageTableUniform).Elements[0].field_0x8 = 0;
    *(undefined8 *)((param_2->LightmapVTPackedPageTableUniform).Elements + 1) = 0;
    *(undefined8 *)&(param_2->LightmapVTPackedPageTableUniform).Elements[1].field_0x8 = 0;
  }
  pTVar11 = (param_2->LightmapVTPackedUniform).Elements + uVar17;
  uVar13 = (ulonglong)(5 - (int)uVar17);
  do {
    *(undefined8 *)pTVar11 = 0;
    *(undefined8 *)&pTVar11->field_0x8 = 0;
    pTVar11 = pTVar11 + 1;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
LAB_147ec3b3d:
  puVar12 = &local_2c8;
  puVar5 = &local_2e8;
  if ((char)uStack_2a0 != '\0') {
    puVar12 = &local_328;
    puVar5 = &local_348;
  }
  uVar20 = puVar5[1];
  uVar21 = *puVar12;
  uVar18 = puVar12[1];
  *(undefined8 *)&(param_2->LightMapScale).Elements[0].field0_0x0 = *puVar5;
  *(undefined8 *)((longlong)&(param_2->LightMapScale).Elements[0].field0_0x0 + 8) = uVar20;
  uVar20 = puVar5[2];
  uVar19 = puVar5[3];
  *(undefined8 *)&(param_2->LightMapAdd).Elements[0].field0_0x0 = uVar21;
  *(undefined8 *)((longlong)&(param_2->LightMapAdd).Elements[0].field0_0x0 + 8) = uVar18;
  uVar21 = puVar12[2];
  uVar18 = puVar12[3];
  *(undefined8 *)&(param_2->LightMapScale).Elements[1].field0_0x0 = uVar20;
  *(undefined8 *)((longlong)&(param_2->LightMapScale).Elements[1].field0_0x0 + 8) = uVar19;
  *(undefined8 *)&(param_2->LightMapAdd).Elements[1].field0_0x0 = uVar21;
  *(undefined8 *)((longlong)&(param_2->LightMapAdd).Elements[1].field0_0x0 + 8) = uVar18;
  return;
}

// GetTypeHash @ 147ec6f60

uint __cdecl GetTypeHash(FHLODInstancingKey *param_1)

{
  UMaterialInterface *pUVar1;
  UStaticMesh *pUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar1 = (param_1->Material).field0_0x0.DebugPtr;
  pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  uVar3 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar5 = (uVar3 >> 0x10 ^ uVar3) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar6 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar4 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar5 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  return (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 147ec7050

uint __cdecl GetTypeHash(FLightmapClusterResourceInput *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = ((uint)((ulonglong)param_1->ShadowMapTexture >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->ShadowMapTexture >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = ((uint)((ulonglong)param_1->LightMapVirtualTextures[1] >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->LightMapVirtualTextures[1] >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar1 = ((uint)((ulonglong)param_1->LightMapVirtualTextures[0] >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->LightMapVirtualTextures[0] >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar2 = ((uint)((ulonglong)param_1->LightMapTextures[1] >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->LightMapTextures[1] >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uint)((ulonglong)param_1->LightMapTextures[0] >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->LightMapTextures[0] >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  return (uVar3 >> 2) + 0x9e3779b9 +
         ((uVar2 >> 2) + 0x9e3779b9 +
          ((uVar1 >> 2) +
           ((uVar5 >> 0x10 ^ uVar5) + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4) +
           uVar1 * 0x40 + -0x61c88647 ^ uVar1) + uVar2 * 0x40 ^ uVar2) + uVar3 * 0x40 ^ uVar3;
}

// HLODConsoleCommand @ 147ec8b50

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
HLODConsoleCommand(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  AActor *this;
  int iVar7;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  wchar_t *_Str;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  if (param_1->ArrayNum == 1) {
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar5 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar5;
    }
    iVar7 = _wtoi(_Str);
    if ((iVar7 == 0) || (iVar7 == 1)) {
      FlushRenderingCommands();
      pTVar8 = UWorld::GetLevels(param_2);
      pFVar12 = (pTVar8->AllocatorInstance).Data;
      uVar2 = pTVar8->ArrayNum;
      uVar9 = (ulonglong)(int)uVar2;
      pFVar5 = pFVar12 + uVar9 * 8;
      while( true ) {
        if (pTVar8->ArrayNum != (int)uVar9) {
          `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar5) break;
        lVar6 = *(longlong *)pFVar12;
        puVar11 = *(undefined8 **)(lVar6 + 0xa0);
        iVar3 = *(int *)(lVar6 + 0xa8);
        puVar1 = puVar11 + iVar3;
        while( true ) {
          if (*(int *)(lVar6 + 0xa8) != iVar3) {
            `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (puVar11 == puVar1) break;
          this = (AActor *)*puVar11;
          if (this != (AActor *)0x0) {
            pUVar10 = ALODActor::StaticClass();
            iVar4 = (int)pUVar10->_padding_;
            if ((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar10->_padding_)) {
              (**(code **)(this->_padding_ + 0x368))
                        (this,CONCAT71((int7)(int3)((uint)iVar4 >> 8),iVar7 != 1));
              AActor::MarkComponentsRenderStateDirty(this);
            }
          }
          puVar11 = puVar11 + 1;
        }
        uVar9 = (ulonglong)uVar2;
        pFVar12 = pFVar12 + 8;
      }
    }
  }
  return;
}

// IsMaterialCacheEnabled @ 147ecdcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsMaterialCacheEnabled(FStaticShaderPlatform param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(longlong *)CVarMaterialCacheSupported._padding_ + 0xc0))();
  if (cVar1 != '\0') {
    bVar2 = UseVirtualTexturing(param_1);
    if (bVar2) {
      cVar1 = (**(code **)(*(longlong *)CVarMaterialCacheEnabled._padding_ + 0xc0))();
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsMaterialCacheSupported @ 147ecdd50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsMaterialCacheSupported(FStaticShaderPlatform param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(longlong *)CVarMaterialCacheSupported._padding_ + 0xc0))();
  if (cVar1 != '\0') {
    bVar2 = UseVirtualTexturing(param_1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsTexelDebuggingEnabled @ 147ecdf30

bool __cdecl IsTexelDebuggingEnabled(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarTexelDebugging.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0] != 0;
}

// ListUnbuiltHLODActors @ 147ece600

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
ListUnbuiltHLODActors(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  ALODActor *this;
  UClass *local_res10;
  LARGE_INTEGER local_res18;
  ALODActor *local_res20;
  FString local_b8;
  TActorIteratorBase<TActorIterator<ALODActor>_> local_a8;
  
  pUVar6 = ALODActor::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  local_a8.Flags = OnlyActiveLevels|SkipPendingKill;
  local_a8.State.bIsSet = false;
  local_res10 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FActorIteratorState::FActorIteratorState
            (&local_a8.State.TypedValue,param_2,(TSubclassOf<AActor>)&local_res10);
  local_a8.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<ALODActor>_>::operator++(&local_a8);
  dVar4 = __real_4170000000000000;
  dVar3 = __real_3fe0000000000000;
  while( true ) {
    if ((local_a8.State.bIsSet == false) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_a8.State.TypedValue.ReachedEnd != false) {
      if (local_a8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_a8.State.TypedValue.CurrentWorld,
                   local_a8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      if (2 < (byte)LogHLOD._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogHLOD);
      }
      return;
    }
    if ((local_a8.State.bIsSet == false) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) break;
    pAVar7 = FActorIteratorState::GetActorChecked(&local_a8.State.TypedValue);
    this = CastChecked<ALODActor,AActor>(pAVar7);
    if (((this->_padding_ & 0x20000000000) == 0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
      local_res20 = this;
      QueryPerformanceCounter(&local_res18);
      dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      if (dVar3 < dVar2 - this->LastIsBuiltTime) {
        bVar5 = `ALODActor::IsBuilt'::__l2::<lambda_1>::operator()(&local_res20);
        this->bCachedIsBuilt = '\0';
        this->field_0x341 = this->field_0x341 | bVar5 << 4;
        this->LastIsBuiltTime = dVar2;
      }
      if ((this->bCachedIsBuilt == '\0') && (bVar5 = ALODActor::HasValidLODChildren(this), bVar5)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b8,(UObject *)param_2);
        if (2 < (byte)LogHLOD._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogHLOD);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    TActorIteratorBase<TActorIterator<ALODActor>_>::operator++(&local_a8);
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// MaterialCacheAttributeIdentityTest @ 147ecf540

bool __cdecl
MaterialCacheAttributeIdentityTest
          (TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<EMaterialCacheAttribute_const_,int> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement local_48 [16];
  
  pFVar13 = (FScriptContainerElement *)param_2->DataPtr;
  pFVar8 = pFVar13 + param_2->ArrayNum;
  if (pFVar13 != pFVar8) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar12 = pFVar13;
    do {
      pFVar6 = pFVar2;
      while( true ) {
        if (pFVar6 == pFVar2 + param_1->ArrayNum) {
          return false;
        }
        if (*pFVar6 == *pFVar12) break;
        pFVar6 = pFVar6 + 1;
      }
      if ((int)pFVar6 - (int)pFVar2 == -1) {
        return false;
      }
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != pFVar8);
    do {
      pFVar2 = (param_1->AllocatorInstance).Data;
      local_48[0] = *pFVar13;
      if (((pFVar2 <= local_48) && (local_48 < pFVar2 + param_1->ArrayMax)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar1 = param_1->ArrayNum;
      if (iVar1 != 0) {
        pFVar2 = (param_1->AllocatorInstance).Data;
        iVar14 = 0;
        lVar9 = 0;
        bVar4 = *pFVar2 != local_48[0];
        FVar7 = local_48[0];
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + 1;
            if (iVar1 <= lVar9) break;
          } while (bVar4 == (pFVar2[lVar9] != FVar7));
          if (bVar4 != false) {
            if (iVar14 != iVar10) {
              memmove(pFVar2 + iVar14,pFVar2 + iVar10,(longlong)(iVar11 - iVar10));
              FVar7 = local_48[0];
            }
            iVar14 = iVar14 + (iVar11 - iVar10);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar10 = iVar11;
        } while (lVar9 < iVar1);
        param_1->ArrayNum = iVar14;
      }
      pFVar13 = pFVar13 + 1;
    } while (pFVar13 != pFVar8);
  }
  return true;
}

// MaterialCacheIsExpressionNonUVDerived @ 147ecf740

bool __cdecl MaterialCacheIsExpressionNonUVDerived(UMaterialExpression *param_1,ulong64 *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  
  if (param_1 != (UMaterialExpression *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
    lVar2 = param_1->_padding_;
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      if ((0x3f < (int)param_1[1]._padding_) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TexCoord->CoordinateIndex < 64",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MaterialCache\\MaterialCacheMaterial.cpp"
                             ,0x18,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *param_2 = *param_2 | 1L << ((longlong)(int)param_1[1]._padding_ & 0x3fU);
      goto LAB_147ecf833;
    }
  }
  if (param_1 != (UMaterialExpression *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister();
    lVar2 = param_1->_padding_;
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      if ((0x3f < *(byte *)((longlong)&param_1[2].MenuCategories.ArrayNum + 1)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Sample->ConstCoordinate < 64",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MaterialCache\\MaterialCacheMaterial.cpp"
                             ,0x1d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *param_2 = *param_2 |
                 1L << ((ulonglong)*(byte *)((longlong)&param_1[2].MenuCategories.ArrayNum + 1) &
                       0x3f);
    }
  }
LAB_147ecf833:
  pUVar6 = Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister();
  lVar2 = param_1->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    pUVar6 = Z_Construct_UClass_UMaterialExpressionLocalPosition_NoRegister();
    lVar2 = param_1->_padding_;
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pUVar6 = Z_Construct_UClass_UMaterialExpressionVertexNormalWS_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          pUVar6 = Z_Construct_UClass_UMaterialExpressionVertexTangentWS_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            pUVar6 = Z_Construct_UClass_UMaterialExpressionPixelNormalWS_NoRegister();
            iVar1 = (int)pUVar6->_padding_;
            if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              pUVar6 = Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_NoRegister();
              iVar1 = (int)pUVar6->_padding_;
              if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
                  != &pUVar6->_padding_)) {
                pUVar6 = Z_Construct_UClass_UMaterialExpressionTangent_NoRegister();
                iVar1 = (int)pUVar6->_padding_;
                if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar6->_padding_)) {
                  return false;
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

// OnVirtualTextureDestroyed @ 147ed0bb0

void __cdecl OnVirtualTextureDestroyed(FVirtualTextureProducerHandle *param_1,void *param_2)

{
  IRendererModule *pIVar1;
  
  if (*(longlong *)((longlong)param_2 + 0x58) != 0) {
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x178))(pIVar1,param_2);
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,*(undefined8 *)((longlong)param_2 + 0x58));
    *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  }
  FLightmapResourceCluster::ConditionalCreateAllocatedVT(param_2);
  FLightmapResourceCluster::UpdateUniformBuffer(param_2);
  return;
}

// RHISupportsAbsoluteVertexID @ 147ed4800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl RHISupportsAbsoluteVertexID(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0
      ) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,199,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].Language == LANGUAGE_Vulkan) {
    return true;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0
      ) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,199,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].Language == LANGUAGE_Vulkan) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo ==
         0) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                                  ("IsValid(Platform)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                   ,0xe2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// RecordWorldCountsToCSV @ 147ed4d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl RecordWorldCountsToCSV(UWorld *param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FCsvProfiler *this;
  FName *pFVar12;
  FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_8_::FStat_STAT_RecordTickCountsToCSV>
  FVar13;
  FTickTaskManagerInterface *pFVar14;
  ulonglong uVar15;
  FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_20_::FStat_STAT_RecordActorCountsToCSV>
  FVar16;
  FName FVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar22;
  uint *puVar23;
  int *piVar24;
  int local_res20 [2];
  void *local_118;
  undefined8 local_110;
  FColor_u_0 local_108;
  FColor_u_0 local_104;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e0;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  int local_88;
  undefined4 uStack_84;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60 [4];
  undefined4 local_3c;
  ulonglong uVar21;
  
  this = FCsvProfiler::Get();
  bVar8 = FCsvProfiler::IsCapturing(this);
  pTVar5 = CVarRecordTickCountsToCSV.Ref;
  if (!bVar8) {
    return;
  }
  uVar20 = 0;
  uVar19 = 0;
  if (param_2) {
    bVar8 = IsInParallelGameThread();
    if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pTVar5->ShadowedValue[0] != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        if (StatPtr_STAT_RecordTickCountsToCSV ==
            (FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_8_::FStat_STAT_RecordTickCountsToCSV>
             )0x0) {
          pFVar12 = FName::FName(&local_78,"STAT_RecordTickCountsToCSV");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecordTickCountsToCSV,*pFVar12,
                     L"STAT_RecordTickCountsToCSV","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                     true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&_TSS0);
      }
      FVar13 = StatPtr_STAT_RecordTickCountsToCSV;
      if (StatPtr_STAT_RecordTickCountsToCSV ==
          (FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_8_::FStat_STAT_RecordTickCountsToCSV>
           )0x0) {
        pFVar12 = FName::FName(&local_70,"STAT_RecordTickCountsToCSV");
        FVar13 = (FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_8_::FStat_STAT_RecordTickCountsToCSV>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecordTickCountsToCSV,
                              *pFVar12,L"STAT_RecordTickCountsToCSV","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar17 = *(FName *)FVar13;
      bVar4 = false;
      bVar8 = false;
      local_f0.ComparisonIndex.Value = 0;
      local_f0.Number = 0;
      bVar9 = false;
      bVar7 = false;
      if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_147ed4f0e:
        bVar4 = bVar9;
        bVar8 = bVar7;
        bVar7 = false;
        FVar17 = local_f0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_108.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
          bVar4 = false;
          bVar8 = true;
          bVar9 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_100.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
            local_100.Number = FVar17.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_100,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelTick.cpp"
                       ,0x586);
            bVar4 = true;
            bVar8 = true;
            bVar9 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147ed4f0e;
        FThreadStats::AddMessage(FVar17,CycleScopeStart);
        bVar7 = true;
      }
      if (__CsvProfilerStat1415 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("RecordTickCountsToCSV");
        __CsvProfilerStat1415 = true;
      }
      FCsvProfiler::BeginExclusiveStat("RecordTickCountsToCSV","CSV_RecordTickCountsToCSV");
      pTVar5 = CVarDetailedTickContextForCSV.Ref;
      bVar9 = IsInParallelGameThread();
      if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = pTVar5->ShadowedValue[0];
      local_118 = (void *)0x0;
      local_110 = 0;
      local_res20[0] = 0;
      pFVar14 = FTickTaskManagerInterface::Get();
      (**(code **)((longlong)*pFVar14 + 0x40))(pFVar14,param_1,&local_118,local_res20,iVar1 != 0,1);
      uVar15 = uVar20;
      while ((uVar22 = (uint)uVar15, -1 < (int)uVar22 && ((int)uVar22 < (int)local_110))) {
        FCsvProfiler::Get();
        uVar11 = uVar19;
        if ((int)uVar22 < (int)local_110) {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if (uVar11 == 0) {
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
        uVar11 = _GCsvCategory_Ticks.Index;
        iVar1 = *(int *)((longlong)(int)uVar22 * 0xc + 8 + (longlong)local_118);
        uVar10 = uVar19;
        if ((int)uVar22 < (int)local_110) {
          uVar10 = ~uVar22 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FCsvProfiler::RecordCustomStat
                  ((FName *)((longlong)local_118 + (longlong)(int)uVar22 * 0xc),uVar11,iVar1,
                   Accumulate);
        uVar15 = (ulonglong)(uVar22 + 1);
      }
      if (__CsvProfilerStat1430 == false) {
        FCsvProfilerTrace::OutputInlineStat("Total",_GCsvCategory_Ticks.Index);
        __CsvProfilerStat1430 = true;
      }
      FCsvProfiler::RecordCustomStat("Total",_GCsvCategory_Ticks.Index,local_res20[0],Accumulate);
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      FCsvProfiler::EndExclusiveStat("RecordTickCountsToCSV");
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(FVar17,CycleScopeEnd);
      }
    }
  }
  pTVar5 = CVarRecordActorCountsToCSV.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_147ed516a:
    uVar15 = uVar20;
  }
  else {
    bVar8 = IsInGameThread();
    uVar15 = 4;
    if (bVar8) goto LAB_147ed516a;
  }
  if (*(int *)((longlong)pTVar5->ShadowedValue + uVar15) == 0) {
    return;
  }
  piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar24 < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    if (StatPtr_STAT_RecordActorCountsToCSV ==
        (FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_20_::FStat_STAT_RecordActorCountsToCSV>
         )0x0) {
      pFVar12 = FName::FName(&local_68,"STAT_RecordActorCountsToCSV");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecordActorCountsToCSV,*pFVar12,
                 L"STAT_RecordActorCountsToCSV","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS1);
  }
  FVar16 = StatPtr_STAT_RecordActorCountsToCSV;
  if (StatPtr_STAT_RecordActorCountsToCSV ==
      (FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_20_::FStat_STAT_RecordActorCountsToCSV>
       )0x0) {
    pFVar12 = FName::FName(local_60,"STAT_RecordActorCountsToCSV");
    FVar16 = (FThreadSafeStaticStat<_void___cdecl_RecordWorldCountsToCSV(UWorld_*,bool)_::_20_::FStat_STAT_RecordActorCountsToCSV>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecordActorCountsToCSV,*pFVar12
                          ,L"STAT_RecordActorCountsToCSV","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar16;
  bVar8 = false;
  bVar7 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_104.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_104._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_f8.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelTick.cpp"
                   ,0x59b);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = true;
      goto LAB_147ed52af;
    }
  }
  bVar4 = false;
  FVar17 = local_e0;
LAB_147ed52af:
  if (__CsvProfilerStat1436 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RecordActorCountsToCSV");
    __CsvProfilerStat1436 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RecordActorCountsToCSV","CSV_RecordActorCountsToCSV");
  pTVar5 = CVarRecordActorCountsToCSVThreshold.Ref;
  bVar9 = IsInParallelGameThread();
  if ((bVar9) || (bVar9 = IsInGameThread(), uVar15 = 4, bVar9)) {
    uVar15 = uVar20;
  }
  iVar1 = *(int *)((longlong)pTVar5->ShadowedValue + uVar15);
  EnterCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  uStack_9c = 1;
  uVar22 = CSVActorClassNameToCountMap._40_4_;
  uVar15 = uVar20;
  if (uVar22 != 0) {
    uVar15 = CSVActorClassNameToCountMap._40_8_ & 0xffffffff;
    puVar23 = (uint *)&CSVActorClassNameToCountMap.field_0x10;
    if (CSVActorClassNameToCountMap._32_8_ != 0) {
      puVar23 = (uint *)CSVActorClassNameToCountMap._32_8_;
    }
    uVar11 = *puVar23;
    uVar21 = uVar20;
    uVar19 = 0;
    while (uVar11 == 0) {
      iVar18 = (int)uVar21;
      uVar20 = (ulonglong)((int)uVar20 + 0x20);
      uVar19 = iVar18 + 1;
      uVar21 = (ulonglong)uVar19;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_147ed538c;
      uVar11 = puVar23[(longlong)iVar18 + 1];
    }
    uStack_9c = ~(uVar11 - 1) & uVar11;
    uVar15 = (ulonglong)uStack_9c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = (int)uVar20 + -1 + (int)lVar2;
    if ((int)uVar22 < (int)uVar11) {
      uVar11 = uVar22;
    }
    uVar15 = (ulonglong)uVar11;
  }
LAB_147ed538c:
  local_a8 = &CSVActorClassNameToCountMap;
  local_98 = 0x154c1e3a0;
  uStack_90 = 0xffffffff;
  uStack_8c = (uint)uVar15;
  local_88 = (int)uVar20;
  uStack_84 = local_3c;
  TStack_c8._padding_ = CONCAT44(uStack_9c,uVar19);
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  local_d0 = &CSVActorClassNameToCountMap;
  TStack_c8._28_4_ = local_3c;
  TStack_c8.BaseBitIndex = local_88;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&CSVActorClassNameToCountMap.field_0x10;
  uStack_a0 = uVar19;
  TStack_c8.CurrentBitIndex = uStack_8c;
  if ((int)uStack_8c < (int)uVar22) {
    do {
      pTVar6 = local_d0;
      lVar2 = (longlong)(int)uVar15 * 0x14;
      if (iVar1 < *(int *)(lVar2 + 8 + *(longlong *)local_d0)) {
        FCsvProfiler::Get();
        pFVar12 = (FName *)(*(longlong *)pTVar6 + lVar2);
        FCsvProfiler::RecordCustomStat
                  (pFVar12,_GCsvCategory_ActorCount.Index,pFVar12[1].ComparisonIndex.Value,Set);
      }
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      uVar15 = (ulonglong)(uint)TStack_c8.CurrentBitIndex;
    } while (TStack_c8.CurrentBitIndex < (TStack_c8.Array)->NumBits);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  if ((*piVar24 < _TSS2) && (_Init_thread_header(&_TSS2), _TSS2 == -1)) {
    FName::FName(&TotalActorCountStatName,L"TotalActorCount");
    _Init_thread_footer(&_TSS2);
  }
  FCsvProfiler::Get();
  FCsvProfiler::RecordCustomStat
            (&TotalActorCountStatName,_GCsvCategory_ActorCount.Index,CSVActorTotalCount,Set);
  FCsvProfiler::EndExclusiveStat("RecordActorCountsToCSV");
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// Z_Construct_UClass_ALODActor_NoRegister @ 147ee6ca0

UClass * __cdecl Z_Construct_UClass_ALODActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALODActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODActor",&Z_Registration_Info_UClass_ALODActor.InnerSingleton,
               ALODActor::StaticRegisterNativesALODActor,0x358,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALODActor>,
               InternalVTableHelperCtorCaller<ALODActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALODActor.InnerSingleton;
}

// Z_Construct_UClass_ALevelStreamingVolume_NoRegister @ 147ee6d60

UClass * __cdecl Z_Construct_UClass_ALevelStreamingVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingVolume",
               &Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton,
               ALevelStreamingVolume::StaticRegisterNativesALevelStreamingVolume,0x310,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelStreamingVolume>,
               InternalVTableHelperCtorCaller<ALevelStreamingVolume>,local_res8,AVolume::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelStreamingVolume.InnerSingleton;
}

// Z_Construct_UClass_ALightWeightInstanceManager_NoRegister @ 147ee6e20

UClass * __cdecl Z_Construct_UClass_ALightWeightInstanceManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceManager",
               &Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton,
               ALightWeightInstanceManager::StaticRegisterNativesALightWeightInstanceManager,0x388,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightWeightInstanceManager>,
               InternalVTableHelperCtorCaller<ALightWeightInstanceManager>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceManager.InnerSingleton;
}

// Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_NoRegister @ 147ee6ee0

UClass * __cdecl Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceStaticMeshManager",
               &Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton,
               ALightWeightInstanceStaticMeshManager::
               StaticRegisterNativesALightWeightInstanceStaticMeshManager,0x3f0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightWeightInstanceStaticMeshManager>,
               InternalVTableHelperCtorCaller<ALightWeightInstanceStaticMeshManager>,local_res8,
               ALightWeightInstanceManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.InnerSingleton;
}

// Z_Construct_UClass_ALight_NoRegister @ 147ee6fa0

UClass * __cdecl Z_Construct_UClass_ALight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Light",&Z_Registration_Info_UClass_ALight.InnerSingleton,
               ALight::StaticRegisterNativesALight,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALight>,InternalVTableHelperCtorCaller<ALight>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALight.InnerSingleton;
}

// Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister @ 147ee7060

UClass * __cdecl Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassCharacterIndirectDetailVolume",
               &Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton,
               ALightmassCharacterIndirectDetailVolume::
               StaticRegisterNativesALightmassCharacterIndirectDetailVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightmassCharacterIndirectDetailVolume>,
               InternalVTableHelperCtorCaller<ALightmassCharacterIndirectDetailVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassCharacterIndirectDetailVolume.InnerSingleton;
}

// Z_Construct_UClass_ALightmassImportanceVolume_NoRegister @ 147ee7120

UClass * __cdecl Z_Construct_UClass_ALightmassImportanceVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassImportanceVolume",
               &Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton,
               ALightmassImportanceVolume::StaticRegisterNativesALightmassImportanceVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALightmassImportanceVolume>,
               InternalVTableHelperCtorCaller<ALightmassImportanceVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassImportanceVolume.InnerSingleton;
}

// Z_Construct_UClass_ALocationVolume_NoRegister @ 147ee71e0

UClass * __cdecl Z_Construct_UClass_ALocationVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALocationVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocationVolume",
               &Z_Registration_Info_UClass_ALocationVolume.InnerSingleton,
               ALocationVolume::StaticRegisterNativesALocationVolume,0x308,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALocationVolume>,InternalVTableHelperCtorCaller<ALocationVolume>,
               local_res8,AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALocationVolume.InnerSingleton;
}

// Z_Construct_UClass_AMaterialInstanceActor_NoRegister @ 147ee72a0

UClass * __cdecl Z_Construct_UClass_AMaterialInstanceActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceActor",
               &Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton,
               AMaterialInstanceActor::StaticRegisterNativesAMaterialInstanceActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AMaterialInstanceActor>,
               InternalVTableHelperCtorCaller<AMaterialInstanceActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton;
}

// Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_NoRegister @ 147ee7360

UClass * __cdecl Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightWeightInstanceBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.
                InnerSingleton,
               ULightWeightInstanceBlueprintFunctionLibrary::
               StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightWeightInstanceBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<ULightWeightInstanceBlueprintFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister @ 147ee7420

UClass * __cdecl Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmappedSurfaceCollection",
               &Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton,
               ULightmappedSurfaceCollection::StaticRegisterNativesULightmappedSurfaceCollection,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULightmappedSurfaceCollection>,
               InternalVTableHelperCtorCaller<ULightmappedSurfaceCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton;
}

// Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister @ 147ee74d0

UClass * __cdecl Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPrimitiveSettingsObject",
               &Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton,
               ULightmassPrimitiveSettingsObject::
               StaticRegisterNativesULightmassPrimitiveSettingsObject,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULightmassPrimitiveSettingsObject>,
               InternalVTableHelperCtorCaller<ULightmassPrimitiveSettingsObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton;
}

// Z_Construct_UClass_ULocalMessage_NoRegister @ 147ee7580

UClass * __cdecl Z_Construct_UClass_ULocalMessage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalMessage",
               &Z_Registration_Info_UClass_ULocalMessage.InnerSingleton,
               ULocalMessage::StaticRegisterNativesULocalMessage,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalMessage>,InternalVTableHelperCtorCaller<ULocalMessage>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalMessage.InnerSingleton;
}

// Z_Construct_UClass_ULocalPlayer_NoRegister @ 147ee7630

UClass * __cdecl Z_Construct_UClass_ULocalPlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ULocalPlayer::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayer",
               &Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton,
               ULocalPlayer::StaticRegisterNativesULocalPlayer,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalPlayer>,InternalVTableHelperCtorCaller<ULocalPlayer>,
               local_res8,UPlayer::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton;
}

// Z_Construct_UClass_UMaterialCacheVirtualTexture_NoRegister @ 147ee76f0

UClass * __cdecl Z_Construct_UClass_UMaterialCacheVirtualTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheVirtualTexture",
               &Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton,
               UMaterialCacheVirtualTexture::StaticRegisterNativesUMaterialCacheVirtualTexture,0x180
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialCacheVirtualTexture>,
               InternalVTableHelperCtorCaller<UMaterialCacheVirtualTexture>,local_res8,
               UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheVirtualTexture.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature @ 147ee77b0

UFunction * __cdecl Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EDerivativeStatus @ 147ee77f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EDerivativeStatus(void)

{
  if (Z_Registration_Info_UEnum_EDerivativeStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDerivativeStatus.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDerivativeStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDerivativeStatus.InnerSingleton;
}

// Z_Construct_UScriptStruct_FClientReceiveData @ 147ee7830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClientReceiveData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClientReceiveData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClientReceiveData.InnerSingleton,
               &Z_Construct_UScriptStruct_FClientReceiveData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClientReceiveData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClientReceiveData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialProxySettings @ 147ee78b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialProxySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialProxySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialProxySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialProxySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMaterialProxySettings.InnerSingleton;
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

// CVarSink'' @ 1503f2730

void __cdecl `dynamic_atexit_destructor_for_'ALODActor::CVarSink__(void)

{
  ALODActor::CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// CmdCopyLockedViews'' @ 1503f2750

void __cdecl `dynamic_atexit_destructor_for_'FLockedViewState::CmdCopyLockedViews__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FLockedViewState::CmdCopyLockedViews);
  return;
}

// HLODDistances'' @ 1503f2770

void __cdecl `dynamic_atexit_destructor_for_'ALODActor::HLODDistances__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ALODActor::HLODDistances.AllocatorInstance.Data;
  if (ALODActor::HLODDistances.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ALODActor::HLODDistances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// LevelPackageNames'' @ 1503f2790

void __cdecl `dynamic_atexit_destructor_for_'FLevelStreamingGCHelper::LevelPackageNames__(void)

{
  FLevelStreamingGCHelper::LevelPackageNames.HashSize = 0;
  if (FLevelStreamingGCHelper::LevelPackageNames.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FLevelStreamingGCHelper::LevelPackageNames.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FLevelStreamingGCHelper::LevelPackageNames.Elements);
  return;
}

// LevelsPendingUnload'' @ 1503f27d0

void __cdecl `dynamic_atexit_destructor_for_'FLevelStreamingGCHelper::LevelsPendingUnload__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FLevelStreamingGCHelper::LevelsPendingUnload.AllocatorInstance.Data;
  if (FLevelStreamingGCHelper::LevelsPendingUnload.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FLevelStreamingGCHelper::LevelsPendingUnload.AllocatorInstance.Data !=
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

// OnCreateRenderThreadResources'' @ 1503f27f0

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources);
  return;
}

// OnDestroyRenderThreadResources'' @ 1503f2830

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
OnDestroyRenderThreadResources__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources);
  return;
}

// OnGCStreamedOutLevels'' @ 1503f2870

void __cdecl `dynamic_atexit_destructor_for_'FLevelStreamingGCHelper::OnGCStreamedOutLevels__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLevelStreamingGCHelper::OnGCStreamedOutLevels._8_8_,
             FLevelStreamingGCHelper::OnGCStreamedOutLevels._16_4_);
  if (FLevelStreamingGCHelper::OnGCStreamedOutLevels._8_8_ != 0) {
    FMemory::Free((void *)FLevelStreamingGCHelper::OnGCStreamedOutLevels._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FLevelStreamingGCHelper::OnGCStreamedOutLevels);
  return;
}

// StaticType'' @ 1503f28b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FLocalVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FLocalVertexFactory::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncRenderThreadUpdates'' @ 1503f28d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncRenderThreadUpdates__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAsyncRenderThreadUpdates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncRenderThreadUpdatesEditor'' @ 1503f28f0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncRenderThreadUpdatesEditor__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowAsyncRenderThreadUpdatesEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncRenderThreadUpdatesEditorGameWorld'' @ 1503f2910

void __cdecl
_dynamic_atexit_destructor_for__CVarAllowAsyncRenderThreadUpdatesEditorGameWorld__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowAsyncRenderThreadUpdatesEditorGameWorld);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCalcLocalPlayerCachedLODDistanceFactor'' @ 1503f2930

void __cdecl _dynamic_atexit_destructor_for__CVarCalcLocalPlayerCachedLODDistanceFactor__(void)

{
  CVarCalcLocalPlayerCachedLODDistanceFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCalcLocalPlayerCachedLODDistanceFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDetailedTickContextForCSV'' @ 1503f2950

void __cdecl _dynamic_atexit_destructor_for__CVarDetailedTickContextForCSV__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDetailedTickContextForCSV);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODDistanceOverride'' @ 1503f2970

void __cdecl _dynamic_atexit_destructor_for__CVarHLODDistanceOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODDistanceOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODDistanceOverrideScale'' @ 1503f2990

void __cdecl _dynamic_atexit_destructor_for__CVarHLODDistanceOverrideScale__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODDistanceOverrideScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODDitherPauseTime'' @ 1503f29b0

void __cdecl _dynamic_atexit_destructor_for__CVarHLODDitherPauseTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHLODDitherPauseTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHLODForceDisableCastDynamicShadow'' @ 1503f29d0

void __cdecl _dynamic_atexit_destructor_for__CVarHLODForceDisableCastDynamicShadow__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHLODForceDisableCastDynamicShadow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreLVFUsageMode'' @ 1503f29f0

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreLVFUsageMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreLVFUsageMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIncludeNonVirtualTexturedLightMaps'' @ 1503f2a10

void __cdecl _dynamic_atexit_destructor_for__CVarIncludeNonVirtualTexturedLightMaps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIncludeNonVirtualTexturedLightMaps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLWIGridSize'' @ 1503f2a30

void __cdecl _dynamic_atexit_destructor_for__CVarLWIGridSize__(void)

{
  CVarLWIGridSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLWIGridSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialCacheEnabled'' @ 1503f2a50

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialCacheEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialCacheEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialCacheSupported'' @ 1503f2a70

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialCacheSupported__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialCacheSupported);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialCacheTileBorderWidth'' @ 1503f2a90

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialCacheTileBorderWidth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialCacheTileBorderWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaterialCacheTileWidth'' @ 1503f2ab0

void __cdecl _dynamic_atexit_destructor_for__CVarMaterialCacheTileWidth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaterialCacheTileWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaximumAllowedHLODLevel'' @ 1503f2ad0

void __cdecl _dynamic_atexit_destructor_for__CVarMaximumAllowedHLODLevel__(void)

{
  CVarMaximumAllowedHLODLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaximumAllowedHLODLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordActorCountsToCSV'' @ 1503f2af0

void __cdecl _dynamic_atexit_destructor_for__CVarRecordActorCountsToCSV__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecordActorCountsToCSV);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordActorCountsToCSVThreshold'' @ 1503f2b10

void __cdecl _dynamic_atexit_destructor_for__CVarRecordActorCountsToCSVThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRecordActorCountsToCSVThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordTickCountsToCSV'' @ 1503f2b30

void __cdecl _dynamic_atexit_destructor_for__CVarRecordTickCountsToCSV__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecordTickCountsToCSV);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTexelDebugging'' @ 1503f2b50

void __cdecl _dynamic_atexit_destructor_for__CVarTexelDebugging__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTexelDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVTEnableLossyCompressLightmaps'' @ 1503f2b70

void __cdecl _dynamic_atexit_destructor_for__CVarVTEnableLossyCompressLightmaps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVTEnableLossyCompressLightmaps)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarViewportTest'' @ 1503f2b90

void __cdecl _dynamic_atexit_destructor_for__CVarViewportTest__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarViewportTest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVirtualTexturedLightMaps'' @ 1503f2bb0

void __cdecl _dynamic_atexit_destructor_for__CVarVirtualTexturedLightMaps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVirtualTexturedLightMaps);
  return;
}

// `dynamic_atexit_destructor_for_'CachedDistances'' @ 1503f2bd0

void __cdecl
`ALODActor::OnCVarsChanged'::__l2::_dynamic_atexit_destructor_for__CachedDistances__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CachedDistances.AllocatorInstance.Data;
  if (CachedDistances.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CachedDistances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503f2bf0

void __cdecl
`ADirectionalLight::ADirectionalLight'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__
          (void)

{
  if (::ConstructorStatics.NAME_Lighting.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503f2bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Lighting.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f2c10

void __cdecl
``UWorld::Tick'::__l16::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f2c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f2c30

void __cdecl
``UWorld::SendAllEndOfFrameUpdatesInternal'::__l56::<lambda_4>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f2c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FLocalVertexFactoryUniformShaderParametersMetadataRegistration'' @ 1503f2c50

void __cdecl
_dynamic_atexit_destructor_for__FLocalVertexFactoryUniformShaderParametersMetadataRegistration__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FPrecomputedLightingUniformParametersMetadataRegistration'' @ 1503f2c60

void __cdecl
_dynamic_atexit_destructor_for__FPrecomputedLightingUniformParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GComponentsWithLegacyLightmaps'' @ 1503f2c70

void __cdecl _dynamic_atexit_destructor_for__GComponentsWithLegacyLightmaps__(void)

{
  FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::
  ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>(&GComponentsWithLegacyLightmaps);
  return;
}

// `dynamic_atexit_destructor_for_'GGPUSkinPassThroughFactoryNullUniformBuffer'' @ 1503f2c90

void __cdecl _dynamic_atexit_destructor_for__GGPUSkinPassThroughFactoryNullUniformBuffer__(void)

{
  GGPUSkinPassThroughFactoryNullUniformBuffer._0_8_ =
       &___7__TGlobalResource_VFGPUSkinPassThroughFactoryNullUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GGPUSkinPassThroughFactoryNullUniformBuffer);
  GGPUSkinPassThroughFactoryNullUniformBuffer._0_8_ =
       &___7__TUniformBuffer_VFGPUSkinPassThroughFactoryLooseParameters____6B_;
  if (GGPUSkinPassThroughFactoryNullUniformBuffer._48_8_ != 0) {
    FMemory::Free((void *)GGPUSkinPassThroughFactoryNullUniformBuffer._48_8_);
  }
  if (GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GGPUSkinPassThroughFactoryNullUniformBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GGPUSkinPassThroughFactoryNullUniformBuffer)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GHLODCmd'' @ 1503f2d00

void __cdecl _dynamic_atexit_destructor_for__GHLODCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GHLODCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GHLODListUnbuiltCmd'' @ 1503f2d20

void __cdecl _dynamic_atexit_destructor_for__GHLODListUnbuiltCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GHLODListUnbuiltCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GLevelsWithLegacyBuildData'' @ 1503f2d40

void __cdecl _dynamic_atexit_destructor_for__GLevelsWithLegacyBuildData__(void)

{
  FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::
  ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>(&GLevelsWithLegacyBuildData);
  return;
}

// `dynamic_atexit_destructor_for_'GLightComponentsWithLegacyBuildData'' @ 1503f2d60

void __cdecl _dynamic_atexit_destructor_for__GLightComponentsWithLegacyBuildData__(void)

{
  FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::
  ~FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>
            (&GLightComponentsWithLegacyBuildData);
  return;
}

// `dynamic_atexit_destructor_for_'GLumenVisualizationData'' @ 1503f2d80

void __cdecl _dynamic_atexit_destructor_for__GLumenVisualizationData__(void)

{
  if (GLumenVisualizationData.ConsoleDocumentationVisualizationMode.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GLumenVisualizationData.ConsoleDocumentationVisualizationMode.Data.
                  AllocatorInstance.Data);
  }
  GLumenVisualizationData.ModeMap._72_4_ = 0;
  if (GLumenVisualizationData.ModeMap._64_8_ != 0) {
    FMemory::Free((void *)GLumenVisualizationData.ModeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLumenVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLumenVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLumenVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GLumenVisualizationData);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_EndOfFrameUpdates'' @ 1503f2dd0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_EndOfFrameUpdates__(void)

{
  GPUStat_EndOfFrameUpdates._104_4_ = 0;
  if (GPUStat_EndOfFrameUpdates._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_EndOfFrameUpdates._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_EndOfFrameUpdates.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_GPUSkinCacheRayTracingGeometry'' @ 1503f2e10

void __cdecl _dynamic_atexit_destructor_for__GPUStat_GPUSkinCacheRayTracingGeometry__(void)

{
  GPUStat_GPUSkinCacheRayTracingGeometry._104_4_ = 0;
  if (GPUStat_GPUSkinCacheRayTracingGeometry._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_GPUSkinCacheRayTracingGeometry._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_GPUSkinCacheRayTracingGeometry.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GReflectionCapturesWithLegacyBuildData'' @ 1503f2e50

void __cdecl _dynamic_atexit_destructor_for__GReflectionCapturesWithLegacyBuildData__(void)

{
  FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::
  ~FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>
            (&GReflectionCapturesWithLegacyBuildData);
  return;
}

// `dynamic_atexit_destructor_for_'GSpeedTreeWindNullUniformBuffer'' @ 1503f2e70

void __cdecl _dynamic_atexit_destructor_for__GSpeedTreeWindNullUniformBuffer__(void)

{
  GSpeedTreeWindNullUniformBuffer._0_8_ =
       &___7__TGlobalResource_VFSpeedTreeWindNullUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GSpeedTreeWindNullUniformBuffer);
  GSpeedTreeWindNullUniformBuffer._0_8_ = &___7__TUniformBuffer_VFSpeedTreeUniformParameters____6B_;
  if (GSpeedTreeWindNullUniformBuffer._48_8_ != 0) {
    FMemory::Free((void *)GSpeedTreeWindNullUniformBuffer._48_8_);
  }
  if (GSpeedTreeWindNullUniformBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GSpeedTreeWindNullUniformBuffer._40_8_);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&GSpeedTreeWindNullUniformBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'LWISubsystemSingleton'' @ 1503f2ee0

void __cdecl
`FLightWeightInstanceSubsystem::Get'::__l2::_dynamic_atexit_destructor_for__LWISubsystemSingleton__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (`public:_static_struct_FLightWeightInstanceSubsystem&___ptr64___cdecl_FLightWeightInstanceSubsystem::Get(void)'
             ::__l2::LWISubsystemSingleton.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'LogHLOD'' @ 1503f2f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHLOD__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHLOD);
  return;
}

// `dynamic_atexit_destructor_for_'LogLightMap'' @ 1503f2f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLightMap__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLightMap);
  return;
}

// `dynamic_atexit_destructor_for_'LogLightWeightInstance'' @ 1503f2f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLightWeightInstance__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLightWeightInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogMapBuildDataRegistry'' @ 1503f2f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMapBuildDataRegistry__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMapBuildDataRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'LogMaterialMerging'' @ 1503f2f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMaterialMerging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMaterialMerging);
  return;
}

// `dynamic_atexit_destructor_for_'LogPlayerManagement'' @ 1503f2fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPlayerManagement__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPlayerManagement);
  return;
}

// `dynamic_atexit_destructor_for_'State'' @ 1503f2fc0

void __cdecl `FLockedViewState::Get'::__l2::_dynamic_atexit_destructor_for__State__(void)

{
  FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::
  ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>
            (&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::
              __l2::State.PlayerStates);
  `public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::State.
  Viewpoints._72_4_ = 0;
  if (`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'::__l2::
      State.Viewpoints._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                          ::__l2::State.Viewpoints._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLockedViewState::FViewPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLockedViewState::FViewPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLockedViewState::FViewPoint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FLockedViewState&___ptr64___cdecl_FLockedViewState::Get(void)'
                 ::__l2::State);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f3010

void __cdecl
`FLocalVertexFactoryUniformShaderParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f3030

void __cdecl
`FPrecomputedLightingUniformParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_ActorCount'' @ 1503f3050

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_ActorCount__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_ActorCount.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_ActorCount.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_ActorCount.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Ticks'' @ 1503f3070

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Ticks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Ticks.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Ticks.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Ticks.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

