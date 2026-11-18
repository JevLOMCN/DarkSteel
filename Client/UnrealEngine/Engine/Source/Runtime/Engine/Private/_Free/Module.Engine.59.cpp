// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 498

// OnCreateRenderThreadResources'' @ 141144140

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141144160

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// ShaderTypeRegistration'' @ 141144180

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
`dynamic_initializer_for_'FSparseVolumeTextureUpdateFromSparseBufferCS::ShaderTypeRegistration__
          (void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSparseVolumeTextureUpdateFromSparseBufferCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSparseVolumeTextureUpdateFromSparseBufferCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSparseVolumeTextureUpdateFromSparseBufferCS::
         ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1411441d0

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
`dynamic_initializer_for_'FSparseVolumeTextureUpdatePageTableCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FSparseVolumeTextureUpdatePageTableCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FSparseVolumeTextureUpdatePageTableCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FSparseVolumeTextureUpdatePageTableCS::
         ShaderTypeRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarForceEnableNaniteMeshes'' @ 141144220

void __cdecl _dynamic_initializer_for__CVarForceEnableNaniteMeshes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceEnableNaniteMeshes,L"r.Nanite.ForceEnableMeshes",local_res8,
             L"Force enables all meshes to also build Nanite data, regardless of the enabled flag on the asset."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarForceEnableNaniteMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarNaniteVoxelsUseSourceMeshUVDensity'' @ 141144270

void __cdecl _dynamic_initializer_for__CVarNaniteVoxelsUseSourceMeshUVDensity__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNaniteVoxelsUseSourceMeshUVDensity,L"r.Nanite.Voxels.UseSourceMeshUVDensity",
             local_res8,
             L"Use source mesh data when calculating UV densities for Nanite meshes that simplify into voxels."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarNaniteVoxelsUseSourceMeshUVDensity__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingSplineMeshes'' @ 1411442c0

void __cdecl _dynamic_initializer_for__CVarRayTracingSplineMeshes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingSplineMeshes,L"r.RayTracing.Geometry.SplineMeshes",local_res8,
             L"Include splines meshes in ray tracing effects (default = 1 (spline meshes enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingSplineMeshes__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingSplineMeshesForceUpdate'' @ 141144310

void __cdecl _dynamic_initializer_for__CVarRayTracingSplineMeshesForceUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingSplineMeshesForceUpdate,
             L"r.RayTracing.Geometry.SplineMeshes.ForceUpdate",local_res8,
             L"Forces ray tracing geometry for spline meshes to be updated every frame",0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingSplineMeshesForceUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarSVTEnabled'' @ 141144360

void __cdecl _dynamic_initializer_for__CVarSVTEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTEnabled,L"r.SparseVolumeTexture",&GSVTEnabled,
             L"Whether SparseVolumeTextures are supported at all. Toggles support for streaming and rendering SVTs."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSVTEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarSVTRemoteDDCBehavior'' @ 1411443b0

void __cdecl _dynamic_initializer_for__CVarSVTRemoteDDCBehavior__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTRemoteDDCBehavior,L"r.SparseVolumeTexture.RemoteDDCBehavior",
             &GSVTRemoteDDCBehavior,
             L"Controls how SVTs use remote DDC. 0: The bLocalDDCOnly property controls per-SVT caching behavior, 1: Force local DDC only usage for all SVTs, 2: Force local + remote DDC usage for all SVTs"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSVTRemoteDDCBehavior__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingAsync'' @ 141144400

void __cdecl _dynamic_initializer_for__CVarSVTStreamingAsync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingAsync,L"r.SparseVolumeTexture.Streaming.AsyncThread",
             &GSVTStreamingAsyncThread,
             L"Perform most of the SVT streaming on an asynchronous worker thread instead of the rendering thread."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingAsync__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingAsyncCompute'' @ 141144450

void __cdecl _dynamic_initializer_for__CVarSVTStreamingAsyncCompute__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingAsyncCompute,L"r.SparseVolumeTexture.Streaming.AsyncCompute",
             &GSVTStreamingAsyncCompute,L"Schedule GPU work in async compute queue.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingAsyncCompute__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingBandwidthLimit'' @ 1411444a0

void __cdecl _dynamic_initializer_for__CVarSVTStreamingBandwidthLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingBandwidthLimit,L"r.SparseVolumeTexture.Streaming.BandwidthLimit",
             &GSVTStreamingBandwidthLimit,
             L"Bandwidth limit for SVT streaming in MiB/s. When requests exceed this limit, the system will stream at lower mip levels instead."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingBandwidthLimit__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingDDCChunkSize'' @ 1411444f0

void __cdecl _dynamic_initializer_for__CVarSVTStreamingDDCChunkSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingDDCChunkSize,L"r.SparseVolumeTexture.Streaming.DDCChunkSize",
             &GSVTStreamingDDCChunkSize,
             L"Size of DDC chunks the streaming data is split into (in MiB). A smaller size leads to more requests but can improve streaming performance. Default: 2 MiB"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingDDCChunkSize__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingEmptyPhysicalTileTextures'' @ 141144540

void __cdecl _dynamic_initializer_for__CVarSVTStreamingEmptyPhysicalTileTextures__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingEmptyPhysicalTileTextures,
             L"r.SparseVolumeTexture.Streaming.EmptyPhysicalTileTextures",
             &GSVTStreamingEmptyPhysicalTileTextures,
             L"Streams out all streamable tiles of all physical tile textures.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingEmptyPhysicalTileTextures__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingForceBlockingRequests'' @ 141144590

void __cdecl _dynamic_initializer_for__CVarSVTStreamingForceBlockingRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingForceBlockingRequests,
             L"r.SparseVolumeTexture.Streaming.ForceBlockingRequests",
             &GSVTStreamingForceBlockingRequests,
             L"If enabled, all SVT streaming requests will block on completion, guaranteeing that requested mip levels are available in the same frame they have been requested in (if there is enough memory available to stream them in)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingForceBlockingRequests__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingForceEstimateFrameRate'' @ 1411445e0

void __cdecl _dynamic_initializer_for__CVarSVTStreamingForceEstimateFrameRate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingForceEstimateFrameRate,
             L"r.SparseVolumeTexture.Streaming.ForceEstimateFrameRate",
             &GSVTStreamingForceEstimateFrameRate,
             L"Forces the streaming system to always estimate the SVT playback frame rate instead of using the explicit frame rate that is passed in with the streaming requests. Intended for debugging."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingForceEstimateFrameRate__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingInstanceCleanupThreshold'' @ 141144630

void __cdecl _dynamic_initializer_for__CVarSVTStreamingInstanceCleanupThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingInstanceCleanupThreshold,
             L"r.SparseVolumeTexture.Streaming.InstanceCleanupThreshold",
             &GSVTStreamingInstanceCleanupThreshold,
             L"Number of SVT streaming system updates to wait until unused streaming instances are cleaned up. A streaming instance is an internal book keeping object to track playback of a SVT asset in a given context. Default: 5"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingInstanceCleanupThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingInstanceWindowSize'' @ 141144680

void __cdecl _dynamic_initializer_for__CVarSVTStreamingInstanceWindowSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingInstanceWindowSize,
             L"r.SparseVolumeTexture.Streaming.InstanceWindowSize",&GSVTStreamingInstanceWindowSize,
             L"Window size in SVT frames around which requests to a SVT are considered to belong to the same instance. A streaming instance is an internal book keeping object to track playback of a SVT asset in a given context. Default: 5.0"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingInstanceWindowSize__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingLogVerbosity'' @ 1411446d0

void __cdecl _dynamic_initializer_for__CVarSVTStreamingLogVerbosity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingLogVerbosity,L"r.SparseVolumeTexture.Streaming.LogVerbosity",
             &GSVTStreamingLogVerbosity,
             L"0: no logging, 1: basic logging, 2: additional logging (might spam the log) 3: log everything (will spam the log)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingLogVerbosity__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingMaxPendingRequests'' @ 141144720

void __cdecl _dynamic_initializer_for__CVarSVTStreamingMaxPendingRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingMaxPendingRequests,
             L"r.SparseVolumeTexture.Streaming.MaxPendingRequests",&GSVTStreamingMaxPendingRequests,
             L"Maximum number of IO requests that can be pending for installation.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingMaxPendingRequests__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingPrintMemoryStats'' @ 141144770

void __cdecl _dynamic_initializer_for__CVarSVTStreamingPrintMemoryStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingPrintMemoryStats,L"r.SparseVolumeTexture.Streaming.PrintMemoryStats",
             &GSVTStreamingPrintMemoryStats,
             L"Prints memory sizes of all frames of all SVTs registered with the streaming system.",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingPrintMemoryStats__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingRequestMipBias'' @ 1411447c0

void __cdecl _dynamic_initializer_for__CVarSVTStreamingRequestMipBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingRequestMipBias,L"r.SparseVolumeTexture.Streaming.RequestMipBias",
             &GSVTStreamingRequestMipBias,
             L"Bias to apply the calculated mip level to stream at. This is used to account for the mip estimation based on projected screen space size being very conservative. The default value of 1.0 was found empirically to roughly result in a 1:1 voxel to pixel ratio."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingRequestMipBias__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingRequestSize'' @ 141144810

void __cdecl _dynamic_initializer_for__CVarSVTStreamingRequestSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingRequestSize,L"r.SparseVolumeTexture.Streaming.RequestSize",
             &GSVTStreamingRequestSize,
             L"IO request size in KiB. The SVT streaming manager will attempt to create IO requests of roughly this size. Default: -1 (unlimited)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingRequestSize__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingRequestSizeGranularity'' @ 141144860

void __cdecl _dynamic_initializer_for__CVarSVTStreamingRequestSizeGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingRequestSizeGranularity,
             L"r.SparseVolumeTexture.Streaming.RequestSizeGranularity",
             &GSVTStreamingRequestSizeGranularity,
             L"Rounds up calculated streaming request sizes to a multiple of this value (in bytes). This avoids performance issues where the system might issue multiple very small requests."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingRequestSizeGranularity__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingReservedResources'' @ 1411448b0

void __cdecl _dynamic_initializer_for__CVarSVTStreamingReservedResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingReservedResources,
             L"r.SparseVolumeTexture.Streaming.UseReservedResources",&GSVTStreamingReservedResources
             ,
             L"Allocate the SVT tile data texture (streaming pool) as a reserved/virtual texture, backed by N small physical memory allocations to reduce fragmentation. This lifts the 2GB resource size limit and also allows for better GPU memory management when allocating the texture."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingReservedResources__);
  return;
}

// `dynamic_initializer_for_'CVarSVTStreamingReservedResourcesMemoryLimit'' @ 141144900

void __cdecl _dynamic_initializer_for__CVarSVTStreamingReservedResourcesMemoryLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSVTStreamingReservedResourcesMemoryLimit,
             L"r.SparseVolumeTexture.Streaming.ReservedResourcesMemoryLimit",
             &GSVTStreamingReservedResourcesMemoryLimit,
             L"Memory limit in MiB on the maximum size of the streaming pool textures when using reserved resources. Without this limit it is theoretically possible to allocate enormous amounts of memory. Set to -1 to disable the limit. Default: -1"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSVTStreamingReservedResourcesMemoryLimit__);
  return;
}

// `dynamic_initializer_for_'CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable'' @ 141144950

void __cdecl _dynamic_initializer_for__CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable,
             L"au.SoundWaveProxyReader.SimulateSeek",&GSoundWaveProxyReaderSimulateSeekOnNonSeekable
             ,
             L"If true, SoundWaves which are not of a seekable format will simulate seek calls by reading and discarding samples.\n0: Do not simulate seek, !0: Simulate seek"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable__);
  return;
}

// `dynamic_initializer_for_'CVarSplineMeshFitToSourceMeshBounds'' @ 1411449a0

void __cdecl _dynamic_initializer_for__CVarSplineMeshFitToSourceMeshBounds__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarSplineMeshFitToSourceMeshBounds,L"r.SplineMesh.FitToSourceMeshBounds",local_res8,
             L"When true, will use the bounds of the LOD 0 source mesh to fit the mesh to the spline, as opposed to the collective mesh bounds of all LODs. This prevents gaps that might occur due bounds being expanded by lower LODs or bounds extensions."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSplineMeshFitToSourceMeshBounds__);
  return;
}

// `dynamic_initializer_for_'CVarStaticMeshDefaultMeshPaintTextureSupport'' @ 1411449f0

void __cdecl _dynamic_initializer_for__CVarStaticMeshDefaultMeshPaintTextureSupport__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStaticMeshDefaultMeshPaintTextureSupport,
             L"r.StaticMesh.DefaultMeshPaintTextureSupport",local_res8,
             L"Default setting for whether static mesh assets support mesh paint textures.",0);
  atexit(_dynamic_atexit_destructor_for__CVarStaticMeshDefaultMeshPaintTextureSupport__);
  return;
}

// `dynamic_initializer_for_'CVarStaticMeshKeepMobileMinLODSettingOnDesktop'' @ 141144a40

void __cdecl _dynamic_initializer_for__CVarStaticMeshKeepMobileMinLODSettingOnDesktop__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStaticMeshKeepMobileMinLODSettingOnDesktop,
             L"r.StaticMesh.KeepMobileMinLODSettingOnDesktop",local_res8,
             L"If non-zero, mobile setting for MinLOD will be stored in the cooked data for desktop platforms"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStaticMeshKeepMobileMinLODSettingOnDesktop__);
  return;
}

// `dynamic_initializer_for_'CVarStaticMeshMinLodQualityLevel'' @ 141144a90

void __cdecl _dynamic_initializer_for__CVarStaticMeshMinLodQualityLevel__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UStaticMesh::OnLodStrippingQualityLevelChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStaticMeshMinLodQualityLevel,GMinLodQualityLevelCVarName,&GMinLodQualityLevel,
             L"The quality level for the Min stripping LOD. \n",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x40
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
  atexit(_dynamic_atexit_destructor_for__CVarStaticMeshMinLodQualityLevel__);
  return;
}

// `dynamic_initializer_for_'CVarStaticMeshRayTracingProxies'' @ 141144be0

void __cdecl _dynamic_initializer_for__CVarStaticMeshRayTracingProxies__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStaticMeshRayTracingProxies,L"r.StaticMesh.RayTracingProxies",local_res8,
             L"Whether to use dedicated ray tracing LODs.",4);
  atexit(_dynamic_atexit_destructor_for__CVarStaticMeshRayTracingProxies__);
  return;
}

// `dynamic_initializer_for_'CVarStripDistanceFieldDataDuringLoad'' @ 141144c30

void __cdecl _dynamic_initializer_for__CVarStripDistanceFieldDataDuringLoad__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStripDistanceFieldDataDuringLoad,L"r.StaticMesh.StripDistanceFieldDataDuringLoad",
             local_res8,
             L"If non-zero, data for distance fields will be discarded on load. TODO: change to discard during cook!."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarStripDistanceFieldDataDuringLoad__);
  return;
}

// `dynamic_initializer_for_'CVarStripMinLodDataDuringCooking'' @ 141144c80

void __cdecl _dynamic_initializer_for__CVarStripMinLodDataDuringCooking__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStripMinLodDataDuringCooking,L"r.StaticMesh.StripMinLodDataDuringCooking",
             local_res8,
             L"If non-zero, data for Static Mesh LOD levels below MinLOD will be discarded at cook time"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStripMinLodDataDuringCooking__);
  return;
}

// `dynamic_initializer_for_'CVarSupportDepthOnlyIndexBuffers'' @ 141144cd0

void __cdecl _dynamic_initializer_for__CVarSupportDepthOnlyIndexBuffers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSupportDepthOnlyIndexBuffers,L"r.SupportDepthOnlyIndexBuffers",local_res8,
             L"Enables depth-only index buffers. Saves a little time at the expense of doubling the size of index buffers."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSupportDepthOnlyIndexBuffers__);
  return;
}

// `dynamic_initializer_for_'CVarSupportReversedIndexBuffers'' @ 141144d20

void __cdecl _dynamic_initializer_for__CVarSupportReversedIndexBuffers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSupportReversedIndexBuffers,L"r.SupportReversedIndexBuffers",local_res8,
             L"Enables reversed index buffers. Saves a little time at the expense of doubling the size of index buffers."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarSupportReversedIndexBuffers__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper263'' @ 141144d70

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper263__(void)

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
            (&DelayedAutoRegisterHelper263,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'FSpeedTreeUniformParametersMetadataRegistration'' @ 141144dd0

void __cdecl _dynamic_initializer_for__FSpeedTreeUniformParametersMetadataRegistration__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FShaderParametersMetadataRegistration *local_18 [2];
  
  pTVar5 = FShaderParametersMetadataRegistration::GetInstances();
  local_18[0] = &FSpeedTreeUniformParametersMetadataRegistration;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FShaderParametersMetadataRegistration **)
   ((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  atexit(_dynamic_atexit_destructor_for__FSpeedTreeUniformParametersMetadataRegistration__);
  return;
}

// `dynamic_initializer_for_'GPUStat_SVTStreaming'' @ 141144ea0

void __cdecl _dynamic_initializer_for__GPUStat_SVTStreaming__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_SVTStreaming__);
  return;
}

// `dynamic_initializer_for_'GStreamingManager'' @ 141144ec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl UE::SVT::_dynamic_initializer_for__GStreamingManager__(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListBase *pFVar3;
  
  FStreamingManager::FStreamingManager((FStreamingManager *)&GStreamingManager);
  GStreamingManager._0_8_ =
       &TGlobalResource<UE::SVT::FStreamingManager,1>::_vftable__for__FRenderResource__;
  GStreamingManager._32_8_ =
       &TGlobalResource<UE::SVT::FStreamingManager,1>::_vftable__for__UE__SVT__IStreamingManager__;
  if (GStreamingManager._24_4_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GStreamingManager._29_1_ = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(GStreamingManager._0_8_ + 0x18);
    pFVar3 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(&GStreamingManager,pFVar3);
    atexit(_dynamic_atexit_destructor_for__GStreamingManager__);
    return;
  }
  BeginInitResource((FRenderResource *)&GStreamingManager,(FRenderCommandPipe *)0x0);
  atexit(_dynamic_atexit_destructor_for__GStreamingManager__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_StaticMesh_Serialize'' @ 141144f90

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_StaticMesh_Serialize__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_StaticMesh_Serialize,L"StaticMesh_Serialize",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogSparseVolumeTexture'' @ 141144fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSparseVolumeTexture__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSparseVolumeTexture,L"LogSparseVolumeTexture",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSparseVolumeTexture__);
  return;
}

// `dynamic_initializer_for_'LogSparseVolumeTextureData'' @ 141145020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSparseVolumeTextureData__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSparseVolumeTextureData,L"LogSparseVolumeTextureData",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSparseVolumeTextureData__);
  return;
}

// `dynamic_initializer_for_'LogSparseVolumeTextureStreamingManager'' @ 141145060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSparseVolumeTextureStreamingManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSparseVolumeTextureStreamingManager,
             L"LogSparseVolumeTextureStreamingManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSparseVolumeTextureStreamingManager__);
  return;
}

