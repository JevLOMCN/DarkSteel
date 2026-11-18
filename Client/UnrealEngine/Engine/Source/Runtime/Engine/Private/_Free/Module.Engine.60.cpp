// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 462

// CVarSimpleStreamableAssetManagerConsiderVisibility'' @ 141145a40

void __cdecl
`dynamic_initializer_for_'FSimpleStreamableAssetManager::
CVarSimpleStreamableAssetManagerConsiderVisibility__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSimpleStreamableAssetManager::CVarSimpleStreamableAssetManagerConsiderVisibility,
             L"s.StreamableAssets.SimpleStreamableAssetManager.ConsiderVisibility",
             &FSimpleStreamableAssetManager::GSimpleStreamableAssetManagerConsiderVisibility,
             L"Whether the SimpleStreamableAssetManager should consider the asset visibility when computing the biggest bounds normalized size (ScreenSize / Distance)"
             ,0x3000000);
  atexit(`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
         CVarSimpleStreamableAssetManagerConsiderVisibility__);
  return;
}

// CVarUseSimpleStreamableAssetManager'' @ 141145a90

void __cdecl
`dynamic_initializer_for_'FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManager__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManager,
             L"s.StreamableAssets.UseSimpleStreamableAssetManager",
             &FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager,
             L"Whether to use FSimpleStreamableAssetManager.\nIf 0 (current default), StreamingAsset works with LevelStreamingManager by collecting UPrimitiveComponents mostly operating on GT.\nIf 1, The FSimpleStreamableAssetManager is Enabled and works by integrating with SceneProxy that is responsible for feeding the system."
             ,0x3000004);
  atexit(`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
         CVarUseSimpleStreamableAssetManager__);
  return;
}

// CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration'' @ 141145ae0

void __cdecl
`dynamic_initializer_for_'FSimpleStreamableAssetManager::
CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSimpleStreamableAssetManager::
              CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration,
             L"s.StreamableAssets.SimpleStreamableAssetManager.SortAssetsOnRegistration",
             &FSimpleStreamableAssetManager::
              GSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration,
             L"If true when object will be added, referenced assets will be sorted \nwe will make sure we register asset only once with highest Texel Factor \nIt will be beneficial only if multiple materials use same texture"
             ,0x3000000);
  atexit(`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
         CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration__);
  return;
}

// CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize'' @ 141145b30

void __cdecl
`dynamic_initializer_for_'FSimpleStreamableAssetManager::
CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize,
             L"s.StreamableAssets.SimpleStreamableAssetManager.SparseArrayGrowSize",
             &FSimpleStreamableAssetManager::GSimpleStreamableAssetManagerSparseArrayGrowSize,
             L"The growth size of SparseArray used for tracking objects pointing specific assets",
             0x3000000);
  atexit(`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
         CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize__);
  return;
}

// HandleDebugName_AssetList'' @ 141145b80

void __cdecl `dynamic_initializer_for_'FStreamableHandle::HandleDebugName_AssetList__(void)

{
  ::FString::FString(&FStreamableHandle::HandleDebugName_AssetList,L"LoadAssetList");
  atexit(`dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_AssetList__);
  return;
}

// HandleDebugName_CombinedHandle'' @ 141145bb0

void __cdecl `dynamic_initializer_for_'FStreamableHandle::HandleDebugName_CombinedHandle__(void)

{
  ::FString::FString(&FStreamableHandle::HandleDebugName_CombinedHandle,L"CreateCombinedHandle");
  atexit(`dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_CombinedHandle__);
  return;
}

// HandleDebugName_Error'' @ 141145be0

void __cdecl `dynamic_initializer_for_'FStreamableHandle::HandleDebugName_Error__(void)

{
  ::FString::FString(&FStreamableHandle::HandleDebugName_Error,L"CreateErrorHandle");
  atexit(`dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_Error__);
  return;
}

// HandleDebugName_Preloading'' @ 141145c10

void __cdecl `dynamic_initializer_for_'FStreamableHandle::HandleDebugName_Preloading__(void)

{
  ::FString::FString(&FStreamableHandle::HandleDebugName_Preloading,L"Preloading");
  atexit(`dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_Preloading__);
  return;
}

// Instance'' @ 141145c40

void __cdecl `dynamic_initializer_for_'FStereoLayerAdditionalFlagsManager::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStereoLayerAdditionalFlagsManager::Instance__);
  return;
}

// OnCreateRenderThreadResources'' @ 141145c60

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141145c80

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// OnLevelBeginMakingInvisible'' @ 141145ca0

void __cdecl `dynamic_initializer_for_'FLevelStreamingDelegates::OnLevelBeginMakingInvisible__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelBeginMakingInvisible__);
  return;
}

// OnLevelBeginMakingVisible'' @ 141145cc0

void __cdecl `dynamic_initializer_for_'FLevelStreamingDelegates::OnLevelBeginMakingVisible__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelBeginMakingVisible__);
  return;
}

// OnLevelStreamingStateChanged'' @ 141145ce0

void __cdecl
`dynamic_initializer_for_'FLevelStreamingDelegates::OnLevelStreamingStateChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelStreamingStateChanged__);
  return;
}

// OnLevelStreamingTargetStateChanged'' @ 141145d00

void __cdecl
`dynamic_initializer_for_'FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::
         OnLevelStreamingTargetStateChanged__);
  return;
}

// ShaderTypeRegistration'' @ 141145d20

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

void __cdecl `dynamic_initializer_for_'FStereoLayerPS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FStereoLayerPS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FStereoLayerPS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FStereoLayerPS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141145d70

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

void __cdecl `dynamic_initializer_for_'FStereoLayerPS_External::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FStereoLayerPS_External::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FStereoLayerPS_External::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FStereoLayerPS_External::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141145dc0

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

void __cdecl `dynamic_initializer_for_'FStereoLayerVS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FStereoLayerVS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FStereoLayerVS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FStereoLayerVS::ShaderTypeRegistration__);
  return;
}

// ShapeName'' @ 141145e10

void __cdecl `dynamic_initializer_for_'FCubemapLayer::ShapeName__(void)

{
  ::FName::FName(&FCubemapLayer::ShapeName,"CubemapLayer");
  return;
}

// ShapeName'' @ 141145e30

void __cdecl `dynamic_initializer_for_'FCylinderLayer::ShapeName__(void)

{
  ::FName::FName(&FCylinderLayer::ShapeName,"CylinderLayer");
  return;
}

// ShapeName'' @ 141145e50

void __cdecl `dynamic_initializer_for_'FEquirectLayer::ShapeName__(void)

{
  ::FName::FName(&FEquirectLayer::ShapeName,"EquirectLayer");
  return;
}

// ShapeName'' @ 141145e70

void __cdecl `dynamic_initializer_for_'FQuadLayer::ShapeName__(void)

{
  ::FName::FName(&FQuadLayer::ShapeName,"QuadLayer");
  return;
}

// StaticMeshComponentName'' @ 141145e90

void __cdecl `dynamic_initializer_for_'AStaticMeshActor::StaticMeshComponentName__(void)

{
  ::FName::FName(&AStaticMeshActor::StaticMeshComponentName,L"StaticMeshComponent0");
  return;
}

// `dynamic_initializer_for_'CVarAllowParallelForDuringIncrementalUpdate'' @ 141145eb0

void __cdecl
UE::Private::RenderAssetStreamingManager::
_dynamic_initializer_for__CVarAllowParallelForDuringIncrementalUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowParallelForDuringIncrementalUpdate,
             L"r.Streaming.AllowParallelRenderAssetStreamingManagerIncrementalUpdate",
             &bAllowParallelForDuringIncrementalUpdate,
             L"Whether it is allowed for RenderAssetStreamingManager to use more cores using ParallelFor when doing the incremental update. When enabled, texture streaming built data is not used to retrieve the primitive streaming render asset information."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowParallelForDuringIncrementalUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarEnableAssetUpdateAbandons'' @ 141145f00

void __cdecl _dynamic_initializer_for__CVarEnableAssetUpdateAbandons__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableAssetUpdateAbandons,L"r.Streaming.EnableAssetUpdateAbandons",
             &GEnableAssetUpdateAbandons,
             L"Enable asset update abandon support, enables calls to FRenderAssetUpdate::TryAbandon & FRenderAssetUpdate::OnAbandon which can then be used to optionally decouple Asset Update internals that stall/prevent objects from being GC\'d"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableAssetUpdateAbandons__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNaniteNaterialOverrides'' @ 141145f50

void __cdecl Nanite::_dynamic_initializer_for__CVarEnableNaniteNaterialOverrides__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Nanite::<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNaniteNaterialOverrides,L"r.Nanite.MaterialOverrides",
             &GEnableNaniteMaterialOverrides,
             L"Enable support for Nanite specific material overrides.",
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
  atexit(_dynamic_atexit_destructor_for__CVarEnableNaniteNaterialOverrides__);
  return;
}

// `dynamic_initializer_for_'CVarFlushDeferredMipLevelChangeCallbacksBeforeGC'' @ 141146090

void __cdecl _dynamic_initializer_for__CVarFlushDeferredMipLevelChangeCallbacksBeforeGC__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarFlushDeferredMipLevelChangeCallbacksBeforeGC,
             L"r.Streaming.FlushDeferredMipLevelChangeCallbacksBeforeGC",local_res8,
             L"Whether to flush deferred mip level change callbacks before GC.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFlushDeferredMipLevelChangeCallbacksBeforeGC__);
  return;
}

// `dynamic_initializer_for_'CVarForceStartInVR'' @ 1411460e0

void __cdecl _dynamic_initializer_for__CVarForceStartInVR__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceStartInVR,L"r.ForceStartInVR",local_res8,
             L"If true, the game will attempt to start in VR, regardless of whether \"Start in VR\" is true in the project settings or -vr was set on the commandline."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarForceStartInVR__);
  return;
}

// `dynamic_initializer_for_'CVarLogAsyncLoadErrorsAsErrors'' @ 141146130

void __cdecl _dynamic_initializer_for__CVarLogAsyncLoadErrorsAsErrors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogAsyncLoadErrorsAsErrors,L"s.LogAsyncLoadErrorsAsErrors",
             &GStreamableLogAsyncLoadErrorsAsErrors,
             L"Wether async loading errors should be logged as errors. If disabled, async load errors will be logged as verbose."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLogAsyncLoadErrorsAsErrors__);
  return;
}

// `dynamic_initializer_for_'CVarLogStreamableFailuresAsErrors'' @ 141146180

void __cdecl _dynamic_initializer_for__CVarLogStreamableFailuresAsErrors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogStreamableFailuresAsErrors,L"s.LogStreamableFailuresAsErrors",
             &GStreamableLogStreamableFailuresAsErrors,L"Log all streamable failures as errors.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogStreamableFailuresAsErrors__);
  return;
}

// `dynamic_initializer_for_'CVarNoRefBiasQualityLevel'' @ 1411461d0

void __cdecl _dynamic_initializer_for__CVarNoRefBiasQualityLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNoRefBiasQualityLevel,GNoRefBiasQualityLevelCVarName,&GNoRefBiasQualityLevel,
             L"The quality level for the no-ref mesh streaming LOD bias",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNoRefBiasQualityLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNumStatsPerGroup'' @ 141146220

void __cdecl _dynamic_initializer_for__CVarNumStatsPerGroup__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x19;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNumStatsPerGroup,L"stats.MaxPerGroup",local_res8,
             L"The max number of lines of stats to show in a group",0);
  atexit(_dynamic_atexit_destructor_for__CVarNumStatsPerGroup__);
  return;
}

// `dynamic_initializer_for_'CVarProcessAddedRenderAssetsAfterAsyncWork'' @ 141146270

void __cdecl _dynamic_initializer_for__CVarProcessAddedRenderAssetsAfterAsyncWork__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarProcessAddedRenderAssetsAfterAsyncWork,
             L"r.Streaming.ProcessAddedRenderAssetsAfterAsyncWork",local_res8,
             L"Whether to call ProcessAddedRenderAssets in subsqequent UpdateResourceStreaming stages after Async work has completed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarProcessAddedRenderAssetsAfterAsyncWork__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingStaticMeshes'' @ 1411462c0

void __cdecl _dynamic_initializer_for__CVarRayTracingStaticMeshes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingStaticMeshes,L"r.RayTracing.Geometry.StaticMeshes",local_res8,
             L"Defines if static meshes are added to the ray tracing scene.\n 0: raytracing cached MDCs for static mesh are not created.\n 1: raytracing cached MDCs for static mesh are created and instances are added to the RayTracing scene (default).\n 2: static meshes are runtime culled from the RayTracing scene, but keeps the cached state for fast toggling."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingStaticMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingStaticMeshesWPO'' @ 141146310

void __cdecl _dynamic_initializer_for__CVarRayTracingStaticMeshesWPO__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingStaticMeshesWPO,L"r.RayTracing.Geometry.StaticMeshes.WPO",local_res8,
             L"World position offset evaluation for static meshes with EvaluateWPO enabled in ray tracing effects.\n 0: static meshes with world position offset hidden in ray tracing.\n 1: static meshes with world position offset visible in ray tracing, WPO evaluation enabled (default).\n 2: static meshes with world position offset visible in ray tracing, WPO evaluation disabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPO__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingStaticMeshesWPOCulling'' @ 141146360

void __cdecl _dynamic_initializer_for__CVarRayTracingStaticMeshesWPOCulling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingStaticMeshesWPOCulling,L"r.RayTracing.Geometry.StaticMeshes.WPO.Culling"
             ,local_res8,
             L"Enable culling for WPO evaluation for static meshes in ray tracing (default = 1 (Culling enabled))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPOCulling__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingStaticMeshesWPOCullingRadius'' @ 1411463b0

void __cdecl _dynamic_initializer_for__CVarRayTracingStaticMeshesWPOCullingRadius__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 12000.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRayTracingStaticMeshesWPOCullingRadius,
             L"r.RayTracing.Geometry.StaticMeshes.WPO.CullingRadius",local_res8,
             L"Do not evaluate world position offset for static meshes outside of this radius in ray tracing effects (default = 12000 (120m))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPOCullingRadius__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingStaticMeshesWPOSink'' @ 141146400

void __cdecl _dynamic_initializer_for__CVarRayTracingStaticMeshesWPOSink__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  CVarRayTracingStaticMeshesWPOSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  CVarRayTracingStaticMeshesWPOSink.Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  CVarRayTracingStaticMeshesWPOSink.Handle.Handle.ID = (FDelegateHandle)0;
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
  puVar5 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  CVarRayTracingStaticMeshesWPOSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
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
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPOSink__);
  return;
}

// `dynamic_initializer_for_'CVarRenderNaniteMeshes'' @ 141146590

void __cdecl _dynamic_initializer_for__CVarRenderNaniteMeshes__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderNaniteMeshes,L"r.Nanite",local_res8,L"Render static meshes using Nanite.",
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
  atexit(_dynamic_atexit_destructor_for__CVarRenderNaniteMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarStaticMeshComponentBoostPSOPrecachePri'' @ 1411466d0

void __cdecl _dynamic_initializer_for__CVarStaticMeshComponentBoostPSOPrecachePri__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStaticMeshComponentBoostPSOPrecachePri,
             L"r.PSOPrecache.StaticMeshComponentPSOPrecachePriority",
             &GStaticMeshComponentBoostPSOPrecachePri,
             L"Static Mesh component PSO precache priority level.\n 0. Static Mesh component\'s PSO precache requests are set to high priority (default)\n 1. Static Mesh component\'s PSO precache requests are set to highest priority"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStaticMeshComponentBoostPSOPrecachePri__);
  return;
}

// `dynamic_initializer_for_'CVarStreamableDelegateDelayFrames'' @ 141146720

void __cdecl _dynamic_initializer_for__CVarStreamableDelegateDelayFrames__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamableDelegateDelayFrames,L"s.StreamableDelegateDelayFrames",
             &GStreamableDelegateDelayFrames,
             L"Number of frames to delay StreamableManager delegates ",0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamableDelegateDelayFrames__);
  return;
}

// `dynamic_initializer_for_'CVarStreamableErrorOnRequest'' @ 141146770

void __cdecl _dynamic_initializer_for__CVarStreamableErrorOnRequest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamableErrorOnRequest,L"s.errorOnRequest",&GStreamableErrorOnRequest,
             L"If this is set and the errorOnRequest string partially matches the current debug name of the asset being loaded, then an error will be thrown instead of completion."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamableErrorOnRequest__);
  return;
}

// `dynamic_initializer_for_'CVarStreamableFlushAllAsyncLoadRequestsOnWait'' @ 1411467c0

void __cdecl _dynamic_initializer_for__CVarStreamableFlushAllAsyncLoadRequestsOnWait__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamableFlushAllAsyncLoadRequestsOnWait,
             L"s.StreamableFlushAllAsyncLoadRequestsOnWait",
             &GStreamableFlushAllAsyncLoadRequestsOnWait,
             L"Flush async loading without a specific request ID when waiting on streamable handles."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamableFlushAllAsyncLoadRequestsOnWait__);
  return;
}

// `dynamic_initializer_for_'CVarStreamableStripDebugName'' @ 141146810

void __cdecl _dynamic_initializer_for__CVarStreamableStripDebugName__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamableStripDebugName,L"s.StreamableStripDebugName",&GStreamableStripDebugName,
             L"Whether to strip the bundle names DebugName when changing bundle. Saves memory when disabled, provides more debug information when enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamableStripDebugName__);
  return;
}

// `dynamic_initializer_for_'CVarStreamableStripDebugNameInShipping'' @ 141146860

void __cdecl _dynamic_initializer_for__CVarStreamableStripDebugNameInShipping__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamableStripDebugNameInShipping,L"s.StreamableStripDebugNameInShipping",
             &GStreamableStripDebugNameInShipping,
             L"Whether to strip the bundle names DebugName when changing bundle. Saves memory when disabled, provides more debug information when enabled. Only applied to shipping builds."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamableStripDebugNameInShipping__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingAllowFastForceResident'' @ 1411468b0

void __cdecl _dynamic_initializer_for__CVarStreamingAllowFastForceResident__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamingAllowFastForceResident,L"r.Streaming.AllowFastForceResident",local_res8,
             L"Whether it is allowed to load in missing mips for fast-force-resident assets ASAP. Useful to accelerate force-resident process but risks disturbing streaming metric calculation. Fast-force-resident mips can\'t be sacrificed even when overbudget so use with caution."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingAllowFastForceResident__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingAllowParallelUpdateStreamingRenderAssets'' @ 141146900

void __cdecl _dynamic_initializer_for__CVarStreamingAllowParallelUpdateStreamingRenderAssets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamingAllowParallelUpdateStreamingRenderAssets,
             L"r.Streaming.AllowParallelStreamingRenderAssets",
             &GAllowParallelUpdateStreamingRenderAssets,
             L"Whether it is allowed to do UpdateStreamingRenderAssets with a ParallelFor to use more cores."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingAllowParallelUpdateStreamingRenderAssets__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingDeferredRemoveDynamicInstances'' @ 141146950

void __cdecl _dynamic_initializer_for__CVarStreamingDeferredRemoveDynamicInstances__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamingDeferredRemoveDynamicInstances,
             L"r.Streaming.DeferredRemoveDynamicInstances",&GStreamingDeferredRemoveDyanmicInstances
             ,
             L"Whether to defer removing components from the dynamic instance manager to avoid stalling the game thread on component deregistration."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingDeferredRemoveDynamicInstances__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingEnableStrippingDuplicatePrimitiveComponent'' @ 1411469a0

void __cdecl
_dynamic_initializer_for__CVarStreamingEnableStrippingDuplicatePrimitiveComponent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamingEnableStrippingDuplicatePrimitiveComponent,
             L"r.Streaming.EnableStrippingDuplicatePrimitiveComponent",
             &GRenderAssetStreamingEnableStrippingDuplicatePrimitiveComponent,
             L"Move UPrimitiveComponent from static instances to dynamic component manager when primitive is updated."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingEnableStrippingDuplicatePrimitiveComponent__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingFlushTimeOut'' @ 1411469f0

void __cdecl _dynamic_initializer_for__CVarStreamingFlushTimeOut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamingFlushTimeOut,L"r.Streaming.FlushTimeOut",&GStreamingFlushTimeOut,
             L"Time before we timeout when flushing streaming (default=3)",0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingFlushTimeOut__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingMaxReferenceChecksBeforeStreamOut'' @ 141146a40

void __cdecl _dynamic_initializer_for__CVarStreamingMaxReferenceChecksBeforeStreamOut__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamingMaxReferenceChecksBeforeStreamOut,
             L"r.Streaming.MaxReferenceChecksBeforeStreamOut",&GStreamingMaxReferenceChecks,
             L"Number of times the engine wait for references to be released before forcing streamout. (default=2)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingMaxReferenceChecksBeforeStreamOut__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingOverlapAssetAndLevelTicks'' @ 141146a90

void __cdecl _dynamic_initializer_for__CVarStreamingOverlapAssetAndLevelTicks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamingOverlapAssetAndLevelTicks,L"r.Streaming.OverlapAssetAndLevelTicks",
             local_res8,
             L"Ticks render asset streaming info on a high priority task thread while ticking levels on GT"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingOverlapAssetAndLevelTicks__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingParallelRenderAssetsNumWorkgroups'' @ 141146ae0

void __cdecl _dynamic_initializer_for__CVarStreamingParallelRenderAssetsNumWorkgroups__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamingParallelRenderAssetsNumWorkgroups,
             L"r.Streaming.ParallelRenderAssetsNumWorkgroups",&GParallelRenderAssetsNumWorkgroups,
             L"How many workgroups we want to use for ParellelRenderAsset updates. Splits the work up a bit more so we don\'t get as many waits. Though adds overhead to GameThread if too high."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingParallelRenderAssetsNumWorkgroups__);
  return;
}

// `dynamic_initializer_for_'CVarStreamingStressTestExtraAsyncLatency'' @ 141146b30

void __cdecl _dynamic_initializer_for__CVarStreamingStressTestExtraAsyncLatency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamingStressTestExtraAsyncLatency,L"r.Streaming.StressTest.ExtraAsyncLatency",
             local_res8,
             L"An extra latency in milliseconds for each async task when doing the stress test.",1);
  atexit(_dynamic_atexit_destructor_for__CVarStreamingStressTestExtraAsyncLatency__);
  return;
}

// `dynamic_initializer_for_'CVarSyncStatesWhenBlocking'' @ 141146b80

void __cdecl _dynamic_initializer_for__CVarSyncStatesWhenBlocking__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSyncStatesWhenBlocking,L"r.Streaming.SyncStatesWhenBlocking",local_res8,
             L"If true, SyncStates will be called to fully update async states before flushing outstanding streaming requests. Used by Movie Render Queue to ensure all streaming requests are handled each frame to avoid pop-in."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSyncStatesWhenBlocking__);
  return;
}

// `dynamic_initializer_for_'CVarTextureStreamingAmortizeCPUToGPUCopy'' @ 141146bd0

void __cdecl _dynamic_initializer_for__CVarTextureStreamingAmortizeCPUToGPUCopy__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTextureStreamingAmortizeCPUToGPUCopy,L"r.Streaming.AmortizeCPUToGPUCopy",
             local_res8,
             L"If set and r.Streaming.MaxNumTexturesToStreamPerFrame > 0, limit the number of 2D textures streamed from CPU memory to GPU memory each frame"
             ,0x1040);
  atexit(_dynamic_atexit_destructor_for__CVarTextureStreamingAmortizeCPUToGPUCopy__);
  return;
}

// `dynamic_initializer_for_'CVarTextureStreamingMaxNumTexturesToStreamPerFrame'' @ 141146c20

void __cdecl _dynamic_initializer_for__CVarTextureStreamingMaxNumTexturesToStreamPerFrame__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarTextureStreamingMaxNumTexturesToStreamPerFrame,
             L"r.Streaming.MaxNumTexturesToStreamPerFrame",local_res8,
             L"Maximum number of 2D textures allowed to stream from CPU memory to GPU memory each frame. <= 0 means no limit. This has no effect if r.Streaming.AmortizeCPUToGPUCopy is not set"
             ,0x1040);
  atexit(_dynamic_atexit_destructor_for__CVarTextureStreamingMaxNumTexturesToStreamPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate'' @ 141146c70

void __cdecl _dynamic_initializer_for__CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate,
             L"r.Streaming.TickAbandonedRenderAssetUpdatesOnStreamingUpdate",
             &GTickAbandonedRenderAssetUpdatesOnStreamingUpdate,
             L"Tick abandoned render asset updates on every streaming update",0);
  atexit(_dynamic_atexit_destructor_for__CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarUseBackgroundThreadPool'' @ 141146cc0

void __cdecl _dynamic_initializer_for__CVarUseBackgroundThreadPool__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseBackgroundThreadPool,L"r.Streaming.UseBackgroundThreadPool",local_res8,
             L"If true, use the background thread pool for mip calculations.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseBackgroundThreadPool__);
  return;
}

// `dynamic_initializer_for_'CVarWorkerCountForParallelForDuringIncrementalUpdate'' @ 141146d10

void __cdecl
UE::Private::RenderAssetStreamingManager::
_dynamic_initializer_for__CVarWorkerCountForParallelForDuringIncrementalUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWorkerCountForParallelForDuringIncrementalUpdate,
             L"r.Streaming.WorkerCountForParallelRenderAssetStreamingManagerIncrementalUpdate",
             &GWorkerCountForParallelForDuringIncrementalUpdate,
             L"Set the max number of workers when r.Streaming.AllowParallelRenderAssetStreamingManagerIncrementalUpdate is enabled. Only taked into account if value > 1 (GameThread counts as 1 worker). "
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWorkerCountForParallelForDuringIncrementalUpdate__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper266'' @ 141146d60

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper266__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_28>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper266,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'FStaticMeshStaticLightingMesh_IntersectLightRayName'' @ 141146dc0

void __cdecl _dynamic_initializer_for__FStaticMeshStaticLightingMesh_IntersectLightRayName__(void)

{
  FName::FName(&FStaticMeshStaticLightingMesh_IntersectLightRayName,
               L"FStaticMeshStaticLightingMesh_IntersectLightRay");
  return;
}

// `dynamic_initializer_for_'GStreamableErrorOnRequest'' @ 141146de0

void __cdecl _dynamic_initializer_for__GStreamableErrorOnRequest__(void)

{
  FString::FString(&GStreamableErrorOnRequest,"");
  atexit(_dynamic_atexit_destructor_for__GStreamableErrorOnRequest__);
  return;
}

// `dynamic_initializer_for_'GToggleForceDefaultMaterialCmd'' @ 141146e10

void __cdecl _dynamic_initializer_for__GToggleForceDefaultMaterialCmd__(void)

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
    puVar1[3] = ToggleForceDefaultMaterial;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GToggleForceDefaultMaterialCmd,L"ToggleForceDefaultMaterial",
             L"Render all meshes with the default material.",
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
  atexit(_dynamic_atexit_destructor_for__GToggleForceDefaultMaterialCmd__);
  return;
}

// `dynamic_initializer_for_'GToggleReversedIndexBuffersCmd'' @ 141146f50

void __cdecl _dynamic_initializer_for__GToggleReversedIndexBuffersCmd__(void)

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
    puVar1[3] = ToggleReversedIndexBuffers;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GToggleReversedIndexBuffersCmd,L"ToggleReversedIndexBuffers",
             L"Render static meshes with negative transform determinants using a reversed index buffer."
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
  atexit(_dynamic_atexit_destructor_for__GToggleReversedIndexBuffersCmd__);
  return;
}

// `dynamic_initializer_for_'GToggleShadowIndexBuffersCmd'' @ 141147090

void __cdecl _dynamic_initializer_for__GToggleShadowIndexBuffersCmd__(void)

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
    puVar1[3] = ToggleShadowIndexBuffers;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GToggleShadowIndexBuffersCmd,L"ToggleShadowIndexBuffers",
             L"Render static meshes with an optimized shadow index buffer that minimizes unique vertices."
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
  atexit(_dynamic_atexit_destructor_for__GToggleShadowIndexBuffersCmd__);
  return;
}

// `dynamic_initializer_for_'LogStereoLayerFlags'' @ 1411471d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStereoLayerFlags__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStereoLayerFlags,L"LogStereoLayerFlags",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStereoLayerFlags__);
  return;
}

// `dynamic_initializer_for_'LogStreamableManager'' @ 141147210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamableManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamableManager,L"LogStreamableManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamableManager__);
  return;
}

// `dynamic_initializer_for_'StatCmdEngineExec'' @ 141147250

void __cdecl _dynamic_initializer_for__StatCmdEngineExec__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&StatCmdEngineExec);
  StatCmdEngineExec = (FStatCmdEngine)&___7FStatCmdEngine__6B_;
  atexit(_dynamic_atexit_destructor_for__StatCmdEngineExec__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h__Script_Engine_1743090047'' @ 141147290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h__Script_Engine_1743090047__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h__Script_Engine_1439470449'' @ 1411472d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h__Script_Engine_1439470449__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h__Script_Engine_48065690'' @ 141147320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h__Script_Engine_48065690__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h__Script_Engine_769022053'' @ 141147360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h__Script_Engine_769022053__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h__Script_Engine_3916152143'' @ 1411473b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h__Script_Engine_3916152143__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h__Script_Engine_96271660'' @ 141147400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h__Script_Engine_96271660__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ServerStreamingLevelsVisibility_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_TextureStreaming'' @ 141147440

void __cdecl _dynamic_initializer_for___GCsvCategory_TextureStreaming__(void)

{
  FString::operator=(&_GCsvCategory_TextureStreaming.Name,L"TextureStreaming");
  _GCsvCategory_TextureStreaming.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_TextureStreaming.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_TextureStreaming__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterAddedObjects'' @ 141147490

void __cdecl _dynamic_initializer_for____GTraceCounterAddedObjects__(void)

{
  __GTraceCounterAddedObjects.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"StreamableAssets/SimpleStreamableAssetManager/AddedObjects",TraceCounterType_Int
                  ,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterAddedObjects.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterAddedObjects__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterRegisteredAssets'' @ 1411474d0

void __cdecl _dynamic_initializer_for____GTraceCounterRegisteredAssets__(void)

{
  __GTraceCounterRegisteredAssets.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"StreamableAssets/SimpleStreamableAssetManager/RegisteredAssets",
                  TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterRegisteredAssets.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterRegisteredAssets__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterRegisteredObjects'' @ 141147510

void __cdecl _dynamic_initializer_for____GTraceCounterRegisteredObjects__(void)

{
  __GTraceCounterRegisteredObjects.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"StreamableAssets/SimpleStreamableAssetManager/RegisteredObjects",
                  TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterRegisteredObjects.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterRegisteredObjects__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterRemovedObjects'' @ 141147550

void __cdecl _dynamic_initializer_for____GTraceCounterRemovedObjects__(void)

{
  __GTraceCounterRemovedObjects.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"StreamableAssets/SimpleStreamableAssetManager/RemovedObjects",
                  TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterRemovedObjects.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterRemovedObjects__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterStreamableAssets'' @ 141147590

void __cdecl _dynamic_initializer_for____GTraceCounterStreamableAssets__(void)

{
  __GTraceCounterStreamableAssets.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"StreamableAssets/RegisteredAssets",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterStreamableAssets.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterStreamableAssets__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterUpdatedObjects'' @ 1411475d0

void __cdecl _dynamic_initializer_for____GTraceCounterUpdatedObjects__(void)

{
  __GTraceCounterUpdatedObjects.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"StreamableAssets/SimpleStreamableAssetManager/UpdateObjects",
                  TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterUpdatedObjects.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterUpdatedObjects__);
  return;
}

// Z_Construct_UClass_AStaticMeshActor @ 148766a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AStaticMeshActor(void)

{
  if (Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton,
               &Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton;
}

// Z_Construct_UFunction_AStaticMeshActor_SetMobility @ 148766a40

UFunction * __cdecl Z_Construct_UFunction_AStaticMeshActor_SetMobility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStaticMeshReplicateMovement_SetBit @ 148766a80

void __cdecl
Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c8) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148766c10

void * __thiscall FStatCmdEngine::_scalar_deleting_destructor_(FStatCmdEngine *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EChunkSeekTableMode_StaticEnum @ 148766c50

UEnum * __cdecl EChunkSeekTableMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EChunkSeekTableMode,(UObject *)pUVar1,
                       L"EChunkSeekTableMode");
  }
  return Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton;
}

// Z_Construct_UClass_UStaticMeshDescriptionBulkData @ 148766d50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStaticMeshDescriptionBulkData(void)

{
  if (Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.OuterSingleton,
               &Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.OuterSingleton;
}

// NewStructOps @ 148766d90

void * __cdecl Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStaticMeshSourceModel,&UE::CoreUObject::Private::Construct<FStaticMeshSourceModel>,&UE::CoreUObject::Private::ConstructForTests<FStaticMeshSourceModel>,&UE::CoreUObject::Private::Destruct<FStaticMeshSourceModel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UActorTextureStreamingBuildDataComponent @ 148766ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorTextureStreamingBuildDataComponent(void)

{
  if (Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton,
               &Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton;
}

// NewStructOps @ 148766f10

void * __cdecl Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStreamableTexture,&UE::CoreUObject::Private::Construct<FStreamableTexture>,&UE::CoreUObject::Private::ConstructForTests<FStreamableTexture>,&UE::CoreUObject::Private::Destruct<FStreamableTexture>,&UE::CoreUObject::Private::Copy<FStreamableTexture>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AServerStreamingLevelsVisibility @ 1487671f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AServerStreamingLevelsVisibility(void)

{
  if (Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.OuterSingleton,
               &Z_Construct_UClass_AServerStreamingLevelsVisibility_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148767280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148767510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Nanite::<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Nanite::<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148767730

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

// Z_Construct_UClass_UStreamableRenderAsset @ 148767760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamableRenderAsset(void)

{
  if (Z_Registration_Info_UClass_UStreamableRenderAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamableRenderAsset.OuterSingleton,
               &Z_Construct_UClass_UStreamableRenderAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamableRenderAsset.OuterSingleton;
}

// Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident @ 1487677a0

UFunction * __cdecl Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_NeverStream_SetBit @ 1487677e0

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 1;
  return;
}

// NewProp_bGlobalForceMipLevelsToBeResident_SetBit @ 1487677f0

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 2;
  return;
}

// NewProp_bHasStreamingUpdatePending_SetBit @ 148767800

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 4;
  return;
}

// NewProp_bForceMiplevelsToBeResident_SetBit @ 148767810

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 8;
  return;
}

// NewProp_bIgnoreStreamingMipBias_SetBit @ 148767820

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 0x10;
  return;
}

// NewProp_bMarkAsEditorStreamingPool_SetBit @ 148767830

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bMarkAsEditorStreamingPool_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 0x20;
  return;
}

// NewProp_bUseCinematicMipLevels_SetBit @ 148767840

void __cdecl
Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) | 0x40;
  return;
}

// <lambda_invoker_cdecl> @ 148767890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl `<lambda_27>::operator()'::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  undefined1 auStack_98 [32];
  FGlobalComponentReregisterContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FlushRenderingCommands();
  FGlobalComponentReregisterContext::FGlobalComponentReregisterContext(&local_78);
  FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(&local_78);
  return;
}

// <lambda_invoker_cdecl> @ 148767910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`SuspendRenderAssetStreaming'::__l15::<lambda_1>::<lambda_invoker_cdecl>(FRHICommandList *param_1)

{
  FRHICommandListImmediate::ImmediateFlush
            (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
  return;
}

// <lambda_invoker_cdecl> @ 148767930

void __cdecl <lambda_28>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FStereoLayerPS_Base::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 148767950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`SuspendRenderAssetStreaming'::__l90::<lambda_2>::<lambda_invoker_cdecl>(FRHICommandList *param_1)

{
  FRHICommandListImmediate::ImmediateFlush
            (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
  return;
}

// operator_new<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_> @ 148767cb0

void * __cdecl
operator_new<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,
          TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x80) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xfba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = param_2->ArrayNum;
  if (uVar3 == param_2->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = uVar3 + 1;
  uVar5 = 0;
  if ((int)uVar3 < (int)(uVar3 + 1)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x80;
}

// AddLambda<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l2::<lambda_1>_> @ 148767f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
AddLambda<_FRenderAssetStreamingManager::FRenderAssetStreamingManager_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FRenderAssetStreamingManager *pFVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pFVar8 = (FRenderAssetStreamingManager *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
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
  param_1->__this = (FRenderAssetStreamingManager *)0x0;
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
      pFVar8 = (FRenderAssetStreamingManager *)*puVar5;
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
  if (this != (TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
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

// AddLambda<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l2::<lambda_2>_> @ 1487681c0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
AddLambda<_FRenderAssetStreamingManager::FRenderAssetStreamingManager_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FRenderAssetStreamingManager *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FRenderAssetStreamingManager *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FRenderAssetStreamingManager *)0x0;
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
      pFVar5 = (FRenderAssetStreamingManager *)*puVar3;
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

// AddPass<FRenderTextureDeprecationPass,`IStereoRendering::RenderTexture_RenderThread'::__l2::<lambda_1>_> @ 148768410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FRenderTextureDeprecationPass,_IStereoRendering::RenderTexture_RenderThread_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FRenderTextureDeprecationPass *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  FRenderTextureDeprecationPass *pFVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  code *pcVar8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar8 = FRenderTextureDeprecationPass::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar8 = (code *)(*pcVar8)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar8 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FRenderTextureDeprecationPass",L"FRenderTextureDeprecationPass",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StereoRendering.cpp"
                 ,0x20,0x120,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_3);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar8 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar8)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRenderTextureDeprecationPass,`IStereoRendering::RenderTexture_RenderThread'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar2 = param_4->Pass;
  pFVar7[1]._padding_ = (longlong)param_4->__this;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar2;
  *(TVector2<float>_u_0 *)&pFVar7[1].FullPathIfDebug.Data.ArrayNum =
       (param_4->WindowSize).field0_0x0;
  pFVar7[1].Name.EventFormat = (wchar_t *)param_2;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// ApplyAfter<`FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager'::__l2::<lambda_2>_&,FRenderAssetInstanceView_*> @ 148769640

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager_::__l2::<lambda_2>_&,FRenderAssetInstanceView_*>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_2> *param_1,
          FRenderAssetInstanceView **param_2)

{
  TRefCountPtr<FRenderAssetInstanceView_const_> *pTVar1;
  longlong *plVar2;
  FDynamicRenderAssetInstanceManager *pFVar3;
  FRenderAssetInstanceView *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  FRenderAssetInstanceView *pFVar8;
  undefined8 local_18 [2];
  
  pFVar3 = param_1->__this;
  pFVar8 = *param_2;
  pFVar4 = (FRenderAssetInstanceView *)(pFVar3->StateSync)._padding_;
  if ((pFVar3->DirtyIndex < *(int *)&pFVar4[1].Bounds4.AllocatorInstance.Data) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyIndex >= State->NumBounds()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                         ,0xb3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRenderAssetInstanceView::SwapData(pFVar8,pFVar4);
  if (pFVar8 != (FRenderAssetInstanceView *)0x0) {
    *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
  }
  pTVar1 = &pFVar3->AsyncView;
  if (pTVar1 == (TRefCountPtr<FRenderAssetInstanceView_const_> *)local_18) {
    if (pFVar8 == (FRenderAssetInstanceView *)0x0) {
      return;
    }
    plVar2 = &pFVar8->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 != 0) {
      return;
    }
    puVar7 = (undefined8 *)pFVar8->_padding_;
  }
  else {
    pFVar4 = pTVar1->Reference;
    pTVar1->Reference = pFVar8;
    if (pFVar4 == (FRenderAssetInstanceView *)0x0) {
      return;
    }
    plVar2 = &pFVar4->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 != 0) {
      return;
    }
    puVar7 = (undefined8 *)pFVar4->_padding_;
    pFVar8 = pFVar4;
  }
  (*(code *)*puVar7)(pFVar8,1);
  return;
}

// CastChecked<AServerStreamingLevelsVisibility,AActor> @ 1487696f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AServerStreamingLevelsVisibility * __cdecl
CastChecked<AServerStreamingLevelsVisibility,AActor>(AActor *param_1,Type param_2)

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
      return (AServerStreamingLevelsVisibility *)0x0;
    }
    pFVar3 = GetTypeName<AServerStreamingLevelsVisibility>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AServerStreamingLevelsVisibility::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AServerStreamingLevelsVisibility *)param_1;
  }
  pFVar3 = GetTypeName<AServerStreamingLevelsVisibility>(&local_28);
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

// ConstructItems<TSharedPtr<FStreamableHandle,1>,TSharedPtr<FStreamableHandle,1>,int> @ 1487697d0

void __cdecl
ConstructItems<TSharedPtr<FStreamableHandle,1>,TSharedPtr<FStreamableHandle,1>,int>
          (void *param_1,TSharedPtr<FStreamableHandle,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FStreamableHandle **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<TWeakPtr<FStreamableHandle,1>,TWeakPtr<FStreamableHandle,1>,int> @ 148769810

void __cdecl
ConstructItems<TWeakPtr<FStreamableHandle,1>,TWeakPtr<FStreamableHandle,1>,int>
          (void *param_1,TWeakPtr<FStreamableHandle,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FStreamableHandle **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FSimpleStreamableAssetManager::FAssetBoundElement,int> @ 148769ec0

void __cdecl
DefaultConstructItems<FSimpleStreamableAssetManager::FAssetBoundElement,int>
          (void *param_1,int param_2)

{
  uint *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (uint *)((longlong)param_1 + 8);
    do {
      *puVar1 = *puVar1 & 0xfffffffe;
      puVar1[-2] = 0xffffffff;
      puVar1[-1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FBounds4,int> @ 148769ef0

void __cdecl DefaultConstructItems<FBounds4,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x20] = 0;
      puVar1[0x21] = 0;
      puVar1[0x22] = 0;
      puVar1[0x23] = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar1 + 0x124) = 0x7f7fffff;
      *(undefined4 *)(puVar1 + 0x25) = 0x7f7fffff;
      *(undefined4 *)((longlong)puVar1 + 300) = 0x7f7fffff;
      *(undefined4 *)(puVar1 + 0x26) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar1 + 0x134) = 0xff7fffff;
      *(undefined4 *)(puVar1 + 0x27) = 0xff7fffff;
      *(undefined4 *)((longlong)puVar1 + 0x13c) = 0xff7fffff;
      puVar1 = puVar1 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int> @ 14876a040

void __cdecl
DefaultConstructItems<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int>
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

// DefaultConstructItems<FRenderAssetInstanceState::FPreAddComponentPayload,int> @ 14876a070

void __cdecl
DefaultConstructItems<FRenderAssetInstanceState::FPreAddComponentPayload,int>
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

// DefaultConstructItems<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,int> @ 14876a0a0

void __cdecl
DefaultConstructItems<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FTracedTask,int> @ 14876a0d0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FTracedTask,int>
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

// DestructItems<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>,int> @ 14876a1a0

void __cdecl
DestructItems<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>,int>
          (TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement> *param_1,
          int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->UsedElements).AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[2] != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UStreamableRenderAsset::FLODStreamingCallbackPayload,int> @ 14876a1f0

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
DestructItems<UStreamableRenderAsset::FLODStreamingCallbackPayload,int>
          (FLODStreamingCallbackPayload *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->CallbackDone).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xb] != 0) {
        plVar1 = plVar2 + -9;
        if ((longlong *)plVar2[-6] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-6];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRenderAssetInstanceState::FPreAddBounds,int> @ 14876a260

void __cdecl
DestructItems<FRenderAssetInstanceState::FPreAddBounds,int>(FPreAddBounds *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RenderAssets;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 7) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int> @ 14876a2a0

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
DestructItems<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int>
          (FPreAddComponentIgnoreBoundsPayload *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RenderAssets;
    do {
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

// DestructItems<FRenderAssetInstanceState::FPreAddComponentPayload,int> @ 14876a2e0

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
DestructItems<FRenderAssetInstanceState::FPreAddComponentPayload,int>
          (FPreAddComponentPayload *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FRenderAssetInstanceState::FPreAddBounds,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Bounds;
    do {
      DestructItems<FRenderAssetInstanceState::FPreAddBounds,int>
                ((FPreAddBounds *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
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

// DestructItems<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,int> @ 14876a330

void __cdecl
DestructItems<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,int>
          (FProcessActorContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->UnprocessedComponents).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FStreamingRenderAsset,int> @ 14876a370

void __cdecl DestructItems<FStreamingRenderAsset,int>(FStreamingRenderAsset *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount;
    do {
      if (pFVar1[0x13].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[0x13].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FTracedTask,int> @ 14876a3c0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FTracedTask,int>
          (FTracedTask_conflict *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FTracedTask_conflict *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = param_1 + 0x38;
    do {
      if (((*(ulonglong *)pFVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(ulonglong *)(pFVar3 + -0x10) + 0x18))(pFVar3 + -0x10,pFVar3 + -0x38);
      pFVar3 = pFVar3 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_>,int> @ 14876a440

void __cdecl
DestructItems<TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_>,int>
          (TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>,int> @ 14876a480

void __cdecl
DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>,int>
          (TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = param_1->Reference;
    if (pTVar2 != (TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *)0x0) {
      plVar1 = &pTVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar2->_padding_)(pTVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,int> @ 14876a4d0

void __cdecl
DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>,int>
          (TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = param_1->Reference;
    if (pTVar2 != (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *)0x0) {
      plVar1 = &pTVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar2->_padding_)(pTVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>,int> @ 14876a520

void __cdecl
DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>,int>
          (TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = param_1->Reference;
    if (pTVar2 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *)0x0) {
      plVar1 = &pTVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar2->_padding_)(pTVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,int> @ 14876a570

void __cdecl
DestructItems<TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>,int>
          (TRefCountPtr<RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = param_1->Reference;
    if (pTVar2 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
      plVar1 = &pTVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar2->_padding_)(pTVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FRenderAssetUpdate>,int> @ 14876a5c0

void __cdecl
DestructItems<TRefCountPtr<FRenderAssetUpdate>,int>
          (TRefCountPtr<FRenderAssetUpdate> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FRenderAssetUpdate *)0x0) {
      FRenderAssetUpdate::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FStreamableHandleContextDataBase,1>,int> @ 14876a600

void __cdecl
DestructItems<TSharedPtr<FStreamableHandleContextDataBase,1>,int>
          (TSharedPtr<FStreamableHandleContextDataBase,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FStreamableHandle,1>,int> @ 14876a640

void __cdecl
DestructItems<TSharedRef<FStreamableHandle,1>,int>
          (TSharedRef<FStreamableHandle,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<FStreamableHandle,1>,int> @ 14876a680

void __cdecl
DestructItems<TWeakPtr<FStreamableHandle,1>,int>(TWeakPtr<FStreamableHandle,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStaticMeshSceneProxy::FLODInfo,int> @ 14876a6d0

void __cdecl DestructItems<FStaticMeshSceneProxy::FLODInfo,int>(FLODInfo *param_1,int param_2)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->OverrideColorVFUniformBuffer;
    do {
      if (pTVar1[1] != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FMemory::Free((void *)pTVar1[1]);
      }
      if (*pTVar1 != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)*pTVar1);
      }
      if (pTVar1[-3] != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FMemory::Free((void *)pTVar1[-3]);
      }
      pTVar1[-0xc] = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)
                     &___7FLightCacheInterface__6B_;
      if (pTVar1[-7] != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[-7]);
      }
      pTVar1 = pTVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStaticMeshSceneProxy::FRayTracingLODInfo,int> @ 14876a750

void __cdecl
DestructItems<FStaticMeshSceneProxy::FRayTracingLODInfo,int>
          (FRayTracingLODInfo *param_1,int param_2)

{
  ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Sections).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<FStaticMeshSceneProxy::FRayTracingLODInfo::FSectionInfo>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRenderAssetInstanceAsyncView,int> @ 14876a790

void __cdecl
DestructItems<FRenderAssetInstanceAsyncView,int>(FRenderAssetInstanceAsyncView *param_1,int param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRenderAssetInstanceView *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = (param_1->BoundsViewInfo).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar3 = (param_1->View).Reference;
    if (pFVar3 != (FRenderAssetInstanceView *)0x0) {
      plVar1 = &pFVar3->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::TSTR_FLocalVertexFactoryCopyData2610>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14876c080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshSceneProxy::FLODInfo::FLODInfo_::__l38::TSTR_FLocalVertexFactoryCopyData2610>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::TSTR_FLocalVertexFactoryCopyData2610>
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
      if (bVar8) goto LAB_14876c1d1;
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
    goto LAB_14876c3c5;
  }
LAB_14876c1d1:
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
LAB_14876c2af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14876c2af;
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
LAB_14876c3c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`SuspendRenderAssetStreaming'::__l90::TSTR_FlushCommand122>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14876c400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_SuspendRenderAssetStreaming_::__l90::TSTR_FlushCommand122>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`SuspendRenderAssetStreaming'::__l90::TSTR_FlushCommand122>::Get();
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
      if (bVar8) goto LAB_14876c551;
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
    goto LAB_14876c745;
  }
LAB_14876c551:
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
LAB_14876c62f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14876c62f;
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
LAB_14876c745:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`SuspendRenderAssetStreaming'::__l15::TSTR_FlushCommand77>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14876c780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_SuspendRenderAssetStreaming_::__l15::TSTR_FlushCommand77>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`SuspendRenderAssetStreaming'::__l15::TSTR_FlushCommand77>::Get();
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
      if (bVar8) goto LAB_14876c8d1;
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
    goto LAB_14876cac5;
  }
LAB_14876c8d1:
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
LAB_14876c9af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14876c9af;
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
LAB_14876cac5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FRenderAssetStreamingManager::StreamOutRenderAssetData'::__l25::TSTR_FlushResourceCommand436>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14876cb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FRenderAssetStreamingManager::StreamOutRenderAssetData_::__l25::TSTR_FlushResourceCommand436>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FRenderAssetStreamingManager::StreamOutRenderAssetData'::__l25::TSTR_FlushResourceCommand436>
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
      if (bVar8) goto LAB_14876cc51;
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
    goto LAB_14876ce45;
  }
LAB_14876cc51:
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
LAB_14876cd2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14876cd2f;
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
LAB_14876ce45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::TSTR_RenderAssetUpdateCommand310>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14876ce80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FRenderAssetUpdate::ScheduleRenderTask_::__l2::TSTR_RenderAssetUpdateCommand310>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::TSTR_RenderAssetUpdateCommand310>
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
      if (bVar8) goto LAB_14876cfd1;
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
    goto LAB_14876d1c5;
  }
LAB_14876cfd1:
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
LAB_14876d0af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14876d0af;
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
LAB_14876d1c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindLastByPredicate<`FRenderAssetStreamingManager::AddLevel'::__l2::<lambda_1>_> @ 14876d990

int __thiscall
TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FRenderAssetStreamingManager::AddLevel_::__l2::<lambda_1>_>
          (TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_2 * 8;
  do {
    if (pFVar5 == pFVar1) {
      return -1;
    }
    pFVar5 = pFVar5 + -8;
  } while (*(longlong *)pFVar5 != 0);
  return (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 14876db30

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
ForEachComponent_Internal<UPrimitiveComponent,1,1,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
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
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStack_248 [32];
  longlong *local_228;
  ForElementType<AActor_*> local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  longlong local_1f0;
  int local_1e8;
  int local_1e4;
  TObjectPtr<UClass>_u_0 local_1e0;
  UObject *local_1d8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  undefined1 *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  <lambda_1> local_168;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_1e0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
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
    if (bVar12) goto LAB_14876dc4f;
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
LAB_14876dc4f:
  local_3c = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_1c8 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_1c4 = 1;
  local_1b0 = 0;
  iStack_1b4 = iStack_1c8;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar4;
    }
    uVar19 = *puVar21;
    iStack_1c8 = 0;
    local_1b0 = 0;
    while (uVar19 == 0) {
      iStack_1c8 = iStack_1c8 + 1;
      local_1b0 = local_1b0 + 0x20;
      iStack_1b4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8) goto LAB_14876dced;
      uVar19 = puVar21[iStack_1c8];
    }
    uStack_1c4 = ~(uVar19 - 1) & uVar19;
    uVar3 = (ulonglong)uStack_1c4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1e8 = (int)lVar15;
    iStack_1b4 = local_1e8 + -1 + local_1b0;
    if (iVar5 < iStack_1b4) {
      iStack_1b4 = iVar5;
    }
  }
LAB_14876dced:
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_1ac = local_10c;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_1a8 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_1b8 = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
  TStack_198.CurrentBitIndex = iStack_1b4;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_198._28_4_ = local_10c;
  TStack_198.BaseBitIndex = local_1b0;
  uStack_178 = CONCAT44(uStack_1a4,iStack_1a8);
  local_1d0 = pTVar1;
  local_1c0 = puVar4;
  local_1a0 = pTVar1;
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      iVar16 = iVar16 + 1;
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14876ddf0;
      uVar19 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1e4 = (int)lVar15;
    uVar19 = local_1e4 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_14876ddf0:
  do {
    pTVar11 = local_1a0;
    if (*(int *)&(local_1a0->Elements).field_0x8 - *(int *)&(local_1a0->Elements).field_0x34 !=
        (int)uStack_178) {
      local_1f8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    iVar5 = local_40;
    TVar10 = local_1e0;
    if (((TStack_198.CurrentBitIndex == uVar19) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar11 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_108.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1f7);
        }
        if (FVar17 == FVar2) break;
        local_1d8 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1d8);
        }
        local_168.__this = param_2->__this;
        local_168.DynamicComponentManager = param_2->DynamicComponentManager;
        local_168.Context = param_2->Context;
        local_168.LevelContext = param_2->LevelContext;
        local_168.NumSteps = param_2->NumSteps;
        local_168.bIsStaticActor = param_2->bIsStaticActor;
        local_168.bIsParallelForAllowed = param_2->bIsParallelForAllowed;
        local_168._49_7_ = *(undefined7 *)&param_2->field_0x31;
        ForEachComponent_Internal<UPrimitiveComponent,1,1,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1d8,&local_168);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_198.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      ``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::
      <lambda_1>::operator()(param_2,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1f0 = *(longlong *)&pUVar8->field_0x258, local_1f0 != 0))
      {
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1f0) {
          FVar17 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_108.SecondaryData;
          }
          if (&local_1f0 < (longlong *)((longlong)FVar17 + (longlong)local_3c * 8)) {
            local_210 = (longlong)local_40;
            local_208 = 8;
            local_228 = &local_1f0;
            local_220 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_220 = local_108.SecondaryData;
            }
            local_218 = (longlong)local_3c;
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
        FVar17 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar17 + lVar15 * 8) = local_1f0;
      }
    }
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 14876e080

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
ForEachComponent_Internal<UPrimitiveComponent,1,0,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UPrimitiveComponent *pUVar6;
  code *pcVar7;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_b8 [4];
  int local_b4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar12 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar12 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar10->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  pUVar10 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar10 != pUVar11) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar4 = (int)pUVar11->_padding_;
    if (((int)pUVar10->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14876e187;
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
LAB_14876e187:
  iStack_a8 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  pTVar2 = &this->OwnedComponents;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14876e20d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b4 = (int)lVar12;
    iStack_94 = local_b4 + -1 + local_90;
    if (iVar4 < iStack_94) {
      iStack_94 = iVar4;
    }
  }
LAB_14876e20d:
  uStack_8c = local_34;
  iStack_88 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_98 = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = local_34;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar2;
  local_a0 = puVar1;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14876e311;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14876e311:
  while( true ) {
    pTVar8 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pUVar6 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      ``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::
      <lambda_1>::operator()(param_2,pUVar6);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 14876e390

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
ForEachComponent_Internal<UPrimitiveComponent,0,1,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_248 [32];
  longlong *local_228;
  ForElementType<AActor_*> local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  longlong local_1f0;
  int local_1e8;
  int local_1e4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1e0;
  TObjectPtr<UClass>_u_0 local_1d8;
  UObject *local_1d0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  <lambda_1> local_168;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_1d8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
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
    if (bVar13) goto LAB_14876e47f;
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
LAB_14876e47f:
  local_3c = 0x18;
  local_1e0 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_1c0 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_1bc = 1;
  local_1a8 = 0;
  iStack_1ac = iStack_1c0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar3;
    }
    uVar17 = *puVar20;
    iStack_1c0 = 0;
    local_1a8 = 0;
    while (uVar17 == 0) {
      iStack_1c0 = iStack_1c0 + 1;
      local_1a8 = local_1a8 + 0x20;
      iStack_1ac = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_1c0) goto LAB_14876e524;
      uVar17 = puVar20[iStack_1c0];
    }
    uStack_1bc = ~(uVar17 - 1) & uVar17;
    uVar2 = (ulonglong)uStack_1bc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1e8 = (int)lVar15;
    iStack_1ac = local_1e8 + -1 + local_1a8;
    if (iVar4 < iStack_1ac) {
      iStack_1ac = iVar4;
    }
  }
LAB_14876e524:
  uStack_1a4 = local_10c;
  iStack_1a0 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_1b0 = 0xffffffff;
  TStack_190._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_190.CurrentBitIndex = iStack_1ac;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_190._28_4_ = local_10c;
  TStack_190.BaseBitIndex = local_1a8;
  uStack_170 = CONCAT44(uStack_19c,iStack_1a0);
  local_1c8 = local_1e0;
  local_1b8 = puVar3;
  local_198 = local_1e0;
  TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1e0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_14876e630;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar2 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1e4 = (int)lVar15;
    uVar17 = local_1e4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14876e630:
  do {
    pTVar12 = local_198;
    if (*(int *)&(local_198->Elements).field_0x8 - *(int *)&(local_198->Elements).field_0x34 !=
        (int)uStack_170) {
      local_1f8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    iVar4 = local_40;
    TVar11 = local_1d8;
    if (((TStack_190.CurrentBitIndex == uVar17) &&
        (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_108.SecondaryData;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1f7);
        }
        if (FVar16 == FVar1) break;
        local_1d0 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1d0);
        }
        local_168.__this = param_2->__this;
        local_168.DynamicComponentManager = param_2->DynamicComponentManager;
        local_168.Context = param_2->Context;
        local_168.LevelContext = param_2->LevelContext;
        local_168.NumSteps = param_2->NumSteps;
        local_168.bIsStaticActor = param_2->bIsStaticActor;
        local_168.bIsParallelForAllowed = param_2->bIsParallelForAllowed;
        local_168._49_7_ = *(undefined7 *)&param_2->field_0x31;
        ForEachComponent_Internal<UPrimitiveComponent,0,1,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_1d0,&local_168);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_190.CurrentBitIndex * 0x10);
    if (pUVar8 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        ``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::
        <lambda_1>::operator()(param_2,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1f0 = *(longlong *)&pUVar8->field_0x258, local_1f0 != 0))
      {
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_1f0) {
          FVar16 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_108.SecondaryData;
          }
          if (&local_1f0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_210 = (longlong)local_40;
            local_208 = 8;
            local_228 = &local_1f0;
            local_220 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_220 = local_108.SecondaryData;
            }
            local_218 = (longlong)local_3c;
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
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar15 * 8) = local_1f0;
      }
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::<lambda_1>_> @ 14876e8d0

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
ForEachComponent_Internal<UPrimitiveComponent,0,0,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  UPrimitiveComponent *pUVar7;
  longlong lVar8;
  code *pcVar9;
  <lambda_1> *this_00;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar17;
  uint uVar18;
  undefined1 local_b8 [4];
  int local_b4;
  <lambda_1> *local_b0;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  local_b0 = param_2;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_14876e9ae;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14876e9ae:
  iStack_a0 = 0;
  pTVar17 = &this->OwnedComponents;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      iStack_a0 = iStack_a0 + 1;
      local_88 = local_88 + 0x20;
      iStack_8c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_a0) goto LAB_14876ea3f;
      uVar14 = puVar16[iStack_a0];
    }
    uStack_9c = ~(uVar14 - 1) & uVar14;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b4 = (int)lVar8;
    iStack_8c = local_b4 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14876ea3f:
  uVar14 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_84 = local_2c;
  iStack_80 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
              *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = local_2c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar17;
  local_98 = puVar2;
  local_78 = pTVar17;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00 = local_b0;
  uVar4 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar15 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      iVar13 = iVar13 + 1;
      uVar18 = uVar18 + 0x20;
      uVar14 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar13) goto LAB_14876eb50;
      uVar14 = *(uint *)(puVar15 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14876eb50:
  while( true ) {
    pTVar10 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar10 == pTVar17)
       ) break;
    pUVar7 = *(UPrimitiveComponent **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (pUVar7 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
        ``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::
        <lambda_1>::operator()(this_00,pUVar7);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// ForEachLoadedAsset<`FStreamableHandle::GetLoadedAssets'::__l2::<lambda_1>_> @ 14876ebf0

void __thiscall
FStreamableHandle::ForEachLoadedAsset<_FStreamableHandle::GetLoadedAssets_::__l2::<lambda_1>_>
          (FStreamableHandle *this,<lambda_1> param_1)

{
  int iVar1;
  uint uVar2;
  FStreamableManager *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FStreamable *pFVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  FSoftObjectPath *pFVar10;
  FSoftObjectPath *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (this->bLoadCompleted != false) {
    pFVar11 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
    iVar1 = (this->RequestedAssets).ArrayNum;
    pFVar10 = pFVar11 + iVar1;
    local_res10 = param_1.LoadedAssets;
    while( true ) {
      if ((this->RequestedAssets).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar10) break;
      if ((this->bCanceled == false) && (this->bReleased == false)) {
        pFVar3 = this->OwningManager;
        bVar6 = IsInGameThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                               ,0x91a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = FStreamableManager::FindStreamable(pFVar3,pFVar11);
        if ((pFVar7 == (FStreamable *)0x0) ||
           (pUVar8 = (pFVar7->Target).field0_0x0.DebugPtr, pUVar8 == (UObject *)0x0)) {
          pUVar8 = (UObject *)0x0;
        }
      }
      else {
        pUVar8 = FSoftObjectPath::ResolveObject(pFVar11);
      }
      `FStreamableHandle::GetLoadedAssets'::__l2::<lambda_1>::operator()(&local_res10,pUVar8);
      pFVar11 = pFVar11 + 1;
    }
    uVar2 = (this->ChildHandles).ArrayNum;
    uVar9 = (ulonglong)(int)uVar2;
    pFVar13 = (this->ChildHandles).AllocatorInstance.Data;
    pFVar12 = pFVar13 + uVar9 * 0x10;
    while( true ) {
      if ((this->ChildHandles).ArrayNum != (int)uVar9) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar13 == pFVar12) break;
      if ((*(longlong *)pFVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)pFVar13;
      iVar1 = *(int *)(lVar4 + 200);
      pFVar11 = *(FSoftObjectPath **)(lVar4 + 0xc0);
      pFVar10 = pFVar11 + iVar1;
      while( true ) {
        if (*(int *)(lVar4 + 200) != iVar1) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar11 == pFVar10) break;
        if ((this->bCanceled == false) && (this->bReleased == false)) {
          pFVar3 = this->OwningManager;
          bVar6 = IsInGameThread();
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x91a,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar7 = FStreamableManager::FindStreamable(pFVar3,pFVar11);
          if ((pFVar7 == (FStreamable *)0x0) ||
             (pUVar8 = (pFVar7->Target).field0_0x0.DebugPtr, pUVar8 == (UObject *)0x0)) {
            pUVar8 = (UObject *)0x0;
          }
        }
        else {
          pUVar8 = FSoftObjectPath::ResolveObject(pFVar11);
        }
        `FStreamableHandle::GetLoadedAssets'::__l2::<lambda_1>::operator()(&local_res10,pUVar8);
        pFVar11 = pFVar11 + 1;
      }
      uVar9 = (ulonglong)uVar2;
      pFVar13 = pFVar13 + 0x10;
    }
  }
  return;
}

// GetTypeHash<FStreamableHandle_const_,1> @ 14876f830

uint __cdecl
GetTypeHash<FStreamableHandle_const_,1>(TSharedPtr<FStreamableHandle_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FStreamableHandle,1> @ 14876f860

uint __cdecl GetTypeHash<FStreamableHandle,1>(TSharedPtr<FStreamableHandle,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<AServerStreamingLevelsVisibility> @ 14876f890

FString * __cdecl GetTypeName<AServerStreamingLevelsVisibility>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AServerStreamingLevelsVisibility::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_> @ 14876ff10

void __cdecl
AlgoImpl::
HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_>
          (int *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FCompareRenderAssetByLoadOrderPriority *pFVar6;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar5 = param_2 * 2;
    iVar12 = iVar5 + 1;
    if (iVar5 + 2 < param_3) {
      pFVar6 = param_5->Predicate->Predicate;
      pTVar7 = pFVar6->StreamingRenderAssets;
      uVar2 = param_1[iVar12];
      uVar3 = param_1[(longlong)iVar5 + 2];
      uVar11 = 0;
      if ((int)uVar3 < pTVar7->ArrayNum) {
        uVar11 = ~uVar3 >> 0x1f;
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
      pTVar8 = pFVar6->StreamingRenderAssets;
      iVar4 = *(int *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x7c);
      uVar11 = 0;
      if ((int)uVar2 < pTVar8->ArrayNum) {
        uVar11 = ~uVar2 >> 0x1f;
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
      iVar1 = *(int *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar2 * 0xb8 + 0x7c);
      if (iVar1 < iVar4) {
        bVar10 = true;
      }
      else if (iVar4 == iVar1) {
        bVar10 = (int)uVar2 < (int)uVar3;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        iVar12 = iVar5;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar6 = param_5->Predicate->Predicate;
    uVar2 = param_1[iVar12];
    uVar3 = param_1[param_2];
    pTVar7 = pFVar6->StreamingRenderAssets;
    uVar11 = 0;
    if ((int)uVar3 < pTVar7->ArrayNum) {
      uVar11 = ~uVar3 >> 0x1f;
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
    pTVar8 = pFVar6->StreamingRenderAssets;
    iVar5 = *(int *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x7c);
    uVar11 = 0;
    if ((int)uVar2 < pTVar8->ArrayNum) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    iVar4 = *(int *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar2 * 0xb8 + 0x7c);
    if (iVar5 <= iVar4) {
      if (iVar5 != iVar4) {
        return;
      }
      if ((int)uVar3 <= (int)uVar2) {
        return;
      }
    }
    iVar5 = param_1[param_2];
    param_1[param_2] = param_1[iVar12];
    param_1[iVar12] = iVar5;
    param_2 = iVar12;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_> @ 148770190

void __cdecl
AlgoImpl::
HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
          (int *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
          *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FCompareRenderAssetByRetentionPriority *pFVar8;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  
  do {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar7 = param_2 * 2;
    iVar13 = iVar7 + 1;
    if (iVar7 + 2 < param_3) {
      pFVar8 = param_5->Predicate->Predicate;
      pTVar9 = pFVar8->StreamingRenderAssets;
      uVar4 = param_1[iVar13];
      uVar5 = param_1[(longlong)iVar7 + 2];
      uVar12 = 0;
      if ((int)uVar5 < pTVar9->ArrayNum) {
        uVar12 = ~uVar5 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar6 = *(int *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xb8 + 0x74);
      pTVar9 = pFVar8->StreamingRenderAssets;
      uVar12 = 0;
      if ((int)uVar4 < pTVar9->ArrayNum) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar1 = *(int *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xb8 + 0x74);
      if (iVar1 < iVar6) {
        bVar11 = true;
      }
      else if (iVar6 == iVar1) {
        pTVar9 = pFVar8->StreamingRenderAssets;
        uVar12 = 0;
        if ((int)uVar5 < pTVar9->ArrayNum) {
          uVar12 = ~uVar5 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar2 = *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xb8 + 0x78);
        pTVar9 = pFVar8->StreamingRenderAssets;
        uVar12 = 0;
        if ((int)uVar4 < pTVar9->ArrayNum) {
          uVar12 = ~uVar4 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar3 = *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xb8 + 0x78);
        if (fVar2 <= fVar3) {
          if (fVar2 != fVar3) goto LAB_1487703ca;
          bVar11 = (int)uVar4 < (int)uVar5;
        }
        else {
          bVar11 = true;
        }
      }
      else {
LAB_1487703ca:
        bVar11 = false;
      }
      if (bVar11) {
        iVar13 = iVar7;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar8 = param_5->Predicate->Predicate;
    pTVar9 = pFVar8->StreamingRenderAssets;
    uVar4 = param_1[iVar13];
    uVar5 = param_1[param_2];
    uVar12 = 0;
    if ((int)uVar5 < pTVar9->ArrayNum) {
      uVar12 = ~uVar5 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar7 = *(int *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xb8 + 0x74);
    pTVar9 = pFVar8->StreamingRenderAssets;
    uVar12 = 0;
    if ((int)uVar4 < pTVar9->ArrayNum) {
      uVar12 = ~uVar4 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar6 = *(int *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xb8 + 0x74);
    if (iVar7 <= iVar6) {
      if (iVar7 != iVar6) {
        return;
      }
      pTVar9 = pFVar8->StreamingRenderAssets;
      uVar12 = 0;
      if ((int)uVar5 < pTVar9->ArrayNum) {
        uVar12 = ~uVar5 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar2 = *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xb8 + 0x78);
      pTVar9 = pFVar8->StreamingRenderAssets;
      uVar12 = 0;
      if ((int)uVar4 < pTVar9->ArrayNum) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar3 = *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xb8 + 0x78);
      if (fVar2 <= fVar3) {
        if (fVar2 != fVar3) {
          return;
        }
        if ((int)uVar5 <= (int)uVar4) {
          return;
        }
      }
    }
    iVar7 = param_1[param_2];
    param_1[param_2] = param_1[iVar13];
    param_1[iVar13] = iVar7;
    param_2 = iVar13;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_> @ 148770620

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FIdentityFunctor local_res18 [8];
  TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority> local_res20;
  TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_> local_18 [2];
  
  local_res18[0] = param_3;
  local_res20.Predicate = param_4.Predicate;
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
  }
  else if (param_2 == 0) {
    return;
  }
  local_18[0].Predicate = &local_res20;
  HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_>
            (param_1,param_2,param_3,&local_res20);
  iVar4 = param_2 + -1;
  if (0 < iVar4) {
    lVar5 = (longlong)iVar4 * 4;
    do {
      iVar1 = *param_1;
      *param_1 = *(int *)(lVar5 + (longlong)param_1);
      *(int *)(lVar5 + (longlong)param_1) = iVar1;
      HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_>
                (param_1,0,iVar4,local_res18,local_18);
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -4;
    } while (0 < iVar4);
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_> @ 148770700

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FIdentityFunctor local_res10 [8];
  FIdentityFunctor local_res18 [8];
  TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority> local_res20;
  TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_> local_28;
  TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_> local_20;
  
  local_res18[0] = param_3;
  local_res20.Predicate = param_4.Predicate;
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
  }
  else if (param_2 == 0) {
    return;
  }
  local_20.Predicate = &local_res20;
  local_28.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                         ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
            (param_1,iVar4,param_2,local_res10,&local_28);
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
              (param_1,iVar4,param_2,local_res10,&local_28);
  }
  iVar4 = param_2 + -1;
  if (0 < iVar4) {
    lVar5 = (longlong)iVar4 * 4;
    do {
      iVar1 = *param_1;
      *param_1 = *(int *)((longlong)param_1 + lVar5);
      *(int *)((longlong)param_1 + lVar5) = iVar1;
      HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
                (param_1,0,iVar4,local_res18,&local_20);
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -4;
    } while (0 < iVar4);
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>_>_> @ 148770860

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand_::__l15::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_bool___cdecl_FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand(wchar_t_const_*,FOutputDevice_&,UWorld_*)_::_15_::<lambda_1>_>
          param_4)

{
  int *piVar1;
  int *piVar2;
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
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_148770967:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar8 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = iVar8;
            if (1 < iVar6) {
              do {
                iVar9 = iVar5 * 2;
                iVar8 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  bVar4 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15
                          ::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar8);
                  if (bVar4) {
                    iVar8 = iVar9;
                  }
                  iVar8 = iVar8 + 1;
                }
                piVar1 = param_1 + iVar8;
                piVar2 = param_1 + iVar5;
                bVar4 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::
                        <lambda_1>::operator()(param_4.Predicate,piVar2,piVar1);
                if (!bVar4) break;
                iVar5 = *piVar2;
                *piVar2 = *piVar1;
                *piVar1 = iVar5;
                iVar5 = iVar8;
              } while (iVar8 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      bVar4 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>
              ::operator()(param_4.Predicate,param_1 + (iVar6 + 2),param_1 + iVar7);
      if (bVar4) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    piVar1 = param_1 + iVar7;
    piVar2 = param_1 + iVar5;
    bVar4 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>::
            operator()(param_4.Predicate,piVar2,piVar1);
    if (!bVar4) goto LAB_148770967;
    iVar5 = *piVar2;
    *piVar2 = *piVar1;
    iVar6 = iVar7 * 2 + 1;
    *piVar1 = iVar5;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>_>_> @ 148770a50

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async_::__l15::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async(FRenderAssetStreamingSettings_const_&)_::_15_::<lambda_1>_>
          param_4)

{
  int iVar1;
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
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_148770b6c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::
                          <lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>
                        ::operator()(param_4.Predicate,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
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
      bVar3 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>::
              operator()(param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_148770b6c;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_> @ 148770c50

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>
          param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  longlong lVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar21;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar12 = iVar11;
  iVar20 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_148770dbc:
      if (iVar20 == 0) {
        iVar11 = param_2 + -1;
        lVar17 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar21 = param_1 + lVar17;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8);
            TVar4 = param_1->_s_1;
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar21->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar3;
            pTVar21->_s_1 = TVar4;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8) = uVar5;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10) = uVar6;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18) = uVar7;
            iVar12 = 0;
            if (1 < iVar11) {
              do {
                iVar20 = iVar12 * 2;
                iVar9 = iVar20 + 1;
                if (iVar20 + 2 < iVar11) {
                  lVar13 = (longlong)iVar20 + 1;
                  lVar1 = (longlong)iVar20 + 2;
                  if (*(int *)(lVar13 * 0x20 + 8 + (longlong)param_1) == 0) {
                    pwVar15 = L"";
                  }
                  else {
                    pwVar15 = *(wchar_t **)&param_1[lVar13]._s_1;
                  }
                  if (*(int *)(lVar1 * 0x20 + 8 + (longlong)param_1) == 0) {
                    pwVar14 = L"";
                  }
                  else {
                    pwVar14 = *(wchar_t **)&param_1[lVar1]._s_1;
                  }
                  iVar16 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
                  if (iVar16 < 0) {
                    iVar9 = iVar20;
                  }
                  iVar9 = iVar9 + 1;
                }
                pTVar18 = param_1 + iVar12;
                pTVar19 = param_1 + iVar9;
                if (*(int *)((longlong)(pTVar19->ElementData).Pad + 8) == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = *(wchar_t **)&pTVar19->_s_1;
                }
                if (*(int *)((pTVar18->ElementData).Pad + 8) == 0) {
                  pwVar14 = L"";
                }
                else {
                  pwVar14 = *(wchar_t **)&pTVar18->_s_1;
                }
                iVar12 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
                if (-1 < iVar12) break;
                uVar3 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8);
                TVar4 = pTVar18->_s_1;
                uVar5 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
                uVar6 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
                uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
                pTVar18->_s_1 = pTVar19->_s_1;
                *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar3;
                uVar3 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar3;
                pTVar19->_s_1 = TVar4;
                *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8) = uVar5;
                *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10) = uVar6;
                *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18) = uVar7;
                iVar12 = iVar9;
              } while (iVar9 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar17 = lVar17 + -1;
            pTVar21 = pTVar21 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar9 = iVar20 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar20 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar16 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      lVar17 = (longlong)iVar11 + 1;
      lVar13 = (longlong)iVar11 + 2;
      if (*(int *)(lVar17 * 0x20 + 8 + (longlong)param_1) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)&param_1[lVar17]._s_1;
      }
      if (*(int *)(lVar13 * 0x20 + 8 + (longlong)param_1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)&param_1[lVar13]._s_1;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
      if (iVar10 < 0) {
        iVar16 = iVar11;
      }
      iVar16 = iVar16 + 1;
    }
    pTVar21 = param_1 + iVar9;
    pTVar18 = param_1 + iVar16;
    if (*(int *)((longlong)(pTVar18->ElementData).Pad + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)&pTVar18->_s_1;
    }
    if (*(int *)((pTVar21->ElementData).Pad + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)&pTVar21->_s_1;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
    if (-1 < iVar11) goto LAB_148770dbc;
    uVar3 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8);
    iVar11 = iVar16 * 2 + 1;
    TVar4 = pTVar21->_s_1;
    uVar5 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
    uVar6 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
    uVar7 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
    pTVar21->_s_1 = pTVar18->_s_1;
    *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar3;
    pTVar18->_s_1 = TVar4;
    *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8) = uVar5;
    *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10) = uVar6;
    *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x18) = uVar7;
    iVar9 = iVar16;
  } while( true );
}

// HeapSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,`FSimpleStreamableAssetManager::RegisterRecord'::__l18::<lambda_1>_>_> @ 148770f30

void __cdecl
AlgoImpl::
HeapSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FSimpleStreamableAssetManager::RegisterRecord_::__l18::<lambda_1>_>_>
          (FStreamingRenderAssetPrimitiveInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_private:_void___cdecl_FSimpleStreamableAssetManager::RegisterRecord(FSimpleStreamableAssetManager::FRegister_&)_::_18_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  UStreamableRenderAsset *pUVar4;
  UStreamableRenderAsset *pUVar5;
  code *pcVar6;
  int iVar7;
  double dVar8;
  TObjectPtr<UStreamableRenderAsset>_u_0 TVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FStreamingRenderAssetPrimitiveInfo *pFVar20;
  FStreamingRenderAssetPrimitiveInfo *pFVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  bool bVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  FStreamingRenderAssetPrimitiveInfo *pFVar29;
  int iVar30;
  longlong lVar31;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar25) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FSimpleStreamableAssetManager::RegisterRecord_::__l18::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_private:_void___cdecl_FSimpleStreamableAssetManager::RegisterRecord(FSimpleStreamableAssetManager::FRegister_&)_::_18_::<lambda_1>_>
              *)&local_res20);
  iVar28 = param_2 + -1;
  lVar31 = (longlong)iVar28;
  if (0 < iVar28) {
    pFVar29 = param_1 + lVar31;
    do {
      dVar8 = (pFVar29->Bounds).Origin.field0_0x0._s_0.X;
      iVar30 = 0;
      TVar9 = (param_1->RenderAsset).field0_0x0;
      dVar10 = (param_1->Bounds).Origin.field0_0x0._s_0.X;
      dVar11 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
      dVar12 = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
      dVar13 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
      dVar14 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dVar15 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
      dVar16 = (param_1->Bounds).SphereRadius;
      fVar23 = param_1->TexelFactor;
      uVar24 = param_1->PackedRelativeBox;
      uVar17 = *(undefined8 *)&param_1->field_0x48;
      (param_1->RenderAsset).field0_0x0 = (pFVar29->RenderAsset).field0_0x0;
      (param_1->Bounds).Origin.field0_0x0._s_0.X = dVar8;
      dVar8 = (pFVar29->Bounds).Origin.field0_0x0._s_0.Z;
      (param_1->Bounds).Origin.field0_0x0._s_0.Y = (pFVar29->Bounds).Origin.field0_0x0._s_0.Y;
      (param_1->Bounds).Origin.field0_0x0._s_0.Z = dVar8;
      dVar8 = (pFVar29->Bounds).BoxExtent.field0_0x0._s_0.Y;
      (param_1->Bounds).BoxExtent.field0_0x0._s_0.X = (pFVar29->Bounds).BoxExtent.field0_0x0._s_0.X;
      (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar8;
      dVar8 = (pFVar29->Bounds).SphereRadius;
      (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z = (pFVar29->Bounds).BoxExtent.field0_0x0._s_0.Z;
      (param_1->Bounds).SphereRadius = dVar8;
      uVar22 = pFVar29->PackedRelativeBox;
      uVar18 = *(undefined8 *)&pFVar29->field_0x48;
      param_1->TexelFactor = pFVar29->TexelFactor;
      param_1->PackedRelativeBox = uVar22;
      *(undefined8 *)&param_1->field_0x48 = uVar18;
      (pFVar29->RenderAsset).field0_0x0 = TVar9;
      (pFVar29->Bounds).Origin.field0_0x0._s_0.X = dVar10;
      (pFVar29->Bounds).Origin.field0_0x0._s_0.Y = dVar11;
      (pFVar29->Bounds).Origin.field0_0x0._s_0.Z = dVar12;
      (pFVar29->Bounds).BoxExtent.field0_0x0._s_0.X = dVar13;
      (pFVar29->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar14;
      (pFVar29->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar15;
      (pFVar29->Bounds).SphereRadius = dVar16;
      pFVar29->TexelFactor = fVar23;
      pFVar29->PackedRelativeBox = uVar24;
      *(undefined8 *)&pFVar29->field_0x48 = uVar17;
      if (1 < iVar28) {
        do {
          iVar7 = iVar30 * 2;
          iVar27 = iVar7 + 1;
          if (iVar7 + 2 < iVar28) {
            lVar1 = (longlong)iVar7 + 2;
            lVar26 = (longlong)iVar7 + 1;
            pUVar4 = param_1[lVar26].RenderAsset.field0_0x0.DebugPtr;
            pUVar5 = param_1[lVar1].RenderAsset.field0_0x0.DebugPtr;
            bVar25 = pUVar5 < pUVar4;
            if (pUVar5 == pUVar4) {
              bVar25 = param_1[lVar26].TexelFactor < param_1[lVar1].TexelFactor;
            }
            if (bVar25) {
              iVar27 = iVar7;
            }
            iVar27 = iVar27 + 1;
          }
          pUVar4 = param_1[iVar27].RenderAsset.field0_0x0.DebugPtr;
          pUVar5 = param_1[iVar30].RenderAsset.field0_0x0.DebugPtr;
          bVar25 = pUVar5 < pUVar4;
          if (pUVar5 == pUVar4) {
            bVar25 = param_1[iVar27].TexelFactor < param_1[iVar30].TexelFactor;
          }
          if (!bVar25) break;
          dVar8 = param_1[iVar27].Bounds.Origin.field0_0x0._s_0.X;
          TVar9 = param_1[iVar30].RenderAsset.field0_0x0;
          dVar10 = param_1[iVar30].Bounds.Origin.field0_0x0._s_0.X;
          pdVar2 = &param_1[iVar30].Bounds.Origin.field0_0x0._s_0.Y;
          dVar11 = *pdVar2;
          dVar12 = pdVar2[1];
          dVar13 = param_1[iVar30].Bounds.BoxExtent.field0_0x0._s_0.X;
          dVar14 = param_1[iVar30].Bounds.BoxExtent.field0_0x0._s_0.Y;
          pdVar2 = &param_1[iVar30].Bounds.BoxExtent.field0_0x0._s_0.Z;
          dVar15 = *pdVar2;
          uVar17 = pdVar2[1];
          pFVar20 = param_1 + iVar30;
          fVar23 = pFVar20->TexelFactor;
          uVar24 = pFVar20->PackedRelativeBox;
          uVar18 = *(undefined8 *)(&pFVar20->TexelFactor + 2);
          param_1[iVar30].RenderAsset.field0_0x0 = param_1[iVar27].RenderAsset.field0_0x0;
          param_1[iVar30].Bounds.Origin.field0_0x0._s_0.X = dVar8;
          pdVar2 = &param_1[iVar27].Bounds.Origin.field0_0x0._s_0.Y;
          dVar8 = pdVar2[1];
          pdVar3 = &param_1[iVar30].Bounds.Origin.field0_0x0._s_0.Y;
          *pdVar3 = *pdVar2;
          pdVar3[1] = dVar8;
          dVar8 = param_1[iVar27].Bounds.BoxExtent.field0_0x0._s_0.Y;
          param_1[iVar30].Bounds.BoxExtent.field0_0x0._s_0.X =
               param_1[iVar27].Bounds.BoxExtent.field0_0x0._s_0.X;
          param_1[iVar30].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar8;
          pdVar2 = &param_1[iVar27].Bounds.BoxExtent.field0_0x0._s_0.Z;
          uVar19 = pdVar2[1];
          pdVar3 = &param_1[iVar30].Bounds.BoxExtent.field0_0x0._s_0.Z;
          *pdVar3 = *pdVar2;
          pdVar3[1] = (double)uVar19;
          pFVar20 = param_1 + iVar27;
          uVar22 = pFVar20->PackedRelativeBox;
          uVar19 = *(undefined8 *)(&pFVar20->TexelFactor + 2);
          pFVar21 = param_1 + iVar30;
          pFVar21->TexelFactor = pFVar20->TexelFactor;
          pFVar21->PackedRelativeBox = uVar22;
          *(undefined8 *)(&pFVar21->TexelFactor + 2) = uVar19;
          param_1[iVar27].RenderAsset.field0_0x0 = TVar9;
          param_1[iVar27].Bounds.Origin.field0_0x0._s_0.X = dVar10;
          pdVar2 = &param_1[iVar27].Bounds.Origin.field0_0x0._s_0.Y;
          *pdVar2 = dVar11;
          pdVar2[1] = dVar12;
          param_1[iVar27].Bounds.BoxExtent.field0_0x0._s_0.X = dVar13;
          param_1[iVar27].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar14;
          pdVar2 = &param_1[iVar27].Bounds.BoxExtent.field0_0x0._s_0.Z;
          *pdVar2 = dVar15;
          pdVar2[1] = (double)uVar17;
          pFVar20 = param_1 + iVar27;
          pFVar20->TexelFactor = fVar23;
          pFVar20->PackedRelativeBox = uVar24;
          *(undefined8 *)(&pFVar20->TexelFactor + 2) = uVar18;
          iVar30 = iVar27;
        } while (iVar27 * 2 + 1 < iVar28);
      }
      iVar28 = iVar28 + -1;
      lVar31 = lVar31 + -1;
      pFVar29 = pFVar29 + -1;
    } while (0 < lVar31);
  }
  return;
}

// HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_> @ 148771150

void __cdecl
AlgoImpl::
HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>
          param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FCompareRenderAssetByLoadOrderPriority *pFVar5;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar16 = iVar11 * 2 + 1;
  iVar9 = iVar16;
  iVar12 = iVar11;
  do {
    while (param_2 <= iVar16) {
LAB_148771416:
      if (iVar12 == 0) {
        return;
      }
      iVar11 = iVar12 + -1;
      iVar16 = iVar9 + -2;
      iVar9 = iVar16;
      iVar12 = iVar11;
    }
    iVar16 = iVar11 * 2;
    iVar14 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      pFVar5 = (param_4.Predicate)->Predicate;
      pTVar6 = pFVar5->StreamingRenderAssets;
      uVar2 = param_1[iVar14];
      uVar3 = param_1[(longlong)iVar16 + 2];
      uVar13 = 0;
      if ((int)uVar3 < pTVar6->ArrayNum) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar7 = pFVar5->StreamingRenderAssets;
      iVar4 = *(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x7c);
      uVar13 = 0;
      if ((int)uVar2 < pTVar7->ArrayNum) {
        uVar13 = ~uVar2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar1 = *(int *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar2 * 0xb8 + 0x7c);
      if (iVar1 < iVar4) {
        bVar10 = true;
      }
      else if (iVar4 == iVar1) {
        bVar10 = (int)uVar2 < (int)uVar3;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        iVar14 = iVar16;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar5 = (param_4.Predicate)->Predicate;
    pTVar6 = pFVar5->StreamingRenderAssets;
    puVar17 = (uint *)(param_1 + iVar14);
    uVar2 = *puVar17;
    puVar15 = (uint *)(param_1 + iVar11);
    uVar3 = *puVar15;
    uVar13 = 0;
    if ((int)uVar3 < pTVar6->ArrayNum) {
      uVar13 = ~uVar3 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar7 = pFVar5->StreamingRenderAssets;
    iVar16 = *(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x7c);
    uVar13 = 0;
    if ((int)uVar2 < pTVar7->ArrayNum) {
      uVar13 = ~uVar2 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = *(int *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar2 * 0xb8 + 0x7c);
    if ((iVar16 <= iVar11) && ((iVar16 != iVar11 || ((int)uVar3 <= (int)uVar2))))
    goto LAB_148771416;
    uVar2 = *puVar15;
    iVar16 = iVar14 * 2 + 1;
    *puVar15 = *puVar17;
    *puVar17 = uVar2;
    iVar11 = iVar14;
  } while( true );
}

// HeapifyInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,`FSimpleStreamableAssetManager::RegisterRecord'::__l18::<lambda_1>_>_>_> @ 148771450

void __cdecl
AlgoImpl::
HeapifyInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FSimpleStreamableAssetManager::RegisterRecord_::__l18::<lambda_1>_>_>_>
          (FStreamingRenderAssetPrimitiveInfo *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_private:_void___cdecl_FSimpleStreamableAssetManager::RegisterRecord(FSimpleStreamableAssetManager::FRegister_&)_::_18_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  UStreamableRenderAsset *pUVar4;
  UStreamableRenderAsset *pUVar5;
  code *pcVar6;
  int iVar7;
  double dVar8;
  TObjectPtr<UStreamableRenderAsset>_u_0 TVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  FStreamingRenderAssetPrimitiveInfo *pFVar19;
  FStreamingRenderAssetPrimitiveInfo *pFVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  
  if (param_2 < 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar25 = (param_2 + -2) / 2;
  iVar26 = iVar25 * 2 + 1;
  iVar7 = iVar26;
  iVar29 = iVar25;
  do {
    while (param_2 <= iVar26) {
LAB_1487715b4:
      if (iVar29 == 0) {
        return;
      }
      iVar25 = iVar29 + -1;
      iVar26 = iVar7 + -2;
      iVar7 = iVar26;
      iVar29 = iVar25;
    }
    iVar26 = iVar25 * 2;
    iVar28 = iVar26 + 1;
    if (iVar26 + 2 < param_2) {
      lVar1 = (longlong)iVar26 + 2;
      lVar27 = (longlong)iVar26 + 1;
      pUVar4 = param_1[lVar27].RenderAsset.field0_0x0.DebugPtr;
      pUVar5 = param_1[lVar1].RenderAsset.field0_0x0.DebugPtr;
      bVar24 = pUVar5 < pUVar4;
      if (pUVar5 == pUVar4) {
        bVar24 = param_1[lVar27].TexelFactor < param_1[lVar1].TexelFactor;
      }
      if (bVar24) {
        iVar28 = iVar26;
      }
      iVar28 = iVar28 + 1;
    }
    pUVar4 = param_1[iVar28].RenderAsset.field0_0x0.DebugPtr;
    pUVar5 = param_1[iVar25].RenderAsset.field0_0x0.DebugPtr;
    bVar24 = pUVar5 < pUVar4;
    if (pUVar5 == pUVar4) {
      bVar24 = param_1[iVar28].TexelFactor < param_1[iVar25].TexelFactor;
    }
    if (!bVar24) goto LAB_1487715b4;
    dVar8 = param_1[iVar28].Bounds.Origin.field0_0x0._s_0.X;
    iVar26 = iVar28 * 2 + 1;
    TVar9 = param_1[iVar25].RenderAsset.field0_0x0;
    dVar10 = param_1[iVar25].Bounds.Origin.field0_0x0._s_0.X;
    pdVar2 = &param_1[iVar25].Bounds.Origin.field0_0x0._s_0.Y;
    dVar11 = *pdVar2;
    dVar12 = pdVar2[1];
    dVar13 = param_1[iVar25].Bounds.BoxExtent.field0_0x0._s_0.X;
    dVar14 = param_1[iVar25].Bounds.BoxExtent.field0_0x0._s_0.Y;
    pdVar2 = &param_1[iVar25].Bounds.BoxExtent.field0_0x0._s_0.Z;
    dVar15 = *pdVar2;
    uVar16 = pdVar2[1];
    pFVar19 = param_1 + iVar25;
    fVar22 = pFVar19->TexelFactor;
    uVar23 = pFVar19->PackedRelativeBox;
    uVar17 = *(undefined8 *)(&pFVar19->TexelFactor + 2);
    param_1[iVar25].RenderAsset.field0_0x0 = param_1[iVar28].RenderAsset.field0_0x0;
    param_1[iVar25].Bounds.Origin.field0_0x0._s_0.X = dVar8;
    pdVar2 = &param_1[iVar28].Bounds.Origin.field0_0x0._s_0.Y;
    dVar8 = pdVar2[1];
    pdVar3 = &param_1[iVar25].Bounds.Origin.field0_0x0._s_0.Y;
    *pdVar3 = *pdVar2;
    pdVar3[1] = dVar8;
    dVar8 = param_1[iVar28].Bounds.BoxExtent.field0_0x0._s_0.Y;
    param_1[iVar25].Bounds.BoxExtent.field0_0x0._s_0.X =
         param_1[iVar28].Bounds.BoxExtent.field0_0x0._s_0.X;
    param_1[iVar25].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar8;
    pdVar2 = &param_1[iVar28].Bounds.BoxExtent.field0_0x0._s_0.Z;
    uVar18 = pdVar2[1];
    pdVar3 = &param_1[iVar25].Bounds.BoxExtent.field0_0x0._s_0.Z;
    *pdVar3 = *pdVar2;
    pdVar3[1] = (double)uVar18;
    pFVar19 = param_1 + iVar28;
    uVar21 = pFVar19->PackedRelativeBox;
    uVar18 = *(undefined8 *)(&pFVar19->TexelFactor + 2);
    pFVar20 = param_1 + iVar25;
    pFVar20->TexelFactor = pFVar19->TexelFactor;
    pFVar20->PackedRelativeBox = uVar21;
    *(undefined8 *)(&pFVar20->TexelFactor + 2) = uVar18;
    param_1[iVar28].RenderAsset.field0_0x0 = TVar9;
    param_1[iVar28].Bounds.Origin.field0_0x0._s_0.X = dVar10;
    pdVar2 = &param_1[iVar28].Bounds.Origin.field0_0x0._s_0.Y;
    *pdVar2 = dVar11;
    pdVar2[1] = dVar12;
    param_1[iVar28].Bounds.BoxExtent.field0_0x0._s_0.X = dVar13;
    param_1[iVar28].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar14;
    pdVar2 = &param_1[iVar28].Bounds.BoxExtent.field0_0x0._s_0.Z;
    *pdVar2 = dVar15;
    pdVar2[1] = (double)uVar16;
    pFVar19 = param_1 + iVar28;
    pFVar19->TexelFactor = fVar22;
    pFVar19->PackedRelativeBox = uVar23;
    *(undefined8 *)(&pFVar19->TexelFactor + 2) = uVar17;
    iVar25 = iVar28;
  } while( true );
}

// InternalConstructor<AServerStreamingLevelsVisibility> @ 1487715f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AServerStreamingLevelsVisibility>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AServerStreamingLevelsVisibility__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    this->bReplicates = '\0';
  }
  return;
}

// InternalConstructor<AStaticMeshActor> @ 148771670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AStaticMeshActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  byte bVar6;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AStaticMeshActor__6B_;
    this[1]._padding_ = 0;
    AActor::SetCanBeDamaged(this,false);
    FVar2 = AStaticMeshActor::StaticMeshComponentName;
    pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    bVar6 = 0;
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    (**(code **)(*(longlong *)pUVar4 + 0x788))(pUVar4,UCollisionProfile::BlockAll_ProfileName,1);
    *(undefined1 *)(this[1]._padding_ + 0x1ab) = 0;
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this[1]._padding_,false);
    pbVar1 = (byte *)(this[1]._padding_ + 0x5ae);
    *pbVar1 = *pbVar1 | 0x40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    pUVar3 = (UClass *)this->_padding_;
    pUVar5 = AStaticMeshActor::GetPrivateStaticClass();
    this->bCanBeInCluster = '\0';
    if (pUVar3 == pUVar5) {
      bVar6 = 0x10;
    }
    this->field_0x5b = this->field_0x5b | bVar6;
  }
  return;
}

// InternalConstructor<UActorTextureStreamingBuildDataComponent> @ 1487717a0

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
InternalConstructor<UActorTextureStreamingBuildDataComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UActorTextureStreamingBuildDataComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &UActorTextureStreamingBuildDataComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UActorTextureStreamingBuildDataComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  }
  return;
}

// InternalConstructor<UStaticMeshDescriptionBulkData> @ 1487717f0

void __cdecl InternalConstructor<UStaticMeshDescriptionBulkData>(FObjectInitializer *param_1)

{
  UMeshDescriptionBaseBulkData *this;
  
  this = (UMeshDescriptionBaseBulkData *)param_1->Obj;
  if (this != (UMeshDescriptionBaseBulkData *)0x0) {
    UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData(this);
    *(undefined ***)this = &___7UStaticMeshDescriptionBulkData__6B_;
  }
  return;
}

// InternalConstructor<UStreamableRenderAsset> @ 148771820

void __cdecl InternalConstructor<UStreamableRenderAsset>(FObjectInitializer *param_1)

{
  if ((UStreamableRenderAsset *)param_1->Obj != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<AServerStreamingLevelsVisibility> @ 148771840

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
InternalVTableHelperCtorCaller<AServerStreamingLevelsVisibility>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AServerStreamingLevelsVisibility::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AServerStreamingLevelsVisibility__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AStaticMeshActor> @ 148771930

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

UObject * __cdecl InternalVTableHelperCtorCaller<AStaticMeshActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AStaticMeshActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AStaticMeshActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorTextureStreamingBuildDataComponent> @ 1487719f0

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
InternalVTableHelperCtorCaller<UActorTextureStreamingBuildDataComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorTextureStreamingBuildDataComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UActorTextureStreamingBuildDataComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)
         &UActorTextureStreamingBuildDataComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)
         &UActorTextureStreamingBuildDataComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStaticMeshDescriptionBulkData> @ 148771ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UStaticMeshDescriptionBulkData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStaticMeshDescriptionBulkData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData
              ((UMeshDescriptionBaseBulkData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStaticMeshDescriptionBulkData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStreamableRenderAsset> @ 148771b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamableRenderAsset>(FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UStreamableRenderAsset::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  UObject::UObject(pUVar3,param_1);
  *(undefined ***)pUVar3 = &___7UStreamableRenderAsset__6B_;
  *(undefined8 *)(pUVar3 + 1) = 0;
  *(undefined8 *)&pUVar3[1].field_0x8 = 0;
  *(undefined8 *)&pUVar3[1].field_0x10 = 0;
  *(undefined8 *)(pUVar3 + 2) = 0;
  *(undefined8 *)&pUVar3[2].field_0x8 = 0;
  *(undefined8 *)&pUVar3[2].field_0x18 = 0;
  *(undefined8 *)&pUVar3[2].field_0x20 = 0;
  *(undefined8 *)&pUVar3[3].field_0x10 = 0;
  *(undefined4 *)&pUVar3[3].field_0x18 = 0;
  *(undefined4 *)&pUVar3[3].field_0x1c = 0x80;
  *(undefined4 *)&pUVar3[3].field_0x20 = 0xffffffff;
  *(undefined4 *)&pUVar3[3].field_0x24 = 0;
  *(undefined8 *)&pUVar3[4].field_0x8 = 0;
  *(undefined4 *)&pUVar3[4].field_0x10 = 0;
  *(undefined4 *)&pUVar3[2].field_0x10 = 0;
  *(undefined4 *)&pUVar3[4].field_0x18 = 0xffffffff;
  pTVar5 = operator_new(0x18);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)&pUVar3[4].field_0x20 = 0x10;
    *(undefined8 *)(pUVar3 + 5) = 0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar5[1]._padding_ = 0xffffffff;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UObject *)(*pcVar1)();
        return pUVar3;
      }
    }
    *(TReferenceControllerBase<1> **)&pUVar3[4].field_0x20 = pTVar5 + 1;
    *(TReferenceControllerBase<1> **)(pUVar3 + 5) = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(undefined8 *)&pUVar3[5].field_0x10 = 0;
  return pUVar3;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_> @ 148771d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority> param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  float fVar16;
  undefined1 auStackY_3d8 [32];
  FIdentityFunctor local_3a0 [8];
  int **local_398;
  uint *local_390;
  int local_388;
  uint *local_380;
  uint *local_378;
  TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority> local_370;
  TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_> local_368 [3];
  int *local_350;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    local_398 = &local_348;
    do {
      local_380 = (uint *)local_398[1];
      local_390 = (uint *)*local_398;
      local_350 = local_398[2];
      iVar13 = (int)((longlong)local_380 - (longlong)local_390 >> 2) + 1;
      local_388 = (int)local_350;
      if ((int)local_350 != 0) {
LAB_148771e10:
        puVar1 = local_390;
        if (8 < iVar13) {
          if (iVar13 < 0) {
            iVar13 = iVar13 + 1;
          }
          uVar3 = local_390[iVar13 >> 1];
          local_390[iVar13 >> 1] = *local_390;
          *local_390 = uVar3;
          puVar10 = local_390;
          local_378 = local_380 + 1;
          puVar14 = local_380;
LAB_148771e50:
          puVar10 = puVar10 + 1;
          puVar11 = local_378;
          if (puVar10 <= puVar14) goto code_r0x000148771e5d;
          goto LAB_148771f30;
        }
        if (local_390 < local_380) {
          puVar1 = local_390 + 1;
          puVar14 = local_390;
          do {
            puVar11 = puVar1;
            puVar15 = puVar14;
            puVar10 = puVar14;
            if (puVar1 <= local_380) {
              do {
                uVar3 = *puVar15;
                pTVar5 = (param_4.Predicate)->StreamingRenderAssets;
                uVar4 = *puVar11;
                uVar9 = 0;
                if ((int)uVar3 < pTVar5->ArrayNum) {
                  uVar9 = ~uVar3 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pTVar6 = (param_4.Predicate)->StreamingRenderAssets;
                iVar13 = *(int *)((pTVar5->AllocatorInstance).Data +
                                 (longlong)(int)uVar3 * 0xb8 + 0x7c);
                uVar9 = 0;
                if ((int)uVar4 < pTVar6->ArrayNum) {
                  uVar9 = ~uVar4 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar2 = *(int *)((pTVar6->AllocatorInstance).Data +
                                (longlong)(int)uVar4 * 0xb8 + 0x7c);
                if (iVar2 < iVar13) {
                  bVar8 = true;
                }
                else if (iVar13 == iVar2) {
                  bVar8 = (int)uVar4 < (int)uVar3;
                }
                else {
                  bVar8 = false;
                }
                puVar10 = puVar11;
                if (!bVar8) {
                  puVar10 = puVar15;
                }
                puVar11 = puVar11 + 1;
                puVar14 = local_390;
                puVar15 = puVar10;
              } while (puVar11 <= local_380);
            }
            uVar3 = *puVar10;
            puVar11 = local_380 + -1;
            *puVar10 = *local_380;
            *local_380 = uVar3;
            local_380 = puVar11;
          } while (puVar14 < puVar11);
        }
        goto LAB_1487722d9;
      }
LAB_1487720e7:
      puVar1 = local_390;
      local_3a0[0] = param_3;
      local_370.Predicate = param_4.Predicate;
      if (iVar13 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
LAB_148772268:
        local_368[0].Predicate = &local_370;
        HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_>
                  ((int *)puVar1,iVar13,param_3,&local_370);
        iVar13 = iVar13 + -1;
        if (0 < iVar13) {
          lVar12 = (longlong)iVar13 * 4;
          do {
            uVar3 = *puVar1;
            *puVar1 = *(uint *)(lVar12 + (longlong)puVar1);
            *(uint *)(lVar12 + (longlong)puVar1) = uVar3;
            HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>_>
                      ((int *)puVar1,0,iVar13,local_3a0,local_368);
            iVar13 = iVar13 + -1;
            lVar12 = lVar12 + -4;
          } while (0 < iVar13);
        }
      }
      else if (iVar13 != 0) goto LAB_148772268;
LAB_1487722d9:
      local_398 = local_398 + -3;
    } while (&local_348 <= local_398);
  }
  return;
code_r0x000148771e5d:
  uVar3 = *puVar1;
  pTVar5 = (param_4.Predicate)->StreamingRenderAssets;
  uVar4 = *puVar10;
  uVar9 = 0;
  if ((int)uVar3 < pTVar5->ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar6 = (param_4.Predicate)->StreamingRenderAssets;
  iVar13 = *(int *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x7c);
  uVar9 = 0;
  if ((int)uVar4 < pTVar6->ArrayNum) {
    uVar9 = ~uVar4 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar2 = *(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xb8 + 0x7c);
  puVar11 = local_378;
  if ((iVar13 <= iVar2) && ((iVar13 != iVar2 || ((int)uVar3 <= (int)uVar4)))) goto LAB_148771e50;
LAB_148771f30:
  while (puVar14 = puVar11, puVar11 = puVar14 + -1, puVar1 < puVar11) {
    uVar3 = *puVar11;
    pTVar5 = (param_4.Predicate)->StreamingRenderAssets;
    uVar4 = *puVar1;
    uVar9 = 0;
    if ((int)uVar3 < pTVar5->ArrayNum) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar6 = (param_4.Predicate)->StreamingRenderAssets;
    iVar13 = *(int *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x7c);
    uVar9 = 0;
    if ((int)uVar4 < pTVar6->ArrayNum) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar2 = *(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xb8 + 0x7c);
    if ((iVar2 < iVar13) || ((iVar13 == iVar2 && ((int)uVar4 < (int)uVar3)))) break;
  }
  local_378 = puVar11;
  if (puVar10 <= puVar11) {
    uVar3 = *puVar10;
    *puVar10 = *puVar11;
    *puVar11 = uVar3;
    puVar14 = local_380;
    goto LAB_148771e50;
  }
  uVar3 = *puVar1;
  local_388 = local_388 + -1;
  *puVar1 = *puVar11;
  *puVar11 = uVar3;
  if ((longlong)((longlong)puVar11 + (-4 - (longlong)puVar1) & 0xfffffffffffffffcU) <
      (longlong)((longlong)local_380 - (longlong)puVar10 & 0xfffffffffffffffcU)) {
    if (puVar10 < local_380) {
      *local_398 = (int *)puVar10;
      local_398[1] = (int *)local_380;
      *(int *)(local_398 + 2) = local_388;
      local_398 = local_398 + 3;
    }
    if (puVar11 <= local_390 + 1) goto LAB_1487722d9;
    local_380 = puVar14 + -2;
  }
  else {
    if (local_390 + 1 < puVar11) {
      *local_398 = (int *)local_390;
      local_398[1] = (int *)(puVar14 + -2);
      *(int *)(local_398 + 2) = local_388;
      local_398 = local_398 + 3;
    }
    local_390 = puVar10;
    if (local_380 <= puVar10) goto LAB_1487722d9;
  }
  iVar13 = (int)((longlong)local_380 - (longlong)local_390 >> 2) + 1;
  if (local_388 == 0) goto LAB_1487720e7;
  goto LAB_148771e10;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_> @ 148772350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority> param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  int **ppiVar15;
  float fVar16;
  undefined1 auStackY_408 [32];
  FIdentityFunctor local_3d8 [8];
  FIdentityFunctor local_3d0;
  FIdentityFunctor local_3c8 [8];
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_3c0;
  uint local_3b8;
  int **local_3b0;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_3a8;
  uint local_3a0;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_398;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_390;
  TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority> local_388;
  TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_> local_380;
  TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_> local_378 [3];
  int *local_360;
  int *local_358;
  int *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_3d0 = param_3;
    local_358 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar16;
    memset(local_340,0,0x2e8);
    local_3b0 = &local_358;
    do {
      local_398 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)local_3b0[1];
      pTVar13 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)*local_3b0;
      local_360 = local_3b0[2];
      iVar10 = (int)((longlong)local_398 - (longlong)pTVar13 >> 2) + 1;
      local_3a0 = (uint)local_360;
      local_3c0 = pTVar13;
      if ((uint)local_360 != 0) {
        do {
          if (iVar10 < 9) {
            ppiVar15 = local_3b0;
            if (pTVar13 < local_398) {
              pTVar11 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(pTVar13->AllocatorInstance).Data + 4);
              do {
                pTVar9 = pTVar13;
                pTVar12 = pTVar11;
                pTVar13 = pTVar9;
                if (pTVar11 <= local_398) {
                  do {
                    uVar2 = *(uint *)&(pTVar9->AllocatorInstance).Data;
                    pTVar13 = (param_4.Predicate)->StreamingRenderAssets;
                    uVar3 = *(uint *)&(pTVar12->AllocatorInstance).Data;
                    uVar7 = 0;
                    if ((int)uVar2 < pTVar13->ArrayNum) {
                      uVar7 = ~uVar2 >> 0x1f;
                    }
                    local_390 = pTVar9;
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    local_3b8 = *(uint *)((pTVar13->AllocatorInstance).Data +
                                         (longlong)(int)uVar2 * 0xb8 + 0x74);
                    local_3a8 = (param_4.Predicate)->StreamingRenderAssets;
                    local_3a0 = ~uVar3 >> 0x1f;
                    uVar7 = 0;
                    if ((int)uVar3 < local_3a8->ArrayNum) {
                      uVar7 = local_3a0;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar7 = *(uint *)((local_3a8->AllocatorInstance).Data +
                                     (longlong)(int)uVar3 * 0xb8 + 0x74);
                    if ((int)uVar7 < (int)local_3b8) {
                      bVar6 = true;
                    }
                    else if (local_3b8 == uVar7) {
                      local_3a8 = (param_4.Predicate)->StreamingRenderAssets;
                      uVar7 = 0;
                      if ((int)uVar2 < local_3a8->ArrayNum) {
                        uVar7 = ~uVar2 >> 0x1f;
                      }
                      if ((uVar7 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pTVar13 = (param_4.Predicate)->StreamingRenderAssets;
                      fVar16 = *(float *)((local_3a8->AllocatorInstance).Data +
                                         (longlong)(int)uVar2 * 0xb8 + 0x78);
                      uVar7 = 0;
                      if ((int)uVar3 < pTVar13->ArrayNum) {
                        uVar7 = local_3a0;
                      }
                      if ((uVar7 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      fVar1 = *(float *)((pTVar13->AllocatorInstance).Data +
                                        (longlong)(int)uVar3 * 0xb8 + 0x78);
                      if (fVar16 <= fVar1) {
                        if (fVar16 != fVar1) goto LAB_148772b20;
                        bVar6 = (int)uVar3 < (int)uVar2;
                      }
                      else {
                        bVar6 = true;
                      }
                    }
                    else {
LAB_148772b20:
                      bVar6 = false;
                    }
                    pTVar9 = pTVar12;
                    if (!bVar6) {
                      pTVar9 = local_390;
                    }
                    pTVar12 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                              ((longlong)&(pTVar12->AllocatorInstance).Data + 4);
                    pTVar13 = local_3c0;
                  } while (pTVar12 <= local_398);
                }
                iVar10 = *(int *)&(pTVar9->AllocatorInstance).Data;
                pTVar12 = local_398 + -1;
                *(int *)&(pTVar9->AllocatorInstance).Data =
                     *(int *)&(local_398->AllocatorInstance).Data;
                *(int *)&(local_398->AllocatorInstance).Data = iVar10;
                ppiVar15 = local_3b0;
                param_3 = local_3d0;
                local_398 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                            &pTVar12->ArrayMax;
                local_390 = pTVar9;
              } while (pTVar13 < &pTVar12->ArrayMax);
            }
            goto LAB_148772b75;
          }
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
          }
          iVar8 = *(int *)((longlong)&(pTVar13->AllocatorInstance).Data +
                          (longlong)(iVar10 >> 1) * 4);
          *(int *)((longlong)&(pTVar13->AllocatorInstance).Data + (longlong)(iVar10 >> 1) * 4) =
               *(int *)&(pTVar13->AllocatorInstance).Data;
          *(int *)&(pTVar13->AllocatorInstance).Data = iVar8;
          pTVar11 = pTVar13;
          local_3a8 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(local_398->AllocatorInstance).Data + 4);
          local_390 = pTVar13;
LAB_148772470:
          do {
            do {
              pTVar11 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(pTVar11->AllocatorInstance).Data + 4);
              pTVar9 = local_3a8;
              if (local_398 < pTVar11) goto LAB_148772640;
              uVar2 = *(uint *)&(pTVar13->AllocatorInstance).Data;
              pTVar13 = (param_4.Predicate)->StreamingRenderAssets;
              uVar3 = *(uint *)&(pTVar11->AllocatorInstance).Data;
              uVar7 = 0;
              if ((int)uVar2 < pTVar13->ArrayNum) {
                uVar7 = ~uVar2 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_3b8 = ~uVar3 >> 0x1f;
              iVar10 = *(int *)((pTVar13->AllocatorInstance).Data +
                               (longlong)(int)uVar2 * 0xb8 + 0x74);
              local_390 = (param_4.Predicate)->StreamingRenderAssets;
              uVar7 = 0;
              if ((int)uVar3 < local_390->ArrayNum) {
                uVar7 = local_3b8;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = *(int *)((local_390->AllocatorInstance).Data +
                              (longlong)(int)uVar3 * 0xb8 + 0x74);
              pTVar9 = local_3a8;
              pTVar13 = local_3c0;
              if (iVar8 < iVar10) goto LAB_148772640;
            } while (iVar10 != iVar8);
            pTVar13 = (param_4.Predicate)->StreamingRenderAssets;
            uVar7 = 0;
            if ((int)uVar2 < pTVar13->ArrayNum) {
              uVar7 = ~uVar2 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar9 = (param_4.Predicate)->StreamingRenderAssets;
            fVar16 = *(float *)((pTVar13->AllocatorInstance).Data +
                               (longlong)(int)uVar2 * 0xb8 + 0x78);
            uVar7 = 0;
            if ((int)uVar3 < pTVar9->ArrayNum) {
              uVar7 = local_3b8;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xb8 + 0x78
                              );
            pTVar9 = local_3a8;
            pTVar13 = local_3c0;
          } while ((fVar16 <= fVar1) && ((fVar16 != fVar1 || ((int)uVar2 <= (int)uVar3))));
LAB_148772640:
          while (local_390 = pTVar11, pTVar12 = pTVar9,
                pTVar9 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                         &pTVar12[-1].ArrayMax, pTVar13 < pTVar9) {
            uVar2 = *(uint *)pTVar9;
            pTVar11 = (param_4.Predicate)->StreamingRenderAssets;
            uVar3 = *(uint *)&(pTVar13->AllocatorInstance).Data;
            uVar7 = 0;
            if ((int)uVar2 < pTVar11->ArrayNum) {
              uVar7 = ~uVar2 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_3b8 = ~uVar3 >> 0x1f;
            iVar10 = *(int *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar2 * 0xb8 + 0x74
                             );
            local_3a8 = (param_4.Predicate)->StreamingRenderAssets;
            uVar7 = 0;
            if ((int)uVar3 < local_3a8->ArrayNum) {
              uVar7 = local_3b8;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = *(int *)((local_3a8->AllocatorInstance).Data +
                            (longlong)(int)uVar3 * 0xb8 + 0x74);
            pTVar13 = local_3c0;
            if (iVar8 < iVar10) break;
            pTVar11 = local_390;
            if (iVar10 == iVar8) {
              pTVar13 = (param_4.Predicate)->StreamingRenderAssets;
              uVar7 = 0;
              if ((int)uVar2 < pTVar13->ArrayNum) {
                uVar7 = ~uVar2 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar11 = (param_4.Predicate)->StreamingRenderAssets;
              fVar16 = *(float *)((pTVar13->AllocatorInstance).Data +
                                 (longlong)(int)uVar2 * 0xb8 + 0x78);
              uVar7 = 0;
              if ((int)uVar3 < pTVar11->ArrayNum) {
                uVar7 = local_3b8;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar1 = *(float *)((pTVar11->AllocatorInstance).Data +
                                (longlong)(int)uVar3 * 0xb8 + 0x78);
              pTVar13 = local_3c0;
              if ((fVar1 < fVar16) ||
                 ((pTVar11 = local_390, fVar16 == fVar1 && ((int)uVar3 < (int)uVar2)))) break;
            }
          }
          local_3a8 = pTVar9;
          if (local_390 <= pTVar9) {
            iVar10 = *(int *)&(local_390->AllocatorInstance).Data;
            *(int *)&(local_390->AllocatorInstance).Data = *(int *)pTVar9;
            *(int *)pTVar9 = iVar10;
            pTVar11 = local_390;
            goto LAB_148772470;
          }
          iVar10 = *(int *)&(pTVar13->AllocatorInstance).Data;
          *(int *)&(pTVar13->AllocatorInstance).Data = *(int *)pTVar9;
          local_3a0 = local_3a0 - 1;
          *(int *)pTVar9 = iVar10;
          param_3 = local_3d0;
          if ((longlong)((longlong)pTVar9 + (-4 - (longlong)pTVar13) & 0xfffffffffffffffcU) <
              (longlong)((longlong)local_398 - (longlong)local_390 & 0xfffffffffffffffcU)) {
            if (local_390 < local_398) {
              *local_3b0 = (int *)local_390;
              local_3b0[1] = (int *)local_398;
              *(uint *)(local_3b0 + 2) = local_3a0;
              local_3b0 = local_3b0 + 3;
            }
            ppiVar15 = local_3b0;
            if (pTVar9 <= (int *)((longlong)&(pTVar13->AllocatorInstance).Data + 4U))
            goto LAB_148772b75;
            local_398 = (TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *)
                        &pTVar12[-1].ArrayNum;
          }
          else {
            if ((int *)((longlong)&(pTVar13->AllocatorInstance).Data + 4U) < pTVar9) {
              *local_3b0 = (int *)pTVar13;
              local_3b0[1] = &pTVar12[-1].ArrayNum;
              *(uint *)(local_3b0 + 2) = local_3a0;
              local_3b0 = local_3b0 + 3;
            }
            ppiVar15 = local_3b0;
            if (local_398 <= local_390) goto LAB_148772b75;
            local_3c0 = local_390;
            pTVar13 = local_390;
          }
          iVar10 = (int)((longlong)local_398 - (longlong)pTVar13 >> 2) + 1;
        } while (local_3a0 != 0);
        local_3a0 = 0;
      }
      ppiVar15 = local_3b0;
      local_3c8[0] = param_3;
      local_388.Predicate = param_4.Predicate;
      if (iVar10 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_148772bd7:
        local_378[0].Predicate = &local_388;
        local_380.Predicate = &local_388;
        local_3d8[0] = param_3;
        if ((iVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Num >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                               ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (iVar10 + -2) / 2;
        HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
                  ((int *)pTVar13,iVar8,iVar10,local_3d8,&local_380);
        while (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
                    ((int *)pTVar13,iVar8,iVar10,local_3d8,&local_380);
        }
        iVar10 = iVar10 + -1;
        if (0 < iVar10) {
          lVar14 = (longlong)iVar10 * 4;
          do {
            uVar4 = *(undefined4 *)&(pTVar13->AllocatorInstance).Data;
            *(undefined4 *)&(pTVar13->AllocatorInstance).Data =
                 *(undefined4 *)((longlong)&(pTVar13->AllocatorInstance).Data + lVar14);
            *(undefined4 *)((longlong)&(pTVar13->AllocatorInstance).Data + lVar14) = uVar4;
            HeapSiftDown<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>_>
                      ((int *)pTVar13,0,iVar10,local_3c8,local_378);
            iVar10 = iVar10 + -1;
            lVar14 = lVar14 + -4;
          } while (0 < iVar10);
        }
      }
      else if (iVar10 != 0) goto LAB_148772bd7;
LAB_148772b75:
      local_3b0 = ppiVar15 + -3;
    } while (&local_358 <= local_3b0);
  }
  return;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>_>_> @ 148772cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand_::__l15::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_bool___cdecl_FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand(wchar_t_const_*,FOutputDevice_&,UWorld_*)_::_15_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
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
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148772d90:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_148772dc0:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000148772dc9;
          goto LAB_148772de0;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar9 = piVar8, piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::
                    <lambda_1>::operator()(param_4.Predicate,piVar9,piVar5);
            piVar8 = piVar5;
            if (!bVar2) {
              piVar8 = piVar9;
            }
          }
          iVar6 = *piVar9;
          *piVar9 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_148772ea4;
      }
LAB_148772e93:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand_::__l15::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_148772ea4:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x000148772dc9:
  bVar2 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>::
          operator()(param_4.Predicate,piVar10,piVar5);
  if (!bVar2) goto LAB_148772dc0;
LAB_148772de0:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>::
            operator()(param_4.Predicate,piVar8,piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_148772dc0;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_148772ea4;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_148772ea4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_148772e93;
  goto LAB_148772d90;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>_>_> @ 148772f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async_::__l15::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_void___cdecl_FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async(FRenderAssetStreamingSettings_const_&)_::_15_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
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
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148773030:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_148773060:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000148773069;
          goto LAB_148773080;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>::
                    operator()(param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_148773144;
      }
LAB_148773133:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async_::__l15::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_148773144:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x000148773069:
  bVar2 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_148773060;
LAB_148773080:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_148773060;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_148773144;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_148773144;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_148773133;
  goto LAB_148773030;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_> @ 148773200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppTVar12 = &local_348;
    do {
      pTVar9 = ppTVar12[1];
      pTVar16 = *ppTVar12;
      local_358 = ppTVar12[2];
      iVar6 = (int)((longlong)pTVar9 - (longlong)pTVar16 >> 5) + 1;
      pTVar15 = pTVar16;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1487732c0:
        if (8 < iVar6) {
          uVar1 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
          pTVar13 = pTVar9 + 1;
          pTVar16 = pTVar15 + iVar6 / 2;
          TVar2 = pTVar16->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
          pTVar16->_s_1 = pTVar15->_s_1;
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar1;
          pTVar15->_s_1 = TVar2;
          *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar5;
          pTVar16 = pTVar15;
LAB_148773300:
          pTVar10 = pTVar16;
          pTVar16 = pTVar10 + 1;
          if (pTVar16 <= pTVar9) goto code_r0x000148773309;
          goto LAB_148773340;
        }
        for (; pTVar13 = pTVar15, pTVar16 = pTVar15, pTVar15 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar10 = pTVar13, pTVar16 = pTVar16 + 1, pTVar16 <= pTVar9) {
            if (*(int *)((pTVar16->ElementData).Pad + 8) == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)&pTVar16->_s_1;
            }
            if (*(int *)((pTVar10->ElementData).Pad + 8) == 0) {
              pwVar7 = L"";
            }
            else {
              pwVar7 = *(wchar_t **)&pTVar10->_s_1;
            }
            iVar11 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
            pTVar13 = pTVar16;
            if (-1 < iVar11) {
              pTVar13 = pTVar10;
            }
          }
          TVar2 = pTVar10->_s_1;
          uVar1 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x18);
          uVar5 = *(undefined8 *)((pTVar9->ElementData).Pad + 8);
          pTVar10->_s_1 = pTVar9->_s_1;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar9->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar9->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x18) = uVar5;
          pTVar9->_s_1 = TVar2;
          *(undefined8 *)((pTVar9->ElementData).Pad + 8) = uVar1;
          *(undefined8 *)((pTVar9->ElementData).Pad + 0x10) = uVar3;
          *(undefined8 *)((pTVar9->ElementData).Pad + 0x18) = uVar4;
        }
        goto LAB_148773454;
      }
LAB_148773443:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
                (pTVar16,iVar6,param_3,param_4);
LAB_148773454:
      ppTVar12 = ppTVar12 + -3;
    } while (&local_348 <= ppTVar12);
  }
  return;
code_r0x000148773309:
  if (*(int *)((longlong)pTVar10 + 0x28) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)&pTVar16->_s_1;
  }
  if (*(int *)((pTVar15->ElementData).Pad + 8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)&pTVar15->_s_1;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
  if (-1 < iVar6) goto LAB_148773300;
LAB_148773340:
  do {
    pTVar14 = pTVar13;
    pTVar13 = pTVar14 + -1;
    if (pTVar13 <= pTVar15) break;
    if (*(int *)((pTVar15->ElementData).Pad + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)&pTVar15->_s_1;
    }
    if (*(int *)((longlong)pTVar14 + -0x18) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)&pTVar13->_s_1;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
  } while (-1 < iVar6);
  uVar1 = *(undefined8 *)((longlong)pTVar14 + -0x18);
  if (pTVar16 <= pTVar13) {
    TVar2 = pTVar16->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar10 + 0x28);
    uVar4 = *(undefined8 *)((longlong)pTVar10 + 0x30);
    uVar5 = *(undefined8 *)((longlong)pTVar10 + 0x38);
    pTVar16->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((longlong)pTVar10 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar14 + -8);
    *(undefined8 *)((longlong)pTVar10 + 0x30) = *(undefined8 *)((longlong)pTVar14 + -0x10);
    *(undefined8 *)((longlong)pTVar10 + 0x38) = uVar1;
    pTVar13->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar14 + -0x18) = uVar3;
    *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar4;
    *(undefined8 *)((longlong)pTVar14 + -8) = uVar5;
    goto LAB_148773300;
  }
  TVar2 = pTVar15->_s_1;
  uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
  uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
  uVar5 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
  pTVar15->_s_1 = pTVar13->_s_1;
  *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar1;
  iVar11 = iVar11 + -1;
  uVar1 = *(undefined8 *)((longlong)pTVar14 + -8);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar14 + -0x10);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar1;
  pTVar13->_s_1 = TVar2;
  *(undefined8 *)((longlong)pTVar14 + -0x18) = uVar3;
  *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar4;
  *(undefined8 *)((longlong)pTVar14 + -8) = uVar5;
  if ((longlong)((longlong)pTVar13 + (-0x20 - (longlong)pTVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar16 & 0xffffffffffffffe0U)) {
    if (pTVar16 < pTVar9) {
      *ppTVar12 = pTVar16;
      ppTVar12[1] = pTVar9;
      *(int *)(ppTVar12 + 2) = iVar11;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar13 <= pTVar15 + 1) goto LAB_148773454;
    pTVar9 = pTVar14 + -2;
    pTVar16 = pTVar15;
  }
  else {
    if (pTVar15 + 1 < pTVar13) {
      *ppTVar12 = pTVar15;
      ppTVar12[1] = pTVar14 + -2;
      *(int *)(ppTVar12 + 2) = iVar11;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar9 <= pTVar16) goto LAB_148773454;
  }
  iVar6 = (int)((longlong)pTVar9 - (longlong)pTVar16 >> 5) + 1;
  pTVar15 = pTVar16;
  if (iVar11 == 0) goto LAB_148773443;
  goto LAB_1487732c0;
}

// IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,`FSimpleStreamableAssetManager::RegisterRecord'::__l18::<lambda_1>_>_> @ 148773550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FSimpleStreamableAssetManager::RegisterRecord_::__l18::<lambda_1>_>_>
          (FStreamingRenderAssetPrimitiveInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_private:_void___cdecl_FSimpleStreamableAssetManager::RegisterRecord(FSimpleStreamableAssetManager::FRegister_&)_::_18_::<lambda_1>_>
          param_4)

{
  FStreamingRenderAssetPrimitiveInfo *pFVar1;
  UStreamableRenderAsset *pUVar2;
  double dVar3;
  TObjectPtr<UStreamableRenderAsset>_u_0 TVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  TObjectPtr<UStreamableRenderAsset>_u_0 TVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  UStreamableRenderAsset *pUVar17;
  FStreamingRenderAssetPrimitiveInfo *pFVar18;
  int iVar19;
  FStreamingRenderAssetPrimitiveInfo *pFVar20;
  FStreamingRenderAssetPrimitiveInfo *pFVar21;
  FStreamingRenderAssetPrimitiveInfo *pFVar22;
  FStreamingRenderAssetPrimitiveInfo *pFVar23;
  FStreamingRenderAssetPrimitiveInfo *pFVar24;
  FStreamingRenderAssetPrimitiveInfo **ppFVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_388 [48];
  FStreamingRenderAssetPrimitiveInfo *local_358;
  FStreamingRenderAssetPrimitiveInfo *local_348;
  FStreamingRenderAssetPrimitiveInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar27 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar27;
    memset(local_330,0,0x2e8);
    ppFVar25 = &local_348;
    do {
      pFVar21 = ppFVar25[1];
      pFVar18 = *ppFVar25;
      pFVar1 = ppFVar25[2];
      local_358._0_4_ = (int)pFVar1;
      iVar19 = (int)(((longlong)pFVar21 - (longlong)pFVar18) / 0x50) + 1;
      pFVar24 = pFVar18;
      if ((int)local_358 != 0) {
LAB_148773630:
        if (8 < iVar19) {
          dVar3 = (pFVar24->Bounds).Origin.field0_0x0._s_0.X;
          pFVar20 = pFVar21 + 1;
          pFVar18 = pFVar24 + iVar19 / 2;
          TVar4 = (pFVar18->RenderAsset).field0_0x0;
          dVar5 = (pFVar18->Bounds).Origin.field0_0x0._s_0.X;
          dVar6 = (pFVar18->Bounds).Origin.field0_0x0._s_0.Y;
          dVar7 = (pFVar18->Bounds).Origin.field0_0x0._s_0.Z;
          dVar8 = (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.X;
          dVar9 = (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Y;
          dVar10 = (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Z;
          dVar11 = (pFVar18->Bounds).SphereRadius;
          fVar27 = pFVar18->TexelFactor;
          uVar16 = pFVar18->PackedRelativeBox;
          uVar12 = *(undefined8 *)&pFVar18->field_0x48;
          (pFVar18->RenderAsset).field0_0x0 = (pFVar24->RenderAsset).field0_0x0;
          (pFVar18->Bounds).Origin.field0_0x0._s_0.X = dVar3;
          dVar3 = (pFVar24->Bounds).Origin.field0_0x0._s_0.Z;
          (pFVar18->Bounds).Origin.field0_0x0._s_0.Y = (pFVar24->Bounds).Origin.field0_0x0._s_0.Y;
          (pFVar18->Bounds).Origin.field0_0x0._s_0.Z = dVar3;
          dVar3 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Y;
          (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.X =
               (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.X;
          (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar3;
          dVar3 = (pFVar24->Bounds).SphereRadius;
          (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Z =
               (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Z;
          (pFVar18->Bounds).SphereRadius = dVar3;
          uVar14 = pFVar24->PackedRelativeBox;
          uVar15 = *(undefined8 *)&pFVar24->field_0x48;
          pFVar18->TexelFactor = pFVar24->TexelFactor;
          pFVar18->PackedRelativeBox = uVar14;
          *(undefined8 *)&pFVar18->field_0x48 = uVar15;
          (pFVar24->RenderAsset).field0_0x0 = TVar4;
          (pFVar24->Bounds).Origin.field0_0x0._s_0.X = dVar5;
          (pFVar24->Bounds).Origin.field0_0x0._s_0.Y = dVar6;
          (pFVar24->Bounds).Origin.field0_0x0._s_0.Z = dVar7;
          (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.X = dVar8;
          (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar9;
          (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar10;
          (pFVar24->Bounds).SphereRadius = dVar11;
          pFVar24->TexelFactor = fVar27;
          pFVar24->PackedRelativeBox = uVar16;
          *(undefined8 *)&pFVar24->field_0x48 = uVar12;
          pFVar18 = pFVar24;
LAB_1487736b0:
          pFVar22 = pFVar18;
          pFVar18 = pFVar22 + 1;
          if (pFVar18 <= pFVar21) goto code_r0x0001487736b9;
          goto LAB_1487736d3;
        }
        if (pFVar24 < pFVar21) {
          pFVar1 = pFVar24 + 1;
          do {
            pFVar18 = pFVar24;
            if (pFVar1 <= pFVar21) {
              pFVar20 = pFVar1;
              if (0x13f < (ulonglong)((longlong)pFVar21 + (0x50 - (longlong)pFVar1))) {
                do {
                  pUVar2 = (pFVar20->RenderAsset).field0_0x0.DebugPtr;
                  pUVar17 = (pFVar18->RenderAsset).field0_0x0.DebugPtr;
                  bVar26 = pUVar17 < pUVar2;
                  if (pUVar17 == pUVar2) {
                    bVar26 = pFVar20->TexelFactor < pFVar18->TexelFactor;
                  }
                  if (bVar26) {
                    pUVar17 = pUVar2;
                    pFVar18 = pFVar20;
                  }
                  pUVar2 = pFVar20[1].RenderAsset.field0_0x0.DebugPtr;
                  bVar26 = pUVar17 < pUVar2;
                  if (pUVar17 == pUVar2) {
                    bVar26 = pFVar20[1].TexelFactor < pFVar18->TexelFactor;
                  }
                  pUVar2 = pFVar20[2].RenderAsset.field0_0x0.DebugPtr;
                  if (bVar26) {
                    pFVar18 = pFVar20 + 1;
                  }
                  pUVar17 = (pFVar18->RenderAsset).field0_0x0.DebugPtr;
                  bVar26 = pUVar17 < pUVar2;
                  if (pUVar17 == pUVar2) {
                    bVar26 = pFVar20[2].TexelFactor < pFVar18->TexelFactor;
                  }
                  if (bVar26) {
                    pFVar18 = pFVar20 + 2;
                    pUVar17 = pUVar2;
                  }
                  pUVar2 = pFVar20[3].RenderAsset.field0_0x0.DebugPtr;
                  bVar26 = pUVar17 < pUVar2;
                  if (pUVar17 == pUVar2) {
                    bVar26 = pFVar20[3].TexelFactor < pFVar18->TexelFactor;
                  }
                  if (bVar26) {
                    pFVar18 = pFVar20 + 3;
                  }
                  pFVar20 = pFVar20 + 4;
                } while (pFVar20 <= pFVar21 + -3);
              }
              for (; pFVar20 <= pFVar21; pFVar20 = pFVar20 + 1) {
                pUVar2 = (pFVar20->RenderAsset).field0_0x0.DebugPtr;
                pUVar17 = (pFVar18->RenderAsset).field0_0x0.DebugPtr;
                bVar26 = pUVar17 < pUVar2;
                if (pUVar17 == pUVar2) {
                  bVar26 = pFVar20->TexelFactor < pFVar18->TexelFactor;
                }
                if (bVar26) {
                  pFVar18 = pFVar20;
                }
              }
            }
            TVar4 = (pFVar18->RenderAsset).field0_0x0;
            dVar3 = (pFVar18->Bounds).Origin.field0_0x0._s_0.X;
            pFVar20 = pFVar21 + -1;
            dVar5 = (pFVar18->Bounds).Origin.field0_0x0._s_0.Y;
            dVar6 = (pFVar18->Bounds).Origin.field0_0x0._s_0.Z;
            dVar7 = (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.X;
            dVar8 = (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Y;
            dVar9 = (pFVar21->Bounds).Origin.field0_0x0._s_0.X;
            dVar10 = (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Z;
            dVar11 = (pFVar18->Bounds).SphereRadius;
            fVar27 = pFVar18->TexelFactor;
            uVar16 = pFVar18->PackedRelativeBox;
            uVar12 = *(undefined8 *)&pFVar18->field_0x48;
            (pFVar18->RenderAsset).field0_0x0 = (pFVar21->RenderAsset).field0_0x0;
            (pFVar18->Bounds).Origin.field0_0x0._s_0.X = dVar9;
            dVar9 = (pFVar21->Bounds).Origin.field0_0x0._s_0.Z;
            (pFVar18->Bounds).Origin.field0_0x0._s_0.Y = (pFVar21->Bounds).Origin.field0_0x0._s_0.Y;
            (pFVar18->Bounds).Origin.field0_0x0._s_0.Z = dVar9;
            dVar9 = (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.Y;
            (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.X =
                 (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.X;
            (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar9;
            dVar9 = (pFVar21->Bounds).SphereRadius;
            (pFVar18->Bounds).BoxExtent.field0_0x0._s_0.Z =
                 (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.Z;
            (pFVar18->Bounds).SphereRadius = dVar9;
            uVar14 = pFVar21->PackedRelativeBox;
            uVar15 = *(undefined8 *)&pFVar21->field_0x48;
            pFVar18->TexelFactor = pFVar21->TexelFactor;
            pFVar18->PackedRelativeBox = uVar14;
            *(undefined8 *)&pFVar18->field_0x48 = uVar15;
            (pFVar21->RenderAsset).field0_0x0 = TVar4;
            (pFVar21->Bounds).Origin.field0_0x0._s_0.X = dVar3;
            (pFVar21->Bounds).Origin.field0_0x0._s_0.Y = dVar5;
            (pFVar21->Bounds).Origin.field0_0x0._s_0.Z = dVar6;
            (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.X = dVar7;
            (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar8;
            (pFVar21->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar10;
            (pFVar21->Bounds).SphereRadius = dVar11;
            pFVar21->TexelFactor = fVar27;
            pFVar21->PackedRelativeBox = uVar16;
            *(undefined8 *)&pFVar21->field_0x48 = uVar12;
            pFVar21 = pFVar20;
          } while (pFVar24 < pFVar20);
        }
        goto LAB_148773878;
      }
LAB_148773869:
      local_358 = pFVar1;
      HeapSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FSimpleStreamableAssetManager::RegisterRecord_::__l18::<lambda_1>_>_>
                (pFVar18,iVar19,param_3,param_4);
LAB_148773878:
      ppFVar25 = ppFVar25 + -3;
    } while (&local_348 <= ppFVar25);
  }
  return;
code_r0x0001487736b9:
  pUVar2 = (pFVar18->RenderAsset).field0_0x0.DebugPtr;
  pUVar17 = (pFVar24->RenderAsset).field0_0x0.DebugPtr;
  bVar26 = pUVar17 < pUVar2;
  if (pUVar17 == pUVar2) {
    bVar26 = pFVar22[1].TexelFactor < pFVar24->TexelFactor;
  }
  if (!bVar26) goto LAB_1487736b0;
LAB_1487736d3:
  do {
    pFVar23 = pFVar20;
    pFVar20 = pFVar23 + -1;
    if (pFVar20 <= pFVar24) break;
    pUVar2 = (pFVar24->RenderAsset).field0_0x0.DebugPtr;
    pUVar17 = (pFVar20->RenderAsset).field0_0x0.DebugPtr;
    bVar26 = pUVar17 < pUVar2;
    if (pUVar17 == pUVar2) {
      bVar26 = pFVar24->TexelFactor < pFVar23[-1].TexelFactor;
    }
  } while (!bVar26);
  TVar4 = (pFVar20->RenderAsset).field0_0x0;
  dVar3 = pFVar23[-1].Bounds.Origin.field0_0x0._s_0.X;
  if (pFVar18 <= pFVar20) {
    TVar13 = (pFVar18->RenderAsset).field0_0x0;
    dVar5 = pFVar22[1].Bounds.Origin.field0_0x0._s_0.X;
    dVar6 = pFVar22[1].Bounds.Origin.field0_0x0._s_0.Y;
    dVar7 = pFVar22[1].Bounds.Origin.field0_0x0._s_0.Z;
    dVar8 = pFVar22[1].Bounds.BoxExtent.field0_0x0._s_0.X;
    dVar9 = pFVar22[1].Bounds.BoxExtent.field0_0x0._s_0.Y;
    dVar10 = pFVar22[1].Bounds.BoxExtent.field0_0x0._s_0.Z;
    dVar11 = pFVar22[1].Bounds.SphereRadius;
    fVar27 = pFVar22[1].TexelFactor;
    uVar16 = pFVar22[1].PackedRelativeBox;
    uVar12 = *(undefined8 *)&pFVar22[1].field_0x48;
    (pFVar18->RenderAsset).field0_0x0 = TVar4;
    pFVar22[1].Bounds.Origin.field0_0x0._s_0.X = dVar3;
    dVar3 = pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Z;
    pFVar22[1].Bounds.Origin.field0_0x0._s_0.Y = pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Y;
    pFVar22[1].Bounds.Origin.field0_0x0._s_0.Z = dVar3;
    dVar3 = pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Y;
    pFVar22[1].Bounds.BoxExtent.field0_0x0._s_0.X = pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.X;
    pFVar22[1].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar3;
    dVar3 = pFVar23[-1].Bounds.SphereRadius;
    pFVar22[1].Bounds.BoxExtent.field0_0x0._s_0.Z = pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Z;
    pFVar22[1].Bounds.SphereRadius = dVar3;
    uVar14 = pFVar23[-1].PackedRelativeBox;
    uVar15 = *(undefined8 *)&pFVar23[-1].field_0x48;
    pFVar22[1].TexelFactor = pFVar23[-1].TexelFactor;
    pFVar22[1].PackedRelativeBox = uVar14;
    *(undefined8 *)&pFVar22[1].field_0x48 = uVar15;
    (pFVar20->RenderAsset).field0_0x0 = TVar13;
    pFVar23[-1].Bounds.Origin.field0_0x0._s_0.X = dVar5;
    pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Y = dVar6;
    pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Z = dVar7;
    pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.X = dVar8;
    pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar9;
    pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Z = dVar10;
    pFVar23[-1].Bounds.SphereRadius = dVar11;
    pFVar23[-1].TexelFactor = fVar27;
    pFVar23[-1].PackedRelativeBox = uVar16;
    *(undefined8 *)&pFVar23[-1].field_0x48 = uVar12;
    goto LAB_1487736b0;
  }
  TVar13 = (pFVar24->RenderAsset).field0_0x0;
  dVar5 = (pFVar24->Bounds).Origin.field0_0x0._s_0.X;
  dVar6 = (pFVar24->Bounds).Origin.field0_0x0._s_0.Y;
  dVar7 = (pFVar24->Bounds).Origin.field0_0x0._s_0.Z;
  local_358._0_4_ = (int)local_358 + -1;
  dVar8 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar9 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar10 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Z;
  dVar11 = (pFVar24->Bounds).SphereRadius;
  fVar27 = pFVar24->TexelFactor;
  uVar16 = pFVar24->PackedRelativeBox;
  uVar12 = *(undefined8 *)&pFVar24->field_0x48;
  (pFVar24->RenderAsset).field0_0x0 = TVar4;
  (pFVar24->Bounds).Origin.field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Z;
  (pFVar24->Bounds).Origin.field0_0x0._s_0.Y = pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Y;
  (pFVar24->Bounds).Origin.field0_0x0._s_0.Z = dVar3;
  dVar3 = pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Y;
  (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.X = pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.X;
  (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar3;
  dVar3 = pFVar23[-1].Bounds.SphereRadius;
  (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Z = pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Z;
  (pFVar24->Bounds).SphereRadius = dVar3;
  uVar14 = pFVar23[-1].PackedRelativeBox;
  uVar15 = *(undefined8 *)&pFVar23[-1].field_0x48;
  pFVar24->TexelFactor = pFVar23[-1].TexelFactor;
  pFVar24->PackedRelativeBox = uVar14;
  *(undefined8 *)&pFVar24->field_0x48 = uVar15;
  (pFVar20->RenderAsset).field0_0x0 = TVar13;
  pFVar23[-1].Bounds.Origin.field0_0x0._s_0.X = dVar5;
  pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Y = dVar6;
  pFVar23[-1].Bounds.Origin.field0_0x0._s_0.Z = dVar7;
  pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.X = dVar8;
  pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Y = dVar9;
  pFVar23[-1].Bounds.BoxExtent.field0_0x0._s_0.Z = dVar10;
  pFVar23[-1].Bounds.SphereRadius = dVar11;
  pFVar23[-1].TexelFactor = fVar27;
  pFVar23[-1].PackedRelativeBox = uVar16;
  *(undefined8 *)&pFVar23[-1].field_0x48 = uVar12;
  if (((longlong)pFVar20 + (-0x50 - (longlong)pFVar24)) / 0x50 <
      ((longlong)pFVar21 - (longlong)pFVar18) / 0x50) {
    if (pFVar18 < pFVar21) {
      *ppFVar25 = pFVar18;
      ppFVar25[1] = pFVar21;
      *(int *)(ppFVar25 + 2) = (int)local_358;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar20 <= pFVar24 + 1) goto LAB_148773878;
    pFVar21 = pFVar23 + -2;
    pFVar18 = pFVar24;
  }
  else {
    if (pFVar24 + 1 < pFVar20) {
      *ppFVar25 = pFVar24;
      ppFVar25[1] = pFVar23 + -2;
      *(int *)(ppFVar25 + 2) = (int)local_358;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar21 <= pFVar18) goto LAB_148773878;
  }
  iVar19 = (int)(((longlong)pFVar21 - (longlong)pFVar18) / 0x50) + 1;
  pFVar24 = pFVar18;
  if ((int)local_358 == 0) goto LAB_148773869;
  goto LAB_148773630;
}

// LowerBoundInternal<unsigned_int_const_,int,unsigned_int,FIdentityFunctor,TLess<void>_> @ 148773a40

int __cdecl
AlgoImpl::LowerBoundInternal<unsigned_int_const_,int,unsigned_int,FIdentityFunctor,TLess<void>_>
          (uint *param_1,int param_2,uint *param_3,FIdentityFunctor param_4,TLess<void> param_5)

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

// MakeShared<FStreamableHandle,1,FStreamableHandle::FPrivateToken,UE::FSourceLocation> @ 148773a90

TSharedRef<FStreamableHandle,1> * __cdecl
MakeShared<FStreamableHandle,1,FStreamableHandle::FPrivateToken,UE::FSourceLocation>
          (TSharedRef<FStreamableHandle,1> *__return_storage_ptr__,FPrivateToken *param_1,
          FSourceLocation *param_2)

{
  char *pcVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar3 = operator_new(0x120);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStreamableHandle___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    uVar2 = (param_2->Impl)._Column;
    pcVar1 = (param_2->Impl)._File;
    pTVar3[7].SharedReferenceCount = (atomic<int>)(param_2->Impl)._Line;
    pTVar3[7].WeakReferenceCount = (atomic<int>)uVar2;
    pTVar3[8]._padding_ = (longlong)pcVar1;
    *(char **)&pTVar3[8].SharedReferenceCount = (param_2->Impl)._Function;
    *(undefined1 *)&pTVar3[10]._padding_ = 0;
    UE::IoStore::FOnDemandContentHandle::FOnDemandContentHandle
              ((FOnDemandContentHandle *)&pTVar3[10].SharedReferenceCount);
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xe]._padding_ = 0;
    pTVar3[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x10]._padding_ = 0;
    pTVar3[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x11]._padding_ = 0;
    pTVar3[0x11].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar3[0x11].WeakReferenceCount = 0;
    pTVar3[0x11].WeakReferenceCount.field_0x2 = 0;
    pTVar4 = pTVar3;
  }
  TSharedRef<FStreamableHandle,1>::TSharedRef<FStreamableHandle,1>
            (__return_storage_ptr__,(FStreamableHandle *)(pTVar4 + 1),pTVar4);
  return __return_storage_ptr__;
}

// ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext> @ 148773bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>
          *param_7)

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
LAB_148773d34:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148773d34;
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
        `FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()
                  (param_4,param_7->DataPtr,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_14877415f;
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
    if ((param_6 & BackgroundPriority) != None) goto LAB_148773eae;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_148773eae:
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
          ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(<lambda_1> **)((longlong)FVar14 + 0x60) = param_4;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar17;
    *(TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>
      **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FTracedTask>_>
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FTracedTask,int>
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
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>_const_&)_::_2_::FParallelForData>
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
          ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
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
      ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>_const_&)_::_2_::FParallelForData>
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
LAB_14877415f:
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

// ParseTypedValue<enum_EStatFontTypes> @ 1487741d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ParseTypedValue<enum_EStatFontTypes>(wchar_t *param_1,wchar_t *param_2,EStatFontTypes *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStackY_c8 [32];
  wchar_t local_98 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98[1] = L'\0';
  local_98[2] = L'\0';
  local_98[3] = L'\0';
  local_98[4] = L'\0';
  local_98[5] = L'\0';
  local_98[6] = L'\0';
  local_98[7] = L'\0';
  local_98[8] = L'\0';
  local_98[0] = L'\0';
  local_98[9] = L'\0';
  local_98[10] = L'\0';
  local_98[0xb] = L'\0';
  local_98[0xc] = L'\0';
  local_98[0xd] = L'\0';
  local_98[0xe] = L'\0';
  local_98[0xf] = L'\0';
  local_98[0x10] = L'\0';
  local_98[0x11] = L'\0';
  local_98[0x12] = L'\0';
  local_98[0x13] = L'\0';
  local_98[0x14] = L'\0';
  local_98[0x15] = L'\0';
  local_98[0x16] = L'\0';
  local_98[0x17] = L'\0';
  local_98[0x18] = L'\0';
  local_98[0x19] = L'\0';
  local_98[0x1a] = L'\0';
  local_98[0x1b] = L'\0';
  local_98[0x1c] = L'\0';
  local_98[0x1d] = L'\0';
  local_98[0x1e] = L'\0';
  local_98[0x1f] = L'\0';
  local_98[0x20] = L'\0';
  local_98[0x21] = L'\0';
  local_98[0x22] = L'\0';
  local_98[0x23] = L'\0';
  local_98[0x24] = L'\0';
  local_98[0x25] = L'\0';
  local_98[0x26] = L'\0';
  local_98[0x27] = L'\0';
  local_98[0x28] = L'\0';
  local_98[0x39] = L'\0';
  local_98[0x3a] = L'\0';
  local_98[0x3b] = L'\0';
  local_98[0x3c] = L'\0';
  local_98[0x29] = L'\0';
  local_98[0x2a] = L'\0';
  local_98[0x2b] = L'\0';
  local_98[0x2c] = L'\0';
  local_98[0x2d] = L'\0';
  local_98[0x2e] = L'\0';
  local_98[0x2f] = L'\0';
  local_98[0x30] = L'\0';
  local_98[0x3d] = L'\0';
  local_98[0x3e] = L'\0';
  local_98[0x31] = L'\0';
  local_98[0x32] = L'\0';
  local_98[0x33] = L'\0';
  local_98[0x34] = L'\0';
  local_98[0x35] = L'\0';
  local_98[0x36] = L'\0';
  local_98[0x37] = L'\0';
  local_98[0x38] = L'\0';
  local_98[0x3f] = 0;
  bVar1 = FParse::Value(param_1,param_2,local_98,0x40,true,(wchar_t **)0x0);
  if (bVar1) {
    *param_3 = Small;
    iVar2 = FGenericPlatformStricmp::Stricmp(local_98,L"Tiny");
    if (iVar2 == 0) {
      *param_3 = Tiny;
    }
  }
  return;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FTracedTask>_> @ 148774860

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask_conflict *_Src;
  FTracedTask_conflict *_Dst;
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
    else if (iVar4 < 0) goto LAB_148774976;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_148774976:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask_conflict *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask_conflict *)0x0) &&
         (uVar3 = ((ulonglong)(_Src + 0xffff) & 0xffffffffffff0000) - (longlong)_Src, uVar3 != 0)) {
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

// RemoveAllSwap<`FStaticMeshComponentBulkReregisterContext::~FStaticMeshComponentBulkReregisterContext'::__l2::<lambda_1>_> @ 148774c50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FStaticMeshComponentBulkReregisterContext::~FStaticMeshComponentBulkReregisterContext_::__l2::<lambda_1>_>
          (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,
          EAllowShrinking param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar7 = this->ArrayNum;
  bVar4 = false;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    iVar8 = iVar7;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      lVar1 = *(longlong *)((this->AllocatorInstance).Data + lVar10);
      if (lVar1 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) {
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      }
      else {
        bVar4 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        pFVar2 = (this->AllocatorInstance).Data;
        iVar8 = ~uVar9 + this->ArrayNum;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar9 * 8,pFVar2 + (longlong)(this->ArrayNum - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar8 = this->ArrayNum;
    } while ((int)uVar9 < iVar8);
    if ((bVar4) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar8,&this->ArrayMax);
    }
  }
  return iVar7 - this->ArrayNum;
}

// RemoveAllSwap<`FStaticMeshComponentBulkReregisterContext::SanitizeMeshComponents'::__l2::<lambda_1>_> @ 148774e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FStaticMeshComponentBulkReregisterContext::SanitizeMeshComponents_::__l2::<lambda_1>_>
          (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,
          EAllowShrinking param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar7 = this->ArrayNum;
  bVar4 = false;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    iVar8 = iVar7;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      lVar1 = *(longlong *)((this->AllocatorInstance).Data + lVar10);
      if (lVar1 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      if ((((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) && ((*(byte *)(lVar1 + 0x98) & 1) != 0)) &&
         (*(longlong *)(lVar1 + 0x530) == 0)) {
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      }
      else {
        bVar4 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        pFVar2 = (this->AllocatorInstance).Data;
        iVar8 = ~uVar9 + this->ArrayNum;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar9 * 8,pFVar2 + (longlong)(this->ArrayNum - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar8 = this->ArrayNum;
    } while ((int)uVar9 < iVar8);
    if ((bVar4) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar8,&this->ArrayMax);
    }
  }
  return iVar7 - this->ArrayNum;
}

// RenderArrayOfStats<int___cdecl(FGameThreadStatsData_const_&,TStatMessage<EComplexStatField>_const_&,FCanvas_*,int,int,float,bool)> @ 1487751a0

void __cdecl
RenderArrayOfStats<int___cdecl(FGameThreadStatsData_const_&,TStatMessage<EComplexStatField>_const_&,FCanvas_*,int,int,float,bool)>
          (FCanvas *param_1,int param_2,int *param_3,
          TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *param_4,
          FGameThreadStatsData *param_5,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_6,float param_7,
          _func___cdecl_int_FGameThreadStatsData_ptr_TStatMessage<EComplexStatField>_ptr_FCanvas_ptr_int_int_float_bool
          *param_8)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  bool bVar3;
  code *pcVar4;
  float fVar5;
  FTexture *pFVar6;
  TConsoleVariableData<int> *pTVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FStatRenderGlobals *pFVar12;
  int iVar13;
  ForElementType<FSetElementId> FVar14;
  TStatMessage<EComplexStatField> *pTVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  ulong64 local_a8;
  ulong64 local_a0;
  longlong local_90;
  longlong local_88;
  
  pFVar12 = GetStatRenderGlobals();
  pTVar7 = CVarNumStatsPerGroup.Ref;
  pFVar6 = GWhiteTexture;
  bVar3 = 0.0 <= param_7;
  iVar17 = (uint)bVar3 * -2 + 5;
  local_a0 = 0;
  local_a8 = 0;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_3f800000;
  iVar1 = pTVar7->ShadowedValue[0];
  iVar13 = param_4->ArrayNum;
  uVar16 = 0;
  if (0 < iVar13) {
    lVar19 = 0;
    lVar18 = 0;
    local_88 = (longlong)iVar1;
    do {
      if (local_88 <= lVar19) break;
      uVar10 = 0;
      if ((int)uVar16 < iVar13) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar15 = (TStatMessage<EComplexStatField> *)((param_4->AllocatorInstance).Data + lVar18);
      FStatNameAndInfo::GetShortNameFrom((FName)&local_90);
      lVar8 = local_90;
      uVar10 = GetTypeHash((FNameEntryId)(uint)local_90);
      if (*(int *)&(param_6->Elements).field_0x8 != *(int *)&(param_6->Elements).field_0x34) {
        FVar2 = (param_6->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&param_6->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar2;
        }
        iVar13 = *(int *)((longlong)FVar14 +
                         (ulonglong)
                         (param_6->HashSize - 1U & (int)((ulonglong)lVar8 >> 0x20) + uVar10) * 4);
        if (iVar13 != -1) {
          do {
            if (*(longlong *)(*(longlong *)&param_6->Elements + (longlong)iVar13 * 0x10) == lVar8)
            goto LAB_1487753aa;
            iVar13 = *(int *)(*(longlong *)&param_6->Elements + 8 + (longlong)iVar13 * 0x10);
          } while (iVar13 != -1);
        }
      }
      iVar13 = -1;
LAB_1487753aa:
      if (((bVar3) && (iVar13 == -1)) && (((pTVar15->NameAndInfo).Number & 0x100000U) != 0)) {
        local_a0 = local_a0 + *(uint *)((pTVar15->StatData).Pad + 8);
        local_a8 = local_a8 + *(uint *)((pTVar15->StatData).Pad + 0x10);
      }
      if (pFVar6 != (FTexture *)0x0) {
        FCanvas::DrawTile(param_1,(double)param_2,
                          (double)(GStatFonts[(int)pFVar12->StatFontType].FontHeightOffset +
                                  *param_3),
                          (double)(iVar17 * pFVar12->InterColumnOffset +
                                  pFVar12->AfterNameColumnOffset),(double)pFVar12->StatFontHeight,
                          0.0,0.0,fVar5,fVar5,pFVar12->BackgroundColors + ((uint)lVar19 & 1),pFVar6,
                          true);
      }
      iVar11 = (*param_8)(param_5,pTVar15,param_1,param_2,*param_3,param_7,iVar13 != -1);
      iVar13 = *param_3;
      *param_3 = iVar13 + iVar11;
      if ((!bVar3) &&
         ((pFVar12->SizeXY).field0_0x0._s_0.Y + pFVar12->StatFontHeight < iVar13 + iVar11)) break;
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x48;
      iVar13 = param_4->ArrayNum;
    } while ((int)uVar16 < iVar13);
  }
  if (iVar1 < param_4->ArrayNum) {
    uVar10 = uVar16 & 1;
    uVar16 = uVar16 + 1;
    FCanvas::DrawTile(param_1,(double)param_2,
                      (double)(GStatFonts[(int)pFVar12->StatFontType].FontHeightOffset + *param_3),
                      (double)(iVar17 * pFVar12->InterColumnOffset + pFVar12->AfterNameColumnOffset)
                      ,(double)pFVar12->StatFontHeight,0.0,0.0,fVar5,fVar5,
                      pFVar12->BackgroundColors + uVar10,pFVar6,true);
    iVar17 = RenderMoreStatsLine(param_1,param_2,*param_3,param_4->ArrayNum - iVar1);
    *param_3 = *param_3 + iVar17;
  }
  if (bVar3) {
    FCanvas::DrawTile(param_1,(double)param_2,
                      (double)(GStatFonts[(int)pFVar12->StatFontType].FontHeightOffset + *param_3),
                      (double)(pFVar12->InterColumnOffset * 3 + pFVar12->AfterNameColumnOffset),
                      (double)pFVar12->StatFontHeight,0.0,0.0,fVar5,fVar5,
                      pFVar12->BackgroundColors + (uVar16 & 1),pFVar6,true);
    iVar17 = RenderGroupBudget(param_1,param_2,*param_3,local_a0,local_a8,param_7);
    *param_3 = *param_3 + iVar17;
  }
  return;
}

// StaticEnum<enum_EChunkSeekTableMode> @ 148775900

UEnum * __cdecl StaticEnum<enum_EChunkSeekTableMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EChunkSeekTableMode,(UObject *)pUVar1,
                       L"EChunkSeekTableMode");
  }
  return Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton;
}

// Transform<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,TArray<FPackageId,TSizedDefaultAllocator<32>_>_&,`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_1>_> @ 148775940

void __cdecl
Algo::
Transform<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,TArray<FPackageId,TSizedDefaultAllocator<32>_>_&,_UE::StreamableManager::Private::FDownloadContext::Start_::__l2::<lambda_1>_>
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPackageId,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FName local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    local_40 = *(undefined8 *)pFVar7;
    uStack_38 = *(undefined8 *)(pFVar7 + 8);
    FPackageId::FromName(&local_48);
    pFVar2 = (FName *)(param_2->AllocatorInstance).Data;
    if ((pFVar2 <= &local_48) && (&local_48 < pFVar2 + param_2->ArrayMax)) {
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
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    pFVar7 = pFVar7 + 0x20;
    param_2->ArrayNum = iVar5 + 1;
    *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_48;
  }
  return;
}

// UpperBoundInternal<unsigned_int_const_,int,unsigned_int,FIdentityFunctor,TLess<void>_> @ 148775b10

int __cdecl
AlgoImpl::UpperBoundInternal<unsigned_int_const_,int,unsigned_int,FIdentityFunctor,TLess<void>_>
          (uint *param_1,int param_2,uint *param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// WriteToString<32,int> @ 148775b80

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,int>(TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,int *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// WriteToWideString<1035,FSoftObjectPath_const_&> @ 148775bc0

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToWideString<1035,FSoftObjectPath_const_&>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,FSoftObjectPath *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  FSoftObjectPath::ToString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>_> @ 148775c10

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>_> @ 148775c20

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>_> @ 148775c30

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>_> @ 148775c40

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>_> @ 148775c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>_> @ 148775c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>_> @ 148775c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>_> @ 148775c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>_> @ 148775c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>_> @ 148775ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>_>
          (_Atomic_padded<TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*> @ 148775cb0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512>_*>
          (TLocklessStaticStorage<FSimpleStreamableAssetManager::FRegister,512> **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*> @ 148775cc0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512>_*>
          (TLocklessStaticStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord,512> **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*> @ 148775cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512>_*>
          (TLocklessStaticStorage<FSimpleStreamableAssetManager::FUnregister,512> **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*> @ 148775ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512>_*>
          (TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdate,512> **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*> @ 148775cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>_*>
          (TLocklessStaticStorage<FSimpleStreamableAssetManager::FUpdateLastRenderTime,512>
           **param_1)

{
  return (long64)*param_1;
}

// __builtin_array_init_helper<FSimpleStreamableAssetManager::FRegister> @ 148775d00

void __cdecl
__builtin_array_init_helper<FSimpleStreamableAssetManager::FRegister>
          (FRegister *param_1,ulong64 param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      plVar1[10] = 0;
      ((FRegister *)(plVar1 + -2))->_padding_ = 0;
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      plVar1[3] = 0;
      plVar1[4] = 0;
      plVar1[5] = 0;
      plVar1[6] = 0;
      *(byte *)(plVar1 + 10) = (byte)plVar1[10] & 0xfe;
      plVar1[7] = 0;
      plVar1[8] = 0x3f800000;
      *(undefined4 *)(plVar1 + 9) = 0x7f7fffff;
      *(undefined4 *)((longlong)plVar1 + 0x4c) = 0xc47a0000;
      (((TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *)(plVar1 + 0xb))->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      plVar1[0xc] = 0;
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// __builtin_array_init_helper<FSimpleStreamableAssetManager::FRemovedAssetRecord> @ 148775d70

void __cdecl
__builtin_array_init_helper<FSimpleStreamableAssetManager::FRemovedAssetRecord>
          (FRemovedAssetRecord *param_1,ulong64 param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &param_1->AssetElementIndex;
    do {
      (((FRemovedAssetRecord *)(piVar1 + -4))->SimpleStreamableAssetManagerIndex).Object =
           (int *)0x0;
      ((FSharedReferencer<1> *)(piVar1 + -2))->ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *piVar1 = -1;
      *(UStreamableRenderAsset **)(piVar1 + 2) = (UStreamableRenderAsset *)0x0;
      piVar1 = piVar1 + 8;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// __builtin_array_init_helper<FSimpleStreamableAssetManager::FUnregister> @ 148775db0

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
__builtin_array_init_helper<FSimpleStreamableAssetManager::FUnregister>
          (FUnregister *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    (param_1->ObjectRegistrationIndex).Object = (int *)0x0;
    (param_1->ObjectRegistrationIndex).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->field1_0x10).ObjectKey = 0;
    param_1 = param_1 + 1;
  }
  return;
}

// __builtin_array_init_helper<FSimpleStreamableAssetManager::FUpdate> @ 148775de0

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
__builtin_array_init_helper<FSimpleStreamableAssetManager::FUpdate>
          (FUpdate *param_1,ulong64 param_2)

{
  TBoxSphereBounds<double,double> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->ObjectBounds;
    do {
      ((FUpdate_u_72 *)(pTVar1 + 1))[3].ObjectKey = 0;
      *(undefined8 *)((longlong)(pTVar1 + -1) + 0x28) = 0;
      *(undefined8 *)((longlong)(pTVar1 + -1) + 0x30) = 0;
      (pTVar1->Origin).field0_0x0._s_0.X = 0.0;
      (pTVar1->Origin).field0_0x0._s_0.Y = 0.0;
      (pTVar1->Origin).field0_0x0._s_0.Z = 0.0;
      (pTVar1->BoxExtent).field0_0x0._s_0.X = 0.0;
      (pTVar1->BoxExtent).field0_0x0._s_0.Y = 0.0;
      (pTVar1->BoxExtent).field0_0x0._s_0.Z = 0.0;
      pTVar1->SphereRadius = 0.0;
      ((FUpdate_u_72 *)(pTVar1 + 1))[3] = INSERT(((FUpdate_u_72 *)(pTVar1 + 1))[3],'\0',0,1);
      ((FUpdate_u_72 *)(pTVar1 + 1))->ObjectKey = 0;
      ((FUpdate_u_72 *)(pTVar1 + 1))[1].ObjectKey = 0x3f800000;
      *(float *)((FUpdate_u_72 *)(pTVar1 + 1) + 2) = 3.4028235e+38;
      *(float *)((longlong)(pTVar1 + 1) + 0x14) = -1000.0;
      pTVar1 = (TBoxSphereBounds<double,double> *)((FUpdate_u_72 *)(pTVar1 + 1) + 6);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// __builtin_array_init_helper<FSimpleStreamableAssetManager::FUpdateLastRenderTime> @ 148775e40

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
__builtin_array_init_helper<FSimpleStreamableAssetManager::FUpdateLastRenderTime>
          (FUpdateLastRenderTime *param_1,ulong64 param_2)

{
  FUpdateLastRenderTime_u_16 *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->field1_0x10;
    do {
      *(undefined4 *)((longlong)pFVar1 + 0xc) = 0;
      (((FUpdateLastRenderTime *)(pFVar1 + -2))->ObjectRegistrationIndex).Object = (int *)0x0;
      ((FSharedReferencer<1> *)(pFVar1 + -1))->ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar1->ObjectKey = 0;
      *(float *)(pFVar1 + 1) = -1000.0;
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// get<1,TTuple<FName,FGpuStatMessage>_const_&> @ 148775e80

FGpuStatMessage * __cdecl
get<1,TTuple<FName,FGpuStatMessage>_const_&>(TTuple<FName,FGpuStatMessage> *param_1)

{
  return (FGpuStatMessage *)&param_1->field_0x8;
}

// get<0,TTuple<FName,FGpuStatMessage>_const_&> @ 148775e90

FName * __cdecl get<0,TTuple<FName,FGpuStatMessage>_const_&>(TTuple<FName,FGpuStatMessage> *param_1)

{
  return (FName *)param_1;
}

// FThreadSafeStaticStat<`FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_StaticMesh> @ 148775ea0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId(void)const_::_2_::FStat_FCancelIORequestsTask_StaticMesh>
* __thiscall
FThreadSafeStaticStat<`FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId'::__l2::FStat_FCancelIORequestsTask_StaticMesh>
::
FThreadSafeStaticStat<_FStaticMeshStreamIn_IO::FCancelIORequestsTask::GetStatId_::__l2::FStat_FCancelIORequestsTask_StaticMesh>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FCancelIORequestsTask_StaticMesh");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FCancelIORequestsTask_StaticMesh","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`RenderAssetInstanceTask::FDoWorkTask::GetStatId'::__l2::FStat_FCreateViewWithUninitializedBounds> @ 148775f30

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const_::_2_::FStat_FCreateViewWithUninitializedBounds>
* __thiscall
FThreadSafeStaticStat<`RenderAssetInstanceTask::FDoWorkTask::GetStatId'::__l2::FStat_FCreateViewWithUninitializedBounds>
::
FThreadSafeStaticStat<_RenderAssetInstanceTask::FDoWorkTask::GetStatId_::__l2::FStat_FCreateViewWithUninitializedBounds>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FCreateViewWithUninitializedBounds");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FCreateViewWithUninitializedBounds","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FRenderAssetStreamingMipCalcTask::GetStatId'::__l2::FStat_FRenderAssetStreamingMipCalcTask> @ 148775fc0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_private:_struct_TStatId___cdecl_FRenderAssetStreamingMipCalcTask::GetStatId(void)const_::_2_::FStat_FRenderAssetStreamingMipCalcTask>
* __thiscall
FThreadSafeStaticStat<`FRenderAssetStreamingMipCalcTask::GetStatId'::__l2::FStat_FRenderAssetStreamingMipCalcTask>
::
FThreadSafeStaticStat<_FRenderAssetStreamingMipCalcTask::GetStatId_::__l2::FStat_FRenderAssetStreamingMipCalcTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FRenderAssetStreamingMipCalcTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FRenderAssetStreamingMipCalcTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FRenderAssetUpdateTickGTTask::GetStatId'::__l2::FStat_FRenderAssetUpdateTickGTTask> @ 148776050

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)_::_2_::FStat_FRenderAssetUpdateTickGTTask>
* __thiscall
FThreadSafeStaticStat<`FRenderAssetUpdateTickGTTask::GetStatId'::__l2::FStat_FRenderAssetUpdateTickGTTask>
::
FThreadSafeStaticStat<_FRenderAssetUpdateTickGTTask::GetStatId_::__l2::FStat_FRenderAssetUpdateTickGTTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FRenderAssetUpdateTickGTTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FRenderAssetUpdateTickGTTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FUpdateStreamingRenderAssetsTask::GetStatId'::__l2::FStat_FUpdateStreamingRenderAssetsTask> @ 1487760e0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)_::_2_::FStat_FUpdateStreamingRenderAssetsTask>
* __thiscall
FThreadSafeStaticStat<`FUpdateStreamingRenderAssetsTask::GetStatId'::__l2::FStat_FUpdateStreamingRenderAssetsTask>
::
FThreadSafeStaticStat<_FUpdateStreamingRenderAssetsTask::GetStatId_::__l2::FStat_FUpdateStreamingRenderAssetsTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FUpdateStreamingRenderAssetsTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FUpdateStreamingRenderAssetsTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::__l2::<lambda_1>,0,0> @ 14877dad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,0,0> @ 14877daf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoCancelIO_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCancelIO'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,0,0> @ 14877db10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoCreateBuffers_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,0,0> @ 14877db30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoInitiateIO_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,0,0> @ 14877db50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoSerializeLODData_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::<lambda_1>,1,0> @ 14877db70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FRenderAssetUpdate::ScheduleRenderTask_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::<lambda_1>,1,1> @ 14877db90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FStaticMeshSceneProxy::FLODInfo::FLODInfo_::__l38::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::`38'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x28);
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

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_1>,0,0> @ 14877dbb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData_::__l38::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`38'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_1>,0,0> @ 14877dbd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamOut::FStaticMeshStreamOut_::__l15::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`15'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,0,0> @ 14877dbf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::SetIORequest_::__l15::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::SetIORequest'::`15'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l1::<lambda_29_>,0,0> @ 14877dc10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l1::<lambda_29_>,0,0>
::
~TFunction_OwnedObject<_FRenderAssetStreamingManager::FRenderAssetStreamingManager_::__l1::<lambda_29_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::`1'::<lambda_29_>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,0,0> @ 14877dc30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoCreateBuffers_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,0,0> @ 14877dc50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoInitiateIO_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,0,0> @ 14877dc70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamIn_IO::DoSerializeLODData_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_2>,1,1> @ 14877dc90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UE::StreamableManager::Private::FDownloadContext::Start_::__l2::<lambda_2>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__Start_FDownloadContext_Private_StreamableManager_UE__QEAAXAEBV__TSharedRef_UFStreamableHandle___00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014877dcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_2>,0,0> @ 14877dcf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData_::__l38::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`38'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_2>,0,0> @ 14877dd10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamOut::FStaticMeshStreamOut_::__l15::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`15'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_3>,0,0> @ 14877dd30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::StreamableManager::Private::FDownloadContext::Start_::__l2::<lambda_3>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__1__Start_FDownloadContext_Private_StreamableManager_UE__QEAAXAEBV__TSharedRef_UFStreamableHandle___00___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014877dd5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_3>,0,0> @ 14877dd70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamOut::FStaticMeshStreamOut_::__l17::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`17'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_3>,0,0> @ 14877dd90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData_::__l45::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`45'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_4>,0,0> @ 14877ddb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FStaticMeshStreamOut::FStaticMeshStreamOut_::__l17::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`17'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_4>,0,0> @ 14877ddd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData_::__l45::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`45'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 14877e310

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// operator== @ 148780e40

bool __cdecl
operator==(FRayTracingGeometryInitializer *param_1,FRayTracingGeometryInitializer *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((((param_1->IndexBuffer).Reference == (param_2->IndexBuffer).Reference) &&
       (param_1->IndexBufferOffset == param_2->IndexBufferOffset)) &&
      (param_1->GeometryType == param_2->GeometryType)) &&
     ((param_1->TotalPrimitiveCount == param_2->TotalPrimitiveCount &&
      (iVar1 = (param_1->Segments).ArrayNum, iVar1 == (param_2->Segments).ArrayNum)))) {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar7 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_1->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(longlong *)(pFVar2 + lVar9) !=
            *(longlong *)((param_2->Segments).AllocatorInstance.Data + lVar9)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(int *)((param_1->Segments).AllocatorInstance.Data + lVar9 + 8) !=
            *(int *)(pFVar2 + lVar9 + 8)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(int *)((param_1->Segments).AllocatorInstance.Data + lVar9 + 0xc) !=
            *(int *)(pFVar2 + lVar9 + 0xc)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(int *)((param_1->Segments).AllocatorInstance.Data + lVar9 + 0x10) !=
            *(int *)(pFVar2 + lVar9 + 0x10)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(int *)((param_1->Segments).AllocatorInstance.Data + lVar9 + 0x14) !=
            *(int *)(pFVar2 + lVar9 + 0x14)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(int *)((param_1->Segments).AllocatorInstance.Data + lVar9 + 0x18) !=
            *(int *)(pFVar2 + lVar9 + 0x18)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if (*(int *)((param_1->Segments).AllocatorInstance.Data + lVar9 + 0x1c) !=
            *(int *)(pFVar2 + lVar9 + 0x1c)) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if ((param_1->Segments).AllocatorInstance.Data[lVar9 + 0x20] != pFVar2[lVar9 + 0x20]) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if ((param_1->Segments).AllocatorInstance.Data[lVar9 + 0x21] != pFVar2[lVar9 + 0x21]) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (param_2->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        pFVar2 = (param_2->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Segments).ArrayNum) {
          uVar6 = uVar7;
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
        if ((param_1->Segments).AllocatorInstance.Data[lVar9 + 0x22] != pFVar2[lVar9 + 0x22]) {
          return false;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x28;
      } while ((int)uVar8 < (param_1->Segments).ArrayNum);
    }
    if (((((param_1->OfflineData == param_2->OfflineData) &&
          (param_1->SourceGeometry == param_2->SourceGeometry)) &&
         (param_1->bFastBuild == param_2->bFastBuild)) &&
        ((param_1->bAllowUpdate == param_2->bAllowUpdate &&
         (param_1->bAllowCompaction == param_2->bAllowCompaction)))) &&
       ((param_1->Type == param_2->Type && (param_1->OwnerName == param_2->OwnerName)))) {
      return true;
    }
  }
  return false;
}

// operator() @ 1487820a0

void __thiscall `RenderArrayOfGpuStats'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  
  if ((FTexture *)**(undefined8 **)this != (FTexture *)0x0) {
    lVar1 = *(longlong *)((longlong)this + 0x20);
    FCanvas::DrawTile((FCanvas *)**(undefined8 **)((longlong)this + 8),
                      (double)**(int **)((longlong)this + 0x10),
                      (double)(GStatFonts[*(int *)(lVar1 + 0x7c)].FontHeightOffset +
                              **(int **)((longlong)this + 0x18)),
                      (double)((*(int *)(lVar1 + 8) + *(int *)(lVar1 + 0xc) * 2) * 3 +
                              *(int *)(lVar1 + 4)),(double)*(int *)(lVar1 + 0x68),0.0,0.0,
                      __real_3f800000,__real_3f800000,
                      (FLinearColor *)
                      (((ulonglong)(**(uint **)((longlong)this + 0x28) & 1) + 4) * 0x10 + lVar1),
                      (FTexture *)**(undefined8 **)this,true);
  }
  return;
}

// operator() @ 148782170

void __thiscall `RenderCounterValues'::__l2::<lambda_1>::operator()(void *this,Type param_1)

{
  int iVar1;
  longlong lVar2;
  FCanvas *pFVar3;
  UFont *pUVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  FStatRenderGlobals *pFVar9;
  size_t sVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 uVar16;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar15 [16];
  int local_res8 [2];
  int local_res18 [4];
  FString local_98;
  FString local_88;
  FString local_78;
  undefined1 local_68 [16];
  TStringView<wchar_t> local_58;
  
  lVar2 = *(longlong *)this;
  uVar6 = *(uint *)(lVar2 + 0x44) & 0xe00;
  if (uVar6 == 0x600) {
    auVar15 = roundps(unaff_XMM6,
                      ZEXT416((uint)((float)*(double *)(lVar2 + (ulonglong)param_1 * 8) *
                                     __real_42c80000 + __real_3f000000)),1);
    fVar14 = auVar15._0_4_ * __real_3c23d70a;
    uVar16 = auVar15._4_4_;
    pFVar8 = ::FString::FormatAsNumber
                       (&local_78,(int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1);
    auVar15._4_4_ = uVar16;
    auVar15._0_4_ = fVar14;
    if (((int)fVar14 != -0x80000000) && ((float)(int)fVar14 != fVar14)) {
      auVar15._8_4_ = uVar16;
      auVar15._12_4_ = uVar16;
      auVar13._8_8_ = auVar15._8_8_;
      auVar13._4_4_ = fVar14;
      auVar13._0_4_ = fVar14;
      movmskps((int)pFVar8,auVar13);
    }
    ::FString::PrintfImpl((FString *)&local_58,L"%0.2f");
    ::FString::RightChop((FString *)&local_58,&local_88,2);
    ::FString::PrintfImpl(&local_98,L"%s.%s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar11.Data = local_98.Data.AllocatorInstance.Data;
    }
    local_68._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x10);
    local_68._8_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x18);
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"0.00");
    if (iVar7 == 0) {
      local_68._12_4_ = (float)local_68._12_4_ * **(float **)((longlong)this + 0x10);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar11.Data = local_98.Data.AllocatorInstance.Data;
    }
    iVar7 = **(int **)((longlong)this + 0x28);
    iVar1 = **(int **)((longlong)this + 0x20);
    pFVar3 = (FCanvas *)**(undefined8 **)((longlong)this + 0x18);
    pFVar9 = GetStatRenderGlobals();
    iVar12 = 0;
    local_58.Size = iVar12;
    local_58.DataPtr = (wchar_t *)FVar11.Data;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      sVar10 = wcslen((wchar_t *)FVar11.Data);
      local_58.Size = (int)sVar10;
    }
    StringSize(pFVar9->StatFont,local_res8,local_res18,&local_58);
    pUVar4 = pFVar9->StatFont;
    local_58.DataPtr = (wchar_t *)FVar11.Data;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      sVar10 = wcslen((wchar_t *)FVar11.Data);
      iVar12 = (int)sVar10;
    }
    local_58.Size = iVar12;
    FCanvas::DrawShadowedString
              (pFVar3,(double)((pFVar9->InterColumnOffset - local_res8[0]) + iVar1),(double)iVar7,
               &local_58,pUVar4,(FLinearColor *)local_68,&FLinearColor::Black);
  }
  else {
    if (uVar6 != 0x400) {
      return;
    }
    lVar2 = *(longlong *)(lVar2 + (ulonglong)param_1 * 8);
    ::FString::FormatAsNumber(&local_78,(int)lVar2);
    local_68._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x10);
    uVar5 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x18);
    local_68._8_8_ = uVar5;
    if (lVar2 == 0) {
      local_68._12_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_68._8_4_ = (undefined4)uVar5;
      local_68._12_4_ = (float)local_68._12_4_ * **(float **)((longlong)this + 0x10);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar11.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar7 = **(int **)((longlong)this + 0x28);
    iVar1 = **(int **)((longlong)this + 0x20);
    pFVar3 = (FCanvas *)**(undefined8 **)((longlong)this + 0x18);
    pFVar9 = GetStatRenderGlobals();
    iVar12 = 0;
    local_58.Size = iVar12;
    local_58.DataPtr = (wchar_t *)FVar11.Data;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      sVar10 = wcslen((wchar_t *)FVar11.Data);
      local_58.Size = (int)sVar10;
    }
    StringSize(pFVar9->StatFont,local_res8,local_res18,&local_58);
    pUVar4 = pFVar9->StatFont;
    local_58.DataPtr = (wchar_t *)FVar11.Data;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      sVar10 = wcslen((wchar_t *)FVar11.Data);
      iVar12 = (int)sVar10;
    }
    local_58.Size = iVar12;
    FCanvas::DrawShadowedString
              (pFVar3,(double)((pFVar9->InterColumnOffset - local_res8[0]) + iVar1),(double)iVar7,
               &local_58,pUVar4,(FLinearColor *)local_68,&FLinearColor::Black);
    local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148782600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
``FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  char cVar4;
  longlong lVar5;
  FDynamicRenderAssetInstanceManager *pFVar6;
  ForAnyElementType *pFVar7;
  FStreamingTextureLevelContext *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  atomic<unsigned_char> *paVar12;
  UPrimitiveComponent *local_res10;
  
  local_res10 = param_1;
  if ((**(char **)((longlong)this + 0x28) == '\0') || (param_1->field_0x1ab != '\0')) {
    cVar4 = *(char *)((longlong)this + 0x30);
    pFVar8 = *(FStreamingTextureLevelContext **)((longlong)this + 0x18);
    pFVar6 = *(FDynamicRenderAssetInstanceManager **)((longlong)this + 8);
    lVar5 = *(longlong *)this;
    if ((param_1 == (UPrimitiveComponent *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Primitive",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                            ,100,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    param_1->bAttachedToStreamingManagerAsStatic = '\0';
    if (param_1->bHandledByStreamingManagerAsDynamic == '\0') {
      if (cVar4 == '\0') {
        FDynamicRenderAssetInstanceManager::Add(pFVar6,param_1,pFVar8,0.0);
      }
      else {
        paVar12 = (atomic<unsigned_char> *)(lVar5 + 0xb8);
        LOCK();
        FVar2.State = *paVar12;
        if (FVar2.State == (atomic<unsigned_char>)0x0) {
          *paVar12 = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (FVar2.State != (atomic<unsigned_char>)0x0) {
          UE::FMutex::LockSlow((FMutex *)paVar12);
        }
        FDynamicRenderAssetInstanceManager::Add(pFVar6,param_1,pFVar8,0.0);
        LOCK();
        aVar3 = *paVar12;
        *paVar12 = (atomic<unsigned_char>)((char)*paVar12 + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)paVar12);
        }
      }
    }
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    return;
  }
  lVar5 = *(longlong *)this;
  cVar4 = *(char *)((longlong)this + 0x30);
  pFVar6 = *(FDynamicRenderAssetInstanceManager **)((longlong)this + 8);
  param_1->bAttachedToStreamingManagerAsStatic = '\x01';
  if (param_1->bHandledByStreamingManagerAsDynamic != '\0') {
    if (cVar4 == '\0') {
      FDynamicRenderAssetInstanceManager::Remove
                (pFVar6,param_1,
                 (TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
    }
    else {
      paVar12 = (atomic<unsigned_char> *)(lVar5 + 0xb8);
      LOCK();
      FVar2.State = *paVar12;
      if (FVar2.State == (atomic<unsigned_char>)0x0) {
        *paVar12 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar2.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)paVar12);
      }
      FDynamicRenderAssetInstanceManager::Remove
                (pFVar6,param_1,
                 (TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      LOCK();
      aVar3 = *paVar12;
      *paVar12 = (atomic<unsigned_char>)((char)*paVar12 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)paVar12);
      }
    }
    param_1->bHandledByStreamingManagerAsDynamic = '\0';
  }
  pFVar7 = *(ForAnyElementType **)((longlong)this + 0x10);
  if (((pFVar7->Data <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar11 = *(int *)&pFVar7[1].Data;
  piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar7,piVar1);
  }
  *(int *)&pFVar7[1].Data = iVar11 + 1;
  *(UPrimitiveComponent **)(pFVar7->Data + (longlong)iVar11 * 8) = local_res10;
  **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
  return;
}

// operator() @ 1487830c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall <lambda_27>::operator()(<lambda_27> *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  FTaskBase *this_00;
  undefined ***pppuVar6;
  FTaskBase *this_01;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  code *local_38;
  undefined **local_28;
  code *pcStack_20;
  FPipe *local_18;
  undefined ***local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), pTVar4 = CVarRayTracingStaticMeshesWPO.Ref, ::_TSS0 == -1)) {
    bVar5 = IsInParallelGameThread();
    if ((!bVar5) &&
       ((bVar5 = IsInGameThread(), !bVar5 &&
        (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    CachedRayTracingStaticMeshesWPO = pTVar4->ShadowedValue[0];
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarRayTracingStaticMeshesWPO.Ref;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (CachedRayTracingStaticMeshesWPO != pTVar4->ShadowedValue[0]) {
    this_01 = (FTaskBase *)0x0;
    local_10 = (undefined ***)0x0;
    local_28 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
    pcStack_20 = `<lambda_27>::operator()'::__l5::<lambda_1>::<lambda_invoker_cdecl>;
    local_38 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    CachedRayTracingStaticMeshesWPO = pTVar4->ShadowedValue[0];
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    if (this_00 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this_00,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_
      ;
      this_01 = this_00;
    }
    this_01[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    this_01[1]._padding_ =
         (longlong)UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call
    ;
    *(undefined ****)&this_01[1].StateChangeEvent = local_10;
    this_01[1]._padding_ = (longlong)local_28;
    *(code **)&this_01[1].RefCount = pcStack_20;
    this_01[1].Pipe = local_18;
    if (this_01[1]._padding_ != 0) {
      local_38 = (code *)0x0;
    }
    this_01[1].ExecutingThreadId = (atomic<unsigned_int>)0x1;
    UE::Tasks::Private::TranslatePriority(GameThread,local_res18,local_res10);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_res18[0],local_res10[0],None);
    if (this_01 != (FTaskBase *)0x0) {
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x130);
    if (local_38 != (code *)0x0) {
      pppuVar6 = &local_28;
      if (local_10 != (undefined ***)0x0) {
        pppuVar6 = local_10;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if (this_01 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1487841c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<class
   UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
                       *)&this[-1].DetailFilterMask,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1487841d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<class
   UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
                       *)&this[-1].DetailFilterMask,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{176}' @ 1487841e0

/* [thunk]:public: virtual void * __ptr64 __cdecl RenderAssetInstanceTask::FDoWorkAsyncTask::`vector
   deleting destructor'`adjustor{176}' (unsigned int) __ptr64 */

void * __thiscall
RenderAssetInstanceTask::FDoWorkAsyncTask::_vector_deleting_destructor__adjustor_176__
          (FDoWorkAsyncTask *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDoWorkAsyncTask *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1487841f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UActorTextureStreamingBuildDataComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UActorTextureStreamingBuildDataComponent::_vector_deleting_destructor__adjustor_40__
          (UActorTextureStreamingBuildDataComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UActorTextureStreamingBuildDataComponent *)&this[-1].field_0x98,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148784210

void * __thiscall
FAsyncTask<RenderAssetInstanceTask::FDoWorkTask>::_scalar_deleting_destructor_
          (FAsyncTask<RenderAssetInstanceTask::FDoWorkTask> *this,uint param_1)

{
  RenderAssetInstanceTask::FDoWorkTask::~FDoWorkTask(&this->Task);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784260

void * __thiscall
FAsyncTask<FRenderAssetStreamingMipCalcTask>::_scalar_deleting_destructor_
          (FAsyncTask<FRenderAssetStreamingMipCalcTask> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Task).PendingUpdateDirties.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Task).CancelationRequests.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Task).LoadRequests.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAsyncRenderAssetStreamingData::~FAsyncRenderAssetStreamingData(&(this->Task).StreamingData);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487842f0

void * __thiscall
FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask>::_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<FStaticMeshStreamIn_IO::FCancelIORequestsTask> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FStaticMeshStreamIn_IO *this_00;
  undefined8 *puVar3;
  
  this_00 = (this->Task).PendingUpdate.Reference;
  if (this_00 != (FStaticMeshStreamIn_IO *)0x0) {
    FRenderAssetUpdate::Release((FRenderAssetUpdate *)this_00);
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784370

void * __thiscall
FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask>::_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FRenderAssetUpdate *this_00;
  undefined8 *puVar3;
  
  this_00 = (this->Task).PendingUpdate.Reference;
  if (this_00 != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(this_00);
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487843f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784420

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784450

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784480

void * __thiscall
IBaseDelegateInstance<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487844b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy,TFunction<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy,TFunction<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy,`FStaticRenderAssetInstanceManager::FStaticRenderAssetInstanceManager'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487845a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy,`FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487845d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy,`FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784600

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRenderAssetStreamingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRenderAssetStreamingManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784630

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStreamableManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStreamableManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784660

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAbandonedRenderAssetUpdateManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAbandonedRenderAssetUpdateManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784690

void * __thiscall
TBaseSPMethodDelegateInstance<0,FStreamableHandle,1,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,FSoftObjectPath>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784700

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784730

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,FSoftObjectPath>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784780

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487847b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487847e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784810

void * __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds>::
_scalar_deleting_destructor_
          (TDoWorkTask<RenderAssetInstanceTask::FCreateViewWithUninitializedBounds> *this,
          uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDoWorkTask_VFCreateViewWithUninitializedBounds_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
  ;
  FCreateViewWithUninitializedBounds::~FCreateViewWithUninitializedBounds(&this->Work);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
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
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784890

void * __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor>::
_scalar_deleting_destructor_
          (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *this,uint param_1)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TDoWorkTask_VFNormalizeLightmapTexelFactor_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
  ;
  pFVar2 = (this->Work).State.Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784920

void * __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshFull>::
_scalar_deleting_destructor_(TDoWorkTask<RenderAssetInstanceTask::FRefreshFull> *this,uint param_1)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ =
       (longlong)
       &___7__TDoWorkTask_VFRefreshFull_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_;
  pFVar2 = (this->Work).State.Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->Work).SkippedIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Work);
  pvVar6 = *(void **)&(this->Work).OnWorkDoneDelegate.field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Work);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487849f0

void * __thiscall
RenderAssetInstanceTask::TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility>::
_scalar_deleting_destructor_
          (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *this,uint param_1)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ =
       (longlong)
       &___7__TDoWorkTask_VFRefreshVisibility_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
  ;
  pFVar2 = (this->Work).State.Reference;
  if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Work);
  pvVar5 = *(void **)&(this->Work).OnWorkDoneDelegate.field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Work);
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784ab0

void * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ErrorDetail).MissingObject.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorDetail).RequestedPackageName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784b10

void * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->ErrorDetail).RequestedAssets.AllocatorInstance.Data,
             (this->ErrorDetail).RequestedAssets.ArrayNum);
  pFVar1 = (this->ErrorDetail).RequestedAssets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorDetail).DebugName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::FStaticMeshStreamIn_IO'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCancelIO'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCancelIO'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::`38'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`38'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`15'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::SetIORequest'::__l15::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::SetIORequest'::`15'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l1::<lambda_29_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::`1'::<lambda_29_>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoCreateBuffers'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoInitiateIO'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamIn_IO::DoSerializeLODData'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__Start_FDownloadContext_Private_StreamableManager_UE__QEAAXAEBV__TSharedRef_UFStreamableHandle___00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`38'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148784fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`15'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__1__Start_FDownloadContext_Private_StreamableManager_UE__QEAAXAEBV__TSharedRef_UFStreamableHandle___00___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`17'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487850c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`45'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`17'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`45'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785180

void * __thiscall
TGraphTask<FRenderAssetUpdateTickGTTask>::_scalar_deleting_destructor_
          (TGraphTask<FRenderAssetUpdateTickGTTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487851e0

void * __thiscall
TGraphTask<FUpdateStreamingRenderAssetsTask>::_scalar_deleting_destructor_
          (TGraphTask<FUpdateStreamingRenderAssetsTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785240

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStreamableHandle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FStreamableHandle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785280

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStereoLayerAdditionalFlagsManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStereoLayerAdditionalFlagsManager,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487852c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRenderTextureDeprecationPass>::_scalar_deleting_destructor_
          (TObject<FRenderTextureDeprecationPass> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487852f0

void * __thiscall
TRDGLambdaPass<FRenderTextureDeprecationPass,`IStereoRendering::RenderTexture_RenderThread'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785350

void * __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::_scalar_deleting_destructor_
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487853d0

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
AServerStreamingLevelsVisibility::_scalar_deleting_destructor_
          (AServerStreamingLevelsVisibility *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AServerStreamingLevelsVisibility__6B_;
  *(undefined4 *)&(this->ServerVisibleStreamingLevels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ServerVisibleStreamingLevels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ServerVisibleStreamingLevels);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785470

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
AStaticMeshActor::_scalar_deleting_destructor_(AStaticMeshActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AStaticMeshActor__6B_;
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

// `scalar_deleting_destructor' @ 1487854d0

void * __thiscall
FConstantRateSeekTable::_scalar_deleting_destructor_(FConstantRateSeekTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Table).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785520

void * __thiscall
RenderAssetInstanceTask::FDoWorkAsyncTask::_scalar_deleting_destructor_
          (FDoWorkAsyncTask *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)&this->field_0xb0 = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0xb8 != 0) {
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
  FDoWorkTask::~FDoWorkTask((FDoWorkTask *)&this->field_0x70);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487855b0

void * __thiscall
FDynamicRenderAssetInstanceManager::_scalar_deleting_destructor_
          (FDynamicRenderAssetInstanceManager *this,uint param_1)

{
  ~FDynamicRenderAssetInstanceManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487855f0

void * __thiscall
FStaticMeshSceneProxy::FLODInfo::_scalar_deleting_destructor_(FLODInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> FVar2;
  
  pFVar1 = (this->IrrelevantLights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->OverrideColorVFUniformBuffer !=
      (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->OverrideColorVFUniformBuffer);
  }
  FVar2 = (this->Sections).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FLightCacheInterface__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
FLevelRenderAssetManager::_scalar_deleting_destructor_(FLevelRenderAssetManager *this,uint param_1)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FRenderAssetInstanceView *pFVar4;
  
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TextureGuidToLevelIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureGuidToLevelIndex);
  pFVar3 = (this->PendingComponents).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->UnprocessedComponents).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->StaticInstances)._padding_ = (longlong)&___7FStaticRenderAssetInstanceManager__6B_;
  FStaticRenderAssetInstanceManager::FTasks::SyncResults(&(this->StaticInstances).StateSync.Tasks);
  pFVar4 = (this->StaticInstances).AsyncView.Reference;
  if (pFVar4 != (FRenderAssetInstanceView *)0x0) {
    plVar1 = &pFVar4->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>::
  ~FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>
            (&(this->StaticInstances).StateSync);
  (this->StaticInstances)._padding_ = (longlong)&___7IRenderAssetInstanceManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785740

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
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
       &ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FTracedTask,int>
            (*(FTracedTask_conflict **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
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

// `scalar_deleting_destructor' @ 148785850

void * __thiscall
FRenderAssetUpdate::_scalar_deleting_destructor_(FRenderAssetUpdate *this,uint param_1)

{
  ~FRenderAssetUpdate(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785890

void * __thiscall
FStaticMeshSceneProxy::_scalar_deleting_destructor_(FStaticMeshSceneProxy *this,uint param_1)

{
  ~FStaticMeshSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1487858d0

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
FStaticMeshSceneProxyDesc::_scalar_deleting_destructor_
          (FStaticMeshSceneProxyDesc *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
  pFVar1 = (this->MaterialCacheTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785940

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
FStaticMeshStaticLightingMesh::_scalar_deleting_destructor_
          (FStaticMeshStaticLightingMesh *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (this[-1].StaticMesh != (UStaticMesh *)0x0) {
    FMemory::Free(this[-1].StaticMesh);
  }
  FStaticLightingMesh::~FStaticLightingMesh((FStaticLightingMesh *)&this[-1].StaticMesh);
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
    ::operator_delete(&this[-1].field_0x18,0x250);
  }
  return &this[-1].field_0x18;
}

// `scalar_deleting_destructor' @ 1487859f0

void * __thiscall
FStaticMeshStaticLightingTextureMapping::_scalar_deleting_destructor_
          (FStaticMeshStaticLightingTextureMapping *this,uint param_1)

{
  *(undefined ***)&this[-1].field_0x10 =
       &FStaticLightingMapping::_vftable__for__FStaticLightingMapping__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x18 + 4) + -0x40 + (longlong)this) =
       &FStaticLightingMapping::_vftable__for__FRefCountedObject__;
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x10,0x58);
  }
  return &this[-1].field_0x10;
}

// `scalar_deleting_destructor' @ 148785a40

void * __thiscall
FStaticMeshStreamIn::_scalar_deleting_destructor_(FStaticMeshStreamIn *this,uint param_1)

{
  ~FStaticMeshStreamIn(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x730);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785a80

void * __thiscall
FStaticMeshStreamIn_IO::_scalar_deleting_destructor_(FStaticMeshStreamIn_IO *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this = &___7FStaticMeshStreamIn_IO__6B_;
  this_00 = (this->BulkData).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if (this->BulkDataRequest != (FBulkDataBatchRequest)0x0) {
    (**(code **)(*(longlong *)this->BulkDataRequest + 0x10))();
  }
  FStaticMeshStreamIn::~FStaticMeshStreamIn((FStaticMeshStreamIn *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x750);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785b20

void * __thiscall
FStaticMeshStreamOut::_scalar_deleting_destructor_(FStaticMeshStreamOut *this,uint param_1)

{
  FStaticMeshUpdate::~FStaticMeshUpdate((FStaticMeshUpdate *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785b60

void * __thiscall
FStaticMeshUpdate::_scalar_deleting_destructor_(FStaticMeshUpdate *this,uint param_1)

{
  ~FStaticMeshUpdate(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785ba0

void * __thiscall
FStaticRenderAssetInstanceManager::_scalar_deleting_destructor_
          (FStaticRenderAssetInstanceManager *this,uint param_1)

{
  longlong *plVar1;
  FRenderAssetInstanceView *pFVar2;
  
  this->_padding_ = (longlong)&___7FStaticRenderAssetInstanceManager__6B_;
  FTasks::SyncResults(&(this->StateSync).Tasks);
  pFVar2 = (this->AsyncView).Reference;
  if (pFVar2 != (FRenderAssetInstanceView *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>::
  ~FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>(&this->StateSync);
  this->_padding_ = (longlong)&___7IRenderAssetInstanceManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785c20

void * __thiscall
FStreamableDelegateDelayHelper::_scalar_deleting_destructor_
          (FStreamableDelegateDelayHelper *this,uint param_1)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  *(undefined4 *)&(this->PendingDelegatesByHandle).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingDelegatesByHandle).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FStreamableHandle,1>,FStreamableDelegateDelayHelper::FPendingDelegateList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingDelegatesByHandle);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785c90

void * __thiscall
FStreamableManager::_scalar_deleting_destructor_(FStreamableManager *this,uint param_1)

{
  ~FStreamableManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785cd0

void * __thiscall
FVariableRateSeekTable::_scalar_deleting_destructor_(FVariableRateSeekTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Times).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Offsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785d30

void * __thiscall
IRenderAssetInstanceManager::_scalar_deleting_destructor_
          (IRenderAssetInstanceManager *this,uint param_1)

{
  *this = (IRenderAssetInstanceManager)&___7IRenderAssetInstanceManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785d70

void * __thiscall
IRenderAssetStreamingManager::_scalar_deleting_destructor_
          (IRenderAssetStreamingManager *this,uint param_1)

{
  *(undefined ***)this = &___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785db0

void * __thiscall
FStreamedAudioChunkSeekTable::ISeekTableImpl::_scalar_deleting_destructor_
          (ISeekTableImpl *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785de0

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
UActorTextureStreamingBuildDataComponent::_scalar_deleting_destructor_
          (UActorTextureStreamingBuildDataComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785e60

void * __thiscall
UStaticMeshDescriptionBulkData::_scalar_deleting_destructor_
          (UStaticMeshDescriptionBulkData *this,uint param_1)

{
  *(undefined ***)this = &___7UStaticMeshDescriptionBulkData__6B_;
  UMeshDescriptionBaseBulkData::~UMeshDescriptionBaseBulkData((UMeshDescriptionBaseBulkData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148785ec0

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
UStreamableRenderAsset::_scalar_deleting_destructor_(UStreamableRenderAsset *this,uint param_1)

{
  void *pvVar1;
  FRenderAssetUpdate *this_00;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UStreamableRenderAsset__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NoRefStreamingLODBias).PerQuality.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NoRefStreamingLODBias).PerQuality);
  pvVar1 = (void *)(this->NoRefStreamingLODBias)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this_00 = (this->PendingUpdate).Reference;
  if (this_00 != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(this_00);
  }
  DestructItems<UStreamableRenderAsset::FLODStreamingCallbackPayload,int>
            ((FLODStreamingCallbackPayload *)(this->MipChangeCallbacks).AllocatorInstance.Data,
             (this->MipChangeCallbacks).ArrayNum);
  pFVar2 = (this->MipChangeCallbacks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// CheckRayTracingGeometryInitializer @ 14878c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __cdecl
CheckRayTracingGeometryInitializer
          (FStaticMeshLODResources *param_1,ERayTracingGeometryInitializerType param_2,
          FRayTracingGeometryInitializer *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_c8 [32];
  FRayTracingGeometryInitializer local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.bFastBuild = false;
  local_a8.bAllowUpdate = false;
  local_a8.bAllowCompaction = true;
  local_a8.bTemplate = false;
  local_a8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_a8.IndexBufferOffset = 0;
  local_a8.GeometryType = RTGT_Triangles;
  local_a8.TotalPrimitiveCount = 0;
  local_a8.Type = Rendering;
  local_a8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Segments.ArrayNum = 0;
  local_a8.Segments.ArrayMax = 0;
  local_a8.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_a8.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_a8.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_a8.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_a8.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_a8.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_a8.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_a8.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_a8.DebugName);
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.OwnerName.Number = 0;
  FStaticMeshLODResources::SetupRayTracingGeometryInitializer
            (param_1,&local_a8,&param_3->DebugName,&param_3->OwnerName);
  local_a8.Type = param_2;
  bVar2 = operator==(&local_a8,param_3);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("TmpInitializer == Initializer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_a8.Segments.AllocatorInstance.Data,
             local_a8.Segments.ArrayNum);
  if ((FRayTracingGeometrySegment *)local_a8.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_a8.Segments.AllocatorInstance.Data);
  }
  if (local_a8.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8.IndexBuffer.Reference);
  }
  return;
}

// DeltaDecode @ 148791c00

void __cdecl
StreamedAudioChunkSeekTable_Private::DeltaDecode
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,uint param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar6 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < (int)uVar6) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar6 - iVar5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4,0,
           (longlong)(int)(uVar6 - iVar5) << 2);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar5) {
      uVar9 = iVar5 - uVar6;
      if (((int)(uVar9 | uVar6) < 0) &&
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
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4;
        iVar5 = (*piVar1 - uVar6) - uVar9;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar9 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar6 < iVar5) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_3 = param_3 + *(ushort *)((param_1->AllocatorInstance).Data + lVar7);
      uVar9 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 2;
      *(uint *)((param_2->AllocatorInstance).Data + lVar8) = param_3;
      lVar8 = lVar8 + 4;
      iVar5 = param_1->ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// DeltaEncode @ 148791e20

void __cdecl
StreamedAudioChunkSeekTable_Private::DeltaEncode
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = param_1->ArrayNum;
  if (0 < (int)uVar9) {
    iVar6 = param_2->ArrayNum;
    piVar1 = &param_2->ArrayNum;
    if (iVar6 < (int)uVar9) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar9 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar5 * 2,0,
             (longlong)(int)(uVar9 - iVar6) * 2);
    }
    else if ((int)uVar9 < iVar6) {
      uVar8 = iVar6 - uVar9;
      if (((int)(uVar8 | uVar9) < 0) &&
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
      if (uVar8 != 0) {
        pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 2;
        iVar6 = (*piVar1 - uVar9) - uVar8;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar8 * 2,(longlong)iVar6 * 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
    iVar6 = param_1->ArrayNum;
    uVar9 = 1;
    if (1 < iVar6) {
      lVar10 = 1;
      do {
        uVar8 = 0;
        if ((int)uVar9 < iVar6) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)(uVar9 - 1) < param_1->ArrayNum) {
          uVar8 = -uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(int *)(pFVar2 + lVar10 * 4) -
                *(int *)((param_1->AllocatorInstance).Data + lVar10 * 4 + -4);
        if (((uVar8 != (uVar8 & 0xffff)) || ((int)uVar8 < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar9 < *piVar1) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(short *)((param_2->AllocatorInstance).Data + lVar10 * 2) = (short)uVar8;
        lVar10 = lVar10 + 1;
        iVar6 = param_1->ArrayNum;
      } while ((int)uVar9 < iVar6);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorTextureStreamingBuildDataComponent @ 1487969c0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorTextureStreamingBuildDataComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeServerStreamingLevelsVisibility @ 1487969d0

void __cdecl EmptyLinkFunctionForGeneratedCodeServerStreamingLevelsVisibility(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStaticMeshActor @ 1487969e0

void __cdecl EmptyLinkFunctionForGeneratedCodeStaticMeshActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStaticMeshSourceData @ 1487969f0

void __cdecl EmptyLinkFunctionForGeneratedCodeStaticMeshSourceData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamableRenderAsset @ 148796a00

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamableRenderAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamedAudioChunkSeekTable @ 148796a10

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamedAudioChunkSeekTable(void)

{
  return;
}

// GatherComponentsFromView @ 14879a5d0

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
GatherComponentsFromView
          (UStreamableRenderAsset *param_1,FRenderAssetInstanceView *param_2,
          TFunction<bool___cdecl(UPrimitiveComponent_const_*)> *param_3,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FElement *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  UPrimitiveComponent *local_res10;
  UPrimitiveComponent *local_28;
  FRenderAssetLinkConstIterator local_20;
  
  if (param_2 != (FRenderAssetInstanceView *)0x0) {
    FRenderAssetInstanceView::FRenderAssetLinkConstIterator::FRenderAssetLinkConstIterator
              (&local_20,param_2,param_1);
    while (local_20.CurrElementIndex != -1) {
      pFVar6 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
               operator[](&(local_20.State)->Elements,local_20.CurrElementIndex);
      local_28 = pFVar6->Component;
      if (local_28 != (UPrimitiveComponent *)0x0) {
        local_res10 = local_28;
        UE::Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar1 = *(code **)param_3;
        plVar8 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar8 = (longlong *)&param_3->field_0x10;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar3 = (*pcVar1)(uVar7,&local_res10);
        if (cVar3 != '\0') {
          pFVar2 = (param_4->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
              ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)param_4->ArrayMax * 8)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = param_4->ArrayNum;
          if (iVar5 == param_4->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar5 + 1;
          *(UPrimitiveComponent **)((param_4->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               local_28;
        }
      }
      pFVar6 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
               operator[](&(local_20.State)->Elements,local_20.CurrElementIndex);
      local_20.CurrElementIndex = pFVar6->NextRenderAssetLink;
    }
  }
  return;
}

// GetStatRenderGlobals @ 1487a4760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStatRenderGlobals * __cdecl GetStatRenderGlobals(void)

{
  code *pcVar1;
  bool bVar2;
  FStatRenderGlobals *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StatsRender2.cpp"
                       ,0x114,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStatRenderGlobals *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (GEngine == (UEngine *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StatsRender2.cpp"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStatRenderGlobals *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      Singleton.GroupColor = FLinearColor::White;
      Singleton.StatFont = UEngine::GetSmallFont();
      Singleton.bNeedRefresh = true;
      _Init_thread_footer(&_TSS0);
    }
  }
  return &Singleton;
}

// GetStaticLightingVertex @ 1487a4a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GetStaticLightingVertex
          (FPositionVertexBuffer *param_1,FStaticMeshVertexBuffer *param_2,uint param_3,
          TMatrix<double> *param_4,TMatrix<double> *param_5,FStaticLightingVertex *param_6)

{
  ushort *puVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FStaticLightingVertex *pFVar10;
  bool bVar11;
  TVector4<float> *pTVar12;
  TVector<float> *pTVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uchar *puVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  double dVar25;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  TVector<float> local_a8;
  TVector4<float> local_98 [6];
  
  pFVar10 = param_6;
  dVar25 = __real_3ff0000000000000;
  dVar19 = param_4->M[0][1];
  uVar16 = (ulonglong)(param_3 * param_1->Stride);
  puVar3 = param_1->Data;
  uVar17 = (ulonglong)param_3;
  dVar5 = (double)*(float *)(puVar3 + uVar16);
  dVar6 = param_4->M[1][1];
  auVar23._0_8_ = (double)*(float *)(puVar3 + uVar16 + 4);
  dVar30 = (double)*(float *)(puVar3 + uVar16 + 8);
  auVar23._8_4_ = SUB84(auVar23._0_8_,0);
  auVar23._12_4_ = (int)((ulonglong)auVar23._0_8_ >> 0x20);
  dVar28 = param_4->M[2][1];
  dVar31 = param_4->M[3][1];
  auVar20._8_4_ = SUB84(__real_3ff0000000000000,0);
  auVar20._0_8_ = __real_3ff0000000000000;
  auVar20._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar29 = param_4->M[1][2];
  dVar7 = param_4->M[0][2];
  dVar8 = param_4->M[2][2];
  dVar9 = param_4->M[3][2];
  (param_6->WorldPosition).field0_0x0._s_0.X =
       param_4->M[0][0] * dVar5 + auVar23._0_8_ * param_4->M[1][0] + param_4->M[2][0] * dVar30 +
       __real_3ff0000000000000 * param_4->M[3][0];
  (param_6->WorldPosition).field0_0x0._s_0.Y =
       dVar19 * dVar5 + auVar23._8_8_ * dVar6 + dVar28 * dVar30 + auVar20._8_8_ * dVar31;
  (param_6->WorldPosition).field0_0x0._s_0.Z =
       auVar23._0_8_ * dVar29 + dVar7 * dVar5 + dVar8 * dVar30 + dVar25 * dVar9;
  pTVar12 = FStaticMeshVertexBuffer::VertexTangentX(param_2,local_98,param_3);
  dVar6 = __real_3e45798ee0000000;
  dVar31 = (double)(pTVar12->field0_0x0)._s_0.X;
  auVar21._0_8_ = (double)(pTVar12->field0_0x0)._s_0.Y;
  dVar28 = (double)(pTVar12->field0_0x0)._s_0.Z;
  auVar21._8_4_ = SUB84(auVar21._0_8_,0);
  auVar21._12_4_ = (int)((ulonglong)auVar21._0_8_ >> 0x20);
  dVar5 = param_4->M[0][0] * dVar31 + auVar21._0_8_ * param_4->M[1][0] + param_4->M[2][0] * dVar28 +
          param_4->M[3][0] * 0.0;
  dVar19 = param_4->M[0][1] * dVar31 + auVar21._8_8_ * param_4->M[1][1] + param_4->M[2][1] * dVar28
           + param_4->M[3][1] * 0.0;
  dVar28 = auVar21._0_8_ * param_4->M[1][2] + param_4->M[0][2] * dVar31 + param_4->M[2][2] * dVar28
           + param_4->M[3][2] * 0.0;
  dVar31 = dVar19 * dVar19 + dVar5 * dVar5 + dVar28 * dVar28;
  if (dVar31 <= __real_3e45798ee0000000) {
    dVar19 = 0.0;
    dVar28 = 0.0;
    dVar31 = 0.0;
  }
  else {
    dVar31 = dVar25 / SQRT(dVar31);
    dVar19 = dVar31 * dVar19;
    dVar28 = dVar31 * dVar28;
    dVar31 = dVar31 * dVar5;
  }
  (param_6->WorldTangentX).field0_0x0._s_0.X = dVar31;
  (param_6->WorldTangentX).field0_0x0._s_0.Y = dVar19;
  (param_6->WorldTangentX).field0_0x0._s_0.Z = dVar28;
  pTVar13 = FStaticMeshVertexBuffer::VertexTangentY(param_2,&local_a8,param_3);
  dVar31 = (double)(pTVar13->field0_0x0)._s_0.X;
  dVar28 = (double)(pTVar13->field0_0x0)._s_0.Y;
  dVar29 = (double)(pTVar13->field0_0x0)._s_0.Z;
  dVar5 = dVar28 * param_4->M[1][0] + dVar31 * param_4->M[0][0] + param_4->M[2][0] * dVar29 +
          param_4->M[3][0] * 0.0;
  dVar19 = dVar28 * param_4->M[1][1] + dVar31 * param_4->M[0][1] + param_4->M[2][1] * dVar29 +
           param_4->M[3][1] * 0.0;
  dVar31 = dVar31 * param_4->M[0][2] + param_4->M[1][2] * dVar28 + dVar29 * param_4->M[2][2] +
           param_4->M[3][2] * 0.0;
  dVar28 = dVar19 * dVar19 + dVar5 * dVar5 + dVar31 * dVar31;
  if (dVar28 <= dVar6) {
    dVar19 = 0.0;
    auVar22 = ZEXT816(0);
    dVar28 = 0.0;
  }
  else {
    dVar28 = dVar25 / SQRT(dVar28);
    dVar19 = dVar28 * dVar19;
    auVar22._0_8_ = dVar28 * dVar31;
    auVar22._8_8_ = 0;
    dVar28 = dVar28 * dVar5;
  }
  (param_6->WorldTangentY).field0_0x0._s_0.X = dVar28;
  (param_6->WorldTangentY).field0_0x0._s_0.Y = dVar19;
  (param_6->WorldTangentY).field0_0x0._s_0.Z = auVar22._0_8_;
  puVar3 = param_2->TangentsDataPtr;
  if (param_2->bUseHighPrecisionTangentBasis == false) {
    puVar18 = puVar3 + uVar17 * 8;
    lVar14 = (**(code **)((longlong)*param_2->TangentsData + 0x50))();
    if ((puVar3 + lVar14 < puVar18 + 8) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x104,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((puVar18 < param_2->TangentsDataPtr) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x105,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    auVar23 = pmovsxbd(auVar22,*(undefined4 *)(puVar18 + 4));
    fVar24 = (float)auVar23._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar26 = (float)auVar23._4_4_ * _UNK_151040074;
    fVar27 = (float)auVar23._8_4_ * _UNK_151040078;
  }
  else {
    puVar18 = puVar3 + uVar17 * 0x10;
    lVar14 = (**(code **)((longlong)*param_2->TangentsData + 0x50))();
    if ((puVar3 + lVar14 < puVar18 + 0x10) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x104,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((puVar18 < param_2->TangentsDataPtr) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x105,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    auVar23 = pmovsxwd(auVar22,*(undefined8 *)(puVar18 + 8));
    fVar24 = (float)auVar23._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar26 = (float)auVar23._4_4_ * _UNK_150d565e4;
    fVar27 = (float)auVar23._8_4_ * _UNK_150d565e8;
  }
  dVar31 = (double)fVar26;
  dVar29 = (double)fVar24;
  dVar28 = (double)fVar27;
  dVar5 = dVar31 * param_5->M[1][0] + dVar29 * param_5->M[0][0] + param_5->M[2][0] * dVar28 +
          param_5->M[3][0] * 0.0;
  dVar19 = dVar31 * param_5->M[1][1] + dVar29 * param_5->M[0][1] + param_5->M[2][1] * dVar28 +
           param_5->M[3][1] * 0.0;
  dVar28 = param_5->M[1][2] * dVar31 + param_5->M[0][2] * dVar29 + param_5->M[2][2] * dVar28 +
           param_5->M[3][2] * 0.0;
  dVar31 = dVar19 * dVar19 + dVar5 * dVar5 + dVar28 * dVar28;
  if (dVar31 <= dVar6) {
    dVar19 = 0.0;
    dVar28 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar25 = dVar25 / SQRT(dVar31);
    dVar19 = dVar19 * dVar25;
    dVar28 = dVar28 * dVar25;
    dVar5 = dVar5 * dVar25;
  }
  (param_6->WorldTangentZ).field0_0x0._s_0.X = dVar5;
  uVar16 = 0;
  (param_6->WorldTangentZ).field0_0x0._s_0.Y = dVar19;
  (param_6->WorldTangentZ).field0_0x0._s_0.Z = dVar28;
  uVar2 = param_2->NumTexCoords;
  if (uVar2 != 0) {
    do {
      puVar3 = param_2->TexcoordDataPtr;
      lVar14 = uVar2 * uVar17 + uVar16;
      if (param_2->bUseFullPrecisionUVs == false) {
        puVar1 = (ushort *)(puVar3 + lVar14 * 4);
        lVar14 = (**(code **)((longlong)*param_2->TexcoordData + 0x50))();
        if ((puVar3 + lVar14 < puVar1 + 2) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x17b,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((puVar1 < param_2->TexcoordDataPtr) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x17c,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_6._0_4_ = FGenericPlatformMath::LoadHalf(puVar1);
        param_6._4_4_ = FGenericPlatformMath::LoadHalf(puVar1 + 1);
      }
      else {
        puVar18 = puVar3 + lVar14 * 8;
        lVar14 = (**(code **)((longlong)*param_2->TexcoordData + 0x50))();
        if ((puVar3 + lVar14 < puVar18 + 8) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x17b,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((puVar18 < param_2->TexcoordDataPtr) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x17c,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_6._0_4_ = (float)*(undefined8 *)puVar18;
        param_6._4_4_ = (float)((ulonglong)*(undefined8 *)puVar18 >> 0x20);
      }
      uVar15 = (int)uVar16 + 1;
      pFVar10->TextureCoordinates[uVar16].field0_0x0._s_0.X = (double)param_6._0_4_;
      pFVar10->TextureCoordinates[uVar16].field0_0x0._s_0.Y = (double)param_6._4_4_;
      uVar2 = param_2->NumTexCoords;
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < uVar2);
  }
  return;
}

// GetStaticMeshComponentBoostPSOPrecachePriority @ 1487a5170

EPSOPrecachePriority __cdecl GetStaticMeshComponentBoostPSOPrecachePriority(void)

{
  return GStaticMeshComponentBoostPSOPrecachePri + High;
}

// GetStaticMeshRayTracingWPOConfig @ 1487a5190

void __cdecl GetStaticMeshRayTracingWPOConfig(bool *param_1,bool *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pTVar1 = CVarRayTracingStaticMeshesWPO.Ref;
  bVar2 = IsInParallelGameThread();
  lVar4 = 4;
  if (bVar2) {
LAB_1487a51cc:
    lVar3 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_1487a51cc;
    lVar3 = 4;
  }
  *param_1 = *(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0;
  pTVar1 = CVarRayTracingStaticMeshesWPO.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) goto LAB_1487a51f2;
  }
  lVar4 = 0;
LAB_1487a51f2:
  *param_2 = *(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1;
  return;
}

// IsAssetStreamingSuspended @ 1487aebd0

bool __cdecl IsAssetStreamingSuspended(void)

{
  return 0 < (int)GRenderAssetStreamingSuspension;
}

// LexFromString @ 1487afa50

void __cdecl LexFromString(EStatFontTypes *param_1,wchar_t *param_2)

{
  int iVar1;
  
  *param_1 = Small;
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Tiny");
  if (iVar1 == 0) {
    *param_1 = Tiny;
  }
  return;
}

// RenderArrayOfGpuStats @ 1487bb210

void __cdecl
RenderArrayOfGpuStats
          (FCanvas *param_1,int param_2,int *param_3,
          TMap<FName,FGpuStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>_>
          *param_4,FGameThreadStatsData *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  TConsoleVariableData<int> *pTVar9;
  TMap<FName,FGpuStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>_>
  *pTVar10;
  bool bVar11;
  FStatRenderGlobals *pFVar12;
  longlong lVar13;
  TStatMessage<EComplexStatField> *pTVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  FCanvas *local_res8;
  int local_res10 [2];
  undefined1 local_res18 [8];
  int local_res20 [2];
  uint local_148;
  int local_144;
  FTexture **local_140;
  FCanvas **local_138;
  int *local_130;
  int *local_128;
  FStatRenderGlobals *local_120;
  uint *local_118;
  int local_110;
  FTexture *local_108;
  TMap<FName,FGpuStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,FGpuStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined4 local_84;
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  pFVar12 = GetStatRenderGlobals();
  pTVar9 = CVarNumStatsPerGroup.Ref;
  local_140 = &local_108;
  iVar16 = 0;
  local_138 = &local_res8;
  local_108 = GWhiteTexture;
  local_130 = local_res10;
  local_118 = &local_148;
  local_148 = 0;
  local_128 = param_3;
  local_120 = pFVar12;
  bVar11 = IsInParallelGameThread();
  if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_144 = pTVar9->ShadowedValue[0];
  local_f0 = &param_4->field_0x10;
  iVar3 = *(int *)&param_4->field_0x28;
  uStack_f4 = 1;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&param_4->field_0x20;
    if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)local_f0;
    }
    uVar15 = *puVar19;
    local_e0 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      local_e0 = local_e0 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1487bb35d;
      uVar15 = puVar19[lVar13 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_110 = (int)lVar13;
    iStack_e4 = local_110 + -1 + local_e0;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_1487bb35d:
  uVar15 = *(uint *)&param_4->field_0x28;
  uStack_dc = local_84;
  iStack_d8 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  uStack_e8 = 0xffffffff;
  uVar20 = uVar15 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iVar16);
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = local_84;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_4;
  iStack_f8 = iVar16;
  local_d0 = param_4;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar8 = __real_3ecccccd;
  fVar7 = __real_3f800000;
  uVar4 = *(uint *)&param_4->field_0x28;
  if (uVar15 != uVar4) {
    puVar18 = *(undefined1 **)&param_4->field_0x20;
    if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
      puVar18 = &param_4->field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar17;
      uVar20 = uVar20 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1487bb46f;
      uVar15 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar20;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_1487bb46f:
  do {
    pTVar10 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FGpuStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar13 = (longlong)TStack_c8.CurrentBitIndex;
    if ((((TStack_c8.CurrentBitIndex == uVar15) &&
         (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_4->field_0x10)) &&
        (pTVar10 == param_4)) || (lVar5 = *(longlong *)pTVar10, local_144 <= (int)local_148)) {
LAB_1487bb6dd:
      iVar16 = local_144;
      if (local_144 < *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34) {
        `RenderArrayOfGpuStats'::__l2::<lambda_1>::operator()(&local_140);
        iVar16 = RenderMoreStatsLine(local_res8,local_res10[0],*param_3,
                                     (*(int *)&param_4->field_0x8 - iVar16) -
                                     *(int *)&param_4->field_0x34);
        *param_3 = *param_3 + iVar16;
      }
      return;
    }
    if (*local_140 != (FTexture *)0x0) {
      FCanvas::DrawTile(*local_138,(double)*local_130,
                        (double)(GStatFonts[(int)local_120->StatFontType].FontHeightOffset +
                                *local_128),
                        (double)((local_120->InterColumnOffset +
                                 local_120->InterColumnOffsetNarrow * 2) * 3 +
                                local_120->AfterNameColumnOffsetNarrow),
                        (double)local_120->StatFontHeight,0.0,0.0,fVar7,fVar7,
                        local_120->BackgroundColors + (*local_118 & 1),*local_140,true);
    }
    pTVar14 = *(TStatMessage<EComplexStatField> **)(lVar5 + 8 + lVar13 * 0x28);
    plVar1 = (longlong *)(lVar5 + 0x10 + lVar13 * 0x28);
    local_res20[0] = local_res10[0];
    if (((pTVar14 != (TStatMessage<EComplexStatField> *)0x0) ||
        (pTVar14 = (TStatMessage<EComplexStatField> *)*plVar1,
        pTVar14 != (TStatMessage<EComplexStatField> *)0x0)) ||
       (pTVar14 = *(TStatMessage<EComplexStatField> **)(lVar5 + 0x18 + lVar13 * 0x28),
       pTVar14 != (TStatMessage<EComplexStatField> *)0x0)) {
      RenderCounterLabel(pTVar14,local_res8,local_res10[0],*param_3);
      local_res20[0] = pFVar12->AfterNameColumnOffsetNarrow + local_res20[0];
      pTVar14 = *(TStatMessage<EComplexStatField> **)(lVar5 + 8 + lVar13 * 0x28);
      if (pTVar14 == (TStatMessage<EComplexStatField> *)0x0) {
        local_res20[0] = local_res20[0] + pFVar12->InterColumnOffsetNarrow * 3;
      }
      else {
        RenderCounterValues(pTVar14,local_res8,local_res20,*param_3,pFVar12->InterColumnOffsetNarrow
                            ,fVar8);
      }
      iVar16 = pFVar12->InterColumnOffsetNarrow;
      local_res20[0] = (pFVar12->InterColumnOffset - iVar16) + local_res20[0];
      pTVar14 = (TStatMessage<EComplexStatField> *)*plVar1;
      if (pTVar14 == (TStatMessage<EComplexStatField> *)0x0) {
        local_res20[0] = local_res20[0] + iVar16 * 3;
      }
      else {
        RenderCounterValues(pTVar14,local_res8,local_res20,*param_3,iVar16,fVar8);
      }
      iVar16 = pFVar12->InterColumnOffsetNarrow;
      local_res20[0] = pFVar12->InterColumnOffset + (local_res20[0] - iVar16);
      pTVar14 = *(TStatMessage<EComplexStatField> **)(lVar5 + 0x18 + lVar13 * 0x28);
      if (pTVar14 == (TStatMessage<EComplexStatField> *)0x0) {
        local_res20[0] = local_res20[0] + iVar16 * 3;
      }
      else {
        RenderCounterValues(pTVar14,local_res8,local_res20,*param_3,iVar16,fVar8);
      }
      local_res20[0] =
           local_res20[0] + (pFVar12->InterColumnOffset - pFVar12->InterColumnOffsetNarrow);
      *param_3 = *param_3 + pFVar12->StatFontHeight;
    }
    if ((pFVar12->SizeXY).field0_0x0._s_0.Y + pFVar12->StatFontHeight < *param_3)
    goto LAB_1487bb6dd;
    local_148 = local_148 + 1;
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// RenderCounter @ 1487bb750

int __cdecl
RenderCounter(FGameThreadStatsData *param_1,TStatMessage<EComplexStatField> *param_2,
             FCanvas *param_3,int param_4,int param_5,float param_6,bool param_7)

{
  int iVar1;
  FStatRenderGlobals *pFVar2;
  int local_res10 [2];
  undefined4 local_68 [2];
  int local_60 [2];
  FCanvas *local_58;
  TStatMessage<EComplexStatField> *local_50;
  FStatRenderGlobals *local_48;
  undefined4 *local_40;
  FCanvas **local_38;
  int *local_30;
  int *local_28;
  
  pFVar2 = GetStatRenderGlobals();
  if (((param_2->NameAndInfo).Number & 0x40000U) == 0) {
    local_res10[0] = param_4;
    RenderCounterLabel(param_2,param_3,param_4,param_5);
    local_res10[0] = local_res10[0] + pFVar2->AfterNameColumnOffset;
    iVar1 = pFVar2->InterColumnOffset;
    local_68[0] = 0x3f800000;
    local_60[0] = param_5;
    local_58 = param_3;
    local_50 = param_2;
    local_48 = GetStatRenderGlobals();
    local_40 = local_68;
    local_38 = &local_58;
    local_30 = local_res10;
    local_28 = local_60;
    if (((param_2->NameAndInfo).Number & 0x200000U) != 0) {
      `RenderCounterValues'::__l2::<lambda_1>::operator()(&local_50,IncAve);
    }
    local_res10[0] = local_res10[0] + iVar1;
    `RenderCounterValues'::__l2::<lambda_1>::operator()(&local_50,IncMax);
    local_res10[0] = local_res10[0] + iVar1;
    `RenderCounterValues'::__l2::<lambda_1>::operator()(&local_50,IncMin);
    iVar1 = pFVar2->StatFontHeight;
  }
  else {
    iVar1 = RenderCycle(param_2,param_3,param_4,param_5,0,false,param_6,param_7);
  }
  return iVar1;
}

// RenderCounterHeadings @ 1487bb880

int __cdecl RenderCounterHeadings(FCanvas *param_1,int param_2,int param_3)

{
  FLinearColor *pFVar1;
  int iVar2;
  FStatRenderGlobals *pFVar3;
  FStatRenderGlobals *pFVar4;
  int iVar5;
  double dVar6;
  int local_res10 [2];
  int local_res18 [4];
  TStringView<wchar_t> local_58 [2];
  
  pFVar3 = GetStatRenderGlobals();
  local_58[0].Size = 8;
  dVar6 = (double)param_3;
  pFVar1 = &pFVar3->HeadingColor;
  local_58[0].DataPtr = L"Counters";
  FCanvas::DrawShadowedString
            (param_1,(double)param_2,dVar6,local_58,pFVar3->StatFont,pFVar1,&FLinearColor::Black);
  iVar5 = param_2 + pFVar3->AfterNameColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 7;
  local_58[0].DataPtr = L"Average";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 7;
  local_58[0].DataPtr = L"Average";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar5),dVar6,local_58,
             pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar5 = iVar5 + pFVar3->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 3;
  local_58[0].DataPtr = L"Max";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 3;
  local_58[0].DataPtr = L"Max";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar5),dVar6,local_58,
             pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar2 = pFVar3->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 3;
  local_58[0].DataPtr = L"Min";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 3;
  local_58[0].DataPtr = L"Min";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar2 + iVar5),dVar6,
             local_58,pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar2 = pFVar3->StatFontHeight;
  return (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f) +
         iVar2 / 3 + (iVar2 >> 0x1f) + pFVar3->StatFontHeight;
}

// RenderCounterLabel @ 1487bbac0

void __cdecl
RenderCounterLabel(TStatMessage<EComplexStatField> *param_1,FCanvas *param_2,int param_3,int param_4
                  )

{
  FScriptContainerElement *_Src;
  UFont *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FStatRenderGlobals *pFVar5;
  FString *pFVar6;
  size_t sVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  int iVar10;
  FName local_res8;
  FCanvas *local_res10;
  undefined4 local_res18;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  iVar10 = 0;
  local_res18 = 0;
  local_res10 = param_2;
  pFVar5 = GetStatRenderGlobals();
  local_res8.ComparisonIndex.Value = (param_1->NameAndInfo).Index.Value;
  local_res8.Number = (param_1->NameAndInfo).Number & 0x1ff;
  FStatNameAndInfo::GetDescriptionFrom
            (&local_68,(FName)((ulonglong)param_1->NameAndInfo & 0x1ffffffffff));
  FVar8.Data = local_68.Data.AllocatorInstance.Data;
  iVar4 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = iVar10;
  }
  if (iVar4 == 0) {
    local_res8.ComparisonIndex.Value = (param_1->NameAndInfo).Index.Value;
    local_res8.Number = (param_1->NameAndInfo).Number & 0x1ff;
    FStatNameAndInfo::GetShortNameFrom((FName)&local_res8);
    pFVar6 = FName::GetPlainNameString(&local_res8,(FString *)&local_58);
    bVar3 = true;
    bVar2 = false;
  }
  else {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,FVar8.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    pFVar6 = &local_78;
    bVar3 = false;
    bVar2 = true;
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = (pFVar6->Data).ArrayNum;
  lVar9 = (longlong)local_80;
  _Src = (pFVar6->Data).AllocatorInstance.Data;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,&local_88,local_80,&local_7c);
    memcpy(local_88.Data,_Src,lVar9 * 2);
  }
  if ((bVar2) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.DataPtr != (wchar_t *)0x0)) {
    FMemory::Free(local_58.DataPtr);
  }
  pUVar1 = pFVar5->StatFont;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_80 != 0) {
    FVar8.Data = local_88.Data;
  }
  pFVar6 = ShortenName(&local_48,(wchar_t *)FVar8.Data);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1487bbc6e;
  }
  sVar7 = wcslen((wchar_t *)local_78.Data.AllocatorInstance.Data);
  iVar10 = (int)sVar7;
LAB_1487bbc6e:
  local_58._12_4_ = local_78.Data.ArrayMax;
  local_58.Size = iVar10;
  local_58.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
  local_78.Data.ArrayNum = iVar10;
  FCanvas::DrawShadowedString
            (local_res10,(double)param_3,(double)param_4,&local_58,pUVar1,&pFVar5->StatColor,
             &FLinearColor::Black);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderCounterValues @ 1487bbd00

void __cdecl
RenderCounterValues(TStatMessage<EComplexStatField> *param_1,FCanvas *param_2,int *param_3,
                   int param_4,int param_5,float param_6)

{
  FCanvas *local_res10 [2];
  int local_res20 [2];
  TStatMessage<EComplexStatField> *local_38;
  FStatRenderGlobals *local_30;
  float *local_28;
  FCanvas **local_20;
  int *local_18;
  int *local_10;
  
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  local_38 = param_1;
  local_30 = GetStatRenderGlobals();
  local_28 = &param_6;
  local_20 = local_res10;
  local_10 = local_res20;
  local_18 = param_3;
  if (((param_1->NameAndInfo).Number & 0x200000U) != 0) {
    `RenderCounterValues'::__l2::<lambda_1>::operator()(&local_38,IncAve);
  }
  *param_3 = *param_3 + param_5;
  `RenderCounterValues'::__l2::<lambda_1>::operator()(&local_38,IncMax);
  *param_3 = *param_3 + param_5;
  `RenderCounterValues'::__l2::<lambda_1>::operator()(&local_38,IncMin);
  *param_3 = *param_3 + param_5;
  return;
}

// RenderCycle @ 1487bbdb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
RenderCycle(TStatMessage<EComplexStatField> *param_1,FCanvas *param_2,int param_3,int param_4,
           int param_5,bool param_6,float param_7,bool param_8)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFont *pUVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FStatRenderGlobals *pFVar10;
  FString *pFVar11;
  size_t sVar12;
  FStatRenderGlobals *pFVar13;
  int iVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  wchar_t *_Str;
  int iVar17;
  uint uVar18;
  FCanvas *pFVar19;
  float fVar20;
  double dVar21;
  FColor_u_0 local_res8 [2];
  FCanvas *local_res10;
  int local_res18;
  int local_res20;
  ForAnyElementType local_2d8;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  FName local_2c0;
  FString local_2b8;
  uint local_2a8;
  uint uStack_2a4;
  uint local_2a0;
  uint uStack_29c;
  uint local_298;
  uint uStack_294;
  FLinearColor_u_0 local_290;
  FLinearColor_u_0 local_280;
  FLinearColor_u_0 local_270;
  FLinearColor_u_0 local_260;
  FLinearColor_u_0 local_250;
  FLinearColor_u_0 local_240;
  int local_230;
  int local_22c;
  FName local_228;
  FString local_220;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FString local_1f8;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [64];
  TVector2<double>_u_0 local_118;
  float local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88 [4];
  
  bVar3 = 0.0 <= param_7;
  iVar8 = 0;
  local_res8[0].Bits = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar10 = GetStatRenderGlobals();
  FLinearColor::ToFColorSRGB(&pFVar10->StatColor);
  if ((((param_1->NameAndInfo).Number & 0x40000U) == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Item.NameAndInfo.GetFlag(EStatMetaFlags::IsCycle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StatsRender2.cpp"
                         ,0x154,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar1 = (param_1->NameAndInfo).Number;
  uVar18 = uVar1 & 0xe00;
  if (uVar18 == 0x400) {
    if ((uVar1 >> 0x14 & 1) == 0) {
      uVar9 = (uint)*(undefined8 *)((param_1->StatData).Pad + 8);
    }
    else {
      uVar9 = *(uint *)((param_1->StatData).Pad + 8);
    }
    uStack_2a4 = uVar1 & 0x1ff;
    local_2a8 = (param_1->NameAndInfo).Index.Value;
    fVar20 = (float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 * (double)uVar9
                    );
    FStatNameAndInfo::GetShortNameFrom((FName)&local_228);
    FName::ToString(&local_228,&local_220);
    FString::RemoveFromStart(&local_220,L"STAT_",5,CaseSensitive);
    UEngine::GetStatValueColoration(GEngine,&local_220,fVar20,(FColor *)&local_res8[0]._s_0);
    if (!bVar3) {
      param_7 = FEnginePerformanceTargets::GetTargetFrameTimeThresholdMS();
    }
    iVar17 = pFVar10->AfterNameColumnOffset;
    iVar14 = (int)((fVar20 / param_7) * (float)iVar17);
    if (2 < iVar14) {
      local_158._24_8_ = 0;
      iVar5 = iVar17;
      if (iVar14 <= iVar17) {
        iVar5 = iVar14;
      }
      local_158[0x20] = 0;
      local_158._40_8_ = 0;
      local_108 = 0.0;
      local_100.Data = (FScriptContainerElement *)0x0;
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      local_158._8_8_ = (undefined8)((iVar17 - iVar5) + param_3);
      local_158._0_8_ = &___7FCanvasBoxItem__6B_;
      local_158._16_8_ =
           (undefined8)((float)pFVar10->StatFontHeight * __real_3ecccccd + (float)local_res20);
      local_118._s_0.X = (double)iVar5;
      local_118._s_0.Y = (double)((float)pFVar10->StatFontHeight * __real_3e4ccccd);
      local_158._48_16_ = (undefined1  [16])FLinearColor::Red.field0_0x0;
      FCanvasBoxItem::Draw((FCanvasBoxItem *)local_158,param_2);
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
  local_2a0 = (param_1->NameAndInfo).Index.Value;
  uStack_29c = (param_1->NameAndInfo).Number & 0x1ff;
  FStatNameAndInfo::GetDescriptionFrom
            (&local_188,(FName)((ulonglong)param_1->NameAndInfo & 0x1ffffffffff));
  FVar15.Data = local_188.Data.AllocatorInstance.Data;
  iVar17 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar17 = iVar8;
  }
  if (iVar17 == 0) {
    local_298 = (param_1->NameAndInfo).Index.Value;
    uStack_294 = (param_1->NameAndInfo).Number & 0x1ff;
    FStatNameAndInfo::GetShortNameFrom((FName)&local_2c0);
    pFVar11 = FName::GetPlainNameString(&local_2c0,&local_e8);
    bVar6 = true;
    bVar7 = false;
  }
  else {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = local_188.Data.ArrayNum;
    if (local_188.Data.ArrayNum == 0) {
      local_2b8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)&local_2b8,
                 local_188.Data.ArrayNum,&local_2b8.Data.ArrayMax);
      memcpy(local_2b8.Data.AllocatorInstance.Data,FVar15.Data,(longlong)local_188.Data.ArrayNum * 2
            );
    }
    pFVar11 = &local_2b8;
    bVar6 = false;
    bVar7 = true;
  }
  local_2d8.Data = (FScriptContainerElement *)0x0;
  local_2d0 = (pFVar11->Data).ArrayNum;
  lVar16 = (longlong)local_2d0;
  _Src = (pFVar11->Data).AllocatorInstance.Data;
  if (local_2d0 == 0) {
    local_2cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d0,0,&local_2d8,local_2d0,&local_2cc);
    memcpy(local_2d8.Data,_Src,lVar16 * 2);
  }
  if ((bVar7) && (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  fVar20 = __real_3b808081;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2d0 != 0) {
    FVar15.Data = local_2d8.Data;
  }
  local_260._s_0.R = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
  pUVar2 = pFVar10->StatFont;
  local_260._s_0.G = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
  local_260._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
  local_260._s_0.A = (float)(local_res8[0].Bits >> 0x18) * __real_3b808081;
  pFVar11 = ShortenName(&local_c8,(wchar_t *)FVar15.Data);
  if ((pFVar11->Data).ArrayNum == 0) {
    local_208 = (FScriptContainerElement *)0x15060d16c;
LAB_1487bc20c:
    sVar12 = wcslen((wchar_t *)local_208);
    iStack_200 = (int)sVar12;
  }
  else {
    local_208 = (pFVar11->Data).AllocatorInstance.Data;
    iStack_200 = iVar8;
    if (local_208 != (FScriptContainerElement *)0x0) goto LAB_1487bc20c;
  }
  iVar17 = local_res18;
  local_d8._12_4_ = uStack_1fc;
  local_d8.Size = iStack_200;
  dVar21 = (double)local_res20;
  local_d8.DataPtr = (wchar_t *)local_208;
  FCanvas::DrawShadowedString
            (local_res10,(double)(int)(((uint)param_8 + param_5) * 8 + local_res18),dVar21,&local_d8
             ,pUVar2,(FLinearColor *)&local_260._s_0,&FLinearColor::Black);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  iVar17 = pFVar10->AfterNameColumnOffset + iVar17;
  if (param_6) {
    if ((((param_1->NameAndInfo).Number & 0x100000U) != 0) && (uVar18 == 0x400)) {
      local_250._s_0.R = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
      local_250._s_0.G = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
      local_250._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
      local_250._s_0.A = (float)(local_res8[0].Bits >> 0x18) * fVar20;
      FString::PrintfImpl(&local_1f8,L"%u");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_1f8.Data.ArrayNum != 0) {
        FVar15.Data = local_1f8.Data.AllocatorInstance.Data;
      }
      RightJustify(local_res10,iVar17,local_res20,(wchar_t *)FVar15.Data,
                   (FLinearColor *)&local_250._s_0);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
    iVar17 = iVar17 + pFVar10->InterColumnOffset;
  }
  iVar14 = 0;
  if (uVar18 == 0x400) {
    local_240._s_0.R = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    local_240._s_0.G = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    local_240._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    local_240._s_0.A = (float)(local_res8[0].Bits >> 0x18) * fVar20;
    FString::PrintfImpl(&local_1d8,L"%1.2f ms");
    FVar15.Data = local_1d8.Data.AllocatorInstance.Data;
    if (local_1d8.Data.ArrayNum == 0) {
      local_1e8 = (FScriptContainerElement *)0x15060d16c;
      pFVar13 = GetStatRenderGlobals();
      FVar15.Data = (FScriptContainerElement *)L"";
LAB_1487bc43d:
      sVar12 = wcslen((wchar_t *)FVar15.Data);
      iStack_1e0 = (int)sVar12;
    }
    else {
      pFVar13 = GetStatRenderGlobals();
      local_1e8 = FVar15.Data;
      iStack_1e0 = iVar14;
      if (FVar15.Data != (FScriptContainerElement *)0x0) goto LAB_1487bc43d;
    }
    local_b8._12_4_ = uStack_1dc;
    local_b8.Size = iStack_1e0;
    local_b8.DataPtr = (wchar_t *)local_1e8;
    StringSize(pFVar13->StatFont,&local_2c8,&local_230,&local_b8);
    iStack_170 = iVar14;
    local_178 = FVar15.Data;
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      sVar12 = wcslen((wchar_t *)FVar15.Data);
      iStack_170 = (int)sVar12;
    }
    local_a8._12_4_ = uStack_16c;
    local_a8.Size = iStack_170;
    local_a8.DataPtr = (wchar_t *)local_178;
    FCanvas::DrawShadowedString
              (local_res10,(double)((pFVar13->InterColumnOffset - local_2c8) + iVar17),dVar21,
               &local_a8,pFVar13->StatFont,(FLinearColor *)&local_240._s_0,&FLinearColor::Black);
    if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1487bc4f3;
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    iVar17 = iVar17 + pFVar10->InterColumnOffset;
LAB_1487bc504:
    local_290._s_0.R = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    local_290._s_0.G = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    local_290._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    local_290._s_0.A = (float)(local_res8[0].Bits >> 0x18) * fVar20;
    FString::PrintfImpl(&local_1b8,L"%1.2f ms");
    _Str = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
    if (local_1b8.Data.ArrayNum == 0) {
      _Str = L"";
      local_1c8 = (FScriptContainerElement *)0x15060d16c;
      pFVar13 = GetStatRenderGlobals();
LAB_1487bc5d1:
      sVar12 = wcslen(_Str);
      iVar14 = (int)sVar12;
    }
    else {
      pFVar13 = GetStatRenderGlobals();
      local_1c8 = (FScriptContainerElement *)_Str;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_1487bc5d1;
    }
    local_98._12_4_ = uStack_1bc;
    local_98.Size = iVar14;
    local_98.DataPtr = (wchar_t *)local_1c8;
    iStack_1c0 = iVar14;
    StringSize(pFVar13->StatFont,&local_2c4,&local_22c,&local_98);
    local_168 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar12 = wcslen(_Str);
      iVar8 = (int)sVar12;
    }
    pFVar19 = local_res10;
    local_88[0]._12_4_ = uStack_15c;
    local_88[0].Size = iVar8;
    local_88[0].DataPtr = (wchar_t *)local_168;
    iStack_160 = iVar8;
    FCanvas::DrawShadowedString
              (local_res10,(double)((pFVar13->InterColumnOffset - local_2c4) + iVar17),
               (double)local_res20,local_88,pFVar13->StatFont,(FLinearColor *)&local_290._s_0,
               &FLinearColor::Black);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_1487bc4f3:
    iVar17 = iVar17 + pFVar10->InterColumnOffset;
    pFVar19 = local_res10;
    if (uVar18 == 0x400) goto LAB_1487bc504;
  }
  iVar17 = iVar17 + pFVar10->InterColumnOffset;
  if ((!param_6) || (bVar3)) goto LAB_1487bc895;
  iVar8 = local_res20;
  if (uVar18 == 0x400) {
    local_280._s_0.R = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
    local_280._s_0.G = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
    local_280._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
    local_280._s_0.A = (float)(local_res8[0].Bits >> 0x18) * fVar20;
    FString::PrintfImpl(&local_1a8,L"%1.2f ms");
    iVar8 = local_res20;
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar15.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    RightJustify(pFVar19,iVar17,local_res20,(wchar_t *)FVar15.Data,(FLinearColor *)&local_280._s_0);
    if (local_1a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1487bc7ae;
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    iVar14 = pFVar10->InterColumnOffset;
  }
  else {
LAB_1487bc7ae:
    iVar14 = pFVar10->InterColumnOffset;
    if (uVar18 != 0x400) goto LAB_1487bc895;
  }
  local_270._s_0.R = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._2_1_];
  local_270._s_0.G = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._1_1_];
  local_270._s_0.B = FLinearColor::sRGBToLinearTable[(byte)local_res8[0]._0_1_];
  local_270._s_0.A = (float)(local_res8[0].Bits >> 0x18) * fVar20;
  FString::PrintfImpl(&local_198,L"%1.2f ms");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar15.Data = local_198.Data.AllocatorInstance.Data;
  }
  RightJustify(pFVar19,iVar17 + iVar14,iVar8,(wchar_t *)FVar15.Data,(FLinearColor *)&local_270._s_0)
  ;
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
LAB_1487bc895:
  iVar8 = pFVar10->StatFontHeight;
  if (local_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return iVar8;
}

// RenderFlatCycle @ 1487bc8f0

int __cdecl
RenderFlatCycle(FGameThreadStatsData *param_1,TStatMessage<EComplexStatField> *param_2,
               FCanvas *param_3,int param_4,int param_5,float param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = RenderCycle(param_2,param_3,param_4,param_5,0,true,param_6,param_7);
  return iVar1;
}

// RenderGpuStatHeadings @ 1487bc940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl RenderGpuStatHeadings(FCanvas *param_1,int param_2,int param_3)

{
  FLinearColor *pFVar1;
  int iVar2;
  wchar_t *_Str;
  UFont *pUVar3;
  FCanvas *this;
  int iVar4;
  FStatRenderGlobals *pFVar5;
  FStatRenderGlobals *pFVar6;
  size_t sVar7;
  int iVar8;
  wchar_t **ppwVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStackY_148 [32];
  int local_108;
  int local_104;
  int local_100 [2];
  TStringView<wchar_t> local_f8;
  wchar_t *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  int local_c8 [2];
  FCanvas *local_c0;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8 [4];
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68 [3];
  wchar_t *local_50 [3];
  
  local_50[0] = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStackY_148);
  local_104 = param_3;
  local_100[0] = param_2;
  local_c0 = param_1;
  pFVar5 = GetStatRenderGlobals();
  local_e8 = L"Counters";
  dVar11 = (double)param_3;
  iStack_e0 = 8;
  local_d8._12_4_ = uStack_dc;
  local_d8.Size = 8;
  local_d8.DataPtr = L"Counters";
  FCanvas::DrawShadowedString
            (param_1,(double)param_2,dVar11,&local_d8,pFVar5->StatFont,&pFVar5->HeadingColor,
             &FLinearColor::Black);
  ppwVar9 = local_68;
  local_68[0] = L"Busy";
  iVar8 = pFVar5->AfterNameColumnOffsetNarrow + pFVar5->InterColumnOffsetNarrow + param_2;
  local_68[1] = L"Wait";
  local_68[2] = L"Idle";
  do {
    _Str = *ppwVar9;
    iVar2 = pFVar5->StatFontHeight;
    pFVar6 = GetStatRenderGlobals();
    iVar4 = 0;
    local_e8 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar4 = (int)sVar7;
    }
    local_d8._12_4_ = uStack_dc;
    local_d8.Size = iVar4;
    local_d8.DataPtr = local_e8;
    iStack_e0 = iVar4;
    StringSize(pFVar6->StatFont,&local_108,local_c8,&local_d8);
    pUVar3 = pFVar6->StatFont;
    iVar4 = 0;
    local_b8 = _Str;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar4 = (int)sVar7;
    }
    this = local_c0;
    pFVar1 = &pFVar5->HeadingColor;
    local_d8._12_4_ = uStack_ac;
    local_d8.Size = iVar4;
    local_d8.DataPtr = local_b8;
    iStack_b0 = iVar4;
    FCanvas::DrawShadowedString
              (local_c0,(double)((pFVar6->InterColumnOffset - local_108) + iVar8),
               (double)(param_3 - iVar2),&local_d8,pUVar3,pFVar1,&FLinearColor::Black);
    ppwVar9 = ppwVar9 + 1;
    iVar8 = iVar8 + pFVar5->InterColumnOffset + pFVar5->InterColumnOffsetNarrow * 2;
    param_3 = local_104;
  } while (ppwVar9 != local_50);
  iVar8 = local_100[0] + pFVar5->AfterNameColumnOffsetNarrow;
  lVar10 = 3;
  do {
    pFVar6 = GetStatRenderGlobals();
    iStack_b0 = 3;
    local_b8 = L"Avg";
    local_f8._12_4_ = uStack_ac;
    local_f8.Size = 3;
    local_f8.DataPtr = L"Avg";
    StringSize(pFVar6->StatFont,local_100,local_c8,&local_f8);
    local_e8 = L"Avg";
    iStack_e0 = 3;
    local_f8._12_4_ = uStack_dc;
    local_f8.Size = 3;
    local_f8.DataPtr = L"Avg";
    FCanvas::DrawShadowedString
              (this,(double)((pFVar6->InterColumnOffset - local_100[0]) + iVar8),dVar11,&local_f8,
               pFVar6->StatFont,pFVar1,&FLinearColor::Black);
    iVar8 = iVar8 + pFVar5->InterColumnOffsetNarrow;
    pFVar6 = GetStatRenderGlobals();
    uStack_90 = 3;
    local_98 = L"Max";
    local_f8._12_4_ = uStack_8c;
    local_f8.Size = 3;
    local_f8.DataPtr = L"Max";
    StringSize(pFVar6->StatFont,&local_104,local_a8,&local_f8);
    local_88 = L"Max";
    uStack_80 = 3;
    local_f8._12_4_ = uStack_7c;
    local_f8.Size = 3;
    local_f8.DataPtr = L"Max";
    FCanvas::DrawShadowedString
              (this,(double)((pFVar6->InterColumnOffset - local_104) + iVar8),dVar11,&local_f8,
               pFVar6->StatFont,pFVar1,&FLinearColor::Black);
    iVar8 = iVar8 + pFVar5->InterColumnOffsetNarrow;
    pFVar6 = GetStatRenderGlobals();
    uStack_70 = 3;
    local_78 = L"Min";
    local_f8._12_4_ = uStack_6c;
    local_f8.Size = 3;
    local_f8.DataPtr = L"Min";
    StringSize(pFVar6->StatFont,&local_108,(int *)&local_c0,&local_f8);
    local_d8.Size = 3;
    local_d8.DataPtr = L"Min";
    local_f8.DataPtr = L"Min";
    local_f8.Size = 3;
    local_f8._12_4_ = local_d8._12_4_;
    FCanvas::DrawShadowedString
              (this,(double)((pFVar6->InterColumnOffset - local_108) + iVar8),dVar11,&local_f8,
               pFVar6->StatFont,pFVar1,&FLinearColor::Black);
    iVar8 = iVar8 + pFVar5->InterColumnOffset;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = pFVar5->StatFontHeight;
  return (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) +
         iVar8 / 3 + (iVar8 >> 0x1f) + pFVar5->StatFontHeight;
}

// RenderGroupBudget @ 1487bcd10

int __cdecl
RenderGroupBudget(FCanvas *param_1,int param_2,int param_3,ulong64 param_4,ulong64 param_5,
                 float param_6)

{
  int iVar1;
  UFont *pUVar2;
  FStatRenderGlobals *pFVar3;
  size_t sVar4;
  FLinearColor *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FLinearColor *pFVar8;
  double dVar9;
  TStringView<wchar_t> local_68;
  FString local_58 [3];
  
  pFVar3 = GetStatRenderGlobals();
  dVar9 = FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000;
  FString::PrintfImpl(local_58,L"Total (of %1.2f ms)");
  pUVar2 = pFVar3->StatFont;
  if (local_58[0].Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.Size = 0;
    local_68.DataPtr = (wchar_t *)local_58[0].Data.AllocatorInstance.Data;
    if (local_58[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_1487bcdde;
  }
  sVar4 = wcslen(local_68.DataPtr);
  local_68.Size = (int)sVar4;
LAB_1487bcdde:
  pFVar8 = &FLinearColor::Green;
  FCanvas::DrawShadowedString
            (param_1,(double)param_2,(double)param_3,&local_68,pUVar2,&FLinearColor::Green,
             &FLinearColor::Black);
  iVar6 = pFVar3->InterColumnOffset + param_2 + pFVar3->AfterNameColumnOffset;
  pFVar5 = &FLinearColor::Green;
  if (param_6 < (float)((double)(param_4 & 0xffffffff) * dVar9)) {
    pFVar5 = &FLinearColor::Red;
  }
  FString::PrintfImpl((FString *)&local_68,L"%1.2f ms");
  pFVar7 = (FScriptContainerElement *)L"";
  if (local_68.Size != 0) {
    pFVar7 = (FScriptContainerElement *)local_68.DataPtr;
  }
  RightJustify(param_1,iVar6,param_3,(wchar_t *)pFVar7,pFVar5);
  if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  iVar1 = pFVar3->InterColumnOffset;
  if (param_6 < (float)((double)(param_5 & 0xffffffff) * dVar9)) {
    pFVar8 = &FLinearColor::Red;
  }
  FString::PrintfImpl((FString *)&local_68,L"%1.2f ms");
  pFVar7 = (FScriptContainerElement *)L"";
  if (local_68.Size != 0) {
    pFVar7 = (FScriptContainerElement *)local_68.DataPtr;
  }
  RightJustify(param_1,iVar6 + iVar1,param_3,(wchar_t *)pFVar7,pFVar8);
  if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  iVar6 = pFVar3->StatFontHeight;
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return iVar6;
}

// RenderGroupedHeadings @ 1487bcf30

int __cdecl
RenderGroupedHeadings(FCanvas *param_1,int param_2,int param_3,bool param_4,bool param_5)

{
  bool bVar1;
  FStatRenderGlobals *pFVar2;
  size_t sVar3;
  FStatRenderGlobals *pFVar4;
  int iVar5;
  FLinearColor *pFVar6;
  double dVar7;
  int local_res10 [2];
  undefined3 in_stack_00000029;
  TStringView<wchar_t> local_48 [2];
  
  pFVar2 = GetStatRenderGlobals();
  bVar1 = param_5;
  if (param_5 == false) {
    local_48[0].DataPtr = CaptionFlat;
    if (param_4) {
      local_48[0].DataPtr = CaptionHier;
    }
    iVar5 = 0;
    if (local_48[0].DataPtr != (wchar_t *)0x0) {
      sVar3 = wcslen(local_48[0].DataPtr);
      iVar5 = (int)sVar3;
    }
    local_48[0].Size = iVar5;
    FCanvas::DrawShadowedString
              (param_1,(double)param_2,(double)param_3,local_48,pFVar2->StatFont,
               &pFVar2->HeadingColor,&FLinearColor::Black);
  }
  dVar7 = (double)param_3;
  pFVar6 = &pFVar2->HeadingColor;
  iVar5 = param_2 + pFVar2->AfterNameColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_48[0].Size = 9;
  local_48[0].DataPtr = L"CallCount";
  StringSize(pFVar4->StatFont,(int *)&param_5,local_res10,local_48);
  local_48[0].Size = 9;
  local_48[0].DataPtr = L"CallCount";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - _param_5) + iVar5),dVar7,local_48,
             pFVar4->StatFont,pFVar6,&FLinearColor::Black);
  iVar5 = iVar5 + pFVar2->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_48[0].Size = 0xc;
  local_48[0].DataPtr = L"InclusiveAvg";
  StringSize(pFVar4->StatFont,(int *)&param_5,local_res10,local_48);
  local_48[0].Size = 0xc;
  local_48[0].DataPtr = L"InclusiveAvg";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - _param_5) + iVar5),dVar7,local_48,
             pFVar4->StatFont,pFVar6,&FLinearColor::Black);
  iVar5 = iVar5 + pFVar2->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_48[0].Size = 0xc;
  local_48[0].DataPtr = L"InclusiveMax";
  StringSize(pFVar4->StatFont,(int *)&param_5,local_res10,local_48);
  local_48[0].Size = 0xc;
  local_48[0].DataPtr = L"InclusiveMax";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - _param_5) + iVar5),dVar7,local_48,
             pFVar4->StatFont,pFVar6,&FLinearColor::Black);
  iVar5 = iVar5 + pFVar2->InterColumnOffset;
  if (bVar1 == false) {
    RightJustify(param_1,iVar5,param_3,L"ExclusiveAvg",pFVar6);
    RightJustify(param_1,pFVar2->InterColumnOffset + iVar5,param_3,L"ExclusiveMax",pFVar6);
  }
  iVar5 = pFVar2->StatFontHeight;
  return (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f) +
         iVar5 / 3 + (iVar5 >> 0x1f) + pFVar2->StatFontHeight;
}

// RenderGroupedWithHierarchy @ 1487bd210

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

void __cdecl
RenderGroupedWithHierarchy
          (FGameThreadStatsData *param_1,FViewport *param_2,FCanvas *param_3,int param_4,
          int *param_5)

{
  FActiveStatGroupInfo *pFVar1;
  FViewportClient *pFVar2;
  FScriptContainerElement *pFVar3;
  UFont *pUVar4;
  code *pcVar5;
  float fVar6;
  FStatRenderGlobals *pFVar7;
  int *piVar8;
  FCanvas *pFVar9;
  FGameThreadStatsData *pFVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  UClass *this;
  size_t sVar15;
  float *pfVar16;
  TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_> *pTVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  int iVar20;
  FName FVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  int iVar25;
  FActiveStatGroupInfo *pFVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  double dVar31;
  undefined1 auStackY_248 [32];
  undefined1 local_207 [3];
  int local_204;
  uint local_200;
  FStatRenderGlobals *local_1f8;
  int *local_1f0;
  FCanvas *local_1e8;
  FGameThreadStatsData *local_1e0;
  FNameEntryId local_1d8;
  int iStack_1d4;
  FName local_1d0;
  uint local_1c8;
  int local_1c4;
  FName local_1c0;
  longlong local_1b8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1b0;
  undefined4 local_1a0;
  uint uStack_19c;
  FViewport *local_198;
  FString local_190;
  FString local_180;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  FNameEntryId *local_158;
  FString local_150;
  FString local_140;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [8];
  FString local_110;
  FString local_100;
  TStringView<wchar_t> local_e8;
  TSet<TTuple<FName,FGpuStatMessage>,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>,FDefaultSetAllocator>
  local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1f0 = param_5;
  local_204 = param_4;
  local_1e8 = param_3;
  local_1e0 = param_1;
  local_198 = param_2;
  this = Z_Construct_UClass_UCanvas_NoRegister();
  UClass::GetDefaultObject<UCanvas>(this);
  local_1f8 = GetStatRenderGlobals();
  fVar6 = __real_bf800000;
  iVar27 = (param_1->ActiveStatGroups).Array.ArrayNum;
  local_200 = 0;
  if (0 < iVar27) {
    local_1b8 = 0;
    do {
      lVar22 = local_1b8;
      uVar14 = local_200;
      uVar28 = 0;
      uVar19 = ~local_200;
      uVar13 = 0;
      if ((int)local_200 < iVar27) {
        uVar13 = uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = *(FActiveStatGroupInfo **)
                ((param_1->ActiveStatGroups).Array.AllocatorInstance.Data + lVar22 * 8);
      uVar13 = 0;
      if ((int)uVar14 < (param_1->GroupNames).ArrayNum) {
        uVar13 = uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar22 = (longlong)(int)uVar14;
      local_160 = lVar22;
      FName::ToString((FName *)((param_1->GroupNames).AllocatorInstance.Data + lVar22 * 8),
                      &local_180);
      FString::RemoveFromStart(&local_180,L"STATGROUP_",10,CaseSensitive);
      pFVar2 = param_2->ViewportClient;
      if ((pFVar2 == (FViewportClient *)0x0) ||
         (cVar12 = (**(code **)((longlong)*pFVar2 + 0x180))(pFVar2,&local_180), cVar12 == '\0')) {
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      else {
        iVar27 = *(int *)&(pFVar1->ThreadBudgetMap).field_0x8 -
                 *(int *)&(pFVar1->ThreadBudgetMap).field_0x34;
        if (iVar27 < 1) {
          iVar20 = 1;
        }
        else {
          iVar20 = *(int *)&(pFVar1->FlatAggregateThreadBreakdown).field_0x8 -
                   *(int *)&(pFVar1->FlatAggregateThreadBreakdown).field_0x34;
        }
        local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.ArrayNum = 0;
        local_1b0.ArrayMax = 0;
        TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
        ::GetKeys<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
                    *)&pFVar1->FlatAggregateThreadBreakdown,&local_1b0);
        local_168 = (longlong)iVar20;
        if (0 < iVar20) {
          local_1c8 = ~local_200 >> 0x1f;
          local_170 = local_1b8 << 4;
          dVar31 = (double)local_204;
          uVar29 = uVar28;
          do {
            uVar14 = local_1c8;
            uVar13 = 0;
            if ((int)local_200 < (local_1e0->GroupNames).ArrayNum) {
              uVar13 = local_1c8;
            }
            if ((uVar13 == 0) &&
               (bVar11 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (local_1e0->GroupNames).AllocatorInstance.Data;
            uVar13 = 0;
            if ((int)local_200 < (local_1e0->GroupDescriptions).ArrayNum) {
              uVar13 = uVar14;
            }
            if ((uVar13 == 0) &&
               (bVar11 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = local_1e0;
            FName::GetPlainNameString((FName *)(pFVar3 + lVar22 * 8),&local_110);
            FString::PrintfImpl(&local_190,L"%s [%s]");
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            local_1c0.ComparisonIndex.Value = 0;
            local_1c0.Number = 0;
            local_1d0.ComparisonIndex.Value = 0;
            local_1d0.Number = 0;
            uVar14 = (uint)uVar28;
            if (iVar27 < 1) {
              FVar21.ComparisonIndex.Value = 0;
              FVar21.Number = 0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar14 < local_1b0.ArrayNum) {
                uVar13 = ~uVar14 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar21 = *(FName *)(local_1b0.AllocatorInstance.Data + uVar29 * 8);
              local_1c0 = FVar21;
              local_1d0 = FStatNameAndInfo::GetShortNameFrom((FName)local_118);
              local_1d0 = *(FName *)local_1d0;
              FName::ToString(&local_1d0,&local_100);
              FString::PrintfImpl(&local_150,L" - %s");
              iVar20 = local_150.Data.ArrayNum + -1;
              if (local_150.Data.ArrayNum == 0) {
                iVar20 = 0;
              }
              FString::AppendChars
                        (&local_190,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar20);
              if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.Data.AllocatorInstance.Data);
              }
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
            }
            if (1 < (pFVar10->RootFilter).Data.ArrayNum) {
              FString::PrintfImpl(&local_140,L" ROOT=%s");
              iVar20 = local_140.Data.ArrayNum + -1;
              if (local_140.Data.ArrayNum == 0) {
                iVar20 = 0;
              }
              FString::AppendChars
                        (&local_190,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar20);
              if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_140.Data.AllocatorInstance.Data);
              }
            }
            pUVar4 = local_1f8->StatFont;
            if (local_190.Data.ArrayNum == 0) {
              local_128 = (FScriptContainerElement *)0x15060d16c;
LAB_1487bd690:
              sVar15 = wcslen((wchar_t *)local_128);
              iVar20 = (int)sVar15;
            }
            else {
              iVar20 = 0;
              local_128 = local_190.Data.AllocatorInstance.Data;
              if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_1487bd690;
            }
            piVar8 = local_1f0;
            local_e8._12_4_ = uStack_11c;
            local_e8.Size = iVar20;
            local_e8.DataPtr = (wchar_t *)local_128;
            iStack_120 = iVar20;
            FCanvas::DrawShadowedString
                      (local_1e8,dVar31,(double)*local_1f0,&local_e8,pUVar4,&local_1f8->GroupColor,
                       &FLinearColor::Black);
            iVar24 = local_1f8->StatFontHeight + *piVar8;
            *piVar8 = iVar24;
            iVar20 = (pFVar1->HierAggregate).ArrayNum;
            iVar25 = (pFVar1->FlatAggregate).ArrayNum;
            if ((iVar20 != 0) || (param_5 = local_1f0, iVar25 != 0)) {
              iVar24 = RenderGroupedHeadings(local_1e8,local_204,iVar24,iVar20 != 0,0 < iVar27);
              param_5 = local_1f0;
              *local_1f0 = *local_1f0 + iVar24;
              if (iVar20 != 0) {
                RenderHierCycles(local_1e8,local_204,local_1f0,pFVar1);
                *param_5 = *param_5 + local_1f8->StatFontHeight;
              }
            }
            fVar30 = fVar6;
            if ((local_1d0 != (FName)0x0) &&
               (pfVar16 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                          ::Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                                  *)&pFVar1->ThreadBudgetMap,local_1d0), pfVar16 != (float *)0x0)) {
              fVar30 = *pfVar16;
            }
            if (iVar25 != 0) {
              pFVar26 = pFVar1;
              if (0 < iVar27) {
                pTVar17 = TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                  *)&pFVar1->FlatAggregateThreadBreakdown,FVar21);
                if ((pTVar17 ==
                     (TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>
                      *)0x0) &&
                   (bVar11 = FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x27b,L""), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar26 = (FActiveStatGroupInfo *)&pTVar17->field_0x8;
              }
              param_5 = local_1f0;
              RenderArrayOfStats<int___cdecl(FGameThreadStatsData_const_&,TStatMessage<EComplexStatField>_const_&,FCanvas_*,int,int,float,bool)>
                        (local_1e8,local_204,local_1f0,&pFVar26->FlatAggregate,local_1e0,
                         &pFVar1->BudgetIgnoreStats,fVar30,RenderFlatCycle);
              *param_5 = *param_5 + local_1f8->StatFontHeight;
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            uVar28 = (ulonglong)(uVar14 + 1);
            uVar29 = uVar29 + 1;
            lVar22 = local_160;
          } while ((longlong)uVar29 < local_168);
        }
        pFVar9 = local_1e8;
        iVar27 = local_204;
        param_1 = local_1e0;
        if ((pFVar1->MemoryAggregate).ArrayNum != 0) {
          iVar20 = RenderMemoryHeadings(local_1e8,local_204,*param_5);
          param_1 = local_1e0;
          *param_5 = *param_5 + iVar20;
          RenderArrayOfStats<int___cdecl(FGameThreadStatsData_const_&,TStatMessage<EComplexStatField>_const_&,FCanvas_*,int,int,float,bool)>
                    (pFVar9,iVar27,param_5,&pFVar1->MemoryAggregate,local_1e0,
                     &pFVar1->BudgetIgnoreStats,fVar6,RenderMemoryCounter);
          *param_5 = *param_5 + local_1f8->StatFontHeight;
        }
        pFVar7 = local_1f8;
        if ((pFVar1->CountersAggregate).ArrayNum != 0) {
          iVar20 = RenderCounterHeadings(pFVar9,iVar27,*param_5);
          *param_5 = *param_5 + iVar20;
          RenderArrayOfStats<int___cdecl(FGameThreadStatsData_const_&,TStatMessage<EComplexStatField>_const_&,FCanvas_*,int,int,float,bool)>
                    (pFVar9,iVar27,param_5,&pFVar1->CountersAggregate,param_1,
                     &pFVar1->BudgetIgnoreStats,fVar6,RenderCounter);
          *param_5 = *param_5 + pFVar7->StatFontHeight;
        }
        iVar27 = (pFVar1->GpuStatsAggregate).ArrayNum;
        if (iVar27 != 0) {
          pFVar23 = (pFVar1->GpuStatsAggregate).AllocatorInstance.Data;
          local_d8.Elements._44_4_ = 0x80;
          local_d8.Elements._0_8_ = 0;
          local_d8.Elements._8_8_ = 0;
          pFVar3 = pFVar23 + (longlong)iVar27 * 0x48;
          local_d8.Elements._32_8_ = 0;
          local_d8.Elements._40_4_ = 0;
          local_d8.Elements._48_4_ = 0xffffffff;
          local_d8.Elements._52_4_ = 0;
          local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_d8.HashSize = 0;
          while( true ) {
            if ((pFVar1->GpuStatsAggregate).ArrayNum != iVar27) {
              local_207[0] = 0;
              `TCheckedPointerIterator<TStatMessage<EComplexStatField>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_207);
            }
            param_5 = local_1f0;
            if (pFVar23 == pFVar3) break;
            local_1a0 = *(undefined4 *)(pFVar23 + 0x40);
            uStack_19c = *(uint *)(pFVar23 + 0x44) & 0x1ff;
            FStatNameAndInfo::GetShortNameFrom((FName)&local_1d8);
            iVar20 = iStack_1d4;
            iStack_1d4 = 0;
            uVar14 = GetTypeHash(local_1d8);
            if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
              FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar18 = local_d8.Hash.SecondaryData;
              }
              iVar25 = *(int *)((longlong)FVar18 + (ulonglong)(local_d8.HashSize - 1U & uVar14) * 4)
              ;
              if (iVar25 != -1) {
                do {
                  lVar22 = local_d8.Elements._0_8_ + (longlong)iVar25 * 0x28;
                  if (*(longlong *)(local_d8.Elements._0_8_ + (longlong)iVar25 * 0x28) ==
                      CONCAT44(iStack_1d4,local_1d8.Value)) {
                    if (lVar22 != 0) goto LAB_1487bda64;
                    break;
                  }
                  iVar25 = *(int *)(lVar22 + 0x20);
                } while (iVar25 != -1);
              }
            }
            local_158 = &local_1d8;
            TSet<TTuple<FName,FGpuStatMessage>,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                      (&local_d8,(uint)&local_1c4,
                       (TKeyInitializer<FName_const_&> *)(ulonglong)uVar14,(bool *)&local_158);
            lVar22 = local_d8.Elements._0_8_ + (longlong)local_1c4 * 0x28;
LAB_1487bda64:
            if (iVar20 == 0) {
LAB_1487bda98:
              *(FScriptContainerElement **)(lVar22 + 8) = pFVar23;
              pFVar23 = pFVar23 + 0x48;
            }
            else if (iVar20 == 1) {
              *(FScriptContainerElement **)(lVar22 + 0x10) = pFVar23;
              pFVar23 = pFVar23 + 0x48;
            }
            else {
              if (iVar20 != 2) {
                bVar11 = FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StatsRender2.cpp"
                                    ,0x414,L"");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                goto LAB_1487bda98;
              }
              *(FScriptContainerElement **)(lVar22 + 0x18) = pFVar23;
              pFVar23 = pFVar23 + 0x48;
            }
          }
          iVar27 = RenderGpuStatHeadings(local_1e8,local_204,*local_1f0);
          param_1 = local_1e0;
          *param_5 = *param_5 + iVar27;
          RenderArrayOfGpuStats
                    (local_1e8,local_204,param_5,
                     (TMap<FName,FGpuStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGpuStatMessage,0>_>
                      *)&local_d8,local_1e0);
          local_d8.HashSize = 0;
          *param_5 = *param_5 + local_1f8->StatFontHeight;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_d8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FGpuStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FGpuStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_d8.Elements);
        }
        if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.AllocatorInstance.Data);
        }
        param_2 = local_198;
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
          param_2 = local_198;
        }
      }
      local_200 = local_200 + 1;
      iVar27 = (param_1->ActiveStatGroups).Array.ArrayNum;
      local_1b8 = local_1b8 + 1;
    } while ((int)local_200 < iVar27);
  }
  return;
}

// RenderHierCycles @ 1487bdbd0

void __cdecl
RenderHierCycles(FCanvas *param_1,int param_2,int *param_3,FActiveStatGroupInfo *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  FTexture *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FStatRenderGlobals *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  pFVar9 = GetStatRenderGlobals();
  pFVar5 = GWhiteTexture;
  fVar4 = __real_bf800000;
  fVar3 = __real_3f800000;
  uVar10 = 0;
  if (0 < (param_4->HierAggregate).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (param_4->HierAggregate).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_4->HierAggregate).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar10 < (param_4->Indentation).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = *(int *)((param_4->Indentation).AllocatorInstance.Data + lVar11);
      if (pFVar5 != (FTexture *)0x0) {
        FCanvas::DrawTile(param_1,(double)param_2,
                          (double)(GStatFonts[(int)pFVar9->StatFontType].FontHeightOffset + *param_3
                                  ),
                          (double)(pFVar9->InterColumnOffset * 5 + pFVar9->AfterNameColumnOffset),
                          (double)pFVar9->StatFontHeight,0.0,0.0,fVar3,fVar3,
                          pFVar9->BackgroundColors + (uVar10 & 1),pFVar5,true);
      }
      iVar8 = RenderCycle((TStatMessage<EComplexStatField> *)(pFVar1 + (longlong)(int)uVar10 * 0x48)
                          ,param_1,param_2,*param_3,iVar8,true,fVar4,false);
      *param_3 = *param_3 + iVar8;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar10 < (param_4->HierAggregate).ArrayNum);
  }
  return;
}

// RenderMemoryCounter @ 1487bde30

int __cdecl
RenderMemoryCounter(FGameThreadStatsData *param_1,TStatMessage<EComplexStatField> *param_2,
                   FCanvas *param_3,int param_4,int param_5,float param_6,bool param_7)

{
  FLinearColor *pFVar1;
  double dVar2;
  UFont *pUVar3;
  longlong lVar4;
  FStatRenderGlobals *pFVar5;
  FString *pFVar6;
  size_t sVar7;
  long64 *plVar8;
  ForAnyElementType FVar9;
  undefined1 *puVar10;
  int iVar11;
  EMemoryCounterRegion EVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58 [2];
  
  EVar12 = (int)*(char *)((longlong)&(param_2->NameAndInfo).Number + 3) &
           (MCR_SamplePlatformSpecifcMemoryRegion|MCR_GPUDefragPool);
  pFVar5 = GetStatRenderGlobals();
  dVar2 = *(double *)((param_2->StatData).Pad + 0x10);
  pUVar3 = pFVar5->StatFont;
  FStatNameAndInfo::GetDescriptionFrom
            (&local_68,(FName)((ulonglong)param_2->NameAndInfo & 0x1ffffffffff));
  pwVar16 = L"";
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
  pFVar6 = ShortenName(local_58,(wchar_t *)FVar9.Data);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_78.DataPtr = L"";
  }
  else {
    local_78.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    local_78.Size = 0;
    if ((FScriptContainerElement *)local_78.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_1487bdee6;
  }
  sVar7 = wcslen(local_78.DataPtr);
  local_78.Size = (int)sVar7;
LAB_1487bdee6:
  pFVar1 = &pFVar5->StatColor;
  FCanvas::DrawShadowedString
            (param_3,(double)param_4,(double)param_5,&local_78,pUVar3,pFVar1,&FLinearColor::Black);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar11 = pFVar5->AfterNameColumnOffset + param_4;
  pFVar6 = GetMemoryString(local_58,(double)(float)dVar2,false);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  RightJustify(param_3,iVar11,param_5,pwVar15,pFVar1);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  iVar11 = iVar11 + pFVar5->InterColumnOffset;
  if (*(int *)&(param_1->PoolCapacity).field_0x8 != *(int *)&(param_1->PoolCapacity).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->PoolCapacity).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->PoolCapacity).field_0x38;
    }
    iVar13 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(param_1->PoolCapacity).field_0x48 - MCR_Physical & EVar12) * 4);
    if (iVar13 != -1) {
      do {
        if (*(EMemoryCounterRegion *)(*(longlong *)&param_1->PoolCapacity + (longlong)iVar13 * 0x18)
            == EVar12) {
          if (iVar13 != -1) {
            TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,0>_>
            ::FindChecked(&param_1->PoolCapacity,EVar12);
            FString::PrintfImpl(&local_68,L"%.0f%%");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar9.Data = local_68.Data.AllocatorInstance.Data;
            }
            RightJustify(param_3,iVar11,param_5,(wchar_t *)FVar9.Data,pFVar1);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar13 = *(int *)(*(longlong *)&param_1->PoolCapacity + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  iVar11 = iVar11 + pFVar5->InterColumnOffset;
  if (*(int *)&(param_1->PoolAbbreviation).field_0x8 !=
      *(int *)&(param_1->PoolAbbreviation).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->PoolAbbreviation).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->PoolAbbreviation).field_0x38;
    }
    iVar13 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(param_1->PoolAbbreviation).field_0x48 - MCR_Physical & EVar12) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&param_1->PoolAbbreviation;
      do {
        if (*(EMemoryCounterRegion *)((longlong)iVar13 * 0x20 + lVar4) == EVar12) {
          pFVar6 = TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FString,0>_>
                   ::FindChecked(&param_1->PoolAbbreviation,EVar12);
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          RightJustify(param_3,iVar11,param_5,pwVar15,pFVar1);
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + lVar4);
      } while (iVar13 != -1);
    }
  }
  iVar13 = pFVar5->InterColumnOffset;
  if (*(int *)&(param_1->PoolCapacity).field_0x8 != *(int *)&(param_1->PoolCapacity).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->PoolCapacity).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->PoolCapacity).field_0x38;
    }
    iVar14 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(param_1->PoolCapacity).field_0x48 - MCR_Physical & EVar12) * 4);
    if (iVar14 != -1) {
      do {
        if (*(EMemoryCounterRegion *)(*(longlong *)&param_1->PoolCapacity + (longlong)iVar14 * 0x18)
            == EVar12) {
          plVar8 = TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,__int64,0>_>
                   ::FindChecked(&param_1->PoolCapacity,EVar12);
          pFVar6 = GetMemoryString(local_58,(double)*plVar8,false);
          if ((pFVar6->Data).ArrayNum != 0) {
            pwVar16 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          RightJustify(param_3,iVar11 + iVar13,param_5,pwVar16,pFVar1);
          if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
          }
          break;
        }
        iVar14 = *(int *)(*(longlong *)&param_1->PoolCapacity + 0x10 + (longlong)iVar14 * 0x18);
      } while (iVar14 != -1);
    }
  }
  return pFVar5->StatFontHeight;
}

// RenderMemoryHeadings @ 1487be200

int __cdecl RenderMemoryHeadings(FCanvas *param_1,int param_2,int param_3)

{
  FLinearColor *pFVar1;
  int iVar2;
  FStatRenderGlobals *pFVar3;
  FStatRenderGlobals *pFVar4;
  int iVar5;
  double dVar6;
  int local_res10 [2];
  int local_res18 [4];
  TStringView<wchar_t> local_58 [2];
  
  pFVar3 = GetStatRenderGlobals();
  local_58[0].Size = 0xf;
  dVar6 = (double)param_3;
  pFVar1 = &pFVar3->HeadingColor;
  local_58[0].DataPtr = L"Memory Counters";
  FCanvas::DrawShadowedString
            (param_1,(double)param_2,dVar6,local_58,pFVar3->StatFont,pFVar1,&FLinearColor::Black);
  iVar5 = param_2 + pFVar3->AfterNameColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 7;
  local_58[0].DataPtr = L"UsedMax";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 7;
  local_58[0].DataPtr = L"UsedMax";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar5),dVar6,local_58,
             pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar5 = iVar5 + pFVar3->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 4;
  local_58[0].DataPtr = L"Mem%";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 4;
  local_58[0].DataPtr = L"Mem%";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar5),dVar6,local_58,
             pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar5 = iVar5 + pFVar3->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 7;
  local_58[0].DataPtr = L"MemPool";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 7;
  local_58[0].DataPtr = L"MemPool";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar5),dVar6,local_58,
             pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar2 = pFVar3->InterColumnOffset;
  pFVar4 = GetStatRenderGlobals();
  local_58[0].Size = 0xd;
  local_58[0].DataPtr = L"Pool Capacity";
  StringSize(pFVar4->StatFont,local_res10,local_res18,local_58);
  local_58[0].Size = 0xd;
  local_58[0].DataPtr = L"Pool Capacity";
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar4->InterColumnOffset - local_res10[0]) + iVar2 + iVar5),dVar6,
             local_58,pFVar4->StatFont,pFVar1,&FLinearColor::Black);
  iVar2 = pFVar3->StatFontHeight;
  return (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f) +
         iVar2 / 3 + (iVar2 >> 0x1f) + pFVar3->StatFontHeight;
}

// RenderMoreStatsLine @ 1487be4d0

int __cdecl RenderMoreStatsLine(FCanvas *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  UFont *pUVar2;
  FStatRenderGlobals *pFVar3;
  size_t sVar4;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar3 = GetStatRenderGlobals();
  FString::PrintfImpl(&local_18,
                      L"[%d more stats. Use the stats.MaxPerGroup CVar to increase the limit]");
  pUVar2 = pFVar3->StatFont;
  if (local_18.Data.ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.Size = 0;
    local_28.DataPtr = (wchar_t *)local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1487be540;
  }
  sVar4 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar4;
LAB_1487be540:
  FCanvas::DrawShadowedString
            (param_1,(double)param_2,(double)param_3,&local_28,pUVar2,&FLinearColor::Yellow,
             &FLinearColor::Black);
  iVar1 = pFVar3->StatFontHeight;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1;
}

// RenderStats @ 1487be5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RenderStats(FViewport *param_1,FCanvas *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  FGameThreadStatsData *pFVar2;
  UFont *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_void___cdecl_RenderStats(FViewport_*,FCanvas_*,int,int,int)_::_2_::FStat_STAT_RenderStats>
  FVar15;
  FLatestGameThreadStatsData *pFVar16;
  FStatRenderGlobals *this;
  longlong lVar17;
  int *piVar18;
  size_t sVar19;
  uint uVar20;
  float fVar21;
  int local_res20 [2];
  FName local_c0;
  FColor_u_0 local_b8 [2];
  FName local_b0;
  FName local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88;
  FName local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  TStringView<wchar_t> local_68 [3];
  
  local_res20[0] = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_RenderStats ==
        (FThreadSafeStaticStat<_void___cdecl_RenderStats(FViewport_*,FCanvas_*,int,int,int)_::_2_::FStat_STAT_RenderStats>
         )0x0) {
      pFVar14 = FName::FName(&local_88,"STAT_RenderStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderStats,*pFVar14,L"RenderStats",
                 "STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true,true,ST_int64,true,
                 false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar15 = StatPtr_STAT_RenderStats;
  if (StatPtr_STAT_RenderStats ==
      (FThreadSafeStaticStat<_void___cdecl_RenderStats(FViewport_*,FCanvas_*,int,int,int)_::_2_::FStat_STAT_RenderStats>
       )0x0) {
    pFVar14 = FName::FName(&local_80,"STAT_RenderStats");
    FVar15 = (FThreadSafeStaticStat<_void___cdecl_RenderStats(FViewport_*,FCanvas_*,int,int,int)_::_2_::FStat_STAT_RenderStats>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderStats,*pFVar14,
                          L"RenderStats","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c0 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((local_c0.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar7, bVar8 = bVar9, local_c0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = local_c0.ComparisonIndex.Value.Value;
        local_b0.Number = local_c0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StatsRender2.cpp"
                   ,0x42e);
        bVar7 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    bVar6 = bVar7;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_c0,CycleScopeStart);
      bVar10 = true;
      goto LAB_1487be769;
    }
  }
  bVar9 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  local_c0 = local_a8;
LAB_1487be769:
  pFVar16 = FLatestGameThreadStatsData::Get();
  pFVar2 = pFVar16->Latest;
  if ((pFVar2 != (FGameThreadStatsData *)0x0) && (pFVar2->bRenderStats != false)) {
    this = GetStatRenderGlobals();
    fVar1 = __real_3f800000;
    bVar11 = param_2->bStereoRendering;
    fVar21 = __real_3f800000;
    if (bVar11 == false) {
      fVar21 = param_2->DPIScale;
    }
    lVar17 = (**(code **)(param_1->_padding_ + 0x28))(param_1,local_78);
    iVar13 = *(int *)(lVar17 + 4);
    if (param_2->bStereoRendering == false) {
      fVar1 = param_2->DPIScale;
    }
    piVar18 = (int *)(**(code **)(param_1->_padding_ + 0x28))(param_1,local_70);
    FStatRenderGlobals::Initialize
              (this,(int)((float)*piVar18 / fVar1),(int)((float)iVar13 / fVar21),param_5,bVar11);
    if (pFVar2->bDrawOnlyRawStats == false) {
      RenderGroupedWithHierarchy(pFVar2,param_1,param_2,param_3,local_res20);
    }
    else {
      uVar20 = 0;
      if (0 < (pFVar2->GroupDescriptions).ArrayNum) {
        lVar17 = 0;
        do {
          pUVar3 = this->StatFont;
          uVar12 = 0;
          if ((int)uVar20 < (pFVar2->GroupDescriptions).ArrayNum) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pFVar2->GroupDescriptions).AllocatorInstance.Data;
          if (*(int *)(pFVar4 + lVar17 + 8) == 0) {
            local_98 = L"";
LAB_1487be92d:
            sVar19 = wcslen(local_98);
            iVar13 = (int)sVar19;
          }
          else {
            local_98 = *(wchar_t **)(pFVar4 + lVar17);
            iVar13 = 0;
            if (local_98 != (wchar_t *)0x0) goto LAB_1487be92d;
          }
          local_68[0]._12_4_ = uStack_8c;
          local_68[0].Size = iVar13;
          local_68[0].DataPtr = local_98;
          iStack_90 = iVar13;
          FCanvas::DrawShadowedString
                    (param_2,(double)param_3,(double)local_res20[0],local_68,pUVar3,&this->StatColor
                     ,&FLinearColor::Black);
          uVar20 = uVar20 + 1;
          local_res20[0] = local_res20[0] + this->StatFontHeight;
          lVar17 = lVar17 + 0x10;
          bVar6 = bVar7;
          bVar8 = bVar9;
        } while ((int)uVar20 < (pFVar2->GroupDescriptions).ArrayNum);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return;
}

// ResumeRenderAssetStreaming @ 1487c04c0

void __cdecl ResumeRenderAssetStreaming(void)

{
  LOCK();
  GRenderAssetStreamingSuspension = (atomic<int>)((int)GRenderAssetStreamingSuspension + -1);
  UNLOCK();
  return;
}

// RightJustify @ 1487c04d0

void __cdecl
RightJustify(FCanvas *param_1,int param_2,int param_3,wchar_t *param_4,FLinearColor *param_5)

{
  UFont *pUVar1;
  FStatRenderGlobals *pFVar2;
  size_t sVar3;
  int iVar4;
  int local_res10 [2];
  int local_res18 [2];
  TStringView<wchar_t> local_38;
  
  pFVar2 = GetStatRenderGlobals();
  iVar4 = 0;
  local_38.Size = iVar4;
  local_38.DataPtr = param_4;
  if (param_4 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_4);
    local_38.Size = (int)sVar3;
  }
  StringSize(pFVar2->StatFont,local_res10,local_res18,&local_38);
  pUVar1 = pFVar2->StatFont;
  local_38.DataPtr = param_4;
  if (param_4 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_4);
    iVar4 = (int)sVar3;
  }
  local_38.Size = iVar4;
  FCanvas::DrawShadowedString
            (param_1,(double)((pFVar2->InterColumnOffset - local_res10[0]) + param_2),
             (double)param_3,&local_38,pUVar1,param_5,&FLinearColor::Black);
  return;
}

// ShortenName @ 1487c3830

FString * __cdecl ShortenName(FString *__return_storage_ptr__,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FStatRenderGlobals *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FString::FString(__return_storage_ptr__,param_1);
  pFVar4 = GetStatRenderGlobals();
  iVar2 = GStatFonts[(int)pFVar4->StatFontType].MaxDisplayedChars;
  if (pFVar4->bIsStereo != false) {
    iVar2 = GStatFonts[(int)pFVar4->StatFontType].MaxDisplayedChars / 2;
  }
  iVar3 = (__return_storage_ptr__->Data).ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (iVar2 < iVar7) {
    if (iVar3 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    FString::FString(&local_28,
                     (wchar_t *)((longlong)pwVar6 + ((longlong)iVar7 - (longlong)iVar3) * 2));
    pFVar5 = FString::FString(&local_18,L"...");
    FString::ConcatFF(&local_38,pFVar5,&local_28);
    if (__return_storage_ptr__ != &local_38) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ShouldStaticMeshEvaluateWPOInRayTracing @ 1487c3dc0

bool __cdecl
ShouldStaticMeshEvaluateWPOInRayTracing
          (TVector<double> *param_1,TBoxSphereBounds<double,double> *param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  pTVar2 = CVarRayTracingStaticMeshesWPOCulling.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      bVar4 = (bool)(*pcVar1)();
      return bVar4;
    }
  }
  pTVar3 = CVarRayTracingStaticMeshesWPOCullingRadius.Ref;
  if (pTVar2->ShadowedValue[1] < 1) {
    bVar4 = true;
  }
  else {
    bVar4 = IsInParallelRenderingThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        bVar4 = (bool)(*pcVar1)();
        return bVar4;
      }
    }
    dVar9 = (param_1->field0_0x0)._s_0.Y - (param_2->Origin).field0_0x0._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.X - (param_2->Origin).field0_0x0._s_0.X;
    dVar5 = (param_1->field0_0x0)._s_0.Z - (param_2->Origin).field0_0x0._s_0.Z;
    auVar7._0_8_ = dVar6 * dVar6;
    auVar7._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9 * dVar9 + auVar7._0_8_ + dVar5 * dVar5;
    auVar8 = sqrtpd(auVar7,auVar8);
    bVar4 = auVar8._0_8_ <= (double)pTVar3->ShadowedValue[1] + param_2->SphereRadius;
  }
  return bVar4;
}

// SuspendRenderAssetStreaming @ 1487c7630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SuspendRenderAssetStreaming(void)

{
  longlong *plVar1;
  UObjectBaseUtility *this;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  EInternalObjectFlags EVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FRenderCommandList *pFVar14;
  FCommandList *pFVar15;
  FRenderCommandTag *pFVar16;
  undefined ***pppuVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  TObjectIterator<UStreamableRenderAsset> local_190;
  FString local_178;
  FString local_168;
  code *local_158 [2];
  undefined **local_148;
  code *pcStack_140;
  undefined8 local_138;
  undefined ***local_130;
  code *local_128 [2];
  undefined **local_118;
  code *pcStack_110;
  undefined8 local_108;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  code *pcStack_e0;
  undefined8 local_d8;
  undefined ***local_d0;
  byte local_c8;
  undefined1 local_b8 [16];
  undefined **local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8014357864225177648>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                         ,0x30,"IsInGameThread()"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  UNLOCK();
  if (GRenderAssetStreamingSuspension != (atomic<int>)0x0) {
    GRenderAssetStreamingSuspension = (atomic<int>)((int)GRenderAssetStreamingSuspension + 1);
    return;
  }
  uVar22 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_190.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ObjectArray.ArrayNum = 0;
  local_190.ObjectArray.ArrayMax = 0;
  local_190.Index = 0xffffffff;
  GRenderAssetStreamingSuspension = (atomic<int>)((int)GRenderAssetStreamingSuspension + 1);
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar13 = UStreamableRenderAsset::StaticClass();
  GetObjectsOfClass(pUVar13,&local_190.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  bVar5 = false;
LAB_1487c772a:
  do {
    TObjectIterator<UStreamableRenderAsset>::Advance(&local_190);
    lVar20 = (longlong)local_190.Index;
    if ((local_190.Index < 0) || (local_190.ObjectArray.ArrayNum <= local_190.Index))
    goto LAB_1487c78d9;
    uVar9 = 0;
    if (local_190.Index < local_190.ObjectArray.ArrayNum) {
      uVar9 = (uint)~local_190.Index >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar1 = *(longlong **)(local_190.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
    local_198 = plVar1;
  } while ((plVar1 == (longlong *)0x0) || ((int)plVar1[0x17] == -1));
  if (plVar1[7] == 0) {
    if (plVar1[0x1b] == 0) {
      cVar7 = (**(code **)(*plVar1 + 0x308))(plVar1);
      if (cVar7 == '\0') goto LAB_1487c772a;
    }
    else {
      if ((plVar1[0x1b] & 4U) == 0) goto LAB_1487c772a;
      cVar7 = (**(code **)(*plVar1 + 0x308))(plVar1);
      if (cVar7 == '\0') {
        bVar6 = IsInGameThread();
        if (bVar6) {
          *(byte *)(plVar1 + 0x1b) = *(byte *)(plVar1 + 0x1b) & 0xfb;
        }
        goto LAB_1487c772a;
      }
    }
  }
  bVar5 = true;
  if ((local_198[7] != 0) && (bVar5 = true, *(int *)(local_198[7] + 0x60) == 3)) {
    if ((local_1a8.Data <= (FScriptContainerElement *)&local_198) &&
       (((FScriptContainerElement *)&local_198 < local_1a8.Data + (longlong)local_1a0._4_4_ * 8 &&
        (bVar6 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (int)local_1a0;
    if ((int)local_1a0 == local_1a0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1a8,(int *)((longlong)&local_1a0 + 4));
    }
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar10 + 1);
    *(longlong **)(local_1a8.Data + (longlong)iVar10 * 8) = local_198;
  }
  goto LAB_1487c772a;
LAB_1487c78d9:
  if (local_190.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.ObjectArray.AllocatorInstance.Data);
  }
  fVar4 = __real_bc23d70a;
  fVar3 = __real_3c23d70a;
  uVar9 = 0;
  fVar24 = GStreamingFlushTimeOut;
  while ((int)local_1a0 != 0) {
    if ((fVar24 <= 0.0) && (0.0 < GStreamingFlushTimeOut)) goto LAB_1487c7be4;
    FWindowsPlatformProcess::Sleep(fVar3);
    local_130 = (undefined ***)0x0;
    local_148 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_140 = `SuspendRenderAssetStreaming'::__l15::<lambda_1>::<lambda_invoker_cdecl>;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>
                   ::Call;
    pFVar14 = FRenderCommandList::GetInstanceTLS();
    if (pFVar14 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_SuspendRenderAssetStreaming_::__l15::TSTR_FlushCommand77>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_158);
    }
    else {
      pFVar15 = FRenderCommandList::GetRenderThread(pFVar14);
      local_f8[0] = local_158[0];
      local_d0 = local_130;
      local_130 = (undefined ***)0x0;
      local_e8 = local_148;
      pcStack_e0 = pcStack_140;
      local_d8 = local_138;
      local_158[0] = (code *)0x0;
      local_c8 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`SuspendRenderAssetStreaming'::__l15::TSTR_FlushCommand77>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar15,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_f8,pFVar16);
      uVar21 = (ulonglong)local_c8;
      if ((2 < uVar21) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_f8[0] != (code *)0x0) {
          pppuVar17 = (undefined ***)(local_f8 + 2);
          if (local_d0 != (undefined ***)0x0) {
            pppuVar17 = local_d0;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])
                  ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_f8);
      }
    }
    if (local_158[0] != (code *)0x0) {
      pppuVar17 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar17 = local_130;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    FlushRenderingCommands();
    fVar24 = fVar24 + fVar4;
    uVar21 = uVar22;
    uVar23 = uVar22;
    if (0 < (int)local_1a0) {
      do {
        uVar19 = (uint)uVar21;
        uVar11 = uVar9;
        if ((int)uVar19 < (int)local_1a0) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        iVar10 = (int)local_1a0;
        if (uVar11 == 0) {
          bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)local_1a0;
        }
        if ((*(longlong *)(local_1a8.Data + uVar23) == 0) ||
           (lVar20 = *(longlong *)(*(longlong *)(local_1a8.Data + uVar23) + 0x38), lVar20 == 0)) {
LAB_1487c7af4:
          uVar11 = uVar9;
          if ((int)uVar19 < iVar10) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar10 = (int)local_1a0;
          }
          iVar12 = (iVar10 - uVar19) + -1;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(local_1a8.Data + (longlong)(int)uVar19 * 8,
                    local_1a8.Data + (longlong)(iVar10 - iVar12) * 8,(longlong)iVar12 << 3);
            iVar10 = (int)local_1a0;
          }
          local_1a0 = CONCAT44(local_1a0._4_4_,iVar10 + -1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&local_1a8,iVar10 + -1,(int *)((longlong)&local_1a0 + 4));
          uVar19 = uVar19 - 1;
          uVar23 = uVar23 - 8;
        }
        else if (*(int *)(lVar20 + 0x60) != 3) {
          iVar10 = (int)local_1a0;
          goto LAB_1487c7af4;
        }
        uVar21 = (ulonglong)(uVar19 + 1);
        uVar23 = uVar23 + 8;
      } while ((int)(uVar19 + 1) < (int)local_1a0);
    }
  }
  if ((fVar24 <= 0.0) && (0.0 < GStreamingFlushTimeOut)) {
LAB_1487c7be4:
    iVar10 = (int)local_1a0;
    if (1 < (byte)LogContentStreaming._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      iVar10 = (int)local_1a0;
    }
    uVar21 = uVar22;
    if (0 < iVar10) {
      do {
        uVar19 = (uint)uVar22;
        uVar11 = uVar9;
        if ((int)uVar19 < iVar10) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)local_1a0;
        }
        this = *(UObjectBaseUtility **)(local_1a8.Data + uVar21);
        if (this != (UObjectBaseUtility *)0x0) {
          if (((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) &&
             ((*(uint *)&this->field_0x8 & 0x18000) == 0)) {
            if (1 < (byte)LogContentStreaming._0_1_) {
              UObjectBaseUtility::GetFullName(this,&local_178,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
              FVar18.Data = local_178.Data.AllocatorInstance.Data;
LAB_1487c7d0c:
              if (FVar18.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar18.Data);
              }
            }
          }
          else if (1 < (byte)LogContentStreaming._0_1_) {
            UObjectBaseUtility::GetFullName(this,&local_168,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            FVar18.Data = local_168.Data.AllocatorInstance.Data;
            goto LAB_1487c7d0c;
          }
          iVar10 = (int)local_1a0;
        }
        uVar22 = (ulonglong)(uVar19 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar19 + 1) < iVar10);
    }
  }
  if (bVar5) {
    local_100 = (undefined ***)0x0;
    pcStack_110 = `SuspendRenderAssetStreaming'::__l90::<lambda_2>::<lambda_invoker_cdecl>;
    local_128[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>
                   ::Call;
    local_118 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pFVar14 = FRenderCommandList::GetInstanceTLS();
    if (pFVar14 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_SuspendRenderAssetStreaming_::__l90::TSTR_FlushCommand122>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
    }
    else {
      pFVar15 = FRenderCommandList::GetRenderThread(pFVar14);
      local_b8._0_8_ = local_128[0];
      local_90 = local_100;
      local_a8 = local_118;
      pcStack_a0 = pcStack_110;
      local_98 = local_108;
      local_128[0] = (code *)0x0;
      local_88 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`SuspendRenderAssetStreaming'::__l90::TSTR_FlushCommand122>::Get()
      ;
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar15,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_b8,pFVar16);
      uVar22 = (ulonglong)local_88;
      if ((2 < uVar22) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar22] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          pppuVar17 = (undefined ***)(local_b8 + 0x10);
          if (local_90 != (undefined ***)0x0) {
            pppuVar17 = local_90;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar22])(local_b8);
      }
    }
    if (local_128[0] != (code *)0x0) {
      pppuVar17 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar17 = local_100;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    FlushRenderingCommands();
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// ToggleForceDefaultMaterial @ 1487c9ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ToggleForceDefaultMaterial(void)

{
  undefined1 auStack_98 [32];
  FGlobalComponentReregisterContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FlushRenderingCommands();
  GForceDefaultMaterial = GForceDefaultMaterial == false;
  if (4 < (byte)LogStaticMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  }
  FGlobalComponentReregisterContext::FGlobalComponentReregisterContext(&local_78);
  FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(&local_78);
  return;
}

// ToggleReversedIndexBuffers @ 1487c9f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ToggleReversedIndexBuffers(void)

{
  undefined1 auStack_98 [32];
  FGlobalComponentReregisterContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FlushRenderingCommands();
  GUseReversedIndexBuffer = GUseReversedIndexBuffer == false;
  if (4 < (byte)LogStaticMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  }
  FGlobalComponentReregisterContext::FGlobalComponentReregisterContext(&local_78);
  FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(&local_78);
  return;
}

// ToggleShadowIndexBuffers @ 1487ca000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ToggleShadowIndexBuffers(void)

{
  undefined1 auStack_98 [32];
  FGlobalComponentReregisterContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FlushRenderingCommands();
  GUseShadowIndexBuffer = GUseShadowIndexBuffer == false;
  if (4 < (byte)LogStaticMesh._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  }
  FGlobalComponentReregisterContext::FGlobalComponentReregisterContext(&local_78);
  FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(&local_78);
  return;
}

// Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister @ 1487d2e20

UClass * __cdecl Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ServerStreamingLevelsVisibility",
               &Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton,
               AServerStreamingLevelsVisibility::
               StaticRegisterNativesAServerStreamingLevelsVisibility,0x310,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AServerStreamingLevelsVisibility>,
               InternalVTableHelperCtorCaller<AServerStreamingLevelsVisibility>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AServerStreamingLevelsVisibility.InnerSingleton;
}

// Z_Construct_UClass_AStaticMeshActor_NoRegister @ 1487d2ee0

UClass * __cdecl Z_Construct_UClass_AStaticMeshActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshActor",
               &Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton,
               AStaticMeshActor::StaticRegisterNativesAStaticMeshActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AStaticMeshActor>,
               InternalVTableHelperCtorCaller<AStaticMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AStaticMeshActor.InnerSingleton;
}

// Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_NoRegister @ 1487d2fa0

UClass * __cdecl Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorTextureStreamingBuildDataComponent",
               &Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton,
               UActorTextureStreamingBuildDataComponent::
               StaticRegisterNativesUActorTextureStreamingBuildDataComponent,0xc0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorTextureStreamingBuildDataComponent>,
               InternalVTableHelperCtorCaller<UActorTextureStreamingBuildDataComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.InnerSingleton;
}

// Z_Construct_UClass_UStaticMeshDescriptionBulkData_NoRegister @ 1487d3060

UClass * __cdecl Z_Construct_UClass_UStaticMeshDescriptionBulkData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshDescriptionBulkData",
               &Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton,
               UStaticMeshDescriptionBulkData::StaticRegisterNativesUStaticMeshDescriptionBulkData,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStaticMeshDescriptionBulkData>,
               InternalVTableHelperCtorCaller<UStaticMeshDescriptionBulkData>,aFStackX_8,
               UMeshDescriptionBaseBulkData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton;
}

// Z_Construct_UClass_UStreamableRenderAsset_NoRegister @ 1487d3070

UClass * __cdecl Z_Construct_UClass_UStreamableRenderAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamableRenderAsset",
               &Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton,
               UStreamableRenderAsset::StaticRegisterNativesUStreamableRenderAsset,0xe0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamableRenderAsset>,
               InternalVTableHelperCtorCaller<UStreamableRenderAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EChunkSeekTableMode @ 1487d3120

UEnum * __cdecl Z_Construct_UEnum_Engine_EChunkSeekTableMode(void)

{
  if (Z_Registration_Info_UEnum_EChunkSeekTableMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EChunkSeekTableMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EChunkSeekTableMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FStaticMeshSourceModel @ 1487d3160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStaticMeshSourceModel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.InnerSingleton,
               &Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStreamableTexture @ 1487d31e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStreamableTexture(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStreamableTexture.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStreamableTexture.InnerSingleton,
               &Z_Construct_UScriptStruct_FStreamableTexture_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStreamableTexture.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStreamableTexture.InnerSingleton;
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

// CVarSimpleStreamableAssetManagerConsiderVisibility'' @ 1504022c0

void __cdecl
`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
CVarSimpleStreamableAssetManagerConsiderVisibility__(void)

{
  FSimpleStreamableAssetManager::CVarSimpleStreamableAssetManagerConsiderVisibility._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &FSimpleStreamableAssetManager::CVarSimpleStreamableAssetManagerConsiderVisibility);
  return;
}

// CVarUseSimpleStreamableAssetManager'' @ 1504022e0

void __cdecl
`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManager__
          (void)

{
  FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManager._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManager);
  return;
}

// CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration'' @ 150402300

void __cdecl
`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration__(void)

{
  FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration.
  _0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &FSimpleStreamableAssetManager::
              CVarUseSimpleStreamableAssetManagerEnsureAssetUniqueOnRegistration);
  return;
}

// CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize'' @ 150402320

void __cdecl
`dynamic_atexit_destructor_for_'FSimpleStreamableAssetManager::
CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize__(void)

{
  FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &FSimpleStreamableAssetManager::CVarUseSimpleStreamableAssetManagerSparseArrayGrowSize)
  ;
  return;
}

// HandleDebugName_AssetList'' @ 150402340

void __cdecl `dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_AssetList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStreamableHandle::HandleDebugName_AssetList.Data.AllocatorInstance.Data;
  if (FStreamableHandle::HandleDebugName_AssetList.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStreamableHandle::HandleDebugName_AssetList.Data.AllocatorInstance.Data !=
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

// HandleDebugName_CombinedHandle'' @ 150402360

void __cdecl
`dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_CombinedHandle__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStreamableHandle::HandleDebugName_CombinedHandle.Data.AllocatorInstance.Data;
  if (FStreamableHandle::HandleDebugName_CombinedHandle.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStreamableHandle::HandleDebugName_CombinedHandle.Data.AllocatorInstance.Data !=
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

// HandleDebugName_Error'' @ 150402380

void __cdecl `dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_Error__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStreamableHandle::HandleDebugName_Error.Data.AllocatorInstance.Data;
  if (FStreamableHandle::HandleDebugName_Error.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStreamableHandle::HandleDebugName_Error.Data.AllocatorInstance.Data !=
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

// HandleDebugName_Preloading'' @ 1504023a0

void __cdecl `dynamic_atexit_destructor_for_'FStreamableHandle::HandleDebugName_Preloading__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStreamableHandle::HandleDebugName_Preloading.Data.AllocatorInstance.Data;
  if (FStreamableHandle::HandleDebugName_Preloading.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStreamableHandle::HandleDebugName_Preloading.Data.AllocatorInstance.Data !=
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

// Instance'' @ 1504023c0

void __cdecl `dynamic_atexit_destructor_for_'FStereoLayerAdditionalFlagsManager::Instance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStereoLayerAdditionalFlagsManager::Instance.SharedReferenceCount.ReferenceController);
  return;
}

// OnCreateRenderThreadResources'' @ 1504023e0

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

// OnDestroyRenderThreadResources'' @ 150402420

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

// OnLevelBeginMakingInvisible'' @ 150402460

void __cdecl
`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelBeginMakingInvisible__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLevelStreamingDelegates::OnLevelBeginMakingInvisible._8_8_,
             FLevelStreamingDelegates::OnLevelBeginMakingInvisible._16_4_);
  if (FLevelStreamingDelegates::OnLevelBeginMakingInvisible._8_8_ != 0) {
    FMemory::Free((void *)FLevelStreamingDelegates::OnLevelBeginMakingInvisible._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FLevelStreamingDelegates::OnLevelBeginMakingInvisible)
  ;
  return;
}

// OnLevelBeginMakingVisible'' @ 1504024a0

void __cdecl
`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelBeginMakingVisible__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLevelStreamingDelegates::OnLevelBeginMakingVisible._8_8_,
             FLevelStreamingDelegates::OnLevelBeginMakingVisible._16_4_);
  if (FLevelStreamingDelegates::OnLevelBeginMakingVisible._8_8_ != 0) {
    FMemory::Free((void *)FLevelStreamingDelegates::OnLevelBeginMakingVisible._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FLevelStreamingDelegates::OnLevelBeginMakingVisible);
  return;
}

// OnLevelStreamingStateChanged'' @ 1504024e0

void __cdecl
`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelStreamingStateChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLevelStreamingDelegates::OnLevelStreamingStateChanged._8_8_,
             FLevelStreamingDelegates::OnLevelStreamingStateChanged._16_4_);
  if (FLevelStreamingDelegates::OnLevelStreamingStateChanged._8_8_ != 0) {
    FMemory::Free((void *)FLevelStreamingDelegates::OnLevelStreamingStateChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FLevelStreamingDelegates::OnLevelStreamingStateChanged
            );
  return;
}

// OnLevelStreamingTargetStateChanged'' @ 150402520

void __cdecl
`dynamic_atexit_destructor_for_'FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._8_8_,
             FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._16_4_);
  if (FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._8_8_ != 0) {
    FMemory::Free((void *)FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged);
  return;
}

// ShaderTypeRegistration'' @ 150402560

void __cdecl `dynamic_atexit_destructor_for_'FStereoLayerPS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150402570

void __cdecl `dynamic_atexit_destructor_for_'FStereoLayerPS_External::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150402580

void __cdecl `dynamic_atexit_destructor_for_'FStereoLayerVS::ShaderTypeRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowParallelForDuringIncrementalUpdate'' @ 150402590

void __cdecl
UE::Private::RenderAssetStreamingManager::
_dynamic_atexit_destructor_for__CVarAllowParallelForDuringIncrementalUpdate__(void)

{
  CVarAllowParallelForDuringIncrementalUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowParallelForDuringIncrementalUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableAssetUpdateAbandons'' @ 1504025b0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableAssetUpdateAbandons__(void)

{
  CVarEnableAssetUpdateAbandons._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableAssetUpdateAbandons);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNaniteNaterialOverrides'' @ 1504025d0

void __cdecl Nanite::_dynamic_atexit_destructor_for__CVarEnableNaniteNaterialOverrides__(void)

{
  CVarEnableNaniteNaterialOverrides._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNaniteNaterialOverrides);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFlushDeferredMipLevelChangeCallbacksBeforeGC'' @ 1504025f0

void __cdecl
_dynamic_atexit_destructor_for__CVarFlushDeferredMipLevelChangeCallbacksBeforeGC__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFlushDeferredMipLevelChangeCallbacksBeforeGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceStartInVR'' @ 150402610

void __cdecl _dynamic_atexit_destructor_for__CVarForceStartInVR__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceStartInVR);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogAsyncLoadErrorsAsErrors'' @ 150402630

void __cdecl _dynamic_atexit_destructor_for__CVarLogAsyncLoadErrorsAsErrors__(void)

{
  CVarLogAsyncLoadErrorsAsErrors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogAsyncLoadErrorsAsErrors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogStreamableFailuresAsErrors'' @ 150402650

void __cdecl _dynamic_atexit_destructor_for__CVarLogStreamableFailuresAsErrors__(void)

{
  CVarLogStreamableFailuresAsErrors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogStreamableFailuresAsErrors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNoRefBiasQualityLevel'' @ 150402670

void __cdecl _dynamic_atexit_destructor_for__CVarNoRefBiasQualityLevel__(void)

{
  CVarNoRefBiasQualityLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNoRefBiasQualityLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumStatsPerGroup'' @ 150402690

void __cdecl _dynamic_atexit_destructor_for__CVarNumStatsPerGroup__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNumStatsPerGroup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarProcessAddedRenderAssetsAfterAsyncWork'' @ 1504026b0

void __cdecl _dynamic_atexit_destructor_for__CVarProcessAddedRenderAssetsAfterAsyncWork__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarProcessAddedRenderAssetsAfterAsyncWork);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingStaticMeshes'' @ 1504026d0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingStaticMeshes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingStaticMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingStaticMeshesWPO'' @ 1504026f0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPO__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingStaticMeshesWPO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingStaticMeshesWPOCulling'' @ 150402710

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPOCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingStaticMeshesWPOCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingStaticMeshesWPOCullingRadius'' @ 150402730

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPOCullingRadius__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingStaticMeshesWPOCullingRadius);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingStaticMeshesWPOSink'' @ 150402750

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingStaticMeshesWPOSink__(void)

{
  CVarRayTracingStaticMeshesWPOSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderNaniteMeshes'' @ 150402770

void __cdecl _dynamic_atexit_destructor_for__CVarRenderNaniteMeshes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderNaniteMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStaticMeshComponentBoostPSOPrecachePri'' @ 150402790

void __cdecl _dynamic_atexit_destructor_for__CVarStaticMeshComponentBoostPSOPrecachePri__(void)

{
  CVarStaticMeshComponentBoostPSOPrecachePri._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStaticMeshComponentBoostPSOPrecachePri);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamableDelegateDelayFrames'' @ 1504027b0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamableDelegateDelayFrames__(void)

{
  CVarStreamableDelegateDelayFrames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamableDelegateDelayFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamableErrorOnRequest'' @ 1504027d0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamableErrorOnRequest__(void)

{
  CVarStreamableErrorOnRequest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamableErrorOnRequest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamableFlushAllAsyncLoadRequestsOnWait'' @ 1504027f0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamableFlushAllAsyncLoadRequestsOnWait__(void)

{
  CVarStreamableFlushAllAsyncLoadRequestsOnWait._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamableFlushAllAsyncLoadRequestsOnWait);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamableStripDebugName'' @ 150402810

void __cdecl _dynamic_atexit_destructor_for__CVarStreamableStripDebugName__(void)

{
  CVarStreamableStripDebugName._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamableStripDebugName);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamableStripDebugNameInShipping'' @ 150402830

void __cdecl _dynamic_atexit_destructor_for__CVarStreamableStripDebugNameInShipping__(void)

{
  CVarStreamableStripDebugNameInShipping._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamableStripDebugNameInShipping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingAllowFastForceResident'' @ 150402850

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingAllowFastForceResident__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingAllowFastForceResident);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingAllowParallelUpdateStreamingRenderAssets'' @ 150402870

void __cdecl
_dynamic_atexit_destructor_for__CVarStreamingAllowParallelUpdateStreamingRenderAssets__(void)

{
  CVarStreamingAllowParallelUpdateStreamingRenderAssets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingAllowParallelUpdateStreamingRenderAssets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingDeferredRemoveDynamicInstances'' @ 150402890

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingDeferredRemoveDynamicInstances__(void)

{
  CVarStreamingDeferredRemoveDynamicInstances._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingDeferredRemoveDynamicInstances);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingEnableStrippingDuplicatePrimitiveComponent'' @ 1504028b0

void __cdecl
_dynamic_atexit_destructor_for__CVarStreamingEnableStrippingDuplicatePrimitiveComponent__(void)

{
  CVarStreamingEnableStrippingDuplicatePrimitiveComponent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingEnableStrippingDuplicatePrimitiveComponent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingFlushTimeOut'' @ 1504028d0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingFlushTimeOut__(void)

{
  CVarStreamingFlushTimeOut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamingFlushTimeOut);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingMaxReferenceChecksBeforeStreamOut'' @ 1504028f0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingMaxReferenceChecksBeforeStreamOut__(void)

{
  CVarStreamingMaxReferenceChecksBeforeStreamOut._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingMaxReferenceChecksBeforeStreamOut);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingOverlapAssetAndLevelTicks'' @ 150402910

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingOverlapAssetAndLevelTicks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingOverlapAssetAndLevelTicks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingParallelRenderAssetsNumWorkgroups'' @ 150402930

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingParallelRenderAssetsNumWorkgroups__(void)

{
  CVarStreamingParallelRenderAssetsNumWorkgroups._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingParallelRenderAssetsNumWorkgroups);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamingStressTestExtraAsyncLatency'' @ 150402950

void __cdecl _dynamic_atexit_destructor_for__CVarStreamingStressTestExtraAsyncLatency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamingStressTestExtraAsyncLatency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSyncStatesWhenBlocking'' @ 150402970

void __cdecl _dynamic_atexit_destructor_for__CVarSyncStatesWhenBlocking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSyncStatesWhenBlocking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTextureStreamingAmortizeCPUToGPUCopy'' @ 150402990

void __cdecl _dynamic_atexit_destructor_for__CVarTextureStreamingAmortizeCPUToGPUCopy__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTextureStreamingAmortizeCPUToGPUCopy);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTextureStreamingMaxNumTexturesToStreamPerFrame'' @ 1504029b0

void __cdecl
_dynamic_atexit_destructor_for__CVarTextureStreamingMaxNumTexturesToStreamPerFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTextureStreamingMaxNumTexturesToStreamPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate'' @ 1504029d0

void __cdecl
_dynamic_atexit_destructor_for__CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate__(void)

{
  CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTickAbandonedRenderAssetUpdatesOnStreamingUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseBackgroundThreadPool'' @ 1504029f0

void __cdecl _dynamic_atexit_destructor_for__CVarUseBackgroundThreadPool__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseBackgroundThreadPool);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWorkerCountForParallelForDuringIncrementalUpdate'' @ 150402a10

void __cdecl
UE::Private::RenderAssetStreamingManager::
_dynamic_atexit_destructor_for__CVarWorkerCountForParallelForDuringIncrementalUpdate__(void)

{
  CVarWorkerCountForParallelForDuringIncrementalUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWorkerCountForParallelForDuringIncrementalUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150402a30

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_char,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150402a60

void __cdecl
``FStaticMeshStreamIn::CreateBuffers'::__l15::<lambda_1>::operator()<FName>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150402a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GStreamableErrorOnRequest'' @ 150402a80

void __cdecl _dynamic_atexit_destructor_for__GStreamableErrorOnRequest__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GStreamableErrorOnRequest.Data.AllocatorInstance.Data;
  if (GStreamableErrorOnRequest.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GStreamableErrorOnRequest.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GToggleForceDefaultMaterialCmd'' @ 150402aa0

void __cdecl _dynamic_atexit_destructor_for__GToggleForceDefaultMaterialCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GToggleForceDefaultMaterialCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GToggleReversedIndexBuffersCmd'' @ 150402ac0

void __cdecl _dynamic_atexit_destructor_for__GToggleReversedIndexBuffersCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GToggleReversedIndexBuffersCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GToggleShadowIndexBuffersCmd'' @ 150402ae0

void __cdecl _dynamic_atexit_destructor_for__GToggleShadowIndexBuffersCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GToggleShadowIndexBuffersCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LogStereoLayerFlags'' @ 150402b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStereoLayerFlags__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStereoLayerFlags);
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamableManager'' @ 150402b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamableManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamableManager);
  return;
}

// `dynamic_atexit_destructor_for_'StatCmdEngineExec'' @ 150402b40

void __cdecl _dynamic_atexit_destructor_for__StatCmdEngineExec__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&StatCmdEngineExec);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150402b60

void __cdecl
`FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTextureDeprecationPass::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150402b80

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

void __cdecl
`FStereoLayerPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150402ba0

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

void __cdecl
`FStereoLayerPS_External::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150402bc0

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

void __cdecl
`FStereoLayerVS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_TextureStreaming'' @ 150402be0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_TextureStreaming__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_TextureStreaming.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_TextureStreaming.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_TextureStreaming.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'__GTraceCounterAddedObjects'' @ 150402c00

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterAddedObjects__(void)

{
  if ((__GTraceCounterAddedObjects.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterAddedObjects.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterRegisteredAssets'' @ 150402c20

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterRegisteredAssets__(void)

{
  if ((__GTraceCounterRegisteredAssets.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterRegisteredAssets.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterRegisteredObjects'' @ 150402c40

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterRegisteredObjects__(void)

{
  if ((__GTraceCounterRegisteredObjects.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterRegisteredObjects.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterRemovedObjects'' @ 150402c60

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterRemovedObjects__(void)

{
  if ((__GTraceCounterRemovedObjects.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterRemovedObjects.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterStreamableAssets'' @ 150402c80

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterStreamableAssets__(void)

{
  if ((__GTraceCounterStreamableAssets.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterStreamableAssets.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterUpdatedObjects'' @ 150402ca0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterUpdatedObjects__(void)

{
  if ((__GTraceCounterUpdatedObjects.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterUpdatedObjects.CounterName);
    return;
  }
  return;
}

