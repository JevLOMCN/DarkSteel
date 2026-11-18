// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 825

// CVarSink'' @ 1410fe070

void __cdecl `dynamic_initializer_for_'FGPUSkinCache::CVarSink__(void)

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
    puVar3[3] = FGPUSkinCache::CVarSinkFunction;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  FGPUSkinCache::CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  FGPUSkinCache::CVarSink.Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  FGPUSkinCache::CVarSink.Handle.Handle.ID = (FDelegateHandle)0;
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
  FGPUSkinCache::CVarSink.Handle.Handle.ID = (FDelegateHandle)*puVar5;
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
  atexit(`dynamic_atexit_destructor_for_'FGPUSkinCache::CVarSink__);
  return;
}

// CreatedDelegate'' @ 1410fe200

void __cdecl `dynamic_initializer_for_'UGameViewportClient::CreatedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGameViewportClient::CreatedDelegate__);
  return;
}

// EnabledStats'' @ 1410fe220

void __cdecl `dynamic_initializer_for_'UGameViewportClient::EnabledStats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGameViewportClient::EnabledStats__);
  return;
}

// FeatureName'' @ 1410fe240

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// GameModeInitializedEvent'' @ 1410fe260

void __cdecl `dynamic_initializer_for_'FGameModeEvents::GameModeInitializedEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameModeEvents::GameModeInitializedEvent__);
  return;
}

// GameModeLogoutEvent'' @ 1410fe280

void __cdecl `dynamic_initializer_for_'FGameModeEvents::GameModeLogoutEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameModeEvents::GameModeLogoutEvent__);
  return;
}

// GameModeMatchStateSetEvent'' @ 1410fe2a0

void __cdecl `dynamic_initializer_for_'FGameModeEvents::GameModeMatchStateSetEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameModeEvents::GameModeMatchStateSetEvent__);
  return;
}

// GameModePostLoginEvent'' @ 1410fe2c0

void __cdecl `dynamic_initializer_for_'FGameModeEvents::GameModePostLoginEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameModeEvents::GameModePostLoginEvent__);
  return;
}

// GameModePreLoginEvent'' @ 1410fe2e0

void __cdecl `dynamic_initializer_for_'FGameModeEvents::GameModePreLoginEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameModeEvents::GameModePreLoginEvent__);
  return;
}

// OnCreateRenderThreadResources'' @ 1410fe300

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1410fe320

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ScreenshotCapturedDelegate'' @ 1410fe340

void __cdecl `dynamic_initializer_for_'UGameViewportClient::ScreenshotCapturedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGameViewportClient::ScreenshotCapturedDelegate__);
  return;
}

// ShaderTypeRegistration'' @ 1410fe360

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

void __cdecl `dynamic_initializer_for_'FGPUSkinCacheCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGPUSkinCacheCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FGPUSkinCacheCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FGPUSkinCacheCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410fe3b0

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

void __cdecl `dynamic_initializer_for_'FInitDynamicMeshBoundsCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FInitDynamicMeshBoundsCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FInitDynamicMeshBoundsCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FInitDynamicMeshBoundsCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410fe400

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
`dynamic_initializer_for_'FRecomputeTangentsPerTriangleCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FRecomputeTangentsPerTriangleCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FRecomputeTangentsPerTriangleCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FRecomputeTangentsPerTriangleCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1410fe450

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

void __cdecl `dynamic_initializer_for_'FRecomputeTangentsPerVertexCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FRecomputeTangentsPerVertexCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FRecomputeTangentsPerVertexCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FRecomputeTangentsPerVertexCS::ShaderTypeRegistration__);
  return;
}

// StaticType'' @ 1410fe4a0

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

void __cdecl `dynamic_initializer_for_'FGeometryCacheVertexVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FGeometryCacheVertexVertexFactory::StaticType,L"FGeometryCacheVertexVertexFactory",
             L"/Engine/Private/GeometryCacheVertexFactory.ush",
             SupportsPSOPrecaching|SupportsRayTracing|SupportsPrimitiveIdStream|SupportsPositionOnly
             |SupportsDynamicLighting|UsedWithMaterials,
             ConstructVertexFactoryParameters<FGeometryCacheVertexVertexFactory>,
             GetVertexFactoryParametersLayout<FGeometryCacheVertexVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FGeometryCacheVertexVertexFactory>,
             FGeometryCacheVertexVertexFactory::GetPSOPrecacheVertexFetchElements,
             FGeometryCacheVertexVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FGeometryCacheVertexVertexFactory::StaticType__);
  return;
}

// StaticType'' @ 1410fe520

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

void __cdecl `dynamic_initializer_for_'FGeometryCollectionVertexFactory::StaticType__(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&FGeometryCollectionVertexFactory::StaticType,L"FGeometryCollectionVertexFactory",
             L"/Engine/Private/GeometryCollectionVertexFactory.ush",
             SupportsManualVertexFetch|SupportsPSOPrecaching|SupportsRayTracingDynamicGeometry|
             SupportsRayTracing|SupportsPrimitiveIdStream|SupportsPositionOnly|
             SupportsPrecisePrevWorldPos|SupportsDynamicLighting|SupportsStaticLighting|
             UsedWithMaterials,ConstructVertexFactoryParameters<FGeometryCollectionVertexFactory>,
             GetVertexFactoryParametersLayout<FGeometryCollectionVertexFactory>,
             GetVertexFactoryParametersElementShaderBindings<FGeometryCollectionVertexFactory>,
             FGeometryCollectionVertexFactory::GetPSOPrecacheVertexFetchElements,
             FGeometryCollectionVertexFactory::ShouldCompilePermutation);
  atexit(`dynamic_atexit_destructor_for_'FGeometryCollectionVertexFactory::StaticType__);
  return;
}

// ViewportRenderedDelegate'' @ 1410fe5a0

void __cdecl `dynamic_initializer_for_'UGameViewportClient::ViewportRenderedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGameViewportClient::ViewportRenderedDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarAllowGPUSkinCache'' @ 1410fe5c0

void __cdecl _dynamic_initializer_for__CVarAllowGPUSkinCache__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAllowGPUSkinCache,L"r.SkinCache.Allow",local_res8,
             L"Whether or not to allow the GPU skin Cache system to be enabled.\n",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowGPUSkinCache__);
  return;
}

// `dynamic_initializer_for_'CVarAllowListenParamSentToClient'' @ 1410fe610

void __cdecl
UE::GameModeBase::Private::_dynamic_initializer_for__CVarAllowListenParamSentToClient__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowListenParamSentToClient,L"net.fix.AllowListenParamSentToClient",
             &bAllowListenParamSentToClient,
             L"When true, allow \'?listen\' sent to the client during Travel. This would confuse the client and cause crashes with RPCs."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowListenParamSentToClient__);
  return;
}

// `dynamic_initializer_for_'CVarAllowPIESeamlessTravel'' @ 1410fe660

void __cdecl UE::GameModeBase::Private::_dynamic_initializer_for__CVarAllowPIESeamlessTravel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowPIESeamlessTravel,L"net.AllowPIESeamlessTravel",&bAllowPIESeamlessTravel,
             L"When true, allow seamless travels in single process PIE.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowPIESeamlessTravel__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultGPUSkinCacheBehavior'' @ 1410fe6b0

void __cdecl _dynamic_initializer_for__CVarDefaultGPUSkinCacheBehavior__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDefaultGPUSkinCacheBehavior,L"r.SkinCache.DefaultBehavior",local_res8,
             L"Default behavior if all skeletal meshes are included/excluded from the skin cache. If Support Ray Tracing is enabled on a mesh, will force inclusive behavior on that mesh.\n Exclusive ( 0): All skeletal meshes are excluded from the skin cache. Each must opt in individually.\n Inclusive ( 1): All skeletal meshes are included into the skin cache. Each must opt out individually. (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultGPUSkinCacheBehavior__);
  return;
}

// `dynamic_initializer_for_'CVarEnableGPUSkinCache'' @ 1410fe700

void __cdecl _dynamic_initializer_for__CVarEnableGPUSkinCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableGPUSkinCache,L"r.SkinCache.Mode",local_res8,
             L"Whether or not to use the GPU compute skinning cache.\nThis will perform skinning on a compute job and not skin on the vertex shader.\nRequires r.SkinCache.CompileShaders=1 and r.SkinCache.Allow=1\n 0: off\n 1: on(default)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarEnableGPUSkinCache__);
  return;
}

// `dynamic_initializer_for_'CVarEnableGPUSkinCacheShaders'' @ 1410fe750

void __cdecl _dynamic_initializer_for__CVarEnableGPUSkinCacheShaders__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableGPUSkinCacheShaders,L"r.SkinCache.CompileShaders",
             &GEnableGPUSkinCacheShaders,
             L"Whether or not to compile the GPU compute skinning cache shaders.\nThis will compile the shaders for skinning on a compute job and not skin on the vertex shader.\nGPUSkinVertexFactory.usf needs to be touched to cause a recompile if this changes.\n0 is off(default), 1 is on"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarEnableGPUSkinCacheShaders__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents'' @ 1410fe7a0

void __cdecl _dynamic_initializer_for__CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents,
             L"r.SkinCache.UseDuplicatedVerticesForRecomputeTangents",
             &GUseDuplicatedVerticesForRecomputeTangents,
             L"0: Disable usage of duplicated vertices for runtime tangent recomputation/\n1: Use stored duplicated vertices if they are available (default).\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCacheDebug'' @ 1410fe7f0

void __cdecl _dynamic_initializer_for__CVarGPUSkinCacheDebug__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarGPUSkinCacheDebug,L"r.SkinCache.Debug",local_res8,
             L"A scaling constant passed to the SkinCache shader, useful for debugging",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinCacheDebug__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCacheNumDispatchesToCapture'' @ 1410fe840

void __cdecl _dynamic_initializer_for__CVarGPUSkinCacheNumDispatchesToCapture__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUSkinCacheNumDispatchesToCapture,L"r.SkinCache.Capture",&GNumDispatchesToCapture
             ,L"Trigger a render capture for the next skin cache dispatches.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinCacheNumDispatchesToCapture__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCachePrintMemorySummary'' @ 1410fe890

void __cdecl _dynamic_initializer_for__CVarGPUSkinCachePrintMemorySummary__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUSkinCachePrintMemorySummary,L"r.SkinCache.PrintMemorySummary",
             &GSkinCachePrintMemorySummary,
             L"Print break down of memory usage. 0: off (default), 1: print for N frames",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinCachePrintMemorySummary__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCacheRecomputeTangents'' @ 1410fe8e0

void __cdecl _dynamic_initializer_for__CVarGPUSkinCacheRecomputeTangents__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGPUSkinCacheRecomputeTangents,L"r.SkinCache.RecomputeTangents",local_res8,
             L"This option enables recomputing the vertex tangents on the GPU.\nCan be changed at runtime, requires both r.SkinCache.CompileShaders=1, r.SkinCache.Mode=1, r.SkinCache.Allow=1 and r.SkinCache.StoreDuplicatedVerticesForRecomputeTangents\n 0: off\n 1: on, forces all skinned object to Recompute Tangents\n 2: on, only recompute tangents on skinned objects who ticked the Recompute Tangents checkbox(default)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinCacheRecomputeTangents__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCacheSceneMemoryLimitInMB'' @ 1410fe930

void __cdecl _dynamic_initializer_for__CVarGPUSkinCacheSceneMemoryLimitInMB__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 128.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarGPUSkinCacheSceneMemoryLimitInMB,L"r.SkinCache.SceneMemoryLimitInMB",local_res8,
             L"Maximum memory allowed to be allocated per World/Scene in Megs",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinCacheSceneMemoryLimitInMB__);
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents'' @ 1410fe980

void __cdecl
_dynamic_initializer_for__CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents,
             L"r.SkinCache.StoreDuplicatedVerticesForRecomputeTangents",
             &GStoreDuplicatedVerticesForRecomputeTangents,
             L"0: Don\'t store duplicated vertices for all skeletal mesh render sections. It will still be stored if the render section has bRecomputeTangent set. (default)\n1: Store duplicated vertices for all skeletal mesh render sections.\n"
             ,4);
  atexit(
        _dynamic_atexit_destructor_for__CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents__
        );
  return;
}

// `dynamic_initializer_for_'CVarGPUSkinNumTangentIntermediateBuffers'' @ 1410fe9d0

void __cdecl _dynamic_initializer_for__CVarGPUSkinNumTangentIntermediateBuffers__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarGPUSkinNumTangentIntermediateBuffers,L"r.SkinCache.NumTangentIntermediateBuffers",
             local_res8,
             L"How many intermediate buffers to use for intermediate results while\ndoing Recompute Tangents; more may allow the GPU to overlap compute jobs."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGPUSkinNumTangentIntermediateBuffers__);
  return;
}

// `dynamic_initializer_for_'CVarMaxPlayersOverride'' @ 1410fea20

void __cdecl _dynamic_initializer_for__CVarMaxPlayersOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxPlayersOverride,L"net.MaxPlayersOverride",local_res8,
             L"If greater than 0, will override the standard max players count. Useful for testing full servers."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxPlayersOverride__);
  return;
}

// `dynamic_initializer_for_'CVarRecomputeTangentsParallelDispatch'' @ 1410fea70

void __cdecl _dynamic_initializer_for__CVarRecomputeTangentsParallelDispatch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRecomputeTangentsParallelDispatch,L"r.SkinCache.RecomputeTangentsParallelDispatch"
             ,&GRecomputeTangentsParallelDispatch,
             L"This option enables parallel dispatches for recompute tangents.\n 0: off (default), triangle pass is interleaved with vertex pass, requires resource barriers in between. \n 1: on, batch triangle passes together, resource barrier, followed by vertex passes together, cost more memory. \n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRecomputeTangentsParallelDispatch__);
  return;
}

// `dynamic_initializer_for_'CVarRemapDeviceIdForOffsetPlayerGamepadIds'' @ 1410feac0

void __cdecl _dynamic_initializer_for__CVarRemapDeviceIdForOffsetPlayerGamepadIds__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRemapDeviceIdForOffsetPlayerGamepadIds,
             L"input.bRemapDeviceIdForOffsetPlayerGamepadIds",local_res8,
             L"If true, then when bOffsetPlayerGamepadIds is true we will create a new Input Device Id\nas needed for the next local player. This fixes the behavior in split screen.\nNote: This CVar will be removed in a future release, this is a temporary wrapper for bug fix behavior."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRemapDeviceIdForOffsetPlayerGamepadIds__);
  return;
}

// `dynamic_initializer_for_'CVarScreenshotDelegate'' @ 1410feb10

void __cdecl _dynamic_initializer_for__CVarScreenshotDelegate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenshotDelegate,L"r.ScreenshotDelegate",local_res8,
             L"ScreenshotDelegates prevent processing of incoming screenshot request and break some features. This allows to disable them.\nIdeally we rework the delegate code to not make that needed.\n 0: off\n 1: delegates are on (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScreenshotDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarScreenshotTextureArrayIndex'' @ 1410feb60

void __cdecl _dynamic_initializer_for__CVarScreenshotTextureArrayIndex__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenshotTextureArrayIndex,L"r.Screenshot.TextureArrayIndex",local_res8,
             L"Texture array slice to use for screenshots when r.Screenshot.TextureArrayMode = 0",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarScreenshotTextureArrayIndex__);
  return;
}

// `dynamic_initializer_for_'CVarScreenshotTextureArrayMode'' @ 1410febb0

void __cdecl _dynamic_initializer_for__CVarScreenshotTextureArrayMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarScreenshotTextureArrayMode,L"r.Screenshot.TextureArrayMode",local_res8,
             L"Choose how screenshots should be handled when the viewport is using a texture array. Collation is supported only for non-HDR, non-UI screenshots. 0: Include only a single array slice (default, controlled by r.Screenshot.TextureArrayIndex)\n 1: Collate all array slices horizontally (left-to-right)\n 2: Collate all array slices vertically (top-to-bottom)\nWhen collating, the screenshot resolution is used for each individual array slice, so requesting a 400x400 screenshot from\na viewport with two slices and then collating horizontally will yield a final screenshot that\'s 800x400."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarScreenshotTextureArrayMode__);
  return;
}

// `dynamic_initializer_for_'CVarSecondaryScreenPercentage'' @ 1410fec00

void __cdecl _dynamic_initializer_for__CVarSecondaryScreenPercentage__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarSecondaryScreenPercentage,L"r.SecondaryScreenPercentage.GameViewport",local_res8,
             L"Override secondary screen percentage for game viewport.\n 0: Compute secondary screen percentage = 100 / DPIScalefactor automaticaly (default);\n 1: override secondary screen percentage."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSecondaryScreenPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarSetBlackBordersEnabled'' @ 1410fec50

void __cdecl _dynamic_initializer_for__CVarSetBlackBordersEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSetBlackBordersEnabled,L"r.BlackBorders",local_res8,
             L"To draw black borders around the rendered image\n(prevents artifacts from post processing passes that read outside of the image e.g. PostProcessAA)\nin pixels, 0:off"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSetBlackBordersEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarSkinCacheAsyncCompute'' @ 1410feca0

void __cdecl _dynamic_initializer_for__CVarSkinCacheAsyncCompute__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkinCacheAsyncCompute,L"r.SkinCache.AsyncCompute",&GSkinCacheAsyncCompute,
             L" 0: off\n 1: on\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSkinCacheAsyncCompute__);
  return;
}

// `dynamic_initializer_for_'CVarSkinCacheDynamicMeshBounds'' @ 1410fecf0

void __cdecl _dynamic_initializer_for__CVarSkinCacheDynamicMeshBounds__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarSkinCacheDynamicMeshBounds,L"r.SkinCache.DynamicMeshBounds",
             GSkinCacheDynamicMeshBounds,
             L"If enabled, skin cache will generate tight mesh bounds that are used during instance culling.\n 0 - disabled support compiled out of all shaders.\n 1 - enabled for all platforms that support atomic operations.\n 2 - auto (default), enabled for higher end platforms (currently those supporting Nanite).\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarSkinCacheDynamicMeshBounds__);
  return;
}

// `dynamic_initializer_for_'CVarSkipCompilingGPUSkinVF'' @ 1410fed40

void __cdecl _dynamic_initializer_for__CVarSkipCompilingGPUSkinVF__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSkipCompilingGPUSkinVF,L"r.SkinCache.SkipCompilingGPUSkinVF",local_res8,
             L"Reduce GPU Skin Vertex Factory shader permutations. Cannot be disabled while the skin cache is turned off.\n False ( 0): Compile all GPU Skin Vertex factory variants.\n True  ( 1): Don\'t compile all GPU Skin Vertex factory variants."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSkipCompilingGPUSkinVF__);
  return;
}

// `dynamic_initializer_for_'CVarTransparentViewportClear'' @ 1410fed90

void __cdecl _dynamic_initializer_for__CVarTransparentViewportClear__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarTransparentViewportClear,L"r.TransparentViewportClear",local_res8,
             L"If true, then the viewport will clear to transparent instead of black.\nThis can be useful with r.PostProcessing.PropagateAlpha if the game view\ndoes not cover the whole window."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTransparentViewportClear__);
  return;
}

// `dynamic_initializer_for_'CVar_GameUserSettings_WindowPositionsMaxSize'' @ 1410fede0

void __cdecl _dynamic_initializer_for__CVar_GameUserSettings_WindowPositionsMaxSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x20;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVar_GameUserSettings_WindowPositionsMaxSize,
             L"GameUserSettings.WindowPositionsMaxSize",local_res8,
             L"Maximum number of saved window positions for the -SaveWinPos command-line option.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVar_GameUserSettings_WindowPositionsMaxSize__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper269'' @ 1410fee30

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper269__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_27>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper269,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper271'' @ 1410fee90

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper271__(void)

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
            (&DelayedAutoRegisterHelper271,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'FGCBoneLooseParametersMetadataRegistration'' @ 1410feef0

void __cdecl _dynamic_initializer_for__FGCBoneLooseParametersMetadataRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGCBoneLooseParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FGCBoneLooseParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(_dynamic_atexit_destructor_for__FGCBoneLooseParametersMetadataRegistration__);
  return;
}

// `dynamic_initializer_for_'FGeometryCacheManualVertexFetchUniformBufferParametersMetadataRegistration'' @ 1410fef40

void __cdecl
_dynamic_initializer_for__FGeometryCacheManualVertexFetchUniformBufferParametersMetadataRegistration__
          (void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FGeometryCacheManualVertexFetchUniformBufferParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(
        _dynamic_atexit_destructor_for__FGeometryCacheManualVertexFetchUniformBufferParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'FGeometryCacheVertexFactoryUniformBufferParametersMetadataRegistration'' @ 1410fef90

void __cdecl
_dynamic_initializer_for__FGeometryCacheVertexFactoryUniformBufferParametersMetadataRegistration__
          (void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FGeometryCacheVertexFactoryUniformBufferParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(
        _dynamic_atexit_destructor_for__FGeometryCacheVertexFactoryUniformBufferParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'FGeometryCollectionVertexFactoryUniformShaderParametersMetadataRegistration'' @ 1410fefe0

void __cdecl
_dynamic_initializer_for__FGeometryCollectionVertexFactoryUniformShaderParametersMetadataRegistration__
          (void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
             ::Call;
  FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
            (&FGeometryCollectionVertexFactoryUniformShaderParametersMetadataRegistration,
             (TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *)&local_18);
  atexit(
        _dynamic_atexit_destructor_for__FGeometryCollectionVertexFactoryUniformShaderParametersMetadataRegistration__
        );
  return;
}

// `dynamic_initializer_for_'GCsvLocalPlayers'' @ 1410ff030

void __cdecl _dynamic_initializer_for__GCsvLocalPlayers__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCsvLocalPlayers__);
  return;
}

// `dynamic_initializer_for_'GDefaultGeometryCacheVertexBuffer'' @ 1410ff050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDefaultGeometryCacheVertexBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GDefaultGeometryCacheVertexBuffer);
  GDefaultGeometryCacheVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFDefaultGeometryCacheVertexBuffer___00__6B_;
  GDefaultGeometryCacheVertexBuffer._40_8_ = 0;
  if (GDefaultGeometryCacheVertexBuffer._24_4_ != -1) {
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
  GDefaultGeometryCacheVertexBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GDefaultGeometryCacheVertexBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GDefaultGeometryCacheVertexBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GDefaultGeometryCacheVertexBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GDefaultGeometryCacheVertexBuffer,(FRenderCommandPipe *)0x0)
  ;
  atexit(_dynamic_atexit_destructor_for__GDefaultGeometryCacheVertexBuffer__);
  return;
}

// `dynamic_initializer_for_'GDummyTangentBuffer'' @ 1410ff120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDummyTangentBuffer__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&GDummyTangentBuffer);
  GDummyTangentBuffer._0_8_ = &___7__TGlobalResource_VFDummyTangentBuffer___00__6B_;
  GDummyTangentBuffer._40_8_ = 0;
  if (GDummyTangentBuffer._24_4_ != -1) {
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
  GDummyTangentBuffer._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GDummyTangentBuffer._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GDummyTangentBuffer,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GDummyTangentBuffer__);
    return;
  }
  BeginInitResource((FRenderResource *)&GDummyTangentBuffer,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GDummyTangentBuffer__);
  return;
}

// `dynamic_initializer_for_'GPUStat_GPUSkinCache'' @ 1410ff1f0

void __cdecl _dynamic_initializer_for__GPUStat_GPUSkinCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_GPUSkinCache__);
  return;
}

// `dynamic_initializer_for_'GSkelMeshExecHelper'' @ 1410ff210

void __cdecl _dynamic_initializer_for__GSkelMeshExecHelper__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&GSkelMeshExecHelper);
  GSkelMeshExecHelper = (FSkinCacheExecHelper)&___7FSkinCacheExecHelper__6B_;
  atexit(_dynamic_atexit_destructor_for__GSkelMeshExecHelper__);
  return;
}

// `dynamic_initializer_for_'LogGameMode'' @ 1410ff250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameMode__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGameMode,L"LogGameMode",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameMode__);
  return;
}

// `dynamic_initializer_for_'LogGameNetworkManager'' @ 1410ff290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameNetworkManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGameNetworkManager,L"LogGameNetworkManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameNetworkManager__);
  return;
}

// `dynamic_initializer_for_'LogGameSession'' @ 1410ff2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameSession__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGameSession,L"LogGameSession",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameSession__);
  return;
}

// `dynamic_initializer_for_'LogGameState'' @ 1410ff310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameState__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGameState,L"LogGameState",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameState__);
  return;
}

// `dynamic_initializer_for_'LogGameUserSettings'' @ 1410ff350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameUserSettings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGameUserSettings,L"LogGameUserSettings",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameUserSettings__);
  return;
}

// `dynamic_initializer_for_'LogGeomTools'' @ 1410ff390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGeomTools__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGeomTools,L"LogGeomTools",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGeomTools__);
  return;
}

// `dynamic_initializer_for_'LogQuadTree'' @ 1410ff3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogQuadTree__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogQuadTree,L"LogQuadTree",Log,Log);
  atexit(_dynamic_atexit_destructor_for__LogQuadTree__);
  return;
}

// `dynamic_initializer_for_'LogSkinCache'' @ 1410ff410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkinCache__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSkinCache,L"LogSkinCache",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSkinCache__);
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_CanSpectate'' @ 1410ff450

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_CanSpectate__(void)

{
  FName::FName(&NAME_AGameModeBase_CanSpectate,L"CanSpectate");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_ChoosePlayerStart'' @ 1410ff470

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_ChoosePlayerStart__(void)

{
  FName::FName(&NAME_AGameModeBase_ChoosePlayerStart,L"ChoosePlayerStart");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_FindPlayerStart'' @ 1410ff490

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_FindPlayerStart__(void)

{
  FName::FName(&NAME_AGameModeBase_FindPlayerStart,L"FindPlayerStart");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_GetDefaultPawnClassForController'' @ 1410ff4b0

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_GetDefaultPawnClassForController__(void)

{
  FName::FName(&NAME_AGameModeBase_GetDefaultPawnClassForController,
               L"GetDefaultPawnClassForController");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_HandleStartingNewPlayer'' @ 1410ff4d0

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_HandleStartingNewPlayer__(void)

{
  FName::FName(&NAME_AGameModeBase_HandleStartingNewPlayer,L"HandleStartingNewPlayer");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_InitStartSpot'' @ 1410ff4f0

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_InitStartSpot__(void)

{
  FName::FName(&NAME_AGameModeBase_InitStartSpot,L"InitStartSpot");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_InitializeHUDForPlayer'' @ 1410ff510

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_InitializeHUDForPlayer__(void)

{
  FName::FName(&NAME_AGameModeBase_InitializeHUDForPlayer,L"InitializeHUDForPlayer");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_K2_OnChangeName'' @ 1410ff530

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_K2_OnChangeName__(void)

{
  FName::FName(&NAME_AGameModeBase_K2_OnChangeName,L"K2_OnChangeName");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_K2_OnLogout'' @ 1410ff550

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_K2_OnLogout__(void)

{
  FName::FName(&NAME_AGameModeBase_K2_OnLogout,L"K2_OnLogout");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_K2_OnRestartPlayer'' @ 1410ff570

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_K2_OnRestartPlayer__(void)

{
  FName::FName(&NAME_AGameModeBase_K2_OnRestartPlayer,L"K2_OnRestartPlayer");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_K2_OnSwapPlayerControllers'' @ 1410ff590

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_K2_OnSwapPlayerControllers__(void)

{
  FName::FName(&NAME_AGameModeBase_K2_OnSwapPlayerControllers,L"K2_OnSwapPlayerControllers");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_K2_PostLogin'' @ 1410ff5b0

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_K2_PostLogin__(void)

{
  FName::FName(&NAME_AGameModeBase_K2_PostLogin,L"K2_PostLogin");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_MustSpectate'' @ 1410ff5d0

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_MustSpectate__(void)

{
  FName::FName(&NAME_AGameModeBase_MustSpectate,L"MustSpectate");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_PlayerCanRestart'' @ 1410ff5f0

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_PlayerCanRestart__(void)

{
  FName::FName(&NAME_AGameModeBase_PlayerCanRestart,L"PlayerCanRestart");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_ShouldReset'' @ 1410ff610

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_ShouldReset__(void)

{
  FName::FName(&NAME_AGameModeBase_ShouldReset,L"ShouldReset");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_SpawnDefaultPawnAtTransform'' @ 1410ff630

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_SpawnDefaultPawnAtTransform__(void)

{
  FName::FName(&NAME_AGameModeBase_SpawnDefaultPawnAtTransform,L"SpawnDefaultPawnAtTransform");
  return;
}

// `dynamic_initializer_for_'NAME_AGameModeBase_SpawnDefaultPawnFor'' @ 1410ff650

void __cdecl _dynamic_initializer_for__NAME_AGameModeBase_SpawnDefaultPawnFor__(void)

{
  FName::FName(&NAME_AGameModeBase_SpawnDefaultPawnFor,L"SpawnDefaultPawnFor");
  return;
}

// `dynamic_initializer_for_'SplitScreenSwapControllersCommand'' @ 1410ff670

void __cdecl _dynamic_initializer_for__SplitScreenSwapControllersCommand__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"SplitScreen.RotateControllerIds",
                      L"Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller. Alias to \'SSSwapController\'"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&SplitScreenSwapControllersCommand,pIVar5);
  SplitScreenSwapControllersCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
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
  atexit(_dynamic_atexit_destructor_for__SplitScreenSwapControllersCommand__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BreakHitResult'' @ 1410ff800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BreakHitResult__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BreakHitResult == (FThreadSafeStaticStat<FStat_STAT_BreakHitResult>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BreakHitResult");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BreakHitResult,*pFVar1,L"BreakHitResult",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1410ff890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_NumBuffers'' @ 1410ff920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_NumBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_NumBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_NumBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumBuffers,*pFVar1,
               L"Num Buffers","STATGROUP_GPUSkinCache","STATCAT_Advanced",L"GPU Skin Cache",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_NumDispatches'' @ 1410ff9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_NumDispatches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_NumDispatches ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumDispatches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_NumDispatches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumDispatches,*pFVar1,
               L"Num Dispatches","STATGROUP_GPUSkinCache","STATCAT_Advanced",L"GPU Skin Cache",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers'' @ 1410ffa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_NumRayTracingBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumRayTracingBuffers,*pFVar1,
               L"Num RayTracing Buffers","STATGROUP_GPUSkinCache","STATCAT_Advanced",
               L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches'' @ 1410ffad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumRayTracingDispatches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_NumRayTracingDispatches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumRayTracingDispatches,
               *pFVar1,L"Num RayTracing Dispatches","STATGROUP_GPUSkinCache","STATCAT_Advanced",
               L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_NumSectionsProcessed'' @ 1410ffb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_NumSectionsProcessed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_NumSectionsProcessed ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumSectionsProcessed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_NumSectionsProcessed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_NumSectionsProcessed,*pFVar1,
               L"Num Sections Processed","STATGROUP_GPUSkinCache","STATCAT_Advanced",
               L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents'' @ 1410ffbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_NumTrianglesForRecomputeTangents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_GPUSkinCache_NumTrianglesForRecomputeTangents,*pFVar1,
               L"Num Triangles for Recompute Tangents","STATGROUP_GPUSkinCache","STATCAT_Advanced",
               L"GPU Skin Cache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed'' @ 1410ffc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TangentsIntermediateMemUsed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_TangentsIntermediateMemUsed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_TangentsIntermediateMemUsed,
               *pFVar1,L"Intermediate buffer for Recompute Tangents","STATGROUP_GPUSkinCache",
               "STATCAT_Advanced",L"GPU Skin Cache",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_TotalMemUsed'' @ 1410ffd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_TotalMemUsed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_TotalMemUsed ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalMemUsed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_TotalMemUsed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_TotalMemUsed,*pFVar1,
               L"Total Memory Bytes Used","STATGROUP_GPUSkinCache","STATCAT_Advanced",
               L"GPU Skin Cache",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_TotalNumChunks'' @ 1410ffda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_TotalNumChunks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_TotalNumChunks ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalNumChunks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_TotalNumChunks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_TotalNumChunks,*pFVar1,
               L"Num Sections Skinned","STATGROUP_GPUSkinCache","STATCAT_Advanced",L"GPU Skin Cache"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GPUSkinCache_TotalNumVertices'' @ 1410ffe30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GPUSkinCache_TotalNumVertices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GPUSkinCache_TotalNumVertices ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSkinCache_TotalNumVertices>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GPUSkinCache_TotalNumVertices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinCache_TotalNumVertices,*pFVar1,
               L"Num Vertices Skinned","STATGROUP_GPUSkinCache","STATCAT_Advanced",L"GPU Skin Cache"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GetPlayerStateFromUniqueId'' @ 1410ffec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GetPlayerStateFromUniqueId__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GetPlayerStateFromUniqueId ==
      (FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GetPlayerStateFromUniqueId");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetPlayerStateFromUniqueId,*pFVar1,
               L"GetPlayerStateFromUniqueId","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MakeHitResult'' @ 1410fff50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MakeHitResult__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MakeHitResult == (FThreadSafeStaticStat<FStat_STAT_MakeHitResult>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MakeHitResult");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MakeHitResult,*pFVar1,L"MakeHitResult",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SpawnTime'' @ 1410fffe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SpawnTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SpawnTime == (FThreadSafeStaticStat<FStat_STAT_SpawnTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SpawnTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpawnTime,*pFVar1,L"SpawnTime",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UIDrawingTime'' @ 141100070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UIDrawingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UIDrawingTime == (FThreadSafeStaticStat<FStat_STAT_UIDrawingTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UIDrawingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIDrawingTime,*pFVar1,L"UI Drawing Time",
               "STATGROUP_UI","STATCAT_Advanced",L"UI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h__Script_Engine_3905268751'' @ 141100100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h__Script_Engine_3905268751__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h__Script_Engine_202618345'' @ 141100140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h__Script_Engine_202618345__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedBlueprintDelegateBinding_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h__Script_Engine_3387466027'' @ 141100190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h__Script_Engine_3387466027__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h__Script_Engine_41950689'' @ 1411001d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h__Script_Engine_41950689__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h__Script_Engine_577262710'' @ 141100220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h__Script_Engine_577262710__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h__Script_Engine_2605718369'' @ 141100260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h__Script_Engine_2605718369__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h__Script_Engine_3200306406'' @ 1411002a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h__Script_Engine_3200306406__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h__Script_Engine_267322996'' @ 1411002e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h__Script_Engine_267322996__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h__Script_Engine_1457730805'' @ 141100330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h__Script_Engine_1457730805__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerController @ 147c16740

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerController_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID @ 147c16780

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromID_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromPlatformUser @ 147c167c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromPlatformUser(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerFromPlatformUser_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID @ 147c16800

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerControllerID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn @ 147c16840

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerPawn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerState @ 147c16880

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerStateFromUniqueNetId @ 147c168c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerStateFromUniqueNetId(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerStateFromUniqueNetId_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds @ 147c16900

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetRealTimeSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel @ 147c16940

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetStreamingLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGameSession_NoRegister @ 147c16980

UClass * __cdecl Z_Construct_UClass_AGameSession_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameSession.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameSession",
               &Z_Registration_Info_UClass_AGameSession.InnerSingleton,
               AGameSession::StaticRegisterNativesAGameSession,0x2e8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameSession>,
               InternalVTableHelperCtorCaller<AGameSession>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameSession.InnerSingleton;
}

// Z_Construct_UFunction_UGameplayStatics_GetSurfaceType @ 147c16a40

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetSurfaceType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetSurfaceType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds @ 147c16b40

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetTimeSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds @ 147c16c50

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetUnpausedTimeSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode @ 147c16c90

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetViewportMouseCaptureMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix @ 147c16cd0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetViewProjectionMatrix_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds @ 147c16d10

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetWorldDeltaSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation @ 147c16d50

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetWorldOriginLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount @ 147c16e50

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GrassOverlappingSphereCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c16e90

void __cdecl
Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_HasLaunchOption @ 147c16ea0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_HasLaunchOption(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_HasLaunchOption_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c16ee0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_HasOption @ 147c16ef0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_HasOption(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGameplayStatics_HasOption_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c16f30

void __cdecl
Z_Construct_UFunction_UGameplayStatics_IsAnyLocalPlayerCameraWithinRange_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_IsAnyLocalPlayerCameraWithinRange @ 147c16f40

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_IsAnyLocalPlayerCameraWithinRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_IsAnyLocalPlayerCameraWithinRange_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c16f80

void __cdecl
Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay @ 147c16f90

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_IsGamePaused @ 147c16fd0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_IsGamePaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_IsGamePaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime @ 147c17010

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c17050

void __cdecl
Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled @ 147c17060

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_IsSplitscreenForceDisabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds @ 147c170a0

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c170e0

void __cdecl
Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot @ 147c170f0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_LoadGameFromSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_HasBegunPlay @ 147c17130

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_HasBegunPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c17170

void __cdecl
Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bMakeVisibleAfterLoad_SetBit @ 147c17180

void __cdecl
Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bMakeVisibleAfterLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bShouldBlockOnLoad_SetBit @ 147c17190

void __cdecl
Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::NewProp_bShouldBlockOnLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_AGameStateBase_HasMatchEnded @ 147c171a0

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_HasMatchEnded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c171e0

void __cdecl
Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel @ 147c171f0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_LoadStreamLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_HasMatchStarted @ 147c17230

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_HasMatchStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameViewportClient @ 147c17270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameViewportClient(void)

{
  if (Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton,
               &Z_Construct_UClass_UGameViewportClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton;
}

// NewProp_bMakeVisibleAfterLoad_SetBit @ 147c172b0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_LoadStreamLevelBySoftObjectPtr_Statics::
NewProp_bMakeVisibleAfterLoad_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bShouldBlockOnLoad_SetBit @ 147c172c0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_LoadStreamLevelBySoftObjectPtr_Statics::
NewProp_bShouldBlockOnLoad_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass @ 147c172d0

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay @ 147c17310

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget @ 147c17350

UFunction * __cdecl Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_LoadStreamLevelBySoftObjectPtr @ 147c17390

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_LoadStreamLevelBySoftObjectPtr(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_LoadStreamLevelBySoftObjectPtr_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble @ 147c173d0

UFunction * __cdecl
Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea @ 147c17410

UFunction * __cdecl Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass @ 147c17450

UFunction * __cdecl Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameViewportClient_SSSwapControllers @ 147c17490

UFunction * __cdecl Z_Construct_UFunction_UGameViewportClient_SSSwapControllers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bBlockingHit_SetBit @ 147c174d0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bBlockingHit_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bInitialOverlap_SetBit @ 147c174e0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::NewProp_bInitialOverlap_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bReplicatedHasBegunPlay_SetBit @ 147c174f0

void __cdecl
Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e8) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_MakeHitResult @ 147c17500

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_MakeHitResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_MakeHitResult_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c17540

void __cdecl
Z_Construct_UFunction_UGameplayStatics_ObjectIsA_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_ObjectIsA @ 147c17550

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ObjectIsA(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGameplayStatics_ObjectIsA_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147c17850

void * __thiscall
FDefaultGeometryCacheVertexBuffer::_scalar_deleting_destructor_
          (FDefaultGeometryCacheVertexBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewProp_bAbsolute_SetBit @ 147c178a0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::NewProp_bAbsolute_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_OpenLevel @ 147c178b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_OpenLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGameplayStatics_OpenLevel_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147c178f0

void * __thiscall
TGlobalResource<FDefaultGeometryCacheVertexBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FDefaultGeometryCacheVertexBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDefaultGeometryCacheVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewProp_bAbsolute_SetBit @ 147c17c10

void __cdecl
Z_Construct_UFunction_UGameplayStatics_OpenLevelBySoftObjectPtr_Statics::NewProp_bAbsolute_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// `scalar_deleting_destructor' @ 147c17c20

void * __thiscall
FDummyTangentBuffer::_scalar_deleting_destructor_(FDummyTangentBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->SRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_UGameplayStatics @ 147c17c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayStatics(void)

{
  if (Z_Registration_Info_UClass_UGameplayStatics.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayStatics.OuterSingleton,
               &Z_Construct_UClass_UGameplayStatics_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayStatics.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147c17cb0

void * __thiscall
TGlobalResource<FDummyTangentBuffer,1>::_scalar_deleting_destructor_
          (TGlobalResource<FDummyTangentBuffer,1> *this,uint param_1)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyTangentBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UFunction_UGameplayStatics_OpenLevelBySoftObjectPtr @ 147c17d10

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_OpenLevelBySoftObjectPtr(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_OpenLevelBySoftObjectPtr_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_ParseOption @ 147c17d50

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ParseOption(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ParseOption_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect @ 147c17d90

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ActivateReverbEffect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D @ 147c17de0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PlayDialogue2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_AnnounceAccessibleString @ 147c180c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_AnnounceAccessibleString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_AnnounceAccessibleString_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147c18130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c18350

void * __thiscall
FSkinCacheExecHelper::_scalar_deleting_destructor_(FSkinCacheExecHelper *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UGameplayStatics_ApplyDamage @ 147c18390

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ApplyDamage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ApplyDamage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation @ 147c183d0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PlayDialogueAtLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsUISound_SetBit @ 147c18410

void __cdecl
Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::NewProp_bIsUISound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage @ 147c18420

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ApplyPointDamage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameUserSettings @ 147c18460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameUserSettings(void)

{
  if (Z_Registration_Info_UClass_UGameUserSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameUserSettings.OuterSingleton,
               &Z_Construct_UClass_UGameUserSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameUserSettings.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EWindowMode @ 147c184a0

UEnum * __cdecl Z_Construct_UEnum_Engine_EWindowMode(void)

{
  if (Z_Registration_Info_UEnum_EWindowMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWindowMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWindowMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWindowMode.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature @ 147c184e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EWindowMode_StaticEnum @ 147c18520

UEnum * __cdecl EWindowMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindowMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWindowMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWindowMode,(UObject *)pUVar1,L"EWindowMode");
  }
  return Z_Registration_Info_UEnum_EWindowMode.OuterSingleton;
}

// Z_Construct_UFunction_UGameplayStatics_PlaySound2D @ 147c18560

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PlaySound2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PlaySound2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDoFullDamage_SetBit @ 147c185a0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_bDoFullDamage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c185b0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults @ 147c185c0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings @ 147c18600

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation @ 147c18640

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PlaySoundAtLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCheckForCommandLineOverrides_SetBit @ 147c18680

void __cdecl
Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::
NewProp_bCheckForCommandLineOverrides_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage @ 147c18690

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings @ 147c186d0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bOrientShakeTowardsEpicenter_SetBit @ 147c18710

void __cdecl
Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::
NewProp_bOrientShakeTowardsEpicenter_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bCheckForCommandLineOverrides_SetBit @ 147c18720

void __cdecl
Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::
NewProp_bCheckForCommandLineOverrides_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UGameUserSettings_NoRegister @ 147c18730

UClass * __cdecl Z_Construct_UClass_UGameUserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameUserSettings",
               &Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton,
               UGameUserSettings::StaticRegisterNativesUGameUserSettings,0x170,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"GameUserSettings",
               InternalConstructor<UGameUserSettings>,
               InternalVTableHelperCtorCaller<UGameUserSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton;
}

// Z_Construct_UFunction_UGameUserSettings_ApplySettings @ 147c187e0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ApplySettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c18820

void __cdecl
Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake @ 147c18830

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PlayWorldCameraShake_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode @ 147c18870

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 147c188b0

void __cdecl
Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff @ 147c188c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ApplyRadialDamageWithFalloff_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier @ 147c18900

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PopSoundMixModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput @ 147c18940

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PrimeAllSoundsInSoundClass @ 147c18980

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PrimeAllSoundsInSoundClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PrimeAllSoundsInSoundClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c189c0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality @ 147c189d0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange @ 147c18a10

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_AreAnyListenersWithinRange_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PrimeSound @ 147c18a50

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PrimeSound(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PrimeSound_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel @ 147c18a90

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c18ad0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bPlayerViewportRelative_SetBit @ 147c18ae0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::
NewProp_bPlayerViewportRelative_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c18af0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled @ 147c18b00

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_AreSubtitlesEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits @ 147c18b40

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen @ 147c18b80

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ProjectWorldToScreen_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution @ 147c18bc0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier @ 147c18cb0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_PushSoundMixModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass @ 147c18cf0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_BeginDeferredActorSpawnFromClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale @ 147c18d30

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNoCollisionFail_SetBit @ 147c18d70

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::
NewProp_bNoCollisionFail_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero @ 147c18d80

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_RebaseLocalOriginOntoZero_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode @ 147c18dc0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint @ 147c18e00

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_BeginSpawningActorFromBlueprint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal @ 147c18e40

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_RebaseZeroOriginOntoLocal_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition @ 147c18e80

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c18ec0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c8) = 1;
  return;
}

// NewProp_bDestroyPawn_SetBit @ 147c18ed0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::NewProp_bDestroyPawn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution @ 147c18ee0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced @ 147c18f20

UFunction * __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_RemovePlayer @ 147c18f60

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_RemovePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_RemovePlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c18fa0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality @ 147c18fb0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTracePath_SetBit @ 147c18ff0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::
NewProp_bTracePath_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot @ 147c19000

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SaveGameToSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTraceComplex_SetBit @ 147c19040

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::
NewProp_bTraceComplex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetFramePace @ 147c19050

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetFramePace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c19090

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c190a0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetActiveSpatialPluginByName_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit @ 147c190b0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetActiveSpatialPluginByName @ 147c190f0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetActiveSpatialPluginByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetActiveSpatialPluginByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode @ 147c19130

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix @ 147c19170

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetBaseSoundMix_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType @ 147c191b0

UFunction * __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGameState @ 147c191f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameState(void)

{
  if (Z_Registration_Info_UClass_AGameState.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameState.OuterSingleton,
               &Z_Construct_UClass_AGameState_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameState.OuterSingleton;
}

// Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings @ 147c19230

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 147c19270

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_AGameStateBase @ 147c19280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameStateBase(void)

{
  if (Z_Registration_Info_UClass_AGameStateBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameStateBase.OuterSingleton,
               &Z_Construct_UClass_AGameStateBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameStateBase.OuterSingleton;
}

// Z_Construct_UFunction_AGameState_OnRep_ElapsedTime @ 147c192c0

UFunction * __cdecl Z_Construct_UFunction_AGameState_OnRep_ElapsedTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering @ 147c19300

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetEnableWorldRendering_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality @ 147c19340

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameState_OnRep_MatchState @ 147c19380

UFunction * __cdecl Z_Construct_UFunction_AGameState_OnRep_MatchState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisable_SetBit @ 147c193c0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::NewProp_bDisable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bTracePath_SetBit @ 147c193d0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::
NewProp_bTracePath_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// NewProp_bTraceComplex_SetBit @ 147c193e0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::
NewProp_bTraceComplex_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x169) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c193f0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode @ 147c19400

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen @ 147c19440

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetForceDisableSplitscreen_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPaused_SetBit @ 147c19480

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_bPaused_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c19490

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution @ 147c194a0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetGamePaused @ 147c194e0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetGamePaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetGamePaused_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel @ 147c19520

UFunction * __cdecl
Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel @ 147c19560

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality @ 147c195a0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters @ 147c195e0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetGlobalListenerFocusParameters_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFavorHighArc_SetBit @ 147c19620

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::
NewProp_bFavorHighArc_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bDrawDebug_SetBit @ 147c19630

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::
NewProp_bDrawDebug_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode @ 147c19640

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAcceptClosestOnNoSolutions_SetBit @ 147c19680

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::
NewProp_bAcceptClosestOnNoSolutions_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c19690

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 99) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale @ 147c196a0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation @ 147c196e0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetGlobalPitchModulation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity @ 147c19720

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_BlueprintSuggestProjectileVelocity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGameStateBase_NoRegister @ 147c19760

UClass * __cdecl Z_Construct_UClass_AGameStateBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameStateBase",
               &Z_Registration_Info_UClass_AGameStateBase.InnerSingleton,
               AGameStateBase::StaticRegisterNativesAGameStateBase,0x318,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AGameStateBase>,InternalVTableHelperCtorCaller<AGameStateBase>,
               local_res8,AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameStateBase.InnerSingleton;
}

// Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality @ 147c19820

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation @ 147c19860

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetGlobalTimeDilation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bBlockingHit_SetBit @ 147c198a0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bBlockingHit_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x100) = 1;
  return;
}

// NewProp_bInitialOverlap_SetBit @ 147c198b0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::NewProp_bInitialOverlap_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x101) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled @ 147c198c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetMaxAudioChannelsScaled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx @ 147c19900

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID @ 147c19a00

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetPlayerControllerID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized @ 147c19a40

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetScreenResolution @ 147c19a80

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetScreenResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_BreakHitResult @ 147c19ac0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_BreakHitResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_BreakHitResult_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetPlayerPlatformUserId @ 147c19b00

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetPlayerPlatformUserId(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetPlayerPlatformUserId_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetShadingQuality @ 147c19b40

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetShadingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale @ 147c19b80

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetSoundClassDistanceScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetShadowQuality @ 147c19bc0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetShadowQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyToChildren_SetBit @ 147c19c00

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::
NewProp_bApplyToChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetSyncInterval @ 147c19c10

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetSyncInterval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride @ 147c19c50

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetSoundMixClassOverride_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetTextureQuality @ 147c19c90

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetTextureQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 147c19cd0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality @ 147c19ce0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled @ 147c19d20

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetSubtitlesEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality @ 147c19e60

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode @ 147c19ea0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetViewportMouseCaptureMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading @ 147c19ee0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_CancelAsyncLoading_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c19f20

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_IsDirty @ 147c19f30

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsDirty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation @ 147c19f70

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SetWorldOriginLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c19fb0

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride @ 147c19fc0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ClearSoundMixClassOverride_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty @ 147c1a000

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers @ 147c1a040

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_ClearSoundMixModifiers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a080

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation @ 147c1a090

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnDecalAtLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSpawnPlayerController_SetBit @ 147c1a0d0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::NewProp_bSpawnPlayerController_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled @ 147c1a0e0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a120

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_CreatePlayer @ 147c1a130

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_CreatePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_CreatePlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty @ 147c1a170

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a1b0

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bSpawnPlayerController_SetBit @ 147c1a1c0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_CreatePlayerFromPlatformUser_Statics::
NewProp_bSpawnPlayerController_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached @ 147c1a1d0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnDecalAttached_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_IsHDREnabled @ 147c1a210

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsHDREnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_CreatePlayerFromPlatformUser @ 147c1a250

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_CreatePlayerFromPlatformUser(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_CreatePlayerFromPlatformUser_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGameModeBase @ 147c1a290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameModeBase(void)

{
  if (Z_Registration_Info_UClass_AGameModeBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameModeBase.OuterSingleton,
               &Z_Construct_UClass_AGameModeBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameModeBase.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 147c1a2d0

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bAutoDestroy_SetBit @ 147c1a2e0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty @ 147c1a2f0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a330

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D @ 147c1a340

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnDialogue2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a380

void __cdecl
Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty @ 147c1a390

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject @ 147c1a3d0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_CreateSaveGameObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a410

void __cdecl
Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_CanSpectate @ 147c1a420

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_CanSpectate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1a460

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bPersistAcrossLevelTransition_SetBit @ 147c1a470

void __cdecl
Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::
NewProp_bPersistAcrossLevelTransition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled @ 147c1a480

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1a4c0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bNameChange_SetBit @ 147c1a4d0

void __cdecl
Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bForceReload_SetBit @ 147c1a4e0

void __cdecl
Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::NewProp_bForceReload_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation @ 147c1a4f0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAtLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_ChangeName @ 147c1a530

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_ChangeName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_LoadSettings @ 147c1a570

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_LoadSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_CreateSound2D @ 147c1a5b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_CreateSound2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_CreateSound2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings @ 147c1a5f0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_RevertVideoMode @ 147c1a630

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_RevertVideoMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopWhenAttachedToDestroyed_SetBit @ 147c1a670

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::
NewProp_bStopWhenAttachedToDestroyed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_bAutoDestroy_SetBit @ 147c1a680

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UClass_UGeneratedBlueprintBinding @ 147c1a690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeneratedBlueprintBinding(void)

{
  if (Z_Registration_Info_UClass_UGeneratedBlueprintBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeneratedBlueprintBinding.OuterSingleton,
               &Z_Construct_UClass_UGeneratedBlueprintBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeneratedBlueprintBinding.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding @ 147c1a6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeneratedBlueprintDelegateBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeneratedBlueprintDelegateBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeneratedBlueprintDelegateBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeneratedBlueprintDelegateBinding.InnerSingleton;
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

// Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect @ 147c1a750

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_DeactivateReverbEffect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart @ 147c1a790

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147c1a7d0

void * __cdecl
Z_Construct_UScriptStruct_FGeneratedBlueprintDelegateBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeneratedBlueprintDelegateBinding,&UE::CoreUObject::Private::Construct<FGeneratedBlueprintDelegateBinding>,&UE::CoreUObject::Private::ConstructForTests<FGeneratedBlueprintDelegateBinding>,&UE::CoreUObject::Private::Destruct<FGeneratedBlueprintDelegateBinding>,&UE::CoreUObject::Private::Copy<FGeneratedBlueprintDelegateBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 147c1a810

void __cdecl
Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark @ 147c1a820

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached @ 147c1a860

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnDialogueAttached_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SaveSettings @ 147c1a8a0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SaveSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot @ 147c1a8e0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_DeleteGameInSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_FindPlayerStart @ 147c1a920

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_FindPlayerStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1a960

void __cdecl
Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureComponentToWorld_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality @ 147c1a970

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1a9b0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bAutoActivateSystem_SetBit @ 147c1a9c0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::
NewProp_bAutoActivateSystem_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureComponentToWorld @ 147c1a9d0

UFunction * __cdecl
Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureComponentToWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureComponentToWorld_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController @ 147c1aa10

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel @ 147c1aa50

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues @ 147c1aa90

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1aad0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureToWorld_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation @ 147c1aae0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAtLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_GetNumPlayers @ 147c1ab20

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_GetNumPlayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 147c1ab60

void __cdecl
Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureToWorld @ 147c1ab70

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureToWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_DeprojectSceneCaptureToWorld_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled @ 147c1abb0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_GetNumSpectators @ 147c1abf0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_GetNumSpectators(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1ac30

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_bAutoActivate_SetBit @ 147c1ac40

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::NewProp_bAutoActivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 99) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c1ac50

void __cdecl
Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality @ 147c1ac60

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld @ 147c1aca0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_DeprojectScreenToWorld_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached @ 147c1ace0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnEmitterAttached_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit @ 147c1ad20

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer @ 147c1ad60

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1ada0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c1adb0

void __cdecl
Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode @ 147c1adc0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLooping_SetBit @ 147c1ae00

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::NewProp_bLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist @ 147c1ae10

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_DoesSaveGameExist_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1ae50

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::
NewProp_bAutoDestroy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_HasMatchEnded @ 147c1ae60

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_HasMatchEnded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Enable_SetBit @ 147c1aea0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::NewProp_Enable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c1aeb0

void __cdecl
Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality @ 147c1aec0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming @ 147c1af00

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_EnableLiveStreaming_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_HasMatchStarted @ 147c1af40

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_HasMatchStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation @ 147c1af80

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAtLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1afc0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel @ 147c1afd0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer @ 147c1b010

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopWhenAttachedToDestroyed_SetBit @ 147c1b050

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::
NewProp_bStopWhenAttachedToDestroyed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bLooping_SetBit @ 147c1b060

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::NewProp_bLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_FindCollisionUV @ 147c1b070

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_FindCollisionUV(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_FindCollisionUV_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality @ 147c1b0b0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1b0f0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::
NewProp_bAutoDestroy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality @ 147c1b100

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_FindNearestActor @ 147c1b140

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_FindNearestActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_FindNearestActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_InitStartSpot @ 147c1b180

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_InitStartSpot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached @ 147c1b1c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnForceFeedbackAttached_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized @ 147c1b200

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart @ 147c1b240

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor @ 147c1b280

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_FinishSpawningActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx @ 147c1b2c0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnObject @ 147c1b300

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetScreenResolution @ 147c1b340

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetScreenResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming @ 147c1b380

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_FlushLevelStreaming_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNameChange_SetBit @ 147c1b3c0

void __cdecl
Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bPersistAcrossLevelTransition_SetBit @ 147c1b3d0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::
NewProp_bPersistAcrossLevelTransition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAutoDestroy_SetBit @ 147c1b3e0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_K2_OnChangeName @ 147c1b3f0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_K2_OnChangeName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetShadingQuality @ 147c1b430

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetShadingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime @ 147c1b470

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAccurateRealTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnSound2D @ 147c1b4b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnSound2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnSound2D_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_K2_OnLogout @ 147c1b4f0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_K2_OnLogout(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetShadowQuality @ 147c1b530

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetShadowQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetActiveSpatialPluginName @ 147c1b570

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetActiveSpatialPluginName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetActiveSpatialPluginName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoDestroy_SetBit @ 147c1b5b0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetTextureQuality @ 147c1b5c0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetTextureQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetToDefaults @ 147c1b600

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetToDefaults(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer @ 147c1b640

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation @ 147c1b680

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetActorArrayAverageLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation @ 147c1b6c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAtLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality @ 147c1b700

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyCollidingComponents_SetBit @ 147c1b740

void __cdecl
Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::
NewProp_bOnlyCollidingComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers @ 147c1b750

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopWhenAttachedToDestroyed_SetBit @ 147c1b790

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::
NewProp_bStopWhenAttachedToDestroyed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bAutoDestroy_SetBit @ 147c1b7a0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds @ 147c1b7b0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetActorArrayBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality @ 147c1b7f0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_K2_PostLogin @ 147c1b830

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_K2_PostLogin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 147c1b870

void __cdecl
Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::NewProp_bEnable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled @ 147c1b880

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1b8c0

void __cdecl
Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetActorOfClass @ 147c1b8d0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetActorOfClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetActorOfClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached @ 147c1b910

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SpawnSoundAttached_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1b950

void __cdecl
Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_MustSpectate @ 147c1b960

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_MustSpectate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput @ 147c1b9a0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1b9e0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UGameUserSettings_ValidateSettings @ 147c1b9f0

UFunction * __cdecl Z_Construct_UFunction_UGameUserSettings_ValidateSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass @ 147c1ba30

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1ba70

void __cdecl
Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bUseVSync_SetBit @ 147c1ba80

void __cdecl Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bUseDynamicResolution_SetBit @ 147c1ba90

void __cdecl
Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc @ 147c1baa0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_CustomArc_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_PlayerCanRestart @ 147c1bae0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_PlayerCanRestart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseDesiredScreenHeight_SetBit @ 147c1bb20

void __cdecl
Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag @ 147c1bb30

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAllActorsOfClassWithTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_ResetLevel @ 147c1bb70

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_ResetLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseHDRDisplayOutput_SetBit @ 147c1bbb0

void __cdecl
Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c1bbc0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_MovingTarget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_RestartPlayer @ 147c1bbd0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_RestartPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface @ 147c1bc10

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithInterface_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_MovingTarget @ 147c1bc50

UFunction * __cdecl
Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_MovingTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_SuggestProjectileVelocity_MovingTarget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGameNetworkManager @ 147c1bc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameNetworkManager(void)

{
  if (Z_Registration_Info_UClass_AGameNetworkManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameNetworkManager.OuterSingleton,
               &Z_Construct_UClass_AGameNetworkManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameNetworkManager.OuterSingleton;
}

// Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart @ 147c1bcd0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EStandbyType_StaticEnum @ 147c1bd10

UEnum * __cdecl EStandbyType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStandbyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStandbyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStandbyType,(UObject *)pUVar1,L"EStandbyType");
  }
  return Z_Registration_Info_UEnum_EStandbyType.OuterSingleton;
}

// Z_Construct_UClass_AGameSession @ 147c1bd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGameSession(void)

{
  if (Z_Registration_Info_UClass_AGameSession.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGameSession.OuterSingleton,
               &Z_Construct_UClass_AGameSession_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGameSession.OuterSingleton;
}

// NewProp_bIgnoreFirstPersonScale_SetBit @ 147c1bd90

void __cdecl
Z_Construct_UFunction_UGameplayStatics_TransformWorldToFirstPerson_Statics::
NewProp_bIgnoreFirstPersonScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8e8) = 1;
  return;
}

// NewProp_bRequiresPushToTalk_SetBit @ 147c1bda0

void __cdecl
Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2cd) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag @ 147c1bdb0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAllActorsWithTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform @ 147c1bdf0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_TransformWorldToFirstPerson @ 147c1be30

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_TransformWorldToFirstPerson(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_TransformWorldToFirstPerson_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsStandbyCheckingEnabled_SetBit @ 147c1be70

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2e4) = *(uint *)((longlong)param_1 + 0x2e4) | 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost @ 147c1be80

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasStandbyCheatTriggered_SetBit @ 147c1bec0

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2e4) = *(uint *)((longlong)param_1 + 0x2e4) | 2;
  return;
}

// NewProp_bShouldBlockOnUnload_SetBit @ 147c1bed0

void __cdecl
Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::
NewProp_bShouldBlockOnUnload_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds @ 147c1bee0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAudioTimeSeconds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1bf20

void __cdecl
Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ClientAuthorativePosition_SetBit @ 147c1bf30

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x348) = 1;
  return;
}

// NewProp_bMovementTimeDiscrepancyDetection_SetBit @ 147c1bf40

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x349) = 1;
  return;
}

// NewProp_bMovementTimeDiscrepancyResolution_SetBit @ 147c1bf50

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34a) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel @ 147c1bf60

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit @ 147c1bfa0

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::
NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35c) = 1;
  return;
}

// NewProp_bUseDistanceBasedRelevancy_SetBit @ 147c1bfb0

void __cdecl
Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35d) = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_ShouldReset @ 147c1bfc0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_ShouldReset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetAvailableSpatialPluginNames @ 147c1c000

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetAvailableSpatialPluginNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetAvailableSpatialPluginNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldBlockOnUnload_SetBit @ 147c1c040

void __cdecl
Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevelBySoftObjectPtr_Statics::
NewProp_bShouldBlockOnUnload_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bAllowAttenuationOverride_SetBit @ 147c1c050

void __cdecl
Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::
NewProp_bAllowAttenuationOverride_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 147c1c060

void __cdecl
Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevelBySoftObjectPtr @ 147c1c070

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevelBySoftObjectPtr(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_UnloadStreamLevelBySoftObjectPtr_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform @ 147c1c0b0

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation @ 147c1c0f0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetClosestListenerLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_UnRetainAllSoundsInSoundClass @ 147c1c130

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_UnRetainAllSoundsInSoundClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_UnRetainAllSoundsInSoundClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRemovePrefixString_SetBit @ 147c1c170

void __cdecl
Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::
NewProp_bRemovePrefixString_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor @ 147c1c180

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName @ 147c1c1c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetCurrentLevelName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AGameModeBase_StartPlay @ 147c1c200

UFunction * __cdecl Z_Construct_UFunction_AGameModeBase_StartPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect @ 147c1c240

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetCurrentReverbEffect_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147c1c280

void __cdecl
Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bUseSeamlessTravel_SetBit @ 147c1c290

void __cdecl
Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x340) = *(uint *)((longlong)param_1 + 0x340) | 1;
  return;
}

// NewProp_bStartPlayersAsSpectators_SetBit @ 147c1c2a0

void __cdecl
Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x340) = *(uint *)((longlong)param_1 + 0x340) | 2;
  return;
}

// NewProp_bPauseable_SetBit @ 147c1c2b0

void __cdecl Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x340) = *(uint *)((longlong)param_1 + 0x340) | 4;
  return;
}

// Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering @ 147c1c2c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetEnableWorldRendering_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetGameInstance @ 147c1c300

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetGameInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetGameInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetGameMode @ 147c1c340

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetGameMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetGameMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetGameState @ 147c1c380

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetGameState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetGameState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation @ 147c1c3c0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetGlobalTimeDilation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetIntOption @ 147c1c400

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetIntOption(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetIntOption_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetKeyValue @ 147c1c4a0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetKeyValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetKeyValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AGameModeBase_NoRegister @ 147c1c4e0

UClass * __cdecl Z_Construct_UClass_AGameModeBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameModeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameModeBase",
               &Z_Registration_Info_UClass_AGameModeBase.InnerSingleton,
               AGameModeBase::StaticRegisterNativesAGameModeBase,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AGameModeBase>,InternalVTableHelperCtorCaller<AGameModeBase>,
               local_res8,AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameModeBase.InnerSingleton;
}

// Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount @ 147c1c5a0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetMaxAudioChannelCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetNumLocalPlayerControllers @ 147c1c5e0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetNumLocalPlayerControllers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetNumLocalPlayerControllers_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetNumPlayerControllers @ 147c1c620

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetNumPlayerControllers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetNumPlayerControllers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetNumPlayerStates @ 147c1c660

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetNumPlayerStates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetNumPlayerStates_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetObjectClass @ 147c1c6a0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetObjectClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetObjectClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlatformName @ 147c1c6e0

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlatformName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlatformName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager @ 147c1c720

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerCameraManager_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter @ 147c1c760

UFunction * __cdecl Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayStatics_GetPlayerCharacter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 147c1c7b0

void __cdecl <lambda_27>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FGeometryCacheVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 147c1c7d0

void __cdecl <lambda_28>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FGeometryCollectionVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// TVector<float>,TMemoryImageAllocator<0>_> @ 147c1ce80

FArchive * __cdecl
operator<<<UE::Math::TVector<float>_TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ForAnyElementType FVar6;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0xc,(longlong)param_2->ArrayMax * 0xc);
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0xc,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum * 0xc)
        ;
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

// AddLambda<`UGameViewportClient::UGameViewportClient'::__l5::<lambda_1>_> @ 147c1ce90

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

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
AddLambda<_UGameViewportClient::UGameViewportClient_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  UGameViewportClient *pUVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pUVar8 = (UGameViewportClient *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy,`UGameViewportClient::UGameViewportClient'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
  param_1->__this = (UGameViewportClient *)0x0;
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
      pUVar8 = (UGameViewportClient *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->__this = pUVar8;
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
  if (this != (TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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

// AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&> @ 147c1d0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddSetupTask<_FGPUSkinCache::Dispatch_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
          (FRDGBuilder *this,<lambda_1> *param_1,FPipe *param_2,FTaskHandle *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  FRHICommandListScopedFence *this_00;
  atomic<unsigned_int> aVar3;
  FGPUSkinCache *pFVar4;
  FRHICommandListBase *pFVar5;
  FTaskHandle *pFVar6;
  atomic<unsigned___int64> aVar7;
  bool bVar8;
  char cVar9;
  ERHIPipeline EVar10;
  FTaskBase *pFVar11;
  <lambda_1> *p<Var12;
  int iVar13;
  FTaskBase *pFVar14;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar15;
  int iVar16;
  ETaskPriority EVar17;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  undefined1 local_58 [16];
  FTaskTagScope local_48;
  atomic<UE::Tasks::Private::FTaskBase_*> local_38;
  atomic<unsigned___int64> aStack_30;
  
  pFVar14 = (FTaskBase *)0x0;
  pFVar6 = (FTaskHandle *)CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FGPUSkinCache *)0x0;
  if (((param_6 == Compile) || (bVar8 = IsImmediateMode(), bVar8)) &&
     (pFVar11 = (pFVar6->Pimpl).Reference, pFVar11 != (FTaskBase *)0x0)) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar11);
  }
  cVar9 = (this->ParallelSetup).bEnabled;
  local_38 = param_2->LastTask;
  aStack_30 = param_2->TaskCount;
  bVar8 = (bool)cVar9 == false;
  EVar17 = High;
  if (this->bCompiling != false) {
    cVar9 = this->bParallelCompileEnabled;
  }
  if ((param_6 == Compile) ||
     ((cVar9 == '\0' &&
      ((pFVar11 = (pFVar6->Pimpl).Reference, pFVar11 == (FTaskBase *)0x0 ||
       ((pFVar11->Subsequents).bIsClosed != (atomic<bool>)0x0)))))) {
    FTaskTagScope::FTaskTagScope(&local_48,EParallelRenderingThread);
    aVar7 = aStack_30;
    EVar10 = FRHICommandListBase::SwitchPipeline
                       (*(FRHICommandListBase **)((longlong)aStack_30 + 0x40),
                        *(ERHIPipeline *)((longlong)aStack_30 + 0xa8));
    pFVar5 = *(FRHICommandListBase **)((longlong)aVar7 + 0x40);
    this_00 = (FRHICommandListScopedFence *)((longlong)aVar7 + 0x20);
    *(ERHIPipeline *)((longlong)aVar7 + 0xa9) = EVar10;
    if (*(char *)((longlong)aVar7 + 0x38) != '\0') {
      FRHICommandListScopedFence::~FRHICommandListScopedFence(this_00);
    }
    this_00->RHICmdList = pFVar5;
    *(FRHICommandListScopedFence **)((longlong)aVar7 + 0x28) =
         (pFVar5->PersistentState).CurrentFenceScope;
    *(undefined1 *)((longlong)aVar7 + 0x30) = 0;
    (pFVar5->PersistentState).CurrentFenceScope = this_00;
    *(undefined1 *)((longlong)aVar7 + 0x38) = 1;
    FGPUSkinCache::DispatchPassSetup((FGPUSkinCache *)local_38,(FTaskData *)aVar7);
    FTaskTagScope::~FTaskTagScope(&local_48);
  }
  else {
    iVar13 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (FTaskHandle *)0x0) {
      EVar17 = High;
      iVar16 = 4;
      if (iVar13 < 4) {
        iVar16 = iVar13;
      }
      if (0 < iVar16) {
        EVar17 = (ETaskPriority)iVar16;
      }
      pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar11 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar11,2,true);
        pFVar11->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar11,L"FRDGBuilder::AddSetupTask",EVar17,bVar8,None);
        pFVar11[1]._padding_ = (longlong)local_38;
        pFVar11[1]._padding_ = (longlong)aStack_30;
        pFVar11->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar14 = pFVar11;
      }
      UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                (pFVar14,pFVar6);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
      p<Var12 = (<lambda_1> *)(local_58 + 8);
    }
    else {
      iVar16 = 4;
      if (iVar13 < 4) {
        iVar16 = iVar13;
      }
      pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar11 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar11,2,true);
        if (0 < iVar16) {
          EVar17 = (ETaskPriority)iVar16;
        }
        pFVar11->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar11,L"FRDGBuilder::AddSetupTask",EVar17,bVar8,None);
        pFVar11[1]._padding_ = (longlong)local_38;
        pFVar11[1]._padding_ = (longlong)aStack_30;
        pFVar11->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar14 = pFVar11;
      }
      LOCK();
      param_3[1].Pimpl.Reference =
           (FTaskBase *)((longlong)&(param_3[1].Pimpl.Reference)->_padding_ + 1);
      UNLOCK();
      LOCK();
      pFVar14->NumLocks = (atomic<unsigned_int>)((int)pFVar14->NumLocks + 1);
      UNLOCK();
      pFVar14->Pipe = (FPipe *)param_3;
      UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                (pFVar14,pFVar6);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
      p<Var12 = (<lambda_1> *)local_58;
    }
    if (param_1 == p<Var12) {
      if (pFVar14 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar14->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)(((TArray<FGPUSkinCache::FRWBuffersAllocation_*,TSizedDefaultAllocator<32>_> *
                        )&pFVar14->_padding_)->AllocatorInstance).Data)(pFVar14,1);
        }
      }
    }
    else {
      pFVar4 = param_1->__this;
      param_1->__this = (FGPUSkinCache *)pFVar14;
      if (pFVar4 != (FGPUSkinCache *)0x0) {
        LOCK();
        puVar1 = &(pFVar4->PendingProcessRTGeometryEntries).Elements.field_0x10;
        iVar13 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(pFVar4->Allocations).AllocatorInstance.Data)(pFVar4,1);
        }
      }
    }
  }
  if (param_1->__this != (FGPUSkinCache *)0x0) {
    pTVar15 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar13 = pTVar15->ArrayNum;
    if (iVar13 == pTVar15->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
    }
    pTVar15->ArrayNum = iVar13 + 1;
    pFVar6 = (pTVar15->AllocatorInstance).Data;
    pFVar6[iVar13].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar14 = (FTaskBase *)param_1->__this;
    pFVar6[iVar13].Pimpl.Reference = pFVar14;
    if (pFVar14 != (FTaskBase *)0x0) {
      LOCK();
      pFVar14->RefCount = (atomic<unsigned_int>)((int)pFVar14->RefCount + 1);
      UNLOCK();
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&> @ 147c1d440

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGBuilder::
AddSetupTask<_FGPUSkinCache::Dispatch_::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>
          (FRDGBuilder *this,<lambda_2> *param_1,FPipe *param_2,FTaskHandle *param_3,
          ETaskPriority param_4,bool param_5,ERDGSetupTaskWaitPoint param_6)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FGPUSkinCache *pFVar4;
  FTaskHandle *pFVar5;
  atomic<unsigned___int64> aVar6;
  bool bVar7;
  char cVar8;
  FTaskBase *pFVar9;
  <lambda_2> *p<Var10;
  int iVar11;
  FTaskBase *pFVar12;
  TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *pTVar13;
  int iVar14;
  ETaskPriority EVar15;
  undefined7 in_stack_00000029;
  byte in_stack_00000040;
  undefined1 local_68 [16];
  FTaskTagScope local_58;
  FTaskTagScope local_48;
  atomic<UE::Tasks::Private::FTaskBase_*> local_38;
  atomic<unsigned___int64> aStack_30;
  
  pFVar12 = (FTaskBase *)0x0;
  pFVar5 = (FTaskHandle *)CONCAT71(in_stack_00000029,param_4);
  param_1->__this = (FGPUSkinCache *)0x0;
  if (((param_6 == Compile) || (bVar7 = IsImmediateMode(), bVar7)) &&
     (pFVar9 = (pFVar5->Pimpl).Reference, pFVar9 != (FTaskBase *)0x0)) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar9);
  }
  cVar8 = (this->ParallelSetup).bEnabled;
  local_38 = param_2->LastTask;
  aStack_30 = param_2->TaskCount;
  bVar7 = (bool)cVar8 == false;
  EVar15 = High;
  if (this->bCompiling != false) {
    cVar8 = this->bParallelCompileEnabled;
  }
  if ((param_6 == Compile) ||
     ((cVar8 == '\0' &&
      ((pFVar9 = (pFVar5->Pimpl).Reference, pFVar9 == (FTaskBase *)0x0 ||
       ((pFVar9->Subsequents).bIsClosed != (atomic<bool>)0x0)))))) {
    FTaskTagScope::FTaskTagScope(&local_48,EParallelRenderingThread);
    FTaskTagScope::FTaskTagScope(&local_58,EParallelRenderingThread);
    aVar6 = aStack_30;
    FGPUSkinCache::DispatchPassExecute((FGPUSkinCache *)local_38,(FTaskData *)aStack_30);
    if (*(char *)((longlong)aVar6 + 0x38) != '\0') {
      FRHICommandListScopedFence::~FRHICommandListScopedFence
                ((FRHICommandListScopedFence *)((longlong)aVar6 + 0x20));
      *(undefined1 *)((longlong)aVar6 + 0x38) = 0;
    }
    if (*(char *)((longlong)aVar6 + 0xb8) == '\0') {
      FRHICommandListBase::SwitchPipeline
                (*(FRHICommandListBase **)((longlong)aVar6 + 0x40),
                 *(ERHIPipeline *)((longlong)aVar6 + 0xa9));
    }
    else {
      FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)aVar6 + 0x40));
    }
    FTaskTagScope::~FTaskTagScope(&local_58);
    FTaskTagScope::~FTaskTagScope(&local_48);
  }
  else {
    iVar11 = (int)param_5 - (int)(this->ParallelSetup).TaskPriorityBias;
    if (param_3 == (FTaskHandle *)0x0) {
      EVar15 = High;
      iVar14 = 4;
      if (iVar11 < 4) {
        iVar14 = iVar11;
      }
      if (0 < iVar14) {
        EVar15 = (ETaskPriority)iVar14;
      }
      pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar9 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
        pFVar9->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar9,L"FRDGBuilder::AddSetupTask",EVar15,bVar7,None);
        pFVar9[1]._padding_ = (longlong)local_38;
        pFVar9[1]._padding_ = (longlong)aStack_30;
        pFVar9->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar12 = pFVar9;
      }
      UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                (pFVar12,pFVar5);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
      p<Var10 = (<lambda_2> *)(local_68 + 8);
    }
    else {
      iVar14 = 4;
      if (iVar11 < 4) {
        iVar14 = iVar11;
      }
      pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
      if (pFVar9 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
        if (0 < iVar14) {
          EVar15 = (ETaskPriority)iVar14;
        }
        pFVar9->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(pFVar9,L"FRDGBuilder::AddSetupTask",EVar15,bVar7,None);
        pFVar9[1]._padding_ = (longlong)local_38;
        pFVar9[1]._padding_ = (longlong)aStack_30;
        pFVar9->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::`2'::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>_>
              ::_vftable_;
        pFVar12 = pFVar9;
      }
      LOCK();
      param_3[1].Pimpl.Reference =
           (FTaskBase *)((longlong)&(param_3[1].Pimpl.Reference)->_padding_ + 1);
      UNLOCK();
      LOCK();
      pFVar12->NumLocks = (atomic<unsigned_int>)((int)pFVar12->NumLocks + 1);
      UNLOCK();
      pFVar12->Pipe = (FPipe *)param_3;
      UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                (pFVar12,pFVar5);
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
      p<Var10 = (<lambda_2> *)local_68;
    }
    if (param_1 == p<Var10) {
      if (pFVar12 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar12->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)(((TArray<FGPUSkinCache::FRWBuffersAllocation_*,TSizedDefaultAllocator<32>_> *
                        )&pFVar12->_padding_)->AllocatorInstance).Data)(pFVar12,1);
        }
      }
    }
    else {
      pFVar4 = param_1->__this;
      param_1->__this = (FGPUSkinCache *)pFVar12;
      if (pFVar4 != (FGPUSkinCache *)0x0) {
        LOCK();
        puVar1 = &(pFVar4->PendingProcessRTGeometryEntries).Elements.field_0x10;
        iVar11 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(pFVar4->Allocations).AllocatorInstance.Data)(pFVar4,1);
        }
      }
    }
  }
  if (param_1->__this != (FGPUSkinCache *)0x0) {
    pTVar13 = (this->ParallelSetup).Tasks.Elements + in_stack_00000040;
    iVar11 = pTVar13->ArrayNum;
    if (iVar11 == pTVar13->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                         (0x808,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
    }
    pTVar13->ArrayNum = iVar11 + 1;
    pFVar5 = (pTVar13->AllocatorInstance).Data;
    pFVar5[iVar11].Pimpl.Reference = (FTaskBase *)0x0;
    pFVar12 = (FTaskBase *)param_1->__this;
    pFVar5[iVar11].Pimpl.Reference = pFVar12;
    if (pFVar12 != (FTaskBase *)0x0) {
      LOCK();
      pFVar12->RefCount = (atomic<unsigned_int>)((int)pFVar12->RefCount + 1);
      UNLOCK();
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// BindForLegacyShaderParameters<FGPUSkinCacheCS::FParameters> @ 147c1e770

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
BindForLegacyShaderParameters<FGPUSkinCacheCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FGPUSkinCacheCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FInitDynamicMeshBoundsCS::FParameters> @ 147c1e7d0

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
BindForLegacyShaderParameters<FInitDynamicMeshBoundsCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FInitDynamicMeshBoundsCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FRecomputeTangentsPerTriangleCS::FParameters> @ 147c1e830

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
BindForLegacyShaderParameters<FRecomputeTangentsPerTriangleCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FRecomputeTangentsPerTriangleCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FRecomputeTangentsPerVertexCS::FParameters> @ 147c1e890

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
BindForLegacyShaderParameters<FRecomputeTangentsPerVertexCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FRecomputeTangentsPerVertexCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// CastChecked<AGameNetworkManager,AActor> @ 147c1e8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameNetworkManager * __cdecl CastChecked<AGameNetworkManager,AActor>(AActor *param_1,Type param_2)

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
      return (AGameNetworkManager *)0x0;
    }
    pFVar3 = GetTypeName<AGameNetworkManager>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AGameNetworkManager::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AGameNetworkManager *)param_1;
  }
  pFVar3 = GetTypeName<AGameNetworkManager>(&local_28);
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

// CastChecked<AGameSession,AActor> @ 147c1e9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameSession * __cdecl CastChecked<AGameSession,AActor>(AActor *param_1,Type param_2)

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
      return (AGameSession *)0x0;
    }
    pFVar3 = GetTypeName<AGameSession>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AGameSession::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AGameSession *)param_1;
  }
  pFVar3 = GetTypeName<AGameSession>(&local_28);
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

// CastChecked<AGameStateBase,AActor> @ 147c1eab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGameStateBase * __cdecl CastChecked<AGameStateBase,AActor>(AActor *param_1,Type param_2)

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
      return (AGameStateBase *)0x0;
    }
    pFVar3 = GetTypeName<AGameStateBase>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AGameStateBase::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AGameStateBase *)param_1;
  }
  pFVar3 = GetTypeName<AGameStateBase>(&local_28);
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

// CastChecked<ALandscapeProxy,AActor> @ 147c1eb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeProxy * __cdecl CastChecked<ALandscapeProxy,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ALandscapeProxy>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALandscapeProxy *)param_1;
  }
  pFVar3 = GetTypeName<ALandscapeProxy>(&local_28);
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

// CastChecked<APlayerController,AActor> @ 147c1ec50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlayerController * __cdecl CastChecked<APlayerController,AActor>(AActor *param_1,Type param_2)

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
      return (APlayerController *)0x0;
    }
    pFVar3 = GetTypeName<APlayerController>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APlayerController *)param_1;
  }
  pFVar3 = GetTypeName<APlayerController>(&local_28);
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

// CastChecked<APlayerState,AActor> @ 147c1ed30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlayerState * __cdecl CastChecked<APlayerState,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<APlayerState>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_APlayerState_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (APlayerState *)param_1;
  }
  pFVar3 = GetTypeName<APlayerState>(&local_28);
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

// ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> @ 147c1edf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FIdentityFunctor local_res8;
  uint local_res18;
  int local_98 [2];
  ForAnyElementType local_90;
  int local_88 [4];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  ulonglong uVar12;
  
  iVar17 = param_1->ArrayNum;
  uVar12 = 0;
  if (iVar17 < 4) {
    local_98[0] = 0;
    if (0 < iVar17) {
      do {
        pFVar18 = (param_2->AllocatorInstance).Data;
        if (((pFVar18 <= (FScriptContainerElement *)local_98) &&
            ((FScriptContainerElement *)local_98 < pFVar18 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_98[0];
        local_98[0] = local_98[0] + 1;
      } while (local_98[0] < iVar17);
      return;
    }
  }
  else {
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar17,&local_90,local_88,local_88 + 1);
    uVar15 = uVar12;
    uVar14 = uVar12;
    if (0 < iVar17) {
      do {
        uVar9 = (uint)uVar15;
        uVar6 = 0;
        if ((int)uVar9 < local_88[0]) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(uint *)(local_90.Data + uVar14 * 4) = uVar9;
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)(uVar9 + 1);
      } while ((longlong)uVar14 < (longlong)iVar17);
    }
    local_res8 = SUB81(param_1,0);
    AlgoImpl::
    IntroSortInternal<unsigned_int,int,FIdentityFunctor,_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              ((uint *)local_90.Data,local_88[0],local_res8,
               (TVector2<double> *)(param_1->AllocatorInstance).Data);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar17 * 2,Default);
    local_res18 = 0;
    uVar6 = 0;
    if (0 < (longlong)iVar17) {
      local_70 = 0;
      uVar15 = uVar12;
      uVar14 = uVar12;
      do {
        lVar13 = local_70;
        uVar10 = (uint)uVar12;
        uVar11 = (uint)uVar14;
        local_88[2] = ~uVar11 >> 0x1f;
        uVar7 = 0;
        uVar9 = uVar7;
        if ((int)uVar11 < local_88[0]) {
          uVar9 = local_88[2];
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = *(uint *)(local_90.Data + lVar13 * 4);
        uVar8 = uVar7;
        if ((int)uVar9 < param_1->ArrayNum) {
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
        local_60 = (param_1->AllocatorInstance).Data;
        local_68 = (longlong)(int)uVar9 << 4;
        if (1 < (longlong)uVar15) {
          lVar13 = uVar15 * 4 + -8;
          iVar5 = uVar10 - 2;
          do {
            uVar10 = (uint)uVar12;
            uVar9 = uVar7;
            if (iVar5 + 1 < param_2->ArrayNum) {
              uVar9 = -uVar10 >> 0x1f;
            }
            local_78 = lVar13;
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar9 = *(uint *)((param_2->AllocatorInstance).Data + lVar13 + 4);
            uVar11 = uVar7;
            if ((int)uVar9 < param_1->ArrayNum) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar18 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
            uVar9 = uVar6;
            if (iVar5 < param_2->ArrayNum) {
              uVar9 = 1 - uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar9 = *(uint *)((param_2->AllocatorInstance).Data + local_78);
            lVar13 = (longlong)(int)uVar9;
            uVar11 = uVar6;
            if ((int)uVar9 < param_1->ArrayNum) {
              uVar11 = ~uVar9 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar11 = local_res18;
            if (0.0 < (*(double *)pFVar18 - *(double *)(pFVar2 + lVar13 * 0x10)) *
                      (*(double *)(local_60 + local_68 + 8) -
                      *(double *)(pFVar2 + lVar13 * 0x10 + 8)) -
                      (*(double *)(pFVar18 + 8) - *(double *)(pFVar2 + lVar13 * 0x10 + 8)) *
                      (*(double *)(local_60 + local_68) - *(double *)(pFVar2 + lVar13 * 0x10)))
            break;
            uVar10 = uVar10 - 1;
            uVar12 = (ulonglong)uVar10;
            lVar13 = local_78 + -4;
            iVar5 = iVar5 + -1;
            uVar15 = uVar15 - 1;
            local_78 = lVar13;
          } while (1 < (longlong)uVar15);
        }
        uVar9 = uVar6;
        if ((int)uVar11 < local_88[0]) {
          uVar9 = local_88[2];
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(undefined4 *)(local_90.Data + local_70 * 4);
        uVar9 = uVar6;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res18 = uVar11 + 1;
        uVar14 = (ulonglong)local_res18;
        uVar12 = (ulonglong)(uVar10 + 1);
        *(undefined4 *)((param_2->AllocatorInstance).Data + uVar15 * 4) = uVar1;
        uVar15 = uVar15 + 1;
        local_70 = local_70 + 1;
      } while (local_70 < iVar17);
    }
    iVar5 = iVar17 + -1;
    local_68 = (longlong)((int)uVar12 + 1);
    iVar17 = iVar17 + -2;
    lVar16 = (longlong)(int)uVar12;
    lVar13 = (longlong)iVar5 * 4 + -4;
    do {
      uVar11 = (uint)uVar12;
      local_88[2] = (uint)-iVar5 >> 0x1f;
      uVar9 = uVar6;
      if (iVar17 < local_88[0]) {
        uVar9 = local_88[2];
      }
      local_78 = lVar13;
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = *(uint *)(local_90.Data + lVar13);
      uVar7 = uVar6;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58 = (param_1->AllocatorInstance).Data;
      local_60 = (FScriptContainerElement *)((longlong)(int)uVar9 << 4);
      if (local_68 <= lVar16) {
        lVar13 = lVar16 * 4 + -8;
        iVar19 = uVar11 - 2;
        do {
          uVar11 = (uint)uVar12;
          uVar9 = uVar6;
          if (iVar19 + 1 < param_2->ArrayNum) {
            uVar9 = -uVar11 >> 0x1f;
          }
          local_70 = lVar13;
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = *(uint *)((param_2->AllocatorInstance).Data + lVar13 + 4);
          uVar7 = uVar6;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
          uVar9 = uVar6;
          if (iVar19 < param_2->ArrayNum) {
            uVar9 = 1 - uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = *(uint *)((param_2->AllocatorInstance).Data + local_70);
          lVar13 = (longlong)(int)uVar9;
          uVar7 = uVar6;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (0.0 < (*(double *)(local_60 + 8 + (longlong)local_58) -
                    *(double *)(pFVar2 + lVar13 * 0x10 + 8)) *
                    (*(double *)pFVar18 - *(double *)(pFVar2 + lVar13 * 0x10)) -
                    (*(double *)(pFVar18 + 8) - *(double *)(pFVar2 + lVar13 * 0x10 + 8)) *
                    (*(double *)(local_60 + (longlong)local_58) -
                    *(double *)(pFVar2 + lVar13 * 0x10))) break;
          uVar11 = uVar11 - 1;
          uVar12 = (ulonglong)uVar11;
          lVar13 = local_70 + -4;
          iVar19 = iVar19 + -1;
          lVar16 = lVar16 + -1;
          local_70 = lVar13;
        } while (local_68 <= lVar16);
      }
      uVar9 = uVar6;
      if (iVar17 < local_88[0]) {
        uVar9 = local_88[2];
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined4 *)(local_90.Data + local_78);
      uVar9 = uVar6;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = iVar5 + -1;
      iVar17 = iVar17 + -1;
      uVar12 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)((param_2->AllocatorInstance).Data + lVar16 * 4) = uVar1;
      lVar16 = lVar16 + 1;
      lVar13 = local_78 + -4;
    } while (0 < iVar5);
    local_78 = lVar13;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,uVar11,No);
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
  }
  return;
}

// ConstructItems<AActor_*,TObjectPtr<APlayerState>,int> @ 147c1f770

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
ConstructItems<AActor_*,TObjectPtr<APlayerState>,int>
          (void *param_1,TObjectPtr<APlayerState> *param_2,int param_3)

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

// ConstructItems<TObjectPtr<AActor>,AActor_*,int> @ 147c1f7a0

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
ConstructItems<TObjectPtr<AActor>,AActor_*,int>(void *param_1,AActor **param_2,int param_3)

{
  AActor *pAVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pAVar1 = *param_2;
      *(AActor **)(lVar2 + (longlong)param_2) = pAVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructVertexFactoryParameters<FGeometryCollectionVertexFactory> @ 147c1f800

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FGeometryCollectionVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    pFVar3 = operator_new(4);
    if (pFVar3 != (FVertexFactoryShaderParameters *)0x0) {
      pFVar3->Size_DEPRECATED = 0;
      return pFVar3;
    }
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
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexFactory.h"
                       ,0x113,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVertexFactoryShaderParameters *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FVertexFactoryShaderParameters *)0x0;
}

// ConstructVertexFactoryParameters<FGeometryCacheVertexVertexFactory> @ 147c1f8a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FVertexFactoryShaderParameters * __cdecl
ConstructVertexFactoryParameters<FGeometryCacheVertexVertexFactory>
          (EShaderFrequency param_1,FShaderParameterMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCacheVertexFactoryShaderParameters *this;
  FVertexFactoryShaderParameters *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_RayHitGroup:
    break;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_Compute:
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
  this = operator_new(0x24);
  if (this != (FGeometryCacheVertexFactoryShaderParameters *)0x0) {
    *(undefined8 *)&this->MotionBlurPositionScale = 0;
    this->_padding_ = 0;
    (this->MeshOrigin).BufferIndex = 0;
    (this->MeshOrigin).BaseIndex = 0;
    *(undefined8 *)&(this->MeshOrigin).NumBytes = 0;
    (this->MotionBlurDataOrigin).BufferIndex = 0;
    (this->MotionBlurDataOrigin).BaseIndex = 0;
    (this->MotionBlurDataOrigin).NumBytes = 0;
    (this->MotionBlurDataExtension).BufferIndex = 0;
    (this->MotionBlurDataExtension).BaseIndex = 0;
    (this->MotionBlurDataExtension).NumBytes = 0;
    FGeometryCacheVertexFactoryShaderParameters::Bind(this,param_2);
    return (FVertexFactoryShaderParameters *)this;
  }
  FGeometryCacheVertexFactoryShaderParameters::Bind
            ((FGeometryCacheVertexFactoryShaderParameters *)0x0,param_2);
  return (FVertexFactoryShaderParameters *)0x0;
}

// CreateWidget<UUserWidget,UGameInstance_*> @ 147c1ffc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl
CreateWidget<UUserWidget,UGameInstance_*>
          (UGameInstance *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UUserWidget *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UUserWidget *pUVar13;
  LARGE_INTEGER LVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  pUVar12 = (UUserWidget *)0x0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar14;
      local_58 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar6 = true;
      goto LAB_147c20122;
    }
  }
  bVar6 = false;
  LVar14 = local_58;
LAB_147c20122:
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  pUVar13 = pUVar12;
  if ((lVar3 != 0) &&
     (pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar11 != (UClass *)0x0)) {
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar13 = *(UUserWidget **)param_2.Class.field0_0x0;
    }
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,(UObjectBaseUtility *)pUVar13,TVar10);
  if (param_1 != (UGameInstance *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
  }
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58._0_4_;
      local_48.NameAndInfo.Number = LVar14.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
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
  return pUVar12;
}

// DefaultConstructItems<FDebugDisplayProperty,int> @ 147c20390

void __cdecl DefaultConstructItems<FDebugDisplayProperty,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0xfffffffe;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int> @ 147c203c0

void __cdecl
DefaultConstructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int>
          (void *param_1,int param_2)

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

// DefaultConstructItems<FGPUSkinCacheEntry::FSectionDispatchData,int> @ 147c203f0

void __cdecl
DefaultConstructItems<FGPUSkinCacheEntry::FSectionDispatchData,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0xffffffff;
      *(undefined2 *)((longlong)puVar2 + 0x24) = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 1;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x7c) = 1;
      uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
      puVar2[0x10] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
      puVar2[0x11] = uVar1;
      uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
      puVar2[0x12] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
      puVar2[0x13] = uVar1;
      uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
      puVar2[0x14] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
      puVar2[0x15] = uVar1;
      uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
      puVar2[0x16] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
      puVar2[0x17] = uVar1;
      puVar2[0x18] = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      *(float *)(puVar2 + 0x19) = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      puVar2[0x1d] = 0;
      *(undefined4 *)(puVar2 + 0x1e) = 0;
      puVar2[0x1f] = 0;
      puVar2[0x20] = 0;
      puVar2[0x21] = 0;
      *(undefined4 *)((longlong)puVar2 + 0xcc) = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0xffffffff;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x28;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGPUSkinCache::FSkinCacheRWBuffer,int> @ 147c20500

void __cdecl DefaultConstructItems<FGPUSkinCache::FSkinCacheRWBuffer,int>(void *param_1,int param_2)

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
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWorldCachedViewInfo,int> @ 147c20540

void __cdecl DefaultConstructItems<FWorldCachedViewInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TRefCountPtr<FRHIBuffer>,int> @ 147c20550

void __cdecl DefaultConstructItems<TRefCountPtr<FRHIBuffer>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<FClipSMPolygon,int> @ 147c20670

void __cdecl DestructItems<FClipSMPolygon,int>(FClipSMPolygon *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FClipSMVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Vertices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 100;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int> @ 147c206c0

void __cdecl
DestructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int>
          (FItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Value).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FItem *)(&param_1->Value + 1);
  }
  return;
}

// DestructItems<FGPUSkinCacheEntry::FSectionDispatchData,int> @ 147c20700

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __cdecl
DestructItems<FGPUSkinCacheEntry::FSectionDispatchData,int>
          (FSectionDispatchData *param_1,int param_2)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &(param_1->RecomputeTangents).DuplicatedIndicesIndices;
    do {
      if (pTVar1[1].Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1[1].Reference);
      }
      if (pTVar1->Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      if (*(FRHIResource **)(pTVar1 + -0x15) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pTVar1 + -0x15));
      }
      if (*(FRHIResource **)(pTVar1 + -0x16) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pTVar1 + -0x16));
      }
      if (*(FRHIResource **)(pTVar1 + -0x17) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pTVar1 + -0x17));
      }
      if (*(FRHIResource **)(pTVar1 + -0x18) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pTVar1 + -0x18));
      }
      if (*(FRHIResource **)(pTVar1 + -0x19) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)(pTVar1 + -0x19));
      }
      pTVar1 = pTVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGPUSkinCache::FSkinCacheRWBuffer,int> @ 147c207b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
DestructItems<FGPUSkinCache::FSkinCacheRWBuffer,int>(FSkinCacheRWBuffer *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FRWBuffer::~FRWBuffer(&param_1->Buffer);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSplitscreenData,int> @ 147c207f0

void __cdecl DestructItems<FSplitscreenData,int>(FSplitscreenData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PlayerData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FUniqueNetIdWrapper,int> @ 147c20830

void __cdecl DestructItems<FUniqueNetIdWrapper,int>(FUniqueNetIdWrapper *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  *pTVar4;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    pTVar4 = &param_1->Variant;
    bVar1 = pTVar4->TypeIndex;
    if ((1 < (ulonglong)bVar1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar4);
    param_1 = (FUniqueNetIdWrapper *)(pTVar4 + 1);
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// DestructItems<FUtilPoly2D,int> @ 147c208c0

void __cdecl DestructItems<FUtilPoly2D,int>(FUtilPoly2D *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Verts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,int> @ 147c20900

void __cdecl
DestructItems<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,int>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FRHIBuffer>,int> @ 147c20940

void __cdecl
DestructItems<TRefCountPtr<FRHIBuffer>,int>(TRefCountPtr<FRHIBuffer> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<UGameViewportClient::FPngFileData,1>,int> @ 147c20980

void __cdecl
DestructItems<TSharedPtr<UGameViewportClient::FPngFileData,1>,int>
          (TSharedPtr<UGameViewportClient::FPngFileData,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_> @ 147c22060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderCommandPipe::
Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>_>
          (FRenderCommandPipe *this,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [48];
  undefined1 local_98 [48];
  byte local_68;
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar3 = UE::RenderCommandPipe::IsReplaying(this);
  if (bVar3) {
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>
             ::Get();
    local_98._40_8_ = *(undefined8 *)&param_1->field_0x28;
    local_98._0_8_ = *(undefined8 *)param_1;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_98._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_98._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_98._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_98._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    local_68 = 1;
    ExecuteCommand(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_98,pFVar5);
    uVar8 = (ulonglong)local_68;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      if (local_98._0_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x10);
        if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._40_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
        return true;
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_98);
    }
    return true;
  }
  plVar6 = &this->_padding_;
  if ((plVar6 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  LOCK();
  bVar3 = (char)*plVar6 == '\0';
  if (bVar3) {
    *(undefined1 *)plVar6 = 1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow((FMutex *)plVar6);
  }
  if ((this->RecordTask).Pimpl.Reference == (FTaskBase *)0x0) {
    bVar3 = false;
  }
  else {
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>
             ::Get();
    local_58._40_8_ = *(undefined8 *)&param_1->field_0x28;
    local_58._0_8_ = *(undefined8 *)param_1;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_58._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_58._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_58._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    local_28 = 1;
    EnqueueAndLaunch(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_58,pFVar5);
    uVar8 = (ulonglong)local_28;
    if ((2 < uVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      if (local_58._0_8_ != 0) {
        plVar7 = (longlong *)(local_58 + 0x10);
        if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_58._40_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
        bVar3 = true;
        goto LAB_147c2228c;
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_58);
    }
    bVar3 = true;
  }
LAB_147c2228c:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar6;
    *(char *)plVar6 = (char)*plVar6 + -1;
    UNLOCK();
    if ((lVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
    }
  }
  return bVar3;
}

// Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>_> @ 147c222e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::`37'::TSTR_DoEnableSkinCaching2564>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::`37'::TSTR_DoEnableSkinCaching2564>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_147c22781;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_147c2266f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147c2266f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_147c22781:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>,TUniqueFunction<void___cdecl(FRHICommandList_&)>_> @ 147c227d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRenderCommandList::
Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>,TUniqueFunction<void___cdecl(FRHICommandList_&)>_>
          (FRenderCommandList *this,FRenderCommandPipe *param_1,
          TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FCommandList *this_00;
  FRenderCommandTag *pFVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [48];
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->bInitialized == 0) {
    Init(this);
  }
  if (param_1 != (FRenderCommandPipe *)0x0) {
    uVar1 = param_1->Index;
    if (uVar1 != 0xffffffff) {
      iVar2 = (this->CommandLists).ArrayNum;
      uVar7 = 0;
      if ((int)uVar1 < iVar2) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_78 = (longlong)(int)uVar1;
        local_70 = (longlong)iVar2;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      this_00 = (this->CommandLists).AllocatorInstance.Data + (int)uVar1;
      goto LAB_147c2286b;
    }
  }
  this_00 = GetRenderThread(this);
LAB_147c2286b:
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_68._32_8_ = *(undefined8 *)&param_2->field_0x20;
  local_68._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_68._24_8_ = *(undefined8 *)&param_2->field_0x18;
  if (local_68._0_8_ != 0) {
    *(undefined8 *)param_2 = 0;
  }
  local_38 = 1;
  pFVar8 = (FRenderCommandTag *)
           TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>
           ::Get();
  bVar4 = UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_68,pFVar8);
  uVar10 = (ulonglong)local_38;
  if (2 < uVar10) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] ==
      UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
      Destruct) {
    if (local_68._0_8_ != 0) {
      plVar9 = (longlong *)(local_68 + 0x10);
      if ((longlong *)local_68._40_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_68._40_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(local_68);
  }
  return bVar4;
}

// FindExistingActionWithPredicate<FStreamLevelAction,`FLatentActionManager::FindExistingAction<FStreamLevelAction>'::__l2::FFirstItemPredicate> @ 147c22960

FStreamLevelAction * __thiscall
FLatentActionManager::
FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::__l2::FFirstItemPredicate>
          (FLatentActionManager *this,UObject *param_1,int param_2,FFirstItemPredicate *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  int iStack_2c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  plVar7 = (longlong *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (*(int *)&(this->ObjectToActionListMap).field_0x8 ==
      *(int *)&(this->ObjectToActionListMap).field_0x34) {
    return (FStreamLevelAction *)0x0;
  }
  puVar8 = *(undefined1 **)&(this->ObjectToActionListMap).field_0x40;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &(this->ObjectToActionListMap).field_0x38;
  }
  iVar1 = *(int *)(puVar8 + (((ulonglong)local_res8 >> 0x20 ^ (ulonglong)local_res8 & 0xffffffff) &
                            (ulonglong)(*(int *)&(this->ObjectToActionListMap).field_0x48 - 1)) * 4)
  ;
  if (iVar1 == -1) {
    return (FStreamLevelAction *)0x0;
  }
  while( true ) {
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ObjectToActionListMap);
    if (((int)*puVar4 == local_res8.ObjectIndex) &&
       ((int)((ulonglong)*puVar4 >> 0x20) == local_res8.ObjectSerialNumber)) break;
    iVar1 = *(int *)(puVar4 + 3);
    if (iVar1 == -1) {
      return (FStreamLevelAction *)0x0;
    }
  }
  if (iVar1 == -1) {
    return (FStreamLevelAction *)0x0;
  }
  plVar9 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar9 = plVar7;
  }
  if (plVar9 == (longlong *)0x0) {
    return (FStreamLevelAction *)0x0;
  }
  plVar9 = (longlong *)*plVar9;
  if (plVar9 == (longlong *)0x0) {
    return (FStreamLevelAction *)0x0;
  }
  if ((int)plVar9[9] == 0) {
    return (FStreamLevelAction *)0x0;
  }
  plVar5 = (longlong *)plVar9[8];
  if ((longlong *)plVar9[8] == (longlong *)0x0) {
    plVar5 = plVar9 + 7;
  }
  iStack_2c = *(int *)((longlong)plVar5 + ((longlong)(int)plVar9[9] - 1U & (longlong)param_2) * 4);
  iVar1 = iStack_2c;
  iVar3 = iStack_2c;
  if (iStack_2c != -1) {
    do {
      iVar1 = *(int *)(*plVar9 + 0x10 + (longlong)iVar3 * 0x18);
      if (*(int *)(*plVar9 + (longlong)iVar3 * 0x18) == param_2) break;
      iVar3 = iVar1;
    } while (iVar1 != -1);
  }
  if (iVar3 != -1) {
    while( true ) {
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      if (iVar1 == -1) break;
      while (lVar2 = (longlong)iVar1, iVar1 = *(int *)(*plVar9 + 0x10 + lVar2 * 0x18),
            *(int *)(*plVar9 + lVar2 * 0x18) != param_2) {
        if (iVar1 == -1) goto LAB_147c22ad9;
      }
    }
LAB_147c22ad9:
    if (0 < (int)uVar6) {
      if (iStack_2c != -1) {
        do {
          iVar1 = *(int *)(*plVar9 + 0x10 + (longlong)iStack_2c * 0x18);
          if (*(int *)(*plVar9 + (longlong)iStack_2c * 0x18) == param_2) break;
          iStack_2c = iVar1;
        } while (iVar1 != -1);
      }
      if (iStack_2c != -1) {
        return *(FStreamLevelAction **)(*plVar9 + 8 + (longlong)iStack_2c * 0x18);
      }
    }
  }
  return (FStreamLevelAction *)0x0;
}

// GetDefault<AGameNetworkManager> @ 147c22b80

AGameNetworkManager * __cdecl GetDefault<AGameNetworkManager>(UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  AGameNetworkManager *pAVar7;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = AGameNetworkManager::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1469,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pAVar7 = (AGameNetworkManager *)(*pcVar4)();
      return pAVar7;
    }
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  return (AGameNetworkManager *)(param_1->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetDefault<UInputSettings> @ 147c22c20

UInputSettings * __cdecl GetDefault<UInputSettings>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UInputSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UInputSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetDefault<UUserInterfaceSettings> @ 147c22c60

UUserInterfaceSettings * __cdecl GetDefault<UUserInterfaceSettings>(UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UUserInterfaceSettings *pUVar7;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1469,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UUserInterfaceSettings *)(*pcVar4)();
      return pUVar7;
    }
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  return (UUserInterfaceSettings *)(param_1->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<AGameNetworkManager> @ 147c22f30

FString * __cdecl GetTypeName<AGameNetworkManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AGameNetworkManager::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<AGameSession> @ 147c22f70

FString * __cdecl GetTypeName<AGameSession>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AGameSession::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<AGameStateBase> @ 147c22fb0

FString * __cdecl GetTypeName<AGameStateBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AGameStateBase::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVertexFactoryParametersElementShaderBindings<FGeometryCollectionVertexFactory> @ 147c22ff0

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

void __cdecl
GetVertexFactoryParametersElementShaderBindings<FGeometryCollectionVertexFactory>
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
    FGeometryCollectionVertexFactoryShaderParameters::GetElementShaderBindings
              ((FGeometryCollectionVertexFactoryShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
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
    goto switchD_147c23018_caseD_1;
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
switchD_147c23018_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersElementShaderBindings<FGeometryCacheVertexVertexFactory> @ 147c230f0

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
GetVertexFactoryParametersElementShaderBindings<FGeometryCacheVertexVertexFactory>
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
  case SF_RayHitGroup:
    FGeometryCacheVertexFactoryShaderParameters::GetElementShaderBindings
              ((FGeometryCacheVertexFactoryShaderParameters *)param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147c23118_caseD_1;
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
switchD_147c23118_caseD_1:
    return;
  }
}

// GetVertexFactoryParametersLayout<FGeometryCollectionVertexFactory> @ 147c231f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FGeometryCollectionVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_RayHitGroup:
    pFVar3 = FGeometryCollectionVertexFactoryShaderParameters::StaticGetTypeLayout();
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
    goto switchD_147c2320d_caseD_1;
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
switchD_147c2320d_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// GetVertexFactoryParametersLayout<FGeometryCacheVertexVertexFactory> @ 147c23280

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FTypeLayoutDesc * __cdecl
GetVertexFactoryParametersLayout<FGeometryCacheVertexVertexFactory>(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_RayHitGroup:
    pFVar3 = FGeometryCacheVertexFactoryShaderParameters::StaticGetTypeLayout();
    return pFVar3;
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
  case SF_Compute:
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayCallable:
  case SF_WorkGraphRoot:
  case SF_WorkGraphComputeNode:
    goto switchD_147c2329d_caseD_1;
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
switchD_147c2329d_caseD_1:
    return (FTypeLayoutDesc *)0x0;
  }
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,`ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 147c23310

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_int,int,FIdentityFunctor,_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  TVector2<double> *local_res20;
  
  local_res20 = param_4.P;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<unsigned_int,int,FIdentityFunctor,TReversePredicate<_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>_>
            (param_1,param_2,param_3,(<lambda_1> *)&local_res20);
  iVar11 = param_2 + -1;
  lVar10 = (longlong)iVar11;
  if (0 < iVar11) {
    do {
      uVar3 = *param_1;
      iVar9 = 0;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar3;
      if (1 < iVar11) {
        do {
          iVar6 = iVar9 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < iVar11) {
            dVar1 = local_res20[param_1[(longlong)iVar6 + 2]].field0_0x0._s_0.X;
            dVar2 = local_res20[param_1[iVar8]].field0_0x0._s_0.X;
            if (dVar1 == dVar2) {
              bVar7 = local_res20[param_1[(longlong)iVar6 + 2]].field0_0x0._s_0.Y <
                      local_res20[param_1[iVar8]].field0_0x0._s_0.Y;
            }
            else {
              bVar7 = dVar1 < dVar2;
            }
            if (bVar7) {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          uVar3 = param_1[iVar8];
          uVar4 = param_1[iVar9];
          dVar1 = local_res20[uVar3].field0_0x0._s_0.X;
          dVar2 = local_res20[uVar4].field0_0x0._s_0.X;
          if (dVar2 == dVar1) {
            bVar7 = local_res20[uVar4].field0_0x0._s_0.Y < local_res20[uVar3].field0_0x0._s_0.Y;
          }
          else {
            bVar7 = dVar2 < dVar1;
          }
          if (!bVar7) break;
          param_1[iVar9] = uVar3;
          param_1[iVar8] = uVar4;
          iVar9 = iVar8;
        } while (iVar8 * 2 + 1 < iVar11);
      }
      iVar11 = iVar11 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapSortInternal<FGPUSkinCache::FSortedDispatchEntry,int,FIdentityFunctor,`FGPUSkinCache::DispatchPassExecute'::__l10::<lambda_1>_> @ 147c234a0

void __cdecl
AlgoImpl::
HeapSortInternal<FGPUSkinCache::FSortedDispatchEntry,int,FIdentityFunctor,_FGPUSkinCache::DispatchPassExecute_::__l10::<lambda_1>_>
          (FSortedDispatchEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FSortedDispatchEntry *pFVar1;
  FSortedDispatchEntry *pFVar2;
  int iVar3;
  int iVar4;
  FSortedDispatchEntry FVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar14 = iVar10;
  iVar12 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_147c235bc:
      if (iVar12 == 0) {
        iVar10 = param_2 + -1;
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          do {
            iVar14 = 0;
            FVar5 = *param_1;
            *param_1 = param_1[lVar13];
            param_1[lVar13] = FVar5;
            if (1 < iVar10) {
              do {
                iVar12 = iVar14 * 2;
                iVar9 = iVar12 + 1;
                if (iVar12 + 2 < iVar10) {
                  iVar11 = param_1[(longlong)iVar12 + 2].ShaderIndex;
                  iVar3 = param_1[(longlong)iVar12 + 1].ShaderIndex;
                  bVar8 = SBORROW4(iVar11,iVar3);
                  iVar4 = iVar11 - iVar3;
                  if (iVar11 == iVar3) {
                    bVar8 = SBORROW4(param_1[(longlong)iVar12 + 2].BatchIndex,
                                     param_1[(longlong)iVar12 + 1].BatchIndex);
                    iVar4 = param_1[(longlong)iVar12 + 2].BatchIndex -
                            param_1[(longlong)iVar12 + 1].BatchIndex;
                  }
                  if (bVar8 != iVar4 < 0) {
                    iVar9 = iVar12;
                  }
                  iVar9 = iVar9 + 1;
                }
                iVar12 = param_1[iVar9].ShaderIndex;
                pFVar1 = param_1 + iVar9;
                iVar11 = param_1[iVar14].ShaderIndex;
                bVar8 = SBORROW4(iVar11,iVar12);
                iVar3 = iVar11 - iVar12;
                pFVar2 = param_1 + iVar14;
                if (iVar11 == iVar12) {
                  bVar8 = SBORROW4(pFVar2->BatchIndex,pFVar1->BatchIndex);
                  iVar3 = pFVar2->BatchIndex - pFVar1->BatchIndex;
                }
                if (bVar8 == iVar3 < 0) break;
                FVar5 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar5;
                iVar14 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar13 = lVar13 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar9 = iVar12 + -1;
      iVar10 = iVar14 + -2;
      iVar14 = iVar10;
      iVar12 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      iVar3 = param_1[(longlong)iVar10 + 2].ShaderIndex;
      iVar4 = param_1[(longlong)iVar10 + 1].ShaderIndex;
      bVar8 = SBORROW4(iVar3,iVar4);
      iVar6 = iVar3 - iVar4;
      if (iVar3 == iVar4) {
        bVar8 = SBORROW4(param_1[(longlong)iVar10 + 2].BatchIndex,
                         param_1[(longlong)iVar10 + 1].BatchIndex);
        iVar6 = param_1[(longlong)iVar10 + 2].BatchIndex - param_1[(longlong)iVar10 + 1].BatchIndex;
      }
      if (bVar8 != iVar6 < 0) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    iVar10 = param_1[iVar11].ShaderIndex;
    pFVar1 = param_1 + iVar11;
    iVar3 = param_1[iVar9].ShaderIndex;
    bVar8 = SBORROW4(iVar3,iVar10);
    iVar4 = iVar3 - iVar10;
    pFVar2 = param_1 + iVar9;
    if (iVar3 == iVar10) {
      bVar8 = SBORROW4(pFVar2->BatchIndex,pFVar1->BatchIndex);
      iVar4 = pFVar2->BatchIndex - pFVar1->BatchIndex;
    }
    if (bVar8 == iVar4 < 0) goto LAB_147c235bc;
    FVar5 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar10 = iVar11 * 2 + 1;
    *pFVar1 = FVar5;
    iVar9 = iVar11;
  } while( true );
}

// HeapifyInternal<unsigned_int,int,FIdentityFunctor,TReversePredicate<`ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_>_> @ 147c236b0

void __cdecl
AlgoImpl::
HeapifyInternal<unsigned_int,int,FIdentityFunctor,TReversePredicate<_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_void___cdecl_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  TVector2<double> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar12 = iVar9 * 2;
  iVar7 = iVar12;
  iVar11 = iVar9;
  do {
    while (param_2 <= iVar12 + 1) {
LAB_147c237fa:
      if (iVar11 == 0) {
        return;
      }
      iVar9 = iVar11 + -1;
      iVar12 = iVar7 + -2;
      iVar7 = iVar12;
      iVar11 = iVar9;
    }
    iVar10 = iVar12;
    if (iVar12 + 2 < param_2) {
      pTVar5 = (param_4.Predicate)->P;
      dVar1 = pTVar5[param_1[(longlong)iVar12 + 2]].field0_0x0._s_0.X;
      dVar2 = pTVar5[param_1[(longlong)iVar12 + 1]].field0_0x0._s_0.X;
      iVar10 = iVar12 + 1;
      if (dVar1 == dVar2) {
        if (pTVar5[param_1[(longlong)iVar12 + 2]].field0_0x0._s_0.Y <
            pTVar5[param_1[(longlong)iVar12 + 1]].field0_0x0._s_0.Y) {
          iVar10 = iVar12;
        }
      }
      else if (dVar1 < dVar2) {
        iVar10 = iVar12;
      }
    }
    pTVar5 = (param_4.Predicate)->P;
    uVar3 = param_1[(longlong)iVar10 + 1];
    uVar4 = param_1[iVar9];
    dVar1 = pTVar5[uVar3].field0_0x0._s_0.X;
    dVar2 = pTVar5[uVar4].field0_0x0._s_0.X;
    if (dVar2 == dVar1) {
      bVar8 = pTVar5[uVar4].field0_0x0._s_0.Y < pTVar5[uVar3].field0_0x0._s_0.Y;
    }
    else {
      bVar8 = dVar2 < dVar1;
    }
    if (!bVar8) goto LAB_147c237fa;
    iVar12 = (iVar10 + 1) * 2;
    param_1[iVar9] = uVar3;
    param_1[(longlong)iVar10 + 1] = uVar4;
    iVar9 = iVar10 + 1;
  } while( true );
}

// InternalConstructor<AGameModeBase> @ 147c23830

void __cdecl InternalConstructor<AGameModeBase>(FObjectInitializer *param_1)

{
  if ((AGameModeBase *)param_1->Obj != (AGameModeBase *)0x0) {
    AGameModeBase::AGameModeBase((AGameModeBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AGameNetworkManager> @ 147c23850

void __cdecl InternalConstructor<AGameNetworkManager>(FObjectInitializer *param_1)

{
  AInfo *this;
  
  this = (AInfo *)param_1->Obj;
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined4 *)(this + 1) = 0x3d4ccccd;
    *(undefined ***)this = &___7AGameNetworkManager__6B_;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined2 *)&this[1].field_0x88 = 0;
    this[1].field_0x8a = 0;
    *(undefined4 *)&this[1].field_0x4 = 0x3e19999a;
    *(undefined4 *)&this[1].field_0x8 = 200;
    *(undefined4 *)&this[1].field_0xc = 500;
    *(undefined4 *)&this[1].field_0x40 = 0x42280000;
    *(undefined4 *)&this[1].field_0x44 = 0x40400000;
    *(undefined4 *)&this[1].field_0x48 = 0x41100000;
    *(undefined4 *)&this[1].field_0x4c = 0x43340000;
    *(undefined4 *)&this[1].field_0x50 = 0x3e800000;
    *(undefined4 *)&this[1].field_0x54 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x58 = 0x3e19999a;
    *(undefined4 *)&this[1].field_0x5c = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x60 = 0x3e000000;
    *(undefined4 *)&this[1].field_0x64 = 0x3f000000;
    *(undefined4 *)&this[1].field_0x68 = 0x3c87fcb9;
    *(undefined4 *)&this[1].field_0x6c = 0x3cb5dcc6;
    *(undefined4 *)&this[1].field_0x70 = 0x3c87fcb9;
    *(undefined4 *)&this[1].field_0x74 = 10000;
    *(undefined8 *)&this[1].field_0x78 = 10;
    *(undefined4 *)&this[1].field_0x80 = 0x3c87fcb9;
    *(undefined4 *)&this[1].field_0x84 = 0x447a0000;
    *(undefined4 *)&this[1].field_0x8c = 0x3e800000;
    *(undefined4 *)&this[1].field_0x90 = 0xbe800000;
    *(undefined8 *)&this[1].field_0x94 = 0x3f800000;
    *(undefined2 *)&this[1].field_0x9c = 0x100;
  }
  return;
}

// InternalConstructor<AGameSession> @ 147c239a0

void __cdecl InternalConstructor<AGameSession>(FObjectInitializer *param_1)

{
  AInfo *this;
  
  this = (AInfo *)param_1->Obj;
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined4 *)&this[1].field_0x8 = 0xffffffff;
    *(undefined ***)this = &___7AGameSession__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x1c = 0;
    this[1].field_0x24 = 0;
  }
  return;
}

// InternalConstructor<AGameState> @ 147c239f0

void __cdecl InternalConstructor<AGameState>(FObjectInitializer *param_1)

{
  AGameStateBase *this;
  
  this = (AGameStateBase *)param_1->Obj;
  if (this != (AGameStateBase *)0x0) {
    AGameStateBase::AGameStateBase(this,param_1);
    this->_padding_ = (longlong)&___7AGameState__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)MatchState::EnteringMap;
    this[1]._padding_ = (longlong)MatchState::EnteringMap;
  }
  return;
}

// InternalConstructor<AGameStateBase> @ 147c23a60

void __cdecl InternalConstructor<AGameStateBase>(FObjectInitializer *param_1)

{
  if ((AGameStateBase *)param_1->Obj != (AGameStateBase *)0x0) {
    AGameStateBase::AGameStateBase((AGameStateBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGameUserSettings> @ 147c23a80

void __cdecl InternalConstructor<UGameUserSettings>(FObjectInitializer *param_1)

{
  UGameUserSettings *this;
  
  this = (UGameUserSettings *)param_1->Obj;
  if (this != (UGameUserSettings *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    this->_padding_ = (longlong)&___7UGameUserSettings__6B_;
    (this->ScalabilityQuality).CPUBenchmarkResults = -1.0;
    (this->ScalabilityQuality).GPUBenchmarkResults = -1.0;
    (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayNum = 0;
    (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayMax = 0;
    (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayNum = 0;
    (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayMax = 0;
    Scalability::FQualityLevels::SetDefaults(&this->ScalabilityQuality);
    (this->WindowPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WindowPositions).ArrayNum = 0;
    (this->WindowPositions).ArrayMax = 0;
    (this->LastCPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LastCPUBenchmarkSteps).ArrayNum = 0;
    (this->LastCPUBenchmarkSteps).ArrayMax = 0;
    (this->LastGPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LastGPUBenchmarkSteps).ArrayNum = 0;
    (this->LastGPUBenchmarkSteps).ArrayMax = 0;
    this->bEnableScalabilitySettings = true;
    *(undefined8 *)&this->OnUpdateGameUserSettingsFileFromCloud = 0;
    *(undefined8 *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x8 = 0;
    *(undefined4 *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x10 = 0;
    *(undefined8 *)&this->OnUpdateCloudDataFromGameUserSettings = 0;
    *(undefined8 *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x8 = 0;
    *(undefined4 *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x10 = 0;
    *(undefined8 *)&this->OnGameUserSettingsUINeedsUpdate = 0;
    *(undefined8 *)&(this->OnGameUserSettingsUINeedsUpdate).field_0x8 = 0;
    *(undefined8 *)&(this->OnGameUserSettingsUINeedsUpdate).field_0x10 = 0;
    UGameUserSettings::SetToDefaults(this);
  }
  return;
}

// InternalConstructor<UGameViewportClient> @ 147c23b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UGameViewportClient>(FObjectInitializer *param_1)

{
  if ((UGameViewportClient *)param_1->Obj != (UGameViewportClient *)0x0) {
    UGameViewportClient::UGameViewportClient((UGameViewportClient *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGameplayStatics> @ 147c23b80

void __cdecl InternalConstructor<UGameplayStatics>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGameplayStatics__6B_;
  }
  return;
}

// InternalConstructor<UGeneratedBlueprintBinding> @ 147c23bb0

void __cdecl InternalConstructor<UGeneratedBlueprintBinding>(FObjectInitializer *param_1)

{
  UDynamicBlueprintBinding *this;
  
  this = (UDynamicBlueprintBinding *)param_1->Obj;
  if (this != (UDynamicBlueprintBinding *)0x0) {
    UDynamicBlueprintBinding::UDynamicBlueprintBinding(this,param_1);
    *(undefined ***)this = &___7UGeneratedBlueprintBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_> @ 147c23bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TResourceArray<UE::Math::TVector<float>,0> * __cdecl
InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<UE::Math::TVector<float>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<UE::Math::TVector<float>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<UE::Math::TVector<float>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15520b8a8 = 0;
      _DAT_15520b898 = 0;
      _DAT_15520b8a0 = 0;
      _Default = &___7__TResourceArray_U__TVector_M_Math_UE___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<UE::Math::TVector<float>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return (TResourceArray<UE::Math::TVector<float>,0> *)
             &`class_TResourceArray<UE::Math::TVector<float>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return (TResourceArray<UE::Math::TVector<float>,0> *)
         &`class_TResourceArray<UE::Math::TVector<float>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>(void)'
          ::__l3::Default;
}

// InternalVTableHelperCtorCaller<AGameModeBase> @ 147c23c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AGameModeBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameModeBase::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7AGameModeBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x48 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    FText::FText((FText *)&this[1].field_0x70);
    this[1].field_0x84 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    *(undefined8 *)&this[1].field_0x90 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AGameNetworkManager> @ 147c23dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AGameNetworkManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameNetworkManager::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined4 *)(this + 1) = 0x3d4ccccd;
    *(undefined ***)this = &___7AGameNetworkManager__6B_;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined4 *)&this[1].field_0x4 = 0x3e19999a;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AGameSession> @ 147c23ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AGameSession>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameSession::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7AGameSession__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x1c = 0;
    this[1].field_0x24 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AGameState> @ 147c23f60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AGameState>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameState::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7AGameState__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x70 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AGameStateBase> @ 147c24050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AGameStateBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGameStateBase::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7AGameStateBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x40 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameUserSettings> @ 147c24130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameUserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameUserSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameUserSettings__6B_;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xbf800000;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0xbf800000;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    Scalability::FQualityLevels::SetDefaults((FQualityLevels *)&pUVar1[1].field_0x8);
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    pUVar1[7].field_0xc = 1;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined4 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined4 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameViewportClient> @ 147c24280

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

UObject * __cdecl InternalVTableHelperCtorCaller<UGameViewportClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameViewportClient *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameViewportClient::GetPrivateStaticClass();
  pUVar3 = (UGameViewportClient *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGameViewportClient *)0x0) {
    pUVar3 = UGameViewportClient::UGameViewportClient(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayStatics> @ 147c24320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayStatics>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayStatics::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameplayStatics__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeneratedBlueprintBinding> @ 147c243d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeneratedBlueprintBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeneratedBlueprintBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeneratedBlueprintBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> @ 147c24490

uint __cdecl
Freeze::IntrinsicAppendHash<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>
          (TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> @ 147c244b0

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>
          (TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> @ 147c244d0

void __cdecl
Freeze::IntrinsicToString<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>
          (TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicUnfrozenCopy<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> @ 147c24540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *param_2,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicWriteMemoryImage<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> @ 147c245d0

void __cdecl
Freeze::IntrinsicWriteMemoryImage<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,`ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 147c24650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_int,int,FIdentityFunctor,_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint **ppuVar13;
  float fVar14;
  undefined1 auStack_378 [48];
  uint *local_348;
  uint *local_338;
  uint *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar14;
    memset(local_320,0,0x2e8);
    ppuVar13 = &local_338;
    do {
      puVar10 = ppuVar13[1];
      puVar8 = *ppuVar13;
      puVar1 = ppuVar13[2];
      iVar6 = (int)((longlong)puVar10 - (longlong)puVar8 >> 2) + 1;
      local_348._0_4_ = (int)puVar1;
      puVar11 = puVar8;
      if ((int)local_348 != 0) {
LAB_147c24710:
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          puVar7 = puVar10 + 1;
          uVar4 = puVar11[iVar6 >> 1];
          puVar11[iVar6 >> 1] = *puVar11;
          *puVar11 = uVar4;
          puVar8 = puVar11;
LAB_147c24740:
          puVar8 = puVar8 + 1;
          if (puVar8 <= puVar10) goto code_r0x000147c24749;
          goto LAB_147c24780;
        }
        if (puVar11 < puVar10) {
          puVar1 = puVar11 + 1;
          do {
            puVar8 = puVar11;
            if (puVar1 <= puVar10) {
              puVar7 = puVar1;
              if (0xf < ((longlong)puVar10 + (4 - (longlong)puVar1) & 0xfffffffffffffffcU)) {
                do {
                  uVar4 = *puVar7;
                  uVar12 = *puVar8;
                  dVar2 = param_4.P[uVar4].field0_0x0._s_0.X;
                  dVar3 = param_4.P[uVar12].field0_0x0._s_0.X;
                  if (dVar3 == dVar2) {
                    bVar5 = param_4.P[uVar12].field0_0x0._s_0.Y < param_4.P[uVar4].field0_0x0._s_0.Y
                    ;
                  }
                  else {
                    bVar5 = dVar3 < dVar2;
                  }
                  if (bVar5) {
                    puVar8 = puVar7;
                    uVar12 = uVar4;
                  }
                  dVar2 = param_4.P[puVar7[1]].field0_0x0._s_0.X;
                  dVar3 = param_4.P[uVar12].field0_0x0._s_0.X;
                  if (dVar3 == dVar2) {
                    bVar5 = param_4.P[uVar12].field0_0x0._s_0.Y <
                            param_4.P[puVar7[1]].field0_0x0._s_0.Y;
                  }
                  else {
                    bVar5 = dVar3 < dVar2;
                  }
                  uVar4 = puVar7[2];
                  if (bVar5) {
                    puVar8 = puVar7 + 1;
                  }
                  uVar12 = *puVar8;
                  dVar2 = param_4.P[uVar4].field0_0x0._s_0.X;
                  dVar3 = param_4.P[uVar12].field0_0x0._s_0.X;
                  if (dVar3 == dVar2) {
                    bVar5 = param_4.P[uVar12].field0_0x0._s_0.Y < param_4.P[uVar4].field0_0x0._s_0.Y
                    ;
                  }
                  else {
                    bVar5 = dVar3 < dVar2;
                  }
                  if (bVar5) {
                    puVar8 = puVar7 + 2;
                    uVar12 = uVar4;
                  }
                  uVar4 = puVar7[3];
                  dVar2 = param_4.P[uVar12].field0_0x0._s_0.X;
                  dVar3 = param_4.P[uVar4].field0_0x0._s_0.X;
                  if (dVar2 == dVar3) {
                    bVar5 = param_4.P[uVar12].field0_0x0._s_0.Y < param_4.P[uVar4].field0_0x0._s_0.Y
                    ;
                  }
                  else {
                    bVar5 = dVar2 < dVar3;
                  }
                  if (bVar5) {
                    puVar8 = puVar7 + 3;
                  }
                  puVar7 = puVar7 + 4;
                } while (puVar7 <= puVar10 + -3);
              }
              for (; puVar7 <= puVar10; puVar7 = puVar7 + 1) {
                dVar2 = param_4.P[*puVar8].field0_0x0._s_0.X;
                dVar3 = param_4.P[*puVar7].field0_0x0._s_0.X;
                if (dVar2 == dVar3) {
                  bVar5 = param_4.P[*puVar8].field0_0x0._s_0.Y <
                          param_4.P[*puVar7].field0_0x0._s_0.Y;
                }
                else {
                  bVar5 = dVar2 < dVar3;
                }
                if (bVar5) {
                  puVar8 = puVar7;
                }
              }
            }
            uVar4 = *puVar8;
            puVar7 = puVar10 + -1;
            *puVar8 = *puVar10;
            *puVar10 = uVar4;
            puVar10 = puVar7;
          } while (puVar11 < puVar7);
        }
        goto LAB_147c2486b;
      }
LAB_147c2485a:
      local_348 = puVar1;
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,_ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (puVar8,iVar6,param_3,param_4);
LAB_147c2486b:
      ppuVar13 = ppuVar13 + -3;
    } while (&local_338 <= ppuVar13);
  }
  return;
code_r0x000147c24749:
  dVar2 = param_4.P[*puVar11].field0_0x0._s_0.X;
  dVar3 = param_4.P[*puVar8].field0_0x0._s_0.X;
  if (dVar2 == dVar3) {
    bVar5 = param_4.P[*puVar11].field0_0x0._s_0.Y < param_4.P[*puVar8].field0_0x0._s_0.Y;
  }
  else {
    bVar5 = dVar2 < dVar3;
  }
  if (!bVar5) goto LAB_147c24740;
LAB_147c24780:
  do {
    puVar9 = puVar7;
    puVar7 = puVar9 + -1;
    if (puVar7 <= puVar11) break;
    dVar2 = param_4.P[*puVar7].field0_0x0._s_0.X;
    dVar3 = param_4.P[*puVar11].field0_0x0._s_0.X;
    if (dVar2 == dVar3) {
      bVar5 = param_4.P[*puVar7].field0_0x0._s_0.Y < param_4.P[*puVar11].field0_0x0._s_0.Y;
    }
    else {
      bVar5 = dVar2 < dVar3;
    }
  } while (!bVar5);
  if (puVar8 <= puVar7) {
    uVar4 = *puVar8;
    *puVar8 = *puVar7;
    *puVar7 = uVar4;
    goto LAB_147c24740;
  }
  uVar4 = *puVar11;
  local_348._0_4_ = (int)local_348 + -1;
  *puVar11 = *puVar7;
  *puVar7 = uVar4;
  if ((longlong)((longlong)puVar7 + (-4 - (longlong)puVar11) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar10 - (longlong)puVar8 & 0xfffffffffffffffcU)) {
    if (puVar8 < puVar10) {
      *ppuVar13 = puVar8;
      ppuVar13[1] = puVar10;
      *(int *)(ppuVar13 + 2) = (int)local_348;
      ppuVar13 = ppuVar13 + 3;
    }
    if (puVar7 <= puVar11 + 1) goto LAB_147c2486b;
    puVar10 = puVar9 + -2;
    puVar8 = puVar11;
  }
  else {
    if (puVar11 + 1 < puVar7) {
      *ppuVar13 = puVar11;
      ppuVar13[1] = puVar9 + -2;
      *(int *)(ppuVar13 + 2) = (int)local_348;
      ppuVar13 = ppuVar13 + 3;
    }
    if (puVar10 <= puVar8) goto LAB_147c2486b;
  }
  iVar6 = (int)((longlong)puVar10 - (longlong)puVar8 >> 2) + 1;
  puVar11 = puVar8;
  if ((int)local_348 == 0) goto LAB_147c2485a;
  goto LAB_147c24710;
}

// IntroSortInternal<FGPUSkinCache::FSortedDispatchEntry,int,FIdentityFunctor,`FGPUSkinCache::DispatchPassExecute'::__l10::<lambda_1>_> @ 147c24a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FGPUSkinCache::FSortedDispatchEntry,int,FIdentityFunctor,_FGPUSkinCache::DispatchPassExecute_::__l10::<lambda_1>_>
          (FSortedDispatchEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FSortedDispatchEntry *pFVar1;
  int iVar2;
  FSortedDispatchEntry FVar3;
  int iVar4;
  int iVar5;
  FSortedDispatchEntry *pFVar6;
  FSortedDispatchEntry **ppFVar7;
  FSortedDispatchEntry *pFVar8;
  FSortedDispatchEntry *pFVar9;
  FSortedDispatchEntry *pFVar10;
  FSortedDispatchEntry *pFVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  FSortedDispatchEntry *local_338;
  FSortedDispatchEntry *local_328;
  FSortedDispatchEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppFVar7 = &local_328;
    do {
      pFVar9 = ppFVar7[1];
      pFVar11 = *ppFVar7;
      pFVar1 = ppFVar7[2];
      iVar5 = (int)((longlong)pFVar9 - (longlong)pFVar11 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar10 = pFVar11;
      if ((int)local_338 != 0) {
LAB_147c24b20:
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          pFVar8 = pFVar9 + 1;
          FVar3 = pFVar10[iVar5 >> 1];
          pFVar10[iVar5 >> 1] = *pFVar10;
          *pFVar10 = FVar3;
          pFVar6 = pFVar10;
LAB_147c24b50:
          pFVar11 = pFVar6 + 1;
          if (pFVar11 <= pFVar9) goto code_r0x000147c24b59;
          goto LAB_147c24b70;
        }
        for (; pFVar11 = pFVar10, pFVar1 = pFVar10, pFVar10 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar9) {
            iVar5 = pFVar1->ShaderIndex;
            iVar2 = pFVar11->ShaderIndex;
            bVar12 = SBORROW4(iVar2,iVar5);
            iVar4 = iVar2 - iVar5;
            if (iVar2 == iVar5) {
              bVar12 = SBORROW4(pFVar11->BatchIndex,pFVar1->BatchIndex);
              iVar4 = pFVar11->BatchIndex - pFVar1->BatchIndex;
            }
            if (bVar12 != iVar4 < 0) {
              pFVar11 = pFVar1;
            }
          }
          FVar3 = *pFVar11;
          *pFVar11 = *pFVar9;
          *pFVar9 = FVar3;
        }
        goto LAB_147c24c3a;
      }
LAB_147c24c28:
      local_338 = pFVar1;
      HeapSortInternal<FGPUSkinCache::FSortedDispatchEntry,int,FIdentityFunctor,_FGPUSkinCache::DispatchPassExecute_::__l10::<lambda_1>_>
                (pFVar11,iVar5,param_3,param_4);
LAB_147c24c3a:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_328 <= ppFVar7);
  }
  return;
code_r0x000147c24b59:
  iVar5 = pFVar11->ShaderIndex;
  iVar2 = pFVar10->ShaderIndex;
  bVar12 = SBORROW4(iVar2,iVar5);
  iVar4 = iVar2 - iVar5;
  if (iVar2 == iVar5) {
    bVar12 = SBORROW4(pFVar10->BatchIndex,pFVar6[1].BatchIndex);
    iVar4 = pFVar10->BatchIndex - pFVar6[1].BatchIndex;
  }
  pFVar6 = pFVar11;
  if (bVar12 == iVar4 < 0) goto LAB_147c24b50;
LAB_147c24b70:
  do {
    pFVar6 = pFVar8;
    pFVar8 = pFVar6 + -1;
    if (pFVar8 <= pFVar10) break;
    iVar5 = pFVar10->ShaderIndex;
    iVar2 = pFVar8->ShaderIndex;
    bVar12 = SBORROW4(iVar2,iVar5);
    iVar4 = iVar2 - iVar5;
    if (iVar2 == iVar5) {
      bVar12 = SBORROW4(pFVar6[-1].BatchIndex,pFVar10->BatchIndex);
      iVar4 = pFVar6[-1].BatchIndex - pFVar10->BatchIndex;
    }
  } while (bVar12 == iVar4 < 0);
  if (pFVar11 <= pFVar8) {
    FVar3 = *pFVar11;
    *pFVar11 = *pFVar8;
    *pFVar8 = FVar3;
    pFVar6 = pFVar11;
    goto LAB_147c24b50;
  }
  FVar3 = *pFVar10;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar10 = *pFVar8;
  *pFVar8 = FVar3;
  if ((longlong)((longlong)pFVar8 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar11 & 0xfffffffffffffff8U)) {
    if (pFVar11 < pFVar9) {
      *ppFVar7 = pFVar11;
      ppFVar7[1] = pFVar9;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_147c24c3a;
    pFVar9 = pFVar6 + -2;
    pFVar11 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar6 + -2;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar9 <= pFVar11) goto LAB_147c24c3a;
  }
  iVar5 = (int)((longlong)pFVar9 - (longlong)pFVar11 >> 3) + 1;
  pFVar10 = pFVar11;
  if ((int)local_338 == 0) goto LAB_147c24c28;
  goto LAB_147c24b20;
}

// IsObjectPtrEqual<UGameViewportClient,UGameViewportClient_*,0> @ 147c24ce0

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
ObjectPtr_Private::IsObjectPtrEqual<UGameViewportClient,UGameViewportClient_*,0>
          (TObjectPtr<UGameViewportClient> *param_1,UGameViewportClient **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGameViewportClient *)0x0) {
    return *param_2 == (UGameViewportClient *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UStaticMesh,UStaticMesh_const_*,0> @ 147c24d00

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UStaticMesh,UStaticMesh_const_*,0>
          (TObjectPtr<UStaticMesh> *param_1,UStaticMesh **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UStaticMesh *)0x0) {
    return *param_2 == (UStaticMesh *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IterateAllFlags<`UGameViewportClient::HandleShowCommand'::__l50::FIterSink> @ 147c24d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FEngineShowFlags::IterateAllFlags<_UGameViewportClient::HandleShowCommand_::__l50::FIterSink>
          (FIterSink *param_1)

{
  bool bVar1;
  undefined1 local_res8 [16];
  FString local_res18;
  undefined1 local_10a8 [8];
  undefined1 local_10a0 [8];
  undefined1 local_1098 [8];
  undefined1 local_1090 [8];
  undefined1 local_1088 [8];
  undefined1 local_1080 [8];
  undefined1 local_1078 [8];
  undefined1 local_1070 [8];
  undefined1 local_1068 [8];
  undefined1 local_1060 [8];
  undefined1 local_1058 [8];
  undefined1 local_1050 [8];
  FIterSink *local_1048;
  FString local_1040;
  FString local_1030;
  FString local_1020;
  FString local_1010;
  FString local_1000;
  FString local_ff0;
  FString local_fe0;
  FString local_fd0;
  FString local_fc0;
  FString local_fb0;
  FString local_fa0;
  FString local_f90;
  FString local_f80;
  FString local_f70;
  FString local_f60;
  FString local_f50;
  FString local_f40;
  FString local_f30;
  FString local_f20;
  FString local_f10;
  FString local_f00;
  FString local_ef0;
  FString local_ee0;
  FString local_ed0;
  FString local_ec0;
  FString local_eb0;
  FString local_ea0;
  FString local_e90;
  FString local_e80;
  FString local_e70;
  FString local_e60;
  FString local_e50;
  FString local_e40;
  FString local_e30;
  FString local_e20;
  FString local_e10;
  FString local_e00;
  FString local_df0;
  FString local_de0;
  FString local_dd0;
  FString local_dc0;
  FString local_db0;
  FString local_da0;
  FString local_d90;
  FString local_d80;
  FString local_d70;
  FString local_d60;
  FString local_d50;
  FString local_d40;
  FString local_d30;
  FString local_d20;
  FString local_d10;
  FString local_d00;
  FString local_cf0;
  FString local_ce0;
  FString local_cd0;
  FString local_cc0;
  FString local_cb0;
  FString local_ca0;
  FString local_c90;
  FString local_c80;
  FString local_c70;
  FString local_c60;
  FString local_c50;
  FString local_c40;
  FString local_c30;
  FString local_c20;
  FString local_c10;
  FString local_c00;
  FString local_bf0;
  FString local_be0;
  FString local_bd0;
  FString local_bc0;
  FString local_bb0;
  FString local_ba0;
  FString local_b90;
  FString local_b80;
  FString local_b70;
  FString local_b60;
  FString local_b50;
  FString local_b40;
  FString local_b30;
  FString local_b20;
  FString local_b10;
  FString local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FString local_a00;
  FString local_9f0;
  FString local_9e0;
  FString local_9d0;
  FString local_9c0;
  FString local_9b0;
  FString local_9a0;
  FString local_990;
  FString local_980;
  FString local_970;
  FString local_960;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  code *local_40;
  FIterSink **local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x147c24d37;
  ::FString::FString(&local_1040,L"PostProcessing");
  GetSingleFlag(&param_1->EngineShowFlags,0);
  ::FString::PrintfImpl(&local_e90,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_res8,(bool *)&local_e90);
  if (local_e90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e90.Data.AllocatorInstance.Data);
  }
  if (local_1040.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1040.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1030,L"Bloom");
  GetSingleFlag(&param_1->EngineShowFlags,1);
  ::FString::PrintfImpl(&local_e80,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_res8 + 8),(bool *)&local_e80);
  if (local_e80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e80.Data.AllocatorInstance.Data);
  }
  if (local_1030.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1030.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1020,L"LocalExposure");
  GetSingleFlag(&param_1->EngineShowFlags,2);
  ::FString::PrintfImpl(&local_e70,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,&local_res18,(bool *)&local_e70);
  if (local_e70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e70.Data.AllocatorInstance.Data);
  }
  if (local_1020.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1020.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1010,L"Tonemapper");
  GetSingleFlag(&param_1->EngineShowFlags,3);
  ::FString::PrintfImpl(&local_e60,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)&local_res18.Data.ArrayNum,(bool *)&local_e60);
  if (local_e60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e60.Data.AllocatorInstance.Data);
  }
  if (local_1010.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1010.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1000,L"AntiAliasing");
  GetSingleFlag(&param_1->EngineShowFlags,4);
  ::FString::PrintfImpl(&local_e50,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_10a8,(bool *)&local_e50);
  if (local_e50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e50.Data.AllocatorInstance.Data);
  }
  if (local_1000.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1000.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ff0,L"TemporalAA");
  GetSingleFlag(&param_1->EngineShowFlags,5);
  ::FString::PrintfImpl(&local_e40,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_10a8 + 4),(bool *)&local_e40);
  if (local_e40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e40.Data.AllocatorInstance.Data);
  }
  if (local_ff0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ff0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fe0,L"AmbientCubemap");
  GetSingleFlag(&param_1->EngineShowFlags,6);
  ::FString::PrintfImpl(&local_e30,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_10a0,(bool *)&local_e30);
  if (local_e30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e30.Data.AllocatorInstance.Data);
  }
  if (local_fe0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fe0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fd0,L"EyeAdaptation");
  GetSingleFlag(&param_1->EngineShowFlags,7);
  ::FString::PrintfImpl(&local_e20,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_10a0 + 4),(bool *)&local_e20);
  if (local_e20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e20.Data.AllocatorInstance.Data);
  }
  if (local_fd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fd0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fc0,L"VisualizeHDR");
  GetSingleFlag(&param_1->EngineShowFlags,8);
  ::FString::PrintfImpl(&local_e10,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1098,(bool *)&local_e10);
  if (local_e10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e10.Data.AllocatorInstance.Data);
  }
  if (local_fc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fc0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fb0,L"VisualizeSkyLightIlluminance");
  GetSingleFlag(&param_1->EngineShowFlags,9);
  ::FString::PrintfImpl(&local_e00,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1098 + 4),(bool *)&local_e00);
  if (local_e00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e00.Data.AllocatorInstance.Data);
  }
  if (local_fb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fb0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_fa0,L"VisualizeLocalFogVolumes");
  GetSingleFlag(&param_1->EngineShowFlags,10);
  ::FString::PrintfImpl(&local_df0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1090,(bool *)&local_df0);
  if (local_df0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_df0.Data.AllocatorInstance.Data);
  }
  if (local_fa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fa0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f90,L"VisualizeLocalExposure");
  GetSingleFlag(&param_1->EngineShowFlags,0xb);
  ::FString::PrintfImpl(&local_de0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1090 + 4),(bool *)&local_de0);
  if (local_de0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_de0.Data.AllocatorInstance.Data);
  }
  if (local_f90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f90.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f80,L"LensFlares");
  GetSingleFlag(&param_1->EngineShowFlags,0xc);
  ::FString::PrintfImpl(&local_dd0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1088,(bool *)&local_dd0);
  if (local_dd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd0.Data.AllocatorInstance.Data);
  }
  if (local_f80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f80.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f70,L"LensDistortion");
  GetSingleFlag(&param_1->EngineShowFlags,0xd);
  ::FString::PrintfImpl(&local_dc0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1088 + 4),(bool *)&local_dc0);
  if (local_dc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dc0.Data.AllocatorInstance.Data);
  }
  if (local_f70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f70.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f60,L"GlobalIllumination");
  GetSingleFlag(&param_1->EngineShowFlags,0xe);
  ::FString::PrintfImpl(&local_db0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1080,(bool *)&local_db0);
  if (local_db0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_db0.Data.AllocatorInstance.Data);
  }
  if (local_f60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f60.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f50,L"Vignette");
  GetSingleFlag(&param_1->EngineShowFlags,0xf);
  ::FString::PrintfImpl(&local_da0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1080 + 4),(bool *)&local_da0);
  if (local_da0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_da0.Data.AllocatorInstance.Data);
  }
  if (local_f50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f50.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f40,L"Grain");
  GetSingleFlag(&param_1->EngineShowFlags,0x10);
  ::FString::PrintfImpl(&local_d90,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1078,(bool *)&local_d90);
  if (local_d90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d90.Data.AllocatorInstance.Data);
  }
  if (local_f40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f40.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f30,L"AmbientOcclusion");
  GetSingleFlag(&param_1->EngineShowFlags,0x11);
  ::FString::PrintfImpl(&local_d80,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1078 + 4),(bool *)&local_d80);
  if (local_d80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d80.Data.AllocatorInstance.Data);
  }
  if (local_f30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f30.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f20,L"Decals");
  GetSingleFlag(&param_1->EngineShowFlags,0x12);
  ::FString::PrintfImpl(&local_d70,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1070,(bool *)&local_d70);
  if (local_d70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d70.Data.AllocatorInstance.Data);
  }
  if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f20.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f10,L"CameraImperfections");
  GetSingleFlag(&param_1->EngineShowFlags,0x13);
  ::FString::PrintfImpl(&local_d60,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1070 + 4),(bool *)&local_d60);
  if (local_d60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d60.Data.AllocatorInstance.Data);
  }
  if (local_f10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f10.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_f00,L"OnScreenDebug");
  GetSingleFlag(&param_1->EngineShowFlags,0x14);
  ::FString::PrintfImpl(&local_d50,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1068,(bool *)&local_d50);
  if (local_d50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d50.Data.AllocatorInstance.Data);
  }
  if (local_f00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f00.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ef0,L"OverrideDiffuseAndSpecular");
  GetSingleFlag(&param_1->EngineShowFlags,0x15);
  ::FString::PrintfImpl(&local_d40,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1068 + 4),(bool *)&local_d40);
  if (local_d40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d40.Data.AllocatorInstance.Data);
  }
  if (local_ef0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ef0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ee0,L"LightingOnlyOverride");
  GetSingleFlag(&param_1->EngineShowFlags,0x16);
  ::FString::PrintfImpl(&local_d30,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1060,(bool *)&local_d30);
  if (local_d30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d30.Data.AllocatorInstance.Data);
  }
  if (local_ee0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ee0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ed0,L"ReflectionOverride");
  GetSingleFlag(&param_1->EngineShowFlags,0x17);
  ::FString::PrintfImpl(&local_d20,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1060 + 4),(bool *)&local_d20);
  if (local_d20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d20.Data.AllocatorInstance.Data);
  }
  if (local_ed0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ed0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ec0,L"MaterialNormal");
  GetSingleFlag(&param_1->EngineShowFlags,0x18);
  ::FString::PrintfImpl(&local_d10,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1058,(bool *)&local_d10);
  if (local_d10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d10.Data.AllocatorInstance.Data);
  }
  if (local_ec0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ec0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_eb0,L"MaterialAmbientOcclusion");
  GetSingleFlag(&param_1->EngineShowFlags,0x19);
  ::FString::PrintfImpl(&local_d00,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)(local_1058 + 4),(bool *)&local_d00);
  if (local_d00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d00.Data.AllocatorInstance.Data);
  }
  if (local_eb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_eb0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ea0,L"VisualizeBuffer");
  GetSingleFlag(&param_1->EngineShowFlags,0x1a);
  ::FString::PrintfImpl(&local_cf0,L"%s=%d");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1->LinesToSort,(FString *)local_1050,(bool *)&local_cf0);
  if (local_cf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf0.Data.AllocatorInstance.Data);
  }
  if (local_ea0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ea0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ce0,L"VisualizeNanite");
  bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                    (param_1,0x1b,&local_ce0);
  if (local_ce0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce0.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    ::FString::FString(&local_cd0,L"VisualizeLumen");
    bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                      (param_1,0x1c,&local_cd0);
    if (local_cd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd0.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      ::FString::FString(&local_cc0,L"VisualizeSubstrate");
      bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                        (param_1,0x1d,&local_cc0);
      if (local_cc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cc0.Data.AllocatorInstance.Data);
      }
      if (bVar1) {
        ::FString::FString(&local_cb0,L"VisualizeGroom");
        bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                          (param_1,0x1e,&local_cb0);
        if (local_cb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_cb0.Data.AllocatorInstance.Data);
        }
        if (bVar1) {
          ::FString::FString(&local_ca0,L"VisualizeVirtualShadowMap");
          bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                            (param_1,0x1f,&local_ca0);
          if (local_ca0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ca0.Data.AllocatorInstance.Data);
          }
          if (bVar1) {
            ::FString::FString(&local_c90,L"DirectLighting");
            bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                              (param_1,0x20,&local_c90);
            if (local_c90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c90.Data.AllocatorInstance.Data);
            }
            if (bVar1) {
              ::FString::FString(&local_c80,L"DirectionalLights");
              bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                                (param_1,0x21,&local_c80);
              if (local_c80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c80.Data.AllocatorInstance.Data);
              }
              if (bVar1) {
                ::FString::FString(&local_c70,L"PointLights");
                bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                                  (param_1,0x22,&local_c70);
                if (local_c70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c70.Data.AllocatorInstance.Data);
                }
                if (bVar1) {
                  ::FString::FString(&local_c60,L"SpotLights");
                  bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::HandleShowFlag
                                    (param_1,0x23,&local_c60);
                  if (local_c60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c60.Data.AllocatorInstance.Data);
                  }
                  if (bVar1) {
                    ::FString::FString(&local_c50,L"RectLights");
                    bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                            HandleShowFlag(param_1,0x24,&local_c50);
                    if (local_c50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c50.Data.AllocatorInstance.Data);
                    }
                    if (bVar1) {
                      ::FString::FString(&local_c40,L"ColorGrading");
                      bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                              HandleShowFlag(param_1,0x25,&local_c40);
                      if (local_c40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_c40.Data.AllocatorInstance.Data);
                      }
                      if (bVar1) {
                        ::FString::FString(&local_c30,L"VectorFields");
                        bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                                HandleShowFlag(param_1,0x26,&local_c30);
                        if (local_c30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_c30.Data.AllocatorInstance.Data);
                        }
                        if (bVar1) {
                          ::FString::FString(&local_c20,L"DepthOfField");
                          bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                                  HandleShowFlag(param_1,0x27,&local_c20);
                          if (local_c20.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_c20.Data.AllocatorInstance.Data);
                          }
                          if (bVar1) {
                            ::FString::FString(&local_c10,L"GBufferHints");
                            bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                                    HandleShowFlag(param_1,0x28,&local_c10);
                            if (local_c10.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c10.Data.AllocatorInstance.Data);
                            }
                            if (bVar1) {
                              ::FString::FString(&local_c00,L"MotionBlur");
                              bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                                      HandleShowFlag(param_1,0x29,&local_c00);
                              if (local_c00.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_c00.Data.AllocatorInstance.Data);
                              }
                              if (bVar1) {
                                ::FString::FString(&local_bf0,L"CompositeDebugPrimitives");
                                bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink::
                                        HandleShowFlag(param_1,0x2a,&local_bf0);
                                if (local_bf0.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
                                }
                                if (bVar1) {
                                  ::FString::FString(&local_be0,L"CompositeEditorPrimitives");
                                  bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::FIterSink
                                          ::HandleShowFlag(param_1,0x2b,&local_be0);
                                  if (local_be0.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_be0.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar1) {
                                    ::FString::FString(&local_bd0,L"OpaqueCompositeEditorPrimitives"
                                                      );
                                    bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::
                                            FIterSink::HandleShowFlag(param_1,0x2c,&local_bd0);
                                    if (local_bd0.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar1) {
                                      ::FString::FString(&local_bc0,L"TestImage");
                                      bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::
                                              FIterSink::HandleShowFlag(param_1,0x2d,&local_bc0);
                                      if (local_bc0.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_bc0.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar1) {
                                        ::FString::FString(&local_bb0,L"VisualizeDOF");
                                        bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::
                                                FIterSink::HandleShowFlag(param_1,0x2e,&local_bb0);
                                        if (local_bb0.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_bb0.Data.AllocatorInstance.Data);
                                        }
                                        if (bVar1) {
                                          ::FString::FString(&local_ba0,L"VertexColors");
                                          bVar1 = `UGameViewportClient::HandleShowCommand'::__l50::
                                                  FIterSink::HandleShowFlag(param_1,0x2f,&local_ba0)
                                          ;
                                          if (local_ba0.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_ba0.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar1) {
                                            ::FString::FString(&local_b90,L"PhysicalMaterialMasks");
                                            bVar1 = `UGameViewportClient::HandleShowCommand'::__l50
                                                    ::FIterSink::HandleShowFlag
                                                              (param_1,0x30,&local_b90);
                                            if (local_b90.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_b90.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar1) {
                                              ::FString::FString(&local_b80,L"Refraction");
                                              bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                      __l50::FIterSink::HandleShowFlag
                                                                (param_1,0x31,&local_b80);
                                              if (local_b80.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_b80.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              if (bVar1) {
                                                ::FString::FString(&local_b70,L"CameraInterpolation"
                                                                  );
                                                bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                        __l50::FIterSink::HandleShowFlag
                                                                  (param_1,0x32,&local_b70);
                                                if (local_b70.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_b70.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                if (bVar1) {
                                                  ::FString::FString(&local_b60,L"SceneColorFringe")
                                                  ;
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x33,&local_b60);
                                                  if (local_b60.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_b60.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_b50,L"ToneCurve");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x34,&local_b50);
                                                    if (local_b50.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_b50.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_b40,
                                                                         L"SeparateTranslucency");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x35,&local_b40
                                                                            );
                                                      if (local_b40.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_b40.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_b30,
                                                                           L"ScreenPercentage");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x36,
                                                                                 &local_b30);
                                                        if (local_b30.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_b30.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_b20,
                                                                             L"VisualizeMotionBlur")
                                                          ;
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x37,&local_b20
                                                                            );
                                                          if (local_b20.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_b20.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_b10,
                                                                                                                                                              
                                                  L"VisualizeMotionVectors");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x38,&local_b10);
                                                  if (local_b10.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_b10.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_b00,
                                                                       L"VisualizeReprojection");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x39,&local_b00);
                                                    if (local_b00.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_b00.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_af0,
                                                                                                                                                  
                                                  L"VisualizeTemporalUpscaler");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x3a,&local_af0);
                                                  if (local_af0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_af0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_ae0,L"VisualizeTSR");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x3b,&local_ae0);
                                                    if (local_ae0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_ae0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_ad0,L"MegaLights");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x3c,&local_ad0
                                                                            );
                                                      if (local_ad0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_ad0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_ac0,
                                                                           L"ReflectionEnvironment")
                                                        ;
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x3d,
                                                                                 &local_ac0);
                                                        if (local_ac0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_ac0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_ab0,
                                                                                                                                                          
                                                  L"VisualizeOutOfBoundsPixels");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x3e,&local_ab0);
                                                  if (local_ab0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_ab0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_aa0,L"Diffuse");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x3f,&local_aa0);
                                                    if (local_aa0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_aa0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_a90,L"Specular");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x40,&local_a90
                                                                            );
                                                      if (local_a90.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_a90.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_a80,
                                                                           L"SelectionOutline");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x41,
                                                                                 &local_a80);
                                                        if (local_a80.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_a80.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_a70,
                                                                                                                                                          
                                                  L"ScreenSpaceReflections");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x42,&local_a70);
                                                  if (local_a70.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_a70.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_a60,
                                                                       L"LumenReflections");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x43,&local_a60);
                                                    if (local_a60.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_a60.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_a50,
                                                                         L"ContactShadows");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x44,&local_a50
                                                                            );
                                                      if (local_a50.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_a50.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_a40,
                                                                                                                                                      
                                                  L"RayTracedDistanceFieldShadows");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x45,&local_a40);
                                                  if (local_a40.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_a40.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_a30,L"CapsuleShadows")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x46,&local_a30);
                                                    if (local_a30.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_a30.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_a20,
                                                                         L"SubsurfaceScattering");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x47,&local_a20
                                                                            );
                                                      if (local_a20.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_a20.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_a10,
                                                                           L"VisualizeSSS");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x48,
                                                                                 &local_a10);
                                                        if (local_a10.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_a10.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_a00,
                                                                             L"VolumetricLightmap");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x49,&local_a00
                                                                            );
                                                          if (local_a00.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_a00.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_9f0,
                                                                                                                                                              
                                                  L"IndirectLightingCache");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x4a,&local_9f0);
                                                  if (local_9f0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_9f0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_9e0,L"DebugAI");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x4b,&local_9e0);
                                                    if (local_9e0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_9e0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_9d0,L"VisLog");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x4c,&local_9d0
                                                                            );
                                                      if (local_9d0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_9d0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_9c0,L"Navigation")
                                                        ;
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x4d,
                                                                                 &local_9c0);
                                                        if (local_9c0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_9c0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_9b0,
                                                                             L"GameplayDebug");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x4e,&local_9b0
                                                                            );
                                                          if (local_9b0.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_9b0.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_9a0,
                                                                                                                                                              
                                                  L"TexturedLightProfiles");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x4f,&local_9a0);
                                                  if (local_9a0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_9a0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_990,L"LightFunctions")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x50,&local_990);
                                                    if (local_990.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_990.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_980,
                                                                         L"InstancedStaticMeshes");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x51,&local_980
                                                                            );
                                                      if (local_980.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_980.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_970,
                                                                           L"InstancedFoliage");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x52,
                                                                                 &local_970);
                                                        if (local_970.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_970.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_960,
                                                                             L"HISMCOcclusionBounds"
                                                                            );
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x53,&local_960
                                                                            );
                                                          if (local_960.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_960.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_950,
                                                                               L"HISMCClusterTree");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x54,
                                                                               &local_950);
                                                            if (local_950.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_950.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_940,
                                                                                                                                                                  
                                                  L"VisualizeInstanceUpdates");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x55,&local_940);
                                                  if (local_940.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_940.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_930,L"InstancedGrass")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x56,&local_930);
                                                    if (local_930.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_930.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_920,
                                                                         L"DynamicShadows");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x57,&local_920
                                                                            );
                                                      if (local_920.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_920.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_910,L"Particles");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x58,
                                                                                 &local_910);
                                                        if (local_910.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_910.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_900,L"Niagara");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x59,&local_900
                                                                            );
                                                          if (local_900.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_900.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_8f0,
                                                                                                                                                              
                                                  L"HeterogeneousVolumes");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x5a,&local_8f0);
                                                  if (local_8f0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_8f0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_8e0,L"SkeletalMeshes")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x5b,&local_8e0);
                                                    if (local_8e0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_8e0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_8d0,L"BuilderBrush")
                                                      ;
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x5c,&local_8d0
                                                                            );
                                                      if (local_8d0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_8d0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_8c0,
                                                                           L"Translucency");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x5d,
                                                                                 &local_8c0);
                                                        if (local_8c0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_8c0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_8b0,
                                                                             L"BillboardSprites");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x5e,&local_8b0
                                                                            );
                                                          if (local_8b0.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_8b0.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_8a0,L"LOD");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x5f,
                                                                               &local_8a0);
                                                            if (local_8a0.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_8a0.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_890,
                                                                                 L"LightComplexity")
                                                              ;
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0x60,
                                                                                 &local_890);
                                                              if (local_890.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_890.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_880,
                                                                                                                                                                      
                                                  L"ShaderComplexity");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x61,&local_880);
                                                  if (local_880.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_880.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_870,
                                                                       L"StationaryLightOverlap");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x62,&local_870);
                                                    if (local_870.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_870.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_860,
                                                                         L"LightMapDensity");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,99,&local_860);
                                                      if (local_860.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_860.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_850,
                                                                           L"StreamingBounds");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,100,
                                                                                 &local_850);
                                                        if (local_850.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_850.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_840,
                                                                             L"Constraints");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x65,&local_840
                                                                            );
                                                          if (local_840.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_840.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_830,
                                                                               L"MassProperties");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x66,
                                                                               &local_830);
                                                            if (local_830.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_830.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_820,
                                                                                 L"CameraFrustums");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0x67,
                                                                                 &local_820);
                                                              if (local_820.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_820.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_810,
                                                                                   L"AudioRadius");
                                                                bVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::__l50::
                                                                        FIterSink::HandleShowFlag
                                                                                  (param_1,0x68,
                                                                                   &local_810);
                                                                if (local_810.Data.AllocatorInstance
                                                                    .Data != (
                                                  FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_810.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_800,
                                                                       L"ForceFeedbackRadius");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x69,&local_800);
                                                    if (local_800.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_800.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_7f0,L"BSPSplit");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x6a,&local_7f0
                                                                            );
                                                      if (local_7f0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_7f0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_7e0,L"Brushes");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x6b,
                                                                                 &local_7e0);
                                                        if (local_7e0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_7e0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_7d0,L"Lighting")
                                                          ;
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x6c,&local_7d0
                                                                            );
                                                          if (local_7d0.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_7d0.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_7c0,
                                                                               L"UnlitRichView");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x6d,
                                                                               &local_7c0);
                                                            if (local_7c0.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_7c0.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_7b0,
                                                                                 L"UnlitViewmode");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0x6e,
                                                                                 &local_7b0);
                                                              if (local_7b0.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_7b0.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_7a0,
                                                                                                                                                                      
                                                  L"DeferredLighting");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x6f,&local_7a0);
                                                  if (local_7a0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_7a0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_790,L"Editor");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x70,&local_790);
                                                    if (local_790.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_790.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_780,L"BSPTriangles")
                                                      ;
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x71,&local_780
                                                                            );
                                                      if (local_780.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_780.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_770,
                                                                           L"LargeVertices");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x72,
                                                                                 &local_770);
                                                        if (local_770.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_770.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_760,L"Grid");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x73,&local_760
                                                                            );
                                                          if (local_760.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_760.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_750,L"Snap");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x74,
                                                                               &local_750);
                                                            if (local_750.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_750.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_740,
                                                                                 L"MeshEdges");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0x75,
                                                                                 &local_740);
                                                              if (local_740.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_740.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_730,
                                                                                   L"Cover");
                                                                bVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::__l50::
                                                                        FIterSink::HandleShowFlag
                                                                                  (param_1,0x76,
                                                                                   &local_730);
                                                                if (local_730.Data.AllocatorInstance
                                                                    .Data != (
                                                  FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_730.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_720,L"Splines");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x77,&local_720);
                                                    if (local_720.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_720.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_710,L"Selection");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x78,&local_710
                                                                            );
                                                      if (local_710.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_710.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_700,
                                                                                                                                                      
                                                  L"VisualizeLevelInstanceEditing");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x79,&local_700);
                                                  if (local_700.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_700.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_6f0,
                                                                       L"EditingLevelInstance");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x7a,&local_6f0);
                                                    if (local_6f0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_6f0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_6e0,L"ModeWidgets");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x7b,&local_6e0
                                                                            );
                                                      if (local_6e0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_6e0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_6d0,L"Bounds");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x7c,
                                                                                 &local_6d0);
                                                        if (local_6d0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_6d0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_6c0,
                                                                             L"HitProxies");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x7d,&local_6c0
                                                                            );
                                                          if (local_6c0.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_6c0.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_6b0,
                                                                               L"LightInfluences");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x7e,
                                                                               &local_6b0);
                                                            if (local_6b0.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_6b0.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_6a0,L"Pivot"
                                                                                );
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0x7f,
                                                                                 &local_6a0);
                                                              if (local_6a0.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_6a0.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_690,
                                                                                   L"ShadowFrustums"
                                                                                  );
                                                                bVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::__l50::
                                                                        FIterSink::HandleShowFlag
                                                                                  (param_1,0x80,
                                                                                   &local_690);
                                                                if (local_690.Data.AllocatorInstance
                                                                    .Data != (
                                                  FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_690.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_680,L"Wireframe");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x81,&local_680);
                                                    if (local_680.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_680.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_670,L"Materials");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x82,&local_670
                                                                            );
                                                      if (local_670.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_670.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_660,
                                                                           L"StaticMeshes");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x83,
                                                                                 &local_660);
                                                        if (local_660.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_660.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_650,L"Landscape"
                                                                            );
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x84,&local_650
                                                                            );
                                                          if (local_650.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_650.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_640,
                                                                               L"LightRadius");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x85,
                                                                               &local_640);
                                                            if (local_640.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_640.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_630,L"Fog");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0x86,
                                                                                 &local_630);
                                                              if (local_630.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_630.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_620,
                                                                                   L"Volumes");
                                                                bVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::__l50::
                                                                        FIterSink::HandleShowFlag
                                                                                  (param_1,0x87,
                                                                                   &local_620);
                                                                if (local_620.Data.AllocatorInstance
                                                                    .Data != (
                                                  FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_620.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_610,L"Game");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x88,&local_610);
                                                    if (local_610.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_610.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_600,
                                                                         L"ActorColoration");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x89,&local_600
                                                                            );
                                                      if (local_600.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_600.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_5f0,L"BSP");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x8a,
                                                                                 &local_5f0);
                                                        if (local_5f0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_5f0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_5e0,L"Collision"
                                                                            );
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x8b,&local_5e0
                                                                            );
                                                          if (local_5e0.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_5e0.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_5d0,
                                                                                                                                                              
                                                  L"CollisionVisibility");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x8c,&local_5d0);
                                                  if (local_5d0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5d0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_5c0,L"CollisionPawn");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x8d,&local_5c0);
                                                    if (local_5c0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_5c0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_5b0,L"LightShafts");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x8e,&local_5b0
                                                                            );
                                                      if (local_5b0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_5b0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_5a0,
                                                                           L"PostProcessMaterial");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x8f,
                                                                                 &local_5a0);
                                                        if (local_5a0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_5a0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_590,
                                                                             L"Atmosphere");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0x90,&local_590
                                                                            );
                                                          if (local_590.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_590.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_580,L"Cloud");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0x91,
                                                                               &local_580);
                                                            if (local_580.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_580.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_570,
                                                                                                                                                                  
                                                  L"CameraAspectRatioBars");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x92,&local_570);
                                                  if (local_570.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_570.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_560,
                                                                       L"CameraSafeFrames");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x93,&local_560);
                                                    if (local_560.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_560.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_550,L"TextRender");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x94,&local_550
                                                                            );
                                                      if (local_550.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_550.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_540,L"Rendering");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x95,
                                                                                 &local_540);
                                                        if (local_540.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_540.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_530,
                                                                                                                                                          
                                                  L"HighResScreenshotMask");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x96,&local_530);
                                                  if (local_530.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_530.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_520,L"HMDDistortion");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x97,&local_520);
                                                    if (local_520.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_520.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_510,
                                                                         L"StereoRendering");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x98,&local_510
                                                                            );
                                                      if (local_510.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_510.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_500,
                                                                                                                                                      
                                                  L"DistanceCulledPrimitives");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x99,&local_500);
                                                  if (local_500.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_500.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_4f0,
                                                                       L"VisualizeLightCulling");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x9a,&local_4f0);
                                                    if (local_4f0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_4f0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_4e0,
                                                                         L"PrecomputedVisibility");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0x9b,&local_4e0
                                                                            );
                                                      if (local_4e0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_4e0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_4d0,L"SkyLighting"
                                                                          );
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0x9c,
                                                                                 &local_4d0);
                                                        if (local_4d0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_4d0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_4c0,
                                                                                                                                                          
                                                  L"PreviewShadowsIndicator");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x9d,&local_4c0);
                                                  if (local_4c0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_4c0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_4b0,
                                                                       L"PrecomputedVisibilityCells"
                                                                      );
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0x9e,&local_4b0);
                                                    if (local_4b0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_4b0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_4a0,
                                                                                                                                                  
                                                  L"VisualizeVolumetricLightmap");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0x9f,&local_4a0);
                                                  if (local_4a0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_4a0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_490,
                                                                       L"VolumeLightingSamples");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xa0,&local_490);
                                                    if (local_490.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_490.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_480,
                                                                         L"Paper2DSprites");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xa1,&local_480
                                                                            );
                                                      if (local_480.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_480.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_470,
                                                                                                                                                      
                                                  L"VisualizeDistanceFieldAO");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xa2,&local_470);
                                                  if (local_470.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_470.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_460,
                                                                                                                                              
                                                  L"VisualizeMeshDistanceFields");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xa3,&local_460);
                                                  if (local_460.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_460.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_450,L"PhysicsField");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xa4,&local_450);
                                                    if (local_450.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_450.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_440,
                                                                                                                                                  
                                                  L"VisualizeGlobalDistanceField");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xa5,&local_440);
                                                  if (local_440.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_440.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_430,
                                                                       L"VisualizeLightingOnProbes")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xa6,&local_430);
                                                    if (local_430.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_430.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_420,L"ScreenSpaceAO"
                                                                        );
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xa7,&local_420
                                                                            );
                                                      if (local_420.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_420.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_410,
                                                                           L"DistanceFieldAO");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xa8,
                                                                                 &local_410);
                                                        if (local_410.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_410.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_400,
                                                                                                                                                          
                                                  L"LumenGlobalIllumination");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xa9,&local_400);
                                                  if (local_400.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_400.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_3f0,L"VolumetricFog");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xaa,&local_3f0);
                                                    if (local_3f0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_3f0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_3e0,L"VisualizeSSR")
                                                      ;
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xab,&local_3e0
                                                                            );
                                                      if (local_3e0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_3e0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_3d0,
                                                                           L"VisualizeShadingModels"
                                                                          );
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xac,
                                                                                 &local_3d0);
                                                        if (local_3d0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_3d0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_3c0,
                                                                             L"VisualizeSenses");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0xad,&local_3c0
                                                                            );
                                                          if (local_3c0.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_3c0.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_3b0,
                                                                               L"LODColoration");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0xae,
                                                                               &local_3b0);
                                                            if (local_3b0.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_3b0.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_3a0,
                                                                                 L"HLODColoration");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0xaf,
                                                                                 &local_3a0);
                                                              if (local_3a0.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_3a0.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_390,
                                                                                   L"QuadOverdraw");
                                                                bVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::__l50::
                                                                        FIterSink::HandleShowFlag
                                                                                  (param_1,0xb0,
                                                                                   &local_390);
                                                                if (local_390.Data.AllocatorInstance
                                                                    .Data != (
                                                  FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_390.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_380,
                                                                                                                                              
                                                  L"ShaderComplexityWithQuadOverdraw");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xb1,&local_380);
                                                  if (local_380.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_380.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_370,
                                                                       L"PrimitiveDistanceAccuracy")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xb2,&local_370);
                                                    if (local_370.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_370.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_360,
                                                                         L"MeshUVDensityAccuracy");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xb3,&local_360
                                                                            );
                                                      if (local_360.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_360.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_350,
                                                                                                                                                      
                                                  L"MaterialTextureScaleAccuracy");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xb4,&local_350);
                                                  if (local_350.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_350.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_340,
                                                                                                                                              
                                                  L"OutputMaterialTextureScales");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xb5,&local_340);
                                                  if (local_340.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_340.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_330,
                                                                       L"RequiredTextureResolution")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xb6,&local_330);
                                                    if (local_330.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_330.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_320,
                                                                         L"VisualizeVirtualTexture")
                                                      ;
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xb7,&local_320
                                                                            );
                                                      if (local_320.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_320.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_310,
                                                                           L"WidgetComponents");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xb8,
                                                                                 &local_310);
                                                        if (local_310.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_310.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_300,L"Bones");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0xb9,&local_300
                                                                            );
                                                          if (local_300.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_300.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_2f0,
                                                                               L"ServerDrawDebug");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0xba,
                                                                               &local_2f0);
                                                            if (local_2f0.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_2f0.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_2e0,
                                                                                 L"MediaPlanes");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0xbb,
                                                                                 &local_2e0);
                                                              if (local_2e0.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_2e0.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                ::FString::FString(&local_2d0,
                                                                                   L"VREditing");
                                                                bVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::__l50::
                                                                        FIterSink::HandleShowFlag
                                                                                  (param_1,0xbc,
                                                                                   &local_2d0);
                                                                if (local_2d0.Data.AllocatorInstance
                                                                    .Data != (
                                                  FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2d0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_2c0,L"OcclusionMeshes"
                                                                      );
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xbd,&local_2c0);
                                                    if (local_2c0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_2c0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_2b0,
                                                                                                                                                  
                                                  L"VisualizeInstanceOcclusionQueries");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xbe,&local_2b0);
                                                  if (local_2b0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2b0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_2a0,
                                                                       L"DisableOcclusionQueries");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xbf,&local_2a0);
                                                    if (local_2a0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_2a0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_290,L"PathTracing");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xc0,&local_290
                                                                            );
                                                      if (local_290.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_290.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_280,
                                                                           L"RayTracingDebug");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xc1,
                                                                                 &local_280);
                                                        if (local_280.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_280.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_270,
                                                                                                                                                          
                                                  L"VisualizeSkyAtmosphere");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xc2,&local_270);
                                                  if (local_270.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_270.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_260,
                                                                                                                                              
                                                  L"VisualizeLightFunctionAtlas");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xc3,&local_260);
                                                  if (local_260.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_260.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_250,
                                                                       L"VisualizeCalibrationColor")
                                                    ;
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xc4,&local_250);
                                                    if (local_250.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_250.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_240,
                                                                                                                                                  
                                                  L"VisualizeCalibrationGrayscale");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xc5,&local_240);
                                                  if (local_240.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_240.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_230,
                                                                       L"VisualizeCalibrationCustom"
                                                                      );
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xc6,&local_230);
                                                    if (local_230.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_230.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_220,
                                                                                                                                                  
                                                  L"VisualizePostProcessStack");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,199,&local_220);
                                                  if (local_220.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_220.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_210,
                                                                       L"VirtualTexturePrimitives");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,200,&local_210);
                                                    if (local_210.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_210.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_200,
                                                                                                                                                  
                                                  L"VisualizeVolumetricCloudConservativeDensity");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xc9,&local_200);
                                                  if (local_200.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_200.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_1f0,
                                                                                                                                              
                                                  L"VisualizeVolumetricCloudEmptySpaceSkipping");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xca,&local_1f0);
                                                  if (local_1f0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1f0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_1e0,
                                                                                                                                              
                                                  L"VirtualShadowMapPersistentData");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xcb,&local_1e0);
                                                  if (local_1e0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1e0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_1d0,
                                                                                                                                              
                                                  L"DebugDrawDistantVirtualSMLights");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xcc,&local_1d0);
                                                  if (local_1d0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1d0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_1c0,
                                                                       L"VirtualTextureResidency");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xcd,&local_1c0);
                                                    if (local_1c0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_1c0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_1b0,
                                                                         L"InputDebugVisualizer");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xce,&local_1b0
                                                                            );
                                                      if (local_1b0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_1b0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_1a0,
                                                                           L"LumenScreenTraces");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xcf,
                                                                                 &local_1a0);
                                                        if (local_1a0.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_1a0.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_190,
                                                                             L"LumenDetailTraces");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0xd0,&local_190
                                                                            );
                                                          if (local_190.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_190.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_180,
                                                                               L"LumenGlobalTraces")
                                                            ;
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0xd1,
                                                                               &local_180);
                                                            if (local_180.Data.AllocatorInstance.
                                                                Data != (FScriptContainerElement *)
                                                                        0x0) {
                                                              FMemory::Free(local_180.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_170,
                                                                                                                                                                  
                                                  L"LumenFarFieldTraces");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xd2,&local_170);
                                                  if (local_170.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_170.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_160,
                                                                       L"LumenSecondaryBounces");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xd3,&local_160);
                                                    if (local_160.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_160.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_150,
                                                                                                                                                  
                                                  L"LumenShortRangeAmbientOcclusion");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xd4,&local_150);
                                                  if (local_150.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_150.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_140,L"NaniteMeshes");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xd5,&local_140);
                                                    if (local_140.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_140.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_130,
                                                                         L"NaniteStreamingGeometry")
                                                      ;
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xd6,&local_130
                                                                            );
                                                      if (local_130.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_130.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_120,
                                                                           L"VisualizeGPUSkinCache")
                                                        ;
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xd7,
                                                                                 &local_120);
                                                        if (local_120.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_120.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_110,
                                                                                                                                                          
                                                  L"VisualizeLWCComplexity");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xd8,&local_110);
                                                  if (local_110.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_110.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_100,
                                                                       L"VisualizeShadowCasters");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xd9,&local_100);
                                                    if (local_100.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_100.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_f0,L"ShaderPrint");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xda,&local_f0)
                                                      ;
                                                      if (local_f0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_f0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_e0,
                                                                                                                                                      
                                                  L"SceneCaptureCopySceneDepth");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xdb,&local_e0);
                                                  if (local_e0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_e0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_d0,L"Cameras");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xdc,&local_d0);
                                                    if (local_d0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_d0.Data.AllocatorInstance.
                                                                    Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_c0,L"Hair");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xdd,&local_c0)
                                                      ;
                                                      if (local_c0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_c0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_b0,
                                                                                                                                                      
                                                  L"AllowPrimitiveAlphaHoldout");
                                                  bVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          __l50::FIterSink::HandleShowFlag
                                                                    (param_1,0xde,&local_b0);
                                                  if (local_b0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_b0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar1) {
                                                    ::FString::FString(&local_a0,L"AlphaInvert");
                                                    bVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::__l50::FIterSink::HandleShowFlag
                                                                      (param_1,0xdf,&local_a0);
                                                    if (local_a0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_a0.Data.AllocatorInstance.
                                                                    Data);
                                                    }
                                                    if (bVar1) {
                                                      ::FString::FString(&local_90,
                                                                         L"StereoMotionVectors");
                                                      bVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::__l50::FIterSink::
                                                              HandleShowFlag(param_1,0xe0,&local_90)
                                                      ;
                                                      if (local_90.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_90.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar1) {
                                                        ::FString::FString(&local_80,L"Clay");
                                                        bVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::__l50::FIterSink
                                                                ::HandleShowFlag(param_1,0xe1,
                                                                                 &local_80);
                                                        if (local_80.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_80.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar1) {
                                                          ::FString::FString(&local_70,L"Zebra");
                                                          bVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::__l50::
                                                                  FIterSink::HandleShowFlag
                                                                            (param_1,0xe2,&local_70)
                                                          ;
                                                          if (local_70.Data.AllocatorInstance.Data
                                                              != (FScriptContainerElement *)0x0) {
                                                            FMemory::Free(local_70.Data.
                                                                          AllocatorInstance.Data);
                                                          }
                                                          if (bVar1) {
                                                            ::FString::FString(&local_60,
                                                                               L"FrontBackFace");
                                                            bVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::__l50::
                                                                    FIterSink::HandleShowFlag
                                                                              (param_1,0xe3,
                                                                               &local_60);
                                                            if (local_60.Data.AllocatorInstance.Data
                                                                != (FScriptContainerElement *)0x0) {
                                                              FMemory::Free(local_60.Data.
                                                                            AllocatorInstance.Data);
                                                            }
                                                            if (bVar1) {
                                                              ::FString::FString(&local_50,
                                                                                 L"RandomColor");
                                                              bVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::__l50::
                                                                      FIterSink::HandleShowFlag
                                                                                (param_1,0xe4,
                                                                                 &local_50);
                                                              if (local_50.Data.AllocatorInstance.
                                                                  Data != (FScriptContainerElement *
                                                                          )0x0) {
                                                                FMemory::Free(local_50.Data.
                                                                              AllocatorInstance.Data
                                                                             );
                                                              }
                                                              if (bVar1) {
                                                                local_38 = &local_1048;
                                                                local_40 = UE::Core::Private::
                                                                           Function::
                                                                                                                                                      
                                                  TFunctionRefCaller<`FEngineShowFlags::IterateAllFlags<`UGameViewportClient::HandleShowCommand'::__l50::FIterSink>'::__l2::<lambda_1>,bool,unsigned_int,FString_const_&>
                                                  ::Call;
                                                  local_1048 = param_1;
                                                  IterateCustomFlags((
                                                  TFunctionRef<bool___cdecl(unsigned_int,FString_const_&)>
                                                  *)&local_40);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// Merge<TSharedPtr<UGameViewportClient::FPngFileData,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,`UGameViewportClient::LoadAvailableCursorPngs'::__l2::<lambda_1>_>_> @ 147c29040

void __cdecl
AlgoImpl::
Merge<TSharedPtr<UGameViewportClient::FPngFileData,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,_UGameViewportClient::LoadAvailableCursorPngs_::__l2::<lambda_1>_>_>
          (TSharedPtr<UGameViewportClient::FPngFileData,1> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,_private:_bool___cdecl_UGameViewportClient::LoadAvailableCursorPngs(TArray<TSharedPtr<UGameViewportClient::FPngFileData,1>,TSizedDefaultAllocator<32>_>_&,FString_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FPngFileData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar7;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar9;
  int iVar10;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar11;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar12;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar13;
  uint uVar14;
  uint uVar15;
  int local_58;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar8;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar10 = 0;
      if (0 < param_2 - local_58) {
        uVar15 = param_2 - local_58;
        iVar10 = 0;
        do {
          uVar14 = uVar15 >> 1;
          bVar4 = `UGameViewportClient::LoadAvailableCursorPngs'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,param_1 + param_2,
                             param_1 + (longlong)(int)(uVar14 + iVar10) + (longlong)local_58);
          if (!bVar4) {
            iVar10 = uVar14 + iVar10 + (uVar15 & 1);
          }
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      local_58 = local_58 + iVar10;
      if (param_2 <= local_58) {
        return;
      }
      iVar10 = 0;
      pTVar11 = param_1 + local_58;
      uVar15 = param_3 - param_2;
      if (0 < (int)uVar15) {
        do {
          uVar14 = uVar15 >> 1;
          bVar4 = `UGameViewportClient::LoadAvailableCursorPngs'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,
                             param_1 + (longlong)(int)(uVar14 + iVar10) + (longlong)param_2,pTVar11)
          ;
          if (bVar4) {
            iVar10 = uVar14 + iVar10 + (uVar15 & 1);
          }
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      iVar5 = (iVar10 - local_58) + param_2;
      iVar6 = param_2 - local_58;
      if ((iVar6 != 0) && (iVar6 < iVar5)) {
        pTVar7 = pTVar11 + iVar6;
        pTVar12 = pTVar11;
        pTVar8 = pTVar11 + iVar6;
        do {
          while( true ) {
            pTVar9 = pTVar7 + 1;
            pTVar13 = pTVar12 + 1;
            pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
            pFVar2 = pTVar12->Object;
            pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
            pTVar12->Object = pTVar7->Object;
            (pTVar12->SharedReferenceCount).ReferenceController = pTVar1;
            pTVar7->Object = pFVar2;
            (pTVar7->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar12 = pTVar13;
            if (pTVar9 == pTVar11 + iVar5) break;
            pTVar7 = pTVar9;
            if (pTVar13 == pTVar8) {
              pTVar8 = pTVar9;
            }
          }
          pTVar7 = pTVar8;
        } while (pTVar13 != pTVar8);
      }
      local_58 = local_58 + 1 + iVar10;
      param_2 = param_2 + iVar10;
    } while (local_58 < param_2);
  }
  return;
}

// MutableView<TObjectPtr<UPhysicalMaterial>_> @ 147c29270

TMutableView<TObjectPtr<UPhysicalMaterial>_> __cdecl
MutableView<TObjectPtr<UPhysicalMaterial>_>(TObjectPtr<UPhysicalMaterial> *param_1)

{
  TObjectPtr<UPhysicalMaterial>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UPhysicalMaterial>_>)(UPhysicalMaterial **)param_1;
}

// MutableView<TObjectPtr<UPrimitiveComponent>_> @ 147c29280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TMutableView<TObjectPtr<UPrimitiveComponent>_> __cdecl
MutableView<TObjectPtr<UPrimitiveComponent>_>(TObjectPtr<UPrimitiveComponent> *param_1)

{
  TObjectPtr<UPrimitiveComponent>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UPrimitiveComponent>_>)(UPrimitiveComponent **)param_1;
}

// NewObject<UConsole> @ 147c29290

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConsole * __cdecl
NewObject<UConsole>(UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,
                   UObject *param_5,bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UConsole *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UConsole_NoRegister();
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
  pUVar2 = (UConsole *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDecalComponent> @ 147c29390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDecalComponent * __cdecl NewObject<UDecalComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UDecalComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDecalComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDecalComponent *)
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

// NewObject<UForceFeedbackComponent> @ 147c29430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UForceFeedbackComponent * __cdecl NewObject<UForceFeedbackComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UForceFeedbackComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UForceFeedbackComponent *)
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

// NewObject<UParticleSystemComponent> @ 147c294d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UParticleSystemComponent * __cdecl
NewObject<UParticleSystemComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UParticleSystemComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UParticleSystemComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USaveGame> @ 147c295c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USaveGame * __cdecl
NewObject<USaveGame>
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
  pUVar1 = Z_Construct_UClass_USaveGame_NoRegister();
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
  return (USaveGame *)pUVar2;
}

// ObjectPtrWrap<UPhysicalMaterial_*,TObjectPtr<UPhysicalMaterial>_> @ 147c296c0

TObjectPtr<UPhysicalMaterial> * __cdecl
ObjectPtrWrap<UPhysicalMaterial_*,TObjectPtr<UPhysicalMaterial>_>(UPhysicalMaterial **param_1)

{
  return (TObjectPtr<UPhysicalMaterial> *)param_1;
}

// ObjectPtrWrap<UPrimitiveComponent_*,TObjectPtr<UPrimitiveComponent>_> @ 147c296d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TObjectPtr<UPrimitiveComponent> * __cdecl
ObjectPtrWrap<UPrimitiveComponent_*,TObjectPtr<UPrimitiveComponent>_>(UPrimitiveComponent **param_1)

{
  return (TObjectPtr<UPrimitiveComponent> *)param_1;
}

// ObjectPtrWrap<UWorld_*,TObjectPtr<UWorld>_> @ 147c296e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectPtr<UWorld> * __cdecl ObjectPtrWrap<UWorld_*,TObjectPtr<UWorld>_>(UWorld **param_1)

{
  return (TObjectPtr<UWorld> *)param_1;
}

// ProcessScreenshotData<FColor,int> @ 147c296f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
ProcessScreenshotData<FColor,int>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,TIntVector3<int> *param_2,int param_3
          ,bool param_4,bool param_5,wchar_t *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FHighResScreenshotConfig *pFVar9;
  FString *pFVar10;
  size_t sVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 local_c8 [8];
  FString local_c0;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  FString local_a0;
  FImageView local_90;
  int *local_78;
  TIntRect<int>_u_0 local_70;
  TIntRect<int>_u_0 local_60;
  ulonglong local_48;
  FString local_40;
  
  FVar12.Data = FScreenshotRequest::Filename.Data.AllocatorInstance.Data;
  lVar14 = (longlong)FScreenshotRequest::Filename.Data.ArrayNum;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = FScreenshotRequest::Filename.Data.ArrayNum;
  if (FScreenshotRequest::Filename.Data.ArrayNum == 0) {
    local_c0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FScreenshotRequest::Filename.Data.ArrayNum,0,(ForAnyElementType *)&local_c0,
               FScreenshotRequest::Filename.Data.ArrayNum,&local_c0.Data.ArrayMax);
    memcpy(local_c0.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
  }
  if ((GIsDumpingMovie != 0) && (local_c0.Data.ArrayNum < 2)) {
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_70._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_70._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FScreenshotRequest::RequestScreenshot
              (&local_a0,false,true,param_4,(TIntRect<int> *)&local_70._s_0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    iVar8 = FScreenshotRequest::Filename.Data.ArrayNum;
    FVar12.Data = FScreenshotRequest::Filename.Data.AllocatorInstance.Data;
    lVar14 = (longlong)FScreenshotRequest::Filename.Data.ArrayNum;
    local_c0.Data.ArrayNum = FScreenshotRequest::Filename.Data.ArrayNum;
    if (((FScreenshotRequest::Filename.Data.ArrayNum != 0) || (local_c0.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,FScreenshotRequest::Filename.Data.ArrayNum,local_c0.Data.ArrayMax,
                   (ForAnyElementType *)&local_c0,FScreenshotRequest::Filename.Data.ArrayNum,
                   &local_c0.Data.ArrayMax), iVar8 != 0)) {
      memcpy(local_c0.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
    }
  }
  if ((GIsHighResScreenshot == false) || (param_5)) {
    pFVar15 = (param_1->AllocatorInstance).Data;
    iVar8 = param_1->ArrayNum;
    pFVar17 = pFVar15 + (longlong)iVar8 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar8) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<FColor,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if (pFVar15 == pFVar17) break;
      pFVar15[3] = SUB41(param_3,0);
      pFVar15 = pFVar15 + 4;
    }
  }
  else {
    pFVar9 = GetHighResScreenshotConfig();
    local_60._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_60._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FHighResScreenshotConfig::MergeMaskIntoAlpha(pFVar9,param_1,(TIntRect<int> *)&local_60._s_0);
  }
  uVar19 = 0;
  uVar7 = 0;
  uVar22 = (ulonglong)GScreenshotResolutionX;
  uVar6 = GScreenshotResolutionX;
  uVar20 = GScreenshotResolutionY;
  if (GIsHighResScreenshot != false) {
    pFVar9 = GetHighResScreenshotConfig();
    uVar19 = *(undefined8 *)&(pFVar9->CaptureRegion).field0_0x0;
    uVar22 = *(ulonglong *)((longlong)&(pFVar9->CaptureRegion).field0_0x0 + 8);
    uVar7 = (uint)((ulonglong)uVar19 >> 0x20);
    uVar20 = (uint)(uVar22 >> 0x20);
    uVar6 = (uint)uVar22;
    local_48 = uVar22;
  }
  uVar13 = (uint)uVar19;
  if (((uint)uVar22 == uVar13) && (uVar20 == uVar7)) {
    piVar18 = &(param_2->field0_0x0)._s_0.Y;
  }
  else {
    local_a8 = (param_2->field0_0x0)._s_0.X;
    lVar14 = (longlong)(int)local_a8;
    local_78 = &(param_2->field0_0x0)._s_0.Y;
    local_ac = *local_78;
    uVar16 = local_a8;
    if ((int)uVar13 < (int)local_a8) {
      uVar16 = uVar13;
    }
    uVar13 = 0;
    if (0 < (int)uVar16) {
      uVar13 = uVar16;
    }
    uVar16 = local_ac;
    if ((int)uVar7 < (int)local_ac) {
      uVar16 = uVar7;
    }
    uVar7 = 0;
    if (0 < (int)uVar16) {
      uVar7 = uVar16;
    }
    uVar16 = local_a8;
    if ((int)uVar6 < (int)local_a8) {
      uVar16 = uVar6;
    }
    uVar6 = local_ac;
    if ((int)uVar20 < (int)local_ac) {
      uVar6 = uVar20;
    }
    local_b0 = 0;
    if (0 < (int)uVar16) {
      local_b0 = uVar16;
    }
    local_b0 = local_b0 - uVar13;
    uVar20 = 0;
    if (0 < (int)uVar6) {
      uVar20 = uVar6;
    }
    uVar20 = uVar20 - uVar7;
    piVar18 = local_78;
    if (((0 < (int)local_b0) && (0 < (int)uVar20)) &&
       ((local_b0 != local_a8 || (uVar20 != local_ac)))) {
      pFVar15 = (param_1->AllocatorInstance).Data;
      lVar21 = (longlong)(int)local_b0;
      uVar22 = (ulonglong)uVar20;
      pFVar17 = pFVar15 + ((longlong)(int)(uVar7 * local_a8) + (longlong)(int)uVar13) * 4;
      do {
        memmove(pFVar15,pFVar17,lVar21 * 4);
        uVar6 = local_b0;
        pFVar17 = pFVar17 + lVar14 * 4;
        pFVar15 = pFVar15 + lVar21 * 4;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      uVar16 = uVar20 * local_b0;
      uVar13 = local_ac * local_a8 - uVar16;
      uVar7 = 0;
      if ((int)(local_ac * local_a8) <= param_1->ArrayNum) {
        uVar7 = ~(uVar13 | uVar16) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (uVar13 != 0) {
        pFVar17 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 4;
        iVar8 = (param_1->ArrayNum - uVar13) - uVar16;
        if (iVar8 != 0) {
          memmove(pFVar17,pFVar17 + (longlong)(int)uVar13 * 4,(longlong)iVar8 << 2);
        }
        param_1->ArrayNum = param_1->ArrayNum - uVar13;
      }
      (param_2->field0_0x0)._s_0.X = uVar6;
      *local_78 = uVar20;
      (param_2->field0_0x0)._s_0.Z = 0;
      piVar18 = local_78;
    }
  }
  bVar5 = false;
  pFVar10 = FPaths::GetExtension(&local_40,&local_c0,false);
  iVar8 = (pFVar10->Data).ArrayNum;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (iVar8 < 2) {
    sVar11 = wcslen(param_6);
    FString::AppendChars(&local_c0,param_6,(int)sVar11);
  }
  bVar4 = FMiscTrace::ShouldTraceScreenshot();
  bVar2 = FTraceScreenshot::bSuppressWritingToFile;
  if ((!bVar4) ||
     (FTraceScreenshot::TraceScreenshot((param_2->field0_0x0)._s_0.X,*piVar18,param_1,&local_c0,-1),
     bVar2 == false)) {
    local_90.RawData = (param_1->AllocatorInstance).Data;
    local_90._padding_._0_4_ = (param_2->field0_0x0)._s_0.X;
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar12.Data = local_c0.Data.AllocatorInstance.Data;
    }
    local_90._padding_._4_4_ = *piVar18;
    local_90._padding_._0_4_ = 1;
    local_90._padding_._4_2_ = 0x201;
    bVar5 = FImageUtils::SaveImageByExtension((wchar_t *)FVar12.Data,&local_90,0);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// ProcessScreenshotData<FLinearColor,float> @ 147c29b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
ProcessScreenshotData<FLinearColor,float>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,TIntVector3<int> *param_2,
          float param_3,bool param_4,bool param_5,wchar_t *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FHighResScreenshotConfig *pFVar8;
  FString *pFVar9;
  size_t sVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 local_d8 [8];
  FString local_d0;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  FString local_b0;
  FImageView local_a0;
  int *local_88;
  TIntRect<int>_u_0 local_80;
  TIntRect<int>_u_0 local_70;
  ulonglong local_58;
  FString local_50 [2];
  
  FVar11.Data = FScreenshotRequest::Filename.Data.AllocatorInstance.Data;
  lVar13 = (longlong)FScreenshotRequest::Filename.Data.ArrayNum;
  uVar19 = 0;
  uVar18 = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = FScreenshotRequest::Filename.Data.ArrayNum;
  if (FScreenshotRequest::Filename.Data.ArrayNum == 0) {
    local_d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FScreenshotRequest::Filename.Data.ArrayNum,0,(ForAnyElementType *)&local_d0,
               FScreenshotRequest::Filename.Data.ArrayNum,&local_d0.Data.ArrayMax);
    memcpy(local_d0.Data.AllocatorInstance.Data,FVar11.Data,lVar13 * 2);
  }
  if ((GIsDumpingMovie != 0) && (local_d0.Data.ArrayNum < 2)) {
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    local_80._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_80._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FScreenshotRequest::RequestScreenshot
              (&local_b0,false,true,param_4,(TIntRect<int> *)&local_80._s_0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    iVar7 = FScreenshotRequest::Filename.Data.ArrayNum;
    FVar11.Data = FScreenshotRequest::Filename.Data.AllocatorInstance.Data;
    lVar13 = (longlong)FScreenshotRequest::Filename.Data.ArrayNum;
    local_d0.Data.ArrayNum = FScreenshotRequest::Filename.Data.ArrayNum;
    if ((FScreenshotRequest::Filename.Data.ArrayNum == 0) && (local_d0.Data.ArrayMax == 0)) {
      local_d0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FScreenshotRequest::Filename.Data.ArrayNum,local_d0.Data.ArrayMax,
                 (ForAnyElementType *)&local_d0,FScreenshotRequest::Filename.Data.ArrayNum,
                 &local_d0.Data.ArrayMax);
      if (iVar7 != 0) {
        memcpy(local_d0.Data.AllocatorInstance.Data,FVar11.Data,lVar13 * 2);
      }
    }
  }
  if ((GIsHighResScreenshot == false) || (param_5)) {
    iVar7 = param_1->ArrayNum;
    pFVar16 = (param_1->AllocatorInstance).Data;
    pFVar14 = pFVar16 + (longlong)iVar7 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar7) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<FLinearColor,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (pFVar16 == pFVar14) break;
      *(float *)(pFVar16 + 0xc) = param_3;
      pFVar16 = pFVar16 + 0x10;
    }
  }
  else {
    pFVar8 = GetHighResScreenshotConfig();
    local_70._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_70._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FHighResScreenshotConfig::MergeMaskIntoAlpha(pFVar8,param_1,(TIntRect<int> *)&local_70._s_0);
  }
  uVar22 = (ulonglong)GScreenshotResolutionX;
  uVar6 = GScreenshotResolutionX;
  uVar20 = GScreenshotResolutionY;
  if (GIsHighResScreenshot != false) {
    pFVar8 = GetHighResScreenshotConfig();
    uVar19 = *(undefined8 *)&(pFVar8->CaptureRegion).field0_0x0;
    uVar22 = *(ulonglong *)((longlong)&(pFVar8->CaptureRegion).field0_0x0 + 8);
    uVar20 = (uint)(uVar22 >> 0x20);
    uVar6 = (uint)uVar22;
    uVar18 = (uint)((ulonglong)uVar19 >> 0x20);
    local_58 = uVar22;
  }
  uVar12 = (uint)uVar19;
  if (((uint)uVar22 == uVar12) && (uVar20 == uVar18)) {
    piVar17 = &(param_2->field0_0x0)._s_0.Y;
  }
  else {
    local_b4 = (param_2->field0_0x0)._s_0.X;
    lVar13 = (longlong)(int)local_b4;
    local_88 = &(param_2->field0_0x0)._s_0.Y;
    local_b8 = *local_88;
    uVar15 = local_b4;
    if ((int)uVar12 < (int)local_b4) {
      uVar15 = uVar12;
    }
    local_c0 = 0;
    if (0 < (int)uVar15) {
      local_c0 = uVar15;
    }
    uVar12 = local_b8;
    if ((int)uVar18 < (int)local_b8) {
      uVar12 = uVar18;
    }
    uVar18 = 0;
    if (0 < (int)uVar12) {
      uVar18 = uVar12;
    }
    uVar12 = local_b4;
    if ((int)uVar6 < (int)local_b4) {
      uVar12 = uVar6;
    }
    uVar6 = local_b8;
    if ((int)uVar20 < (int)local_b8) {
      uVar6 = uVar20;
    }
    local_bc = 0;
    if (0 < (int)uVar12) {
      local_bc = uVar12;
    }
    local_bc = local_bc - local_c0;
    uVar20 = 0;
    if (0 < (int)uVar6) {
      uVar20 = uVar6;
    }
    uVar20 = uVar20 - uVar18;
    piVar17 = local_88;
    if (((0 < (int)local_bc) && (0 < (int)uVar20)) &&
       ((local_bc != local_b4 || (uVar20 != local_b8)))) {
      pFVar16 = (param_1->AllocatorInstance).Data;
      lVar21 = (longlong)(int)local_bc;
      uVar22 = (ulonglong)uVar20;
      pFVar14 = pFVar16 + ((longlong)(int)(uVar18 * local_b4) + (longlong)(int)local_c0) * 0x10;
      do {
        memmove(pFVar16,pFVar14,lVar21 * 0x10);
        uVar18 = local_bc;
        pFVar14 = pFVar14 + lVar13 * 0x10;
        pFVar16 = pFVar16 + lVar21 * 0x10;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      uVar15 = uVar20 * local_bc;
      uVar12 = local_b8 * local_b4 - uVar15;
      uVar6 = 0;
      if ((int)(local_b8 * local_b4) <= param_1->ArrayNum) {
        uVar6 = ~(uVar12 | uVar15) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (uVar12 != 0) {
        pFVar16 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
        iVar7 = (param_1->ArrayNum - uVar12) - uVar15;
        if (iVar7 != 0) {
          memmove(pFVar16,pFVar16 + (longlong)(int)uVar12 * 0x10,(longlong)iVar7 << 4);
        }
        param_1->ArrayNum = param_1->ArrayNum - uVar12;
      }
      (param_2->field0_0x0)._s_0.X = uVar18;
      *local_88 = uVar20;
      (param_2->field0_0x0)._s_0.Z = 0;
      piVar17 = local_88;
    }
  }
  bVar5 = false;
  pFVar9 = FPaths::GetExtension(local_50,&local_d0,false);
  iVar7 = (pFVar9->Data).ArrayNum;
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  if (iVar7 < 2) {
    sVar10 = wcslen(param_6);
    FString::AppendChars(&local_d0,param_6,(int)sVar10);
  }
  bVar4 = FMiscTrace::ShouldTraceScreenshot();
  bVar2 = FTraceScreenshot::bSuppressWritingToFile;
  if ((!bVar4) ||
     (FTraceScreenshot::TraceScreenshot((param_2->field0_0x0)._s_0.X,*piVar17,param_1,&local_d0,-1),
     bVar2 == false)) {
    local_a0.RawData = (param_1->AllocatorInstance).Data;
    local_a0._padding_._0_4_ = (param_2->field0_0x0)._s_0.X;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_d0.Data.ArrayNum != 0) {
      FVar11.Data = local_d0.Data.AllocatorInstance.Data;
    }
    local_a0._padding_._4_4_ = *piVar17;
    local_a0._padding_._0_4_ = 1;
    local_a0._padding_._4_2_ = 5;
    bVar5 = FImageUtils::SaveImageByExtension((wchar_t *)FVar11.Data,&local_a0,0);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// RotateInternal<TSharedPtr<UGameViewportClient::FPngFileData,1>_> @ 147c2a5d0

int __cdecl
AlgoImpl::RotateInternal<TSharedPtr<UGameViewportClient::FPngFileData,1>_>
          (TSharedPtr<UGameViewportClient::FPngFileData,1> *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FPngFileData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar4;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar6;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar7;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar8;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar5;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar4 = param_1 + param_3;
    pTVar7 = param_1;
    pTVar5 = param_1 + param_3;
    do {
      while( true ) {
        pTVar6 = pTVar4 + 1;
        pTVar8 = pTVar7 + 1;
        pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
        pFVar2 = pTVar7->Object;
        pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar4->Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4->Object = pFVar2;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
        pTVar7 = pTVar8;
        if (pTVar6 == param_1 + param_2) break;
        pTVar4 = pTVar6;
        if (pTVar8 == pTVar5) {
          pTVar5 = pTVar6;
        }
      }
      pTVar4 = pTVar5;
    } while (pTVar8 != pTVar5);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSharedPtr<UGameViewportClient::FPngFileData,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,`UGameViewportClient::LoadAvailableCursorPngs'::__l2::<lambda_1>_>_> @ 147c2b110

void __cdecl
AlgoImpl::
StableSortInternal<TSharedPtr<UGameViewportClient::FPngFileData,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,_UGameViewportClient::LoadAvailableCursorPngs_::__l2::<lambda_1>_>_>
          (TSharedPtr<UGameViewportClient::FPngFileData,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,_private:_bool___cdecl_UGameViewportClient::LoadAvailableCursorPngs(TArray<TSharedPtr<UGameViewportClient::FPngFileData,1>,TSizedDefaultAllocator<32>_>_&,FString_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPngFileData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar11;
  
  iVar9 = 0;
  if (0 < param_2) {
    pTVar11 = param_1 + 1;
    pTVar7 = param_1;
    do {
      if ((iVar9 + 1 < param_2) &&
         (bVar5 = `UGameViewportClient::LoadAvailableCursorPngs'::__l2::<lambda_1>::operator()
                            (param_4.Predicate,pTVar11,pTVar7), bVar5)) {
        pTVar2 = pTVar7[1].SharedReferenceCount.ReferenceController;
        pFVar3 = pTVar7->Object;
        pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar7[1].Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar2;
        pTVar7[1].Object = pFVar3;
        pTVar7[1].SharedReferenceCount.ReferenceController = pTVar4;
      }
      iVar9 = iVar9 + 2;
      pTVar11 = pTVar11 + 2;
      pTVar7 = pTVar7 + 2;
    } while (iVar9 < param_2);
  }
  iVar9 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar9 * 2;
      iVar6 = 0;
      iVar10 = param_2;
      do {
        iVar8 = iVar10;
        if (iVar1 <= iVar10) {
          iVar8 = iVar1;
        }
        Merge<TSharedPtr<UGameViewportClient::FPngFileData,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,_UGameViewportClient::LoadAvailableCursorPngs_::__l2::<lambda_1>_>_>
                  (param_1 + iVar6,iVar9,iVar8,param_3,param_4);
        iVar6 = iVar6 + iVar1;
        iVar10 = iVar10 + iVar9 * -2;
      } while (iVar6 < param_2);
      iVar9 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EStandbyType> @ 147c2b210

UEnum * __cdecl StaticEnum<enum_EStandbyType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStandbyType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStandbyType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStandbyType,(UObject *)pUVar1,L"EStandbyType");
  }
  return Z_Registration_Info_UEnum_EStandbyType.OuterSingleton;
}

// StaticEnum<enum_EWindowMode::Type> @ 147c2b250

UEnum * __cdecl StaticEnum<enum_EWindowMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindowMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWindowMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWindowMode,(UObject *)pUVar1,L"EWindowMode");
  }
  return Z_Registration_Info_UEnum_EWindowMode.OuterSingleton;
}

// StaticGetTypeLayoutDesc<UE::Math::TVector<float>_> @ 147c2b290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<UE::Math::TVector<float>_>(void)

{
  if ((DAT_1552099d7 & 2) == 0) {
    DAT_1552099d7 = DAT_1552099d7 | 3;
    _DAT_1552099c8 = 0xc;
    _DAT_155209978 = L"FVector3f";
    _DAT_155209990 = TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallWriteMemoryImage;
    _DAT_155209998 = TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallUnfrozenCopy;
    _DAT_1552099a0 = TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallAppendHash;
    _DAT_1552099a8 = TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallGetTargetAlignment;
    _DAT_1552099b0 = TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallToString;
    _DAT_155209988 = TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::CallDestroy;
    _DAT_1552099d0 = 4;
    DAT_1552099d4 = 0;
    _DAT_1552099cc = 0xc;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<UE::Math::TVector<float>_>::Do(void)'
          ::__l2::TypeBuffer;
}

// TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>_> @ 147c2b600

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeSignal(FRDGBuilder_&)_::_5_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>_>::
TRDGEmptyLambdaPass<_FGPUSkinCache::AddAsyncComputeSignal_::__l5::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeSignal(FRDGBuilder_&)_::_5_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_28;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_28.Contents = (uchar *)&<lambda_1>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeSignal(FRDGBuilder_&)_::_5_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_28.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_28.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_28.Layout.Reference);
  }
  local_28.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_28,param_2,Async);
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeSignal'::`5'::<lambda_1>_>::_vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_1>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>_> @ 147c2b6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeWait(FRDGBuilder_&)_::_11_::<lambda_1>_>
* __thiscall
TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>_>::
TRDGEmptyLambdaPass<_FGPUSkinCache::AddAsyncComputeWait_::__l11::<lambda_1>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeWait(FRDGBuilder_&)_::_11_::<lambda_1>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_1>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_public:_static_void___cdecl_FGPUSkinCache::AddAsyncComputeWait(FRDGBuilder_&)_::_11_::<lambda_1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Async);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FGPUSkinCache::AddAsyncComputeWait'::`11'::<lambda_1>_>
        ::_vftable_;
  *(FTaskData **)((longlong)this + 0x180) = param_3->TaskData;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeWait'::`11'::<lambda_1>_>::_vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_1>_>::EmptyShaderParameters;
  return this;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>,1,1> @ 147c30880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FGPUSkinCache::CVarSinkFunction_::__l37::TSTR_DoEnableSkinCaching2564>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::`37'::TSTR_DoEnableSkinCaching2564>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000147c308a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UGameplayStatics::AsyncLoadGameFromSlot'::__l5::<lambda_1>,0,1> @ 147c308b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGameplayStatics::AsyncLoadGameFromSlot'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGameplayStatics::AsyncLoadGameFromSlot_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGameplayStatics::AsyncLoadGameFromSlot'::`5'::<lambda_1>,0,1>::
        _vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UGameplayStatics::AsyncSaveGameToSlot'::__l5::<lambda_1>,0,1> @ 147c308d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGameplayStatics::AsyncSaveGameToSlot'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UGameplayStatics::AsyncSaveGameToSlot_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGameplayStatics::AsyncSaveGameToSlot'::`5'::<lambda_1>,0,1>::
        _vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FGPUSkinCache::CVarSinkFunction'::__l37::<lambda_1>,1,0> @ 147c308f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUSkinCache::CVarSinkFunction'::__l37::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FGPUSkinCache::CVarSinkFunction_::__l37::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGPUSkinCache::CVarSinkFunction'::`37'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGPUSkinCache::Dispatch'::__l5::<lambda_3>,1,0> @ 147c30910

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FGPUSkinCache::Dispatch'::__l5::<lambda_3>,1,0>
::~TFunction_OwnedObject<_FGPUSkinCache::Dispatch_::__l5::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGPUSkinCache::Dispatch'::`5'::<lambda_3>,1,0>::_vftable_;
  return;
}

// `vcall'{1896,{flat}}'_}' @ 147c33930

/* [thunk]: __cdecl AGameNetworkManager::`vcall'{1896,{flat}}' }' */

void __thiscall AGameNetworkManager::_vcall__1896__flat______(AGameNetworkManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x768))();
  return;
}

// `vcall'{1904,{flat}}'_}' @ 147c33940

/* [thunk]: __cdecl AGameSession::`vcall'{1904,{flat}}' }' */

void __thiscall AGameSession::_vcall__1904__flat______(AGameSession *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x770))();
  return;
}

// `vcall'{2128,{flat}}'_}' @ 147c33950

/* [thunk]: __cdecl AGameSession::`vcall'{2128,{flat}}' }' */

void __thiscall AGameSession::_vcall__2128__flat______(AGameSession *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x850))();
  return;
}

// `vcall'{2136,{flat}}'_}' @ 147c33960

/* [thunk]: __cdecl AGameSession::`vcall'{2136,{flat}}' }' */

void __thiscall AGameSession::_vcall__2136__flat______(AGameSession *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x858))();
  return;
}

// `vcall'{2088,{flat}}'_}' @ 147c33970

/* [thunk]: __cdecl AGameState::`vcall'{2088,{flat}}' }' */

void __thiscall AGameState::_vcall__2088__flat______(AGameState *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x828))();
  return;
}

// `vcall'{2016,{flat}}'_}' @ 147c33980

/* [thunk]: __cdecl AGameStateBase::`vcall'{2016,{flat}}' }' */

void __thiscall AGameStateBase::_vcall__2016__flat______(AGameStateBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7e0))();
  return;
}

// `vcall'{928,{flat}}'_}' @ 147c33990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]: __cdecl UGameViewportClient::`vcall'{928,{flat}}' }' */

void __thiscall UGameViewportClient::_vcall__928__flat______(UGameViewportClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c33993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a0))();
  return;
}

// `vcall'{936,{flat}}'_}' @ 147c339a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]: __cdecl UGameViewportClient::`vcall'{936,{flat}}' }' */

void __thiscall UGameViewportClient::_vcall__936__flat______(UGameViewportClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c339a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3a8))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 147c339b0

/* [thunk]:public: virtual void * __ptr64 __cdecl TSkeletalMeshVertexData<struct
   UE::Math::TVector<float> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::_vector_deleting_destructor__adjustor_8__
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSkeletalMeshVertexData<UE::Math::TVector<float>_> *)&this[-1].field_0x20,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 147c339c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGameViewportClient::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UGameViewportClient::_vector_deleting_destructor__adjustor_48__
          (UGameViewportClient *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{104}' @ 147c339d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UGameViewportClient::`vector deleting
   destructor'`adjustor{104}' (unsigned int) __ptr64 */

void * __thiscall
UGameViewportClient::_vector_deleting_destructor__adjustor_104__
          (UGameViewportClient *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 147c339e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33a10

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33a40

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,enum_ETravelFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33a70

void * __thiscall
IBaseDelegateInstance<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33aa0

void * __thiscall
IBaseDelegateInstance<void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33ad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy,`UGameViewportClient::UGameViewportClient'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33b00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameNetworkManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameNetworkManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33b30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameSession,void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameSession,void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33b60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameSession,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameSession,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33b90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameState,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameState,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33bc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameStateBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AGameStateBase,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33bf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33c20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(UWorld_*,enum_ETravelFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33c50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33c80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33cb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameViewportClient,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33ce0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33d10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33d40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,enum_ETravelFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33d70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33da0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33dd0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 147c33e40

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 147c33eb0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33ef0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::`37'::TSTR_DoEnableSkinCaching2564>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGameplayStatics::AsyncLoadGameFromSlot'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGameplayStatics::AsyncLoadGameFromSlot'::`5'::<lambda_1>,0,1>::
        _vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c33fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGameplayStatics::AsyncSaveGameToSlot'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGameplayStatics::AsyncSaveGameToSlot'::`5'::<lambda_1>,0,1>::
        _vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUSkinCache::CVarSinkFunction'::__l37::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGPUSkinCache::CVarSinkFunction'::`37'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34070

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FGPUSkinCache::Dispatch'::__l5::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGPUSkinCache::Dispatch'::`5'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c340b0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34110

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UGameViewportClient::FPngFileData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UGameViewportClient::FPngFileData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34150

void * __thiscall
FRDGAllocator::TObject<FRDGBlackboard::TStruct<FDynamicMeshBoundsBlackboardStruct>_>::
_scalar_deleting_destructor_
          (TObject<FRDGBlackboard::TStruct<FDynamicMeshBoundsBlackboardStruct>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FRDGBlackboard::TStruct<FGPUSkinCache::FTaskData>_>::
_scalar_deleting_destructor_
          (TObject<FRDGBlackboard::TStruct<FGPUSkinCache::FTaskData>_> *this,uint param_1)

{
  FGPUSkinCache::FTaskData::~FTaskData(&(this->Alloc).Struct);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c341c0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34220

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34280

void * __thiscall
TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c342e0

void * __thiscall
TRDGEmptyLambdaPass<`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34340

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FGPUSkinCache::AddAsyncComputeSignal'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c343a0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FGPUSkinCache::AddAsyncComputeWait'::__l11::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

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
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34400

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34440

void * __thiscall
TResourceArray<UE::Math::TVector<float>,0>::_scalar_deleting_destructor_
          (TResourceArray<UE::Math::TVector<float>,0> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34490

void * __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::_scalar_deleting_destructor_
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  *(undefined ***)&this->field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)this = &___7FSkeletalMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c344f0

void * __thiscall
FRDGBlackboard::TStruct<FDynamicMeshBoundsBlackboardStruct>::_scalar_deleting_destructor_
          (TStruct<FDynamicMeshBoundsBlackboardStruct> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FRDGBlackboard::TStruct<FGPUSkinCache::FTaskData>::_scalar_deleting_destructor_
          (TStruct<FGPUSkinCache::FTaskData> *this,uint param_1)

{
  FGPUSkinCache::FTaskData::~FTaskData(&this->Struct);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34560

void * __thiscall AGameModeBase::_scalar_deleting_destructor_(AGameModeBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7AGameModeBase__6B_;
  DestructItems<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->Pausers).AllocatorInstance.Data,(this->Pausers).ArrayNum);
  pFVar1 = (this->Pausers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DefaultPlayerName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->OptionsString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34610

void * __thiscall
AGameNetworkManager::_scalar_deleting_destructor_(AGameNetworkManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AGameNetworkManager__6B_;
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34670

void * __thiscall AGameSession::_scalar_deleting_destructor_(AGameSession *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AGameSession__6B_;
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c346d0

void * __thiscall AGameState::_scalar_deleting_destructor_(AGameState *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AGameStateBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34750

void * __thiscall AGameStateBase::_scalar_deleting_destructor_(AGameStateBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AGameStateBase__6B_;
  pFVar1 = (this->PlayerArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c347d0

void * __thiscall
FSkeletalMeshVertexDataInterface::_scalar_deleting_destructor_
          (FSkeletalMeshVertexDataInterface *this,uint param_1)

{
  *this = (FSkeletalMeshVertexDataInterface)&___7FSkeletalMeshVertexDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34810

void * __thiscall
IPlatformFeaturesModule::_scalar_deleting_destructor_(IPlatformFeaturesModule *this,uint param_1)

{
  *this = (IPlatformFeaturesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c34850

void * __thiscall
UGameUserSettings::_scalar_deleting_destructor_(UGameUserSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGameUserSettings__6B_;
  pvVar1 = *(void **)&(this->OnGameUserSettingsUINeedsUpdate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGameUserSettingsUINeedsUpdate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnUpdateCloudDataFromGameUserSettings);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnUpdateGameUserSettingsFileFromCloud);
  pFVar2 = (this->LastGPUBenchmarkSteps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastCPUBenchmarkSteps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WindowPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
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

// `scalar_deleting_destructor' @ 147c34950

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
UGameViewportClient::_scalar_deleting_destructor_(UGameViewportClient *this,uint param_1)

{
  ~UGameViewportClient(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x460);
  }
  return this;
}

// `scalar_deleting_destructor' @ 147c349b0

void * __thiscall
UGameplayStatics::_scalar_deleting_destructor_(UGameplayStatics *this,uint param_1)

{
  *(undefined ***)this = &___7UGameplayStatics__6B_;
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

// `scalar_deleting_destructor' @ 147c34a10

void * __thiscall
UGeneratedBlueprintBinding::_scalar_deleting_destructor_
          (UGeneratedBlueprintBinding *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGeneratedBlueprintBinding__6B_;
  pFVar1 = (this->GeneratedBlueprintBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// ComponentIsDamageableFrom @ 147c3dcf0

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

bool __cdecl
ComponentIsDamageableFrom
          (UPrimitiveComponent *param_1,TVector<double> *param_2,AActor *param_3,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_4,ECollisionChannel param_5,
          FHitResult *param_6)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  UWorld *this;
  UObject *pUVar10;
  FHitResult *pFVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStackY_338 [32];
  TVector<double>_u_0 local_2d8;
  FString local_2c0;
  TStatId local_2b0;
  FName local_2a8;
  FName local_2a0;
  FString local_298;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  FName local_258;
  FName local_250 [2];
  FString local_240;
  TVector<double>_u_0 local_230;
  FActorInstanceHandle local_218;
  FHitResult local_1f8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_338;
  lVar12 = 2;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    StatPtr_ComponentIsVisibleFrom =
         (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentIsDamageableFrom(UPrimitiveComponent_*,UE::Math::TVector<double>_const_&,AActor_const_*,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,ECollisionChannel,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_ComponentIsVisibleFrom>
          )0x0;
    pFVar9 = FName::FName(&local_258,"ComponentIsVisibleFrom");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_ComponentIsVisibleFrom,*pFVar9,
               L"ComponentIsVisibleFrom","STATGROUP_CollisionTags","STATCAT_Advanced",
               L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&_TSS0);
  }
  local_2b0.StatIdPtr = (TStatIdData *)StatPtr_ComponentIsVisibleFrom;
  if (StatPtr_ComponentIsVisibleFrom ==
      (FThreadSafeStaticStat<_public:___cdecl__bool___cdecl_ComponentIsDamageableFrom(UPrimitiveComponent_*,UE::Math::TVector<double>_const_&,AActor_const_*,TArray<AActor_*,TSizedDefaultAllocator<32>_>_const_&,ECollisionChannel,FHitResult_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_ComponentIsVisibleFrom>
       )0x0) {
    pFVar9 = FName::FName(local_250,"ComponentIsVisibleFrom");
    local_2b0.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_ComponentIsVisibleFrom,*pFVar9,
                    L"ComponentIsVisibleFrom","STATGROUP_CollisionTags","STATCAT_Advanced",
                    L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar1 + 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&StaticName,"ComponentIsVisibleFrom");
    _Init_thread_footer(&_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_f8,StaticName,&local_2b0,true,param_3);
  FCollisionQueryParams::AddIgnoredActors(&local_f8,param_4);
  this = *(UWorld **)&param_1->field_0xb0;
  if (((this == (UWorld *)0x0) &&
      (this = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1), this == (UWorld *)0x0)
      ) && (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("World",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameplayStatics.cpp"
                               ,0x2a4,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  local_270._s_0.X = (double)*(undefined8 *)&param_1->field_0x110;
  local_270._s_0.Y = (double)*(undefined8 *)&param_1->field_0x118;
  local_270._s_0.Z = (double)*(undefined8 *)&param_1->field_0x120;
  local_288._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_288._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_288._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (((local_270._s_0.X == (param_2->field0_0x0)._s_0.X) &&
      (local_270._s_0.Y == (param_2->field0_0x0)._s_0.Y)) &&
     (local_270._s_0.Z == (param_2->field0_0x0)._s_0.Z)) {
    local_288._s_0.Z = local_288._s_0.Z + __real_3f847ae140000000;
  }
  if (param_5 == ECC_MAX) {
    if (2 < (byte)LogDamage._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogDamage);
    }
LAB_147c3e039:
    local_230._s_0.X = (double)*(undefined8 *)&param_1->field_0x210;
    local_230._s_0.Y = (double)*(undefined8 *)&param_1->field_0x218;
    local_230._s_0.Z = (double)*(undefined8 *)&param_1->field_0x220;
    local_2d8._s_0.X = (param_2->field0_0x0)._s_0.X - local_230._s_0.X;
    local_2d8._s_0.Y = (param_2->field0_0x0)._s_0.Y - local_230._s_0.Y;
    local_2d8._s_0.Z = (param_2->field0_0x0)._s_0.Z - local_230._s_0.Z;
    dVar13 = local_2d8._s_0.Y * local_2d8._s_0.Y + local_2d8._s_0.X * local_2d8._s_0.X +
             local_2d8._s_0.Z * local_2d8._s_0.Z;
    if (dVar13 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar13) {
        dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
        local_2d8._s_0.X = local_2d8._s_0.X * dVar13;
        local_2d8._s_0.Y = local_2d8._s_0.Y * dVar13;
        local_2d8._s_0.Z = local_2d8._s_0.Z * dVar13;
      }
      else {
        local_2d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_2d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    pFVar11 = FHitResult::FHitResult
                        (&local_1f8,*(AActor **)&param_1->field_0xa8,param_1,
                         (TVector<double> *)&local_230._s_0,(TVector<double> *)&local_2d8._s_0);
    do {
      fVar4 = pFVar11->Time;
      fVar5 = pFVar11->Distance;
      iVar6 = pFVar11->_padding_;
      param_6->FaceIndex = pFVar11->FaceIndex;
      param_6->Time = fVar4;
      param_6->Distance = fVar5;
      param_6->_padding_ = iVar6;
      uVar3 = *(undefined8 *)&(pFVar11->Location).field_0x8;
      *(undefined8 *)&param_6->Location = *(undefined8 *)&pFVar11->Location;
      *(undefined8 *)&(param_6->Location).field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pFVar11->ImpactPoint;
      *(undefined8 *)&(param_6->Location).field_0x10 =
           *(undefined8 *)&(pFVar11->Location).field_0x10;
      *(undefined8 *)&param_6->ImpactPoint = uVar3;
      uVar3 = *(undefined8 *)&(pFVar11->ImpactPoint).field_0x10;
      *(undefined8 *)&(param_6->ImpactPoint).field_0x8 =
           *(undefined8 *)&(pFVar11->ImpactPoint).field_0x8;
      *(undefined8 *)&(param_6->ImpactPoint).field_0x10 = uVar3;
      uVar3 = *(undefined8 *)&(pFVar11->Normal).field_0x8;
      *(undefined8 *)&param_6->Normal = *(undefined8 *)&pFVar11->Normal;
      *(undefined8 *)&(param_6->Normal).field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pFVar11->ImpactNormal;
      *(undefined8 *)&(param_6->Normal).field_0x10 = *(undefined8 *)&(pFVar11->Normal).field_0x10;
      *(undefined8 *)&param_6->ImpactNormal = uVar3;
      uVar3 = *(undefined8 *)&(pFVar11->ImpactNormal).field_0x10;
      *(undefined8 *)&(param_6->ImpactNormal).field_0x8 =
           *(undefined8 *)&(pFVar11->ImpactNormal).field_0x8;
      *(undefined8 *)&(param_6->ImpactNormal).field_0x10 = uVar3;
      uVar3 = *(undefined8 *)&(pFVar11->TraceStart).field_0x8;
      *(undefined8 *)&param_6->TraceStart = *(undefined8 *)&pFVar11->TraceStart;
      *(undefined8 *)&(param_6->TraceStart).field_0x8 = uVar3;
      lVar12 = lVar12 + -1;
      pFVar11 = (FHitResult *)&(pFVar11->TraceStart).field_0x10;
      param_6 = (FHitResult *)&(param_6->TraceStart).field_0x10;
    } while (lVar12 != 0);
  }
  else {
    bVar7 = UWorld::LineTraceSingleByChannel
                      (this,param_6,(TVector<double> *)&local_288._s_0,
                       (TVector<double> *)&local_270._s_0,param_5,&local_f8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if (!bVar7) goto LAB_147c3e039;
    bVar7 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                      (&param_6->Component,param_1);
    if (!bVar7) {
      if (4 < (byte)LogDamage._0_1_) {
        pUVar10 = FWeakObjectPtr::Get(&(param_6->Component).WeakPtr);
        if (pUVar10 == (UObject *)0x0) {
          FString::FString(&local_2c0,L"None");
        }
        else {
          local_2a8.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
          local_2a8.Number = *(uint *)&pUVar10->field_0x1c;
          FName::ToString(&local_2a8,&local_2c0);
        }
        FActorInstanceHandle::FActorInstanceHandle(&local_218,&param_6->HitObjectHandle);
        FActorInstanceHandle::GetName(&local_218,&local_240);
        local_2a0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_2a0.Number = *(uint *)&param_1->field_0x1c;
        FName::ToString(&local_2a0,&local_298);
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogDamage);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = false;
      goto LAB_147c3e175;
    }
  }
  bVar7 = true;
LAB_147c3e175:
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar7;
}

// ComputeTriangleParameterToAttribute @ 147c3eaa0

TMatrix<double> * __cdecl
ComputeTriangleParameterToAttribute
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar7 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar10 = dVar7 * dVar3 - dVar6 * dVar4;
  dVar12 = dVar5 * dVar4 - dVar7 * dVar2;
  dVar1 = dVar6 * dVar2 - dVar5 * dVar3;
  dVar9 = dVar10 * dVar10 + dVar12 * dVar12 + dVar1 * dVar1;
  uVar11 = dVar10;
  uVar13 = dVar12;
  uVar8 = dVar1;
  if ((dVar9 != __real_3ff0000000000000) &&
     (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar9)) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    uVar11 = dVar10 * dVar9;
    uVar13 = dVar12 * dVar9;
    uVar8 = dVar1 * dVar9;
  }
  __return_storage_ptr__->M[0][0] = dVar2;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[0][1] = dVar3;
  __return_storage_ptr__->M[0][2] = dVar4;
  __return_storage_ptr__->M[1][0] = dVar5;
  __return_storage_ptr__->M[1][1] = dVar6;
  __return_storage_ptr__->M[1][2] = dVar7;
  __return_storage_ptr__->M[2][2] = (double)uVar8;
  __return_storage_ptr__->M[2][0] = (double)uVar11;
  __return_storage_ptr__->M[2][1] = (double)uVar13;
  return __return_storage_ptr__;
}

// CreateDecalComponent @ 147c40570

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDecalComponent * __cdecl
CreateDecalComponent
          (UMaterialInterface *param_1,TVector<double> *param_2,UWorld *param_3,AActor *param_4,
          float param_5)

{
  double dVar1;
  double dVar2;
  ENetMode EVar3;
  UClass *pUVar4;
  UDecalComponent *this;
  longlong *plVar5;
  UWorld *pUVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_3 == (UWorld *)0x0) ||
     (EVar3 = UWorld::InternalGetNetMode(param_3), EVar3 == NM_DedicatedServer)) {
    this = (UDecalComponent *)0x0;
  }
  else {
    pUVar6 = param_3;
    if (param_4 != (AActor *)0x0) {
      pUVar6 = (UWorld *)param_4;
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDecalComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar4);
    local_b8._8_8_ = pUVar6;
    this = (UDecalComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar5 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    this->field_0x9a = this->field_0x9a | 4;
    UDecalComponent::SetDecalMaterial(this,param_1);
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (this->DecalSize).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->DecalSize).field0_0x0._s_0.Y = dVar2;
    (this->DecalSize).field0_0x0._s_0.Z = dVar1;
    USceneComponent::SetUsingAbsoluteScale((USceneComponent *)this,true);
    UActorComponent::RegisterComponentWithWorld
              ((UActorComponent *)this,param_3,(FRegisterComponentContext *)0x0);
    if (0.0 < param_5) {
      UDecalComponent::SetLifeSpan(this,param_5);
    }
  }
  return this;
}

// CreateForceFeedbackComponent @ 147c406b0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UForceFeedbackComponent * __cdecl
CreateForceFeedbackComponent
          (UForceFeedbackEffect *param_1,AActor *param_2,bool param_3,float param_4,
          UForceFeedbackAttenuation *param_5,bool param_6)

{
  UClass *pUVar1;
  UForceFeedbackComponent *this;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_2;
  this = (UForceFeedbackComponent *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar2 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar2 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->bAutoDestroy = '\0';
  this->bAutoActivate = '\0';
  this->field_0x258 = param_6 | this->field_0x258 & 0xfb | param_3 << 2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UForceFeedbackEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ForceFeedbackEffect).field0_0x0.DebugPtr = param_1;
  this->IntensityMultiplier = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_5 != (UForceFeedbackAttenuation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  (this->AttenuationSettings).field0_0x0.DebugPtr = param_5;
  UActorComponent::RegisterComponent((UActorComponent *)this);
  return this;
}

// CreateParticleSystem @ 147c40dd0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UParticleSystemComponent * __cdecl
CreateParticleSystem
          (UParticleSystem *param_1,UWorld *param_2,AActor *param_3,bool param_4,
          EPSCPoolMethod param_5)

{
  UParticleSystemComponent *this;
  UClass *pUVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this = (UParticleSystemComponent *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar2 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar2,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (param_2 != (UWorld *)0x0)) {
    if (param_5 == None) {
      local_c8 = 0;
      if (param_3 != (AActor *)0x0) {
        param_2 = (UWorld *)param_3;
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar1);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._16_4_ = 0;
      local_b8._20_4_ = 0;
      local_b8._24_4_ = RF_Transient;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = param_2;
      this = (UParticleSystemComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar3 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar3 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      this->bAutoDestroy = '\0';
      this->field_0x57b = this->field_0x57b | param_4;
      this->field_0x9a = this->field_0x9a & 0xf7 | 4;
      this->SecondsBeforeInactive = 0.0;
      UParticleSystemComponent::SetTemplate(this,param_1);
      this->bOverrideLODMethod = '\0';
    }
    else {
      this = FWorldPSCPool::CreateWorldParticleSystem(&param_2->PSCPool,param_1,param_2,param_5);
    }
  }
  return this;
}

// DynamicMeshBoundsModifyCompilationEnvironment @ 147c4d1f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DynamicMeshBoundsModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (GSkinCacheDynamicMeshBounds == 1) {
LAB_147c4d21c:
    iVar2 = 1;
  }
  else {
    if (GSkinCacheDynamicMeshBounds == 2) {
      bVar1 = DoesPlatformSupportNanite(*(EShaderPlatform *)param_1,true);
      if (bVar1) goto LAB_147c4d21c;
    }
    iVar2 = 0;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"ENABLE_DYNAMIC_MESH_BOUNDS",iVar2);
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameModeBase @ 147c4d290

void __cdecl EmptyLinkFunctionForGeneratedCodeGameModeBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameNetworkManager @ 147c4d2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameNetworkManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameSession @ 147c4d2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameSession(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameState @ 147c4d2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameStateBase @ 147c4d2d0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameStateBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameUserSettings @ 147c4d2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameUserSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameViewportClient @ 147c4d2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameViewportClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayStatics @ 147c4d300

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayStatics(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeneratedBlueprintDelegateBinding @ 147c4d310

void __cdecl EmptyLinkFunctionForGeneratedCodeGeneratedBlueprintDelegateBinding(void)

{
  return;
}

// FOnGameUserSettingsUINeedsUpdate_DelegateWrapper @ 147c4fe30

void __cdecl
FOnGameUserSettingsUINeedsUpdate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FindNextEdge @ 147c50580

bool __cdecl
FindNextEdge(FUtilEdge2D *param_1,TVector2<double> *param_2,
            TArray<FUtilEdge2D,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  iVar11 = param_3->ArrayNum;
  uVar9 = 0xffffffff;
  uVar12 = 0;
  fVar16 = __real_7f7fc99e;
  if (0 < iVar11) {
    lVar13 = 0;
    uVar9 = 0xffffffff;
    do {
      uVar14 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < iVar11) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      dVar3 = *(double *)(pFVar10 + lVar13 + 8) - (param_2->field0_0x0)._s_0.Y;
      dVar4 = *(double *)(pFVar10 + lVar13) - (param_2->field0_0x0)._s_0.X;
      fVar15 = (float)(dVar3 * dVar3 + dVar4 * dVar4);
      if (fVar15 < fVar16) {
        uVar9 = 0;
        if ((int)uVar12 < param_3->ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        pFVar1 = (param_3->AllocatorInstance).Data;
        pFVar10 = pFVar1 + lVar13;
        dVar3 = *(double *)(pFVar10 + 8);
        (param_1->V0).field0_0x0._s_0.X = *(double *)pFVar10;
        (param_1->V0).field0_0x0._s_0.Y = dVar3;
        pFVar1 = pFVar1 + lVar13 + 0x10;
        dVar3 = *(double *)(pFVar1 + 8);
        (param_1->V1).field0_0x0._s_0.X = *(double *)pFVar1;
        (param_1->V1).field0_0x0._s_0.Y = dVar3;
        fVar16 = fVar15;
        uVar9 = uVar12;
      }
      uVar8 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      dVar3 = *(double *)(pFVar10 + lVar13 + 0x18) - (param_2->field0_0x0)._s_0.Y;
      dVar4 = *(double *)(pFVar10 + lVar13 + 0x10) - (param_2->field0_0x0)._s_0.X;
      fVar15 = (float)(dVar3 * dVar3 + dVar4 * dVar4);
      if (fVar15 < fVar16) {
        uVar9 = 0;
        if ((int)uVar12 < param_3->ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        pFVar1 = (param_3->AllocatorInstance).Data;
        pFVar10 = pFVar1 + lVar13;
        dVar3 = *(double *)(pFVar10 + 8);
        (param_1->V0).field0_0x0._s_0.X = *(double *)pFVar10;
        (param_1->V0).field0_0x0._s_0.Y = dVar3;
        pFVar1 = pFVar1 + lVar13 + 0x10;
        dVar3 = *(double *)(pFVar1 + 8);
        (param_1->V1).field0_0x0._s_0.X = *(double *)pFVar1;
        (param_1->V1).field0_0x0._s_0.Y = dVar3;
        dVar3 = (param_1->V1).field0_0x0._s_0.Y;
        dVar4 = (param_1->V0).field0_0x0._s_0.X;
        dVar5 = (param_1->V0).field0_0x0._s_0.Y;
        (param_1->V0).field0_0x0._s_0.X = (param_1->V1).field0_0x0._s_0.X;
        (param_1->V0).field0_0x0._s_0.Y = dVar3;
        (param_1->V1).field0_0x0._s_0.X = dVar4;
        (param_1->V1).field0_0x0._s_0.Y = dVar5;
        fVar16 = fVar15;
        uVar9 = uVar12;
      }
      iVar11 = param_3->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while ((int)uVar12 < iVar11);
  }
  if (EdgeMatchTolerance * EdgeMatchTolerance <= fVar16) {
    return false;
  }
  if ((uVar9 == 0xffffffff) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("OutEdgeIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeomTools.cpp"
                         ,0xe6,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  uVar12 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  pFVar10 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
  iVar11 = param_3->ArrayNum + ~uVar9;
  if (iVar11 != 0) {
    memmove(pFVar10,pFVar10 + 0x20,(longlong)iVar11 << 5);
  }
  param_3->ArrayNum = param_3->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  return true;
}

// FixPolyWinding @ 147c51180

void __cdecl FixPolyWinding(FUtilPoly2D *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  ForAnyElementType _Src;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  int *piVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  longlong local_res20;
  FUtilPoly2D local_f8 [11];
  
  dVar13 = __real_3f847ae140000000;
  dVar12 = __real_bff0000000000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar11 = __real_38d1b717;
  uVar24 = (param_1->Verts).ArrayNum - 1;
  fVar38 = 0.0;
  if (-1 < (int)uVar24) {
    uVar36 = SUB84(__real_3ff0000000000000,0);
    uVar37 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_res20 = (longlong)(int)uVar24 * 0x30;
    do {
      uVar15 = uVar24;
      if (uVar24 == 0) {
        uVar15 = (param_1->Verts).ArrayNum;
      }
      iVar21 = (param_1->Verts).ArrayNum;
      uVar15 = uVar15 - 1;
      uVar19 = (int)(uVar24 + 1) % iVar21;
      lVar26 = (longlong)(int)uVar19;
      uVar20 = ~uVar24 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar24 < iVar21) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_1->Verts).AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar15 < (param_1->Verts).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Verts).AllocatorInstance.Data;
      lVar25 = (longlong)(int)uVar15;
      dVar30 = *(double *)(pFVar18 + local_res20) - *(double *)(pFVar1 + lVar25 * 0x30);
      dVar29 = *(double *)(pFVar18 + local_res20 + 8) - *(double *)(pFVar1 + lVar25 * 0x30 + 8);
      uVar16 = 0;
      if ((int)uVar24 < (param_1->Verts).ArrayNum) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_1->Verts).AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar15 < (param_1->Verts).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Verts).AllocatorInstance.Data;
      dVar3 = *(double *)(pFVar18 + local_res20) - *(double *)(pFVar1 + lVar25 * 0x30);
      dVar4 = *(double *)(pFVar18 + local_res20 + 8) - *(double *)(pFVar1 + lVar25 * 0x30 + 8);
      dVar31 = dVar4 * dVar4 + dVar3 * dVar3;
      if (dVar31 <= __real_3e45798ee0000000) {
        dVar3 = 0.0;
        dVar4 = 0.0;
      }
      else {
        dVar31 = (double)CONCAT44(uVar37,uVar36) / SQRT(dVar31);
        dVar3 = dVar3 * dVar31;
        dVar4 = dVar4 * dVar31;
      }
      uVar15 = 0;
      if ((int)uVar19 < (param_1->Verts).ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_1->Verts).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar24 < (param_1->Verts).ArrayNum) {
        uVar15 = uVar20;
      }
      if ((uVar15 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Verts).AllocatorInstance.Data;
      dVar31 = *(double *)(pFVar18 + lVar26 * 0x30 + 8) - *(double *)(pFVar1 + local_res20 + 8);
      dVar32 = *(double *)(pFVar18 + lVar26 * 0x30) - *(double *)(pFVar1 + local_res20);
      uVar15 = 0;
      if ((int)uVar19 < (param_1->Verts).ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_1->Verts).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar24 < (param_1->Verts).ArrayNum) {
        uVar15 = uVar20;
      }
      if ((uVar15 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Verts).AllocatorInstance.Data;
      dVar35 = *(double *)(pFVar18 + lVar26 * 0x30) - *(double *)(pFVar1 + local_res20);
      dVar34 = *(double *)(pFVar18 + lVar26 * 0x30 + 8) - *(double *)(pFVar1 + local_res20 + 8);
      dVar33 = dVar34 * dVar34 + dVar35 * dVar35;
      if (dVar33 <= __real_3e45798ee0000000) {
        dVar35 = 0.0;
        dVar34 = 0.0;
      }
      else {
        dVar33 = __real_3ff0000000000000 / SQRT(dVar33);
        dVar35 = dVar35 * dVar33;
        dVar34 = dVar34 * dVar33;
      }
      if ((((float)(dVar30 * dVar30 + dVar29 * dVar29) < fVar11) ||
          ((float)(dVar31 * dVar31 + dVar32 * dVar32) < fVar11)) ||
         (((double)CONCAT44((uint)((ulonglong)(dVar3 - dVar35) >> 0x20) & uVar17,
                            SUB84(dVar3 - dVar35,0) & uVar23) <= dVar13 &&
          ((double)CONCAT44((uint)((ulonglong)(dVar4 - dVar34) >> 0x20) & uVar17,
                            SUB84(dVar4 - dVar34,0) & uVar23) <= dVar13)))) {
        uVar15 = 0;
        if ((int)uVar24 < (param_1->Verts).ArrayNum) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar18 = (param_1->Verts).AllocatorInstance.Data + (ulonglong)uVar24 * 0x30;
        iVar21 = ~uVar24 + (param_1->Verts).ArrayNum;
        if (iVar21 != 0) {
          memmove(pFVar18,pFVar18 + 0x30,(longlong)iVar21 * 0x30);
        }
        piVar28 = &(param_1->Verts).ArrayNum;
        *piVar28 = *piVar28 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,(ForAnyElementType *)param_1,(param_1->Verts).ArrayNum,
                   &(param_1->Verts).ArrayMax);
      }
      else {
        dVar30 = dVar34 * dVar3 - dVar35 * dVar4;
        dVar29 = dVar12;
        if ((dVar12 <= dVar30) && (dVar29 = dVar30, __real_3ff0000000000000 <= dVar30)) {
          dVar29 = __real_3ff0000000000000;
        }
        dVar29 = asin(dVar29);
        fVar38 = (float)(dVar29 + (double)fVar38);
      }
      piVar28 = &(param_1->Verts).ArrayMax;
      uVar36 = SUB84(__real_3ff0000000000000,0);
      uVar37 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_res20 = local_res20 + -0x30;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
    if (fVar38 < __real_00000000) {
      uVar23 = (param_1->Verts).ArrayNum;
      lVar26 = (longlong)(int)uVar23;
      uVar22 = 0;
      local_f8[0].Verts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8[0].Verts.ArrayNum = 0;
      local_f8[0].Verts.ArrayMax = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar23,(ForAnyElementType *)local_f8,&local_f8[0].Verts.ArrayNum,
                 &local_f8[0].Verts.ArrayMax);
      if (0 < (int)uVar23) {
        uVar27 = uVar22;
        lVar25 = lVar26 * 0x30;
        do {
          uVar23 = uVar23 - 1;
          uVar17 = 0;
          if ((int)uVar23 < (param_1->Verts).ArrayNum) {
            uVar17 = ~uVar23 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar18 = (param_1->Verts).AllocatorInstance.Data;
          uVar24 = (uint)uVar27;
          uVar5 = *(undefined8 *)(pFVar18 + lVar25 + -0x30);
          uVar6 = *(undefined8 *)(pFVar18 + lVar25 + -0x30 + 8);
          uVar7 = *(undefined8 *)(pFVar18 + lVar25 + -0x20);
          uVar8 = *(undefined8 *)(pFVar18 + lVar25 + -0x20 + 8);
          uVar9 = *(undefined8 *)(pFVar18 + lVar25 + -0x10);
          uVar10 = *(undefined8 *)(pFVar18 + lVar25 + -0x10 + 8);
          uVar17 = 0;
          if ((int)uVar24 < local_f8[0].Verts.ArrayNum) {
            uVar17 = ~uVar24 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar27 = (ulonglong)(uVar24 + 1);
          *(undefined8 *)(local_f8[0].Verts.AllocatorInstance.Data + uVar22) = uVar5;
          *(undefined8 *)(local_f8[0].Verts.AllocatorInstance.Data + uVar22 + 8) = uVar6;
          *(undefined8 *)(local_f8[0].Verts.AllocatorInstance.Data + uVar22 + 0x10) = uVar7;
          *(undefined8 *)(local_f8[0].Verts.AllocatorInstance.Data + uVar22 + 0x10 + 8) = uVar8;
          *(undefined8 *)(local_f8[0].Verts.AllocatorInstance.Data + uVar22 + 0x20) = uVar9;
          *(undefined8 *)(local_f8[0].Verts.AllocatorInstance.Data + uVar22 + 0x20 + 8) = uVar10;
          uVar22 = uVar22 + 0x30;
          lVar26 = lVar26 + -1;
          lVar25 = lVar25 + -0x30;
        } while (lVar26 != 0);
      }
      _Src.Data = local_f8[0].Verts.AllocatorInstance.Data;
      if (param_1 != local_f8) {
        iVar21 = local_f8[0].Verts.ArrayNum;
        lVar26 = (longlong)local_f8[0].Verts.ArrayNum;
        (param_1->Verts).ArrayNum = local_f8[0].Verts.ArrayNum;
        if ((local_f8[0].Verts.ArrayNum == 0) && (*piVar28 == 0)) {
          *piVar28 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,local_f8[0].Verts.ArrayNum,*piVar28,(ForAnyElementType *)param_1,
                     local_f8[0].Verts.ArrayNum,piVar28);
          if (iVar21 != 0) {
            memcpy((param_1->Verts).AllocatorInstance.Data,_Src.Data,lVar26 * 0x30);
          }
        }
      }
      if (local_f8[0].Verts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8[0].Verts.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GPUSkinCacheNeedsDuplicatedVertices @ 147c51d20

bool __cdecl GPUSkinCacheNeedsDuplicatedVertices(void)

{
  return 0 < GStoreDuplicatedVerticesForRecomputeTangents;
}

// GPUSkinCacheStoreDuplicatedVertices @ 147c51d40

bool __cdecl GPUSkinCacheStoreDuplicatedVertices(void)

{
  return 0 < GStoreDuplicatedVerticesForRecomputeTangents;
}

// GetActorOwnerFromWorldContextObject @ 147c53990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl GameplayStatics::GetActorOwnerFromWorldContextObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  AActor *pAVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (AActor *)param_1;
    }
  }
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  pAVar3 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
  return pAVar3;
}

// GetActorOwnerFromWorldContextObject @ 147c539f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl GameplayStatics::GetActorOwnerFromWorldContextObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  AActor *pAVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (AActor *)param_1;
    }
  }
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  pAVar3 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
  return pAVar3;
}

// GetCanvasByName @ 147c54f40

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCanvas * __cdecl GetCanvasByName(FName param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  FString *pFVar5;
  size_t sVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UCanvas *pUVar9;
  FUObjectItem *this;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  FName local_res8;
  undefined1 auStack_f8 [32];
  UCanvas *local_d8 [2];
  undefined1 local_c8 [16];
  undefined1 local_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_res8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`GetCanvasByName'::__l2::_dynamic_atexit_destructor_for__CanvasMap__);
    _Init_thread_footer(&_TSS0);
  }
  FVar2 = local_res8;
  uVar4 = GetTypeHash(local_res8.ComparisonIndex.Value);
  if (CanvasMap._8_4_ != CanvasMap._52_4_) {
    lVar12 = 0x154c406b8;
    if (CanvasMap._64_8_ != 0) {
      lVar12 = CanvasMap._64_8_;
    }
    iVar1 = *(int *)(lVar12 + (ulonglong)(CanvasMap._72_4_ - 1 & FVar2.Number + uVar4) * 4);
    while (iVar1 != -1) {
      lVar12 = CanvasMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(FName *)(CanvasMap._0_8_ + (longlong)iVar1 * 0x18) == FVar2) {
        puVar10 = (undefined8 *)(lVar12 + 8);
        if (lVar12 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        if (puVar10 != (undefined8 *)0x0) {
          return (UCanvas *)*puVar10;
        }
        break;
      }
      iVar1 = *(int *)(lVar12 + 0x10);
    }
  }
  pFVar5 = FName::ToString(&local_res8,(FString *)(local_b8 + 8));
  local_c8._8_4_ = 0;
  if ((pFVar5->Data).ArrayNum == 0) {
    local_c8._0_8_ = L"";
  }
  else {
    local_c8._0_8_ = (pFVar5->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_c8._0_8_ == (FScriptContainerElement *)0x0)
    goto LAB_147c55052;
  }
  sVar6 = wcslen((wchar_t *)local_c8._0_8_);
  local_c8._8_4_ = (undefined4)sVar6;
LAB_147c55052:
  pUVar7 = GetTransientPackage();
  pUVar8 = Z_Construct_UClass_UCanvas_NoRegister();
  local_d8[0] = (UCanvas *)
                StaticFindObject(pUVar8,(UObject *)pUVar7,(TStringView<wchar_t> *)local_c8,None);
  if ((UCanvas **)local_b8._8_8_ != (UCanvas **)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
  FVar2 = local_res8;
  if (local_d8[0] == (UCanvas *)0x0) {
    pUVar7 = GetTransientPackage();
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = Z_Construct_UClass_UCanvas_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar8);
    FVar3 = local_res8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_res8.ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_res8.Number = FVar2.Number;
    local_98._16_4_ = local_res8.ComparisonIndex.Value;
    local_98._20_4_ = local_res8.Number;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_res8 = FVar3;
    local_98._8_8_ = pUVar7;
    pUVar9 = (UCanvas *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
    ;
    if (local_98._64_8_ != 0) {
      plVar11 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    local_d8[0] = pUVar9;
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar9->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  local_c8._0_8_ = &local_res8;
  local_c8._8_8_ = local_d8;
  TSet<TTuple<FName,UCanvas_*>,TDefaultMapHashableKeyFuncs<FName,UCanvas_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UCanvas_*_const_&>_>
            ((TSet<TTuple<FName,UCanvas_*>,TDefaultMapHashableKeyFuncs<FName,UCanvas_*,0>,FDefaultSetAllocator>
              *)&CanvasMap,(TPairInitializer<FName_const_&,UCanvas_*_const_&> *)local_b8,
             (bool *)local_c8);
  return local_d8[0];
}

// GetDynamicMeshBoundsShaderParameters @ 147c56420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicMeshBoundsShaderParameters * __cdecl
GetDynamicMeshBoundsShaderParameters
          (FDynamicMeshBoundsShaderParameters *__return_storage_ptr__,FRDGBuilder *param_1)

{
  FStruct *pFVar1;
  FRHIShaderResourceView *pFVar2;
  code *pcVar3;
  FStruct FVar4;
  uint uVar5;
  bool bVar6;
  FDynamicMeshBoundsShaderParameters *pFVar7;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
      ::__l2::Index == 0xffffffff) {
    FRDGBlackboard::GetTypeName
              (&local_18,L"FDynamicMeshBoundsBlackboardStruct",
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
               ,1099);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
    ::__l2::Index = FRDGBlackboard::AllocateIndex(&local_18);
    if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                         local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                     local_18.Data.AllocatorInstance.Data._0_4_));
    }
  }
  uVar5 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
          ::__l2::Index;
  if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
           ::__l2::Index < (param_1->Blackboard).Blackboard.ArrayNum) {
    if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
             ::__l2::Index < 0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FDynamicMeshBoundsShaderParameters *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar1 = (param_1->Blackboard).Blackboard.AllocatorInstance.Data[(int)uVar5];
    if ((pFVar1 != (FStruct *)0x0) && (pFVar1 + 2 != (FStruct *)0x0)) {
      if (*(char *)(pFVar1 + 4) == '\0') {
        bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Struct->bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                           ,0x451,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FDynamicMeshBoundsShaderParameters *)(*pcVar3)();
          return pFVar7;
        }
      }
      FVar4 = pFVar1[3];
      *(FStruct *)__return_storage_ptr__ = pFVar1[2];
      __return_storage_ptr__->DynamicMeshBoundsBuffer = (FRHIShaderResourceView *)FVar4;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = (GBlackFloat4StructuredBufferWithSRV->ShaderResourceViewRHI).Reference;
  *(ulonglong *)__return_storage_ptr__ =
       (ulonglong)local_18.Data.AllocatorInstance.Data._4_4_ << 0x20;
  __return_storage_ptr__->DynamicMeshBoundsBuffer = pFVar2;
  return __return_storage_ptr__;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147c56d90

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FGCBoneLooseParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FGCBoneLooseParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FGCBoneLooseParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FGCBoneLooseParameters",
                 L"FGCBoneLooseParameters",L"GCBoneLooseParameters",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GeometryCollectionRendering.h"
                 ,0x18,0x20,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FGCBoneLooseParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147c56da0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata
          (FGeometryCacheManualVertexFetchUniformBufferParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata'::__l2::<lambda_1>::
    operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FGeometryCacheManualVertexFetchUniformBufferParameters::zzAppendMemberGetPrev;
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
                 L"FGeometryCacheManualVertexFetchUniformBufferParameters",
                 L"FGeometryCacheManualVertexFetchUniformBufferParameters",L"GeomCacheMVF",
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GeometryCacheVertexFactory.h"
                 ,0x1b,0x30,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147c56db0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata
          (FGeometryCacheVertexFactoryUniformBufferParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata'::__l2::<lambda_1>::
    operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FGeometryCacheVertexFactoryUniformBufferParameters::zzAppendMemberGetPrev;
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
                 L"FGeometryCacheVertexFactoryUniformBufferParameters",
                 L"FGeometryCacheVertexFactoryUniformBufferParameters",L"GeomCache",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GeometryCacheVertexFactory.h"
                 ,0x11,0x40,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 147c56dc0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata
          (FGeometryCollectionVertexFactoryUniformShaderParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata'::__l2::<lambda_1>::
    operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FGeometryCollectionVertexFactoryUniformShaderParameters::zzAppendMemberGetPrev;
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
                 L"FGeometryCollectionVertexFactoryUniformShaderParameters",
                 L"FGeometryCollectionVertexFactoryUniformShaderParameters",L"GeometryCollectionVF",
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GeometryCollectionRendering.h"
                 ,0xd,0x40,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// GetPlayerControllerFromNetId @ 147c59200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __cdecl GetPlayerControllerFromNetId(UWorld *param_1,FUniqueNetIdRepl *param_2)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  APlayerController *pAVar6;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
  if (bVar4) {
    UWorld::GetPlayerControllerIterator(param_1,&local_18);
    for (; iVar3 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index;
        local_18.Index = local_18.Index + 1) {
      if ((local_18.Container)->ArrayNum <= local_18.Index) {
        return (APlayerController *)0x0;
      }
      uVar5 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar5 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pAVar6 = (APlayerController *)(*pcVar1)();
        return pAVar6;
      }
      pAVar6 = (APlayerController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if ((((pAVar6 != (APlayerController *)0x0) && (pAVar6->_padding_ != 0)) &&
          (bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(pAVar6->_padding_ + 0x2d0)),
          bVar4)) &&
         (bVar4 = operator==((FUniqueNetIdWrapper *)(pAVar6->_padding_ + 0x2d0),
                             (FUniqueNetIdWrapper *)param_2), bVar4)) {
        return pAVar6;
      }
    }
  }
  return (APlayerController *)0x0;
}

// GetPlayerControllerFromNetId @ 147c59320

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

APlayerController * __cdecl GetPlayerControllerFromNetId(UWorld *param_1,FUniqueNetId *param_2)

{
  code *pcVar1;
  int iVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  APlayerController *pAVar5;
  APlayerController *pAVar6;
  APlayerController *pAVar7;
  ulonglong uVar8;
  APlayerController *pAVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_68;
  FUniqueNetIdWrapper local_58;
  void *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pAVar5 = *(APlayerController **)&param_2->field_0x10;
  pAVar7 = (APlayerController *)0x0;
  pAVar6 = pAVar7;
  pAVar9 = pAVar5;
  if (pAVar5 != (APlayerController *)0x0) {
    iVar2 = (int)pAVar5->_padding_;
    do {
      pAVar6 = (APlayerController *)0x0;
      pAVar9 = pAVar7;
      if (iVar2 == 0) goto LAB_147c59375;
      LOCK();
      iVar4 = (int)pAVar5->_padding_;
      bVar10 = iVar2 == iVar4;
      if (bVar10) {
        *(int *)&pAVar5->_padding_ = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar10);
    pAVar6 = *(APlayerController **)&param_2->field_0x8;
    pAVar9 = pAVar5;
  }
LAB_147c59375:
  pAVar5 = (APlayerController *)&pAVar6->_padding_;
  if (pAVar6 == (APlayerController *)0x0) {
    pAVar5 = pAVar7;
  }
  if ((pAVar5 != (APlayerController *)&param_2->field_0x8) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x69a,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pAVar5 = (APlayerController *)(*pcVar1)();
    return pAVar5;
  }
  if (pAVar6 == (APlayerController *)0x0) {
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pAVar5 = (APlayerController *)(*pcVar1)();
      return pAVar5;
    }
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pAVar5 = (APlayerController *)(*pcVar1)();
      return pAVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pAVar9 != (APlayerController *)0x0) {
    LOCK();
    *(int *)&pAVar9->_padding_ = (int)pAVar9->_padding_ + 1;
    UNLOCK();
  }
  local_58.Variant.TypeIndex = 0;
  local_58._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_58.Variant._padding_ = (longlong)pAVar6;
  local_58.Variant._padding_ = (longlong)pAVar9;
  bVar10 = FUniqueNetIdWrapper::IsValid(&local_58);
  pAVar5 = pAVar7;
  if (bVar10) {
    UWorld::GetPlayerControllerIterator(param_1,&local_68);
    for (; (iVar2 = local_68.Index, pTVar3 = local_68.Container, pAVar5 = pAVar7,
           -1 < local_68.Index && (local_68.Index < (local_68.Container)->ArrayNum));
        local_68.Index = local_68.Index + 1) {
      if (local_68.Index < 0) {
        local_78 = (longlong)local_68.Index;
        local_70 = (longlong)(local_68.Container)->ArrayNum;
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar1 = (code *)swi(3);
          pAVar5 = (APlayerController *)(*pcVar1)();
          return pAVar5;
        }
      }
      pAVar5 = (APlayerController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar2 * 8));
      if ((((pAVar5 != (APlayerController *)0x0) && (pAVar5->_padding_ != 0)) &&
          (bVar10 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(pAVar5->_padding_ + 0x2d0))
          , bVar10)) &&
         (bVar10 = operator==((FUniqueNetIdWrapper *)(pAVar5->_padding_ + 0x2d0),&local_58), bVar10)
         ) break;
    }
  }
  local_58._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar8 = (ulonglong)local_58.Variant.TypeIndex;
  if ((1 < local_58.Variant.TypeIndex) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pAVar5 = (APlayerController *)(*pcVar1)();
    return pAVar5;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58.Variant._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_58.Variant);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pAVar9);
  return pAVar5;
}

// GetSkinCacheDefaultBehavior @ 147c5ad90

ESkinCacheDefaultBehavior __cdecl GetSkinCacheDefaultBehavior(void)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)CVarDefaultGPUSkinCacheBehavior._padding_ + 200))();
  return cVar1 == '\x01';
}

// GetVert @ 147c5d010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FClipSMVertex * __cdecl
GetVert(FClipSMVertex *__return_storage_ptr__,UStaticMesh *param_1,int param_2)

{
  ulonglong uVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  TVector2<double> TVar8;
  bool bVar9;
  FStaticMeshRenderData *pFVar10;
  FClipSMVertex *pFVar11;
  TVector4<float> *pTVar12;
  TVector<float> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  TVector2<double>_u_0 *pTVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TVector2<double> *pTVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float local_84;
  float fStack_80;
  TVector<float> local_68;
  TVector4<float> local_58 [2];
  
  uVar17 = (ulonglong)(uint)param_2;
  pFVar10 = UStaticMesh::GetRenderData(param_1);
  uVar18 = 0;
  if (((pFVar10->LODResources).Array.ArrayNum < 1) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FClipSMVertex *)(*pcVar7)();
    return pFVar11;
  }
  lVar4 = *(longlong *)(pFVar10->LODResources).Array.AllocatorInstance.Data;
  uVar20 = (ulonglong)(uint)(param_2 * *(int *)(lVar4 + 0x1c8));
  fVar24 = *(float *)(uVar20 + 8 + *(longlong *)(lVar4 + 0x1c0));
  *(undefined8 *)&(__return_storage_ptr__->Pos).field0_0x0 =
       *(undefined8 *)(uVar20 + *(longlong *)(lVar4 + 0x1c0));
  (__return_storage_ptr__->Pos).field0_0x0._s_0.Z = fVar24;
  pTVar12 = FStaticMeshVertexBuffer::VertexTangentX
                      ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),local_58,param_2);
  fVar24 = (pTVar12->field0_0x0)._s_0.Y;
  fVar25 = (pTVar12->field0_0x0)._s_0.Z;
  auVar23 = ZEXT416((uint)fVar25);
  (__return_storage_ptr__->TangentX).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
  (__return_storage_ptr__->TangentX).field0_0x0._s_0.Y = fVar24;
  (__return_storage_ptr__->TangentX).field0_0x0._s_0.Z = fVar25;
  pTVar13 = FStaticMeshVertexBuffer::VertexTangentY
                      ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),&local_68,param_2);
  lVar5 = *(longlong *)(lVar4 + 0x160);
  fVar24 = (pTVar13->field0_0x0)._s_0.Z;
  lVar14 = **(longlong **)(lVar4 + 0x140);
  *(undefined8 *)&(__return_storage_ptr__->TangentY).field0_0x0 =
       *(undefined8 *)&pTVar13->field0_0x0;
  (__return_storage_ptr__->TangentY).field0_0x0._s_0.Z = fVar24;
  if (*(char *)(lVar4 + 0x181) == '\0') {
    uVar20 = lVar5 + uVar17 * 8;
    lVar14 = (**(code **)(lVar14 + 0x50))();
    if (((ulonglong)(lVar14 + lVar5) < uVar20 + 8) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x104,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FClipSMVertex *)(*pcVar7)();
      return pFVar11;
    }
    if ((uVar20 < *(ulonglong *)(lVar4 + 0x160)) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x105,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FClipSMVertex *)(*pcVar7)();
      return pFVar11;
    }
    auVar23 = pmovsxbd(auVar23,*(undefined4 *)(uVar20 + 4));
    fVar24 = (float)auVar23._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar25 = (float)auVar23._4_4_ * _UNK_151040074;
    fVar26 = (float)auVar23._8_4_ * _UNK_151040078;
  }
  else {
    uVar20 = lVar5 + uVar17 * 0x10;
    lVar14 = (**(code **)(lVar14 + 0x50))();
    if (((ulonglong)(lVar14 + lVar5) < uVar20 + 0x10) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x104,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FClipSMVertex *)(*pcVar7)();
      return pFVar11;
    }
    if ((uVar20 < *(ulonglong *)(lVar4 + 0x160)) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x105,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FClipSMVertex *)(*pcVar7)();
      return pFVar11;
    }
    auVar23 = pmovsxwd(auVar23,*(undefined8 *)(uVar20 + 8));
    fVar24 = (float)auVar23._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar25 = (float)auVar23._4_4_ * _UNK_150d565e4;
    fVar26 = (float)auVar23._8_4_ * _UNK_150d565e8;
  }
  (__return_storage_ptr__->TangentZ).field0_0x0._s_0.X = fVar24;
  (__return_storage_ptr__->TangentZ).field0_0x0._s_0.Y = fVar25;
  (__return_storage_ptr__->TangentZ).field0_0x0._s_0.Z = fVar26;
  uVar20 = (ulonglong)*(int *)(lVar4 + 0x178);
  if (0 < *(int *)(lVar4 + 0x178)) {
    pTVar22 = __return_storage_ptr__->UVs;
    uVar21 = uVar18;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x168);
      lVar14 = *(uint *)(lVar4 + 0x178) * uVar17;
      if (*(char *)(lVar4 + 0x180) == '\0') {
        puVar2 = (ushort *)(lVar5 + (lVar14 + uVar21) * 4);
        lVar14 = (**(code **)(**(longlong **)(lVar4 + 0x150) + 0x50))();
        if (((ushort *)(lVar14 + lVar5) < puVar2 + 2) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17b,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FClipSMVertex *)(*pcVar7)();
          return pFVar11;
        }
        if ((puVar2 < *(ushort **)(lVar4 + 0x168)) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17c,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FClipSMVertex *)(*pcVar7)();
          return pFVar11;
        }
        local_84 = FGenericPlatformMath::LoadHalf(puVar2);
        fStack_80 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
      }
      else {
        lVar14 = lVar5 + lVar14 * 8;
        uVar1 = lVar14 + uVar21 * 8;
        lVar15 = (**(code **)(**(longlong **)(lVar4 + 0x150) + 0x50))();
        if (((ulonglong)(lVar15 + lVar5) < uVar1 + 8) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17b,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FClipSMVertex *)(*pcVar7)();
          return pFVar11;
        }
        if ((uVar1 < *(ulonglong *)(lVar4 + 0x168)) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17c,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FClipSMVertex *)(*pcVar7)();
          return pFVar11;
        }
        uVar6 = *(undefined8 *)(lVar14 + uVar18 * 8);
        local_84 = (float)uVar6;
        fStack_80 = (float)((ulonglong)uVar6 >> 0x20);
      }
      uVar21 = (ulonglong)((int)uVar21 + 1);
      uVar18 = uVar18 + 1;
      (pTVar22->field0_0x0)._s_0.X = (double)local_84;
      (pTVar22->field0_0x0)._s_0.Y = (double)fStack_80;
      pTVar22 = pTVar22 + 1;
    } while ((longlong)uVar18 < (longlong)uVar20);
  }
  TVar8.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (uVar20 < 8) {
    pTVar16 = &__return_storage_ptr__->UVs[uVar20].field0_0x0;
    do {
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      pTVar16->_s_0 = (TVector2<double>_u_0_s_0)TVar8.field0_0x0;
      pTVar16 = pTVar16 + 1;
    } while (uVar19 < 8);
  }
  iVar3 = *(int *)(lVar4 + 0x21c);
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0xffffffff;
  if (iVar3 != 0) {
    (__return_storage_ptr__->Color).field0_0x0 =
         *(FColor_u_0 *)
          ((ulonglong)(uint)(param_2 * *(int *)(lVar4 + 0x218)) + *(longlong *)(lVar4 + 0x210));
  }
  return __return_storage_ptr__;
}

// InterpolateVert @ 147c68340

FClipSMVertex * __cdecl
InterpolateVert(FClipSMVertex *__return_storage_ptr__,FClipSMVertex *param_1,FClipSMVertex *param_2,
               float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FColor FVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  uchar uVar19;
  float fVar20;
  
  dVar10 = (double)param_3;
  iVar17 = _isnan(dVar10);
  if ((iVar17 == 0) && (iVar17 = _finite(dVar10), iVar17 != 0)) {
    fVar20 = (param_2->Pos).field0_0x0._s_0.Y;
    fVar1 = (param_1->Pos).field0_0x0._s_0.Y;
    fVar2 = (param_2->Pos).field0_0x0._s_0.Z;
    fVar3 = (param_1->Pos).field0_0x0._s_0.Z;
    fVar4 = (param_1->Pos).field0_0x0._s_0.Y;
    fVar5 = (param_1->Pos).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Pos).field0_0x0._s_0.X =
         ((param_2->Pos).field0_0x0._s_0.X - (param_1->Pos).field0_0x0._s_0.X) * param_3 +
         (param_1->Pos).field0_0x0._s_0.X;
    (__return_storage_ptr__->Pos).field0_0x0._s_0.Y = (fVar20 - fVar1) * param_3 + fVar4;
    (__return_storage_ptr__->Pos).field0_0x0._s_0.Z = (fVar2 - fVar3) * param_3 + fVar5;
    fVar20 = (param_2->TangentX).field0_0x0._s_0.Y;
    fVar1 = (param_1->TangentX).field0_0x0._s_0.Y;
    fVar2 = (param_2->TangentX).field0_0x0._s_0.Z;
    fVar3 = (param_1->TangentX).field0_0x0._s_0.Z;
    fVar4 = (param_1->TangentX).field0_0x0._s_0.Y;
    fVar5 = (param_1->TangentX).field0_0x0._s_0.Z;
    (__return_storage_ptr__->TangentX).field0_0x0._s_0.X =
         ((param_2->TangentX).field0_0x0._s_0.X - (param_1->TangentX).field0_0x0._s_0.X) * param_3 +
         (param_1->TangentX).field0_0x0._s_0.X;
    (__return_storage_ptr__->TangentX).field0_0x0._s_0.Y = (fVar20 - fVar1) * param_3 + fVar4;
    (__return_storage_ptr__->TangentX).field0_0x0._s_0.Z = (fVar2 - fVar3) * param_3 + fVar5;
    fVar20 = (param_2->TangentY).field0_0x0._s_0.Y;
    fVar1 = (param_1->TangentY).field0_0x0._s_0.Y;
    fVar2 = (param_2->TangentY).field0_0x0._s_0.Z;
    fVar3 = (param_1->TangentY).field0_0x0._s_0.Z;
    fVar4 = (param_1->TangentY).field0_0x0._s_0.Y;
    fVar5 = (param_1->TangentY).field0_0x0._s_0.Z;
    (__return_storage_ptr__->TangentY).field0_0x0._s_0.X =
         ((param_2->TangentY).field0_0x0._s_0.X - (param_1->TangentY).field0_0x0._s_0.X) * param_3 +
         (param_1->TangentY).field0_0x0._s_0.X;
    (__return_storage_ptr__->TangentY).field0_0x0._s_0.Y = (fVar20 - fVar1) * param_3 + fVar4;
    (__return_storage_ptr__->TangentY).field0_0x0._s_0.Z = (fVar2 - fVar3) * param_3 + fVar5;
    fVar20 = (param_2->TangentZ).field0_0x0._s_0.Y;
    fVar1 = (param_1->TangentZ).field0_0x0._s_0.Y;
    fVar2 = (param_2->TangentZ).field0_0x0._s_0.Z;
    fVar3 = (param_1->TangentZ).field0_0x0._s_0.Z;
    fVar4 = (param_1->TangentZ).field0_0x0._s_0.Y;
    fVar5 = (param_1->TangentZ).field0_0x0._s_0.Z;
    (__return_storage_ptr__->TangentZ).field0_0x0._s_0.X =
         ((param_2->TangentZ).field0_0x0._s_0.X - (param_1->TangentZ).field0_0x0._s_0.X) * param_3 +
         (param_1->TangentZ).field0_0x0._s_0.X;
    (__return_storage_ptr__->TangentZ).field0_0x0._s_0.Y = (fVar20 - fVar1) * param_3 + fVar4;
    (__return_storage_ptr__->TangentZ).field0_0x0._s_0.Z = (fVar2 - fVar3) * param_3 + fVar5;
    dVar6 = param_1->UVs[0].field0_0x0._s_0.Y;
    dVar7 = param_2->UVs[0].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[0].field0_0x0._s_0.X =
         (param_2->UVs[0].field0_0x0._s_0.X - param_1->UVs[0].field0_0x0._s_0.X) * dVar10 +
         param_1->UVs[0].field0_0x0._s_0.X;
    __return_storage_ptr__->UVs[0].field0_0x0._s_0.Y = (dVar7 - dVar6) * dVar10 + dVar6;
    dVar6 = param_1->UVs[1].field0_0x0._s_0.Y;
    dVar7 = param_2->UVs[1].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[1].field0_0x0._s_0.X =
         (param_2->UVs[1].field0_0x0._s_0.X - param_1->UVs[1].field0_0x0._s_0.X) * dVar10 +
         param_1->UVs[1].field0_0x0._s_0.X;
    __return_storage_ptr__->UVs[1].field0_0x0._s_0.Y = dVar10 * (dVar7 - dVar6) + dVar6;
    dVar6 = param_1->UVs[2].field0_0x0._s_0.Y;
    dVar7 = param_2->UVs[2].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[2].field0_0x0._s_0.X =
         (param_2->UVs[2].field0_0x0._s_0.X - param_1->UVs[2].field0_0x0._s_0.X) * dVar10 +
         param_1->UVs[2].field0_0x0._s_0.X;
    __return_storage_ptr__->UVs[2].field0_0x0._s_0.Y = dVar10 * (dVar7 - dVar6) + dVar6;
    dVar6 = param_1->UVs[3].field0_0x0._s_0.Y;
    dVar7 = param_2->UVs[3].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[3].field0_0x0._s_0.X =
         (param_2->UVs[3].field0_0x0._s_0.X - param_1->UVs[3].field0_0x0._s_0.X) * dVar10 +
         param_1->UVs[3].field0_0x0._s_0.X;
    __return_storage_ptr__->UVs[3].field0_0x0._s_0.Y = dVar10 * (dVar7 - dVar6) + dVar6;
    dVar6 = param_1->UVs[4].field0_0x0._s_0.Y;
    dVar7 = param_2->UVs[4].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[4].field0_0x0._s_0.X =
         (param_2->UVs[4].field0_0x0._s_0.X - param_1->UVs[4].field0_0x0._s_0.X) * dVar10 +
         param_1->UVs[4].field0_0x0._s_0.X;
    __return_storage_ptr__->UVs[4].field0_0x0._s_0.Y = dVar10 * (dVar7 - dVar6) + dVar6;
    dVar6 = param_1->UVs[5].field0_0x0._s_0.X;
    dVar7 = param_1->UVs[5].field0_0x0._s_0.Y;
    dVar8 = param_2->UVs[5].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[5].field0_0x0._s_0.X =
         (param_2->UVs[5].field0_0x0._s_0.X - dVar6) * dVar10 + dVar6;
    __return_storage_ptr__->UVs[5].field0_0x0._s_0.Y = dVar10 * (dVar8 - dVar7) + dVar7;
    dVar6 = param_1->UVs[6].field0_0x0._s_0.X;
    dVar7 = param_1->UVs[6].field0_0x0._s_0.Y;
    dVar8 = param_2->UVs[6].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[6].field0_0x0._s_0.X =
         (param_2->UVs[6].field0_0x0._s_0.X - dVar6) * dVar10 + dVar6;
    __return_storage_ptr__->UVs[6].field0_0x0._s_0.Y = dVar10 * (dVar8 - dVar7) + dVar7;
    dVar6 = param_1->UVs[7].field0_0x0._s_0.X;
    dVar7 = param_1->UVs[7].field0_0x0._s_0.Y;
    dVar8 = param_2->UVs[7].field0_0x0._s_0.Y;
    __return_storage_ptr__->UVs[7].field0_0x0._s_0.X =
         (param_2->UVs[7].field0_0x0._s_0.X - dVar6) * dVar10 + dVar6;
    __return_storage_ptr__->UVs[7].field0_0x0._s_0.Y = dVar10 * (dVar8 - dVar7) + dVar7;
    fVar20 = (float)(param_1->Color).field0_0x0._s_0.R;
    iVar18 = (int)(((float)(param_2->Color).field0_0x0._s_0.R - fVar20) * param_3 + fVar20);
    iVar17 = 0xff;
    if (iVar18 < 0xff) {
      iVar17 = iVar18;
    }
    uVar19 = '\0';
    if (0 < iVar17) {
      uVar19 = (uchar)iVar17;
    }
    bVar9 = (param_1->Color).field0_0x0._s_0.G;
    (__return_storage_ptr__->Color).field0_0x0._s_0.R = uVar19;
    fVar20 = (float)bVar9;
    iVar18 = (int)(((float)(param_2->Color).field0_0x0._s_0.G - fVar20) * param_3 + fVar20);
    iVar17 = 0xff;
    if (iVar18 < 0xff) {
      iVar17 = iVar18;
    }
    uVar19 = '\0';
    if (0 < iVar17) {
      uVar19 = (uchar)iVar17;
    }
    bVar9 = (param_1->Color).field0_0x0._s_0.B;
    (__return_storage_ptr__->Color).field0_0x0._s_0.G = uVar19;
    uVar19 = '\0';
    fVar20 = (float)bVar9;
    iVar18 = (int)(((float)(param_2->Color).field0_0x0._s_0.B - fVar20) * param_3 + fVar20);
    iVar17 = 0xff;
    if (iVar18 < 0xff) {
      iVar17 = iVar18;
    }
    if (0 < iVar17) {
      uVar19 = (uchar)iVar17;
    }
    bVar9 = (param_1->Color).field0_0x0._s_0.A;
    (__return_storage_ptr__->Color).field0_0x0._s_0.B = uVar19;
    fVar20 = (float)bVar9;
    iVar18 = (int)(((float)(param_2->Color).field0_0x0._s_0.A - fVar20) * param_3 + fVar20);
    iVar17 = 0xff;
    if (iVar18 < 0xff) {
      iVar17 = iVar18;
    }
    uVar19 = '\0';
    if (0 < iVar17) {
      uVar19 = (uchar)iVar17;
    }
    (__return_storage_ptr__->Color).field0_0x0._s_0.A = uVar19;
    return __return_storage_ptr__;
  }
  uVar11 = *(undefined8 *)((longlong)&(param_2->Pos).field0_0x0 + 8);
  FVar15.field0_0x0 = (param_2->Color).field0_0x0;
  uVar16 = *(undefined4 *)&param_2->field_0xb4;
  uVar12 = *(undefined8 *)((longlong)&(param_2->TangentX).field0_0x0 + 4);
  uVar13 = *(undefined8 *)&(param_2->TangentY).field0_0x0;
  *(undefined8 *)&(__return_storage_ptr__->Pos).field0_0x0 =
       *(undefined8 *)&(param_2->Pos).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Pos).field0_0x0 + 8) = uVar11;
  uVar11 = *(undefined8 *)((longlong)&(param_2->TangentY).field0_0x0 + 8);
  uVar14 = *(undefined8 *)((longlong)&(param_2->TangentZ).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->TangentX).field0_0x0 + 4) = uVar12;
  *(undefined8 *)&(__return_storage_ptr__->TangentY).field0_0x0 = uVar13;
  dVar10 = param_2->UVs[0].field0_0x0._s_0.X;
  dVar6 = param_2->UVs[0].field0_0x0._s_0.Y;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->TangentY).field0_0x0 + 8) = uVar11;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->TangentZ).field0_0x0 + 4) = uVar14;
  dVar7 = param_2->UVs[1].field0_0x0._s_0.X;
  dVar8 = param_2->UVs[1].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[0].field0_0x0._s_0.X = dVar10;
  __return_storage_ptr__->UVs[0].field0_0x0._s_0.Y = dVar6;
  dVar10 = param_2->UVs[2].field0_0x0._s_0.X;
  dVar6 = param_2->UVs[2].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[1].field0_0x0._s_0.X = dVar7;
  __return_storage_ptr__->UVs[1].field0_0x0._s_0.Y = dVar8;
  dVar7 = param_2->UVs[3].field0_0x0._s_0.X;
  dVar8 = param_2->UVs[3].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[2].field0_0x0._s_0.X = dVar10;
  __return_storage_ptr__->UVs[2].field0_0x0._s_0.Y = dVar6;
  dVar10 = param_2->UVs[5].field0_0x0._s_0.X;
  dVar6 = param_2->UVs[5].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[3].field0_0x0._s_0.X = dVar7;
  __return_storage_ptr__->UVs[3].field0_0x0._s_0.Y = dVar8;
  dVar7 = param_2->UVs[4].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[4].field0_0x0._s_0.X = param_2->UVs[4].field0_0x0._s_0.X;
  __return_storage_ptr__->UVs[4].field0_0x0._s_0.Y = dVar7;
  dVar7 = param_2->UVs[6].field0_0x0._s_0.X;
  dVar8 = param_2->UVs[6].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[5].field0_0x0._s_0.X = dVar10;
  __return_storage_ptr__->UVs[5].field0_0x0._s_0.Y = dVar6;
  dVar10 = param_2->UVs[7].field0_0x0._s_0.X;
  dVar6 = param_2->UVs[7].field0_0x0._s_0.Y;
  __return_storage_ptr__->UVs[6].field0_0x0._s_0.X = dVar7;
  __return_storage_ptr__->UVs[6].field0_0x0._s_0.Y = dVar8;
  __return_storage_ptr__->UVs[7].field0_0x0._s_0.X = dVar10;
  __return_storage_ptr__->UVs[7].field0_0x0._s_0.Y = dVar6;
  __return_storage_ptr__->Color = (FColor)FVar15.field0_0x0;
  *(undefined4 *)&__return_storage_ptr__->field_0xb4 = uVar16;
  return __return_storage_ptr__;
}

// IsPolygonConvex @ 147c69570

bool __cdecl
IsPolygonConvex(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar6 = __real_bf800000;
  fVar5 = __real_3f800000;
  iVar1 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar1) {
    lVar13 = 0;
    fVar16 = 0.0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar11 = (int)(uVar12 + 1) % iVar1;
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
      uVar11 = (int)(uVar12 + 2) % iVar1;
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      fVar15 = (float)((*(double *)(pFVar3 + (longlong)(int)uVar11 * 0x10 + 8) -
                       *(double *)(pFVar14 + 8)) *
                       (*(double *)pFVar14 - *(double *)(pFVar2 + lVar13)) -
                      (*(double *)(pFVar14 + 8) - *(double *)(pFVar2 + lVar13 + 8)) *
                      (*(double *)(pFVar3 + (longlong)(int)uVar11 * 0x10) - *(double *)pFVar14));
      fVar7 = fVar5;
      if ((((0.0 < fVar15) || (fVar17 = fVar16, fVar7 = fVar6, fVar15 < 0.0)) &&
          (fVar17 = fVar7, fVar16 != 0.0)) && (bVar8 = fVar16 != fVar17, fVar17 = fVar16, bVar8)) {
        return false;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
      fVar16 = fVar17;
    } while ((int)uVar12 < iVar1);
  }
  return true;
}

// JoinMutuallyVisible @ 147c6a330

void __cdecl
JoinMutuallyVisible(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
                   TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  float fVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  double *pdVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  uint local_res18;
  uint local_158;
  float local_140;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  iVar6 = param_2->ArrayNum;
  iVar7 = param_1->ArrayNum;
  if (iVar6 == 0) {
    return;
  }
  local_158 = 0;
  if ((iVar6 < 1) &&
     (bVar22 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar28 = 1;
  fVar40 = (float)*(double *)(param_2->AllocatorInstance).Data;
  if (1 < (longlong)iVar6) {
    lVar31 = 0x10;
    lVar30 = (longlong)iVar6 + -1;
    local_158 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar28 < param_2->ArrayNum) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((double)fVar40 < *(double *)((param_2->AllocatorInstance).Data + lVar31)) {
        uVar24 = 0;
        if ((int)uVar28 < param_2->ArrayNum) {
          uVar24 = ~uVar28 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar22 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar40 = (float)*(double *)((param_2->AllocatorInstance).Data + lVar31);
        local_158 = uVar28;
      }
      uVar28 = uVar28 + 1;
      lVar31 = lVar31 + 0x10;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  uVar28 = 0;
  if ((int)local_158 < param_2->ArrayNum) {
    uVar28 = ~local_158 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar22 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar21 = __real_34000000;
  fVar36 = __real_3f7ffffe;
  fVar40 = __real_3f800000;
  uVar32 = 0;
  uVar24 = 0;
  fVar45 = 0.0;
  local_140 = __real_7f7fffff;
  local_res18 = 0;
  bVar22 = false;
  pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)local_158 * 0x10;
  local_f8 = *(undefined4 *)pFVar1;
  uStack_f4 = *(undefined4 *)(pFVar1 + 4);
  dVar3 = *(double *)pFVar1;
  pFVar8 = pFVar1 + 8;
  uVar13 = *(undefined4 *)pFVar8;
  uVar14 = *(undefined4 *)(pFVar1 + 0xc);
  dVar19 = *(double *)pFVar8;
  dVar18 = *(double *)pFVar8;
  dVar17 = *(double *)pFVar8;
  dVar16 = *(double *)pFVar8;
  dVar15 = *(double *)pFVar8;
  fVar42 = __real_7f7fffff;
  uVar28 = 0;
  uStack_f0 = uVar13;
  uStack_ec = uVar14;
  if (0 < iVar7) {
    lVar30 = 0;
    uVar29 = (uint)__xmm_80000000000000008000000000000000;
    uVar20 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    uVar28 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar28 < param_1->ArrayNum) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar25 = uVar28 + 1;
      uVar27 = (uint)((longlong)(int)uVar25 % (longlong)iVar7);
      uVar24 = 0;
      if ((int)uVar27 < param_1->ArrayNum) {
        uVar24 = ~uVar27 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      dVar2 = *(double *)(pFVar1 + lVar30 + 8);
      dVar38 = *(double *)(pFVar8 + (longlong)(int)uVar27 * 0x10 + 8) - dVar2;
      if (((0.0 < dVar38) && ((float)dVar38 != 0.0)) &&
         (fVar41 = (float)(double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ (uint)uVar20,
                                           SUB84(dVar38,0) ^ uVar29), fVar41 != 0.0)) {
        dVar10 = *(double *)(pFVar8 + (longlong)(int)uVar27 * 0x10) - *(double *)(pFVar1 + lVar30);
        fVar35 = (float)((((dVar10 * dVar15 - dVar2 * dVar10) - dVar38 * dVar3) +
                         dVar38 * *(double *)(pFVar1 + lVar30)) / (double)(float)dVar38);
        fVar41 = (float)((dVar2 - dVar15) / (double)fVar41);
        if (((0.0 <= fVar35) && (0.0 <= fVar41)) &&
           ((fVar41 <= fVar40 && (fVar35 = (float)((double)fVar35 + dVar3), fVar35 < fVar42)))) {
          uVar32 = (ulonglong)uVar28;
          fVar42 = fVar35;
          local_res18 = uVar27;
          if (fVar21 <= fVar41) {
            if (fVar36 < fVar41) {
              uVar32 = (longlong)(int)uVar25 % (longlong)iVar7 & 0xffffffff;
              bVar22 = true;
            }
          }
          else {
            bVar22 = true;
          }
        }
      }
      lVar30 = lVar30 + 0x10;
      uVar24 = (uint)uVar32;
      uVar28 = uVar25;
    } while ((int)uVar25 < iVar7);
    uVar28 = local_res18;
    if (bVar22) goto LAB_147c6abce;
  }
  dStack_120 = dVar16;
  uVar29 = 0;
  if ((int)uVar24 < param_1->ArrayNum) {
    uVar29 = ~uVar24 >> 0x1f;
  }
  local_128 = (double)fVar42;
  if ((uVar29 == 0) &&
     (bVar22 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar3 = *(double *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar24 * 0x10);
  uVar29 = 0;
  if ((int)uVar28 < param_1->ArrayNum) {
    uVar29 = ~uVar28 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar22 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar28 * 0x10;
  if (*(double *)pFVar1 <= dVar3 && dVar3 != *(double *)pFVar1) {
    uVar28 = uVar24;
  }
  uVar24 = 0;
  if ((int)uVar28 < param_1->ArrayNum) {
    uVar24 = ~uVar28 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar22 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar3 = __real_4000000000000000;
  uVar24 = 0xffffffff;
  pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar28 * 0x10;
  dStack_110 = *(double *)(pFVar1 + 8);
  local_118 = *(double *)pFVar1;
  pdVar26 = &local_118;
  if (dStack_120 <= dStack_110) {
    pdVar26 = &local_128;
  }
  dVar15 = *pdVar26;
  dVar16 = pdVar26[1];
  pdVar26 = &local_128;
  if (dStack_120 <= dStack_110) {
    pdVar26 = &local_118;
  }
  uVar29 = 0;
  dVar2 = *pdVar26;
  dVar38 = pdVar26[1];
  local_108 = dVar2;
  dStack_100 = dVar38;
  if (0 < iVar7) {
    lVar30 = 0;
    lVar31 = 0;
    dVar10 = (double)CONCAT44(uStack_f4,local_f8);
    uVar43 = uVar13;
    uVar44 = uVar14;
    uVar24 = 0xffffffff;
    do {
      if (lVar31 != (int)uVar28) {
        uVar25 = 0;
        if ((int)uVar29 < param_1->ArrayNum) {
          uVar25 = ~uVar29 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        dVar4 = *(double *)(pFVar1 + lVar30);
        dVar5 = *(double *)(pFVar1 + lVar30 + 8);
        dVar37 = dVar4 - dVar15;
        dVar11 = dVar5 - dVar16;
        dVar39 = dVar4 - dVar10;
        dVar12 = dVar5 - (double)CONCAT44(uVar44,uVar43);
        uVar43 = uVar13;
        uVar44 = uVar14;
        if (((((0.0 < (dVar15 - dVar10) * dVar12 - (dVar16 - dVar17) * dVar39) &&
              (0.0 < (dVar38 - dVar18) * dVar39 - (dVar2 - dVar10) * dVar12)) &&
             (0.0 < (dVar2 - dVar15) * dVar11 - (dVar38 - dVar16) * dVar37)) &&
            ((dVar3 <= dVar39 * dVar39 + dVar12 * dVar12 &&
             (dVar3 <= dVar37 * dVar37 + dVar11 * dVar11)))) &&
           (dVar3 <= (dVar5 - dVar38) * (dVar5 - dVar38) + (dVar4 - dVar2) * (dVar4 - dVar2))) {
          uVar25 = 0;
          if ((int)uVar29 < param_1->ArrayNum) {
            uVar25 = ~uVar29 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          uVar43 = SUB84(dVar19,0);
          uVar44 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar4 = *(double *)(pFVar1 + lVar30 + 8) - dVar19;
          dVar5 = *(double *)(pFVar1 + lVar30) - dVar10;
          auVar33._0_8_ = dVar5 * dVar5;
          auVar33._8_8_ = 0;
          dVar4 = dVar4 * dVar4 + auVar33._0_8_;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = dVar4;
          auVar34 = sqrtpd(auVar33,auVar34);
          fVar36 = (float)dVar4;
          fVar40 = (float)(dVar5 / auVar34._0_8_);
          if ((fVar45 < fVar40) || ((fVar40 == fVar45 && (fVar36 < local_140)))) {
            fVar45 = fVar40;
            local_140 = fVar36;
            uVar24 = uVar29;
          }
        }
      }
      uVar29 = uVar29 + 1;
      lVar31 = lVar31 + 1;
      lVar30 = lVar30 + 0x10;
    } while ((int)uVar29 < iVar7);
  }
  if (uVar24 == 0xffffffff) {
    uVar24 = uVar28;
  }
LAB_147c6abce:
  JoinSubtractiveToAdditive(param_1,param_2,uVar24,local_158);
  return;
}

// JoinSubtractiveToAdditive @ 147c6ac80

void __cdecl
JoinSubtractiveToAdditive
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_48;
  
  iVar5 = param_1->ArrayNum;
  uVar12 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  iVar4 = 0;
  if (0 < iVar5) {
    local_58 = 0;
    uVar7 = (longlong)param_4;
    iVar4 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < iVar5) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = local_48.ArrayNum;
      }
      pFVar10 = (param_1->AllocatorInstance).Data + local_58;
      if ((local_48.AllocatorInstance.Data <= pFVar10) &&
         (pFVar10 < local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = local_48.ArrayNum;
      }
      if (iVar4 == local_48.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar4 + 1;
      uVar2 = *(undefined8 *)(pFVar10 + 8);
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar4 * 0x10) =
           *(undefined8 *)pFVar10;
      *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar4 * 0x10 + 8) = uVar2;
      if (uVar12 == param_3) {
        iVar5 = param_2->ArrayNum;
        uVar11 = uVar7 & 0xffffffff;
        if ((int)uVar7 < iVar5) {
          lVar6 = (longlong)param_4 << 4;
          do {
            uVar8 = (uint)uVar11;
            uVar9 = 0;
            if ((int)uVar8 < iVar5) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar10 = (param_2->AllocatorInstance).Data + lVar6;
            if (((local_48.AllocatorInstance.Data <= pFVar10) &&
                (pFVar10 < local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = local_48.ArrayNum;
            if (local_48.ArrayNum == local_48.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
            }
            uVar11 = (ulonglong)(uVar8 + 1);
            local_48.ArrayNum = iVar5 + 1;
            lVar6 = lVar6 + 0x10;
            uVar2 = *(undefined8 *)(pFVar10 + 8);
            *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
                 *(undefined8 *)pFVar10;
            *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) = uVar2;
            iVar5 = param_2->ArrayNum;
          } while ((int)(uVar8 + 1) < iVar5);
          uVar7 = (ulonglong)(uint)param_4;
        }
        uVar9 = 0;
        if (-1 < (int)uVar7) {
          lVar6 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar9 < param_2->ArrayNum) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar10 = (param_2->AllocatorInstance).Data + lVar6;
            if (((local_48.AllocatorInstance.Data <= pFVar10) &&
                (pFVar10 < local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = local_48.ArrayNum;
            if (local_48.ArrayNum == local_48.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
            }
            uVar9 = uVar9 + 1;
            local_48.ArrayNum = iVar5 + 1;
            uVar2 = *(undefined8 *)(pFVar10 + 8);
            lVar6 = lVar6 + 0x10;
            *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
                 *(undefined8 *)pFVar10;
            *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) = uVar2;
          } while ((int)uVar9 <= param_4);
          uVar7 = (ulonglong)(uint)param_4;
        }
        uVar9 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar10 = (param_1->AllocatorInstance).Data + local_58;
        if (((local_48.AllocatorInstance.Data <= pFVar10) &&
            (pFVar10 < local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        local_48.ArrayNum = iVar5 + 1;
        uVar2 = *(undefined8 *)(pFVar10 + 8);
        *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
             *(undefined8 *)pFVar10;
        *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) = uVar2;
      }
      local_58 = local_58 + 0x10;
      iVar5 = param_1->ArrayNum;
      uVar12 = uVar12 + 1;
      iVar4 = local_48.ArrayNum;
    } while ((int)uVar12 < iVar5);
  }
  _Src.Data = local_48.AllocatorInstance.Data;
  if (param_1 != &local_48) {
    param_1->ArrayNum = iVar4;
    if ((iVar4 == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,param_1->ArrayMax,&param_1->AllocatorInstance,iVar4,&param_1->ArrayMax
                );
      if (iVar4 != 0) {
        memcpy((param_1->AllocatorInstance).Data,_Src.Data,(longlong)iVar4 << 4);
      }
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// MergeTriangleIntoPolygon @ 147c6edc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl MergeTriangleIntoPolygon(FClipSMPolygon *param_1,FClipSMTriangle *param_2)

{
  int *piVar1;
  TArray<FClipSMVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  double *pdVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  if (((int)param_1->_padding_ == *(int *)param_2) &&
     (cVar3 = *(char *)((longlong)&param_1->_padding_ + 4), cVar3 == param_2->field_0xc)) {
    iVar10 = *(int *)&param_2->field_0x8;
    if ((((int)param_1->_padding_ == iVar10) &&
        (((cVar3 != '\0' ||
          (*(int *)((longlong)&param_1->_padding_ + 4) == *(int *)&param_2->field_0x4)) &&
         (dVar5 = *(double *)&param_2->field_0x10 - (double)param_1->_padding_,
         uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar23,uVar22) < __real_3ef4f8b580000000 ||
         (double)CONCAT44(uVar23,uVar22) == __real_3ef4f8b580000000)))) &&
       ((dVar5 = *(double *)&param_2->field_0x18 - (double)param_1->_padding_,
        uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar23,uVar22) < __real_3ef4f8b580000000 ||
        (double)CONCAT44(uVar23,uVar22) == __real_3ef4f8b580000000 &&
        (dVar5 = *(double *)&param_2->field_0x20 - (double)param_1->_padding_,
        uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar23,uVar22) < __real_3ef4f8b580000000 ||
        (double)CONCAT44(uVar23,uVar22) == __real_3ef4f8b580000000)))) {
      lVar20 = 0;
      pdVar19 = (double *)&param_2->field_0x30;
      do {
        lVar13 = 0;
        pdVar11 = pdVar19;
        do {
          dVar5 = *pdVar11 -
                  *(double *)
                   ((longlong)pdVar11 + (longlong)param_1 + (0x30 - (longlong)&param_2->field_0x30))
          ;
          uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
              (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000) {
            return false;
          }
          lVar13 = lVar13 + 1;
          pdVar11 = pdVar11 + 1;
        } while (lVar13 < 4);
        lVar20 = lVar20 + 1;
        pdVar19 = pdVar19 + 4;
      } while (lVar20 < 4);
      lVar20 = 0;
      pdVar19 = (double *)&param_2->field_0xb0;
      do {
        lVar13 = 0;
        pdVar11 = pdVar19;
        do {
          dVar5 = *pdVar11 -
                  *(double *)
                   ((longlong)pdVar11 + (longlong)param_1 + (0xb0 - (longlong)&param_2->field_0xb0))
          ;
          uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
              (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000) {
            return false;
          }
          lVar13 = lVar13 + 1;
          pdVar11 = pdVar11 + 1;
        } while (lVar13 < 4);
        lVar20 = lVar20 + 1;
        pdVar19 = pdVar19 + 4;
      } while (lVar20 < 4);
      lVar20 = 0;
      pdVar19 = (double *)&param_2->field_0x130;
      do {
        lVar13 = 0;
        pdVar11 = pdVar19;
        do {
          dVar5 = *pdVar11 -
                  *(double *)
                   ((longlong)pdVar11 +
                   (longlong)param_1 + (0x130 - (longlong)&param_2->field_0x130));
          uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
              (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000) {
            return false;
          }
          lVar13 = lVar13 + 1;
          pdVar11 = pdVar11 + 1;
        } while (lVar13 < 4);
        lVar20 = lVar20 + 1;
        pdVar19 = pdVar19 + 4;
      } while (lVar20 < 4);
      lVar20 = 0;
      pdVar19 = (double *)&param_2->field_0x5b0;
      do {
        lVar13 = 0;
        pdVar11 = pdVar19;
        do {
          dVar5 = *pdVar11 -
                  *(double *)
                   ((longlong)pdVar11 +
                   (longlong)param_1 + (0x5b0 - (longlong)&param_2->field_0x5b0));
          uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
              (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000) {
            return false;
          }
          lVar13 = lVar13 + 1;
          pdVar11 = pdVar11 + 1;
        } while (lVar13 < 4);
        lVar20 = lVar20 + 1;
        pdVar19 = pdVar19 + 4;
      } while (lVar20 < 4);
      if (0 < iVar10) {
        lVar20 = 0;
        pdVar19 = (double *)&param_2->field_0x1b0;
        do {
          lVar13 = 0;
          pdVar11 = pdVar19;
          do {
            lVar14 = 0;
            pdVar12 = pdVar11;
            do {
              dVar5 = *pdVar12 -
                      *(double *)((longlong)pdVar12 + ((longlong)param_1 - (longlong)param_2));
              uVar22 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar23 = (uint)((ulonglong)dVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
                  (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000) {
                return false;
              }
              lVar14 = lVar14 + 1;
              pdVar12 = pdVar12 + 1;
            } while (lVar14 < 4);
            lVar13 = lVar13 + 1;
            pdVar11 = pdVar11 + 4;
          } while (lVar13 < 4);
          lVar20 = lVar20 + 1;
          pdVar19 = pdVar19 + 0x10;
        } while (lVar20 < iVar10);
      }
      iVar10 = (param_1->Vertices).ArrayNum;
      if (0 < iVar10) {
        pTVar2 = &param_1->Vertices;
        uVar22 = 0;
        do {
          uVar23 = uVar22 + 1;
          uVar15 = (int)uVar23 % iVar10;
          uVar17 = 0;
          do {
            uVar21 = (int)uVar17 + 1;
            uVar9 = 0;
            if ((int)uVar22 < (param_1->Vertices).ArrayNum) {
              uVar9 = ~uVar22 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            bVar7 = VertsAreEqual((FClipSMVertex *)
                                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar22 * 0xb8),
                                  param_2->Vertices + uVar21 % 3);
            if (bVar7) {
              uVar9 = 0;
              if ((int)uVar15 < (param_1->Vertices).ArrayNum) {
                uVar9 = ~uVar15 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              pFVar16 = (pTVar2->AllocatorInstance).Data;
              lVar20 = (longlong)(int)uVar15 * 0xb8;
              bVar7 = VertsAreEqual((FClipSMVertex *)(pFVar16 + lVar20),param_2->Vertices + uVar17);
              if (bVar7) {
                pFVar18 = (FScriptContainerElement *)
                          (param_2->Vertices + (int)(((int)uVar17 + 2U) % 3));
                if (((pFVar16 <= pFVar18) &&
                    (pFVar18 < pFVar16 + (longlong)(param_1->Vertices).ArrayMax * 0xb8)) &&
                   (bVar7 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                iVar10 = (param_1->Vertices).ArrayNum;
                piVar1 = &(param_1->Vertices).ArrayMax;
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8b8,&pTVar2->AllocatorInstance,piVar1);
                }
                pFVar16 = (pTVar2->AllocatorInstance).Data;
                (param_1->Vertices).ArrayNum = iVar10 + 1;
                pFVar16 = pFVar16 + lVar20;
                memmove(pFVar16 + 0xb8,pFVar16,(longlong)(int)(iVar10 - uVar15) * 0xb8);
                uVar6 = *(undefined8 *)(pFVar18 + 8);
                pFVar16 = (pTVar2->AllocatorInstance).Data + lVar20;
                *(undefined8 *)pFVar16 = *(undefined8 *)pFVar18;
                *(undefined8 *)(pFVar16 + 8) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x18);
                *(undefined8 *)(pFVar16 + 0x10) = *(undefined8 *)(pFVar18 + 0x10);
                *(undefined8 *)(pFVar16 + 0x18) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x28);
                *(undefined8 *)(pFVar16 + 0x20) = *(undefined8 *)(pFVar18 + 0x20);
                *(undefined8 *)(pFVar16 + 0x28) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x38);
                *(undefined8 *)(pFVar16 + 0x30) = *(undefined8 *)(pFVar18 + 0x30);
                *(undefined8 *)(pFVar16 + 0x38) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x48);
                *(undefined8 *)(pFVar16 + 0x40) = *(undefined8 *)(pFVar18 + 0x40);
                *(undefined8 *)(pFVar16 + 0x48) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x58);
                *(undefined8 *)(pFVar16 + 0x50) = *(undefined8 *)(pFVar18 + 0x50);
                *(undefined8 *)(pFVar16 + 0x58) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x68);
                *(undefined8 *)(pFVar16 + 0x60) = *(undefined8 *)(pFVar18 + 0x60);
                *(undefined8 *)(pFVar16 + 0x68) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x78);
                *(undefined8 *)(pFVar16 + 0x70) = *(undefined8 *)(pFVar18 + 0x70);
                *(undefined8 *)(pFVar16 + 0x78) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x88);
                *(undefined8 *)(pFVar16 + 0x80) = *(undefined8 *)(pFVar18 + 0x80);
                *(undefined8 *)(pFVar16 + 0x88) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0x98);
                *(undefined8 *)(pFVar16 + 0x90) = *(undefined8 *)(pFVar18 + 0x90);
                *(undefined8 *)(pFVar16 + 0x98) = uVar6;
                uVar6 = *(undefined8 *)(pFVar18 + 0xa8);
                *(undefined8 *)(pFVar16 + 0xa0) = *(undefined8 *)(pFVar18 + 0xa0);
                *(undefined8 *)(pFVar16 + 0xa8) = uVar6;
                *(undefined8 *)(pFVar16 + 0xb0) = *(undefined8 *)(pFVar18 + 0xb0);
                return true;
              }
            }
            uVar17 = (ulonglong)uVar21;
          } while (uVar21 < 3);
          iVar10 = (param_1->Vertices).ArrayNum;
          uVar22 = uVar23;
        } while ((int)uVar23 < iVar10);
      }
    }
  }
  return false;
}

// MergeTriangleIntoPolygon @ 147c6f310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
MergeTriangleIntoPolygon
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,TVector2<double> *param_4,bool param_5
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_128 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_d0;
  uint local_c0;
  ulonglong local_b8;
  uint local_b0;
  longlong local_a8;
  double local_a0 [2];
  undefined1 local_90 [16];
  double local_80;
  double dStack_78;
  ulonglong local_70;
  
  dVar8 = __real_3ef4f8b580000000;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar18 = param_1->ArrayNum;
  local_c0 = 0;
  local_a0[0] = (param_2->field0_0x0)._s_0.X;
  local_a0[1] = (param_2->field0_0x0)._s_0.Y;
  local_90._0_8_ = (param_3->field0_0x0)._s_0.X;
  local_90._8_8_ = (param_3->field0_0x0)._s_0.Y;
  local_80 = (param_4->field0_0x0)._s_0.X;
  dStack_78 = (param_4->field0_0x0)._s_0.Y;
  if (0 < iVar18) {
    do {
      pdVar17 = local_a0 + 1;
      uVar11 = (int)(local_c0 + 1) % iVar18;
      iVar18 = 0;
      uVar15 = (ulonglong)(int)uVar11;
      local_b0 = ~local_c0 >> 0x1f;
      lVar14 = (longlong)(int)local_c0 << 4;
      uVar19 = 2;
      uVar16 = uVar15;
      uVar13 = local_c0;
      local_b8 = uVar15;
      local_a8 = lVar14;
      do {
        uVar20 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar20 = local_b0;
        }
        uVar22 = (uint)uVar15;
        if ((uVar20 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar16 = local_b8, uVar22 = uVar11, bVar9)) {
          pcVar2 = (code *)swi(3);
          uVar10 = (*pcVar2)();
          return (bool)uVar10;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        uVar15 = (ulonglong)((uVar19 - 1) % 3);
        dVar3 = *(double *)(pFVar1 + lVar14) - *(double *)(local_90 + (uVar15 - 1) * 0x10);
        uVar20 = SUB84(dVar3,0) & uVar6;
        uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & uVar7;
        if (((double)CONCAT44(uVar21,uVar20) < dVar8 || (double)CONCAT44(uVar21,uVar20) == dVar8) &&
           (dVar3 = *(double *)(pFVar1 + lVar14 + 8) - local_a0[uVar15 * 2 + 1],
           uVar20 = SUB84(dVar3,0) & uVar6, uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & uVar7,
           (double)CONCAT44(uVar21,uVar20) < dVar8 || (double)CONCAT44(uVar21,uVar20) == dVar8)) {
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar16 = local_b8, bVar9)) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return (bool)uVar10;
          }
          pFVar1 = (param_1->AllocatorInstance).Data;
          uVar20 = SUB84(*(double *)(pFVar1 + uVar16 * 0x10) - pdVar17[-1],0) & uVar6;
          uVar22 = (uint)((ulonglong)(*(double *)(pFVar1 + uVar16 * 0x10) - pdVar17[-1]) >> 0x20) &
                   uVar7;
          lVar14 = local_a8;
          uVar13 = local_c0;
          if (((double)CONCAT44(uVar22,uVar20) < dVar8 || (double)CONCAT44(uVar22,uVar20) == dVar8)
             && (uVar20 = SUB84(*(double *)(pFVar1 + uVar16 * 0x10 + 8) - *pdVar17,0) & uVar6,
                uVar22 = (uint)((ulonglong)(*(double *)(pFVar1 + uVar16 * 0x10 + 8) - *pdVar17) >>
                               0x20) & uVar7,
                (double)CONCAT44(uVar22,uVar20) < dVar8 || (double)CONCAT44(uVar22,uVar20) == dVar8)
             ) {
            if (!param_5) {
LAB_147c6f6a6:
              TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
                        (param_1,(TVector2<double> *)
                                 (local_90 + ((longlong)(int)((iVar18 + 2U) % 3) + -1) * 0x10),
                         uVar11);
              return true;
            }
            local_d0.ArrayNum = param_1->ArrayNum;
            lVar14 = (longlong)local_d0.ArrayNum;
            local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_d0.ArrayNum == 0) {
              local_d0.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_d0.ArrayNum,0,&local_d0.AllocatorInstance,local_d0.ArrayNum,
                         &local_d0.ArrayMax);
              memcpy(local_d0.AllocatorInstance.Data,pFVar1,lVar14 << 4);
            }
            puVar5 = local_90 + ((longlong)(int)(uVar19 % 3) + -1) * 0x10;
            if (((local_d0.AllocatorInstance.Data <= puVar5) &&
                (puVar5 < local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 0x10)) &&
               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar2 = (code *)swi(3);
              uVar10 = (*pcVar2)();
              return (bool)uVar10;
            }
            if (local_d0.ArrayNum == local_d0.ArrayMax) {
              local_d0.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
            }
            iVar12 = local_d0.ArrayNum - uVar11;
            local_d0.ArrayNum = local_d0.ArrayNum + 1;
            memmove(local_d0.AllocatorInstance.Data + uVar16 * 0x10 + 0x10,
                    local_d0.AllocatorInstance.Data + uVar16 * 0x10,(longlong)iVar12 << 4);
            uVar4 = local_a0[(longlong)(int)(uVar19 % 3) * 2U + 1];
            *(undefined8 *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10) =
                 *(undefined8 *)puVar5;
            *(undefined8 *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10 + 8) =
                 uVar4;
            bVar9 = IsPolygonConvex(&local_d0);
            if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.AllocatorInstance.Data);
            }
            lVar14 = local_a8;
            uVar16 = local_b8;
            uVar13 = local_c0;
            if (bVar9) goto LAB_147c6f6a6;
          }
        }
        uVar15 = (ulonglong)uVar11;
        iVar18 = iVar18 + 1;
        uVar19 = uVar19 + 1;
        pdVar17 = pdVar17 + 2;
      } while (uVar19 < 5);
      iVar18 = param_1->ArrayNum;
      local_c0 = uVar13 + 1;
    } while ((int)local_c0 < iVar18);
  }
  return false;
}

// ShouldWeCompileGPUSkinVFShaders @ 147c838d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl ShouldWeCompileGPUSkinVFShaders(EShaderPlatform param_1,Type param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = IsGPUSkinCacheAvailable(param_1);
  if (bVar1) {
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar3 < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FString::FString(&PerPlatformCVar.CVarName,L"r.SkinCache.Mode");
        PerPlatformCVar.CVar = (IConsoleVariable *)0x0;
        atexit(`IsGPUSkinCacheEnable'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__);
        _Init_thread_footer(&_TSS0);
      }
    }
    iVar2 = FShaderPlatformCachedIniValue<int>::Get(&PerPlatformCVar,param_1);
    if (iVar2 != 0) {
      if (*piVar3 < _TSS0) {
        _Init_thread_header(&_TSS0);
        if (_TSS0 == -1) {
          FString::FString(&PerPlatformCVar.CVarName,L"r.SkinCache.DefaultBehavior");
          PerPlatformCVar.CVar = (IConsoleVariable *)0x0;
          atexit(`IsGPUSkinCacheInclusive'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__)
          ;
          _Init_thread_footer(&_TSS0);
        }
      }
      iVar2 = FShaderPlatformCachedIniValue<int>::Get(&PerPlatformCVar,param_1);
      if ((iVar2 != 0) && (param_2 != ES3_1)) {
        if (*piVar3 < _TSS0) {
          _Init_thread_header(&_TSS0);
          if (_TSS0 == -1) {
            FString::FString(&PerPlatformCVar.CVarName,L"r.SkinCache.SkipCompilingGPUSkinVF");
            PerPlatformCVar.CVar = (IConsoleVariable *)0x0;
            atexit(`ShouldWeCompileGPUSkinVFShaders'::__l2::
                   _dynamic_atexit_destructor_for__PerPlatformCVar__);
            _Init_thread_footer(&_TSS0);
          }
        }
        bVar1 = FShaderPlatformCachedIniValue<bool>::Get(&PerPlatformCVar,param_1);
        return !bVar1;
      }
    }
  }
  return true;
}

// VertsAreEqual @ 147c8fd20

bool __cdecl VertsAreEqual(FClipSMVertex *param_1,FClipSMVertex *param_2)

{
  TVector2<double> *pTVar1;
  uint uVar2;
  double dVar3;
  
  if (((((((float)((uint)((param_1->Pos).field0_0x0._s_0.X - (param_2->Pos).field0_0x0._s_0.X) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac) &&
         ((float)((uint)((param_1->Pos).field0_0x0._s_0.Y - (param_2->Pos).field0_0x0._s_0.Y) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)) &&
        ((float)((uint)((param_1->Pos).field0_0x0._s_0.Z - (param_2->Pos).field0_0x0._s_0.Z) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)) &&
       ((((float)((uint)((param_1->TangentX).field0_0x0._s_0.X -
                        (param_2->TangentX).field0_0x0._s_0.X) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac &&
         ((float)((uint)((param_1->TangentX).field0_0x0._s_0.Y -
                        (param_2->TangentX).field0_0x0._s_0.Y) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)) &&
        (((float)((uint)((param_1->TangentX).field0_0x0._s_0.Z -
                        (param_2->TangentX).field0_0x0._s_0.Z) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac &&
         (((float)((uint)((param_1->TangentY).field0_0x0._s_0.X -
                         (param_2->TangentY).field0_0x0._s_0.X) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac &&
          ((float)((uint)((param_1->TangentY).field0_0x0._s_0.Y -
                         (param_2->TangentY).field0_0x0._s_0.Y) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)))))))) &&
      ((float)((uint)((param_1->TangentY).field0_0x0._s_0.Z - (param_2->TangentY).field0_0x0._s_0.Z)
              & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)) &&
     (((((float)((uint)((param_1->TangentZ).field0_0x0._s_0.X -
                       (param_2->TangentZ).field0_0x0._s_0.X) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac &&
        ((float)((uint)((param_1->TangentZ).field0_0x0._s_0.Y -
                       (param_2->TangentZ).field0_0x0._s_0.Y) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)) &&
       ((float)((uint)((param_1->TangentZ).field0_0x0._s_0.Z - (param_2->TangentZ).field0_0x0._s_0.Z
                      ) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_37a7c5ac)) &&
      ((param_1->Color).field0_0x0.Bits == (param_2->Color).field0_0x0.Bits)))) {
    pTVar1 = param_2->UVs;
    uVar2 = 0;
    while ((dVar3 = *(double *)((longlong)pTVar1 + ((longlong)param_1 - (longlong)param_2)) -
                    (pTVar1->field0_0x0)._s_0.X,
           (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f50000000000000 &&
           (dVar3 = *(double *)((longlong)pTVar1 + ((longlong)param_1 - (longlong)param_2) + 8) -
                    (pTVar1->field0_0x0)._s_0.Y,
           (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f50000000000000))) {
      uVar2 = uVar2 + 1;
      pTVar1 = pTVar1 + 1;
      if (7 < uVar2) {
        return true;
      }
    }
  }
  return false;
}

// Z_Construct_UClass_AGameNetworkManager_NoRegister @ 147c90120

UClass * __cdecl Z_Construct_UClass_AGameNetworkManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameNetworkManager",
               &Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton,
               AGameNetworkManager::StaticRegisterNativesAGameNetworkManager,0x368,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AGameNetworkManager>,
               InternalVTableHelperCtorCaller<AGameNetworkManager>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton;
}

// Z_Construct_UClass_AGameState_NoRegister @ 147c901e0

UClass * __cdecl Z_Construct_UClass_AGameState_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameState",&Z_Registration_Info_UClass_AGameState.InnerSingleton,
               AGameState::StaticRegisterNativesAGameState,0x338,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameState>,
               InternalVTableHelperCtorCaller<AGameState>,local_res8,AGameStateBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameState.InnerSingleton;
}

// Z_Construct_UClass_UGameViewportClient_NoRegister @ 147c902a0

UClass * __cdecl Z_Construct_UClass_UGameViewportClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameViewportClient",
               &Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton,
               UGameViewportClient::StaticRegisterNativesUGameViewportClient,0x460,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameViewportClient>,
               InternalVTableHelperCtorCaller<UGameViewportClient>,aFStackX_8,
               UScriptViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton;
}

// Z_Construct_UClass_UGameplayStatics_NoRegister @ 147c902b0

UClass * __cdecl Z_Construct_UClass_UGameplayStatics_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameplayStatics",
               &Z_Registration_Info_UClass_UGameplayStatics.InnerSingleton,
               UGameplayStatics::StaticRegisterNativesUGameplayStatics,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameplayStatics>,
               InternalVTableHelperCtorCaller<UGameplayStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayStatics.InnerSingleton;
}

// Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister @ 147c90370

UClass * __cdecl Z_Construct_UClass_UGeneratedBlueprintBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GeneratedBlueprintBinding",
               &Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton,
               UGeneratedBlueprintBinding::StaticRegisterNativesUGeneratedBlueprintBinding,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeneratedBlueprintBinding>,
               InternalVTableHelperCtorCaller<UGeneratedBlueprintBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EStandbyType @ 147c90430

UEnum * __cdecl Z_Construct_UEnum_Engine_EStandbyType(void)

{
  if (Z_Registration_Info_UEnum_EStandbyType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStandbyType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStandbyType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStandbyType.InnerSingleton;
}

// CVarSink'' @ 1503efae0

void __cdecl `dynamic_atexit_destructor_for_'FGPUSkinCache::CVarSink__(void)

{
  FGPUSkinCache::CVarSink._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  return;
}

// CreatedDelegate'' @ 1503efb00

void __cdecl `dynamic_atexit_destructor_for_'UGameViewportClient::CreatedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UGameViewportClient::CreatedDelegate._8_8_,UGameViewportClient::CreatedDelegate._16_4_)
  ;
  if (UGameViewportClient::CreatedDelegate._8_8_ != 0) {
    FMemory::Free((void *)UGameViewportClient::CreatedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UGameViewportClient::CreatedDelegate);
  return;
}

// EnabledStats'' @ 1503efb40

void __cdecl `dynamic_atexit_destructor_for_'UGameViewportClient::EnabledStats__(void)

{
  DestructItems<FString,int>
            ((FString *)UGameViewportClient::EnabledStats.AllocatorInstance.Data,
             UGameViewportClient::EnabledStats.ArrayNum);
  if (UGameViewportClient::EnabledStats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UGameViewportClient::EnabledStats.AllocatorInstance.Data);
    return;
  }
  return;
}

// GameModeInitializedEvent'' @ 1503efb80

void __cdecl `dynamic_atexit_destructor_for_'FGameModeEvents::GameModeInitializedEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameModeEvents::GameModeInitializedEvent._8_8_,
             FGameModeEvents::GameModeInitializedEvent._16_4_);
  if (FGameModeEvents::GameModeInitializedEvent._8_8_ != 0) {
    FMemory::Free((void *)FGameModeEvents::GameModeInitializedEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGameModeEvents::GameModeInitializedEvent);
  return;
}

// GameModeLogoutEvent'' @ 1503efbc0

void __cdecl `dynamic_atexit_destructor_for_'FGameModeEvents::GameModeLogoutEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameModeEvents::GameModeLogoutEvent._8_8_,FGameModeEvents::GameModeLogoutEvent._16_4_)
  ;
  if (FGameModeEvents::GameModeLogoutEvent._8_8_ != 0) {
    FMemory::Free((void *)FGameModeEvents::GameModeLogoutEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGameModeEvents::GameModeLogoutEvent);
  return;
}

// GameModeMatchStateSetEvent'' @ 1503efc00

void __cdecl `dynamic_atexit_destructor_for_'FGameModeEvents::GameModeMatchStateSetEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameModeEvents::GameModeMatchStateSetEvent._8_8_,
             FGameModeEvents::GameModeMatchStateSetEvent._16_4_);
  if (FGameModeEvents::GameModeMatchStateSetEvent._8_8_ != 0) {
    FMemory::Free((void *)FGameModeEvents::GameModeMatchStateSetEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGameModeEvents::GameModeMatchStateSetEvent);
  return;
}

// GameModePostLoginEvent'' @ 1503efc40

void __cdecl `dynamic_atexit_destructor_for_'FGameModeEvents::GameModePostLoginEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameModeEvents::GameModePostLoginEvent._8_8_,
             FGameModeEvents::GameModePostLoginEvent._16_4_);
  if (FGameModeEvents::GameModePostLoginEvent._8_8_ != 0) {
    FMemory::Free((void *)FGameModeEvents::GameModePostLoginEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGameModeEvents::GameModePostLoginEvent);
  return;
}

// GameModePreLoginEvent'' @ 1503efc80

void __cdecl `dynamic_atexit_destructor_for_'FGameModeEvents::GameModePreLoginEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FGameModeEvents::GameModePreLoginEvent._8_8_,
             FGameModeEvents::GameModePreLoginEvent._16_4_);
  if (FGameModeEvents::GameModePreLoginEvent._8_8_ != 0) {
    FMemory::Free((void *)FGameModeEvents::GameModePreLoginEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FGameModeEvents::GameModePreLoginEvent);
  return;
}

// OnCreateRenderThreadResources'' @ 1503efcc0

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

// OnDestroyRenderThreadResources'' @ 1503efd00

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

// ScreenshotCapturedDelegate'' @ 1503efd40

void __cdecl `dynamic_atexit_destructor_for_'UGameViewportClient::ScreenshotCapturedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UGameViewportClient::ScreenshotCapturedDelegate._8_8_,
             UGameViewportClient::ScreenshotCapturedDelegate._16_4_);
  if (UGameViewportClient::ScreenshotCapturedDelegate._8_8_ != 0) {
    FMemory::Free((void *)UGameViewportClient::ScreenshotCapturedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UGameViewportClient::ScreenshotCapturedDelegate);
  return;
}

// ShaderTypeRegistration'' @ 1503efd80

void __cdecl `dynamic_atexit_destructor_for_'FGPUSkinCacheCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503efd90

void __cdecl
`dynamic_atexit_destructor_for_'FInitDynamicMeshBoundsCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503efda0

void __cdecl
`dynamic_atexit_destructor_for_'FRecomputeTangentsPerTriangleCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 1503efdb0

void __cdecl
`dynamic_atexit_destructor_for_'FRecomputeTangentsPerVertexCS::ShaderTypeRegistration__(void)

{
  return;
}

// StaticType'' @ 1503efdc0

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

void __cdecl `dynamic_atexit_destructor_for_'FGeometryCacheVertexVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FGeometryCacheVertexVertexFactory::StaticType);
  return;
}

// StaticType'' @ 1503efde0

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

void __cdecl `dynamic_atexit_destructor_for_'FGeometryCollectionVertexFactory::StaticType__(void)

{
  FVertexFactoryType::~FVertexFactoryType(&FGeometryCollectionVertexFactory::StaticType);
  return;
}

// ViewportRenderedDelegate'' @ 1503efe00

void __cdecl `dynamic_atexit_destructor_for_'UGameViewportClient::ViewportRenderedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UGameViewportClient::ViewportRenderedDelegate._8_8_,
             UGameViewportClient::ViewportRenderedDelegate._16_4_);
  if (UGameViewportClient::ViewportRenderedDelegate._8_8_ != 0) {
    FMemory::Free((void *)UGameViewportClient::ViewportRenderedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UGameViewportClient::ViewportRenderedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowGPUSkinCache'' @ 1503efe40

void __cdecl _dynamic_atexit_destructor_for__CVarAllowGPUSkinCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowGPUSkinCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowListenParamSentToClient'' @ 1503efe60

void __cdecl
UE::GameModeBase::Private::_dynamic_atexit_destructor_for__CVarAllowListenParamSentToClient__(void)

{
  CVarAllowListenParamSentToClient._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowListenParamSentToClient);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowPIESeamlessTravel'' @ 1503efe80

void __cdecl
UE::GameModeBase::Private::_dynamic_atexit_destructor_for__CVarAllowPIESeamlessTravel__(void)

{
  CVarAllowPIESeamlessTravel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowPIESeamlessTravel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultGPUSkinCacheBehavior'' @ 1503efea0

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultGPUSkinCacheBehavior__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultGPUSkinCacheBehavior);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableGPUSkinCache'' @ 1503efec0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableGPUSkinCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableGPUSkinCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableGPUSkinCacheShaders'' @ 1503efee0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableGPUSkinCacheShaders__(void)

{
  CVarEnableGPUSkinCacheShaders._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableGPUSkinCacheShaders);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents'' @ 1503eff00

void __cdecl
_dynamic_atexit_destructor_for__CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents__(void)

{
  CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGPUSkinCacheAllowDupedVertesForRecomputeTangents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCacheDebug'' @ 1503eff20

void __cdecl _dynamic_atexit_destructor_for__CVarGPUSkinCacheDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUSkinCacheDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCacheNumDispatchesToCapture'' @ 1503eff40

void __cdecl _dynamic_atexit_destructor_for__CVarGPUSkinCacheNumDispatchesToCapture__(void)

{
  CVarGPUSkinCacheNumDispatchesToCapture._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGPUSkinCacheNumDispatchesToCapture);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCachePrintMemorySummary'' @ 1503eff60

void __cdecl _dynamic_atexit_destructor_for__CVarGPUSkinCachePrintMemorySummary__(void)

{
  CVarGPUSkinCachePrintMemorySummary._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUSkinCachePrintMemorySummary)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCacheRecomputeTangents'' @ 1503eff80

void __cdecl _dynamic_atexit_destructor_for__CVarGPUSkinCacheRecomputeTangents__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUSkinCacheRecomputeTangents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCacheSceneMemoryLimitInMB'' @ 1503effa0

void __cdecl _dynamic_atexit_destructor_for__CVarGPUSkinCacheSceneMemoryLimitInMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGPUSkinCacheSceneMemoryLimitInMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents'' @ 1503effc0

void __cdecl
_dynamic_atexit_destructor_for__CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents__(void)

{
  CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGPUSkinCacheStoreDuplicatedVerticesForRecomputeTangents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUSkinNumTangentIntermediateBuffers'' @ 1503effe0

void __cdecl _dynamic_atexit_destructor_for__CVarGPUSkinNumTangentIntermediateBuffers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGPUSkinNumTangentIntermediateBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxPlayersOverride'' @ 1503f0000

void __cdecl _dynamic_atexit_destructor_for__CVarMaxPlayersOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxPlayersOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecomputeTangentsParallelDispatch'' @ 1503f0020

void __cdecl _dynamic_atexit_destructor_for__CVarRecomputeTangentsParallelDispatch__(void)

{
  CVarRecomputeTangentsParallelDispatch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRecomputeTangentsParallelDispatch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemapDeviceIdForOffsetPlayerGamepadIds'' @ 1503f0040

void __cdecl _dynamic_atexit_destructor_for__CVarRemapDeviceIdForOffsetPlayerGamepadIds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRemapDeviceIdForOffsetPlayerGamepadIds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenshotDelegate'' @ 1503f0060

void __cdecl _dynamic_atexit_destructor_for__CVarScreenshotDelegate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenshotDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenshotTextureArrayIndex'' @ 1503f0080

void __cdecl _dynamic_atexit_destructor_for__CVarScreenshotTextureArrayIndex__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenshotTextureArrayIndex);
  return;
}

// `dynamic_atexit_destructor_for_'CVarScreenshotTextureArrayMode'' @ 1503f00a0

void __cdecl _dynamic_atexit_destructor_for__CVarScreenshotTextureArrayMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarScreenshotTextureArrayMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSecondaryScreenPercentage'' @ 1503f00c0

void __cdecl _dynamic_atexit_destructor_for__CVarSecondaryScreenPercentage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSecondaryScreenPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetBlackBordersEnabled'' @ 1503f00e0

void __cdecl _dynamic_atexit_destructor_for__CVarSetBlackBordersEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSetBlackBordersEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkinCacheAsyncCompute'' @ 1503f0100

void __cdecl _dynamic_atexit_destructor_for__CVarSkinCacheAsyncCompute__(void)

{
  CVarSkinCacheAsyncCompute._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkinCacheAsyncCompute);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkinCacheDynamicMeshBounds'' @ 1503f0120

void __cdecl _dynamic_atexit_destructor_for__CVarSkinCacheDynamicMeshBounds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkinCacheDynamicMeshBounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipCompilingGPUSkinVF'' @ 1503f0140

void __cdecl _dynamic_atexit_destructor_for__CVarSkipCompilingGPUSkinVF__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipCompilingGPUSkinVF);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTransparentViewportClear'' @ 1503f0160

void __cdecl _dynamic_atexit_destructor_for__CVarTransparentViewportClear__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTransparentViewportClear);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GameUserSettings_WindowPositionsMaxSize'' @ 1503f0180

void __cdecl _dynamic_atexit_destructor_for__CVar_GameUserSettings_WindowPositionsMaxSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_GameUserSettings_WindowPositionsMaxSize);
  return;
}

// `dynamic_atexit_destructor_for_'CanvasMap'' @ 1503f01a0

void __cdecl `GetCanvasByName'::__l2::_dynamic_atexit_destructor_for__CanvasMap__(void)

{
  CanvasMap._72_4_ = 0;
  if (CanvasMap._64_8_ != 0) {
    FMemory::Free((void *)CanvasMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UCanvas_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UCanvas_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UCanvas_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CanvasMap);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503f01e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`InternalGetDefaultObject<TResourceArray<UE::Math::TVector<float>,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)&DAT_15520b898)
  ;
  _Default = &___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f0210

void __cdecl
``FGPUSkinCache::DispatchPassExecute'::__l30::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f0217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f0230

void __cdecl
``FGPUSkinCache::DispatchPassExecute'::__l102::<lambda_5>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f0237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f0250

void __cdecl
``FGPUSkinCache::DispatchPassExecute'::__l49::<lambda_3>::
operator()<wchar_t_const_(&)[1],int,int,int,int,FDebugName,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,bool,unsigned_int_&>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f0257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f0270

void __cdecl
``FGPUSkinCache::DispatchUpdateSkinTangentsVertexPass'::__l7::<lambda_1>::
operator()<wchar_t_const_(&)[1],FDebugName,int_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f0277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503f0290

void __cdecl
``FGPUSkinCache::DispatchUpdateSkinTangentsTrianglePass'::__l29::<lambda_1>::
operator()<wchar_t_const_(&)[1],FDebugName,int_const_&,int_&,unsigned_int_&,unsigned_int_&,int,bool_const_&>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503f0297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FGCBoneLooseParametersMetadataRegistration'' @ 1503f02b0

void __cdecl _dynamic_atexit_destructor_for__FGCBoneLooseParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FGeometryCacheManualVertexFetchUniformBufferParametersMetadataRegistration'' @ 1503f02c0

void __cdecl
_dynamic_atexit_destructor_for__FGeometryCacheManualVertexFetchUniformBufferParametersMetadataRegistration__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FGeometryCacheVertexFactoryUniformBufferParametersMetadataRegistration'' @ 1503f02d0

void __cdecl
_dynamic_atexit_destructor_for__FGeometryCacheVertexFactoryUniformBufferParametersMetadataRegistration__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FGeometryCollectionVertexFactoryUniformShaderParametersMetadataRegistration'' @ 1503f02e0

void __cdecl
_dynamic_atexit_destructor_for__FGeometryCollectionVertexFactoryUniformShaderParametersMetadataRegistration__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GCsvLocalPlayers'' @ 1503f02f0

void __cdecl _dynamic_atexit_destructor_for__GCsvLocalPlayers__(void)

{
  GCsvLocalPlayers._72_4_ = 0;
  if (GCsvLocalPlayers._64_8_ != 0) {
    FMemory::Free((void *)GCsvLocalPlayers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FCsvLocalPlayer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FCsvLocalPlayer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FCsvLocalPlayer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GCsvLocalPlayers);
  return;
}

// `dynamic_atexit_destructor_for_'GDefaultGeometryCacheVertexBuffer'' @ 1503f0330

void __cdecl _dynamic_atexit_destructor_for__GDefaultGeometryCacheVertexBuffer__(void)

{
  GDefaultGeometryCacheVertexBuffer._0_8_ =
       &___7__TGlobalResource_VFDefaultGeometryCacheVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GDefaultGeometryCacheVertexBuffer);
  if (GDefaultGeometryCacheVertexBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GDefaultGeometryCacheVertexBuffer._40_8_);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GDefaultGeometryCacheVertexBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GDummyTangentBuffer'' @ 1503f0380

void __cdecl _dynamic_atexit_destructor_for__GDummyTangentBuffer__(void)

{
  GDummyTangentBuffer._0_8_ = &___7__TGlobalResource_VFDummyTangentBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&GDummyTangentBuffer);
  if (GDummyTangentBuffer._40_8_ != 0) {
    FRHIResource::Release((FRHIResource *)GDummyTangentBuffer._40_8_);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&GDummyTangentBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_GPUSkinCache'' @ 1503f03d0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_GPUSkinCache__(void)

{
  GPUStat_GPUSkinCache._104_4_ = 0;
  if (GPUStat_GPUSkinCache._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_GPUSkinCache._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_GPUSkinCache.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GSkelMeshExecHelper'' @ 1503f0410

void __cdecl _dynamic_atexit_destructor_for__GSkelMeshExecHelper__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&GSkelMeshExecHelper);
  return;
}

// `dynamic_atexit_destructor_for_'ListenString'' @ 1503f0430

void __cdecl
`AGameModeBase::ProcessClientTravel'::__l13::_dynamic_atexit_destructor_for__ListenString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ListenString.Data.AllocatorInstance.Data;
  if (ListenString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ListenString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogGameMode'' @ 1503f0450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameMode__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameMode);
  return;
}

// `dynamic_atexit_destructor_for_'LogGameNetworkManager'' @ 1503f0470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameNetworkManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameNetworkManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogGameSession'' @ 1503f0490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameSession__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameSession);
  return;
}

// `dynamic_atexit_destructor_for_'LogGameState'' @ 1503f04b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameState__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameState);
  return;
}

// `dynamic_atexit_destructor_for_'LogGameUserSettings'' @ 1503f04d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameUserSettings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameUserSettings);
  return;
}

// `dynamic_atexit_destructor_for_'LogGeomTools'' @ 1503f04f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGeomTools__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGeomTools);
  return;
}

// `dynamic_atexit_destructor_for_'LogQuadTree'' @ 1503f0510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogQuadTree__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogQuadTree);
  return;
}

// `dynamic_atexit_destructor_for_'LogSkinCache'' @ 1503f0530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkinCache__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkinCache);
  return;
}

// `dynamic_atexit_destructor_for_'PerPlatformCVar'' @ 1503f0550

void __cdecl `IsGPUSkinCacheEnable'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PerPlatformCVar.CVarName.Data.AllocatorInstance.Data;
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PerPlatformCVar'' @ 1503f0570

void __cdecl
`IsGPUSkinCacheInclusive'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PerPlatformCVar.CVarName.Data.AllocatorInstance.Data;
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PerPlatformCVar'' @ 1503f0590

void __cdecl
`ShouldWeCompileGPUSkinVFShaders'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PerPlatformCVar.CVarName.Data.AllocatorInstance.Data;
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PerPlatformCVar.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SplitScreenSwapControllersCommand'' @ 1503f05b0

void __cdecl _dynamic_atexit_destructor_for__SplitScreenSwapControllersCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SplitScreenSwapControllersCommand);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f05d0

void __cdecl
`FGCBoneLooseParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f05f0

void __cdecl
`FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f0610

void __cdecl
`FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f0630

void __cdecl
`FGeometryCollectionVertexFactoryUniformShaderParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f0650

void __cdecl
`FGPUSkinCacheCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGPUSkinCacheCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f0670

void __cdecl
`FInitDynamicMeshBoundsCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FInitDynamicMeshBoundsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f0690

void __cdecl
`FRecomputeTangentsPerTriangleCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRecomputeTangentsPerTriangleCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503f06b0

void __cdecl
`FRecomputeTangentsPerVertexCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRecomputeTangentsPerVertexCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f06d0

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
`FGPUSkinCacheCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f06f0

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
`FInitDynamicMeshBoundsCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f0710

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
`FRecomputeTangentsPerTriangleCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1503f0730

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
`FRecomputeTangentsPerVertexCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__
          (void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