// `dynamic_initializer_for_'LogStaticMesh'' @ 1411450a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStaticMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogStaticMesh,L"LogStaticMesh",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStaticMesh__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResourceVertexColorMemory'' @ 1411450e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ResourceVertexColorMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResourceVertexColorMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ResourceVertexColorMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResourceVertexColorMemory,*pFVar1,
               L"StaticMesh VxColor Resource Mem","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
               L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SVTCPUMemoryTotal'' @ 141145170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SVTCPUMemoryTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SVTCPUMemoryTotal == (FThreadSafeStaticStat<FStat_STAT_SVTCPUMemoryTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SVTCPUMemoryTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTCPUMemoryTotal,*pFVar1,
               L"Total CPU Memory","STATGROUP_SparseVolumeTextureMemory","STATCAT_Advanced",
               L"SparseVolumeTexture Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SVTGPUMemoryTotal'' @ 141145200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SVTGPUMemoryTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SVTGPUMemoryTotal == (FThreadSafeStaticStat<FStat_STAT_SVTGPUMemoryTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SVTGPUMemoryTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTGPUMemoryTotal,*pFVar1,
               L"Total GPU Memory","STATGROUP_SparseVolumeTextureMemory","STATCAT_Advanced",
               L"SparseVolumeTexture Memory",true,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SVTPageTableMemory'' @ 141145290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SVTPageTableMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SVTPageTableMemory == (FThreadSafeStaticStat<FStat_STAT_SVTPageTableMemory>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SVTPageTableMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTPageTableMemory,*pFVar1,
               L"PageTable GPU Memory","STATGROUP_SparseVolumeTextureMemory","STATCAT_Advanced",
               L"SparseVolumeTexture Memory",true,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SVTTileDataMemory'' @ 141145320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SVTTileDataMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SVTTileDataMemory == (FThreadSafeStaticStat<FStat_STAT_SVTTileDataMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SVTTileDataMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SVTTileDataMemory,*pFVar1,
               L"TileData GPU Memory","STATGROUP_SparseVolumeTextureMemory","STATCAT_Advanced",
               L"SparseVolumeTexture Memory",true,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMeshIndexMemory'' @ 1411453b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMeshIndexMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMeshIndexMemory ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMeshIndexMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshIndexMemory,*pFVar1,
               L"StaticMesh Index Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
               L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMeshTotalMemory2'' @ 141145440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMeshTotalMemory2__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMeshTotalMemory2 ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory2>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMeshTotalMemory2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTotalMemory2,*pFVar1,
               L"StaticMesh Total Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
               L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMeshTotalMemory'' @ 1411454d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMeshTotalMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMeshTotalMemory ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMeshTotalMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMeshTotalMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTotalMemory,*pFVar1,
               L"StaticMesh Total Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false
               ,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMeshVertexMemory'' @ 141145560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMeshVertexMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMeshVertexMemory ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMeshVertexMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshVertexMemory,*pFVar1,
               L"StaticMesh Vertex Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
               L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMesh_RenderData'' @ 1411455f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMesh_RenderData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMesh_RenderData ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMesh_RenderData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMesh_RenderData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_RenderData,*pFVar1,
               L"UStaticMesh_RenderDataLoad","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMesh_RenderDataFixup'' @ 141145680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMesh_RenderDataFixup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMesh_RenderDataFixup ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMesh_RenderDataFixup>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMesh_RenderDataFixup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_RenderDataFixup,*pFVar1,
               L"UStaticMesh_RenderDataFixup","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMesh_SerializeFull'' @ 141145710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMesh_SerializeFull__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMesh_SerializeFull ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMesh_SerializeFull>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMesh_SerializeFull");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_SerializeFull,*pFVar1,
               L"UStaticMesh::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
               false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StaticMesh_SerializeParent'' @ 1411457a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StaticMesh_SerializeParent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StaticMesh_SerializeParent ==
      (FThreadSafeStaticStat<FStat_STAT_StaticMesh_SerializeParent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StaticMesh_SerializeParent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMesh_SerializeParent,*pFVar1,
               L"UStaticMesh_SerializeParent","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h__Script_Engine_385612370'' @ 141145830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h__Script_Engine_385612370__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h__Script_Engine_3483043695'' @ 141145870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h__Script_Engine_3483043695__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshComponentDescriptor_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h__Script_Engine_616194750'' @ 1411458b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h__Script_Engine_616194750__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h__Script_Engine_3726026615'' @ 1411458f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h__Script_Engine_3726026615__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h__Script_Engine_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h__Script_Engine_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h__Script_Engine_1948276717'' @ 141145940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h__Script_Engine_1948276717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h__Script_Engine_3210544540'' @ 141145980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h__Script_Engine_3210544540__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h__Script_Engine_3273173018'' @ 1411459c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h__Script_Engine_3273173018__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveProcedural_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h__Script_Engine_2025013796'' @ 141145a00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h__Script_Engine_2025013796__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h__Script_Engine_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_ASpotLight @ 1486fc380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASpotLight(void)

{
  if (Z_Registration_Info_UClass_ASpotLight.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASpotLight.OuterSingleton,
               &Z_Construct_UClass_ASpotLight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASpotLight.OuterSingleton;
}

// Z_Construct_UFunction_ASpotLight_SetInnerConeAngle @ 1486fc3c0

UFunction * __cdecl Z_Construct_UFunction_ASpotLight_SetInnerConeAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASpotLight_SetOuterConeAngle @ 1486fc400

UFunction * __cdecl Z_Construct_UFunction_ASpotLight_SetOuterConeAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1486fc440

void * __cdecl Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSplineMeshComponentDescriptor,&UE::CoreUObject::Private::Construct<FSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::Copy<FSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FSplineMeshComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1486fc4b0

void * __cdecl
Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoftSplineMeshComponentDescriptor,&UE::CoreUObject::Private::Construct<FSoftSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FSoftSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::Destruct<FSoftSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::Copy<FSoftSplineMeshComponentDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FSoftSplineMeshComponentDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UStaticMesh @ 1486fc860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStaticMesh(void)

{
  if (Z_Registration_Info_UClass_UStaticMesh.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStaticMesh.OuterSingleton,
               &Z_Construct_UClass_UStaticMesh_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStaticMesh.OuterSingleton;
}

// Z_Construct_UClass_UAnimatedSparseVolumeTexture @ 1486fc8a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimatedSparseVolumeTexture(void)

{
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton,
               &Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton;
}

// Z_Construct_UClass_UAnimatedSparseVolumeTextureController @ 1486fc8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimatedSparseVolumeTextureController(void)

{
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.OuterSingleton,
               &Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EOptimizationType @ 1486fc920

UEnum * __cdecl Z_Construct_UEnum_Engine_EOptimizationType(void)

{
  if (Z_Registration_Info_UEnum_EOptimizationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOptimizationType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EOptimizationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOptimizationType.InnerSingleton;
}

// Z_Construct_UClass_USparseVolumeTexture @ 1486fc960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USparseVolumeTexture(void)

{
  if (Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton,
               &Z_Construct_UClass_USparseVolumeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EStaticMeshPaintSupport @ 1486fc9a0

UEnum * __cdecl Z_Construct_UEnum_Engine_EStaticMeshPaintSupport(void)

{
  if (Z_Registration_Info_UEnum_EStaticMeshPaintSupport.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStaticMeshPaintSupport.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStaticMeshPaintSupport_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStaticMeshPaintSupport.InnerSingleton;
}

// Z_Construct_UClass_USparseVolumeTextureFrame @ 1486fc9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USparseVolumeTextureFrame(void)

{
  if (Z_Registration_Info_UClass_USparseVolumeTextureFrame.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USparseVolumeTextureFrame.OuterSingleton,
               &Z_Construct_UClass_USparseVolumeTextureFrame_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USparseVolumeTextureFrame.OuterSingleton;
}

// Z_Construct_UClass_UStaticSparseVolumeTexture @ 1486fca20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStaticSparseVolumeTexture(void)

{
  if (Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton,
               &Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton;
}

// Z_Construct_UClass_UStreamableSparseVolumeTexture @ 1486fca60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamableSparseVolumeTexture(void)

{
  if (Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.OuterSingleton,
               &Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMeshSectionInfo @ 1486fcaa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshSectionInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshSectionInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshSectionInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshSectionInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeshSectionInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStaticMaterial @ 1486fcb20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStaticMaterial(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStaticMaterial.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStaticMaterial.InnerSingleton,
               &Z_Construct_UScriptStruct_FStaticMaterial_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStaticMaterial.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStaticMaterial.InnerSingleton;
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

// ENormalMode_StaticEnum @ 1486fcba0

UEnum * __cdecl ENormalMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENormalMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENormalMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENormalMode,(UObject *)pUVar1,L"ENormalMode");
  }
  return Z_Registration_Info_UEnum_ENormalMode.OuterSingleton;
}

// Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform @ 1486fcbe0

UFunction * __cdecl Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EImportanceLevel_StaticEnum @ 1486fcc20

UEnum * __cdecl EImportanceLevel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceLevel,(UObject *)pUVar1,
                       L"EImportanceLevel");
  }
  return Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton;
}

// Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames @ 1486fcc60

UFunction * __cdecl Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EOptimizationType_StaticEnum @ 1486fcca0

UEnum * __cdecl EOptimizationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOptimizationType,(UObject *)pUVar1,
                       L"EOptimizationType");
  }
  return Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton;
}

// Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels @ 1486fcce0

UFunction * __cdecl Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USoundWaveProcedural @ 1486fcd20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundWaveProcedural(void)

{
  if (Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton,
               &Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundWaveProcedural.OuterSingleton;
}

// NewProp_bRecalcNormals_SetBit @ 1486fcd60

void __cdecl
Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_USparseVolumeTexture_GetSizeX @ 1486fcd70

UFunction * __cdecl Z_Construct_UFunction_USparseVolumeTexture_GetSizeX(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1486fce70

void * __cdecl Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStaticMeshOptimizationSettings,&UE::CoreUObject::Private::Construct<FStaticMeshOptimizationSettings>,&UE::CoreUObject::Private::ConstructForTests<FStaticMeshOptimizationSettings>,&UE::CoreUObject::Private::Destruct<FStaticMeshOptimizationSettings>,&UE::CoreUObject::Private::Copy<FStaticMeshOptimizationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USparseVolumeTexture_GetSizeY @ 1486fced0

UFunction * __cdecl Z_Construct_UFunction_USparseVolumeTexture_GetSizeY(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ @ 1486fd260

UFunction * __cdecl Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableCollision_SetBit @ 1486fd2d0

void __cdecl
Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bCastShadow_SetBit @ 1486fd2e0

void __cdecl
Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bVisibleInRayTracing_SetBit @ 1486fd2f0

void __cdecl
Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewProp_bAffectDistanceFieldLighting_SetBit @ 1486fd300

void __cdecl
Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}

// NewProp_bForceOpaque_SetBit @ 1486fd310

void __cdecl
Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 1486fd320

void * __cdecl Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshSectionInfo,&UE::CoreUObject::Private::Construct<FMeshSectionInfo>,&UE::CoreUObject::Private::ConstructForTests<FMeshSectionInfo>,&UE::CoreUObject::Private::Destruct<FMeshSectionInfo>,&UE::CoreUObject::Private::Copy<FMeshSectionInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1486fd420

void * __cdecl Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeshSectionInfoMap,&UE::CoreUObject::Private::Construct<FMeshSectionInfoMap>,&UE::CoreUObject::Private::ConstructForTests<FMeshSectionInfoMap>,&UE::CoreUObject::Private::Destruct<FMeshSectionInfoMap>,&UE::CoreUObject::Private::Copy<FMeshSectionInfoMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSet_SetBit @ 1486fd460

void __cdecl
Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 1486fd470

void * __cdecl Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetEditorOrbitCameraPosition,&UE::CoreUObject::Private::Construct<FAssetEditorOrbitCameraPosition>,&UE::CoreUObject::Private::ConstructForTests<FAssetEditorOrbitCameraPosition>,&UE::CoreUObject::Private::Destruct<FAssetEditorOrbitCameraPosition>,&UE::CoreUObject::Private::Copy<FAssetEditorOrbitCameraPosition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1487014d0

void * __cdecl Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStaticMaterial,&UE::CoreUObject::Private::Construct<FStaticMaterial>,&UE::CoreUObject::Private::ConstructForTests<FStaticMaterial>,&UE::CoreUObject::Private::Destruct<FStaticMaterial>,&UE::CoreUObject::Private::Copy<FStaticMaterial>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148701510

void * __cdecl Z_Construct_UScriptStruct_FStaticMaterialMinimalInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStaticMaterialMinimalInfo,&UE::CoreUObject::Private::Construct<FStaticMaterialMinimalInfo>,&UE::CoreUObject::Private::ConstructForTests<FStaticMaterialMinimalInfo>,&UE::CoreUObject::Private::Destruct<FStaticMaterialMinimalInfo>,&UE::CoreUObject::Private::Copy<FStaticMaterialMinimalInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLocalDDCOnly_SetBit @ 148701550

void __cdecl
Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_bLocalDDCOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x73) = 1;
  return;
}

// NewStructOps @ 148701560

void * __cdecl Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMaterialRemapIndex,&UE::CoreUObject::Private::Construct<FMaterialRemapIndex>,&UE::CoreUObject::Private::ConstructForTests<FMaterialRemapIndex>,&UE::CoreUObject::Private::Destruct<FMaterialRemapIndex>,&UE::CoreUObject::Private::Copy<FMaterialRemapIndex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EStaticMeshPaintSupport_StaticEnum @ 1487015a0

UEnum * __cdecl EStaticMeshPaintSupport_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStaticMeshPaintSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStaticMeshPaintSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshPaintSupport,(UObject *)pUVar1,
                       L"EStaticMeshPaintSupport");
  }
  return Z_Registration_Info_UEnum_EStaticMeshPaintSupport.OuterSingleton;
}

// Z_Construct_UFunction_UStaticMesh_AddMaterial @ 1487015e0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_AddMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_AddSocket @ 148701620

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_AddSocket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame @ 1487017a0

UFunction * __cdecl
Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ASplineMeshActor @ 1487017e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASplineMeshActor(void)

{
  if (Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton,
               &Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation @ 148701820

UFunction * __cdecl
Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration @ 148701860

UFunction * __cdecl Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex @ 1487018a0

UFunction * __cdecl
Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex @ 1487018e0

UFunction * __cdecl
Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause @ 148701920

UFunction * __cdecl Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play @ 148701960

UFunction * __cdecl Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop @ 1487019a0

UFunction * __cdecl Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bBuildSimpleCollision_SetBit @ 148701a20

void __cdecl
Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::
NewProp_bBuildSimpleCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bFastBuild_SetBit @ 148701a30

void __cdecl
Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bFastBuild_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update @ 148701a40

UFunction * __cdecl Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions @ 148701a80

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsPlaying_SetBit @ 148701ac0

void __cdecl
Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bIsPlaying_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bBlockingStreamingRequests_SetBit @ 148701ad0

void __cdecl
Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::
NewProp_bBlockingStreamingRequests_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription @ 148701b20

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_FindSocket @ 148701ba0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_FindSocket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetBoundingBox @ 148701be0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetBounds @ 148701c20

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetMaterial @ 148701c60

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetMaterialIndex @ 148701d60

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMaterialIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform @ 148701da0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms @ 148701de0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel @ 148701e20

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels @ 148701e60

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `vector_deleting_destructor'`adjustor{32}' @ 148701fdc

/* [thunk]:public: virtual void * __ptr64 __cdecl TGlobalResource<class
   UE::SVT::FStreamingManager,1>::`vector deleting destructor'`adjustor{32}' (unsigned int) __ptr64
    */

void * __thiscall
TGlobalResource<UE::SVT::FStreamingManager,1>::_vector_deleting_destructor__adjustor_32__
          (TGlobalResource<UE::SVT::FStreamingManager,1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TGlobalResource<UE::SVT::FStreamingManager,1> *)&this[-1].field_0x2a0,param_1
                     );
  return pvVar1;
}

// Z_Construct_UClass_UStaticMesh_NoRegister @ 148702120

UClass * __cdecl Z_Construct_UClass_UStaticMesh_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMesh",
               &Z_Registration_Info_UClass_UStaticMesh.InnerSingleton,
               UStaticMesh::StaticRegisterNativesUStaticMesh,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMesh>,
               InternalVTableHelperCtorCaller<UStaticMesh>,local_res8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMesh.InnerSingleton;
}

// Z_Construct_UClass_USparseVolumeTexture_NoRegister @ 148702230

UClass * __cdecl Z_Construct_UClass_USparseVolumeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTexture",
               &Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton,
               USparseVolumeTexture::StaticRegisterNativesUSparseVolumeTexture,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USparseVolumeTexture>,
               InternalVTableHelperCtorCaller<USparseVolumeTexture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton;
}

// Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister @ 1487022e0

UClass * __cdecl Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTextureFrame",
               &Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton,
               USparseVolumeTextureFrame::StaticRegisterNativesUSparseVolumeTextureFrame,0x1d0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USparseVolumeTextureFrame>,
               InternalVTableHelperCtorCaller<USparseVolumeTextureFrame>,local_res8,
               USparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton;
}

// `scalar_deleting_destructor' @ 148702460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TGlobalResource<UE::SVT::FStreamingManager,1>::_scalar_deleting_destructor_
          (TGlobalResource<UE::SVT::FStreamingManager,1> *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__FRenderResource__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__UE__SVT__IStreamingManager__;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  UE::SVT::FStreamingManager::~FStreamingManager((FStreamingManager *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels @ 148702920

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetNumLODs @ 148702960

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetNumLODs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetNumSections @ 1487029a0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetNumSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetNumTriangles @ 148702aa0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetNumTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetNumVertices @ 148702ae0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetNumVertices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_GetNumVertices_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ASpectatorPawn @ 148702be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASpectatorPawn(void)

{
  if (Z_Registration_Info_UClass_ASpectatorPawn.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASpectatorPawn.OuterSingleton,
               &Z_Construct_UClass_ASpectatorPawn_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASpectatorPawn.OuterSingleton;
}

// Z_Construct_UClass_USpectatorPawnMovement @ 148702c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USpectatorPawnMovement(void)

{
  if (Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton,
               &Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton;
}

// NewProp_bIgnoreTimeDilation_SetBit @ 148702c60

void __cdecl
Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1a8) = *(uint *)((longlong)param_1 + 0x1a8) | 1;
  return;
}

// Z_Construct_UFunction_UStaticMesh_GetSocketsByTag @ 148702c70

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetSocketsByTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetStaticMaterials @ 148702cf0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetStaticMaterials(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription @ 148702db0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_RemoveSocket @ 148702ef0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_RemoveSocket(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform @ 148702f30

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms @ 1487030f0

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase @ 1487031e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptorBase.InnerSingleton;
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

// Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels @ 148703260

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCastShadow_SetBit @ 1487032a0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 1;
  return;
}

// NewProp_bEmissiveLightSource_SetBit @ 1487032b0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bEmissiveLightSource_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 2;
  return;
}

// NewProp_bCastDynamicShadow_SetBit @ 1487032c0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bCastDynamicShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 4;
  return;
}

// NewProp_bCastStaticShadow_SetBit @ 1487032d0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bCastStaticShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 8;
  return;
}

// NewProp_bCastContactShadow_SetBit @ 1487032e0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bCastContactShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 0x10;
  return;
}

// NewProp_bCastShadowAsTwoSided_SetBit @ 1487032f0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bCastShadowAsTwoSided_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 0x20;
  return;
}

// NewProp_bCastHiddenShadow_SetBit @ 148703300

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bCastHiddenShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 0x40;
  return;
}

// NewProp_bAffectDynamicIndirectLighting_SetBit @ 148703310

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bAffectDynamicIndirectLighting_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 0x80;
  return;
}

// NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit @ 148703320

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 1;
  return;
}

// NewProp_bAffectDistanceFieldLighting_SetBit @ 148703330

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bAffectDistanceFieldLighting_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 2;
  return;
}

// Z_Construct_UFunction_UStaticMesh_SetStaticMaterials @ 148703340

UFunction * __cdecl Z_Construct_UFunction_UStaticMesh_SetStaticMaterials(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bReceivesDecals_SetBit @ 148703380

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 4;
  return;
}

// NewProp_bOverrideLightMapRes_SetBit @ 148703390

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bOverrideLightMapRes_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 8;
  return;
}

// NewProp_bUseAsOccluder_SetBit @ 1487033a0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 0x10;
  return;
}

// NewProp_bEnableDiscardOnLoad_SetBit @ 1487033b0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bEnableDiscardOnLoad_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 0x20;
  return;
}

// NewProp_bRenderCustomDepth_SetBit @ 1487033c0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bRenderCustomDepth_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 0x40;
  return;
}

// NewProp_bVisibleInRayTracing_SetBit @ 1487033d0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bVisibleInRayTracing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c9) = *(byte *)((longlong)param_1 + 0x1c9) | 0x80;
  return;
}

// NewProp_bHiddenInGame_SetBit @ 1487033e0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 1;
  return;
}

// NewProp_bIsEditorOnly_SetBit @ 1487033f0

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 2;
  return;
}

// NewProp_bVisible_SetBit @ 148703400

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bVisible_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 4;
  return;
}

// NewProp_bEvaluateWorldPositionOffset_SetBit @ 148703410

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bEvaluateWorldPositionOffset_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 8;
  return;
}

// NewProp_bReverseCulling_SetBit @ 148703420

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 0x10;
  return;
}

// NewProp_bUseDefaultCollision_SetBit @ 148703430

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bUseDefaultCollision_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 0x20;
  return;
}

// NewProp_bGenerateOverlapEvents_SetBit @ 148703440

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bGenerateOverlapEvents_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 0x40;
  return;
}

// NewProp_bOverrideNavigationExport_SetBit @ 148703450

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bOverrideNavigationExport_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1ca) = *(byte *)((longlong)param_1 + 0x1ca) | 0x80;
  return;
}

// NewProp_bForceNavigationObstacle_SetBit @ 148703460

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bForceNavigationObstacle_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1cb) = *(byte *)((longlong)param_1 + 0x1cb) | 1;
  return;
}

// NewProp_bFillCollisionUnderneathForNavmesh_SetBit @ 148703470

void __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::
NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1cb) = *(byte *)((longlong)param_1 + 0x1cb) | 2;
  return;
}

// NewProp_bGenerateMeshDistanceField_SetBit @ 148703480

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 1;
  return;
}

// NewStructOps @ 148703490

void * __cdecl
Z_Construct_UScriptStruct_FSplineMeshComponentDescriptorBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1d8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSplineMeshComponentDescriptorBase,&UE::CoreUObject::Private::Construct<FSplineMeshComponentDescriptorBase>,&UE::CoreUObject::Private::ConstructForTests<FSplineMeshComponentDescriptorBase>,&UE::CoreUObject::Private::Destruct<FSplineMeshComponentDescriptorBase>,&UE::CoreUObject::Private::Copy<FSplineMeshComponentDescriptorBase>,&UE::CoreUObject::Private::GetStructTypeHash<FSplineMeshComponentDescriptorBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bStripComplexCollisionForConsole_SetBit @ 1487034d0

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 2;
  return;
}

// NewProp_bHasNavigationData_SetBit @ 1487034e0

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 4;
  return;
}

// NewProp_bSupportUniformlyDistributedSampling_SetBit @ 1487034f0

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 8;
  return;
}

// NewProp_bSupportPhysicalMaterialMasks_SetBit @ 148703500

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 0x10;
  return;
}

// NewProp_bSupportRayTracing_SetBit @ 148703510

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 0x20;
  return;
}

// NewProp_bDoFastBuild_SetBit @ 148703520

void __cdecl Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 0x40;
  return;
}

// NewProp_bIsBuiltAtRuntime_SetBit @ 148703530

void __cdecl Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) | 0x80;
  return;
}

// NewProp_bAllowCPUAccess_SetBit @ 148703540

void __cdecl Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e5) = *(byte *)((longlong)param_1 + 0x1e5) | 2;
  return;
}

// NewProp_bSupportGpuUniformlyDistributedSampling_SetBit @ 148703550

void __cdecl
Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1e5) = *(byte *)((longlong)param_1 + 0x1e5) | 4;
  return;
}

// <lambda_invoker_cdecl> @ 148703650

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FSplineMeshVertexFactoryShaderParameters::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// operator_new<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> @ 148703770

void * __cdecl
operator_new<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x470) {
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
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x470,8,&param_2->AllocatorInstance,&param_2->ArrayMax);
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
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x470;
}

// operator<<<int,2,4294967295> @ 148703840

FArchive * __cdecl
operator<<<int,2,4294967295>(FArchive *param_1,TStaticArray<int,2,4294967295> *param_2)

{
  int *piVar1;
  uint *puVar2;
  
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
    param_2->Elements[0] = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = param_2->Elements + 1;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<<<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_> @ 148703910

FArchive * __cdecl
operator<<<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
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
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
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
            (**(code **)(*(longlong *)param_1 + 0x150))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
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
        TArray<TObjectPtr<UStaticMeshSocket>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
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

// TVector4<float>,2,4294967295> @ 148703920

FArchive * __cdecl
operator<<<UE::Math::TVector4<float>_2_4294967295>
          (FArchive *param_1,TStaticArray<UE::Math::TVector4<float>,2,4294967295> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Elements[0].field0_0x0._s_0.X = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Elements[0].field0_0x0._s_0.Y;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Elements[0].field0_0x0._s_0.Z;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Elements[0].field0_0x0._s_0.W;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->Elements + 1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)(param_2->Elements + 1));
    }
  }
  else {
    param_2->Elements[1].field0_0x0._s_0.X = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Elements[1].field0_0x0._s_0.Y;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Elements[1].field0_0x0._s_0.Z;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Elements[1].field0_0x0._s_0.W;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// FMip,TSizedDefaultAllocator<32>_> @ 148703ba0

FArchive * __cdecl
operator<<<UE::SVT::FPageTopology::FMip_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::SVT::FPageTopology::FMip,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
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
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
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
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FMip *)((param_2->AllocatorInstance).Data +
                                         (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<UE::SVT::FPageTopology::FMip,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FMip *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
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

// FMipMap,TSizedDefaultAllocator<32>_> @ 148703bb0

FArchive * __cdecl
operator<<<UE::SVT::FTextureData::FMipMap_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FMipMap *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::SVT::FTextureData::FMipMap,int>
                ((FMipMap *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
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
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              ::operator<<(param_1,(FMipMap *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48
                                   ));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FMipMap *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
              DefaultConstructItems<UE::SVT::FTextureData::FMipMap,int>(pFVar2,1);
              ::operator<<(param_1,pFVar2);
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

// operator<<<FStaticMaterial,TSizedDefaultAllocator<32>_> @ 148703bc0

FArchive * __cdecl
operator<<<FStaticMaterial,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *param_2)

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
  FStaticMaterial *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
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
                (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4924a)) {
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
              operator<<(param_1,(FStaticMaterial *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FStaticMaterial,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FStaticMaterial *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
              DefaultConstructItems<FStaticMaterial,int>(pFVar10,1);
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

// operator<<<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 148703bd0

FArchive * __cdecl
operator<<<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<FStaticMeshSection> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<FStaticMeshSection> FVar9;
  uint uVar10;
  uint uVar11;
  FStaticMeshSection *pFVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
  iVar13 = 0;
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
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>_>
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
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
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FStaticMeshSection>)param_2;
              if (FVar3 != (ForElementType<FStaticMeshSection>)0x0) {
                FVar9 = FVar3;
              }
              operator<<(param_1,(FStaticMeshSection *)
                                 ((longlong)(int)uVar11 * 0x1c + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>_>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FStaticMeshSection>)param_2;
              if (FVar3 != (ForElementType<FStaticMeshSection>)0x0) {
                FVar9 = FVar3;
              }
              pFVar12 = (FStaticMeshSection *)((longlong)iVar6 * 0x1c + (longlong)FVar9);
              DefaultConstructItems<FStaticMeshSection,int>(pFVar12,1);
              operator<<(param_1,pFVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
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

// operator<<<FLumenCardBuildData,TSizedDefaultAllocator<32>_> @ 148703be0

FArchive * __cdecl
operator<<<FLumenCardBuildData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_> *param_2)

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
  FLumenCardBuildData *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
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
                (0x40,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
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
              operator<<(param_1,(FLumenCardBuildData *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x440,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FLumenCardBuildData *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FLumenCardBuildData,int>(pFVar10,1);
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

// AddPass<`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>'::__l2::<lambda_1>_> @ 148703cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSparseVolumeTextureUpdateFromSparseBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSparseVolumeTextureUpdateFromSparseBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSparseVolumeTextureUpdateFromSparseBufferCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugStrandsCVsCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPass<`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>'::__l2::<lambda_1>_> @ 148703e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSparseVolumeTextureUpdatePageTableCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSparseVolumeTextureUpdatePageTableCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSparseVolumeTextureUpdatePageTableCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairDebugPrintHairSkinCacheCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>'::__l2::<lambda_1>_> @ 1487044b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSparseVolumeTextureUpdateFromSparseBufferCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSparseVolumeTextureUpdateFromSparseBufferCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSparseVolumeTextureUpdateFromSparseBufferCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FDrawDebugStrandsCVsCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>'::__l2::<lambda_1>_> @ 148704640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  FParameters *pFVar3;
  FShaderMapBase *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  ERDGPassFlags EVar8;
  int iVar9;
  wchar_t *pwVar10;
  FRDGPass *pFVar11;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar10 = FRDGEventName::GetTCHAR(param_1);
  EVar8 = OverridePassFlags(this,pwVar10,param_4);
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FRDGPass *)(*pcVar2)();
      return pFVar11;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar11,param_1,&local_38,EVar8,Async);
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFSparseVolumeTextureUpdatePageTableCS___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFSparseVolumeTextureUpdatePageTableCS__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FSparseVolumeTextureUpdatePageTableCS__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = param_5->Parameters;
  pFVar11[1]._padding_ = (longlong)param_5->ParametersMetadata;
  pFVar11[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  pFVar4 = (param_5->ComputeShader).ShaderMap;
  *(FHairDebugPrintHairSkinCacheCS **)&pFVar11[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->ComputeShader).ShaderContent;
  pFVar11[1].Name.EventFormat = (wchar_t *)pFVar4;
  pFVar5 = *(FScriptContainerElement **)&(param_5->GroupCount).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_5->GroupCount).field0_0x0 + 8);
  pFVar11[1].ParameterStruct.Contents = param_3;
  pFVar11[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar5;
  pFVar11[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar6;
  pFVar11[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar6 >> 0x20);
  ClobberPassOutputs(this,pFVar11);
  iVar9 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar9 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar9] = pFVar11;
  (pFVar11->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar11);
  return pFVar11;
}

// BindForLegacyShaderParameters<FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters> @ 148704cf0

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
BindForLegacyShaderParameters<FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters::FTypeInfo::GetStructMetadata()
  ;
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FSparseVolumeTextureUpdatePageTableCS::FParameters> @ 148704d50

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
BindForLegacyShaderParameters<FSparseVolumeTextureUpdatePageTableCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FSparseVolumeTextureUpdatePageTableCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// CastChecked<USpotLightComponent,ULightComponent> @ 148704db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

USpotLightComponent * __cdecl
CastChecked<USpotLightComponent,ULightComponent>(ULightComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (ULightComponent *)0x0) {
    pFVar3 = GetTypeName<USpotLightComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (USpotLightComponent *)param_1;
  }
  pFVar3 = GetTypeName<USpotLightComponent>(&local_28);
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

// ClearUnusedGraphResources<FSparseVolumeTextureUpdateFromSparseBufferCS> @ 148704e70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FSparseVolumeTextureUpdateFromSparseBufferCS>
          (TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<FSparseVolumeTextureUpdatePageTableCS> @ 148704ef0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<FSparseVolumeTextureUpdatePageTableCS>
          (TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable> *param_1,
          FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ConstructItems<FStaticMaterial,FStaticMaterial,int> @ 148704f70

void __cdecl
ConstructItems<FStaticMaterial,FStaticMaterial,int>
          (void *param_1,FStaticMaterial *param_2,int param_3)

{
  FName FVar1;
  FName *pFVar2;
  FName *pFVar3;
  
  if (param_3 != 0) {
    pFVar2 = (FName *)((longlong)param_1 + 0x10);
    pFVar3 = &param_2->ImportedMaterialSlotName;
    do {
      FVar1 = *(FName *)((longlong)pFVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pFVar2[-2] = FVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar1);
      }
      pFVar2[-1] = pFVar3[-1];
      *pFVar2 = *pFVar3;
      FVar1 = pFVar3[2];
      pFVar2[1] = pFVar3[1];
      pFVar2[2] = FVar1;
      pFVar2[3].ComparisonIndex.Value = pFVar3[3].ComparisonIndex.Value;
      FVar1 = pFVar3[4];
      pFVar2[4] = FVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar1);
      }
      pFVar3 = pFVar3 + 7;
      pFVar2 = pFVar2 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::SVT::FStreamingManager::FFrameInfo,int> @ 148705030

void __cdecl
DefaultConstructItems<UE::SVT::FStreamingManager::FFrameInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x80;
      puVar1[0x10] = 0;
      *(undefined4 *)(puVar1 + 0x11) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x80;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x16] = 0;
      *(undefined4 *)(puVar1 + 0x17) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x80;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
      puVar1[0x1a] = 0;
      *(undefined4 *)(puVar1 + 0x1b) = 0;
      puVar1[0x1c] = 0;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::SVT::FPageTopology::FMip,int> @ 1487050f0

void __cdecl DefaultConstructItems<UE::SVT::FPageTopology::FMip,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::SVT::FTextureData::FMipMap,int> @ 148705100

void __cdecl DefaultConstructItems<UE::SVT::FTextureData::FMipMap,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::SVT::FDerivedTextureData::FMipPageRange,int> @ 148705140

void __cdecl
DefaultConstructItems<UE::SVT::FDerivedTextureData::FMipPageRange,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::SVT::FStreamingManager::FPendingRequest,int> @ 148705150

void __cdecl
DefaultConstructItems<UE::SVT::FStreamingManager::FPendingRequest,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 4) = 0;
      FIoBuffer::FIoBuffer((FIoBuffer *)(lVar1 + 0xc));
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined1 *)(lVar1 + 0x20) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStaticMaterial,int> @ 1487051c0

void __cdecl DefaultConstructItems<FStaticMaterial,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStaticMeshBuildVertex,int> @ 148705200

void __cdecl DefaultConstructItems<FStaticMeshBuildVertex,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FStaticMeshSection,int> @ 148705210

void __cdecl DefaultConstructItems<FStaticMeshSection,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0x1010100;
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x1c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStaticMeshSectionAreaWeightedTriangleSampler,int> @ 148705250

void __cdecl
DefaultConstructItems<FStaticMeshSectionAreaWeightedTriangleSampler,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FWeightedRandomSampler::FWeightedRandomSampler(param_1);
    ((FWeightedRandomSampler *)param_1)->_padding_ =
         (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSampler__6B_;
    ((FWeightedRandomSampler *)((longlong)param_1 + 0x30))->_padding_ = 0;
    *(undefined4 *)&(((FWeightedRandomSampler *)((longlong)param_1 + 0x30))->Prob).AllocatorInstance
         = 0xffffffff;
    param_1 = &(((FWeightedRandomSampler *)((longlong)param_1 + 0x30))->Prob).ArrayNum;
  }
  return;
}

// DefaultConstructItems<UE::SVT::FStreamingManager::FTileDataTask,int> @ 1487052b0

void __cdecl
DefaultConstructItems<UE::SVT::FStreamingManager::FTileDataTask,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::SVT::FStreamingManager::FTileRange,int> @ 1487052c0

void __cdecl
DefaultConstructItems<UE::SVT::FStreamingManager::FTileRange,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined1 *)(lVar1 + 8) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>,int> @ 1487052f0

void __cdecl
DefaultConstructItems<TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::SVT::FPageTableUpdater::FBatch,int> @ 148705340

void __cdecl DestructItems<UE::SVT::FPageTableUpdater::FBatch,int>(FBatch *param_1,int param_2)

{
  IPooledRenderTarget *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->PageTable).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::SVT::FStreamingManager::FFrameInfo,int> @ 148705380

void __cdecl
DestructItems<UE::SVT::FStreamingManager::FFrameInfo,int>(FFrameInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->TileIndexToPendingRequestIndex).field_0x40;
    do {
      if ((longlong *)puVar1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[2] + 0x38))();
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      if ((void *)puVar1[-0x12] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x12]);
      }
      if ((void *)puVar1[-0x16] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x16]);
      }
      if ((void *)puVar1[-0x1a] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x1a]);
      }
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::SVT::FTextureData::FMipMap,int> @ 148705440

void __cdecl DestructItems<UE::SVT::FTextureData::FMipMap,int>(FMipMap *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PhysicalTileDataA;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -1) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -1) + 8));
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::SVT::FStreamingManager::FPendingRequest,int> @ 1487054a0

void __cdecl
DestructItems<UE::SVT::FStreamingManager::FPendingRequest,int>(FPendingRequest *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  BufCore *this;
  FIoBuffer *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->RequestBuffer;
    do {
      if (*(FBulkDataBatchRequest *)(pFVar3 + 1) != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)*(FBulkDataBatchRequest *)(pFVar3 + 1) + 0x10))();
      }
      this = (pFVar3->CorePtr).Reference;
      if (this != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(this);
        LOCK();
        piVar1 = &this->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(this);
          operator_delete(this,0x20);
        }
      }
      pFVar3 = pFVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStaticMaterialMinimalInfo,int> @ 148705530

void __cdecl
DestructItems<FStaticMaterialMinimalInfo,int>(FStaticMaterialMinimalInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->MaterialObjectPath;
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

// DestructItems<FStaticMeshSectionAreaWeightedTriangleSampler,int> @ 148705570

void __cdecl
DestructItems<FStaticMeshSectionAreaWeightedTriangleSampler,int>
          (FStaticMeshSectionAreaWeightedTriangleSampler *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FStaticMeshVertexFactories,int> @ 1487055b0

void __cdecl
DestructItems<FStaticMeshVertexFactories,int>(FStaticMeshVertexFactories *param_1,int param_2)

{
  FSplineMeshVertexFactory *pFVar1;
  FSplineMeshVertexFactory **ppFVar2;
  
  if (param_2 != 0) {
    ppFVar2 = &param_1->SplineVertexFactoryOverrideColorVertexBuffer;
    do {
      pFVar1 = ppFVar2[-1];
      if (pFVar1 != (FSplineMeshVertexFactory *)0x0) {
        (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
      }
      pFVar1 = *ppFVar2;
      if (pFVar1 != (FSplineMeshVertexFactory *)0x0) {
        (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
      }
      FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)(ppFVar2 + -0x47));
      FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)(ppFVar2 + -0x8d));
      ppFVar2 = ppFVar2 + 0x8e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>,int> @ 148705630

void __cdecl
DestructItems<TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>,int>
          (TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::SVT::FStreamingInstance,TDefaultDelete<UE::SVT::FStreamingInstance>_>,int> @ 148705690

void __cdecl
DestructItems<TUniquePtr<UE::SVT::FStreamingInstance,TDefaultDelete<UE::SVT::FStreamingInstance>_>,int>
          (TUniquePtr<UE::SVT::FStreamingInstance,TDefaultDelete<UE::SVT::FStreamingInstance>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete(param_1->Ptr,0x58);
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshRenderData::ReleaseResources'::__l13::TSTR_CmdReleaseRayTracingGeometryGroup2880>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148706430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshRenderData::ReleaseResources_::__l13::TSTR_CmdReleaseRayTracingGeometryGroup2880>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshRenderData::ReleaseResources'::__l13::TSTR_CmdReleaseRayTracingGeometryGroup2880>
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
      if (bVar8) goto LAB_148706581;
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
    goto LAB_148706775;
  }
LAB_148706581:
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
LAB_14870665f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870665f;
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
LAB_148706775:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshRenderData::InitResources'::__l2::TSTR_CmdSetStaticMeshReadyForStreaming2849>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1487067b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshRenderData::InitResources_::__l2::TSTR_CmdSetStaticMeshReadyForStreaming2849>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshRenderData::InitResources'::__l2::TSTR_CmdSetStaticMeshReadyForStreaming2849>
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
      if (bVar8) goto LAB_148706901;
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
    goto LAB_148706af5;
  }
LAB_148706901:
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
LAB_1487069df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487069df;
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
LAB_148706af5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148706b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread_::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>
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
      if (bVar8) goto LAB_148706c81;
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
    goto LAB_148706e75;
  }
LAB_148706c81:
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
LAB_148706d5f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148706d5f;
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
LAB_148706e75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`InitSplineVertexFactory_Internal'::__l2::TSTR_InitSplineMeshVertexFactory225>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148706eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_InitSplineVertexFactory_Internal_::__l2::TSTR_InitSplineMeshVertexFactory225>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`InitSplineVertexFactory_Internal'::__l2::TSTR_InitSplineMeshVertexFactory225>
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
      if (bVar8) goto LAB_148707001;
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
    goto LAB_1487071f5;
  }
LAB_148707001:
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
LAB_1487070df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487070df;
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
LAB_1487071f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l38::TSTR_InitStaticMeshRayTracingGeometry1572>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148707230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshLODResources::InitResources_::__l38::TSTR_InitStaticMeshRayTracingGeometry1572>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l38::TSTR_InitStaticMeshRayTracingGeometry1572>
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
      if (bVar8) goto LAB_148707381;
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
    goto LAB_148707575;
  }
LAB_148707381:
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
LAB_14870745f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870745f;
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
LAB_148707575:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::TSTR_InitStaticMeshRayTracingGeometry1809>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1487075b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshRayTracingProxyLOD::InitResources_::__l20::TSTR_InitStaticMeshRayTracingGeometry1809>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::TSTR_InitStaticMeshRayTracingGeometry1809>
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
      if (bVar8) goto LAB_148707701;
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
    goto LAB_1487078f5;
  }
LAB_148707701:
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
LAB_1487077df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487077df;
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
LAB_1487078f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshRenderData::InitResources'::__l29::TSTR_InitStaticMeshRayTracingGeometry2802>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148707930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshRenderData::InitResources_::__l29::TSTR_InitStaticMeshRayTracingGeometry2802>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshRenderData::InitResources'::__l29::TSTR_InitStaticMeshRayTracingGeometry2802>
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
      if (bVar8) goto LAB_148707a81;
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
    goto LAB_148707c75;
  }
LAB_148707a81:
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
LAB_148707b5f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148707b5f;
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
LAB_148707c75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::TSTR_InitStaticMeshVertexFactory1118>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148707cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshVertexFactories::InitVertexFactory_::__l2::TSTR_InitStaticMeshVertexFactory1118>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::TSTR_InitStaticMeshVertexFactory1118>
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
      if (bVar8) goto LAB_148707e01;
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
    goto LAB_148707ff5;
  }
LAB_148707e01:
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
LAB_148707edf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148707edf;
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
LAB_148707ff5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l2::TSTR_NameRHIResources1596>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148708030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshLODResources::InitResources_::__l2::TSTR_NameRHIResources1596>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l2::TSTR_NameRHIResources1596>
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
      if (bVar8) goto LAB_148708181;
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
    goto LAB_148708375;
  }
LAB_148708181:
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
LAB_14870825f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870825f;
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
LAB_148708375:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::SVT::FStreamingManager::Add_GameThread'::__l2::TSTR_SVTAdd219>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1487083b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::SVT::FStreamingManager::Add_GameThread_::__l2::TSTR_SVTAdd219>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::SVT::FStreamingManager::Add_GameThread'::__l2::TSTR_SVTAdd219>::
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
      if (bVar8) goto LAB_148708501;
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
    goto LAB_1487086f5;
  }
LAB_148708501:
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
LAB_1487085df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487085df;
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
LAB_1487086f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::SVT::FStreamingManager::Remove_GameThread'::__l2::TSTR_SVTRemove236>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148708730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::SVT::FStreamingManager::Remove_GameThread_::__l2::TSTR_SVTRemove236>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::SVT::FStreamingManager::Remove_GameThread'::__l2::TSTR_SVTRemove236>
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
      if (bVar8) goto LAB_148708881;
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
    goto LAB_148708a75;
  }
LAB_148708881:
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
LAB_14870895f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870895f;
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
LAB_148708a75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::SVT::FStreamingManager::Request_GameThread'::__l2::TSTR_SVTRequest249>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148708ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::SVT::FStreamingManager::Request_GameThread_::__l2::TSTR_SVTRequest249>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::SVT::FStreamingManager::Request_GameThread'::__l2::TSTR_SVTRequest249>
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
      if (bVar8) goto LAB_148708c01;
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
    goto LAB_148708df5;
  }
LAB_148708c01:
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
LAB_148708cdf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148708cdf;
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
LAB_148708df5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::SVT::FStreamingManager::Update_GameThread'::__l2::TSTR_SVTUpdate262>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148708e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::SVT::FStreamingManager::Update_GameThread_::__l2::TSTR_SVTUpdate262>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UE::SVT::FStreamingManager::Update_GameThread'::__l2::TSTR_SVTUpdate262>
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
      if (bVar8) goto LAB_148708f81;
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
    goto LAB_148709175;
  }
LAB_148708f81:
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
LAB_14870905f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870905f;
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
LAB_148709175:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_> @ 1487091b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>_> @ 148709430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>_::__l2::<lambda_1>_>
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
            TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>
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
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`30'::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::`2'::<lambda_1>_>_>
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
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`30'::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::`2'::<lambda_1>,1,1>
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
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
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
    goto LAB_1487098d1;
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
LAB_1487097bf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487097bf;
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
LAB_1487098d1:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_> @ 148709920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>_> @ 148709ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>_::__l2::<lambda_1>_>
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
            TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>
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
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::`7'::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::`2'::<lambda_1>_>_>
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
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::`7'::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::`2'::<lambda_1>,1,1>
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
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
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
    goto LAB_14870a041;
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
LAB_148709f2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148709f2f;
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
LAB_14870a041:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_> @ 14870a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>_> @ 14870a310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>_::__l2::<lambda_1>_>
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
            TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>
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
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::`28'::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::`2'::<lambda_1>_>_>
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
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::`28'::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::`2'::<lambda_1>,1,1>
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
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
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
    goto LAB_14870a7b1;
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
LAB_14870a69f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870a69f;
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
LAB_14870a7b1:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`USparseVolumeTextureFrame::BeginDestroy'::__l16::TSTR_USparseVolumeTextureFrame_DeleteTextureRenderResources1163>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14870a800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_USparseVolumeTextureFrame::BeginDestroy_::__l16::TSTR_USparseVolumeTextureFrame_DeleteTextureRenderResources1163>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`USparseVolumeTextureFrame::BeginDestroy'::__l16::TSTR_USparseVolumeTextureFrame_DeleteTextureRenderResources1163>
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
      if (bVar8) goto LAB_14870a951;
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
    goto LAB_14870ab45;
  }
LAB_14870a951:
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
LAB_14870aa2f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870aa2f;
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
LAB_14870ab45:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l2::TSTR_UpdateMemoryStats1585>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14870ab80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStaticMeshLODResources::InitResources_::__l2::TSTR_UpdateMemoryStats1585>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l2::TSTR_UpdateMemoryStats1585>
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
      if (bVar8) goto LAB_14870acd1;
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
    goto LAB_14870aec5;
  }
LAB_14870acd1:
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
LAB_14870adaf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870adaf;
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
LAB_14870aec5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UStaticMesh::InitResources'::__l2::TSTR_UpdateMemoryStats4825>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14870af00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UStaticMesh::InitResources_::__l2::TSTR_UpdateMemoryStats4825>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UStaticMesh::InitResources'::__l2::TSTR_UpdateMemoryStats4825>::Get()
  ;
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
      if (bVar8) goto LAB_14870b051;
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
    goto LAB_14870b245;
  }
LAB_14870b051:
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
LAB_14870b12f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14870b12f;
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
LAB_14870b245:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFullNameForCastLogError<USparseVolumeTexture> @ 14870b380

FString * __cdecl
GetFullNameForCastLogError<USparseVolumeTexture>
          (FString *__return_storage_ptr__,USparseVolumeTexture *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<USpotLightComponent> @ 14870b3b0

FString * __cdecl GetTypeName<USpotLightComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_USpotLightComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UStreamableSparseVolumeTexture> @ 14870b3f0

FString * __cdecl GetTypeName<UStreamableSparseVolumeTexture>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UStreamableSparseVolumeTexture::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FSpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_>_> @ 14870b430

void __cdecl
AlgoImpl::
HeapSortInternal<FSpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_>_>
          (FLinearAllocation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_> param_4)

{
  FLinearAllocation *pFVar1;
  FLinearAllocation *pFVar2;
  FLinearAllocation FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
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
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14870b512:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].StartOffset < param_1[iVar6].StartOffset) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->StartOffset <= pFVar2->StartOffset) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].StartOffset < param_1[iVar8].StartOffset) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->StartOffset <= pFVar2->StartOffset) goto LAB_14870b512;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<UE::SVT::FStreamingManager::FTileRange,int,FIdentityFunctor,TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,`UE::SVT::FStreamingManager::FilterRequests'::__l2::<lambda_3>_>_> @ 14870b5c0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::SVT::FStreamingManager::FTileRange,int,FIdentityFunctor,TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,_UE::SVT::FStreamingManager::FilterRequests_::__l2::<lambda_3>_>_>
          (FTileRange *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,_private:_void___cdecl_UE::SVT::FStreamingManager::FilterRequests(void)_::_2_::<lambda_3>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uchar uVar7;
  undefined3 uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uchar uVar13;
  undefined3 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FTileRange *pFVar20;
  int iVar21;
  FTileRange *pFVar22;
  FTileRange *pFVar23;
  longlong lVar24;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar21 = iVar17;
  iVar19 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_14870b6fe:
      if (iVar19 == 0) {
        iVar17 = param_2 + -1;
        lVar24 = (longlong)iVar17;
        if (0 < iVar17) {
          pFVar20 = param_1 + lVar24;
          do {
            uVar4 = pFVar20->FrameIndex;
            uVar5 = pFVar20->TileOffset;
            uVar6 = pFVar20->TileCount;
            uVar7 = pFVar20->Priority;
            uVar8 = *(undefined3 *)&pFVar20->field_0xd;
            uVar9 = param_1->SVTHandle;
            uVar10 = param_1->FrameIndex;
            uVar11 = param_1->TileOffset;
            uVar12 = param_1->TileCount;
            uVar13 = param_1->Priority;
            uVar14 = *(undefined3 *)&param_1->field_0xd;
            param_1->SVTHandle = pFVar20->SVTHandle;
            param_1->FrameIndex = uVar4;
            param_1->TileOffset = uVar5;
            param_1->TileCount = uVar6;
            param_1->Priority = uVar7;
            *(undefined3 *)&param_1->field_0xd = uVar8;
            pFVar20->SVTHandle = uVar9;
            pFVar20->FrameIndex = uVar10;
            pFVar20->TileOffset = uVar11;
            pFVar20->TileCount = uVar12;
            pFVar20->Priority = uVar13;
            *(undefined3 *)&pFVar20->field_0xd = uVar14;
            iVar21 = 0;
            if (1 < iVar17) {
              do {
                iVar19 = iVar21 * 2;
                iVar16 = iVar19 + 1;
                if (iVar19 + 2 < iVar17) {
                  lVar1 = (longlong)iVar19 + 2;
                  lVar2 = (longlong)iVar19 + 1;
                  bVar15 = param_1[lVar2].Priority <= param_1[lVar1].Priority;
                  if (param_1[lVar1].Priority == param_1[lVar2].Priority) {
                    bVar15 = param_1[lVar1].TileOffset < param_1[lVar2].TileOffset;
                  }
                  if (bVar15) {
                    iVar16 = iVar19;
                  }
                  iVar16 = iVar16 + 1;
                }
                pFVar22 = param_1 + iVar16;
                pFVar23 = param_1 + iVar21;
                bVar15 = pFVar22->Priority <= pFVar23->Priority;
                if (pFVar23->Priority == pFVar22->Priority) {
                  bVar15 = pFVar23->TileOffset < pFVar22->TileOffset;
                }
                if (!bVar15) break;
                uVar4 = pFVar22->FrameIndex;
                uVar5 = pFVar22->TileOffset;
                uVar6 = pFVar22->TileCount;
                uVar7 = pFVar22->Priority;
                uVar8 = *(undefined3 *)&pFVar22->field_0xd;
                uVar9 = pFVar23->SVTHandle;
                uVar10 = pFVar23->FrameIndex;
                uVar11 = pFVar23->TileOffset;
                uVar12 = pFVar23->TileCount;
                uVar13 = pFVar23->Priority;
                uVar14 = *(undefined3 *)&pFVar23->field_0xd;
                pFVar23->SVTHandle = pFVar22->SVTHandle;
                pFVar23->FrameIndex = uVar4;
                pFVar23->TileOffset = uVar5;
                pFVar23->TileCount = uVar6;
                pFVar23->Priority = uVar7;
                *(undefined3 *)&pFVar23->field_0xd = uVar8;
                pFVar22->SVTHandle = uVar9;
                pFVar22->FrameIndex = uVar10;
                pFVar22->TileOffset = uVar11;
                pFVar22->TileCount = uVar12;
                pFVar22->Priority = uVar13;
                *(undefined3 *)&pFVar22->field_0xd = uVar14;
                iVar21 = iVar16;
              } while (iVar16 * 2 + 1 < iVar17);
            }
            iVar17 = iVar17 + -1;
            lVar24 = lVar24 + -1;
            pFVar20 = pFVar20 + -1;
          } while (0 < lVar24);
        }
        return;
      }
      iVar16 = iVar19 + -1;
      iVar17 = iVar21 + -2;
      iVar21 = iVar17;
      iVar19 = iVar16;
    }
    iVar17 = iVar16 * 2;
    iVar18 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      lVar24 = (longlong)iVar17 + 2;
      lVar1 = (longlong)iVar17 + 1;
      bVar15 = param_1[lVar1].Priority <= param_1[lVar24].Priority;
      if (param_1[lVar24].Priority == param_1[lVar1].Priority) {
        bVar15 = param_1[lVar24].TileOffset < param_1[lVar1].TileOffset;
      }
      if (bVar15) {
        iVar18 = iVar17;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar20 = param_1 + iVar18;
    pFVar22 = param_1 + iVar16;
    bVar15 = pFVar20->Priority <= pFVar22->Priority;
    if (pFVar22->Priority == pFVar20->Priority) {
      bVar15 = pFVar22->TileOffset < pFVar20->TileOffset;
    }
    if (!bVar15) goto LAB_14870b6fe;
    uVar4 = pFVar20->FrameIndex;
    uVar5 = pFVar20->TileOffset;
    uVar6 = pFVar20->TileCount;
    uVar7 = pFVar20->Priority;
    uVar8 = *(undefined3 *)&pFVar20->field_0xd;
    iVar17 = iVar18 * 2 + 1;
    uVar9 = pFVar22->SVTHandle;
    uVar10 = pFVar22->FrameIndex;
    uVar11 = pFVar22->TileOffset;
    uVar12 = pFVar22->TileCount;
    uVar13 = pFVar22->Priority;
    uVar14 = *(undefined3 *)&pFVar22->field_0xd;
    pFVar22->SVTHandle = pFVar20->SVTHandle;
    pFVar22->FrameIndex = uVar4;
    pFVar22->TileOffset = uVar5;
    pFVar22->TileCount = uVar6;
    pFVar22->Priority = uVar7;
    *(undefined3 *)&pFVar22->field_0xd = uVar8;
    pFVar20->SVTHandle = uVar9;
    pFVar20->FrameIndex = uVar10;
    pFVar20->TileOffset = uVar11;
    pFVar20->TileCount = uVar12;
    pFVar20->Priority = uVar13;
    *(undefined3 *)&pFVar20->field_0xd = uVar14;
    iVar16 = iVar18;
  } while( true );
}

// InternalConstructor<ASpectatorPawn> @ 14870b820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<ASpectatorPawn>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  ADefaultPawn *this;
  UPawnMovementComponent *pUVar3;
  USphereComponent *pUVar4;
  FName FVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  
  FVar5 = ADefaultPawn::MovementComponentName;
  this = (ADefaultPawn *)param_1->Obj;
  if (this != (ADefaultPawn *)0x0) {
    pUVar6 = USpectatorPawnMovement::StaticClass();
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar5);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar5,pUVar6,(TArrayView<FName_const_,int> *)0x0);
    FVar5 = ADefaultPawn::MeshComponentName;
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,ADefaultPawn::MeshComponentName);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar5,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0)
    ;
    ADefaultPawn::ADefaultPawn(this,param_1);
    this->_padding_ = (longlong)&ASpectatorPawn::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ASpectatorPawn::_vftable__for__INavAgentInterface__;
    AActor::SetCanBeDamaged((AActor *)this,false);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xef;
    pUVar3 = (this->MovementComponent).field0_0x0.DebugPtr;
    uVar7 = (ulonglong)_tls_index;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
    plVar2 = &pUVar3->_padding_;
    *(byte *)plVar2 = (byte)*plVar2 & 0x7f;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&CollisionProfileName,L"Spectator");
        _Init_thread_footer(&_TSS0);
      }
    }
    pUVar4 = (this->CollisionComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar4->_padding_ + 0x788))(pUVar4,CollisionProfileName,1);
  }
  return;
}

// InternalConstructor<ASplineMeshActor> @ 14870b980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ASplineMeshActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ASplineMeshActor__6B_;
    this[1]._padding_ = 0;
    AActor::SetCanBeDamaged(this,false);
    pFVar3 = FName::FName(&local_res8,L"SplineMeshComponent0");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
    pUVar5 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    (**(code **)(*(longlong *)pUVar5 + 0x788))(pUVar5,UCollisionProfile::BlockAll_ProfileName,1);
    *(undefined1 *)(this[1]._padding_ + 0x1ab) = 0;
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this[1]._padding_,false);
    pbVar1 = (byte *)(this[1]._padding_ + 0x77d);
    *pbVar1 = *pbVar1 | 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<ASpotLight> @ 14870bab0

void __cdecl InternalConstructor<ASpotLight>(FObjectInitializer *param_1)

{
  if ((ASpotLight *)param_1->Obj != (ASpotLight *)0x0) {
    ASpotLight::ASpotLight((ASpotLight *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimatedSparseVolumeTexture> @ 14870bad0

void __cdecl InternalConstructor<UAnimatedSparseVolumeTexture>(FObjectInitializer *param_1)

{
  UStreamableSparseVolumeTexture *this;
  
  this = (UStreamableSparseVolumeTexture *)param_1->Obj;
  if (this != (UStreamableSparseVolumeTexture *)0x0) {
    UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture(this,param_1);
    *(undefined ***)this = &UAnimatedSparseVolumeTexture::_vftable__for__USparseVolumeTexture__;
    *(undefined ***)&this->field_0x28 =
         &UAnimatedSparseVolumeTexture::_vftable__for__IInterface_AssetUserData__;
  }
  return;
}

// InternalConstructor<UAnimatedSparseVolumeTextureController> @ 14870bb10

void __cdecl
InternalConstructor<UAnimatedSparseVolumeTextureController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0x41c00000;
    *(undefined ***)this = &___7UAnimatedSparseVolumeTextureController__6B_;
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<USoundWaveProcedural> @ 14870bb50

void __cdecl InternalConstructor<USoundWaveProcedural>(FObjectInitializer *param_1)

{
  USoundWave *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = (USoundWave *)param_1->Obj;
  if (this != (USoundWave *)0x0) {
    USoundWave::USoundWave(this,param_1);
    this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USoundWaveProcedural::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
    this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__IAudioProxyDataFactory__;
    this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__IInterface_AsyncCompilation__;
    puVar1 = operator_new(0x18);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar2 = puVar1;
    }
    this[1]._padding_ = (longlong)puVar2;
    this[1]._padding_ = (longlong)puVar2;
    this->bProcedural = '\x01';
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    LOCK();
    *(undefined4 *)&this[1]._padding_ = 0;
    UNLOCK();
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x200;
    *(undefined4 *)&this[1]._padding_ = 0x400;
    *(undefined4 *)&this[1]._padding_ = 2;
  }
  return;
}

// InternalConstructor<USparseVolumeTexture> @ 14870bc50

void __cdecl InternalConstructor<USparseVolumeTexture>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USparseVolumeTexture__6B_;
  }
  return;
}

// InternalConstructor<USparseVolumeTextureFrame> @ 14870bc80

void __cdecl InternalConstructor<USparseVolumeTextureFrame>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USparseVolumeTextureFrame__6B_;
    *(undefined8 *)(this + 1) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0x20 = (double)fVar1;
    *(double *)(this + 2) = (double)fVar2;
    *(double *)&this[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[2].field_0x18 = (double)fVar1;
    *(double *)&this[2].field_0x20 = (double)fVar2;
    *(double *)(this + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[3].field_0x10 = (double)fVar1;
    *(double *)&this[3].field_0x18 = (double)fVar2;
    *(double *)&this[3].field_0x20 = (double)fVar3;
    UE::SVT::FResources::FResources((FResources *)(this + 4));
    return;
  }
  return;
}

// InternalConstructor<USpectatorPawnMovement> @ 14870bd20

void __cdecl InternalConstructor<USpectatorPawnMovement>(FObjectInitializer *param_1)

{
  UFloatingPawnMovement *this;
  
  this = (UFloatingPawnMovement *)param_1->Obj;
  if (this != (UFloatingPawnMovement *)0x0) {
    UFloatingPawnMovement::UFloatingPawnMovement(this,param_1);
    this->MaxSpeed = 1200.0;
    this->_padding_ = (longlong)&USpectatorPawnMovement::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USpectatorPawnMovement::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USpectatorPawnMovement::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&___7USpectatorPawnMovement__6B_;
    this->Acceleration = 4000.0;
    this->Deceleration = 12000.0;
    *(char *)&this->_padding_ = (char)this->_padding_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
  }
  return;
}

// InternalConstructor<UStaticMesh> @ 14870bdb0

void __cdecl InternalConstructor<UStaticMesh>(FObjectInitializer *param_1)

{
  if ((UStaticMesh *)param_1->Obj != (UStaticMesh *)0x0) {
    UStaticMesh::UStaticMesh((UStaticMesh *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UStaticSparseVolumeTexture> @ 14870bdd0

void __cdecl InternalConstructor<UStaticSparseVolumeTexture>(FObjectInitializer *param_1)

{
  UStreamableSparseVolumeTexture *this;
  
  this = (UStreamableSparseVolumeTexture *)param_1->Obj;
  if (this != (UStreamableSparseVolumeTexture *)0x0) {
    UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture(this,param_1);
    *(undefined ***)this = &UStaticSparseVolumeTexture::_vftable__for__USparseVolumeTexture__;
    *(undefined ***)&this->field_0x28 =
         &UStaticSparseVolumeTexture::_vftable__for__IInterface_AssetUserData__;
  }
  return;
}

// InternalConstructor<UStreamableSparseVolumeTexture> @ 14870be10

void __cdecl InternalConstructor<UStreamableSparseVolumeTexture>(FObjectInitializer *param_1)

{
  if ((UStreamableSparseVolumeTexture *)param_1->Obj != (UStreamableSparseVolumeTexture *)0x0) {
    UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
              ((UStreamableSparseVolumeTexture *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ASpectatorPawn> @ 14870be30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ASpectatorPawn>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ADefaultPawn *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASpectatorPawn::GetPrivateStaticClass();
  this = (ADefaultPawn *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ADefaultPawn *)0x0) {
    ADefaultPawn::ADefaultPawn(this,param_1);
    this->_padding_ = (longlong)&ASpectatorPawn::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ASpectatorPawn::_vftable__for__INavAgentInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ASplineMeshActor> @ 14870bef0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ASplineMeshActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASplineMeshActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ASplineMeshActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ASpotLight> @ 14870bfb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ASpotLight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALight *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASpotLight::GetPrivateStaticClass();
  this = (ALight *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ALight *)0x0) {
    ALight::ALight(this,param_1);
    this->_padding_ = (longlong)&___7ASpotLight__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTexture> @ 14870c070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStreamableSparseVolumeTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimatedSparseVolumeTexture::GetPrivateStaticClass();
  this = (UStreamableSparseVolumeTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStreamableSparseVolumeTexture *)0x0) {
    UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture(this,param_1);
    *(undefined ***)this = &UAnimatedSparseVolumeTexture::_vftable__for__USparseVolumeTexture__;
    *(undefined ***)&this->field_0x28 =
         &UAnimatedSparseVolumeTexture::_vftable__for__IInterface_AssetUserData__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTextureController> @ 14870c130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTextureController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimatedSparseVolumeTextureController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0x41c00000;
    *(undefined ***)pUVar1 = &___7UAnimatedSparseVolumeTextureController__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundWaveProcedural> @ 14870c1f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundWaveProcedural>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USoundWave *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundWaveProcedural::GetPrivateStaticClass();
  this = (USoundWave *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this == (USoundWave *)0x0) {
    return (UObject *)0x0;
  }
  USoundWave::USoundWave(this,param_1);
  this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&USoundWaveProcedural::_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&USoundWaveProcedural::_vftable__for__IInterface_AsyncCompilation__;
  puVar3 = operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar4 = puVar3;
  }
  this[1]._padding_ = (longlong)puVar4;
  this[1]._padding_ = (longlong)puVar4;
  *(undefined4 *)&this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0;
  return (UObject *)this;
}

// InternalVTableHelperCtorCaller<USparseVolumeTexture> @ 14870c340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USparseVolumeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USparseVolumeTexture::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USparseVolumeTexture__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USparseVolumeTextureFrame> @ 14870c3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USparseVolumeTextureFrame>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = USparseVolumeTextureFrame::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined ***)pUVar4 = &___7USparseVolumeTextureFrame__6B_;
    *(undefined8 *)(pUVar4 + 1) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    UE::SVT::FResources::FResources((FResources *)(pUVar4 + 4));
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USpectatorPawnMovement> @ 14870c500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USpectatorPawnMovement>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFloatingPawnMovement *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USpectatorPawnMovement::GetPrivateStaticClass();
  this = (UFloatingPawnMovement *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UFloatingPawnMovement *)0x0) {
    UFloatingPawnMovement::UFloatingPawnMovement(this,param_1);
    this->_padding_ = (longlong)&USpectatorPawnMovement::_vftable__for__UObject__;
    this->_padding_ = (longlong)&USpectatorPawnMovement::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USpectatorPawnMovement::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&___7USpectatorPawnMovement__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStaticMesh> @ 14870c5d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStaticMesh>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStreamableRenderAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStaticMesh::GetPrivateStaticClass();
  this = (UStreamableRenderAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStreamableRenderAsset *)0x0) {
    UStreamableRenderAsset::UStreamableRenderAsset(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UStaticMesh::_vftable__for__UStreamableRenderAsset__;
    this[1]._padding_ = 0;
    this[1]._padding_ = (longlong)&UStaticMesh::_vftable__for__IInterface_CollisionDataProvider__;
    this[1].MipChangeCallbacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = (longlong)&UStaticMesh::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = (longlong)&UStaticMesh::_vftable__for__IInterface_AsyncCompilation__;
    this[1].PendingUpdate.Reference = (FRenderAssetUpdate *)0x0;
    this[1].ForceMipLevelsToBeResidentTimestamp = 0.0;
    this[1].NoRefStreamingLODBias._padding_ = 0;
    this[1].NoRefStreamingLODBias.Default = 0;
    this[1].NoRefStreamingLODBias._padding_ = 0x80;
    *(undefined4 *)&this[1].NoRefStreamingLODBias.PerQuality = 0xffffffff;
    *(undefined4 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x4 = 0;
    *(undefined8 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x10 = 0;
    *(undefined4 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x18 = 0;
    this[1].MipChangeCallbacks.ArrayNum = 0;
    *(undefined4 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x20 = 0;
    *(undefined8 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x28 = 0;
    *(undefined8 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x30 = 0;
    *(undefined8 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x38 = 0;
    *(undefined8 *)&this[1].NoRefStreamingLODBias.PerQuality.field_0x40 = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&this[1].NoRefStreamingLODBias.PerQuality.field_0x48,4000);
    this[2]._padding_ = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this[2].MipChangeCallbacks);
    this[2].MipChangeCallbacks.ArrayNum = 0;
    this[2].MipChangeCallbacks.ArrayMax = 0;
    this[2].PendingUpdate.Reference = (FRenderAssetUpdate *)0x0;
    this[2].ForceMipLevelsToBeResidentTimestamp = 0.0;
    *(undefined8 *)&this[2].NumCinematicMipLevels = 0;
    this[2].NoRefStreamingLODBias._padding_ = 0;
    this[2].NoRefStreamingLODBias._padding_ = 0;
    this[2].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this[2].field_0xd0 = 0;
    this[2].CachedSRRState.field0_0x0.Data = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStaticSparseVolumeTexture> @ 14870c790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStaticSparseVolumeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStreamableSparseVolumeTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStaticSparseVolumeTexture::GetPrivateStaticClass();
  this = (UStreamableSparseVolumeTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStreamableSparseVolumeTexture *)0x0) {
    UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture(this,param_1);
    *(undefined ***)this = &UStaticSparseVolumeTexture::_vftable__for__USparseVolumeTexture__;
    *(undefined ***)&this->field_0x28 =
         &UStaticSparseVolumeTexture::_vftable__for__IInterface_AssetUserData__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStreamableSparseVolumeTexture> @ 14870c850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UStreamableSparseVolumeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStreamableSparseVolumeTexture *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamableSparseVolumeTexture::GetPrivateStaticClass();
  pUVar3 = (UStreamableSparseVolumeTexture *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UStreamableSparseVolumeTexture *)0x0) {
    pUVar3 = UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FSpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_>_> @ 14870c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_>_>
          (FLinearAllocation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_> param_4)

{
  FLinearAllocation *pFVar1;
  FLinearAllocation FVar2;
  int iVar3;
  FLinearAllocation *pFVar4;
  FLinearAllocation **ppFVar5;
  FLinearAllocation *pFVar6;
  FLinearAllocation *pFVar7;
  FLinearAllocation *pFVar8;
  FLinearAllocation *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FLinearAllocation *local_338;
  FLinearAllocation *local_328;
  FLinearAllocation *local_320;
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
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_14870c9a0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_14870c9d0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x00014870c9d9;
          goto LAB_14870c9e0;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->StartOffset < pFVar1->StartOffset) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_14870ca9a;
      }
LAB_14870ca89:
      local_338 = pFVar1;
      HeapSortInternal<FSpanAllocator::FLinearAllocation,int,FIdentityFunctor,TDereferenceWrapper<FSpanAllocator::FLinearAllocation,TLess<void>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_14870ca9a:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x00014870c9d9:
  if (pFVar4->StartOffset <= pFVar9->StartOffset) goto LAB_14870c9d0;
LAB_14870c9e0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->StartOffset <= pFVar6->StartOffset);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_14870c9d0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_14870ca9a;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_14870ca9a;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_14870ca89;
  goto LAB_14870c9a0;
}

// IntroSortInternal<UE::SVT::FStreamingManager::FTileRange,int,FIdentityFunctor,TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,`UE::SVT::FStreamingManager::FilterRequests'::__l2::<lambda_3>_>_> @ 14870cb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::SVT::FStreamingManager::FTileRange,int,FIdentityFunctor,TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,_UE::SVT::FStreamingManager::FilterRequests_::__l2::<lambda_3>_>_>
          (FTileRange *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,_private:_void___cdecl_UE::SVT::FStreamingManager::FilterRequests(void)_::_2_::<lambda_3>_>
          param_4)

{
  FTileRange *pFVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined3 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uchar uVar11;
  undefined3 uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uchar uVar17;
  undefined3 uVar18;
  int iVar19;
  FTileRange *pFVar20;
  FTileRange *pFVar21;
  FTileRange *pFVar22;
  FTileRange *pFVar23;
  FTileRange *pFVar24;
  FTileRange *pFVar25;
  FTileRange **ppFVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_368 [48];
  FTileRange *local_338;
  FTileRange *local_328;
  FTileRange *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar28;
    memset(local_310,0,0x2e8);
    ppFVar26 = &local_328;
    do {
      pFVar25 = ppFVar26[1];
      pFVar24 = *ppFVar26;
      pFVar1 = ppFVar26[2];
      iVar19 = (int)((longlong)pFVar25 - (longlong)pFVar24 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar23 = pFVar24;
      if ((int)local_338 != 0) {
LAB_14870cbe0:
        if (8 < iVar19) {
          uVar8 = pFVar23->FrameIndex;
          uVar9 = pFVar23->TileOffset;
          uVar10 = pFVar23->TileCount;
          uVar11 = pFVar23->Priority;
          uVar12 = *(undefined3 *)&pFVar23->field_0xd;
          pFVar21 = pFVar25 + 1;
          pFVar24 = pFVar23 + iVar19 / 2;
          uVar13 = pFVar24->SVTHandle;
          uVar14 = pFVar24->FrameIndex;
          uVar15 = pFVar24->TileOffset;
          uVar16 = pFVar24->TileCount;
          uVar17 = pFVar24->Priority;
          uVar18 = *(undefined3 *)&pFVar24->field_0xd;
          pFVar24 = pFVar23 + iVar19 / 2;
          pFVar24->SVTHandle = pFVar23->SVTHandle;
          pFVar24->FrameIndex = uVar8;
          pFVar24->TileOffset = uVar9;
          pFVar24->TileCount = uVar10;
          pFVar24->Priority = uVar11;
          *(undefined3 *)&pFVar24->field_0xd = uVar12;
          pFVar23->SVTHandle = uVar13;
          pFVar23->FrameIndex = uVar14;
          pFVar23->TileOffset = uVar15;
          pFVar23->TileCount = uVar16;
          pFVar23->Priority = uVar17;
          *(undefined3 *)&pFVar23->field_0xd = uVar18;
          pFVar24 = pFVar23;
LAB_14870cc10:
          pFVar20 = pFVar24;
          pFVar24 = pFVar20 + 1;
          if (pFVar24 <= pFVar25) goto code_r0x00014870cc1c;
          goto LAB_14870cc40;
        }
        for (; pFVar24 = pFVar23, pFVar1 = pFVar23, pFVar23 < pFVar25; pFVar25 = pFVar25 + -1) {
          while (pFVar21 = pFVar24, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar25) {
            bVar27 = pFVar1->Priority <= pFVar21->Priority;
            if (pFVar21->Priority == pFVar1->Priority) {
              bVar27 = pFVar21->TileOffset < pFVar1->TileOffset;
            }
            pFVar24 = pFVar1;
            if (!bVar27) {
              pFVar24 = pFVar21;
            }
          }
          uVar13 = pFVar21->SVTHandle;
          uVar14 = pFVar21->FrameIndex;
          uVar15 = pFVar21->TileOffset;
          uVar16 = pFVar21->TileCount;
          uVar17 = pFVar21->Priority;
          uVar18 = *(undefined3 *)&pFVar21->field_0xd;
          uVar8 = pFVar25->FrameIndex;
          uVar9 = pFVar25->TileOffset;
          uVar10 = pFVar25->TileCount;
          uVar11 = pFVar25->Priority;
          uVar12 = *(undefined3 *)&pFVar25->field_0xd;
          pFVar21->SVTHandle = pFVar25->SVTHandle;
          pFVar21->FrameIndex = uVar8;
          pFVar21->TileOffset = uVar9;
          pFVar21->TileCount = uVar10;
          pFVar21->Priority = uVar11;
          *(undefined3 *)&pFVar21->field_0xd = uVar12;
          pFVar25->SVTHandle = uVar13;
          pFVar25->FrameIndex = uVar14;
          pFVar25->TileOffset = uVar15;
          pFVar25->TileCount = uVar16;
          pFVar25->Priority = uVar17;
          *(undefined3 *)&pFVar25->field_0xd = uVar18;
        }
        goto LAB_14870cd15;
      }
LAB_14870cd04:
      local_338 = pFVar1;
      HeapSortInternal<UE::SVT::FStreamingManager::FTileRange,int,FIdentityFunctor,TDereferenceWrapper<UE::SVT::FStreamingManager::FTileRange,_UE::SVT::FStreamingManager::FilterRequests_::__l2::<lambda_3>_>_>
                (pFVar24,iVar19,param_3,param_4);
LAB_14870cd15:
      ppFVar26 = ppFVar26 + -3;
    } while (&local_328 <= ppFVar26);
  }
  return;
code_r0x00014870cc1c:
  bVar27 = pFVar20[1].Priority <= pFVar23->Priority;
  if (pFVar23->Priority == pFVar20[1].Priority) {
    bVar27 = pFVar23->TileOffset < pFVar20[1].TileOffset;
  }
  if (!bVar27) goto LAB_14870cc10;
LAB_14870cc40:
  do {
    pFVar22 = pFVar21;
    pFVar21 = pFVar22 + -1;
    if (pFVar21 <= pFVar23) break;
    bVar27 = pFVar23->Priority <= pFVar22[-1].Priority;
    if (pFVar22[-1].Priority == pFVar23->Priority) {
      bVar27 = pFVar22[-1].TileOffset < pFVar23->TileOffset;
    }
  } while (!bVar27);
  uVar2 = pFVar21->SVTHandle;
  uVar3 = pFVar21->FrameIndex;
  uVar4 = pFVar21->TileOffset;
  uVar5 = pFVar22[-1].TileCount;
  uVar6 = pFVar22[-1].Priority;
  uVar7 = *(undefined3 *)&pFVar22[-1].field_0xd;
  if (pFVar24 <= pFVar21) {
    uVar8 = pFVar24->SVTHandle;
    uVar13 = pFVar24->FrameIndex;
    uVar9 = pFVar24->TileOffset;
    uVar10 = pFVar20[1].TileCount;
    uVar11 = pFVar20[1].Priority;
    uVar12 = *(undefined3 *)&pFVar20[1].field_0xd;
    pFVar24->SVTHandle = uVar2;
    pFVar24->FrameIndex = uVar3;
    pFVar24->TileOffset = uVar4;
    pFVar20[1].TileCount = uVar5;
    pFVar20[1].Priority = uVar6;
    *(undefined3 *)&pFVar20[1].field_0xd = uVar7;
    pFVar21->SVTHandle = uVar8;
    pFVar21->FrameIndex = uVar13;
    pFVar21->TileOffset = uVar9;
    pFVar22[-1].TileCount = uVar10;
    pFVar22[-1].Priority = uVar11;
    *(undefined3 *)&pFVar22[-1].field_0xd = uVar12;
    goto LAB_14870cc10;
  }
  uVar8 = pFVar23->SVTHandle;
  uVar13 = pFVar23->FrameIndex;
  uVar9 = pFVar23->TileOffset;
  uVar10 = pFVar23->TileCount;
  uVar11 = pFVar23->Priority;
  uVar12 = *(undefined3 *)&pFVar23->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar23->SVTHandle = uVar2;
  pFVar23->FrameIndex = uVar3;
  pFVar23->TileOffset = uVar4;
  pFVar23->TileCount = uVar5;
  pFVar23->Priority = uVar6;
  *(undefined3 *)&pFVar23->field_0xd = uVar7;
  pFVar21->SVTHandle = uVar8;
  pFVar21->FrameIndex = uVar13;
  pFVar21->TileOffset = uVar9;
  pFVar22[-1].TileCount = uVar10;
  pFVar22[-1].Priority = uVar11;
  *(undefined3 *)&pFVar22[-1].field_0xd = uVar12;
  if ((longlong)((longlong)pFVar21 + (-0x10 - (longlong)pFVar23) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar25 - (longlong)pFVar24 & 0xfffffffffffffff0U)) {
    if (pFVar24 < pFVar25) {
      *ppFVar26 = pFVar24;
      ppFVar26[1] = pFVar25;
      *(int *)(ppFVar26 + 2) = (int)local_338;
      ppFVar26 = ppFVar26 + 3;
    }
    if (pFVar21 <= pFVar23 + 1) goto LAB_14870cd15;
    pFVar25 = pFVar22 + -2;
    pFVar24 = pFVar23;
  }
  else {
    if (pFVar23 + 1 < pFVar21) {
      *ppFVar26 = pFVar23;
      ppFVar26[1] = pFVar22 + -2;
      *(int *)(ppFVar26 + 2) = (int)local_338;
      ppFVar26 = ppFVar26 + 3;
    }
    if (pFVar25 <= pFVar24) goto LAB_14870cd15;
  }
  iVar19 = (int)((longlong)pFVar25 - (longlong)pFVar24 >> 4) + 1;
  pFVar23 = pFVar24;
  if ((int)local_338 == 0) goto LAB_14870cd04;
  goto LAB_14870cbe0;
}

// MutableView<TObjectPtr<USparseVolumeTextureFrame>_> @ 14870cdc0

TMutableView<TObjectPtr<USparseVolumeTextureFrame>_> __cdecl
MutableView<TObjectPtr<USparseVolumeTextureFrame>_>(TObjectPtr<USparseVolumeTextureFrame> *param_1)

{
  TObjectPtr<USparseVolumeTextureFrame>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<USparseVolumeTextureFrame>_>)(USparseVolumeTextureFrame **)param_1
  ;
}

// NewObject<USplineMeshComponent> @ 14870cdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USplineMeshComponent * __cdecl
NewObject<USplineMeshComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USplineMeshComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
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
  pUVar2 = (USplineMeshComponent *)
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

// NewObject<UStaticMeshDescription> @ 14870ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStaticMeshDescription * __cdecl
NewObject<UStaticMeshDescription>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UStaticMeshDescription *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UStaticMeshDescription_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UStaticMeshDescription *)
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

// ObjectPtrWrap<USparseVolumeTextureFrame_*,TObjectPtr<USparseVolumeTextureFrame>_> @ 14870cfc0

TObjectPtr<USparseVolumeTextureFrame> * __cdecl
ObjectPtrWrap<USparseVolumeTextureFrame_*,TObjectPtr<USparseVolumeTextureFrame>_>
          (USparseVolumeTextureFrame **param_1)

{
  return (TObjectPtr<USparseVolumeTextureFrame> *)param_1;
}

// StaticEnum<enum_EImportanceLevel> @ 14870e4d0

UEnum * __cdecl StaticEnum<enum_EImportanceLevel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceLevel,(UObject *)pUVar1,
                       L"EImportanceLevel");
  }
  return Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton;
}

// StaticEnum<enum_ENormalMode> @ 14870e510

UEnum * __cdecl StaticEnum<enum_ENormalMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENormalMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENormalMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENormalMode,(UObject *)pUVar1,L"ENormalMode");
  }
  return Z_Registration_Info_UEnum_ENormalMode.OuterSingleton;
}

// StaticEnum<enum_EOptimizationType> @ 14870e550

UEnum * __cdecl StaticEnum<enum_EOptimizationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOptimizationType,(UObject *)pUVar1,
                       L"EOptimizationType");
  }
  return Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton;
}

// StaticEnum<enum_EStaticMeshPaintSupport> @ 14870e590

UEnum * __cdecl StaticEnum<enum_EStaticMeshPaintSupport>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStaticMeshPaintSupport.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStaticMeshPaintSupport.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshPaintSupport,(UObject *)pUVar1,
                       L"EStaticMeshPaintSupport");
  }
  return Z_Registration_Info_UEnum_EStaticMeshPaintSupport.OuterSingleton;
}

// Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,`FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor'::__l2::<lambda_1>_> @ 14870e5d0

/* WARNING: Removing unreachable block (ram,0x00014870e786) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UObject *local_68;
  undefined1 local_60 [24];
  FUtf8String local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    local_60._8_8_ = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_60._0_8_ = 0;
    FUtf8String::Reset(&local_48,0);
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_60,(FObjectPtr)&local_68);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_60) &&
        ((FScriptContainerElement *)local_60 < pFVar4 + (longlong)param_2->ArrayMax * 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    *(undefined8 *)pFVar4 = local_60._0_8_;
    *(undefined8 *)(pFVar4 + 8) = local_60._8_8_;
    *(undefined8 *)(pFVar4 + 0x10) = local_60._16_8_;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x18) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 0x20) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x24) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,`FSoftSplineMeshComponentDescriptor::InitFrom'::__l2::<lambda_1>_> @ 14870e7c0

/* WARNING: Removing unreachable block (ram,0x00014870e976) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::InitFrom_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UObject *local_68;
  undefined1 local_60 [24];
  FUtf8String local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    local_60._8_8_ = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_60._0_8_ = 0;
    FUtf8String::Reset(&local_48,0);
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_60,(FObjectPtr)&local_68);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_60) &&
        ((FScriptContainerElement *)local_60 < pFVar4 + (longlong)param_2->ArrayMax * 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    *(undefined8 *)pFVar4 = local_60._0_8_;
    *(undefined8 *)(pFVar4 + 8) = local_60._8_8_;
    *(undefined8 *)(pFVar4 + 0x10) = local_60._16_8_;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x18) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 0x20) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x24) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,`FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor'::__l2::<lambda_2>_> @ 14870e9b0

/* WARNING: Removing unreachable block (ram,0x00014870eb66) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::FSoftSplineMeshComponentDescriptor_::__l2::<lambda_2>_>
          (TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UObject *local_68;
  undefined1 local_60 [24];
  FUtf8String local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<URuntimeVirtualTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    local_60._8_8_ = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_60._0_8_ = 0;
    FUtf8String::Reset(&local_48,0);
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_60,(FObjectPtr)&local_68);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_60) &&
        ((FScriptContainerElement *)local_60 < pFVar4 + (longlong)param_2->ArrayMax * 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    *(undefined8 *)pFVar4 = local_60._0_8_;
    *(undefined8 *)(pFVar4 + 8) = local_60._8_8_;
    *(undefined8 *)(pFVar4 + 0x10) = local_60._16_8_;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x18) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 0x20) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x24) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,`FSoftSplineMeshComponentDescriptor::InitFrom'::__l2::<lambda_2>_> @ 14870eba0

/* WARNING: Removing unreachable block (ram,0x00014870ed56) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>_&,_FSoftSplineMeshComponentDescriptor::InitFrom_::__l2::<lambda_2>_>
          (TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UObject *local_68;
  undefined1 local_60 [24];
  FUtf8String local_48;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<URuntimeVirtualTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    local_60._8_8_ = 0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_60._0_8_ = 0;
    FUtf8String::Reset(&local_48,0);
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_60,(FObjectPtr)&local_68);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_60) &&
        ((FScriptContainerElement *)local_60 < pFVar4 + (longlong)param_2->ArrayMax * 0x28)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
    *(undefined8 *)pFVar4 = local_60._0_8_;
    *(undefined8 *)(pFVar4 + 8) = local_60._8_8_;
    *(undefined8 *)(pFVar4 + 0x10) = local_60._16_8_;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x18) = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar4 + 0x20) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x24) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = pFVar8 + 8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>,1,1> @ 148713760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`30'::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000148713783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>,1,1> @ 148713790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::`7'::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001487137b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>,1,1> @ 1487137c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::`28'::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001487137e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::SVT::FStreamingManager::Add_GameThread'::__l2::<lambda_1>,1,1> @ 1487137f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FStreamingManager::Add_GameThread'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UE::SVT::FStreamingManager::Add_GameThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FStreamingManager::Add_GameThread'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x90));
  }
  DestructItems<UE::SVT::FStreamingManager::FFrameInfo,int>
            (*(FFrameInfo **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l2::<lambda_1>,1,1> @ 148713850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitModelVF'::__l2::<lambda_1>,1,0> @ 148713870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitModelVF'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FStaticMeshVertexBuffers::InitModelVF_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitModelVF'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UStaticMesh::InitResources'::__l2::<lambda_1>,1,0> @ 148713890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStaticMesh::InitResources'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UStaticMesh::InitResources_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UStaticMesh::InitResources'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`InitSplineVertexFactory_Internal'::__l2::<lambda_1>,1,1> @ 1487138b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InitSplineVertexFactory_Internal'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_InitSplineVertexFactory_Internal_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`InitSplineVertexFactory_Internal'::`2'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::<lambda_1>,1,1> @ 1487138d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FStaticMeshVertexFactories::InitVertexFactory_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexFactories::InitVertexFactory'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitWithDummyData'::__l2::<lambda_1>,1,1> @ 1487138f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitWithDummyData'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FStaticMeshVertexBuffers::InitWithDummyData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitWithDummyData'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::SVT::FStreamingManager::Remove_GameThread'::__l2::<lambda_1>,1,0> @ 148713910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FStreamingManager::Remove_GameThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::SVT::FStreamingManager::Remove_GameThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FStreamingManager::Remove_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::SVT::FStreamingManager::Request_GameThread'::__l2::<lambda_1>,1,1> @ 148713930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FStreamingManager::Request_GameThread'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UE::SVT::FStreamingManager::Request_GameThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FStreamingManager::Request_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::<lambda_1>,1,1> @ 148713950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`USparseVolumeTextureFrame::BeginDestroy'::__l16::<lambda_1>,1,0> @ 148713970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureFrame::BeginDestroy'::__l16::<lambda_1>,1,0>::
~TFunction_OwnedObject<_USparseVolumeTextureFrame::BeginDestroy_::__l16::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USparseVolumeTextureFrame::BeginDestroy'::`16'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::<lambda_1>,1,1> @ 148713990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FStaticMeshRayTracingProxyLOD::InitResources_::__l20::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRayTracingProxyLOD::InitResources'::`20'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::__l29::<lambda_1>,1,0> @ 1487139b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::__l29::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FStaticMeshRenderData::InitResources_::__l29::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::`29'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l38::<lambda_1>,1,1> @ 1487139d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l38::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FStaticMeshLODResources::InitResources_::__l38::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`38'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshRenderData::ReleaseResources'::__l13::<lambda_1>,1,0> @ 1487139f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRenderData::ReleaseResources'::__l13::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FStaticMeshRenderData::ReleaseResources_::__l13::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRenderData::ReleaseResources'::`13'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l2::<lambda_2>,1,0> @ 148713a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FStaticMeshLODResources::InitResources_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`2'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::__l2::<lambda_2>,1,0> @ 148713a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FStaticMeshRenderData::InitResources_::__l2::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::`2'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l2::<lambda_3>,1,0> @ 148713a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l2::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FStaticMeshLODResources::InitResources_::__l2::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`2'::<lambda_3>,1,0>::
        _vftable_;
  return;
}

// operator<< @ 148715680

FArchive * __cdecl operator<<(FArchive *param_1,FHeader *param_2)

{
  longlong *plVar1;
  EPixelFormat local_res8 [8];
  
  UE::Math::operator<<(param_1,&param_2->VirtualVolumeResolution);
  UE::Math::operator<<(param_1,&param_2->VirtualVolumeAABBMin);
  UE::Math::operator<<(param_1,&param_2->VirtualVolumeAABBMax);
  UE::Math::operator<<(param_1,&param_2->PageTableVolumeResolution);
  UE::Math::operator<<(param_1,&param_2->PageTableVolumeAABBMin);
  UE::Math::operator<<(param_1,&param_2->PageTableVolumeAABBMax);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (param_2->AttributesFormats).Elements[0];
  if ((EPixelFormat *)plVar1[1] < (EPixelFormat *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EPixelFormat *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (param_2->AttributesFormats).Elements[0] = local_res8[0];
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (param_2->AttributesFormats).Elements[1];
  if ((EPixelFormat *)plVar1[1] < (EPixelFormat *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EPixelFormat *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (param_2->AttributesFormats).Elements[1] = local_res8[0];
  }
  UE::Math::operator<<(param_1,(param_2->FallbackValues).Elements);
  UE::Math::operator<<(param_1,(param_2->FallbackValues).Elements + 1);
  return param_1;
}

// operator<< @ 1487157a0

FArchive * __cdecl operator<<(FArchive *param_1,FMip *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->PageOffset);
    }
  }
  else {
    param_2->PageOffset = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->PageCount;
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

// operator<< @ 148715870

FArchive * __cdecl operator<<(FArchive *param_1,FMipLevelStreamingInfo *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  
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
    param_2->BulkOffset = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->BulkSize;
  puVar1 = &param_1->field_0x2a;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->PageTableOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->PageTableSize;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<<int,2,4294967295>(param_1,&param_2->OccupancyBitsOffset);
  operator<<<int,2,4294967295>(param_1,&param_2->OccupancyBitsSize);
  operator<<<int,2,4294967295>(param_1,&param_2->TileDataOffsetsOffset);
  operator<<<int,2,4294967295>(param_1,&param_2->TileDataOffsetsSize);
  operator<<<int,2,4294967295>(param_1,&param_2->TileDataOffset);
  operator<<<int,2,4294967295>(param_1,&param_2->TileDataSize);
  piVar2 = &param_2->NumPhysicalTiles;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return param_1;
}

// operator<< @ 148715a60

FArchive * __cdecl operator<<(FArchive *param_1,FMipMap *param_2)

{
  int *piVar1;
  
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PageTable);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
            (param_1,&param_2->PhysicalTileDataA);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
            (param_1,&param_2->PhysicalTileDataB);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->NumPhysicalTiles = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumPhysicalTiles,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->NumPhysicalTiles);
  return param_1;
}

// operator<< @ 148715b00

FArchive * __cdecl operator<<(FArchive *param_1,FStaticMaterial *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,param_2);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->MaterialSlotName);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
    if (iVar1 < 10) goto LAB_148715b78;
  }
  operator<<(param_1,&param_2->UVChannelData);
LAB_148715b78:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xc4) {
      (param_2->OverlayMaterialInterface).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
      return param_1;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->OverlayMaterialInterface);
  return param_1;
}

// operator<< @ 148715bd0

FArchive * __cdecl operator<<(FArchive *param_1,FStaticMeshBuffersSize *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->SerializedBuffersSize);
    }
  }
  else {
    param_2->SerializedBuffersSize = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->DepthOnlyIBSize;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->ReversedIBsSize;
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

// operator<< @ 148715cf0

FArchive * __cdecl operator<<(FArchive *param_1,FStaticMeshSection *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint local_res8 [2];
  
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
    param_2->MaterialIndex = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->FirstIndex;
  puVar2 = &param_1->field_0x2a;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->NumTriangles;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->MinVertexIndex;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->MaxVertexIndex;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->bEnableCollision);
  operator<<(param_1,&param_2->bCastShadow);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     0x24 < iVar5)) {
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      local_res8[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res8[0] = (uint)(param_2->bForceOpaque != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        param_2->bForceOpaque = local_res8[0] != 0;
      }
    }
    else {
      param_2->bForceOpaque = *piVar3 != 0;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(param_2->bVisibleInRayTracing != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      param_2->bVisibleInRayTracing = local_res8[0] != 0;
    }
  }
  else {
    param_2->bVisibleInRayTracing = *piVar3 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(param_2->bAffectDistanceFieldLighting != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      param_2->bAffectDistanceFieldLighting = local_res8[0] != 0;
    }
    return param_1;
  }
  param_2->bAffectDistanceFieldLighting = *piVar3 != 0;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  return param_1;
}

// operator<< @ 148716050

FArchive * __cdecl operator<<(FArchive *param_1,FTextureData *param_2)

{
  operator<<(param_1,&param_2->Header);
  operator<<<UE::Math::TVector4<float>_2_4294967295>(param_1,&param_2->FallbackValuesQuantized);
  TArrayPrivateFriend::Serialize<UE::SVT::FTextureData::FMipMap,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->MipMaps);
  return param_1;
}

// operator<< @ 1487160a0

FArchive * __cdecl operator<<(FArchive *param_1,FLumenCardBuildData *param_2)

{
  uchar *puVar1;
  
  UE::Math::operator<<(param_1,&(param_2->OBB).AxisX);
  UE::Math::operator<<(param_1,&(param_2->OBB).AxisY);
  UE::Math::operator<<(param_1,&(param_2->OBB).AxisZ);
  UE::Math::operator<<(param_1,(TVector<float> *)param_2);
  UE::Math::operator<<(param_1,&(param_2->OBB).Extent);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->AxisAlignedDirectionIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->AxisAlignedDirectionIndex,1);
  return param_1;
}

// operator<< @ 148716140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FSpeedTreeWind *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  double dVar5;
  FSpeedTreeWind *_Dst;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_608 [32];
  undefined8 local_5e8;
  bool local_5e0;
  bool local_5df;
  bool local_5de;
  bool local_5dd;
  bool local_5dc;
  bool local_5db;
  bool local_5da;
  bool local_5d9;
  bool local_5d8;
  bool local_5d7;
  bool local_5d6;
  bool local_5d5;
  bool local_5d4;
  bool local_5d3;
  bool local_5d2;
  bool local_5d1;
  bool local_5d0;
  bool local_5cf;
  bool local_5ce;
  bool local_5cd;
  bool local_5cc;
  bool local_5cb;
  bool local_5ca;
  bool local_5c9;
  bool local_5c8;
  bool local_5c7;
  bool local_5c6;
  bool local_5c5 [5];
  float local_5c0 [2];
  longlong local_5b8;
  FSpeedTreeWind *local_5b0;
  TVector<double>_u_0 local_5a8;
  uint local_588;
  uint local_584;
  uint local_580;
  uint local_57c;
  uint local_578 [100];
  uint local_3e8;
  uint local_3e4;
  uint local_3e0 [10];
  uint local_3b8 [40];
  uint local_318 [46];
  uint local_260 [102];
  uint local_c8 [10];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_608;
  local_5b0 = param_2;
  memcpy(&local_588,param_2,0x534);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_588,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_588);
    }
  }
  else {
    local_588 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_584,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_584);
    }
  }
  else {
    local_584 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_580,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_580);
    }
  }
  else {
    local_580 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_57c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_57c);
    }
  }
  else {
    local_57c = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  puVar7 = local_578;
  lVar6 = 10;
  do {
    lVar9 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar7);
        }
      }
      else {
        *puVar7 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3e8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_3e8);
    }
  }
  else {
    local_3e8 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3e4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_3e4);
    }
  }
  else {
    local_3e4 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  puVar7 = local_3e0;
  lVar6 = 10;
  do {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar7);
      }
    }
    else {
      *puVar7 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar7 = local_3b8;
  lVar6 = 10;
  do {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar7);
      }
    }
    else {
      *puVar7 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar7 = local_318;
  local_5b8 = 2;
  local_5e8 = 2;
  do {
    puVar8 = puVar7 + -0x1e;
    lVar6 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar8 = puVar7 + -0x14;
    lVar6 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar8 = puVar7 + -10;
    lVar6 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar7);
      }
    }
    else {
      *puVar7 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 1;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 2;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    puVar7 = puVar7 + 0x21;
    local_5e8 = local_5e8 + -1;
  } while (local_5e8 != 0);
  local_5e8._0_4_ = 0;
  local_5e8._4_4_ = 0;
  if (*(int *)&param_1->field_0x40 < 0x16c) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_5e8._0_4_ = 0;
    local_5e8._4_4_ = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_5e8);
      }
    }
    else {
      local_5e8._0_4_ = *(uint *)*plVar3;
      local_5e8._4_4_ = 0;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_5e8);
      }
    }
    else {
      local_5e8._0_4_ = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_5e8);
      }
    }
    else {
      local_5e8._0_4_ = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_5e8);
      }
    }
    else {
      local_5e8._0_4_ = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  puVar7 = local_260;
  lVar6 = 10;
  do {
    puVar8 = puVar7 + -10;
    lVar9 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = 10;
    puVar8 = puVar7;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar8 = puVar7 + 10;
    lVar9 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar8 = puVar7 + 0x14;
    lVar9 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar8 = puVar7 + 0x1e;
    lVar9 = 10;
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar8);
        }
      }
      else {
        *puVar8 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 0x28;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 0x29;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 0x2a;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 0x2b;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 0x2c;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    puVar8 = puVar7 + 0x2d;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    puVar7 = puVar7 + 0x38;
    local_5b8 = local_5b8 + -1;
  } while (local_5b8 != 0);
  puVar7 = local_c8;
  local_5b8 = 0;
  do {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar7);
      }
    }
    else {
      *puVar7 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_a0);
    }
  }
  else {
    local_a0 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_9c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_9c);
    }
  }
  else {
    local_9c = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (0x16b < *(int *)&param_1->field_0x40) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_98);
      }
    }
    else {
      local_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_94);
      }
    }
    else {
      local_94 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_90,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_90);
      }
    }
    else {
      local_90 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_8c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_8c);
      }
    }
    else {
      local_8c = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_88,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_88);
      }
    }
    else {
      local_88 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_84,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_84);
      }
    }
    else {
      local_84 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_80,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_80);
      }
    }
    else {
      local_80 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_7c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_7c);
      }
    }
    else {
      local_7c = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_78);
      }
    }
    else {
      local_78 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_74,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_74);
      }
    }
    else {
      local_74 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_70,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_70);
    }
  }
  else {
    local_70 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_6c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_6c);
    }
  }
  else {
    local_6c = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_68);
    }
  }
  else {
    local_68 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_64);
    }
  }
  else {
    local_64 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_60);
    }
  }
  else {
    local_60 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_5c);
    }
  }
  else {
    local_5c = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_58,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_58);
    }
  }
  else {
    local_58[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  _Dst = local_5b0;
  local_5e0 = local_5b0->m_abOptions[0];
  operator<<(param_1,&local_5e0);
  local_5df = _Dst->m_abOptions[1];
  operator<<(param_1,&local_5df);
  local_5de = _Dst->m_abOptions[2];
  operator<<(param_1,&local_5de);
  local_5dd = _Dst->m_abOptions[3];
  operator<<(param_1,&local_5dd);
  local_5dc = _Dst->m_abOptions[4];
  operator<<(param_1,&local_5dc);
  local_5db = _Dst->m_abOptions[5];
  operator<<(param_1,&local_5db);
  local_5da = _Dst->m_abOptions[6];
  operator<<(param_1,&local_5da);
  if (*(int *)&param_1->field_0x40 < 0x16c) {
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    if (puVar4[1] < *puVar4 + 4) {
      local_5e8._0_4_ = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      if (1 < (uint)local_5e8) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  local_5d9 = _Dst->m_abOptions[7];
  operator<<(param_1,&local_5d9);
  local_5d8 = _Dst->m_abOptions[8];
  operator<<(param_1,&local_5d8);
  local_5d7 = _Dst->m_abOptions[9];
  operator<<(param_1,&local_5d7);
  local_5d6 = _Dst->m_abOptions[10];
  operator<<(param_1,&local_5d6);
  local_5d5 = _Dst->m_abOptions[0xb];
  operator<<(param_1,&local_5d5);
  local_5d4 = _Dst->m_abOptions[0xc];
  operator<<(param_1,&local_5d4);
  if (*(int *)&param_1->field_0x40 < 0x16c) {
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    if (puVar4[1] < *puVar4 + 4) {
      local_5e8._0_4_ = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      if (1 < (uint)local_5e8) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  local_5d3 = _Dst->m_abOptions[0xd];
  operator<<(param_1,&local_5d3);
  local_5d2 = _Dst->m_abOptions[0xe];
  operator<<(param_1,&local_5d2);
  local_5d1 = _Dst->m_abOptions[0xf];
  operator<<(param_1,&local_5d1);
  local_5d0 = _Dst->m_abOptions[0x10];
  operator<<(param_1,&local_5d0);
  local_5cf = _Dst->m_abOptions[0x11];
  operator<<(param_1,&local_5cf);
  if (*(int *)&param_1->field_0x40 < 0x16c) {
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    if (puVar4[1] < *puVar4 + 4) {
      local_5e8._0_4_ = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      if (1 < (uint)local_5e8) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  local_5ce = _Dst->m_abOptions[0x12];
  operator<<(param_1,&local_5ce);
  local_5cd = _Dst->m_abOptions[0x13];
  operator<<(param_1,&local_5cd);
  local_5cc = _Dst->m_abOptions[0x14];
  operator<<(param_1,&local_5cc);
  local_5cb = _Dst->m_abOptions[0x15];
  operator<<(param_1,&local_5cb);
  local_5ca = _Dst->m_abOptions[0x16];
  operator<<(param_1,&local_5ca);
  if (*(int *)&param_1->field_0x40 < 0x16c) {
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    if (puVar4[1] < *puVar4 + 4) {
      local_5e8._0_4_ = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
      if (1 < (uint)local_5e8) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  local_5c9 = _Dst->m_abOptions[0x17];
  operator<<(param_1,&local_5c9);
  local_5c8 = _Dst->m_abOptions[0x18];
  operator<<(param_1,&local_5c8);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  local_5c7 = _Dst->m_abOptions[0x19];
  puVar7 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar7) {
    local_5e8._0_4_ = 0;
    if ((*puVar1 & 1) == 0) {
      local_5e8._0_4_ = (uint)(local_5c7 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5e8,4);
    if (1 < (uint)local_5e8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = (uint)local_5e8;
    if ((*puVar1 & 1) == 0) goto LAB_14871741f;
  }
  else {
    uVar2 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar7;
  }
  local_5c7 = uVar2 != 0;
LAB_14871741f:
  local_5c6 = _Dst->m_abOptions[0x1a];
  operator<<(param_1,&local_5c6);
  if (0x16b < *(int *)&param_1->field_0x40) {
    local_5c5[0] = _Dst->m_abOptions[0x1b];
    operator<<(param_1,local_5c5);
  }
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)_Dst->m_afBranchWindAnchor >> 0x20);
  local_5a8._8_4_ = SUB84(dVar5,0);
  local_5a8._s_0.X = (double)(float)*(undefined8 *)_Dst->m_afBranchWindAnchor;
  local_5a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_5a8._s_0.Z = (double)_Dst->m_afBranchWindAnchor[2];
  local_5c0[0] = _Dst->m_fMaxBranchLevel1Length;
  UE::Math::operator<<(param_1,(TVector<double> *)&local_5a8._s_0);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_5c0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_5c0);
    }
  }
  else {
    local_5c0[0] = *(float *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((*puVar1 & 1) != 0) {
    _Dst->m_abOptions[0] = local_5e0;
    _Dst->m_abOptions[1] = local_5df;
    _Dst->m_abOptions[2] = local_5de;
    _Dst->m_abOptions[3] = local_5dd;
    _Dst->m_abOptions[4] = local_5dc;
    _Dst->m_abOptions[5] = local_5db;
    _Dst->m_abOptions[6] = local_5da;
    _Dst->m_abOptions[7] = local_5d9;
    _Dst->m_abOptions[8] = local_5d8;
    _Dst->m_abOptions[9] = local_5d7;
    _Dst->m_abOptions[10] = local_5d6;
    _Dst->m_abOptions[0xb] = local_5d5;
    _Dst->m_abOptions[0xc] = local_5d4;
    _Dst->m_abOptions[0xd] = local_5d3;
    _Dst->m_abOptions[0xe] = local_5d2;
    _Dst->m_abOptions[0xf] = local_5d1;
    _Dst->m_abOptions[0x10] = local_5d0;
    _Dst->m_abOptions[0x11] = local_5cf;
    _Dst->m_abOptions[0x12] = local_5ce;
    _Dst->m_abOptions[0x13] = local_5cd;
    _Dst->m_abOptions[0x14] = local_5cc;
    _Dst->m_abOptions[0x15] = local_5cb;
    _Dst->m_abOptions[0x16] = local_5ca;
    _Dst->m_abOptions[0x17] = local_5c9;
    _Dst->m_abOptions[0x18] = local_5c8;
    _Dst->m_abOptions[0x19] = local_5c7;
    _Dst->m_abOptions[0x1a] = local_5c6;
    _Dst->m_abOptions[0x1b] = local_5c5[0];
    memcpy(_Dst,&local_588,0x534);
    _Dst->m_afBranchWindAnchor[0] = (float)local_5a8._s_0.X;
    _Dst->m_afBranchWindAnchor[1] = (float)local_5a8._s_0.Y;
    _Dst->m_afBranchWindAnchor[2] = (float)local_5a8._s_0.Z;
    _Dst->m_fMaxBranchLevel1Length = local_5c0[0];
  }
  return param_1;
}

// operator== @ 1487176c0

bool __cdecl operator==(FStaticMaterial *param_1,FStaticMaterial *param_2)

{
  if (((param_1->MaterialInterface).field0_0x0.DebugPtr ==
       (param_2->MaterialInterface).field0_0x0.DebugPtr) &&
     (param_1->MaterialSlotName == param_2->MaterialSlotName)) {
    return true;
  }
  return false;
}

// operator== @ 1487176e0

bool __cdecl operator==(FStaticMaterial *param_1,UMaterialInterface *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = (param_1->MaterialInterface).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    return param_2 == (UMaterialInterface *)0x0;
  }
  return pUVar1 == param_2;
}

// operator== @ 148717700

bool __cdecl operator==(UMaterialInterface *param_1,FStaticMaterial *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = (param_2->MaterialInterface).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    return param_1 == (UMaterialInterface *)0x0;
  }
  return pUVar1 == param_1;
}

// operator() @ 148719bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`InitSplineVertexFactory_Internal'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined1 auStackY_118 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  InitSplineMeshVertexFactoryComponents
            (*(FStaticMeshVertexBuffers **)((longlong)this + 8),*(FSplineMeshVertexFactory **)this,
             *(int *)((longlong)this + 0x14),*(bool *)((longlong)this + 0x10),&local_e8);
  FLocalVertexFactory::SetData(*(FLocalVertexFactory **)this,param_1,&local_e8);
  (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14871c090

/* [thunk]:public: virtual void * __ptr64 __cdecl ASpectatorPawn::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ASpectatorPawn::_vector_deleting_destructor__adjustor_704__(ASpectatorPawn *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ASpectatorPawn *)&this[-1].field_0xa8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{3104}' @ 14871c0a4

/* [thunk]:public: virtual void * __ptr64 __cdecl FNaniteSplineMeshSceneProxy::`vector deleting
   destructor'`adjustor{3104}' (unsigned int) __ptr64 */

void * __thiscall
FNaniteSplineMeshSceneProxy::_vector_deleting_destructor__adjustor_3104__
          (FNaniteSplineMeshSceneProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FNaniteSplineMeshSceneProxy *)&this[-1].field_0x210,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{2952}' @ 14871c0b8

/* [thunk]:public: virtual void * __ptr64 __cdecl FSplineMeshSceneProxy::`vector deleting
   destructor'`adjustor{2952}' (unsigned int) __ptr64 */

void * __thiscall
FSplineMeshSceneProxy::_vector_deleting_destructor__adjustor_2952__
          (FSplineMeshSceneProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSplineMeshSceneProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14871c0cc

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UE::SVT::FStreamingManager::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
UE::SVT::FStreamingManager::_vector_deleting_destructor__adjustor_32__
          (FStreamingManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FStreamingManager *)&this[-1].ResidentPagesDiff,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14871c0dc

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimatedSparseVolumeTexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimatedSparseVolumeTexture::_vector_deleting_destructor__adjustor_40__
          (UAnimatedSparseVolumeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimatedSparseVolumeTexture *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{392}' @ 14871c0ec

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundWaveProcedural::`vector deleting
   destructor'`adjustor{392}' (unsigned int) __ptr64 */

void * __thiscall
USoundWaveProcedural::_vector_deleting_destructor__adjustor_392__
          (USoundWaveProcedural *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USoundWaveProcedural *)&this[-1].field_0x2e8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14871c100

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundWaveProcedural::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USoundWaveProcedural::_vector_deleting_destructor__adjustor_40__
          (USoundWaveProcedural *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundWaveProcedural *)&this[-1].OnSoundWaveProceduralUnderflow,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14871c110

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundWaveProcedural::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USoundWaveProcedural::_vector_deleting_destructor__adjustor_48__
          (USoundWaveProcedural *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundWaveProcedural *)&this[-1].NumSamplesToGeneratePerCallback,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{296}' @ 14871c120

/* [thunk]:public: virtual void * __ptr64 __cdecl USpectatorPawnMovement::`vector deleting
   destructor'`adjustor{296}' (unsigned int) __ptr64 */

void * __thiscall
USpectatorPawnMovement::_vector_deleting_destructor__adjustor_296__
          (USpectatorPawnMovement *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USpectatorPawnMovement *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14871c134

/* [thunk]:public: virtual void * __ptr64 __cdecl USpectatorPawnMovement::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USpectatorPawnMovement::_vector_deleting_destructor__adjustor_40__
          (USpectatorPawnMovement *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USpectatorPawnMovement *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14871c144

/* [thunk]:public: virtual void * __ptr64 __cdecl UStaticMesh::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UStaticMesh::_vector_deleting_destructor__adjustor_224__(UStaticMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UStaticMesh *)&this[-1].LightMapCoordinateIndex,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14871c158

/* [thunk]:public: virtual void * __ptr64 __cdecl UStaticMesh::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UStaticMesh::_vector_deleting_destructor__adjustor_232__(UStaticMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UStaticMesh *)&this[-1].LightmapUVDensity,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{240}' @ 14871c16c

/* [thunk]:public: virtual void * __ptr64 __cdecl UStaticMesh::`vector deleting
   destructor'`adjustor{240}' (unsigned int) __ptr64 */

void * __thiscall
UStaticMesh::_vector_deleting_destructor__adjustor_240__(UStaticMesh *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UStaticMesh *)
                      (this[-1].MaterialsInfoCriticalSection.CriticalSection.Opaque3 + 2),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14871c180

/* [thunk]:public: virtual void * __ptr64 __cdecl UStaticSparseVolumeTexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UStaticSparseVolumeTexture::_vector_deleting_destructor__adjustor_40__
          (UStaticSparseVolumeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UStaticSparseVolumeTexture *)&this[-1].field_0x88,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14871c190

/* [thunk]:public: virtual void * __ptr64 __cdecl UStreamableSparseVolumeTexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UStreamableSparseVolumeTexture::_vector_deleting_destructor__adjustor_40__
          (UStreamableSparseVolumeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UStreamableSparseVolumeTexture *)&this[-1].AssetUserData,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14871c1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(enum_FBulkDataRequest::EStatus),0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6AXW4EStatus_FBulkDataRequest___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`30'::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::`2'::<lambda_1>,1,1>
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

// `scalar_deleting_destructor' @ 14871c240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::`7'::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::`2'::<lambda_1>,1,1>
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

// `scalar_deleting_destructor' @ 14871c2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::`28'::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::`2'::<lambda_1>,1,1>
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

// `scalar_deleting_destructor' @ 14871c300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FStreamingManager::Add_GameThread'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FStreamingManager::Add_GameThread'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x90));
  }
  DestructItems<UE::SVT::FStreamingManager::FFrameInfo,int>
            (*(FFrameInfo **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x78));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitModelVF'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitModelVF'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStaticMesh::InitResources'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UStaticMesh::InitResources'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InitSplineVertexFactory_Internal'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`InitSplineVertexFactory_Internal'::`2'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexFactories::InitVertexFactory'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexFactories::InitVertexFactory'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitWithDummyData'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitWithDummyData'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FStreamingManager::Remove_GameThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FStreamingManager::Remove_GameThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FStreamingManager::Request_GameThread'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FStreamingManager::Request_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureFrame::BeginDestroy'::__l16::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`USparseVolumeTextureFrame::BeginDestroy'::`16'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRayTracingProxyLOD::InitResources'::`20'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::__l29::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::`29'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l38::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`38'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRenderData::ReleaseResources'::__l13::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRenderData::ReleaseResources'::`13'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`2'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::`2'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::__l2::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`2'::<lambda_3>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c7b0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>_>_>
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

// `scalar_deleting_destructor' @ 14871c810

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>_>_>
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

// `scalar_deleting_destructor' @ 14871c870

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>_>_>
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

// `scalar_deleting_destructor' @ 14871c8d0

void * __thiscall
TGraphTask<UE::SVT::FStreamingUpdateTask>::_scalar_deleting_destructor_
          (TGraphTask<UE::SVT::FStreamingUpdateTask> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14871c930

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FSparseVolumeTextureUpdatePageTableCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<FSparseVolumeTextureUpdatePageTableCS::FParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c990

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdateFromSparseBufferCS>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871c9f0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FSparseVolumeTextureUpdatePageTableCS>'::__l2::<lambda_1>_>
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
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871ca50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSpeedTreeWind,SharedPointerInternals::DefaultDeleter<FSpeedTreeWind>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSpeedTreeWind,SharedPointerInternals::DefaultDeleter<FSpeedTreeWind>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871ca90

void * __thiscall
TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy>::_scalar_deleting_destructor_
          (TSplineMeshSceneProxyCommon<FNaniteSplineMeshSceneProxy> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TSplineMeshSceneProxyCommon_VFNaniteSplineMeshSceneProxy____6B_
  ;
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->SplineMeshInstanceData);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871caf0

void * __thiscall
TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy>::_scalar_deleting_destructor_
          (TSplineMeshSceneProxyCommon<FSplineMeshSceneProxy> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TSplineMeshSceneProxyCommon_VFSplineMeshSceneProxy____6B_;
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->SplineMeshInstanceData);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cb50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall ASpectatorPawn::_scalar_deleting_destructor_(ASpectatorPawn *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  ADefaultPawn::~ADefaultPawn((ADefaultPawn *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cbc0

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
ASplineMeshActor::_scalar_deleting_destructor_(ASplineMeshActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ASplineMeshActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void * __thiscall ASpotLight::_scalar_deleting_destructor_(ASpotLight *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ASpotLight__6B_;
  ALight::~ALight((ALight *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cc80

void * __thiscall
FNaniteSplineMeshSceneProxy::_scalar_deleting_destructor_
          (FNaniteSplineMeshSceneProxy *this,uint param_1)

{
  *(undefined ***)&this->field_0xc20 =
       &___7__TSplineMeshSceneProxyCommon_VFNaniteSplineMeshSceneProxy____6B_;
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0xdf8);
  FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->field_0xcd8);
  Nanite::FSceneProxy::~FSceneProxy((FSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871ccf0

void * __thiscall
FSoftSplineMeshComponentDescriptor::_scalar_deleting_destructor_
          (FSoftSplineMeshComponentDescriptor *this,uint param_1)

{
  ~FSoftSplineMeshComponentDescriptor(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cd30

void * __thiscall
FSplineMeshComponentDescriptor::_scalar_deleting_destructor_
          (FSplineMeshComponentDescriptor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptor__6B_;
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance((FBodyInstance *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cdb0

void * __thiscall
FSplineMeshComponentDescriptorBase::_scalar_deleting_destructor_
          (FSplineMeshComponentDescriptorBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSplineMeshComponentDescriptorBase__6B_;
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871ce00

void * __thiscall
FSplineMeshSceneProxy::_scalar_deleting_destructor_(FSplineMeshSceneProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LODResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__TSplineMeshSceneProxyCommon_VFSplineMeshSceneProxy____6B_;
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers
            ((FSingleInstanceDataBuffers *)&this->_padding_);
  FStaticMeshSceneProxy::~FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xda0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871ce80

void * __thiscall
FSplineMeshVertexFactory::_scalar_deleting_destructor_(FSplineMeshVertexFactory *this,uint param_1)

{
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cec0

void * __thiscall
FStaticMeshAreaWeightedSectionSampler::_scalar_deleting_destructor_
          (FStaticMeshAreaWeightedSectionSampler *this,uint param_1)

{
  longlong *plVar1;
  FStaticMeshLODResources *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Owner).Reference;
  if (pFVar2 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cf30

void * __thiscall
FStaticMeshLODResources::_scalar_deleting_destructor_(FStaticMeshLODResources *this,uint param_1)

{
  ~FStaticMeshLODResources(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871cf70

void * __thiscall
FStaticMeshRayTracingProxyLOD::_scalar_deleting_destructor_
          (FStaticMeshRayTracingProxyLOD *this,uint param_1)

{
  FRayTracingGeometry *pFVar1;
  FStaticMeshVertexBuffers *this_00;
  FRawStaticIndexBuffer *pFVar2;
  FStaticMeshSectionArray *pFVar3;
  
  this->_padding_ = (longlong)&___7FStaticMeshRayTracingProxyLOD__6B_;
  if ((this->bOwnsRayTracingGeometry) &&
     (pFVar1 = this->RayTracingGeometry, pFVar1 != (FRayTracingGeometry *)0x0)) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  if (this->bOwnsBuffers) {
    this_00 = this->VertexBuffers;
    if (this_00 != (FStaticMeshVertexBuffers *)0x0) {
      FColorVertexBuffer::~FColorVertexBuffer(&this_00->ColorVertexBuffer);
      FPositionVertexBuffer::~FPositionVertexBuffer(&this_00->PositionVertexBuffer);
      FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
      ::operator_delete(this_00,0x158);
    }
    pFVar2 = this->IndexBuffer;
    if (pFVar2 != (FRawStaticIndexBuffer *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    pFVar3 = this->Sections;
    if (pFVar3 != (FStaticMeshSectionArray *)0x0) {
      if (*(void **)&pFVar3->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar3->field_0x20);
      }
      ::operator_delete(pFVar3,0x30);
    }
  }
  FBulkData::~FBulkData((FBulkData *)&this->StreamableData);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d050

void * __thiscall
FStaticMeshSectionAreaWeightedTriangleSampler::_scalar_deleting_destructor_
          (FStaticMeshSectionAreaWeightedTriangleSampler *this,uint param_1)

{
  FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d090

void * __thiscall
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer::_scalar_deleting_destructor_
          (FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSamplerBuffer__6B_;
  this_00 = (this->BufferSectionTriangleSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BufferSectionTriangleRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UE::SVT::FStreamingManager::_scalar_deleting_destructor_(FStreamingManager *this,uint param_1)

{
  ~FStreamingManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d140

void * __thiscall
UE::SVT::FTextureRenderResources::_scalar_deleting_destructor_
          (FTextureRenderResources *this,uint param_1)

{
  FRHITextureReference *pFVar1;
  
  pFVar1 = (this->PhysicalTileDataBTextureReferenceRHI).Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PhysicalTileDataATextureReferenceRHI).Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PageTableTextureReferenceRHI).Reference;
  if (pFVar1 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d1c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UE::SVT::FTileDataTexture::_scalar_deleting_destructor_(FTileDataTexture *this,uint param_1)

{
  IPooledRenderTarget *pIVar1;
  FTileUploader *this_00;
  
  pIVar1 = (this->TileDataTextureB).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TileDataTextureA).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  this_00 = (this->TileUploader).Ptr;
  if (this_00 != (FTileUploader *)0x0) {
    FTileUploader::~FTileUploader(this_00);
    ::operator_delete(this_00,0x98);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d250

void * __thiscall
UE::SVT::IStreamingManager::_scalar_deleting_destructor_(IStreamingManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d280

void * __thiscall
UAnimatedSparseVolumeTexture::_scalar_deleting_destructor_
          (UAnimatedSparseVolumeTexture *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
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

// `scalar_deleting_destructor' @ 14871d310

void * __thiscall
UAnimatedSparseVolumeTextureController::_scalar_deleting_destructor_
          (UAnimatedSparseVolumeTextureController *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 14871d370

void * __thiscall
USoundWaveProcedural::_scalar_deleting_destructor_(USoundWaveProcedural *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x180 = &_vftable__for__IAudioProxyDataFactory__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__IInterface_AsyncCompilation__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSoundWaveProceduralUnderflow);
  pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->QueuedAudio).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->QueuedAudio).Tail = pTVar2->NextNode;
    pFVar1 = (pTVar2->Item).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->QueuedAudio).Tail;
  }
  USoundWave::~USoundWave((USoundWave *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x470);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d480

void * __thiscall
USparseVolumeTexture::_scalar_deleting_destructor_(USparseVolumeTexture *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14871d4e0

void * __thiscall
USparseVolumeTextureFrame::_scalar_deleting_destructor_
          (USparseVolumeTextureFrame *this,uint param_1)

{
  UE::SVT::FResources::~FResources(&this->Resources);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d550

void * __thiscall
USpectatorPawnMovement::_scalar_deleting_destructor_(USpectatorPawnMovement *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7USpectatorPawnMovement__6B_;
  UFloatingPawnMovement::~UFloatingPawnMovement((UFloatingPawnMovement *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d5e0

void * __thiscall UStaticMesh::_scalar_deleting_destructor_(UStaticMesh *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FStaticMeshRenderData *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpeedTreeWind).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MaterialsInfoCriticalSection);
  DestructItems<FStaticMaterialMinimalInfo,int>
            ((FStaticMaterialMinimalInfo *)(this->StaticMaterialsInfoCache).AllocatorInstance.Data,
             (this->StaticMaterialsInfoCache).ArrayNum);
  pFVar1 = (this->StaticMaterialsInfoCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MinQualityLevelLOD).PerQuality.field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinQualityLevelLOD).PerQuality.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MinQualityLevelLOD).PerQuality);
  pvVar2 = (void *)(this->MinQualityLevelLOD)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this_00 = (this->RenderData).Ptr;
  if (this_00 != (FStaticMeshRenderData *)0x0) {
    FStaticMeshRenderData::~FStaticMeshRenderData(this_00);
    ::operator_delete(this_00,0x98);
  }
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UStreamableRenderAsset::~UStreamableRenderAsset((UStreamableRenderAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14871d780

void * __thiscall
UStaticSparseVolumeTexture::_scalar_deleting_destructor_
          (UStaticSparseVolumeTexture *this,uint param_1)

{
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  *(undefined ***)&this->field_0x28 = &___7IInterface_AssetUserData__6B_;
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

// `scalar_deleting_destructor' @ 14871d810

void * __thiscall
UStreamableSparseVolumeTexture::_scalar_deleting_destructor_
          (UStreamableSparseVolumeTexture *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x28 = &___7IInterface_AssetUserData__6B_;
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

// EmptyLinkFunctionForGeneratedCodeSoundWaveProcedural @ 148730ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundWaveProcedural(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSparseVolumeTexture @ 148730af0

void __cdecl EmptyLinkFunctionForGeneratedCodeSparseVolumeTexture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpectatorPawn @ 148730b00

void __cdecl EmptyLinkFunctionForGeneratedCodeSpectatorPawn(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpectatorPawnMovement @ 148730b10

void __cdecl EmptyLinkFunctionForGeneratedCodeSpectatorPawnMovement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSplineMeshActor @ 148730b20

void __cdecl EmptyLinkFunctionForGeneratedCodeSplineMeshActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSplineMeshComponentDescriptor @ 148730b30

void __cdecl EmptyLinkFunctionForGeneratedCodeSplineMeshComponentDescriptor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpotLight @ 148730b40

void __cdecl EmptyLinkFunctionForGeneratedCodeSpotLight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStaticMesh @ 148730b50

void __cdecl EmptyLinkFunctionForGeneratedCodeStaticMesh(void)

{
  return;
}

// GetCollisionVertIndexForMeshVertIndex @ 14873a310

int __cdecl
GetCollisionVertIndexForMeshVertIndex
          (int param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_4,FPositionVertexBuffer *param_5,FStaticMeshVertexBuffer *param_6)

{
  uchar *puVar1;
  ushort *puVar2;
  uchar *puVar3;
  code *pcVar4;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  undefined1 *puVar15;
  float fVar16;
  float fVar17;
  uint local_res8 [2];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_res10;
  int local_78;
  undefined1 local_74 [8];
  float fStack_6c;
  double local_68;
  double dStack_60;
  uint *local_58;
  int *local_50;
  
  piVar13 = (int *)0x0;
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar15 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar15 = &param_2->field_0x38;
    }
    iVar7 = *(int *)(puVar15 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)param_2);
        if (*piVar10 == param_1) {
          piVar9 = piVar10 + 1;
          if (piVar10 == (int *)0x0) {
            piVar9 = piVar13;
          }
          if (piVar9 != (int *)0x0) {
            return *piVar9;
          }
          break;
        }
        iVar7 = piVar10[2];
      } while (iVar7 != -1);
    }
  }
  iVar7 = param_4->ArrayNum;
  piVar10 = piVar13;
  local_res8[0] = param_1;
  local_res10 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )param_2;
  if (0 < iVar7) {
    do {
      uVar12 = (uint)piVar13;
      uVar6 = 0;
      if ((int)uVar12 < iVar7) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if ((param_3->ArrayNum != *(int *)((param_4->AllocatorInstance).Data + 8 + (longlong)piVar10))
         && (bVar5 = FDebug::CheckVerifyFailedImpl2
                               ("OutPositions.Num() == OutUVs[ChannelIdx].Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                                ,0x23b2,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      uVar6 = 0;
      if ((int)uVar12 < param_4->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      puVar3 = param_6->TexcoordDataPtr;
      pFVar14 = (param_4->AllocatorInstance).Data + (longlong)piVar10;
      pcVar4 = *(code **)((longlong)*param_6->TexcoordData + 0x50);
      piVar13 = (int *)((ulonglong)param_6->NumTexCoords * (ulonglong)local_res8[0] +
                       (longlong)piVar13);
      if (param_6->bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar3 + (longlong)piVar13 * 4);
        lVar8 = (*pcVar4)();
        if ((puVar3 + lVar8 < puVar2 + 2) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17b,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if ((puVar2 < param_6->TexcoordDataPtr) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17c,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        fVar16 = FGenericPlatformMath::LoadHalf(puVar2);
        local_74._4_4_ = fVar16;
        fVar17 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
      }
      else {
        puVar1 = puVar3 + (longlong)piVar13 * 8;
        lVar8 = (*pcVar4)();
        if ((puVar3 + lVar8 < puVar1 + 8) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17b,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if ((puVar1 < param_6->TexcoordDataPtr) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                               ,0x17c,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        unique0x00023d00 = *(undefined8 *)puVar1;
        fVar17 = fStack_6c;
        fVar16 = (float)local_74._4_4_;
      }
      local_68 = (double)fVar16;
      dStack_60 = (double)fVar17;
      if (((*(FScriptContainerElement **)&pFVar14->field_0x0 <= (FScriptContainerElement *)&local_68
           ) && ((FScriptContainerElement *)&local_68 <
                 *(FScriptContainerElement **)&pFVar14->field_0x0 +
                 (longlong)*(int *)(pFVar14 + 0xc) * 0x10)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = *(int *)&pFVar14[8].field_0x0;
      if (iVar7 == *(int *)(pFVar14 + 0xc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
      }
      piVar13 = (int *)(ulonglong)(uVar12 + 1);
      *(int *)&pFVar14[8].field_0x0 = iVar7 + 1;
      pFVar14 = *(FScriptContainerElement **)&pFVar14->field_0x0;
      *(double *)(pFVar14 + (longlong)iVar7 * 0x10) = local_68;
      *(double *)(pFVar14 + (longlong)iVar7 * 0x10 + 8) = dStack_60;
      iVar7 = param_4->ArrayNum;
      piVar10 = piVar10 + 4;
    } while ((int)(uVar12 + 1) < iVar7);
  }
  this = local_res10;
  pFVar14 = (param_3->AllocatorInstance).Data;
  pFVar11 = (FScriptContainerElement *)(param_5->Data + local_res8[0] * param_5->Stride);
  if (((pFVar14 <= pFVar11) && (pFVar11 < pFVar14 + (longlong)param_3->ArrayMax * 0xc)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  local_78 = param_3->ArrayNum;
  if (local_78 == param_3->ArrayMax) {
    local_78 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
    param_3->ArrayNum = local_78;
  }
  pFVar14 = (param_3->AllocatorInstance).Data;
  param_3->ArrayNum = local_78 + 1;
  *(undefined8 *)(pFVar14 + (longlong)local_78 * 0xc) = *(undefined8 *)pFVar11;
  *(undefined4 *)(pFVar14 + (longlong)local_78 * 0xc + 8) = *(undefined4 *)(pFVar11 + 8);
  local_58 = local_res8;
  local_50 = &local_78;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (this,(TPairInitializer<int_const_&,int_const_&> *)local_74,(bool *)&local_58);
  return local_78;
}

// GetForwardDeclaredShaderParametersStructMetadata @ 14873bda0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
GetForwardDeclaredShaderParametersStructMetadata(FSpeedTreeUniformParameters *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 auStackX_8 [8];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  bVar1 = FShaderParametersMetadataRegistration::IsReadyForRegistration();
  if (!bVar1) {
    `FSpeedTreeUniformParameters::GetStructMetadata'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pcVar2 = FSpeedTreeUniformParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar2 = (code *)(*pcVar2)(auStackX_8[0],&TStack_18);
      } while (pcVar2 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&StaticStructMetadata,UniformBuffer,Shader,L"FSpeedTreeUniformParameters",
                 L"FSpeedTreeUniformParameters",L"SpeedTreeData",(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SpeedTreeWind.h"
                 ,0x14e,0x260,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FSpeedTreeUniformParameters::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&_TSS0);
      return &StaticStructMetadata;
    }
  }
  return &StaticStructMetadata;
}

// InitSplineVertexFactory_Internal @ 1487489f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
InitSplineVertexFactory_Internal
          (FStaticMeshVertexFactories *param_1,FStaticMeshVertexBuffers *param_2,int param_3,
          Type param_4,FColorVertexBuffer *param_5)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [32];
  FLocalVertexFactory *local_d8;
  FStaticMeshVertexBuffers *pFStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((((param_2->StaticMeshVertexBuffer).NumVertices != 0) &&
      ((param_1->SplineVertexFactory == (FSplineMeshVertexFactory *)0x0 ||
       (param_5 != (FColorVertexBuffer *)0x0)))) &&
     ((param_1->SplineVertexFactoryOverrideColorVertexBuffer == (FSplineMeshVertexFactory *)0x0 ||
      (param_5 == (FColorVertexBuffer *)0x0)))) {
    local_d8 = operator_new(0x230);
    if (local_d8 == (FLocalVertexFactory *)0x0) {
      local_d8 = (FLocalVertexFactory *)0x0;
    }
    else {
      FLocalVertexFactory::FLocalVertexFactory(local_d8,param_4,"FSplineMeshVertexFactory");
      local_d8->_padding_ = (longlong)&___7FSplineMeshVertexFactory__6B_;
    }
    if (param_5 == (FColorVertexBuffer *)0x0) {
      param_1->SplineVertexFactory = (FSplineMeshVertexFactory *)local_d8;
    }
    else {
      param_1->SplineVertexFactoryOverrideColorVertexBuffer = (FSplineMeshVertexFactory *)local_d8;
    }
    local_c8 = CONCAT31(local_c8._1_3_,param_5 != (FColorVertexBuffer *)0x0);
    local_b8[0] = (code *)0x0;
    pFStack_d0 = param_2;
    iStack_c4 = param_3;
    local_90 = FMemory::Malloc(0x20,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`InitSplineVertexFactory_Internal'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = (code *)local_d8;
    local_90[2] = (code *)pFStack_d0;
    local_90[3] = (code *)CONCAT44(iStack_c4,local_c8);
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`InitSplineVertexFactory_Internal'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_InitSplineVertexFactory_Internal_::__l2::TSTR_InitSplineMeshVertexFactory225>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`InitSplineVertexFactory_Internal'::__l2::TSTR_InitSplineMeshVertexFactory225>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar3);
      uVar5 = (ulonglong)local_58;
      if ((2 < uVar5) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar4 = local_60;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar4 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar4 = local_90;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// MatchesLogFilter @ 14874cef0

bool __cdecl Audio::MatchesLogFilter(FName *param_1)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  pFVar2 = ::FName::ToString(param_1,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  bVar1 = MatchesLogFilter(pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SplineEvalPos @ 14875c860

TVector<float> * __cdecl
SplineEvalPos(TVector<float> *__return_storage_ptr__,FSplineMeshParams *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = param_2 * param_2;
  fVar10 = fVar7 * param_2;
  fVar11 = fVar10 - fVar7;
  dVar1 = (param_1->StartTangent).field0_0x0._s_0.Y;
  fVar8 = (fVar10 - (fVar7 + fVar7)) + param_2;
  fVar9 = fVar7 * __real_40400000 - (fVar10 + fVar10);
  fVar7 = ((fVar10 + fVar10) - fVar7 * __real_40400000) + __real_3f800000;
  dVar2 = (param_1->StartPos).field0_0x0._s_0.Y;
  dVar3 = (param_1->EndTangent).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)(param_1->StartPos).field0_0x0._s_0.X * fVar7 +
       (float)(param_1->StartTangent).field0_0x0._s_0.X * fVar8 +
       (float)(param_1->EndPos).field0_0x0._s_0.X * fVar9 +
       (float)(param_1->EndTangent).field0_0x0._s_0.X * fVar11;
  dVar4 = (param_1->StartTangent).field0_0x0._s_0.Z;
  dVar5 = (param_1->StartPos).field0_0x0._s_0.Z;
  dVar6 = (param_1->EndTangent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)dVar1 * fVar8 + (float)dVar2 * fVar7 +
       (float)dVar3 * fVar11 + (float)(param_1->EndPos).field0_0x0._s_0.Y * fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (float)dVar4 * fVar8 + (float)dVar5 * fVar7 +
       (float)dVar6 * fVar11 + (float)(param_1->EndPos).field0_0x0._s_0.Z * fVar9;
  return __return_storage_ptr__;
}

// SplineEvalTangent @ 14875c9b0

TVector<float> * __cdecl
SplineEvalTangent(TVector<float> *__return_storage_ptr__,FSplineMeshParams *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar2 = __real_40c00000;
  fVar1 = __real_40400000;
  fVar3 = (float)(param_1->StartPos).field0_0x0._s_0.Z;
  fVar4 = (float)(param_1->StartTangent).field0_0x0._s_0.Z;
  fVar5 = (float)(param_1->EndTangent).field0_0x0._s_0.Z;
  fVar8 = (float)(param_1->EndTangent).field0_0x0._s_0.X;
  fVar12 = (float)(param_1->EndTangent).field0_0x0._s_0.Y;
  fVar10 = (float)(param_1->StartTangent).field0_0x0._s_0.X;
  fVar9 = (float)(param_1->StartPos).field0_0x0._s_0.X;
  fVar16 = param_2 * param_2;
  fVar7 = (float)(param_1->EndPos).field0_0x0._s_0.X * __real_40c00000;
  fVar14 = (float)(param_1->StartPos).field0_0x0._s_0.Y;
  fVar15 = (float)(param_1->StartTangent).field0_0x0._s_0.Y;
  fVar6 = fVar15 * __real_40800000;
  fVar13 = (fVar12 + fVar15) * __real_40400000;
  fVar11 = (float)(param_1->EndPos).field0_0x0._s_0.Y * __real_40c00000;
  fVar17 = (float)(param_1->EndPos).field0_0x0._s_0.Z * __real_40c00000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar7 - (fVar9 * __real_40c00000 + fVar10 * __real_40800000 + fVar8 + fVar8)) * param_2 +
       (((fVar8 + fVar10) * __real_40400000 + fVar9 * __real_40c00000) - fVar7) * fVar16 + fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (fVar11 - (fVar14 * fVar2 + fVar6 + fVar12 + fVar12)) * param_2 +
       ((fVar13 + fVar14 * fVar2) - fVar11) * fVar16 + fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (fVar17 - (fVar3 * fVar2 + fVar4 * __real_40800000 + fVar5 + fVar5)) * param_2 +
       (((fVar5 + fVar4) * fVar1 + fVar3 * fVar2) - fVar17) * fVar16 + fVar4;
  return __return_storage_ptr__;
}

// UpdateSplineMeshParams_RenderThread @ 14875e6b0

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
UpdateSplineMeshParams_RenderThread(FPrimitiveSceneProxy *param_1,FSplineMeshShaderParams *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  FName FVar7;
  TVector2<float>_u_0 TVar8;
  bool bVar9;
  longlong lVar10;
  FSceneInterface **ppFVar11;
  
  if (param_1->bSplineMesh == '\0') {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("SceneProxy->IsSplineMesh()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxy.cpp"
                       ,0x22b,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar7 = *(FName *)((longlong)&(param_2->StartPos).field0_0x0 + 8);
  ppFVar11 = &param_1[4].Scene;
  if (param_1->bIsNaniteMesh == '\0') {
    ppFVar11 = (FSceneInterface **)(param_1[4].LocalToWorld.M[3] + 3);
  }
  uVar1 = *(undefined8 *)((longlong)ppFVar11 + 0xa4);
  ppFVar11[1] = (FSceneInterface *)*(FPrimitiveSceneInfo **)&(param_2->StartPos).field0_0x0;
  *(FName *)(ppFVar11 + 2) = FVar7;
  FVar7 = *(FName *)&(param_2->StartTangent).field0_0x0;
  *(FName *)(ppFVar11 + 3) = *(FName *)((longlong)&(param_2->EndPos).field0_0x0 + 4);
  *(FName *)(ppFVar11 + 4) = FVar7;
  lVar10 = *(longlong *)((longlong)&(param_2->EndTangent).field0_0x0 + 4);
  *(FName *)(ppFVar11 + 5) = *(FName *)((longlong)&(param_2->StartTangent).field0_0x0 + 8);
  ppFVar11[6] = (FSceneInterface *)lVar10;
  TVar8 = (param_2->EndOffset).field0_0x0;
  *(TVector2<float>_u_0 *)(ppFVar11 + 7) = (param_2->StartOffset).field0_0x0;
  *(TVector2<float>_u_0 *)(ppFVar11 + 8) = TVar8;
  TVar8 = (param_2->StartScale).field0_0x0;
  (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(ppFVar11 + 9))->AllocatorInstance).Data =
       *(FScriptContainerElement **)&param_2->StartRoll;
  *(TVector2<float>_u_0 *)(ppFVar11 + 10) = TVar8;
  lVar10 = *(longlong *)&param_2->MeshZScale;
  *(TVector2<float>_u_0 *)(ppFVar11 + 0xb) = (param_2->EndScale).field0_0x0;
  ppFVar11[0xc] = (FSceneInterface *)lVar10;
  lVar10 = *(longlong *)&param_2->bSmoothInterpRollScale;
  *(TVector2<float>_u_0 *)(ppFVar11 + 0xd) = (param_2->MeshDeformScaleMinMax).field0_0x0;
  ppFVar11[0xe] = (FSceneInterface *)lVar10;
  lVar10 = *(longlong *)&(param_2->MeshDir).field0_0x0;
  ppFVar11[0xf] = (FSceneInterface *)*(longlong *)((longlong)&(param_2->SplineUpDir).field0_0x0 + 4)
  ;
  ppFVar11[0x10] = (FSceneInterface *)lVar10;
  lVar10 = *(longlong *)((longlong)&(param_2->MeshX).field0_0x0 + 4);
  ppFVar11[0x11] = (FSceneInterface *)*(longlong *)((longlong)&(param_2->MeshDir).field0_0x0 + 8);
  ppFVar11[0x12] = (FSceneInterface *)lVar10;
  fVar3 = (param_2->MeshY).field0_0x0._s_0.Y;
  fVar4 = (param_2->MeshY).field0_0x0._s_0.Z;
  uVar5 = (param_2->TextureCoord).field0_0x0._s_0.X;
  *(float *)(ppFVar11 + 0x13) = (param_2->MeshY).field0_0x0._s_0.X;
  *(float *)((longlong)ppFVar11 + 0x9c) = fVar3;
  *(float *)(ppFVar11 + 0x14) = fVar4;
  *(uint *)((longlong)ppFVar11 + 0xa4) = uVar5;
  fVar3 = param_2->SplineDistToTexelScale;
  fVar4 = param_2->SplineDistToTexelOffset;
  fVar6 = param_2->NaniteClusterBoundsScale;
  *(uint *)(ppFVar11 + 0x15) = (param_2->TextureCoord).field0_0x0._s_0.Y;
  *(float *)((longlong)ppFVar11 + 0xac) = fVar3;
  *(float *)(ppFVar11 + 0x16) = fVar4;
  *(float *)((longlong)ppFVar11 + 0xb4) = fVar6;
  *(undefined8 *)((longlong)ppFVar11 + 0xa4) = uVar1;
  lVar10 = (**(code **)&(*ppFVar11)->FeatureLevel)(ppFVar11);
  bVar9 = FSplineMeshSceneInstanceDataBuffers::Update
                    ((FSplineMeshSceneInstanceDataBuffers *)(ppFVar11 + 0x17),
                     (FSplineMeshShaderParams *)(ppFVar11 + 1));
  if (bVar9) {
    (**(code **)(**(longlong **)(lVar10 + 0x220) + 0x510))
              (*(longlong **)(lVar10 + 0x220),*(undefined8 *)(lVar10 + 0x228),8);
  }
  *(undefined1 *)(ppFVar11 + 0x3a) = 1;
  return;
}

// Z_Construct_UClass_ASpectatorPawn_NoRegister @ 14875f7b0

UClass * __cdecl Z_Construct_UClass_ASpectatorPawn_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpectatorPawn",
               &Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton,
               ASpectatorPawn::StaticRegisterNativesASpectatorPawn,0x368,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ASpectatorPawn>,InternalVTableHelperCtorCaller<ASpectatorPawn>,
               local_res8,ADefaultPawn::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton;
}

// Z_Construct_UClass_ASplineMeshActor_NoRegister @ 14875f870

UClass * __cdecl Z_Construct_UClass_ASplineMeshActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMeshActor",
               &Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton,
               ASplineMeshActor::StaticRegisterNativesASplineMeshActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASplineMeshActor>,
               InternalVTableHelperCtorCaller<ASplineMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton;
}

// Z_Construct_UClass_ASpotLight_NoRegister @ 14875f930

UClass * __cdecl Z_Construct_UClass_ASpotLight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpotLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpotLight",&Z_Registration_Info_UClass_ASpotLight.InnerSingleton,
               ASpotLight::StaticRegisterNativesASpotLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASpotLight>,
               InternalVTableHelperCtorCaller<ASpotLight>,local_res8,ALight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpotLight.InnerSingleton;
}

// Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister @ 14875f9f0

UClass * __cdecl Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimatedSparseVolumeTextureController",
               &Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton,
               UAnimatedSparseVolumeTextureController::
               StaticRegisterNativesUAnimatedSparseVolumeTextureController,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimatedSparseVolumeTextureController>,
               InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTextureController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton;
}

// Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister @ 14875faa0

UClass * __cdecl Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimatedSparseVolumeTexture",
               &Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton,
               UAnimatedSparseVolumeTexture::StaticRegisterNativesUAnimatedSparseVolumeTexture,0xb0,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimatedSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTexture>,local_res8,
               UStreamableSparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.InnerSingleton;
}

// Z_Construct_UClass_USoundWaveProcedural_NoRegister @ 14875fb60

UClass * __cdecl Z_Construct_UClass_USoundWaveProcedural_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWaveProcedural",
               &Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton,
               USoundWaveProcedural::StaticRegisterNativesUSoundWaveProcedural,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundWaveProcedural>,
               InternalVTableHelperCtorCaller<USoundWaveProcedural>,aFStackX_8,
               USoundWave::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton;
}

// Z_Construct_UClass_USpectatorPawnMovement_NoRegister @ 14875fb70

UClass * __cdecl Z_Construct_UClass_USpectatorPawnMovement_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpectatorPawnMovement",
               &Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton,
               USpectatorPawnMovement::StaticRegisterNativesUSpectatorPawnMovement,0x1b0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USpectatorPawnMovement>,
               InternalVTableHelperCtorCaller<USpectatorPawnMovement>,local_res8,
               UFloatingPawnMovement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpectatorPawnMovement.InnerSingleton;
}

// Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister @ 14875fc30

UClass * __cdecl Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticSparseVolumeTexture",
               &Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton,
               UStaticSparseVolumeTexture::StaticRegisterNativesUStaticSparseVolumeTexture,0xb0,0x10
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStaticSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UStaticSparseVolumeTexture>,local_res8,
               UStreamableSparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton;
}

// Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister @ 14875fcf0

UClass * __cdecl Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamableSparseVolumeTexture",
               &Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton,
               UStreamableSparseVolumeTexture::StaticRegisterNativesUStreamableSparseVolumeTexture,
               0xb0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamableSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UStreamableSparseVolumeTexture>,local_res8,
               USparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EImportanceLevel @ 14875fdb0

UEnum * __cdecl Z_Construct_UEnum_Engine_EImportanceLevel(void)

{
  if (Z_Registration_Info_UEnum_EImportanceLevel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EImportanceLevel.InnerSingleton,
               &Z_Construct_UEnum_Engine_EImportanceLevel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EImportanceLevel.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENormalMode @ 14875fdf0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENormalMode(void)

{
  if (Z_Registration_Info_UEnum_ENormalMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENormalMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENormalMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENormalMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition @ 14875fe30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetEditorOrbitCameraPosition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetEditorOrbitCameraPosition.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetEditorOrbitCameraPosition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetEditorOrbitCameraPosition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMaterialRemapIndex @ 14875feb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMaterialRemapIndex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMaterialRemapIndex.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMaterialRemapIndex.InnerSingleton,
               &Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMaterialRemapIndex.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMaterialRemapIndex.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMeshSectionInfoMap @ 14875ff30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeshSectionInfoMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeshSectionInfoMap.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeshSectionInfoMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeshSectionInfoMap.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FMeshSectionInfoMap.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor @ 14875ffb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoftSplineMeshComponentDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoftSplineMeshComponentDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor @ 148760030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FSplineMeshComponentDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSplineMeshComponentDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStaticMaterialMinimalInfo @ 1487600b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStaticMaterialMinimalInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStaticMaterialMinimalInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStaticMaterialMinimalInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FStaticMaterialMinimalInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStaticMaterialMinimalInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStaticMaterialMinimalInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings @ 148760130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshOptimizationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStaticMeshOptimizationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStaticMeshOptimizationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStaticMeshOptimizationSettings.InnerSingleton;
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

// OnCreateRenderThreadResources'' @ 150401b90

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

// OnDestroyRenderThreadResources'' @ 150401bd0

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

// ShaderTypeRegistration'' @ 150401c10

void __cdecl
`dynamic_atexit_destructor_for_'FSparseVolumeTextureUpdateFromSparseBufferCS::
ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150401c20

void __cdecl
`dynamic_atexit_destructor_for_'FSparseVolumeTextureUpdatePageTableCS::ShaderTypeRegistration__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceEnableNaniteMeshes'' @ 150401c30

void __cdecl _dynamic_atexit_destructor_for__CVarForceEnableNaniteMeshes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceEnableNaniteMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNaniteVoxelsUseSourceMeshUVDensity'' @ 150401c50

void __cdecl _dynamic_atexit_destructor_for__CVarNaniteVoxelsUseSourceMeshUVDensity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNaniteVoxelsUseSourceMeshUVDensity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingSplineMeshes'' @ 150401c70

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingSplineMeshes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingSplineMeshes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingSplineMeshesForceUpdate'' @ 150401c90

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingSplineMeshesForceUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingSplineMeshesForceUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTEnabled'' @ 150401cb0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTEnabled__(void)

{
  CVarSVTEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTRemoteDDCBehavior'' @ 150401cd0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTRemoteDDCBehavior__(void)

{
  CVarSVTRemoteDDCBehavior._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTRemoteDDCBehavior);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingAsync'' @ 150401cf0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingAsync__(void)

{
  CVarSVTStreamingAsync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingAsync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingAsyncCompute'' @ 150401d10

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingAsyncCompute__(void)

{
  CVarSVTStreamingAsyncCompute._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingAsyncCompute);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingBandwidthLimit'' @ 150401d30

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingBandwidthLimit__(void)

{
  CVarSVTStreamingBandwidthLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingBandwidthLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingDDCChunkSize'' @ 150401d50

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingDDCChunkSize__(void)

{
  CVarSVTStreamingDDCChunkSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingDDCChunkSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingEmptyPhysicalTileTextures'' @ 150401d70

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingEmptyPhysicalTileTextures__(void)

{
  CVarSVTStreamingEmptyPhysicalTileTextures._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSVTStreamingEmptyPhysicalTileTextures);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingForceBlockingRequests'' @ 150401d90

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingForceBlockingRequests__(void)

{
  CVarSVTStreamingForceBlockingRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSVTStreamingForceBlockingRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingForceEstimateFrameRate'' @ 150401db0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingForceEstimateFrameRate__(void)

{
  CVarSVTStreamingForceEstimateFrameRate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSVTStreamingForceEstimateFrameRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingInstanceCleanupThreshold'' @ 150401dd0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingInstanceCleanupThreshold__(void)

{
  CVarSVTStreamingInstanceCleanupThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSVTStreamingInstanceCleanupThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingInstanceWindowSize'' @ 150401df0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingInstanceWindowSize__(void)

{
  CVarSVTStreamingInstanceWindowSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingInstanceWindowSize)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingLogVerbosity'' @ 150401e10

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingLogVerbosity__(void)

{
  CVarSVTStreamingLogVerbosity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingLogVerbosity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingMaxPendingRequests'' @ 150401e30

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingMaxPendingRequests__(void)

{
  CVarSVTStreamingMaxPendingRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingMaxPendingRequests)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingPrintMemoryStats'' @ 150401e50

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingPrintMemoryStats__(void)

{
  CVarSVTStreamingPrintMemoryStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingPrintMemoryStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingRequestMipBias'' @ 150401e70

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingRequestMipBias__(void)

{
  CVarSVTStreamingRequestMipBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingRequestMipBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingRequestSize'' @ 150401e90

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingRequestSize__(void)

{
  CVarSVTStreamingRequestSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingRequestSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingRequestSizeGranularity'' @ 150401eb0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingRequestSizeGranularity__(void)

{
  CVarSVTStreamingRequestSizeGranularity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSVTStreamingRequestSizeGranularity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingReservedResources'' @ 150401ed0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingReservedResources__(void)

{
  CVarSVTStreamingReservedResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSVTStreamingReservedResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSVTStreamingReservedResourcesMemoryLimit'' @ 150401ef0

void __cdecl _dynamic_atexit_destructor_for__CVarSVTStreamingReservedResourcesMemoryLimit__(void)

{
  CVarSVTStreamingReservedResourcesMemoryLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSVTStreamingReservedResourcesMemoryLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable'' @ 150401f10

void __cdecl
_dynamic_atexit_destructor_for__CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable__(void)

{
  CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSoundWaveProxyReaderSimulateSeekOnNonSeekable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSplineMeshFitToSourceMeshBounds'' @ 150401f30

void __cdecl _dynamic_atexit_destructor_for__CVarSplineMeshFitToSourceMeshBounds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSplineMeshFitToSourceMeshBounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStaticMeshDefaultMeshPaintTextureSupport'' @ 150401f50

void __cdecl _dynamic_atexit_destructor_for__CVarStaticMeshDefaultMeshPaintTextureSupport__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStaticMeshDefaultMeshPaintTextureSupport);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStaticMeshKeepMobileMinLODSettingOnDesktop'' @ 150401f70

void __cdecl _dynamic_atexit_destructor_for__CVarStaticMeshKeepMobileMinLODSettingOnDesktop__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStaticMeshKeepMobileMinLODSettingOnDesktop);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStaticMeshMinLodQualityLevel'' @ 150401f90

void __cdecl _dynamic_atexit_destructor_for__CVarStaticMeshMinLodQualityLevel__(void)

{
  CVarStaticMeshMinLodQualityLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStaticMeshMinLodQualityLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStaticMeshRayTracingProxies'' @ 150401fb0

void __cdecl _dynamic_atexit_destructor_for__CVarStaticMeshRayTracingProxies__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStaticMeshRayTracingProxies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStripDistanceFieldDataDuringLoad'' @ 150401fd0

void __cdecl _dynamic_atexit_destructor_for__CVarStripDistanceFieldDataDuringLoad__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStripDistanceFieldDataDuringLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStripMinLodDataDuringCooking'' @ 150401ff0

void __cdecl _dynamic_atexit_destructor_for__CVarStripMinLodDataDuringCooking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStripMinLodDataDuringCooking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSupportDepthOnlyIndexBuffers'' @ 150402010

void __cdecl _dynamic_atexit_destructor_for__CVarSupportDepthOnlyIndexBuffers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSupportDepthOnlyIndexBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSupportReversedIndexBuffers'' @ 150402030

void __cdecl _dynamic_atexit_destructor_for__CVarSupportReversedIndexBuffers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSupportReversedIndexBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 150402050

void __cdecl
`ASpotLight::ASpotLight'::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Lighting.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040205f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Lighting.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150402070

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

// `dynamic_atexit_destructor_for_'Desc'' @ 1504020a0

void __cdecl
```UE::SVT::FStreamingManager::AddInternal'::__l24::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504020a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504020c0

void __cdecl
```UE::SVT::FStreamingManager::BeginAsyncUpdate'::__l24::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504020c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504020e0

void __cdecl
```UE::SVT::FStreamingManager::EndAsyncUpdate'::__l24::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504020e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FSpeedTreeUniformParametersMetadataRegistration'' @ 150402100

void __cdecl _dynamic_atexit_destructor_for__FSpeedTreeUniformParametersMetadataRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_SVTStreaming'' @ 150402110

void __cdecl _dynamic_atexit_destructor_for__GPUStat_SVTStreaming__(void)

{
  GPUStat_SVTStreaming._104_4_ = 0;
  if (GPUStat_SVTStreaming._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_SVTStreaming._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_SVTStreaming.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GStreamingManager'' @ 150402150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UE::SVT::_dynamic_atexit_destructor_for__GStreamingManager__(void)

{
  GStreamingManager._0_8_ =
       &TGlobalResource<UE::SVT::FStreamingManager,1>::_vftable__for__FRenderResource__;
  GStreamingManager._32_8_ =
       &TGlobalResource<UE::SVT::FStreamingManager,1>::_vftable__for__UE__SVT__IStreamingManager__;
  FRenderResource::ReleaseResource((FRenderResource *)&GStreamingManager);
  FStreamingManager::~FStreamingManager((FStreamingManager *)&GStreamingManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogSparseVolumeTexture'' @ 1504021a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSparseVolumeTexture__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSparseVolumeTexture);
  return;
}

// `dynamic_atexit_destructor_for_'LogSparseVolumeTextureData'' @ 1504021c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSparseVolumeTextureData__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSparseVolumeTextureData);
  return;
}

// `dynamic_atexit_destructor_for_'LogSparseVolumeTextureStreamingManager'' @ 1504021e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSparseVolumeTextureStreamingManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSparseVolumeTextureStreamingManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogStaticMesh'' @ 150402200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStaticMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStaticMesh);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150402220

void __cdecl
`FSpeedTreeUniformParameters::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata(&::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150402240

void __cdecl
`FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150402260

void __cdecl
`FSparseVolumeTextureUpdatePageTableCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSparseVolumeTextureUpdatePageTableCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150402280

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
`FSparseVolumeTextureUpdateFromSparseBufferCS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 1504022a0

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
`FSparseVolumeTextureUpdatePageTableCS::GetStaticType'::__l2::
_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

